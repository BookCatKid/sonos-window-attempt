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
extern __declspec(dllimport) int _fdopen(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int ceil(...);
extern int createPropertyBag(...);
extern __declspec(dllimport) int fclose(...);
extern __declspec(dllimport) int ferror(...);
extern __declspec(dllimport) int fseek(...);
extern __declspec(dllimport) int ftell(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_10122560(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a9bd0(...);
extern int thunk_FUN_101a9c10(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101badc0(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_101ccf90(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101e6610(...);
extern int thunk_FUN_101e69d0(...);
extern int thunk_FUN_1023a9c0(...);
extern int thunk_FUN_1023ab10(...);
extern int thunk_FUN_10242b10(...);
extern int thunk_FUN_10352990(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_10371d90(...);
extern int thunk_FUN_10383910(...);
extern int thunk_FUN_103d5640(...);
extern int thunk_FUN_10405e20(...);
extern int thunk_FUN_1040bbc0(...);
extern int thunk_FUN_10475400(...);
extern int thunk_FUN_104885e0(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_10648010(...);
extern int thunk_FUN_107cc370(...);
extern int thunk_FUN_107cc5b0(...);
extern int thunk_FUN_10a23870(...);
extern int thunk_FUN_10bcc760(...);
extern int thunk_FUN_10bcd530(...);
extern int thunk_FUN_10bcd670(...);
extern int thunk_FUN_10bcda40(...);
extern int thunk_FUN_10bcdb00(...);
extern int thunk_FUN_10bceec0(...);
extern int thunk_FUN_10bcf040(...);
extern int thunk_FUN_10bcf810(...);
extern int thunk_FUN_10bcf950(...);
extern int thunk_FUN_10bcf9b0(...);
extern int thunk_FUN_10bcfa10(...);
extern int thunk_FUN_10bcfa70(...);
extern int thunk_FUN_10bcfad0(...);
extern int thunk_FUN_10bd4920(...);
extern int thunk_FUN_10bd5dc0(...);
extern int thunk_FUN_10bd82f0(...);
extern int thunk_FUN_10bda480(...);
extern int thunk_FUN_10bdac30(...);
extern int thunk_FUN_10bdaec0(...);
extern int thunk_FUN_10bdb150(...);
extern int thunk_FUN_10bdb3e0(...);
extern int thunk_FUN_10bdb670(...);
extern int thunk_FUN_10bdb900(...);
extern int thunk_FUN_10be03d0(...);
extern int thunk_FUN_10be0520(...);
extern int thunk_FUN_10bee260(...);
extern int thunk_FUN_10bf3c60(...);
extern int thunk_FUN_10bf3d70(...);
extern int thunk_FUN_10bf3f30(...);
extern int thunk_FUN_10bf4610(...);
extern int thunk_FUN_10bf4690(...);
extern int thunk_FUN_10bf4900(...);
extern int thunk_FUN_10bf54e0(...);
extern int thunk_FUN_10bf56b0(...);
extern int thunk_FUN_10bf5910(...);
extern int thunk_FUN_10bf5990(...);
extern int thunk_FUN_10bf5b40(...);
extern int thunk_FUN_10bf6280(...);
extern int thunk_FUN_10bf63a0(...);
extern int thunk_FUN_10bf6750(...);
extern int thunk_FUN_10bf6a10(...);
extern int thunk_FUN_10bf7320(...);
extern int thunk_FUN_10bf8930(...);
extern int thunk_FUN_10bf9680(...);
extern int thunk_FUN_10bf97e0(...);
extern int thunk_FUN_10bfa960(...);
extern int thunk_FUN_10bfb4f0(...);
extern int thunk_FUN_10bfb550(...);
extern int thunk_FUN_10bfb670(...);
extern int thunk_FUN_10bfbcf0(...);
extern int thunk_FUN_10bfbf40(...);
extern int thunk_FUN_10bfc6d0(...);
extern int thunk_FUN_10bfd620(...);
extern int thunk_FUN_10bfd810(...);
extern int thunk_FUN_10c029a0(...);
extern int thunk_FUN_10c944f0(...);
extern int thunk_FUN_10cedc10(...);
extern int thunk_FUN_10d87f10(...);
extern int thunk_FUN_111a1880(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11265090(...);
extern int thunk_FUN_11272130(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c2a0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148ae00(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11884800;
extern int DAT_118873a4;
extern int DAT_12126b84;
extern int DAT_121a5138;
extern int DAT_121a524c;
extern int DAT_121a5254;
extern int g_lSCObjCount;
extern int ghidra_vftable_EtagFileParser;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_SCAppRatingSettings;
extern int ghidra_vftable_SCICancellable;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCOpFactory;
extern int ghidra_vftable_SCServiceAppInteropManager;
extern int ghidra_vftable_SCUrlConnection;
extern int ghidra_vftable_SCUrlConnection_Callback;
extern int ghidra_vftable_SCUrlRequest;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int in_stack_00000028;
extern undefined1 LAB_10be6d7e[];
extern undefined1 LAB_10bee587[];
extern undefined1 LAB_10bf6344[];
extern undefined1 LAB_10bf635f[];
extern undefined1 LAB_10bf6464[];
extern undefined1 LAB_10bf647f[];
extern undefined1 LAB_10bfbdb4[];
extern undefined1 LAB_10bfbdcf[];
extern undefined1 LAB_10bfd7a9[];
extern undefined1 LAB_10bfda79[];
extern undefined1 LAB_10bfdbb0[];
extern undefined1 LAB_116c994d[];
extern undefined1 LAB_116c998d[];
extern undefined1 LAB_116c9a0d[];
extern undefined1 LAB_116c9a55[];
extern undefined1 LAB_116c9add[];
extern undefined1 LAB_116c9b6d[];
extern undefined1 LAB_116c9bad[];
extern undefined1 LAB_116c9d30[];
extern undefined1 LAB_116c9d60[];
extern undefined1 LAB_116c9d90[];
extern undefined1 LAB_116c9e6d[];
extern undefined1 LAB_116c9ead[];
extern undefined1 LAB_116c9eed[];
extern undefined1 LAB_116c9f2d[];
extern undefined1 LAB_116c9f6d[];
extern undefined1 LAB_116c9fad[];
extern undefined1 LAB_116c9fed[];
extern undefined1 LAB_116ca02d[];
extern undefined1 LAB_116ca06d[];
extern undefined1 LAB_116ca0ad[];
extern undefined1 LAB_116ca640[];
extern undefined1 LAB_116ca700[];
extern undefined1 LAB_116ca730[];
extern undefined1 LAB_116ca760[];
extern undefined1 LAB_116ca7f0[];
extern undefined1 LAB_116ca820[];
extern undefined1 LAB_116ca850[];
extern undefined1 LAB_116ca91d[];
extern undefined1 LAB_116ca9dd[];
extern undefined1 LAB_116caa25[];
extern undefined1 LAB_116caa65[];
extern undefined1 LAB_116caa9d[];
extern undefined1 LAB_116caadd[];
extern undefined1 LAB_116cab1d[];
extern undefined1 LAB_116cabe0[];
extern undefined1 LAB_116cac10[];
extern undefined1 LAB_116cac40[];
extern undefined1 LAB_116caf3d[];
extern undefined1 LAB_116caf7d[];
extern undefined1 LAB_116cb00d[];
extern undefined1 LAB_116cb04d[];
extern undefined1 LAB_116cb0dd[];
extern undefined1 LAB_116cb11d[];
extern undefined1 LAB_116cb5b5[];
extern undefined1 LAB_116cbbf5[];
extern undefined1 LAB_116cc14c[];
extern undefined1 LAB_116cc205[];
extern undefined1 LAB_116cc4a5[];
extern undefined1 LAB_116cc4e5[];
extern undefined1 LAB_116cc525[];
extern undefined1 LAB_116cc815[];
extern undefined1 LAB_116ccb65[];
extern undefined1 LAB_116cd5ad[];
extern undefined1 LAB_116cd91d[];
extern undefined1 LAB_116cd96d[];
extern undefined1 LAB_116cd9d3[];
extern undefined1 LAB_116cdcfd[];
extern undefined1 LAB_116cdd3d[];
extern undefined1 LAB_116ce7cd[];
extern undefined1 LAB_116ce80d[];
extern undefined1 LAB_116ce91b[];
extern undefined1 LAB_116ce96b[];
extern undefined1 LAB_116ce9bb[];
extern undefined1 LAB_116cea0b[];
extern undefined1 LAB_116cea63[];
extern undefined1 LAB_116ceb3b[];
extern undefined1 LAB_116ceb70[];
extern undefined1 LAB_116cebd0[];
extern undefined1 LAB_116cec00[];
extern undefined1 LAB_116cef4d[];
extern undefined1 LAB_116cf0e5[];
extern undefined1 LAB_116cf15d[];
extern undefined1 LAB_116cf22d[];
extern undefined1 LAB_116cf26d[];
extern undefined1 LAB_116cf2b5[];
extern undefined1 LAB_116cf3ed[];
extern undefined1 LAB_116cf47b[];
extern undefined1 LAB_116cf4cb[];
extern undefined1 LAB_116cf51b[];
extern undefined1 LAB_116cf720[];
extern undefined1 LAB_116cfafd[];
extern undefined1 LAB_116cfb3d[];
extern undefined1 LAB_116cfb7d[];
extern undefined1 LAB_116cfcfd[];
extern undefined1 LAB_116cfd3d[];
extern undefined1 LAB_116d0075[];
extern undefined1 LAB_116d00d5[];
extern undefined1 LAB_116d061d[];
extern undefined1 LAB_116d06e0[];
extern undefined1 LAB_116d0890[];
extern undefined1 LAB_116d0a50[];
extern undefined1 LAB_116d0ccd[];
extern undefined1 LAB_116d0d1d[];
extern undefined1 LAB_116d0d6d[];
extern undefined1 LAB_116d0dad[];
extern undefined1 LAB_116d0e2d[];
extern undefined1 LAB_116d0ead[];
extern undefined1 LAB_116d0eed[];
extern undefined1 LAB_116d0f2d[];
extern undefined1 LAB_116d0f6d[];
extern undefined1 LAB_116d0fad[];
extern undefined1 LAB_116d0fed[];
extern int *PTR_s_FirstVoiceZPAdded_12119d6c;
extern int *stack0x00000004;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *CHN;
typedef void *WARNING;
struct AppRating { char _pad; AppRating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DaysSinceSNF { char _pad; DaysSinceSNF(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct End { char _pad; End(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct For { char _pad; For(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NumOfSigEvents { char _pad; NumOfSigEvents(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Preparing { char _pad; Preparing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Reading { char _pad; Reading(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCMusicServer { char _pad; SCMusicServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCMusicServerData { char _pad; SCMusicServerData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCVoiceUtility { char _pad; SCVoiceUtility(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Service { char _pad; Service(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Success { char _pad; Success(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TotalBytes { char _pad; TotalBytes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; int * __thiscall FUN_10bd0c60(int *param_2,int *param_3); int * __thiscall FUN_10bd0d80(int *param_2,int *param_3); int * __thiscall FUN_10bd0fe0(int *param_2,int *param_3); int * __thiscall FUN_10bd10f0(int *param_2,int *param_3); void __thiscall FUN_10bd2e50(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_10bd3750(undefined4 param_2); undefined4 * __thiscall FUN_10bd37d0(undefined4 param_2); undefined4 * __thiscall FUN_10bd3850(undefined4 param_2); undefined4 * __thiscall FUN_10bd38d0(undefined4 param_2); undefined4 * __thiscall FUN_10bd3950(undefined4 param_2); undefined4 * __thiscall FUN_10bd39d0(undefined4 param_2); undefined4 * __thiscall FUN_10bd3a50(undefined4 param_2); undefined4 * __thiscall FUN_10bd3ad0(undefined4 param_2); undefined4 * __thiscall FUN_10bd3b50(undefined4 param_2); undefined4 * __thiscall FUN_10bd4430(void *param_2,int param_3); undefined4 * __thiscall FUN_10bd4a00(undefined4 param_2,undefined1 param_3); undefined4 * __thiscall FUN_10bd4aa0(undefined1 param_2); int __thiscall FUN_10bd7dd0(uint *param_2); int __thiscall FUN_10bd80e0(int *param_2); int __thiscall FUN_10bd81d0(int *param_2); int __thiscall FUN_10bd82f0(int *param_2); int __thiscall FUN_10bd8410(int *param_2); int __thiscall FUN_10bd8500(int *param_2); int __thiscall FUN_10bd85f0(int *param_2); int __thiscall FUN_10bd9020(byte param_2); int __thiscall FUN_10bd90b0(byte param_2); int __thiscall FUN_10bd9140(byte param_2); void __thiscall FUN_10bd97a0(int param_2,int param_3,int param_4); void __thiscall FUN_10bd9810(int param_2,int param_3,int param_4); void __thiscall FUN_10bd9880(int param_2,int param_3,int param_4); void __thiscall FUN_10bd9930(int param_2,int param_3,int param_4); void __thiscall FUN_10bd99f0(int param_2,int param_3,int param_4); void __thiscall FUN_10bd9ba0(uint param_2); void __thiscall FUN_10bd9cd0(int *param_2); void __thiscall FUN_10bd9d90(int *param_2); int __thiscall FUN_10bdc920(int param_2,int param_3,int param_4); void __thiscall FUN_10bdcba0(int param_2,int param_3,int param_4); void __thiscall FUN_10bdce20(int param_2,int param_3,int param_4); undefined4 __thiscall FUN_10be0260(int param_2); uint __thiscall FUN_10be03d0(int param_2); void __thiscall FUN_10be22f0(int *param_2,uint *param_3); void __thiscall FUN_10be2350(int *param_2,uint *param_3); void __thiscall FUN_10be2570(int *param_2,int *param_3); void __thiscall FUN_10be25d0(int *param_2,int *param_3); void __thiscall FUN_10be2630(int *param_2,int *param_3); void __thiscall FUN_10be2690(int *param_2,int *param_3); void __thiscall FUN_10be26f0(int *param_2,int *param_3); void __thiscall FUN_10be2750(int *param_2,int *param_3); void __thiscall FUN_10be27b0(int *param_2,int *param_3); void __thiscall FUN_10be2810(int *param_2,int *param_3); undefined4 * __thiscall FUN_10be5b80(undefined4 *param_2,void *param_3); int __thiscall FUN_10be6d30(int param_2); uint __thiscall FUN_10be8350(uint param_2,uint param_3); char __thiscall FUN_10be9340(int *param_2,int param_3); void __thiscall FUN_10bed460(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_10bed510(char param_2); int __thiscall FUN_10beebe0(int param_2); undefined4 * __thiscall FUN_10beec60(void); undefined4 * __thiscall FUN_10beed80(undefined4 param_2,int *param_3,undefined4 param_4,int *param_5); undefined4 * __thiscall FUN_10bef940(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10bf36c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4); undefined4 * __thiscall FUN_10bf3840(undefined4 param_2,undefined4 param_3); void __thiscall FUN_10bf3bc0(int *param_2,undefined4 param_3,uint param_4); void __thiscall FUN_10bf4710(int *param_2,undefined4 *param_3); void __thiscall FUN_10bf4770(int *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10bf4d50(undefined4 *param_2); undefined4 * __thiscall FUN_10bf4e20(undefined4 *param_2); undefined4 * __thiscall FUN_10bf51d0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10bf54e0(undefined4 param_2); void __thiscall FUN_10bf6280(uint param_2,undefined4 param_3); void __thiscall FUN_10bf63a0(uint param_2,undefined4 param_3); float __thiscall FUN_10bf65f0(int param_2); float __thiscall FUN_10bf66a0(int param_2); void __thiscall FUN_10bf6e80(int param_2); void __thiscall FUN_10bf6ef0(int param_2); void __thiscall FUN_10bf88b0(undefined4 param_2); undefined4 * __thiscall FUN_10bfa290(undefined4 param_2,undefined4 param_3,undefined4 *param_4); undefined4 * __thiscall FUN_10bfab70(undefined4 *param_2); void __thiscall FUN_10bfbcf0(uint param_2,undefined4 param_3); float __thiscall FUN_10bfbe90(int param_2); void __thiscall FUN_10bfc2e0(int param_2); void __thiscall FUN_10bfd6e0(int param_2); void __thiscall FUN_10bfd8e0(int param_2); void __thiscall FUN_10bfd9b0(int param_2); size_t __thiscall FUN_10bff9a0(uint param_2,void *param_3,size_t param_4); size_t __thiscall FUN_10bffb10(uint param_2,void *param_3,size_t param_4); undefined4 * __thiscall FUN_10bffc80(undefined4 *param_2,int *param_3); int * __thiscall FUN_10bffdd0(int *param_2); size_t __thiscall FUN_10c010a0(void *param_2,size_t param_3); size_t __thiscall FUN_10c01100(void *param_2,size_t param_3); void __thiscall FUN_10c01160(int *param_2); undefined4 * __thiscall FUN_10c01fe0(int *param_2); void __thiscall FUN_10c02910(int param_2,int param_3,int param_4); int __thiscall FUN_10c04000(undefined4 param_2,int *param_3); int __thiscall FUN_10c04130(undefined4 param_2,int *param_3); int __thiscall FUN_10c04260(undefined4 param_2,int *param_3); };
using namespace std;
undefined4 * FUN_10bd1410(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
int FUN_10bd1690(int param_1,int param_2,int param_3,undefined4 param_4);
undefined4 * FUN_10bd1730(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10bd2350(undefined4 param_1,int param_2);
void FUN_10bd23c0(undefined4 param_1,int param_2);
void FUN_10bd2430(undefined4 param_1,int param_2);
undefined4 * __fastcall FUN_10bd45f0(undefined4 *param_1);
void __fastcall FUN_10bd6200(int *param_1);
void __fastcall FUN_10bd6780(int param_1);
void __fastcall FUN_10bd6820(int param_1);
void __fastcall FUN_10bd68c0(int param_1);
void __fastcall FUN_10bd6d30(int param_1);
void __fastcall FUN_10bd6da0(int param_1);
void __fastcall FUN_10bd6e10(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10bd6e90(int *param_1);
void __fastcall FUN_10bd6f00(int *param_1);
void __fastcall FUN_10bd6fa0(int *param_1);
int * __fastcall FUN_10bd8da0(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_10bdc660(int *param_1);
void __fastcall FUN_10bdc6d0(int *param_1);
void __fastcall FUN_10bdc770(int *param_1);
undefined4 * __stdcall FUN_10bdc9d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10bdcc50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_10bdced0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void * FUN_10bddf60(uint param_1);
undefined1 __stdcall FUN_10be02f0(undefined4 param_1);
void __fastcall FUN_10be0440(int param_1);
undefined4 FUN_10be3ff0(void);
undefined4 __stdcall FUN_10be4050(undefined4 param_1,undefined4 param_2);
undefined4 __stdcall FUN_10be5fd0(undefined4 param_1,undefined4 param_2);
undefined1 FUN_10be6dc0(void);
undefined1 __stdcall FUN_10be6ea0(undefined4 param_1);
undefined1 __stdcall FUN_10be6f80(undefined4 param_1);
undefined1 __stdcall FUN_10be83f0(undefined4 param_1);
undefined4 __fastcall FUN_10be84b0(int *param_1);
bool FUN_10bea170(int param_1,uint param_2);
uint FUN_10becc60(void);
void __fastcall FUN_10bee550(int param_1);
undefined4 * __fastcall FUN_10befa20(undefined4 *param_1);
void __fastcall FUN_10bf09f0(int param_1);
undefined4 * FUN_10bf25e0(undefined4 *param_1,int param_2);
void FUN_10bf3e70(undefined4 param_1,int param_2);
void FUN_10bf4610(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10bf4690(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_10bf4c10(undefined4 *param_1);
undefined4 * __fastcall FUN_10bf5100(undefined4 *param_1);
void __fastcall FUN_10bf56b0(int param_1);
void __fastcall FUN_10bf5720(int param_1);
void __fastcall FUN_10bf57a0(int *param_1);
void __fastcall FUN_10bf5810(int *param_1);
void __fastcall FUN_10bf5910(int *param_1);
void __fastcall FUN_10bf5990(int *param_1);
void __fastcall FUN_10bf5b40(undefined4 *param_1);
void __fastcall FUN_10bf5c70(int *param_1);
void __fastcall FUN_10bf5d10(int *param_1);
void __fastcall FUN_10bf5da0(int *param_1);
void __fastcall FUN_10bf6f80(float *param_1);
void __fastcall FUN_10bf7030(float *param_1);
void __fastcall FUN_10bf7120(int *param_1);
void __fastcall FUN_10bf7190(int *param_1);
void __fastcall FUN_10bf7200(int *param_1);
void __fastcall FUN_10bf7980(int param_1);
void __fastcall FUN_10bf7a00(int *param_1);
void __fastcall FUN_10bf9200(int param_1);
void __fastcall FUN_10bf9410(int param_1);
void __stdcall FUN_10bf9680(char *param_1,undefined4 param_2);
void __stdcall FUN_10bf97e0(char *param_1,undefined4 param_2);
void __fastcall FUN_10bf9940(int param_1);
void FUN_10bfa960(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_10bfaa60(undefined4 *param_1);
undefined4 * __fastcall FUN_10bfad30(undefined4 *param_1);
void __fastcall FUN_10bfb3d0(int param_1);
void __fastcall FUN_10bfb440(int *param_1);
void __fastcall FUN_10bfb4f0(int *param_1);
void __fastcall FUN_10bfb550(int *param_1);
void __fastcall FUN_10bfc360(float *param_1);
void __fastcall FUN_10bfc430(int *param_1);
void __fastcall FUN_10bfc4a0(int *param_1);
void __fastcall FUN_10bfc6d0(int param_1);
void __fastcall FUN_10bfc760(int *param_1);
void __fastcall FUN_10bfd810(int param_1);
void __fastcall FUN_10bfe120(int param_1);
void __fastcall FUN_10bfe200(int param_1);
void __fastcall FUN_10bff8e0(int param_1);
void __fastcall FUN_10bff940(int param_1);
bool __fastcall FUN_10c00b20(int param_1);
bool __fastcall FUN_10c00ba0(int param_1);
int __fastcall FUN_10c011d0(int param_1);
int __fastcall FUN_10c012b0(int param_1);
void __fastcall FUN_10c02230(int *param_1);
void __fastcall FUN_10c02aa0(int *param_1);
bool __fastcall FUN_10c03180(int *param_1);
void __fastcall FUN_10c044d0(int *param_1);
void FUN_10c04660(undefined4 *param_1,int *param_2);
undefined4 * FUN_10c047f0(undefined4 *param_1);
undefined4 * FUN_10c04880(undefined4 *param_1);
undefined4 * FUN_10c04910(undefined4 *param_1);
undefined4 * FUN_10c049a0(undefined4 *param_1);
undefined4 * FUN_10c04a30(undefined4 *param_1);
undefined4 * FUN_10c04ac0(undefined4 *param_1);
// Reference entry 10bd0c60; body size 221 bytes.
#line 1 "ENTRY_10bd0c60"

int * __thiscall Recovered_Bulk::FUN_10bd0c60(int *param_2,int *param_3)
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

  thunk_FUN_10bcfa70(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = (undefined4)(*param_3);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10bdb3e0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10bd0d80; body size 221 bytes.
#line 1 "ENTRY_10bd0d80"

int * __thiscall Recovered_Bulk::FUN_10bd0d80(int *param_2,int *param_3)
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

  thunk_FUN_10bcfad0(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x9249249) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = (undefined4)(*param_3);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10bdb670(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10bd0fe0; body size 214 bytes.
#line 1 "ENTRY_10bd0fe0"

int * __thiscall Recovered_Bulk::FUN_10bd0fe0(int *param_2,int *param_3)
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

  thunk_FUN_10bcf950(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
    *param_2 = (int)(local_1c);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = (undefined4)(*param_3);
    puVar3[5] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10bdac30(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10bd10f0; body size 253 bytes.
#line 1 "ENTRY_10bd10f0"

int * __thiscall Recovered_Bulk::FUN_10bd10f0(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (undefined4 *)(param_1);
  thunk_FUN_10bcf9b0(&local_28,param_3);
  if ((*(char *)(local_20 + 0xd) == '\0') && (*(int *)(local_20 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_20);
    *(undefined1 *)(param_2 + 1) = 0;

    return (int *)(param_2);
  }
  if (param_1[1] != 0x5555555) {
    uVar1 = (undefined4)(*param_1);

    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x30));

    puVar3[4] = (undefined4)(*param_3);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    puVar3[7] = (undefined4)(0);
    puVar3[8] = (undefined4)(0);
    *(undefined8 *)(puVar3 + 9) = 0;
    puVar3[0xb] = (undefined4)(0);
    local_18 = (undefined4 *)(puVar3);
    thunk_FUN_10bd4920();
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10bdaec0(local_28,local_24,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;

    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);

 } catch (...) { }
}


// Reference entry 10bd1410; body size 124 bytes.
#line 1 "ENTRY_10bd1410"

undefined4 * FUN_10bd1410(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 10bd1690; body size 127 bytes.
#line 1 "ENTRY_10bd1690"

int FUN_10bd1690(int param_1,int param_2,int param_3,undefined4 param_4)

{
 try {
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x1c) {
    thunk_FUN_10bd5dc0(param_1);
    param_3 = (int)(param_3 + 0x1c);

  }
  thunk_FUN_10352990(param_3,param_3,param_4,uVar2);

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 10bd1730; body size 124 bytes.
#line 1 "ENTRY_10bd1730"

undefined4 * FUN_10bd1730(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 10bd2350; body size 85 bytes.
#line 1 "ENTRY_10bd2350"

void FUN_10bd2350(undefined4 param_1,int param_2)

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


// Reference entry 10bd23c0; body size 85 bytes.
#line 1 "ENTRY_10bd23c0"

void FUN_10bd23c0(undefined4 param_1,int param_2)

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


// Reference entry 10bd2430; body size 85 bytes.
#line 1 "ENTRY_10bd2430"

void FUN_10bd2430(undefined4 param_1,int param_2)

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


// Reference entry 10bd2e50; body size 232 bytes.
#line 1 "ENTRY_10bd2e50"

void __thiscall Recovered_Bulk::FUN_10bd2e50(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  bVar6 = (bool)(false);
  puVar7 = (undefined4 *)((undefined4 *)puVar1[1]);
  puVar4 = (undefined4 *)(puVar1);
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar7);
    do {
      puVar7 = (undefined4 *)(puVar2);
      if ((int)puVar7[4] < *param_3) {
        puVar2 = (undefined4 *)((undefined4 *)puVar7[2]);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)*puVar7);
        puVar4 = (undefined4 *)(puVar7);
      }
      bVar6 = (bool)(*param_3 <= (int)puVar7[4]);
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  if ((*(char *)((int)puVar4 + 0xd) == '\0') && ((int)puVar4[4] <= *param_3)) {
    uVar5 = (undefined1)(0);
  }
  else {
    if (param_1[1] == 0xccccccc) {
                    
      thunk_FUN_101d7220(DAT_12126b84 );
    }

    piVar3 = (int *)(operator_new(0x14));
    piVar3[4] = (int)(*param_3);
    *piVar3 = (int)((int)puVar1);
    piVar3[1] = (int)((int)puVar1);
    piVar3[2] = (int)((int)puVar1);
    *(undefined2 *)(piVar3 + 3) = 0;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10bdb900(puVar7,bVar6,piVar3));
    uVar5 = (undefined1)(1);
  }
  *param_2 = (undefined4)(puVar4);
  *(undefined1 *)(param_2 + 1) = uVar5;

  return;

 } catch (...) { }
}


// Reference entry 10bd3750; body size 93 bytes.
#line 1 "ENTRY_10bd3750"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd3750(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bd37d0; body size 93 bytes.
#line 1 "ENTRY_10bd37d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd37d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bd3850; body size 93 bytes.
#line 1 "ENTRY_10bd3850"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd3850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bd38d0; body size 93 bytes.
#line 1 "ENTRY_10bd38d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd38d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bd3950; body size 93 bytes.
#line 1 "ENTRY_10bd3950"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd3950(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bd39d0; body size 93 bytes.
#line 1 "ENTRY_10bd39d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd39d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bd3a50; body size 93 bytes.
#line 1 "ENTRY_10bd3a50"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd3a50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bd3ad0; body size 93 bytes.
#line 1 "ENTRY_10bd3ad0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd3ad0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bd3b50; body size 93 bytes.
#line 1 "ENTRY_10bd3b50"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd3b50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  param_1[1] = (undefined4)(pvVar1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bd4430; body size 120 bytes.
#line 1 "ENTRY_10bd4430"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd4430(void *param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Dst;
  uint uVar1;
  
  uVar1 = (uint)(param_3 - (int)param_2 >> 2);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  if (3 < (uint)(param_3 - (int)param_2)) {
    if (0x3fffffff < uVar1) {
                    
      thunk_FUN_101a9bd0();
    }
    _Dst = (void *)((void *)thunk_FUN_101a9c10(uVar1));
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)((void *)((int)_Dst + uVar1 * 4));
    memmove(_Dst,param_2,param_3 - (int)param_2);
    param_1[1] = (undefined4)((void *)((int)_Dst + uVar1 * 4));
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bd45f0; body size 67 bytes.
#line 1 "ENTRY_10bd45f0"

undefined4 * __fastcall FUN_10bd45f0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_EtagFileParser);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  param_1[1] = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4a00; body size 121 bytes.
#line 1 "ENTRY_10bd4a00"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd4a00(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[9] = (undefined4)(param_2);
  *(undefined1 *)(param_1 + 10) = param_3;
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4aa0; body size 121 bytes.
#line 1 "ENTRY_10bd4aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd4aa0(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  *(undefined1 *)(param_1 + 10) = param_2;
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(1);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bd6200; body size 68 bytes.
#line 1 "ENTRY_10bd6200"

void __fastcall FUN_10bd6200(int *param_1)

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


// Reference entry 10bd6780; body size 111 bytes.
#line 1 "ENTRY_10bd6780"

void __fastcall FUN_10bd6780(int param_1)

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


// Reference entry 10bd6820; body size 111 bytes.
#line 1 "ENTRY_10bd6820"

void __fastcall FUN_10bd6820(int param_1)

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


// Reference entry 10bd68c0; body size 111 bytes.
#line 1 "ENTRY_10bd68c0"

void __fastcall FUN_10bd68c0(int param_1)

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


// Reference entry 10bd6d30; body size 84 bytes.
#line 1 "ENTRY_10bd6d30"

void __fastcall FUN_10bd6d30(int param_1)

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


// Reference entry 10bd6da0; body size 84 bytes.
#line 1 "ENTRY_10bd6da0"

void __fastcall FUN_10bd6da0(int param_1)

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


// Reference entry 10bd6e10; body size 84 bytes.
#line 1 "ENTRY_10bd6e10"

void __fastcall FUN_10bd6e10(int param_1)

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


// Reference entry 10bd6e90; body size 81 bytes.
#line 1 "ENTRY_10bd6e90"

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

void __fastcall FID_conflict__Tidy_10bd6e90(int *param_1)

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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10bd6f00; body size 117 bytes.
#line 1 "ENTRY_10bd6f00"

void __fastcall FUN_10bd6f00(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10bcda40(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0xc) * 0xc);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10bd6fa0; body size 96 bytes.
#line 1 "ENTRY_10bd6fa0"

void __fastcall FUN_10bd6fa0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10bcdb00(*param_1,param_1[1],param_1);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10bd7dd0; body size 188 bytes.
#line 1 "ENTRY_10bd7dd0"

int __thiscall Recovered_Bulk::FUN_10bd7dd0(uint *param_2)
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

  thunk_FUN_10bcf810(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(uint *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10bda480(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10bd80e0; body size 181 bytes.
#line 1 "ENTRY_10bd80e0"

int __thiscall Recovered_Bulk::FUN_10bd80e0(int *param_2)
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

  thunk_FUN_10bcf950(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0xaaaaaaa) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x18));
    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10bdac30(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10bd81d0; body size 219 bytes.
#line 1 "ENTRY_10bd81d0"

int __thiscall Recovered_Bulk::FUN_10bd81d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (undefined4 *)(param_1);
  thunk_FUN_10bcf9b0(&local_28,param_2);
  if ((*(char *)(local_20 + 0xd) != '\0') || (*param_2 < *(int *)(local_20 + 0x10))) {
    if (param_1[1] == 0x5555555) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);

    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x30));

    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    puVar3[7] = (undefined4)(0);
    puVar3[8] = (undefined4)(0);
    *(undefined8 *)(puVar3 + 9) = 0;
    puVar3[0xb] = (undefined4)(0);
    local_18 = (undefined4 *)(puVar3);
    thunk_FUN_10bd4920();
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    local_20 = (int)(thunk_FUN_10bdaec0(local_28,local_24,puVar3));
  }

  return (int)(local_20 + 0x14);

 } catch (...) { }
}


// Reference entry 10bd82f0; body size 219 bytes.
#line 1 "ENTRY_10bd82f0"

int __thiscall Recovered_Bulk::FUN_10bd82f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  local_14 = (undefined4 *)(param_1);
  thunk_FUN_10bcf9b0(&local_28,param_2);
  if ((*(char *)(local_20 + 0xd) != '\0') || (*param_2 < *(int *)(local_20 + 0x10))) {
    if (param_1[1] == 0x5555555) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);

    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x30));

    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    puVar3[7] = (undefined4)(0);
    puVar3[8] = (undefined4)(0);
    *(undefined8 *)(puVar3 + 9) = 0;
    puVar3[0xb] = (undefined4)(0);
    local_18 = (undefined4 *)(puVar3);
    thunk_FUN_10bd4920();
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    local_20 = (int)(thunk_FUN_10bdaec0(local_28,local_24,puVar3));
  }

  return (int)(local_20 + 0x14);

 } catch (...) { }
}


// Reference entry 10bd8410; body size 188 bytes.
#line 1 "ENTRY_10bd8410"

int __thiscall Recovered_Bulk::FUN_10bd8410(int *param_2)
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

  thunk_FUN_10bcfa10(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10bdb150(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10bd8500; body size 188 bytes.
#line 1 "ENTRY_10bd8500"

int __thiscall Recovered_Bulk::FUN_10bd8500(int *param_2)
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

  thunk_FUN_10bcfa70(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10bdb3e0(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10bd85f0; body size 188 bytes.
#line 1 "ENTRY_10bd85f0"

int __thiscall Recovered_Bulk::FUN_10bd85f0(int *param_2)
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

  thunk_FUN_10bcfad0(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
    if (param_1[1] == 0x9249249) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);


    local_18 = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x1c));
    puVar3[4] = (undefined4)(*param_2);
    puVar3[5] = (undefined4)(0);
    puVar3[6] = (undefined4)(0);
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = (undefined4)(uVar1);
    puVar3[2] = (undefined4)(uVar1);
    *(undefined2 *)(puVar3 + 3) = 0;
    local_1c = (int)(thunk_FUN_10bdb670(local_24,local_20,puVar3));
  }

  return (int)(local_1c + 0x14);

 } catch (...) { }
}


// Reference entry 10bd8da0; body size 116 bytes.
#line 1 "ENTRY_10bd8da0"

int * __fastcall FUN_10bd8da0(int *param_1)

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


// Reference entry 10bd9020; body size 107 bytes.
#line 1 "ENTRY_10bd9020"

int __thiscall Recovered_Bulk::FUN_10bd9020(byte param_2)
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


// Reference entry 10bd90b0; body size 107 bytes.
#line 1 "ENTRY_10bd90b0"

int __thiscall Recovered_Bulk::FUN_10bd90b0(byte param_2)
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


// Reference entry 10bd9140; body size 107 bytes.
#line 1 "ENTRY_10bd9140"

int __thiscall Recovered_Bulk::FUN_10bd9140(byte param_2)
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


// Reference entry 10bd97a0; body size 89 bytes.
#line 1 "ENTRY_10bd97a0"

void __thiscall Recovered_Bulk::FUN_10bd97a0(int param_2,int param_3,int param_4)
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
  param_1[1] = (int)(param_2 + param_3 * 4);
  param_1[2] = (int)(param_2 + param_4 * 4);
  return;
}


// Reference entry 10bd9810; body size 89 bytes.
#line 1 "ENTRY_10bd9810"

void __thiscall Recovered_Bulk::FUN_10bd9810(int param_2,int param_3,int param_4)
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
  param_1[1] = (int)(param_2 + param_3 * 4);
  param_1[2] = (int)(param_2 + param_4 * 4);
  return;
}


// Reference entry 10bd9880; body size 131 bytes.
#line 1 "ENTRY_10bd9880"

void __thiscall Recovered_Bulk::FUN_10bd9880(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10bcda40(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0xc) * 0xc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
  }
  *param_1 = (int)(param_2);
  param_1[1] = (int)(param_2 + param_3 * 0xc);
  param_1[2] = (int)(param_2 + param_4 * 0xc);
  return;
}


// Reference entry 10bd9930; body size 152 bytes.
#line 1 "ENTRY_10bd9930"

void __thiscall Recovered_Bulk::FUN_10bd9930(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10352990(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0x1c) * 0x1c);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar2) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar2);
  }
  *param_1 = (int)(param_2);
  param_1[1] = (int)(param_2 + param_3 * 0x1c);
  param_1[2] = (int)(param_2 + param_4 * 0x1c);
  return;
}


// Reference entry 10bd99f0; body size 104 bytes.
#line 1 "ENTRY_10bd99f0"

void __thiscall Recovered_Bulk::FUN_10bd99f0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10bcdb00(*param_1,param_1[1],param_1);
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
  return;
}


// Reference entry 10bd9ba0; body size 144 bytes.
#line 1 "ENTRY_10bd9ba0"

void __thiscall Recovered_Bulk::FUN_10bd9ba0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_104885e0();
  }
  iVar1 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar1 >> 2);
  if (0x3fffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = (uint)(0x3fffffff);
  }
  else {
    uVar4 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar4 < param_2) {
      uVar4 = (uint)(param_2);
    }
  }
  if (iVar1 != 0) {
    uVar3 = (uint)(uVar3 * 4);
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
  thunk_FUN_10a23870(uVar4);
  return;
}


// Reference entry 10bd9cd0; body size 143 bytes.
#line 1 "ENTRY_10bd9cd0"

void __thiscall Recovered_Bulk::FUN_10bd9cd0(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar2 = (int)(*param_1);
  thunk_FUN_10bceec0(param_1,*(undefined4 *)(iVar2 + 4));
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  param_1[1] = (int)(0);
  uVar7 = (undefined4)(thunk_FUN_10bcd530(*(undefined4 *)(*param_2 + 4),*param_1,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar7;
  piVar3 = (int *)((int *)*param_1);
  param_1[1] = (int)(param_2[1]);
  piVar4 = (int *)((int *)piVar3[1]);
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)((int)piVar3);
    *(int *)(*param_1 + 8) = *param_1;
    return;
  }
  cVar1 = (char)(*(char *)(*piVar4 + 0xd));
  piVar6 = (int *)((int *)*piVar4);
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*piVar6 + 0xd));
    piVar4 = (int *)(piVar6);
    piVar6 = (int *)((int *)*piVar6);
  }
  *piVar3 = (int)((int)piVar4);
  iVar2 = (int)(*(int *)(*param_1 + 4));
  iVar5 = (int)(*(int *)(iVar2 + 8));
  cVar1 = (char)(*(char *)(iVar5 + 0xd));
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
    iVar2 = (int)(iVar5);
    iVar5 = (int)(*(int *)(iVar5 + 8));
  }
  *(int *)(*param_1 + 8) = iVar2;
  return;
}


// Reference entry 10bd9d90; body size 143 bytes.
#line 1 "ENTRY_10bd9d90"

void __thiscall Recovered_Bulk::FUN_10bd9d90(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar2 = (int)(*param_1);
  thunk_FUN_10bcf040(param_1,*(undefined4 *)(iVar2 + 4));
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)iVar2 = (int)(iVar2);
  *(int *)(iVar2 + 8) = iVar2;
  param_1[1] = (int)(0);
  uVar7 = (undefined4)(thunk_FUN_10bcd670(*(undefined4 *)(*param_2 + 4),*param_1,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar7;
  piVar3 = (int *)((int *)*param_1);
  param_1[1] = (int)(param_2[1]);
  piVar4 = (int *)((int *)piVar3[1]);
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)((int)piVar3);
    *(int *)(*param_1 + 8) = *param_1;
    return;
  }
  cVar1 = (char)(*(char *)(*piVar4 + 0xd));
  piVar6 = (int *)((int *)*piVar4);
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*piVar6 + 0xd));
    piVar4 = (int *)(piVar6);
    piVar6 = (int *)((int *)*piVar6);
  }
  *piVar3 = (int)((int)piVar4);
  iVar2 = (int)(*(int *)(*param_1 + 4));
  iVar5 = (int)(*(int *)(iVar2 + 8));
  cVar1 = (char)(*(char *)(iVar5 + 0xd));
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar5 + 8) + 0xd));
    iVar2 = (int)(iVar5);
    iVar5 = (int)(*(int *)(iVar5 + 8));
  }
  *(int *)(*param_1 + 8) = iVar2;
  return;
}


// Reference entry 10bdc660; body size 81 bytes.
#line 1 "ENTRY_10bdc660"

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

void __fastcall FID_conflict__Tidy_10bdc660(int *param_1)

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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10bdc6d0; body size 117 bytes.
#line 1 "ENTRY_10bdc6d0"

void __fastcall FUN_10bdc6d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10bcda40(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
    uVar2 = (uint)(((param_1[2] - iVar1) / 0xc) * 0xc);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10bdc770; body size 96 bytes.
#line 1 "ENTRY_10bdc770"

void __fastcall FUN_10bdc770(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10bcdb00(*param_1,param_1[1],param_1);
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
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  return;
}


// Reference entry 10bdc920; body size 137 bytes.
#line 1 "ENTRY_10bdc920"

int __thiscall Recovered_Bulk::FUN_10bdc920(int param_2,int param_3,int param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_2 != param_3); param_2 = param_2 + 0x1c) {
    thunk_FUN_10bd5dc0(param_2);
    param_4 = (int)(param_4 + 0x1c);

  }
  thunk_FUN_10352990(param_4,param_4,param_1,uVar2);

  return (int)(param_4);

 } catch (...) { }
}


// Reference entry 10bdc9d0; body size 123 bytes.
#line 1 "ENTRY_10bdc9d0"

undefined4 * __stdcall FUN_10bdc9d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 10bdcba0; body size 135 bytes.
#line 1 "ENTRY_10bdcba0"

void __thiscall Recovered_Bulk::FUN_10bdcba0(int param_2,int param_3,int param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_2 != param_3); param_2 = param_2 + 0x1c) {
    thunk_FUN_10475400(param_2);
    param_4 = (int)(param_4 + 0x1c);

  }
  thunk_FUN_10352990(param_4,param_4,param_1,uVar2);

  return;

 } catch (...) { }
}


// Reference entry 10bdcc50; body size 121 bytes.
#line 1 "ENTRY_10bdcc50"

void FUN_10bdcc50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return;

 } catch (...) { }
}


// Reference entry 10bdce20; body size 135 bytes.
#line 1 "ENTRY_10bdce20"

void __thiscall Recovered_Bulk::FUN_10bdce20(int param_2,int param_3,int param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_2 != param_3); param_2 = param_2 + 0x1c) {
    thunk_FUN_10475400(param_2);
    param_4 = (int)(param_4 + 0x1c);

  }
  thunk_FUN_10352990(param_4,param_4,param_1,uVar2);

  return;

 } catch (...) { }
}


// Reference entry 10bdced0; body size 121 bytes.
#line 1 "ENTRY_10bdced0"

void __stdcall FUN_10bdced0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    param_3 = (undefined4 *)(param_3 + 2);

  }

  return;

 } catch (...) { }
}


// Reference entry 10bddf60; body size 87 bytes.
#line 1 "ENTRY_10bddf60"

void * FUN_10bddf60(uint param_1)

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


// Reference entry 10be0260; body size 113 bytes.
#line 1 "ENTRY_10be0260"

undefined4 __thiscall Recovered_Bulk::FUN_10be0260(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  pcVar3 = (char *)((char *)*param_1);
  uVar4 = (uint)(0);
  iVar1 = (int)(param_1[1] - (int)pcVar3 >> 0x1f);
  iVar2 = (int)((param_1[1] - (int)pcVar3) / 0x1c + iVar1);
  if (iVar2 != iVar1) {
    do {
      if ((((param_2 != 2) || (pcVar3[7] == '\0')) && (pcVar3[3] != '\0')) && (pcVar3[6] != '\0')) {
        if (param_2 == 3) {
          bVar5 = (bool)(pcVar3[1] == '\0');
        }
        else if (param_2 == 1) {
          bVar5 = (bool)(*pcVar3 == '\0');
        }
        else {
          if (param_2 != 2) {
            return (undefined4)(1);
          }
          bVar5 = (bool)(pcVar3[2] == '\0');
        }
        if (bVar5) {
          return (undefined4)(1);
        }
      }
      uVar4 = (uint)(uVar4 + 1);
      pcVar3 = (char *)(pcVar3 + 0x1c);
    } while (uVar4 < (uint)(iVar2 - iVar1));
  }
  return (undefined4)(0);
}


// Reference entry 10be02f0; body size 174 bytes.
#line 1 "ENTRY_10be02f0"

undefined1 __stdcall FUN_10be02f0(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  SCLibrary *this_;
  int *piVar4;
  int **ppiVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar5,uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar2 = (undefined1)(0);
  }
  else {
    uVar2 = (undefined1)(thunk_FUN_10371d90(param_1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10be03d0; body size 83 bytes.
#line 1 "ENTRY_10be03d0"

uint __thiscall Recovered_Bulk::FUN_10be03d0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)(0);
  iVar3 = (int)(param_1[1] - *param_1);
  pcVar2 = (char *)((char *)(iVar3 * -0x6db6db6d));
  iVar1 = (int)(iVar3 >> 0x1f);
  iVar3 = (int)(iVar3 / 0x1c + iVar1);
  if (iVar3 != iVar1) {
    pcVar2 = (char *)((char *)(*param_1 + 3));
    do {
      if ((((param_2 != 2) || (pcVar2[4] == '\0')) && (*pcVar2 != '\0')) && (pcVar2[3] != '\0')) {
        return (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(1)));
      }
      uVar4 = (uint)(uVar4 + 1);
      pcVar2 = (char *)(pcVar2 + 0x1c);
    } while (uVar4 < (uint)(iVar3 - iVar1));
  }
  return (uint)((uint)pcVar2 & 0xffffff00);
}


// Reference entry 10be0440; body size 66 bytes.
#line 1 "ENTRY_10be0440"

void __fastcall FUN_10be0440(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x4c));
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x50));
  for (puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x4c)); (undefined4 *)(puVar4) != puVar2; puVar4 = puVar4 + 2) {
    cVar3 = (char)((**(code **)(*(int *)*puVar4 + 0x1c))());
    if (cVar3 != '\0') {
      (**(code **)(*(int *)*puVar4 + 0x18))();
    }
  }
  thunk_FUN_10bcdb00(*puVar1,*(undefined4 *)(param_1 + 0x50),puVar1);
  *(undefined4 *)(param_1 + 0x50) = *puVar1;
  return;
}


// Reference entry 10be22f0; body size 69 bytes.
#line 1 "ENTRY_10be22f0"

void __thiscall Recovered_Bulk::FUN_10be22f0(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf810(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be2350; body size 69 bytes.
#line 1 "ENTRY_10be2350"

void __thiscall Recovered_Bulk::FUN_10be2350(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf810(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be2570; body size 69 bytes.
#line 1 "ENTRY_10be2570"

void __thiscall Recovered_Bulk::FUN_10be2570(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf950(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be25d0; body size 69 bytes.
#line 1 "ENTRY_10be25d0"

void __thiscall Recovered_Bulk::FUN_10be25d0(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf9b0(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be2630; body size 69 bytes.
#line 1 "ENTRY_10be2630"

void __thiscall Recovered_Bulk::FUN_10be2630(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcfa10(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be2690; body size 69 bytes.
#line 1 "ENTRY_10be2690"

void __thiscall Recovered_Bulk::FUN_10be2690(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcfa10(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be26f0; body size 69 bytes.
#line 1 "ENTRY_10be26f0"

void __thiscall Recovered_Bulk::FUN_10be26f0(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcfa70(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be2750; body size 69 bytes.
#line 1 "ENTRY_10be2750"

void __thiscall Recovered_Bulk::FUN_10be2750(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcfa70(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be27b0; body size 69 bytes.
#line 1 "ENTRY_10be27b0"

void __thiscall Recovered_Bulk::FUN_10be27b0(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcfad0(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be2810; body size 69 bytes.
#line 1 "ENTRY_10be2810"

void __thiscall Recovered_Bulk::FUN_10be2810(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcfad0(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 10be3ff0; body size 71 bytes.
#line 1 "ENTRY_10be3ff0"

undefined4 FUN_10be3ff0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_8 [8];
  
  pcVar2 = (char *)((char *)thunk_FUN_11265090(0x35,&DAT_1186d2ee));
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    cVar1 = (char)(thunk_FUN_1145c2a0(pcVar2,local_8));
    if (cVar1 != '\0') {
      uVar3 = (undefined4)(thunk_FUN_1148ae00());
      return (undefined4)(uVar3);
    }
  }
  return (undefined4)(0x15180);
}


// Reference entry 10be4050; body size 150 bytes.
#line 1 "ENTRY_10be4050"

undefined4 __stdcall FUN_10be4050(undefined4 param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar3 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar2 + 0x4c) + 0xe8) + 4))(&local_14,10,uVar1));

  thunk_FUN_10bcc760(uVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*local_18 + 0x1c))(param_1,param_2);

  (**(code **)(*local_18 + 8))();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10be5b80; body size 271 bytes.
#line 1 "ENTRY_10be5b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10be5b80(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = (int)((int)param_3);


  uVar2 = (uint)(DAT_12126b84);

  if ((param_3 == (void *)0x1) || (param_3 == (void *)0x3)) {
    thunk_FUN_10bcfa10(local_1c,&param_3);
    if ((*(char *)((int)local_14 + 0xd) != '\0') ||
       (piVar3 = local_14, iVar1 < *(int *)((int)local_14 + 0x10))) {
      piVar3 = (int *)(*(int **)(param_1 + 0x34));
    }
    if (piVar3 != (int *)*(int *)(param_1 + 0x34)) {
      param_3 = (void *)(operator_new(0x10));

      if (param_3 == (void *)0x0) {
        piVar3 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)thunk_FUN_103d5640(*(undefined4 *)((int)piVar3 + 0x14)));
      }
      piVar4 = (int *)((int *)0x0);

      local_14 = (int *)((int *)0x0);
      local_18 = (int *)(piVar3);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar2));
        local_14 = (int *)(piVar4);
        (**(code **)(*piVar4 + 4))();
      }

      *param_2 = (undefined4)(piVar3);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }

      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }

      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(0);

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10be5fd0; body size 150 bytes.
#line 1 "ENTRY_10be5fd0"

undefined4 __stdcall FUN_10be5fd0(undefined4 param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar3 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar2 + 0x4c) + 0xe8) + 4))(&local_14,10,uVar1));

  thunk_FUN_10bcc760(uVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*local_18 + 0x34))(param_1,param_2);

  (**(code **)(*local_18 + 8))();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10be6d30; body size 104 bytes.
#line 1 "ENTRY_10be6d30"

int __thiscall Recovered_Bulk::FUN_10be6d30(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  uint3 uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    param_2 = (int)(param_1[3]);
  }
  pcVar3 = (char *)((char *)*param_1);
  uVar4 = (uint)(0);
  uVar1 = (uint)((param_1[1] - (int)pcVar3) / 0x1c);
  uVar2 = (uint3)((uint3)(uVar1 >> 8));
  if (uVar1 != 0) {
    do {
      if (param_2 == 3) {
        bVar5 = (bool)(pcVar3[1] == '\0');
LAB_10be6d7e:
        if (!bVar5) {
          return (int)(((uint)(uVar2) << 8 | (uint)(1)));
        }
      }
      else {
        if (param_2 == 1) {
          bVar5 = (bool)(*pcVar3 == '\0');
          goto LAB_10be6d7e;
        }
        if (param_2 == 2) {
          bVar5 = (bool)(pcVar3[2] == '\0');
          goto LAB_10be6d7e;
        }
      }
      uVar4 = (uint)(uVar4 + 1);
      pcVar3 = (char *)(pcVar3 + 0x1c);
    } while (uVar4 < uVar1);
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10be6dc0; body size 169 bytes.
#line 1 "ENTRY_10be6dc0"

undefined1 FUN_10be6dc0(void)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  SCLibrary *this_;
  int *piVar4;
  int **ppiVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar5,uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar2 = (undefined1)(0);
  }
  else {
    uVar2 = (undefined1)(thunk_FUN_10383910());
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10be6ea0; body size 179 bytes.
#line 1 "ENTRY_10be6ea0"

undefined1 __stdcall FUN_10be6ea0(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  SCLibrary *this_;
  int *piVar4;
  int **ppiVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar5,uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar2 = (undefined1)(0);
  }
  else {
    uVar2 = (undefined1)((**(code **)(*piVar1 + 0x200))(param_1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10be6f80; body size 179 bytes.
#line 1 "ENTRY_10be6f80"

undefined1 __stdcall FUN_10be6f80(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  SCLibrary *this_;
  int *piVar4;
  int **ppiVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(ppiVar5,uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  if (piVar1 == (int *)0x0) {
    uVar2 = (undefined1)(0);
  }
  else {
    uVar2 = (undefined1)((**(code **)(*piVar1 + 0x204))(param_1));
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 10be8350; body size 124 bytes.
#line 1 "ENTRY_10be8350"

uint __thiscall Recovered_Bulk::FUN_10be8350(uint param_2,uint param_3)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uStack_10;
  undefined1 auStack_c [8];
  int iStack_4;
  
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x4c));
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x50));
  if ((undefined4 *)(puVar4) != puVar1) {
    do {
      uVar2 = (uint)((**(code **)(*(int *)*puVar4 + 0x20))());
      uStack_10 = (uint)(uVar2);
      thunk_FUN_10bcf810(auStack_c,&uStack_10);
      if ((*(char *)(iStack_4 + 0xd) != '\0') ||
         (iVar3 = iStack_4, uVar2 < *(uint *)(iStack_4 + 0x10))) {
        iVar3 = (int)(*(int *)(param_1 + 0x44));
      }
      in_EAX = (uint)(param_2);
      if ((*(uint *)(iVar3 + 0x14) == param_2) &&
         (in_EAX = param_3, *(uint *)(iVar3 + 0x18) == param_3)) {
        uVar2 = (uint)((**(code **)(*(int *)*puVar4 + 0x1c))());
        return (uint)(uVar2);
      }
      puVar4 = (undefined4 *)(puVar4 + 2);
    } while ((undefined4 *)(puVar4) != puVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10be83f0; body size 152 bytes.
#line 1 "ENTRY_10be83f0"

undefined1 __stdcall FUN_10be83f0(undefined4 param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar4 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) + 4))(&local_14,10,uVar2));

  thunk_FUN_10bcc760(uVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uVar1 = (undefined1)((**(code **)(*local_18 + 0x38))(param_1));

  (**(code **)(*local_18 + 8))();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10be84b0; body size 86 bytes.
#line 1 "ENTRY_10be84b0"

undefined4 __fastcall FUN_10be84b0(int *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)(0);
  iVar4 = (int)(param_1[1] - *param_1);
  iVar1 = (int)(iVar4 >> 0x1f);
  iVar4 = (int)(iVar4 / 0x1c + iVar1);
  if (iVar4 != iVar1) {
    pcVar3 = (char *)((char *)(*param_1 + 6));
    do {
      if ((pcVar3[-3] != '\0') && (*pcVar3 != '\0')) {
        cVar2 = (char)(thunk_FUN_10be03d0(2));
        if (cVar2 != '\0') {
          return (undefined4)(0);
        }
        return (undefined4)(1);
      }
      uVar5 = (uint)(uVar5 + 1);
      pcVar3 = (char *)(pcVar3 + 0x1c);
    } while (uVar5 < (uint)(iVar4 - iVar1));
  }
  return (undefined4)(0);
}


// Reference entry 10be9340; body size 468 bytes.
#line 1 "ENTRY_10be9340"

char __thiscall Recovered_Bulk::FUN_10be9340(int *param_2,int param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_1c = (int *)((int *)0x0);
  local_18 = (int *)((int *)0x0);

  cVar2 = (char)(thunk_FUN_1040bbc0("SCVoiceUtility",&local_1c,param_2,0,
                             DAT_12126b84 ));
  if (cVar2 != '\0') {
    uVar3 = (undefined4)(createPropertyBag());
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_101aa9f0(uVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    (**(code **)(*local_1c + 0x88))(local_24);
    if (local_24 != (int *)0x0) {
      uVar3 = (undefined4)((**(code **)(*local_24 + 0x90))(&local_14));
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      thunk_FUN_101ccf90(uVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      if (local_2c != (int *)0x0) {
        iVar4 = (int)((**(code **)(*local_2c + 0x14))());
        if (iVar4 != 0) {
          thunk_FUN_10bcfad0(&local_40,&param_3);
          if ((*(char *)(local_38 + 0xd) != '\0') || (param_3 < *(int *)(local_38 + 0x10))) {
            if (*(int *)(param_1 + 0x30) == 0x9249249) {
                    
              thunk_FUN_101d7220();
            }
            uVar3 = (undefined4)(*(undefined4 *)(param_1 + 0x2c));
            *(unsigned char *)((char *)&local_8 + 0) = 9;

            local_34 = (undefined4 *)((undefined4 *)(param_1 + 0x2c));
            puVar5 = (undefined4 *)(operator_new(0x1c));
            *(unsigned char *)((char *)&local_8 + 0) = 7;
            puVar5[4] = (undefined4)(param_3);
            puVar5[5] = (undefined4)(0);
            puVar5[6] = (undefined4)(0);
            *puVar5 = (undefined4)(uVar3);
            puVar5[1] = (undefined4)(uVar3);
            puVar5[2] = (undefined4)(uVar3);
            *(undefined2 *)(puVar5 + 3) = 0;
            thunk_FUN_10bdb670(local_40,uStack_3c,puVar5);
          }
          thunk_FUN_10122560(&local_24);
          cVar2 = (char)('\x01');
        }
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0xb;
      if (local_28 != (int *)0x0) {
        (**(code **)(*local_28 + 8))();
      }
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }
  piVar1 = (int *)(local_18);

  if (local_18 != (int *)0x0) {
    local_1c = (int *)((int *)0x0);
    local_18 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return (char)(cVar2);

 } catch (...) { }
}


// Reference entry 10bea170; body size 114 bytes.
#line 1 "ENTRY_10bea170"

bool FUN_10bea170(int param_1,uint param_2)

{
  byte *pbVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10bcf9b0(local_c,&param_1);
  if (((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= param_1)) &&
     (local_4 != DAT_121a5138)) {
    pbVar1 = (byte *)((byte *)thunk_FUN_10bd82f0(&param_1));
    return (bool)((*pbVar1 & param_2) == param_2);
  }
  thunk_FUN_112af4e0("SCVoiceUtility",1,"Service (%u) does not exist in info map",param_1);
  return (bool)(false);
}


// Reference entry 10becc60; body size 81 bytes.
#line 1 "ENTRY_10becc60"

uint FUN_10becc60(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint3 uVar4;
  bool bVar5;
  __time64_t _Var6;
  uint local_8;
  int local_4;
  
  uVar2 = (uint)(thunk_FUN_10cedc10(PTR_s_FirstVoiceZPAdded_12119d6c,&local_8));
  if ((char)uVar2 == '\0') {
    return (uint)(uVar2 & 0xffffff00);
  }
  _Var6 = (__time64_t)(_time64((__time64_t *)0x0));
  uVar3 = (uint)((uint)_Var6 - local_8);
  uVar2 = (uint)((uint)((uint)_Var6 < local_8));
  uVar1 = (uint)((int)((ulonglong)_Var6 >> 0x20) - local_4);
  bVar5 = (bool)((int)(uVar1 - uVar2) < 0);
  uVar4 = (uint3)((uint3)(uVar3 >> 8));
  if ((uVar1 == uVar2 || bVar5) && ((bVar5 || (uVar3 < 0x278d00)))) {
    return (uint)(((uint)(uVar4) << 8 | (uint)(1)));
  }
  return (uint)((uint)uVar4 << 8);
}


// Reference entry 10bed460; body size 137 bytes.
#line 1 "ENTRY_10bed460"

void __thiscall Recovered_Bulk::FUN_10bed460(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  if (param_1 + 0xd != &param_2) {
    thunk_FUN_10648010(param_2,param_3,param_4);
  }
  param_1[7] = (undefined4)(0);
  *(undefined2 *)((int)param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  thunk_FUN_10352990(*param_1,param_1[1],param_1,uVar1);
  param_1[1] = (undefined4)(*param_1);
  thunk_FUN_10be0520();
  thunk_FUN_1036e480();

  return;

 } catch (...) { }
}


// Reference entry 10bed510; body size 81 bytes.
#line 1 "ENTRY_10bed510"

void __thiscall Recovered_Bulk::FUN_10bed510(char param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  param_1[7] = (undefined4)(0);
  *(undefined2 *)((int)param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  thunk_FUN_10352990(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  if (param_2 == '\0') {
    puVar1 = (undefined4 *)(param_1 + 0xd);
    thunk_FUN_10352a90(*puVar1,param_1[0xe],puVar1);
    param_1[0xe] = (undefined4)(*puVar1);
  }
  thunk_FUN_10be0520();
  return;
}


// Reference entry 10bee550; body size 67 bytes.
#line 1 "ENTRY_10bee550"

void __fastcall FUN_10bee550(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x8c) + 0x58))());
    if (*(int *)(param_1 + 0xa4) == iVar1) goto LAB_10bee587;
  }
  thunk_FUN_10bee260();
  uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0x8c) + 0x58))());
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
LAB_10bee587:
                    
                    
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x14))();
  return;
}


// Reference entry 10beebe0; body size 93 bytes.
#line 1 "ENTRY_10beebe0"

int __thiscall Recovered_Bulk::FUN_10beebe0(int param_2)
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


// Reference entry 10beec60; body size 163 bytes.
#line 1 "ENTRY_10beec60"

undefined4 * __thiscall Recovered_Bulk::FUN_10beec60(void)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  undefined4 uVar2;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlConnection_Callback);
  param_1[2] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);

  if (in_stack_00000028 != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*in_stack_00000028)(param_1 + 4,uVar1));
    param_1[0xd] = (undefined4)(uVar2);
    if (in_stack_00000028 != (int *)0x0) {
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10beed80; body size 322 bytes.
#line 1 "ENTRY_10beed80"

undefined4 * __thiscall Recovered_Bulk::FUN_10beed80(undefined4 param_2,int *param_3,undefined4 param_4,int *param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCICancellable);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlConnection);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCUrlConnection);
  thunk_FUN_112a7f50(&DAT_121a524c,uVar2);
  DAT_121a5254 = (int)(DAT_121a5254 + 1);
  if (DAT_121a5254 == -1) {
    DAT_121a5254 = (int)(1);
  }
  iVar1 = (int)(DAT_121a5254);
  thunk_FUN_112a8010(&DAT_121a524c);
  param_1[3] = (undefined4)(iVar1);
  param_1[4] = (undefined4)(param_2);
  param_1[5] = (undefined4)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  param_1[6] = (undefined4)(param_4);
  param_1[7] = (undefined4)(param_5);
  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 4))();
  }
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bef940; body size 169 bytes.
#line 1 "ENTRY_10bef940"

undefined4 * __thiscall Recovered_Bulk::FUN_10bef940(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlRequest);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(2000);
  thunk_FUN_101e6610(param_2);
  param_1[0xd] = (undefined4)(param_3);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0x12] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10befa20; body size 170 bytes.
#line 1 "ENTRY_10befa20"

undefined4 * __fastcall FUN_10befa20(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlRequest);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(2000);
  thunk_FUN_101e69d0(&DAT_1186d2ee);
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);
  param_1[0x12] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bf09f0; body size 67 bytes.
#line 1 "ENTRY_10bf09f0"

void __fastcall FUN_10bf09f0(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x18))(param_1 + -8);
    if (*(int *)(param_1 + 0x24) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x28));
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}


// Reference entry 10bf25e0; body size 82 bytes.
#line 1 "ENTRY_10bf25e0"

undefined4 * FUN_10bf25e0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0xc));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar1[2] = (int)(param_2);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpFactory);
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf36c0; body size 142 bytes.
#line 1 "ENTRY_10bf36c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bf36c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar3 = (void *)(operator_new(0x14));
  param_1[1] = (undefined4)(pvVar3);
  iVar1 = (int)(*(int *)*param_4);
  *(int *)((int)pvVar3 + 8) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  *(undefined4 *)((int)pvVar3 + 0xc) = 0;
  *(undefined1 *)((int)pvVar3 + 0x10) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bf3840; body size 104 bytes.
#line 1 "ENTRY_10bf3840"

undefined4 * __thiscall Recovered_Bulk::FUN_10bf3840(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  param_1[1] = (undefined4)(pvVar1);
  thunk_FUN_10118c40(param_3);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bf3bc0; body size 128 bytes.
#line 1 "ENTRY_10bf3bc0"

void __thiscall Recovered_Bulk::FUN_10bf3bc0(int *param_2,undefined4 param_3,uint param_4)
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
    param_2[1] = (int)(0);
    return;
  }
  piVar2 = (int *)(*(int **)(*(int *)(param_1 + 0xc) + param_4 * 8));
  cVar4 = (char)(thunk_FUN_10405e20(param_3,piVar1 + 2));
  while( true ) {
    if (cVar4 != '\0') {
      iVar3 = (int)(*piVar1);
      param_2[1] = (int)((int)piVar1);
      *param_2 = (int)(iVar3);
      return;
    }
    if (piVar1 == (int *)(piVar2)) break;
    piVar1 = (int *)((int *)piVar1[1]);
    cVar4 = (char)(thunk_FUN_10405e20(param_3,piVar1 + 2));
  }
  *param_2 = (int)((int)piVar1);
  param_2[1] = (int)(0);
  return;
}


// Reference entry 10bf3e70; body size 90 bytes.
#line 1 "ENTRY_10bf3e70"

void FUN_10bf3e70(undefined4 param_1,int param_2)

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
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10bf4610; body size 95 bytes.
#line 1 "ENTRY_10bf4610"

void FUN_10bf4610(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10bf4690; body size 95 bytes.
#line 1 "ENTRY_10bf4690"

void FUN_10bf4690(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10bf4710; body size 70 bytes.
#line 1 "ENTRY_10bf4710"

void __thiscall Recovered_Bulk::FUN_10bf4710(int *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_8 [8];
  
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)*param_3);
  }
  uVar1 = (undefined4)(thunk_FUN_101c82e0(puVar3));
  iVar2 = (int)(thunk_FUN_10bf3c60(local_8,param_3,uVar1));
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 10bf4770; body size 70 bytes.
#line 1 "ENTRY_10bf4770"

void __thiscall Recovered_Bulk::FUN_10bf4770(int *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_8 [8];
  
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)*param_3);
  }
  uVar1 = (undefined4)(thunk_FUN_101c82e0(puVar3));
  iVar2 = (int)(thunk_FUN_10bf3c60(local_8,param_3,uVar1));
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 10bf4c10; body size 161 bytes.
#line 1 "ENTRY_10bf4c10"

undefined4 * __fastcall FUN_10bf4c10(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10bf63a0(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bf4d50; body size 164 bytes.
#line 1 "ENTRY_10bf4d50"

undefined4 * __thiscall Recovered_Bulk::FUN_10bf4d50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10bf63a0(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bf4e20; body size 164 bytes.
#line 1 "ENTRY_10bf4e20"

undefined4 * __thiscall Recovered_Bulk::FUN_10bf4e20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10bf6280(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bf5100; body size 161 bytes.
#line 1 "ENTRY_10bf5100"

undefined4 * __fastcall FUN_10bf5100(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10bf63a0(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bf51d0; body size 183 bytes.
#line 1 "ENTRY_10bf51d0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bf51d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10bf6280(0x10,param_1[1]);

  thunk_FUN_10bf4900(param_2,param_3);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bf54e0; body size 187 bytes.
#line 1 "ENTRY_10bf54e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bf54e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppRatingSettings);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[2] = (undefined4)(pvVar1);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);

  param_1[7] = (undefined4)(7);
  param_1[8] = (undefined4)(8);
  param_1[1] = (undefined4)(0x3f800000);
  thunk_FUN_10bf63a0(0x10,param_1[2]);
  param_1[9] = (undefined4)(param_2);
  *(undefined1 *)(param_1 + 10) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bf56b0; body size 86 bytes.
#line 1 "ENTRY_10bf56b0"

void __fastcall FUN_10bf56b0(int param_1)

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
  thunk_FUN_10bf5910();
  return;
}


// Reference entry 10bf5720; body size 99 bytes.
#line 1 "ENTRY_10bf5720"

void __fastcall FUN_10bf5720(int param_1)

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
  thunk_FUN_10bf3d70(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x20);
  return;
}


// Reference entry 10bf57a0; body size 77 bytes.
#line 1 "ENTRY_10bf57a0"

void __fastcall FUN_10bf57a0(int *param_1)

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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
}


// Reference entry 10bf5810; body size 77 bytes.
#line 1 "ENTRY_10bf5810"

void __fastcall FUN_10bf5810(int *param_1)

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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
}


// Reference entry 10bf5910; body size 65 bytes.
#line 1 "ENTRY_10bf5910"

void __fastcall FUN_10bf5910(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10bf5990();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10bf5990; body size 182 bytes.
#line 1 "ENTRY_10bf5990"

void __fastcall FUN_10bf5990(int *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_1[1]);

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

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10bf5b40; body size 216 bytes.
#line 1 "ENTRY_10bf5b40"

void __fastcall FUN_10bf5b40(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *_Memory;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAppRatingSettings);
  _Memory = (void *)((void *)thunk_FUN_1148b586(-(uint)((int)((ulonglong)(uint)param_1[3] * 0xc >> 0x20) != 0
                                              ) | (uint)((ulonglong)(uint)param_1[3] * 0xc),uVar3));
  piVar2 = (int *)((int *)param_1[2]);
  piVar5 = (int *)((int *)*piVar2);
  iVar6 = (int)(0);
  if ((int *)(piVar5) != piVar2) {
    do {
      iVar7 = (int)(iVar6);
      if ((char)piVar5[4] != '\0') {
        iVar7 = (int)(iVar6 + 1);
        puVar8 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)piVar5[2] != (undefined1 *)0x0) {
          puVar8 = (undefined1 *)((undefined1 *)piVar5[2]);
        }
        puVar1 = (undefined4 *)((undefined4 *)((int)_Memory + iVar6 * 0xc));
        *puVar1 = (undefined4)(puVar8);
        pcVar4 = (char *)((char *)piVar5[3]);
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
          pcVar4 = (char *)((char *)0x0);
        }
        puVar1[1] = (undefined4)(pcVar4);
        *(undefined1 *)(puVar1 + 2) = 0;
      }
      piVar5 = (int *)((int *)*piVar5);
      iVar6 = (int)(iVar7);
    } while ((int *)(piVar5) != piVar2);
    if (iVar7 != 0) {
      (**(code **)(*(int *)param_1[9] + 0x20))(_Memory,iVar7);
    }
  }
  free(_Memory);
  thunk_FUN_10bf56b0();

  return;

 } catch (...) { }
}


// Reference entry 10bf5c70; body size 115 bytes.
#line 1 "ENTRY_10bf5c70"

void __fastcall FUN_10bf5c70(int *param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(*param_1);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10bf5d10; body size 110 bytes.
#line 1 "ENTRY_10bf5d10"

void __fastcall FUN_10bf5d10(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *local_4;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
    *(undefined4 *)puVar2[1] = (undefined4)(0);
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    local_4 = (int *)(param_1);
    while (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_10bf5990();
      thunk_FUN_1148a50e(puVar2,0x14);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    local_4 = (int *)(*(int **)(iVar1 + 4));
    thunk_FUN_10bf4690(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10bf5da0; body size 98 bytes.
#line 1 "ENTRY_10bf5da0"

void __fastcall FUN_10bf5da0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(uint *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    local_4 = (int *)(param_1);
    if (*(uint *)(iVar2 + 8) < *(uint *)(iVar2 + 0x1c) >> 3) {
      thunk_FUN_10bf7320(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_10bf3d70(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 8) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_10bf4610(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10bf6280; body size 228 bytes.
#line 1 "ENTRY_10bf6280"

void __thiscall Recovered_Bulk::FUN_10bf6280(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar5 = (uint)(param_1[1] - *param_1 >> 2);
  if (param_2 <= uVar5) {
    thunk_FUN_10bf4610(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_10bf635f:
                    
    thunk_FUN_1012a2a0();
  }
  uVar7 = (uint)(param_2 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      puVar6 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      puVar6 = (undefined4 *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10bf635f;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_10bf6344;
    puVar6 = (undefined4 *)((undefined4 *)((int)pvVar3 + 0x23U & 0xffffffe0));
    puVar6[-1] = (undefined4)(pvVar3);
  }
  if (uVar5 != 0) {
    iVar2 = (int)(*param_1);
    uVar5 = (uint)(uVar5 * 4);
    iVar4 = (int)(iVar2);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar2 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_10bf6344:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5);
  }
  puVar1 = (undefined4 *)(puVar6 + param_2);
  *param_1 = (int)((int)puVar6);
  param_1[1] = (int)((int)puVar1);
  param_1[2] = (int)((int)puVar1);
  for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 1) {
    *puVar6 = (undefined4)(param_3);
  }
  return;
}


// Reference entry 10bf63a0; body size 228 bytes.
#line 1 "ENTRY_10bf63a0"

void __thiscall Recovered_Bulk::FUN_10bf63a0(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar5 = (uint)(param_1[1] - *param_1 >> 2);
  if (param_2 <= uVar5) {
    thunk_FUN_10bf4690(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_10bf647f:
                    
    thunk_FUN_1012a2a0();
  }
  uVar7 = (uint)(param_2 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      puVar6 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      puVar6 = (undefined4 *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10bf647f;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_10bf6464;
    puVar6 = (undefined4 *)((undefined4 *)((int)pvVar3 + 0x23U & 0xffffffe0));
    puVar6[-1] = (undefined4)(pvVar3);
  }
  if (uVar5 != 0) {
    iVar2 = (int)(*param_1);
    uVar5 = (uint)(uVar5 * 4);
    iVar4 = (int)(iVar2);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar2 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_10bf6464:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5);
  }
  puVar1 = (undefined4 *)(puVar6 + param_2);
  *param_1 = (int)((int)puVar6);
  param_1[1] = (int)((int)puVar1);
  param_1[2] = (int)((int)puVar1);
  for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 1) {
    *puVar6 = (undefined4)(param_3);
  }
  return;
}


// Reference entry 10bf65f0; body size 136 bytes.
#line 1 "ENTRY_10bf65f0"

float __thiscall Recovered_Bulk::FUN_10bf65f0(int param_2)
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


// Reference entry 10bf66a0; body size 136 bytes.
#line 1 "ENTRY_10bf66a0"

float __thiscall Recovered_Bulk::FUN_10bf66a0(int param_2)
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


// Reference entry 10bf6e80; body size 87 bytes.
#line 1 "ENTRY_10bf6e80"

void __thiscall Recovered_Bulk::FUN_10bf6e80(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10bf6ef0; body size 87 bytes.
#line 1 "ENTRY_10bf6ef0"

void __thiscall Recovered_Bulk::FUN_10bf6ef0(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10bf6f80; body size 133 bytes.
#line 1 "ENTRY_10bf6f80"

void __fastcall FUN_10bf6f80(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10bf6750();
  return;
}


// Reference entry 10bf7030; body size 133 bytes.
#line 1 "ENTRY_10bf7030"

void __fastcall FUN_10bf7030(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10bf6a10();
  return;
}


// Reference entry 10bf7120; body size 77 bytes.
#line 1 "ENTRY_10bf7120"

void __fastcall FUN_10bf7120(int *param_1)

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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
}


// Reference entry 10bf7190; body size 77 bytes.
#line 1 "ENTRY_10bf7190"

void __fastcall FUN_10bf7190(int *param_1)

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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
}


// Reference entry 10bf7200; body size 65 bytes.
#line 1 "ENTRY_10bf7200"

void __fastcall FUN_10bf7200(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10bf5990();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10bf7980; body size 94 bytes.
#line 1 "ENTRY_10bf7980"

void __fastcall FUN_10bf7980(int param_1)

{
  int *piVar1;
  int local_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    local_4 = (int)(param_1);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      thunk_FUN_10bf7320(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_10bf3d70(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    local_4 = (int)(*piVar1);
    thunk_FUN_10bf4610(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10bf7a00; body size 69 bytes.
#line 1 "ENTRY_10bf7a00"

void __fastcall FUN_10bf7a00(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10bf5990();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10bf88b0; body size 101 bytes.
#line 1 "ENTRY_10bf88b0"

void __thiscall Recovered_Bulk::FUN_10bf88b0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined1 local_3c [44];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10bf54e0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20));

  thunk_FUN_10bf8930(param_2,local_3c);
  thunk_FUN_10bf5b40(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10bf9200; body size 170 bytes.
#line 1 "ENTRY_10bf9200"

void __fastcall FUN_10bf9200(int param_1)

{
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_1023a9c0(&local_14,DAT_12126b84 ));
  piVar3 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  cVar1 = (char)(thunk_FUN_10242b10());
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10bf9410; body size 138 bytes.
#line 1 "ENTRY_10bf9410"

void __fastcall FUN_10bf9410(int param_1)

{
 try {
  __time64_t _Var1;
  undefined1 local_3c [44];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_10bf54e0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20));

  thunk_FUN_10bf8930(2,local_3c);
  thunk_FUN_10bf9680("AppRating-NumOfSigEvents",0);
  _Var1 = (__time64_t)(_time64((__time64_t *)0x0));
  thunk_FUN_10bf97e0("AppRating-DaysSinceSNF",(int)_Var1);
  thunk_FUN_10bf5b40();

  return;

 } catch (...) { }
}


// Reference entry 10bf9680; body size 280 bytes.
#line 1 "ENTRY_10bf9680"

void __stdcall FUN_10bf9680(char *param_1,undefined4 param_2)

{
 try {
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  char *_Src;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  size_t _Size;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  _Src = (char *)(param_1);


  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = (char *)((char *)0x0);
  }
  else {
    pcVar7 = (char *)(param_1);
    do {
      cVar2 = (char)(*pcVar7);
      pcVar7 = (char *)(pcVar7 + 1);
    } while (cVar2 != '\0');
    _Size = (size_t)((int)pcVar7 - (int)(param_1 + 1));
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ));
    puVar1 = (undefined4 *)(puVar4 + 4);
    *puVar4 = (undefined4)(1);
    puVar4[3] = (undefined4)(_Size);
    puVar4[2] = (undefined4)(0);
    puVar4[1] = (undefined4)(0);
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    param_1 = (char *)((char *)puVar1);
  }

  piVar5 = (int *)((int *)thunk_FUN_10bf3f30(local_18,&param_1));
  puVar1 = (undefined4 *)((undefined4 *)param_1);
  iVar3 = (int)(*piVar5);

  if ((param_1 != (char *)0x0) &&
     (puVar4 = (undefined4 *)((int)param_1 + -0x10), *(int *)((int)param_1 + -0x10) < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar4));
    if (iVar6 == 0) {
      puVar1[-2] = (undefined4)(0);
      puVar1[-3] = (undefined4)(0);
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar4);
    }
  }

  thunk_FUN_111a1880(iVar3 + 0xc,&DAT_11884800,param_2);
  *(undefined1 *)(iVar3 + 0x10) = 1;

  return;

 } catch (...) { }
}


// Reference entry 10bf97e0; body size 280 bytes.
#line 1 "ENTRY_10bf97e0"

void __stdcall FUN_10bf97e0(char *param_1,undefined4 param_2)

{
 try {
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  char *_Src;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  size_t _Size;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  _Src = (char *)(param_1);


  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = (char *)((char *)0x0);
  }
  else {
    pcVar7 = (char *)(param_1);
    do {
      cVar2 = (char)(*pcVar7);
      pcVar7 = (char *)(pcVar7 + 1);
    } while (cVar2 != '\0');
    _Size = (size_t)((int)pcVar7 - (int)(param_1 + 1));
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ));
    puVar1 = (undefined4 *)(puVar4 + 4);
    *puVar4 = (undefined4)(1);
    puVar4[3] = (undefined4)(_Size);
    puVar4[2] = (undefined4)(0);
    puVar4[1] = (undefined4)(0);
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    param_1 = (char *)((char *)puVar1);
  }

  piVar5 = (int *)((int *)thunk_FUN_10bf3f30(local_18,&param_1));
  puVar1 = (undefined4 *)((undefined4 *)param_1);
  iVar3 = (int)(*piVar5);

  if ((param_1 != (char *)0x0) &&
     (puVar4 = (undefined4 *)((int)param_1 + -0x10), *(int *)((int)param_1 + -0x10) < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar4));
    if (iVar6 == 0) {
      puVar1[-2] = (undefined4)(0);
      puVar1[-3] = (undefined4)(0);
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar4);
    }
  }

  thunk_FUN_111a1880(iVar3 + 0xc,&DAT_118873a4,param_2);
  *(undefined1 *)(iVar3 + 0x10) = 1;

  return;

 } catch (...) { }
}


// Reference entry 10bf9940; body size 187 bytes.
#line 1 "ENTRY_10bf9940"

void __fastcall FUN_10bf9940(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int *)(param_1 + 0x18) != 0) {
    thunk_FUN_10d87f10(DAT_12126b84 );
    if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    }
  }
  piVar2 = (int *)((int *)thunk_FUN_1023ab10(&local_14));
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
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(*(undefined4 *)(param_1 + 0x10));
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10bfa290; body size 138 bytes.
#line 1 "ENTRY_10bfa290"

undefined4 * __thiscall Recovered_Bulk::FUN_10bfa290(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(param_2);

  param_1[1] = (undefined4)(0);
  pvVar3 = (void *)(operator_new(0x10));
  param_1[1] = (undefined4)(pvVar3);
  iVar1 = (int)(*(int *)*param_4);
  *(int *)((int)pvVar3 + 8) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  *(undefined4 *)((int)pvVar3 + 0xc) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bfa960; body size 95 bytes.
#line 1 "ENTRY_10bfa960"

void FUN_10bfa960(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10bfaa60; body size 161 bytes.
#line 1 "ENTRY_10bfaa60"

undefined4 * __fastcall FUN_10bfaa60(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10bfbcf0(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bfab70; body size 164 bytes.
#line 1 "ENTRY_10bfab70"

undefined4 * __thiscall Recovered_Bulk::FUN_10bfab70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10bfbcf0(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bfad30; body size 161 bytes.
#line 1 "ENTRY_10bfad30"

undefined4 * __fastcall FUN_10bfad30(undefined4 *param_1)

{
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[1] = (undefined4)(pvVar1);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);

  param_1[6] = (undefined4)(7);
  param_1[7] = (undefined4)(8);
  *param_1 = (undefined4)(0x3f800000);
  thunk_FUN_10bfbcf0(0x10,param_1[1]);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10bfb3d0; body size 86 bytes.
#line 1 "ENTRY_10bfb3d0"

void __fastcall FUN_10bfb3d0(int param_1)

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
  thunk_FUN_10bfb4f0();
  return;
}


// Reference entry 10bfb440; body size 77 bytes.
#line 1 "ENTRY_10bfb440"

void __fastcall FUN_10bfb440(int *param_1)

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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
}


// Reference entry 10bfb4f0; body size 65 bytes.
#line 1 "ENTRY_10bfb4f0"

void __fastcall FUN_10bfb4f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10bfb550();
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 10bfb550; body size 182 bytes.
#line 1 "ENTRY_10bfb550"

void __fastcall FUN_10bfb550(int *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  iVar1 = (int)(param_1[1]);

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

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10bfbcf0; body size 228 bytes.
#line 1 "ENTRY_10bfbcf0"

void __thiscall Recovered_Bulk::FUN_10bfbcf0(uint param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar5 = (uint)(param_1[1] - *param_1 >> 2);
  if (param_2 <= uVar5) {
    thunk_FUN_10bfa960(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_10bfbdcf:
                    
    thunk_FUN_1012a2a0();
  }
  uVar7 = (uint)(param_2 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      puVar6 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      puVar6 = (undefined4 *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_10bfbdcf;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_10bfbdb4;
    puVar6 = (undefined4 *)((undefined4 *)((int)pvVar3 + 0x23U & 0xffffffe0));
    puVar6[-1] = (undefined4)(pvVar3);
  }
  if (uVar5 != 0) {
    iVar2 = (int)(*param_1);
    uVar5 = (uint)(uVar5 * 4);
    iVar4 = (int)(iVar2);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar2 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar2 - iVar4) - 4U) {
LAB_10bfbdb4:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5);
  }
  puVar1 = (undefined4 *)(puVar6 + param_2);
  *param_1 = (int)((int)puVar6);
  param_1[1] = (int)((int)puVar1);
  param_1[2] = (int)((int)puVar1);
  for (; (undefined4 *)(puVar6) != puVar1; puVar6 = puVar6 + 1) {
    *puVar6 = (undefined4)(param_3);
  }
  return;
}


// Reference entry 10bfbe90; body size 136 bytes.
#line 1 "ENTRY_10bfbe90"

float __thiscall Recovered_Bulk::FUN_10bfbe90(int param_2)
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


// Reference entry 10bfc2e0; body size 87 bytes.
#line 1 "ENTRY_10bfc2e0"

void __thiscall Recovered_Bulk::FUN_10bfc2e0(int param_2)
{
  float *param_1 = (float *)this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *param_1)));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 10bfc360; body size 133 bytes.
#line 1 "ENTRY_10bfc360"

void __fastcall FUN_10bfc360(float *param_1)

{
  ceil((double)((float)((double)((int)param_1[2] + 1) +
                       (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) / *param_1));
  thunk_FUN_1148ac80();
  thunk_FUN_10bfbf40();
  return;
}


// Reference entry 10bfc430; body size 77 bytes.
#line 1 "ENTRY_10bfc430"

void __fastcall FUN_10bfc430(int *param_1)

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
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return;
}


// Reference entry 10bfc4a0; body size 65 bytes.
#line 1 "ENTRY_10bfc4a0"

void __fastcall FUN_10bfc4a0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10bfb550();
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 10bfc6d0; body size 108 bytes.
#line 1 "ENTRY_10bfc6d0"

void __fastcall FUN_10bfc6d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4 *)puVar1[1] = (undefined4)(0);
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    local_4 = (int)(param_1);
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_10bfb550();
      thunk_FUN_1148a50e(puVar1,0x10);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    local_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_10bfa960(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&local_4);
  }
  return;
}


// Reference entry 10bfc760; body size 69 bytes.
#line 1 "ENTRY_10bfc760"

void __fastcall FUN_10bfc760(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10bfb550();
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10bfd6e0; body size 234 bytes.
#line 1 "ENTRY_10bfd6e0"

void __thiscall Recovered_Bulk::FUN_10bfd6e0(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar4 = (char)(thunk_FUN_112a7f50(param_1 + 100,DAT_12126b84 ));

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x54));
  puVar3 = (undefined4 *)((undefined4 *)0x0);
  do {
    puVar2 = (undefined4 *)(puVar3);
    puVar3 = (undefined4 *)(puVar1);
    if (puVar3 == (undefined4 *)0x0) goto LAB_10bfd7a9;
    if (((int *)puVar3[1] == (int *)0x0) ||
       (cVar5 = (**(code **)(*(int *)puVar3[1] + 0xc))(), cVar5 == '\0')) {
      iVar6 = (int)(puVar3[2]);
    }
    else {
      iVar6 = (int)((**(code **)(*(int *)puVar3[1] + 8))());
    }
    puVar1 = (undefined4 *)((undefined4 *)puVar3[0x188e]);
  } while (iVar6 != param_2);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x54) = puVar1;
  }
  else {
    puVar2[0x188e] = (undefined4)(puVar1);
    thunk_FUN_101badc0();
  }
  thunk_FUN_10bfb670();
  *puVar3 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_1148a50e(puVar3,0x623c);
LAB_10bfd7a9:
  if (cVar4 != '\0') {
    thunk_FUN_112a8010(param_1 + 100);
  }

  return;

 } catch (...) { }
}


// Reference entry 10bfd810; body size 99 bytes.
#line 1 "ENTRY_10bfd810"

void __fastcall FUN_10bfd810(int param_1)

{
  if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(param_1 + 0x60) == '\0')) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      thunk_FUN_1059d940(*(int *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      thunk_FUN_1059d940(*(int *)(param_1 + 0x5c));
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    thunk_FUN_11272130(0,0);
    thunk_FUN_10bfd620(0);
    thunk_FUN_10bfc6d0();
    return;
  }
  return;
}


// Reference entry 10bfd8e0; body size 157 bytes.
#line 1 "ENTRY_10bfd8e0"

void __thiscall Recovered_Bulk::FUN_10bfd8e0(int param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x58,DAT_12126b84 ));

  if (*(char *)(param_1 + 0x54) == '\0') {
    if (param_2 == *(int *)(param_1 + 0x4c)) {
      thunk_FUN_10bfd620(1);
      uVar2 = (undefined4)(thunk_FUN_1059d5a0(60000));
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
    }
    else if (param_2 == *(int *)(param_1 + 0x50)) {
      thunk_FUN_10bfd810();
    }
  }
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x58);
  }

  return;

 } catch (...) { }
}


// Reference entry 10bfd9b0; body size 234 bytes.
#line 1 "ENTRY_10bfd9b0"

void __thiscall Recovered_Bulk::FUN_10bfd9b0(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar4 = (char)(thunk_FUN_112a7f50(param_1 + 0x5c,DAT_12126b84 ));

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x4c));
  puVar3 = (undefined4 *)((undefined4 *)0x0);
  do {
    puVar2 = (undefined4 *)(puVar3);
    puVar3 = (undefined4 *)(puVar1);
    if (puVar3 == (undefined4 *)0x0) goto LAB_10bfda79;
    if (((int *)puVar3[1] == (int *)0x0) ||
       (cVar5 = (**(code **)(*(int *)puVar3[1] + 0xc))(), cVar5 == '\0')) {
      iVar6 = (int)(puVar3[2]);
    }
    else {
      iVar6 = (int)((**(code **)(*(int *)puVar3[1] + 8))());
    }
    puVar1 = (undefined4 *)((undefined4 *)puVar3[0x188e]);
  } while (iVar6 != param_2);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x4c) = puVar1;
  }
  else {
    puVar2[0x188e] = (undefined4)(puVar1);
    thunk_FUN_101badc0();
  }
  thunk_FUN_10bfb670();
  *puVar3 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_1148a50e(puVar3,0x623c);
LAB_10bfda79:
  if (cVar4 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x5c);
  }

  return;

 } catch (...) { }
}


// Reference entry 10bfe120; body size 171 bytes.
#line 1 "ENTRY_10bfe120"

void __fastcall FUN_10bfe120(int param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 100,DAT_12126b84 ));

  if ((*(char *)(param_1 + 0x2c) == '\0') && (*(char *)(param_1 + 0x60) == '\0')) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    thunk_FUN_10bfc6d0();
    thunk_FUN_11272130(LAB_10bfdbb0,param_1);
    uVar2 = (undefined4)(thunk_FUN_1059d5a0(60000));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    uVar2 = (undefined4)(thunk_FUN_1059d5a0(480000));
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
  }
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 100);
  }

  return;

 } catch (...) { }
}


// Reference entry 10bfe200; body size 107 bytes.
#line 1 "ENTRY_10bfe200"

void __fastcall FUN_10bfe200(int param_1)

{
 try {
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 100,DAT_12126b84 ));

  thunk_FUN_10bfd810();
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 100);
  }

  return;

 } catch (...) { }
}


// Reference entry 10bff8e0; body size 69 bytes.
#line 1 "ENTRY_10bff8e0"

void __fastcall FUN_10bff8e0(int param_1)

{
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x20) == 0)) {
    if (*(FILE **)(param_1 + 0x18) != (FILE *)0x0) {
      fclose(*(FILE **)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0;
      (**(code **)(**(int **)(param_1 + 8) + 0x20))();
    }
    thunk_FUN_112af4e0("SCMusicServerData",1,"End Reading");
  }
  return;
}


// Reference entry 10bff940; body size 69 bytes.
#line 1 "ENTRY_10bff940"

void __fastcall FUN_10bff940(int param_1)

{
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x20) == 0)) {
    if (*(FILE **)(param_1 + 0x18) != (FILE *)0x0) {
      fclose(*(FILE **)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0;
      (**(code **)(**(int **)(param_1 + 8) + 0x20))();
    }
    thunk_FUN_112af4e0("SCMusicServerData",1,"End Reading");
  }
  return;
}


// Reference entry 10bff9a0; body size 286 bytes.
#line 1 "ENTRY_10bff9a0"

size_t __thiscall Recovered_Bulk::FUN_10bff9a0(uint param_2,void *param_3,size_t param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  size_t sVar3;
  
  if (param_3 == (void *)0x0) {
    return (size_t)(0xffffffff);
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), uVar1 != 0)) {
    if (uVar1 < param_2) {
      thunk_FUN_112af4e0("SCMusicServer",1,"getBytes: Error while reading cached bytes. %zu > %zu",
                         param_2,uVar1);
      return (size_t)(0xffffffff);
    }
    if (uVar1 < param_2 + param_4) {
      param_4 = (size_t)(uVar1 - param_2);
    }
    memcpy(param_3,(void *)(*(int *)(param_1 + 0x1c) + param_2),param_4);
    return (size_t)(param_4);
  }
  if (*(FILE **)(param_1 + 0x18) == (FILE *)0x0) {
    thunk_FUN_112af4e0("SCMusicServerData",1,"getBytes encountered an error reading file: [%d]",
                       *(undefined4 *)(param_1 + 0x14));
    return (size_t)(0xffffffff);
  }
  iVar2 = (int)(fseek(*(FILE **)(param_1 + 0x18),param_2,0));
  if (iVar2 != 0) {
    thunk_FUN_112af4e0("SCMusicServer",1,"getBytes: Error while seeking to file position %zu.",
                       param_2);
    return (size_t)(0);
  }
  sVar3 = (size_t)(fread(param_3,1,param_4,*(FILE **)(param_1 + 0x18)));
  iVar2 = (int)(ferror(*(FILE **)(param_1 + 0x18)));
  if (iVar2 != 0) {
    iVar2 = (int)(ferror(*(FILE **)(param_1 + 0x18)));
    thunk_FUN_112af4e0("SCMusicServerData",1,
                       "getBytes encountered an error seeking file: [%d]  with error: [%d]",
                       *(undefined4 *)(param_1 + 0x14),iVar2);
    return (size_t)(0xffffffff);
  }
  return (size_t)(sVar3);
}


// Reference entry 10bffb10; body size 286 bytes.
#line 1 "ENTRY_10bffb10"

size_t __thiscall Recovered_Bulk::FUN_10bffb10(uint param_2,void *param_3,size_t param_4)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  size_t sVar3;
  
  if (param_3 == (void *)0x0) {
    return (size_t)(0xffffffff);
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), uVar1 != 0)) {
    if (uVar1 < param_2) {
      thunk_FUN_112af4e0("SCMusicServer",1,"getBytes: Error while reading cached bytes. %zu > %zu",
                         param_2,uVar1);
      return (size_t)(0xffffffff);
    }
    if (uVar1 < param_2 + param_4) {
      param_4 = (size_t)(uVar1 - param_2);
    }
    memcpy(param_3,(void *)(*(int *)(param_1 + 0x1c) + param_2),param_4);
    return (size_t)(param_4);
  }
  if (*(FILE **)(param_1 + 0x18) == (FILE *)0x0) {
    thunk_FUN_112af4e0("SCMusicServerData",1,"getBytes encountered an error reading file: [%d]",
                       *(undefined4 *)(param_1 + 0x14));
    return (size_t)(0xffffffff);
  }
  iVar2 = (int)(fseek(*(FILE **)(param_1 + 0x18),param_2,0));
  if (iVar2 != 0) {
    thunk_FUN_112af4e0("SCMusicServer",1,"getBytes: Error while seeking to file position %zu.",
                       param_2);
    return (size_t)(0);
  }
  sVar3 = (size_t)(fread(param_3,1,param_4,*(FILE **)(param_1 + 0x18)));
  iVar2 = (int)(ferror(*(FILE **)(param_1 + 0x18)));
  if (iVar2 != 0) {
    iVar2 = (int)(ferror(*(FILE **)(param_1 + 0x18)));
    thunk_FUN_112af4e0("SCMusicServerData",1,
                       "getBytes encountered an error seeking file: [%d]  with error: [%d]",
                       *(undefined4 *)(param_1 + 0x14),iVar2);
    return (size_t)(0xffffffff);
  }
  return (size_t)(sVar3);
}


// Reference entry 10bffc80; body size 259 bytes.
#line 1 "ENTRY_10bffc80"

undefined4 * __thiscall Recovered_Bulk::FUN_10bffc80(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x24))(&local_14,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  piVar4 = (int *)((int *)0x0);
  piVar3 = (int *)((int *)0x0);
  local_14 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)*piVar2)(&param_3,param_3));
    piVar4 = (int *)((int *)*piVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *piVar2 = (int)(0);
    if (piVar4 == (int *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    local_14 = (int *)(piVar3);
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *param_2 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10bffdd0; body size 286 bytes.
#line 1 "ENTRY_10bffdd0"

int * __thiscall Recovered_Bulk::FUN_10bffdd0(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if ((*(int **)(param_1 + 8) != (int *)0x0) && (-1 < *(int *)(param_1 + 0x14))) {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x14))(DAT_12126b84 ));
    if (*(int *)(param_1 + 0x14) < iVar2) {
      piVar3 = (int *)((int *)(**(code **)(**(int **)(param_1 + 8) + 0x18))
                                (&local_14,*(int *)(param_1 + 0x14)));
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
      piVar4 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      if (piVar1 != (int *)0x0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
        (**(code **)(*piVar4 + 4))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      *param_2 = (int)((int)piVar1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }

      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }

      return (int *)(param_2);
    }
  }
  *param_2 = (int)(0);

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 10c00b20; body size 92 bytes.
#line 1 "ENTRY_10c00b20"

bool __fastcall FUN_10c00b20(int param_1)

{
  FILE *pFVar1;
  bool bVar2;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    return (bool)(true);
  }
  pFVar1 = (FILE *)(_fdopen(*(int *)(param_1 + 0x14),"rb"));
  *(FILE **)(param_1 + 0x18) = pFVar1;
  thunk_FUN_112af4e0("SCMusicServerData",1,"Preparing For Reading: [%d] Success: [%d]",
                     *(undefined4 *)(param_1 + 0x14),pFVar1 != (FILE *)0x0);
  bVar2 = (bool)(*(int *)(param_1 + 0x18) == 0);
  if (!bVar2) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
    bVar2 = (bool)(*(int *)(param_1 + 0x18) == 0);
  }
  return (bool)(!bVar2);
}


// Reference entry 10c00ba0; body size 92 bytes.
#line 1 "ENTRY_10c00ba0"

bool __fastcall FUN_10c00ba0(int param_1)

{
  FILE *pFVar1;
  bool bVar2;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    return (bool)(true);
  }
  pFVar1 = (FILE *)(_fdopen(*(int *)(param_1 + 0x14),"rb"));
  *(FILE **)(param_1 + 0x18) = pFVar1;
  thunk_FUN_112af4e0("SCMusicServerData",1,"Preparing For Reading: [%d] Success: [%d]",
                     *(undefined4 *)(param_1 + 0x14),pFVar1 != (FILE *)0x0);
  bVar2 = (bool)(*(int *)(param_1 + 0x18) == 0);
  if (!bVar2) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
    bVar2 = (bool)(*(int *)(param_1 + 0x18) == 0);
  }
  return (bool)(!bVar2);
}


// Reference entry 10c010a0; body size 67 bytes.
#line 1 "ENTRY_10c010a0"

size_t __thiscall Recovered_Bulk::FUN_10c010a0(void *param_2,size_t param_3)
{
  int param_1 = (int )this;
  void *_Dst;
  
  if (param_3 == 0) {
    return (size_t)(0);
  }
  _Dst = (void *)((void *)thunk_FUN_1148b586(param_3));
  *(void **)(param_1 + 0x1c) = _Dst;
  if (_Dst == (void *)0x0) {
    return (size_t)(0xffffffff);
  }
  memcpy(_Dst,param_2,param_3);
  *(size_t *)(param_1 + 0x20) = param_3;
  return (size_t)(param_3);
}


// Reference entry 10c01100; body size 67 bytes.
#line 1 "ENTRY_10c01100"

size_t __thiscall Recovered_Bulk::FUN_10c01100(void *param_2,size_t param_3)
{
  int param_1 = (int )this;
  void *_Dst;
  
  if (param_3 == 0) {
    return (size_t)(0);
  }
  _Dst = (void *)((void *)thunk_FUN_1148b586(param_3));
  *(void **)(param_1 + 0x1c) = _Dst;
  if (_Dst == (void *)0x0) {
    return (size_t)(0xffffffff);
  }
  memcpy(_Dst,param_2,param_3);
  *(size_t *)(param_1 + 0x20) = param_3;
  return (size_t)(param_3);
}


// Reference entry 10c01160; body size 80 bytes.
#line 1 "ENTRY_10c01160"

void __thiscall Recovered_Bulk::FUN_10c01160(int *param_2)
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


// Reference entry 10c011d0; body size 165 bytes.
#line 1 "ENTRY_10c011d0"

int __fastcall FUN_10c011d0(int param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x1c) == 0) || (iVar1 = *(int *)(param_1 + 0x20), iVar1 == 0)) {
    if (*(FILE **)(param_1 + 0x18) == (FILE *)0x0) {
      thunk_FUN_112af4e0("SCMusicServerData",1,"TotalBytes could not open file [%d]",
                         *(undefined4 *)(param_1 + 0x14));
      return (int)(0);
    }
    iVar1 = (int)(fseek(*(FILE **)(param_1 + 0x18),0,2));
    if (iVar1 != 0) {
      thunk_FUN_112af4e0("SCMusicServer",1,"Error while finding end of file.");
      return (int)(0);
    }
    lVar2 = (long)(ftell(*(FILE **)(param_1 + 0x18)));
    if (-1 < lVar2) {
      thunk_FUN_112af4e0("SCMusicServerData",1,"TotalBytes of file [%d]: %ld",
                         *(undefined4 *)(param_1 + 0x14),lVar2);
      return (int)(lVar2);
    }
    thunk_FUN_112af4e0("SCMusicServer",1,"Error while reading file position.");
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 10c012b0; body size 165 bytes.
#line 1 "ENTRY_10c012b0"

int __fastcall FUN_10c012b0(int param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x1c) == 0) || (iVar1 = *(int *)(param_1 + 0x20), iVar1 == 0)) {
    if (*(FILE **)(param_1 + 0x18) == (FILE *)0x0) {
      thunk_FUN_112af4e0("SCMusicServerData",1,"TotalBytes could not open file [%d]",
                         *(undefined4 *)(param_1 + 0x14));
      return (int)(0);
    }
    iVar1 = (int)(fseek(*(FILE **)(param_1 + 0x18),0,2));
    if (iVar1 != 0) {
      thunk_FUN_112af4e0("SCMusicServer",1,"Error while finding end of file.");
      return (int)(0);
    }
    lVar2 = (long)(ftell(*(FILE **)(param_1 + 0x18)));
    if (-1 < lVar2) {
      thunk_FUN_112af4e0("SCMusicServerData",1,"TotalBytes of file [%d]: %ld",
                         *(undefined4 *)(param_1 + 0x14),lVar2);
      return (int)(lVar2);
    }
    thunk_FUN_112af4e0("SCMusicServer",1,"Error while reading file position.");
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 10c01fe0; body size 146 bytes.
#line 1 "ENTRY_10c01fe0"

undefined4 * __thiscall Recovered_Bulk::FUN_10c01fe0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAppInteropManager);

  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))(uVar1));
    param_1[3] = (undefined4)(piVar2);
    (**(code **)(*piVar2 + 4))();
  }
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10c02230; body size 147 bytes.
#line 1 "ENTRY_10c02230"

void __fastcall FUN_10c02230(int *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (*param_1 != 0) {
    thunk_FUN_10c029a0(*param_1,param_1[1]);
    iVar1 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4,uVar2);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10c02910; body size 100 bytes.
#line 1 "ENTRY_10c02910"

void __thiscall Recovered_Bulk::FUN_10c02910(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10c029a0(*param_1,param_1[1]);
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
  param_1[1] = (int)(param_2 + param_3 * 8);
  param_1[2] = (int)(param_2 + param_4 * 8);
  return;
}


// Reference entry 10c02aa0; body size 140 bytes.
#line 1 "ENTRY_10c02aa0"

void __fastcall FUN_10c02aa0(int *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  if (*param_1 != 0) {
    thunk_FUN_10c029a0(*param_1,param_1[1]);
    iVar1 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar1 & 0xfffffff8);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4,uVar2);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10c03180; body size 88 bytes.
#line 1 "ENTRY_10c03180"

bool __fastcall FUN_10c03180(int *param_1)

{
 try {
  int iVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x18))(&local_14,DAT_12126b84 ));
  iVar1 = (int)(*piVar2);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (bool)(iVar1 != 0);

 } catch (...) { }
}


// Reference entry 10c04000; body size 173 bytes.
#line 1 "ENTRY_10c04000"

int __thiscall Recovered_Bulk::FUN_10c04000(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  puVar2 = (undefined4 *)(operator_new(0xc));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[1] = (undefined4)(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar2[2] = (undefined4)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(uVar1);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10c04130; body size 173 bytes.
#line 1 "ENTRY_10c04130"

int __thiscall Recovered_Bulk::FUN_10c04130(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  puVar2 = (undefined4 *)(operator_new(0xc));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[1] = (undefined4)(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar2[2] = (undefined4)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(uVar1);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10c04260; body size 173 bytes.
#line 1 "ENTRY_10c04260"

int __thiscall Recovered_Bulk::FUN_10c04260(undefined4 param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 0x24) = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  puVar2 = (undefined4 *)(operator_new(0xc));
  *puVar2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  puVar2[1] = (undefined4)(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  puVar2[2] = (undefined4)(param_3);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(uVar1);
  }
  *(undefined4 **)(param_1 + 0x24) = puVar2;

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10c044d0; body size 119 bytes.
#line 1 "ENTRY_10c044d0"

void __fastcall FUN_10c044d0(int *param_1)

{
 try {
  undefined4 *puVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (int *)(param_1);
  puVar1 = (undefined4 *)((undefined4 *)
           thunk_FUN_10c944f0(&local_14,*param_1,DAT_12126b84 ));

  thunk_FUN_107cc5b0(*puVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  thunk_FUN_107cc370(7);

  return;

 } catch (...) { }
}


// Reference entry 10c04660; body size 124 bytes.
#line 1 "ENTRY_10c04660"

void FUN_10c04660(undefined4 *param_1,int *param_2)

{
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10c944f0(&param_2,*param_1,DAT_12126b84 ));

  thunk_FUN_107cc5b0(*puVar1);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }

  thunk_FUN_107cc370(7);

  return;

 } catch (...) { }
}


// Reference entry 10c047f0; body size 112 bytes.
#line 1 "ENTRY_10c047f0"

undefined4 * FUN_10c047f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 10c04880; body size 112 bytes.
#line 1 "ENTRY_10c04880"

undefined4 * FUN_10c04880(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 10c04910; body size 112 bytes.
#line 1 "ENTRY_10c04910"

undefined4 * FUN_10c04910(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 10c049a0; body size 112 bytes.
#line 1 "ENTRY_10c049a0"

undefined4 * FUN_10c049a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 10c04a30; body size 112 bytes.
#line 1 "ENTRY_10c04a30"

undefined4 * FUN_10c04a30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


// Reference entry 10c04ac0; body size 112 bytes.
#line 1 "ENTRY_10c04ac0"

undefined4 * FUN_10c04ac0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)(operator_new(0xc));
  *puVar3 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);

  puVar3[1] = (undefined4)(*param_1);
  piVar1 = (int *)((int *)param_1[1]);
  puVar3[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(puVar3);

 } catch (...) { }
}


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
extern int operator_new(...);
extern int thunk_FUN_10122560(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101aa9f0(...);
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
extern int thunk_FUN_103bee70(...);
extern int thunk_FUN_103d5640(...);
extern int thunk_FUN_10405e20(...);
extern int thunk_FUN_1040bbc0(...);
extern int thunk_FUN_10475400(...);
extern int thunk_FUN_104885e0(...);
extern int thunk_FUN_104d76e0(...);
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
extern int thunk_FUN_10bcdfc0(...);
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
extern int thunk_FUN_10bf54e0(...);
extern int thunk_FUN_10bf5910(...);
extern int thunk_FUN_10bf5990(...);
extern int thunk_FUN_10bf5b40(...);
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
extern int thunk_FUN_10bfbf40(...);
extern int thunk_FUN_10bfc6d0(...);
extern int thunk_FUN_10bfd620(...);
extern int thunk_FUN_10bfd810(...);
extern int thunk_FUN_10c00420(...);
extern int thunk_FUN_10c02230(...);
extern int thunk_FUN_10c029a0(...);
extern int thunk_FUN_10c944f0(...);
extern int thunk_FUN_10cedc10(...);
extern int thunk_FUN_10d87f10(...);
extern int thunk_FUN_10f7b600(...);
extern int thunk_FUN_10f7b900(...);
extern int thunk_FUN_10f7b950(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_11131cc0(...);
extern int thunk_FUN_11132140(...);
extern int thunk_FUN_11132ba0(...);
extern int thunk_FUN_11132c10(...);
extern int thunk_FUN_111a1880(...);
extern int thunk_FUN_1123fcd0(...);
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
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_SCBrowseDataSourceEventSink;
extern int ghidra_vftable_SCBrowseDataSourceProxy;
extern int ghidra_vftable_SCControllerEventSink;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCMediaItemCollectionEnumerator;
extern int ghidra_vftable_SCMusicServer;
extern int ghidra_vftable_SCOpFactory;
extern int ghidra_vftable_SCServiceAppInteropManager;
extern int ghidra_vftable_SCSwfObjSysListener;
extern int ghidra_vftable_SCUriFilterBase;
extern int ghidra_vftable_SCUrlConnection;
extern int ghidra_vftable_SCUrlConnection_Callback;
extern int ghidra_vftable_SCUrlRequest;
extern int in_EAX;
extern int in_stack_00000028;
extern undefined1 LAB_10be6d7e[];
extern undefined1 LAB_10bee587[];
extern undefined1 LAB_10bfdbb0[];
extern undefined1 LAB_116c994d[];
extern undefined1 LAB_116c998d[];
extern undefined1 LAB_116c9a0d[];
extern undefined1 LAB_116c9a55[];
extern undefined1 LAB_116c9b6d[];
extern undefined1 LAB_116c9d30[];
extern undefined1 LAB_116c9d60[];
extern undefined1 LAB_116c9d90[];
extern undefined1 LAB_116c9df0[];
extern undefined1 LAB_116c9e6d[];
extern undefined1 LAB_116ca5e0[];
extern undefined1 LAB_116ca610[];
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
extern undefined1 LAB_116cab50[];
extern undefined1 LAB_116cabe0[];
extern undefined1 LAB_116cac10[];
extern undefined1 LAB_116cac40[];
extern undefined1 LAB_116caf3d[];
extern undefined1 LAB_116cb00d[];
extern undefined1 LAB_116cb0dd[];
extern undefined1 LAB_116cb5b5[];
extern undefined1 LAB_116cb890[];
extern undefined1 LAB_116cbbf5[];
extern undefined1 LAB_116cc14c[];
extern undefined1 LAB_116cc205[];
extern undefined1 LAB_116cc4a5[];
extern undefined1 LAB_116cc4e5[];
extern undefined1 LAB_116cc525[];
extern undefined1 LAB_116cc815[];
extern undefined1 LAB_116ccb65[];
extern undefined1 LAB_116cd564[];
extern undefined1 LAB_116cd5ad[];
extern undefined1 LAB_116cd6a0[];
extern undefined1 LAB_116cd6d0[];
extern undefined1 LAB_116cd700[];
extern undefined1 LAB_116cd730[];
extern undefined1 LAB_116cd810[];
extern undefined1 LAB_116cd840[];
extern undefined1 LAB_116cd91d[];
extern undefined1 LAB_116cd96d[];
extern undefined1 LAB_116cdcfd[];
extern undefined1 LAB_116cdd3d[];
extern undefined1 LAB_116cde90[];
extern undefined1 LAB_116cdec0[];
extern undefined1 LAB_116cdef0[];
extern undefined1 LAB_116ce20d[];
extern undefined1 LAB_116ceb70[];
extern undefined1 LAB_116ceba0[];
extern undefined1 LAB_116cec00[];
extern undefined1 LAB_116cec30[];
extern undefined1 LAB_116cef4d[];
extern undefined1 LAB_116cf0e5[];
extern undefined1 LAB_116cf15d[];
extern undefined1 LAB_116cf22d[];
extern undefined1 LAB_116cf26d[];
extern undefined1 LAB_116cf2b5[];
extern undefined1 LAB_116cf6f0[];
extern undefined1 LAB_116cf720[];
extern undefined1 LAB_116cf980[];
extern undefined1 LAB_116cfb3d[];
extern undefined1 LAB_116cfcbd[];
extern undefined1 LAB_116cfcfd[];
extern undefined1 LAB_116cfd3d[];
extern undefined1 LAB_116cfd70[];
extern undefined1 LAB_116cfda0[];
extern undefined1 LAB_116cfdd0[];
extern undefined1 LAB_116cfe00[];
extern undefined1 LAB_116cfe90[];
extern undefined1 LAB_116cff20[];
extern undefined1 LAB_116cff9d[];
extern undefined1 LAB_116cffdd[];
extern undefined1 LAB_116d0075[];
extern undefined1 LAB_116d00d5[];
extern undefined1 LAB_116d0650[];
extern undefined1 LAB_116d06e0[];
extern undefined1 LAB_116d0770[];
extern undefined1 LAB_116d0800[];
extern undefined1 LAB_116d0890[];
extern undefined1 LAB_116d0a50[];
extern undefined1 LAB_116d0dad[];
extern undefined1 LAB_116d0e2d[];
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
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
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
struct Recovered_Bulk { char _pad; int * __thiscall FUN_10bd0c60(int *param_2,int *param_3); int * __thiscall FUN_10bd0d80(int *param_2,int *param_3); int * __thiscall FUN_10bd0fe0(int *param_2,int *param_3); int * __thiscall FUN_10bd10f0(int *param_2,int *param_3); void __thiscall FUN_10bd2e50(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_10bd34c0(undefined4 *param_2); undefined4 * __thiscall FUN_10bd4a00(undefined4 param_2,undefined1 param_3); undefined4 * __thiscall FUN_10bd4aa0(undefined1 param_2); int __thiscall FUN_10bd7dd0(uint *param_2); int __thiscall FUN_10bd80e0(int *param_2); int __thiscall FUN_10bd81d0(int *param_2); int __thiscall FUN_10bd82f0(int *param_2); int __thiscall FUN_10bd8410(int *param_2); int __thiscall FUN_10bd8500(int *param_2); int __thiscall FUN_10bd85f0(int *param_2); undefined4 * __thiscall FUN_10bd8e60(byte param_2); int __thiscall FUN_10bd9020(byte param_2); int __thiscall FUN_10bd90b0(byte param_2); int __thiscall FUN_10bd9140(byte param_2); void __thiscall FUN_10bd97a0(int param_2,int param_3,int param_4); void __thiscall FUN_10bd9810(int param_2,int param_3,int param_4); void __thiscall FUN_10bd9880(int param_2,int param_3,int param_4); void __thiscall FUN_10bd9930(int param_2,int param_3,int param_4); void __thiscall FUN_10bd99f0(int param_2,int param_3,int param_4); void __thiscall FUN_10bd9ba0(uint param_2); void __thiscall FUN_10bd9cd0(int *param_2); void __thiscall FUN_10bd9d90(int *param_2); int __thiscall FUN_10bdc920(int param_2,int param_3,int param_4); void __thiscall FUN_10bdcba0(int param_2,int param_3,int param_4); void __thiscall FUN_10bdce20(int param_2,int param_3,int param_4); undefined4 __thiscall FUN_10be0260(int param_2); uint __thiscall FUN_10be03d0(int param_2); void __thiscall FUN_10be21e0(undefined4 *param_2,int *param_3); void __thiscall FUN_10be22f0(int *param_2,uint *param_3); void __thiscall FUN_10be2350(int *param_2,uint *param_3); void __thiscall FUN_10be2570(int *param_2,int *param_3); void __thiscall FUN_10be25d0(int *param_2,int *param_3); void __thiscall FUN_10be2630(int *param_2,int *param_3); void __thiscall FUN_10be2690(int *param_2,int *param_3); void __thiscall FUN_10be26f0(int *param_2,int *param_3); void __thiscall FUN_10be2750(int *param_2,int *param_3); void __thiscall FUN_10be27b0(int *param_2,int *param_3); void __thiscall FUN_10be2810(int *param_2,int *param_3); undefined4 * __thiscall FUN_10be5b80(undefined4 *param_2,void *param_3); int __thiscall FUN_10be6d30(int param_2); uint __thiscall FUN_10be8350(uint param_2,uint param_3); char __thiscall FUN_10be9340(int *param_2,int param_3); void __thiscall FUN_10bed460(undefined4 param_2,undefined4 param_3,undefined4 param_4); void __thiscall FUN_10bed510(char param_2); undefined4 * __thiscall FUN_10bed9e0(byte param_2); undefined4 * __thiscall FUN_10beda90(byte param_2); undefined4 * __thiscall FUN_10bee0b0(byte param_2); int __thiscall FUN_10beebe0(int param_2); undefined4 * __thiscall FUN_10beec60(void); undefined4 * __thiscall FUN_10bef940(undefined4 param_2,undefined4 param_3); int * __thiscall FUN_10bf0470(int *param_2); int * __thiscall FUN_10bf04e0(int *param_2); undefined4 * __thiscall FUN_10bf0640(byte param_2); void __thiscall FUN_10bf18b0(undefined4 param_2,undefined4 *param_3,char param_4); void __thiscall FUN_10bf3bc0(int *param_2,undefined4 param_3,uint param_4); void __thiscall FUN_10bf4710(int *param_2,undefined4 *param_3); void __thiscall FUN_10bf4770(int *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_10bf60e0(byte param_2); float __thiscall FUN_10bf65f0(int param_2); float __thiscall FUN_10bf66a0(int param_2); void __thiscall FUN_10bf6e80(int param_2); void __thiscall FUN_10bf6ef0(int param_2); void __thiscall FUN_10bf88b0(undefined4 param_2); int * __thiscall FUN_10bfb9e0(int *param_2); float __thiscall FUN_10bfbe90(int param_2); void __thiscall FUN_10bfc2e0(int param_2); void __thiscall FUN_10bfd8e0(int param_2); int * __thiscall FUN_10bfed00(int *param_2); int * __thiscall FUN_10bfed70(int *param_2); undefined4 * __thiscall FUN_10bff080(byte param_2); size_t __thiscall FUN_10bff9a0(uint param_2,void *param_3,size_t param_4); size_t __thiscall FUN_10bffb10(uint param_2,void *param_3,size_t param_4); undefined4 * __thiscall FUN_10bffc80(undefined4 *param_2,int *param_3); int * __thiscall FUN_10bffdd0(int *param_2); size_t __thiscall FUN_10c010a0(void *param_2,size_t param_3); size_t __thiscall FUN_10c01100(void *param_2,size_t param_3); void __thiscall FUN_10c01160(int *param_2); undefined4 * __thiscall FUN_10c02810(byte param_2); void __thiscall FUN_10c02910(int param_2,int param_3,int param_4); };
using namespace std;
int FUN_10bd1690(int param_1,int param_2,int param_3,undefined4 param_4);
void FUN_10bd2350(undefined4 param_1,int param_2);
void FUN_10bd23c0(undefined4 param_1,int param_2);
void FUN_10bd2430(undefined4 param_1,int param_2);
void FUN_10bd2530(undefined4 param_1,undefined4 *param_2);
void __fastcall FUN_10bd6120(undefined4 *param_1);
void __fastcall FUN_10bd6190(undefined4 *param_1);
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
void FUN_10bed100(int *param_1,undefined4 param_2);
void __fastcall FUN_10bed8c0(undefined4 *param_1);
void __fastcall FUN_10bed950(undefined4 *param_1);
void __fastcall FUN_10bedf20(undefined4 *param_1);
void __fastcall FUN_10bee550(int param_1);
undefined4 * __fastcall FUN_10befa20(undefined4 *param_1);
void __fastcall FUN_10bf0010(undefined4 *param_1);
void __fastcall FUN_10bf0080(undefined4 *param_1);
void __fastcall FUN_10bf0160(undefined4 *param_1);
void __fastcall FUN_10bf09f0(int param_1);
undefined4 * FUN_10bf25e0(undefined4 *param_1,int param_2);
void FUN_10bf3d70(undefined4 param_1,undefined4 *param_2);
void FUN_10bf3e70(undefined4 param_1,int param_2);
void FUN_10bf4610(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10bf4690(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_10bf56b0(int param_1);
void __fastcall FUN_10bf5720(int param_1);
void __fastcall FUN_10bf57a0(int *param_1);
void __fastcall FUN_10bf5810(int *param_1);
void __fastcall FUN_10bf5910(int *param_1);
void __fastcall FUN_10bf5990(int *param_1);
void __fastcall FUN_10bf5aa0(undefined4 *param_1);
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
void __fastcall FUN_10bfb340(undefined4 *param_1);
void __fastcall FUN_10bfb3d0(int param_1);
void __fastcall FUN_10bfb440(int *param_1);
void __fastcall FUN_10bfb4f0(int *param_1);
void __fastcall FUN_10bfb550(int *param_1);
void __fastcall FUN_10bfc360(float *param_1);
void __fastcall FUN_10bfc430(int *param_1);
void __fastcall FUN_10bfc4a0(int *param_1);
void __fastcall FUN_10bfc6d0(int param_1);
void __fastcall FUN_10bfc760(int *param_1);
/* WARNING: Removing unreachable block (ram,0x10bfcfeb) */ void __fastcall FUN_10bfcf10(int param_1);
void __fastcall FUN_10bfd810(int param_1);
/* WARNING: Removing unreachable block_10bfdf40 (ram,0x10bfe048) */ void __fastcall FUN_10bfdf40(int param_1);
void __fastcall FUN_10bfe120(int param_1);
void __fastcall FUN_10bfe200(int param_1);
void __fastcall FUN_10bfe820(undefined4 *param_1);
void __fastcall FUN_10bfe890(undefined4 *param_1);
void __fastcall FUN_10bfe900(undefined4 *param_1);
void __fastcall FUN_10bfe970(undefined4 *param_1);
void __fastcall FUN_10bfeb40(undefined4 *param_1);
undefined4 * FUN_10bff400(undefined4 *param_1,int *param_2);
undefined4 * FUN_10bff580(undefined4 *param_1,int *param_2);
void __fastcall FUN_10bff8e0(int param_1);
void __fastcall FUN_10bff940(int param_1);
bool __fastcall FUN_10c00b20(int param_1);
bool __fastcall FUN_10c00ba0(int param_1);
int __fastcall FUN_10c011d0(int param_1);
int __fastcall FUN_10c012b0(int param_1);
void __fastcall FUN_10c020c0(undefined4 *param_1);
void __fastcall FUN_10c02230(int *param_1);
void __fastcall FUN_10c02470(undefined4 *param_1);
void __fastcall FUN_10c02aa0(int *param_1);
bool __fastcall FUN_10c03180(int *param_1);
void __fastcall FUN_10c044d0(int *param_1);
void FUN_10c04660(undefined4 *param_1,int *param_2);
// Reference entry 10bd0c60; body size 221 bytes.
#line 1 "ENTRY_10bd0c60"

int * __thiscall Recovered_Bulk::FUN_10bd0c60(int *param_2,int *param_3)
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
  puStack_c = (undefined1 *)(LAB_116c994d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bcfa70(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
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
    iVar4 = (int)(thunk_FUN_10bdb3e0(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 10bd0d80; body size 221 bytes.
#line 1 "ENTRY_10bd0d80"

int * __thiscall Recovered_Bulk::FUN_10bd0d80(int *param_2,int *param_3)
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
  puStack_c = (undefined1 *)(LAB_116c998d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bcfad0(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
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
    iVar4 = (int)(thunk_FUN_10bdb670(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 10bd0fe0; body size 214 bytes.
#line 1 "ENTRY_10bd0fe0"

int * __thiscall Recovered_Bulk::FUN_10bd0fe0(int *param_2,int *param_3)
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
  puStack_c = (undefined1 *)(LAB_116c9a0d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bcf950(&local_24,param_3);
  if ((*(char *)(local_1c + 0xd) == '\0') && (*(int *)(local_1c + 0x10) <= *param_3)) {
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
    iVar4 = (int)(thunk_FUN_10bdac30(local_24,local_20,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 10bd10f0; body size 253 bytes.
#line 1 "ENTRY_10bd10f0"

int * __thiscall Recovered_Bulk::FUN_10bd10f0(int *param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c9a55);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4 *)(param_1);
  thunk_FUN_10bcf9b0(&local_28,param_3);
  if ((*(char *)(local_20 + 0xd) == '\0') && (*(int *)(local_20 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_20);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0x5555555) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x30));
    local_8 = (undefined4)(1);
    puVar3[4] = *param_3;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined8 *)(puVar3 + 9) = 0;
    puVar3[0xb] = 0;
    local_18 = (undefined4 *)(puVar3);
    thunk_FUN_10bd4920();
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    iVar4 = (int)(thunk_FUN_10bdaec0(local_28,local_24,puVar3));
    *param_2 = (int)(iVar4);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar2);
}


// Reference entry 10bd1690; body size 127 bytes.
#line 1 "ENTRY_10bd1690"

int FUN_10bd1690(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c9b6d);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x1c) {
    thunk_FUN_10bd5dc0(param_1);
    param_3 = (int)(param_3 + 0x1c);
    ppvVar1 = (void **)(ExceptionList);
  }
  thunk_FUN_10352990(param_3,param_3,param_4,uVar2);
  ExceptionList = (void *)(local_10);
  return (int)(param_3);
}


// Reference entry 10bd2350; body size 85 bytes.
#line 1 "ENTRY_10bd2350"

void FUN_10bd2350(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c9d30);
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


// Reference entry 10bd23c0; body size 85 bytes.
#line 1 "ENTRY_10bd23c0"

void FUN_10bd23c0(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c9d60);
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


// Reference entry 10bd2430; body size 85 bytes.
#line 1 "ENTRY_10bd2430"

void FUN_10bd2430(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c9d90);
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


// Reference entry 10bd2530; body size 84 bytes.
#line 1 "ENTRY_10bd2530"

void FUN_10bd2530(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116c9df0);
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


// Reference entry 10bd2e50; body size 232 bytes.
#line 1 "ENTRY_10bd2e50"

void __thiscall Recovered_Bulk::FUN_10bd2e50(undefined4 *param_2,int *param_3)
{
  int *param_1 = (int *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116c9e6d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
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
                    
      thunk_FUN_101d7220(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    }
    local_8 = (undefined4)(0);
    piVar3 = (int *)(operator_new(0x14));
    piVar3[4] = *param_3;
    *piVar3 = (int)((int)puVar1);
    piVar3[1] = (int)puVar1;
    piVar3[2] = (int)puVar1;
    *(undefined2 *)(piVar3 + 3) = 0;
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10bdb900(puVar7,bVar6,piVar3));
    uVar5 = (undefined1)(1);
  }
  *param_2 = (undefined4)(puVar4);
  *(undefined1 *)(param_2 + 1) = uVar5;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bd34c0; body size 70 bytes.
#line 1 "ENTRY_10bd34c0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd34c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar2 = (void *)(operator_new(0x30));
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


// Reference entry 10bd4a00; body size 121 bytes.
#line 1 "ENTRY_10bd4a00"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd4a00(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = param_3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10bd4aa0; body size 121 bytes.
#line 1 "ENTRY_10bd4aa0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd4aa0(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 10) = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return (undefined4 *)(param_1);
}


// Reference entry 10bd6120; body size 76 bytes.
#line 1 "ENTRY_10bd6120"

void __fastcall FUN_10bd6120(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ca5e0);
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


// Reference entry 10bd6190; body size 76 bytes.
#line 1 "ENTRY_10bd6190"

void __fastcall FUN_10bd6190(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ca610);
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


// Reference entry 10bd6200; body size 68 bytes.
#line 1 "ENTRY_10bd6200"

void __fastcall FUN_10bd6200(int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ca640);
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


// Reference entry 10bd6780; body size 111 bytes.
#line 1 "ENTRY_10bd6780"

void __fastcall FUN_10bd6780(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116ca700);
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


// Reference entry 10bd6820; body size 111 bytes.
#line 1 "ENTRY_10bd6820"

void __fastcall FUN_10bd6820(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116ca730);
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


// Reference entry 10bd68c0; body size 111 bytes.
#line 1 "ENTRY_10bd68c0"

void __fastcall FUN_10bd68c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116ca760);
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


// Reference entry 10bd6d30; body size 84 bytes.
#line 1 "ENTRY_10bd6d30"

void __fastcall FUN_10bd6d30(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116ca7f0);
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


// Reference entry 10bd6da0; body size 84 bytes.
#line 1 "ENTRY_10bd6da0"

void __fastcall FUN_10bd6da0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116ca820);
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


// Reference entry 10bd6e10; body size 84 bytes.
#line 1 "ENTRY_10bd6e10"

void __fastcall FUN_10bd6e10(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116ca850);
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
    param_1[1] = 0;
    param_1[2] = 0;
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
    param_1[1] = 0;
    param_1[2] = 0;
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10bd7dd0; body size 188 bytes.
#line 1 "ENTRY_10bd7dd0"

int __thiscall Recovered_Bulk::FUN_10bd7dd0(uint *param_2)
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
  puStack_c = (undefined1 *)(LAB_116ca91d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bcf810(&local_24,param_2);
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
    local_1c = (int)(thunk_FUN_10bda480(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
}


// Reference entry 10bd80e0; body size 181 bytes.
#line 1 "ENTRY_10bd80e0"

int __thiscall Recovered_Bulk::FUN_10bd80e0(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116ca9dd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bcf950(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
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
    local_1c = (int)(thunk_FUN_10bdac30(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
}


// Reference entry 10bd81d0; body size 219 bytes.
#line 1 "ENTRY_10bd81d0"

int __thiscall Recovered_Bulk::FUN_10bd81d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116caa25);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4 *)(param_1);
  thunk_FUN_10bcf9b0(&local_28,param_2);
  if ((*(char *)(local_20 + 0xd) != '\0') || (*param_2 < *(int *)(local_20 + 0x10))) {
    if (param_1[1] == 0x5555555) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x30));
    local_8 = (undefined4)(1);
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined8 *)(puVar3 + 9) = 0;
    puVar3[0xb] = 0;
    local_18 = (undefined4 *)(puVar3);
    thunk_FUN_10bd4920();
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_20 = (int)(thunk_FUN_10bdaec0(local_28,local_24,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_20 + 0x14);
}


// Reference entry 10bd82f0; body size 219 bytes.
#line 1 "ENTRY_10bd82f0"

int __thiscall Recovered_Bulk::FUN_10bd82f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116caa65);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4 *)(param_1);
  thunk_FUN_10bcf9b0(&local_28,param_2);
  if ((*(char *)(local_20 + 0xd) != '\0') || (*param_2 < *(int *)(local_20 + 0x10))) {
    if (param_1[1] == 0x5555555) {
                    
      thunk_FUN_101d7220(uVar2);
    }
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_1c = (undefined4 *)(param_1);
    puVar3 = (undefined4 *)(operator_new(0x30));
    local_8 = (undefined4)(1);
    puVar3[4] = *param_2;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined8 *)(puVar3 + 9) = 0;
    puVar3[0xb] = 0;
    local_18 = (undefined4 *)(puVar3);
    thunk_FUN_10bd4920();
    *puVar3 = (undefined4)(uVar1);
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_20 = (int)(thunk_FUN_10bdaec0(local_28,local_24,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_20 + 0x14);
}


// Reference entry 10bd8410; body size 188 bytes.
#line 1 "ENTRY_10bd8410"

int __thiscall Recovered_Bulk::FUN_10bd8410(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116caa9d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bcfa10(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
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
    local_1c = (int)(thunk_FUN_10bdb150(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
}


// Reference entry 10bd8500; body size 188 bytes.
#line 1 "ENTRY_10bd8500"

int __thiscall Recovered_Bulk::FUN_10bd8500(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116caadd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bcfa70(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
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
    local_1c = (int)(thunk_FUN_10bdb3e0(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
}


// Reference entry 10bd85f0; body size 188 bytes.
#line 1 "ENTRY_10bd85f0"

int __thiscall Recovered_Bulk::FUN_10bd85f0(int *param_2)
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
  puStack_c = (undefined1 *)(LAB_116cab1d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bcfad0(&local_24,param_2);
  if ((*(char *)(local_1c + 0xd) != '\0') || (*param_2 < *(int *)(local_1c + 0x10))) {
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
    local_1c = (int)(thunk_FUN_10bdb670(local_24,local_20,puVar3));
  }
  ExceptionList = (void *)(local_10);
  return (int)(local_1c + 0x14);
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


// Reference entry 10bd8e60; body size 106 bytes.
#line 1 "ENTRY_10bd8e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10bd8e60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cab50);
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


// Reference entry 10bd9020; body size 107 bytes.
#line 1 "ENTRY_10bd9020"

int __thiscall Recovered_Bulk::FUN_10bd9020(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cabe0);
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


// Reference entry 10bd90b0; body size 107 bytes.
#line 1 "ENTRY_10bd90b0"

int __thiscall Recovered_Bulk::FUN_10bd90b0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cac10);
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


// Reference entry 10bd9140; body size 107 bytes.
#line 1 "ENTRY_10bd9140"

int __thiscall Recovered_Bulk::FUN_10bd9140(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cac40);
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
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
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
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
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
  param_1[1] = param_2 + param_3 * 0xc;
  param_1[2] = param_2 + param_4 * 0xc;
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
  param_1[1] = param_2 + param_3 * 0x1c;
  param_1[2] = param_2 + param_4 * 0x1c;
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
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
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
    param_1[1] = 0;
    param_1[2] = 0;
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
  param_1[1] = 0;
  uVar7 = (undefined4)(thunk_FUN_10bcd530(*(undefined4 *)(*param_2 + 4),*param_1,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar7;
  piVar3 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
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
  param_1[1] = 0;
  uVar7 = (undefined4)(thunk_FUN_10bcd670(*(undefined4 *)(*param_2 + 4),*param_1,param_2));
  *(undefined4 *)(*param_1 + 4) = uVar7;
  piVar3 = (int *)((int *)*param_1);
  param_1[1] = param_2[1];
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
    param_1[1] = 0;
    param_1[2] = 0;
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
    param_1[1] = 0;
    param_1[2] = 0;
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 10bdc920; body size 137 bytes.
#line 1 "ENTRY_10bdc920"

int __thiscall Recovered_Bulk::FUN_10bdc920(int param_2,int param_3,int param_4)
{
  undefined4 param_1 = (undefined4 )this;
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116caf3d);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_2 != param_3); param_2 = param_2 + 0x1c) {
    thunk_FUN_10bd5dc0(param_2);
    param_4 = (int)(param_4 + 0x1c);
    ppvVar1 = (void **)(ExceptionList);
  }
  thunk_FUN_10352990(param_4,param_4,param_1,uVar2);
  ExceptionList = (void *)(local_10);
  return (int)(param_4);
}


// Reference entry 10bdcba0; body size 135 bytes.
#line 1 "ENTRY_10bdcba0"

void __thiscall Recovered_Bulk::FUN_10bdcba0(int param_2,int param_3,int param_4)
{
  undefined4 param_1 = (undefined4 )this;
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cb00d);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_2 != param_3); param_2 = param_2 + 0x1c) {
    thunk_FUN_10475400(param_2);
    param_4 = (int)(param_4 + 0x1c);
    ppvVar1 = (void **)(ExceptionList);
  }
  thunk_FUN_10352990(param_4,param_4,param_1,uVar2);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bdce20; body size 135 bytes.
#line 1 "ENTRY_10bdce20"

void __thiscall Recovered_Bulk::FUN_10bdce20(int param_2,int param_3,int param_4)
{
  undefined4 param_1 = (undefined4 )this;
  void **ppvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cb0dd);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar1 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar1, param_2 != param_3); param_2 = param_2 + 0x1c) {
    thunk_FUN_10475400(param_2);
    param_4 = (int)(param_4 + 0x1c);
    ppvVar1 = (void **)(ExceptionList);
  }
  thunk_FUN_10352990(param_4,param_4,param_1,uVar2);
  ExceptionList = (void *)(local_10);
  return;
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cb5b5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(5);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
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


// Reference entry 10be21e0; body size 206 bytes.
#line 1 "ENTRY_10be21e0"

void __thiscall Recovered_Bulk::FUN_10be21e0(undefined4 *param_2,int *param_3)
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
  puStack_c = (undefined1 *)(LAB_116cb890);
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
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cbbf5);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar3 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar2 + 0x4c) + 0xe8) + 4))(&local_14,10,uVar1));
  local_8 = (undefined4)(0);
  thunk_FUN_10bcc760(uVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*local_18 + 0x1c))(param_1,param_2);
  local_8 = (undefined4)(4);
  (**(code **)(*local_18 + 8))();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 10be5b80; body size 271 bytes.
#line 1 "ENTRY_10be5b80"

undefined4 * __thiscall Recovered_Bulk::FUN_10be5b80(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
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
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cc14c);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if ((param_3 == (void *)0x1) || (param_3 == (void *)0x3)) {
    thunk_FUN_10bcfa10(local_1c,&param_3);
    if ((*(char *)((int)local_14 + 0xd) != '\0') ||
       (piVar3 = local_14, iVar1 < *(int *)((int)local_14 + 0x10))) {
      piVar3 = (int *)(*(int **)(param_1 + 0x34));
    }
    if (piVar3 != (int *)*(int *)(param_1 + 0x34)) {
      param_3 = (void *)(operator_new(0x10));
      local_8 = (undefined4)(0);
      if (param_3 == (void *)0x0) {
        piVar3 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)thunk_FUN_103d5640(*(undefined4 *)((int)piVar3 + 0x14)));
      }
      piVar4 = (int *)((int *)0x0);
      local_8 = (undefined4)(0xffffffff);
      local_14 = (int *)((int *)0x0);
      local_18 = (int *)(piVar3);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(uVar2));
        local_14 = (int *)(piVar4);
        (**(code **)(*piVar4 + 4))();
      }
      local_8 = (undefined4)(1);
      *param_2 = (undefined4)(piVar3);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      local_8 = (undefined4)(2);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))();
      }
      ExceptionList = (void *)(local_10);
      return (undefined4 *)(param_2);
    }
  }
  *param_2 = (undefined4)(0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10be5fd0; body size 150 bytes.
#line 1 "ENTRY_10be5fd0"

undefined4 __stdcall FUN_10be5fd0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cc205);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar3 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar2 + 0x4c) + 0xe8) + 4))(&local_14,10,uVar1));
  local_8 = (undefined4)(0);
  thunk_FUN_10bcc760(uVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  (**(code **)(*local_18 + 0x34))(param_1,param_2);
  local_8 = (undefined4)(4);
  (**(code **)(*local_18 + 8))();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cc4a5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(5);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
}


// Reference entry 10be6ea0; body size 179 bytes.
#line 1 "ENTRY_10be6ea0"

undefined1 __stdcall FUN_10be6ea0(undefined4 param_1)

{
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cc4e5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(5);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
}


// Reference entry 10be6f80; body size 179 bytes.
#line 1 "ENTRY_10be6f80"

undefined1 __stdcall FUN_10be6f80(undefined4 param_1)

{
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
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cc525);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiVar5 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(5);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
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
  undefined1 uVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  undefined4 uVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cc815);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  uVar4 = (undefined4)((**(code **)(**(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) + 4))(&local_14,10,uVar2));
  local_8 = (undefined4)(0);
  thunk_FUN_10bcc760(uVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  uVar1 = (undefined1)((**(code **)(*local_18 + 0x38))(param_1));
  local_8 = (undefined4)(4);
  (**(code **)(*local_18 + 8))();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar1);
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
  
  puStack_c = (undefined1 *)(LAB_116ccb65);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_1c = (int *)((int *)0x0);
  local_18 = (int *)((int *)0x0);
  local_8 = (undefined4)(0);
  cVar2 = (char)(thunk_FUN_1040bbc0("SCVoiceUtility",&local_1c,param_2,0,
                             DAT_12126b84 ^ (uint)&stack0xfffffffc));
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
            local_30 = (undefined4)(0);
            local_34 = (undefined4 *)((undefined4 *)(param_1 + 0x2c));
            puVar5 = (undefined4 *)(operator_new(0x1c));
            *(unsigned char *)((char *)&local_8 + 0) = 7;
            puVar5[4] = param_3;
            puVar5[5] = 0;
            puVar5[6] = 0;
            *puVar5 = (undefined4)(uVar3);
            puVar5[1] = uVar3;
            puVar5[2] = uVar3;
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
  local_8 = (undefined4)(0xd);
  if (local_18 != (int *)0x0) {
    local_1c = (int *)((int *)0x0);
    local_18 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (char)(cVar2);
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


// Reference entry 10bed100; body size 328 bytes.
#line 1 "ENTRY_10bed100"

void FUN_10bed100(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  SCLibrary *this_;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int **ppiVar9;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cd564);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppiVar9 = (int **)(&local_14);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ((SCLibrary *)(this_))->getSCHousehold();
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    piVar7 = (int *)((int *)*param_1);
    if (piVar7 != (int *)param_1[1]) {
      do {
        puVar1 = (undefined4 *)((undefined4 *)*piVar7);
        if (puVar1 != (undefined4 *)0x0) {
          thunk_FUN_10f7b950(ppiVar9,uVar2);
          (**(code **)*puVar1)(1);
        }
        piVar7 = (int *)(piVar7 + 1);
      } while (piVar7 != (int *)param_1[1]);
      param_1[1] = *param_1;
    }
    uVar3 = (undefined4)(thunk_FUN_110828b0());
    thunk_FUN_11131cc0(uVar3,2,0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    iVar4 = (int)(thunk_FUN_11132ba0());
    iVar8 = (int)(0);
    if (0 < iVar4) {
      do {
        local_18 = (int)(thunk_FUN_11132c10(iVar8));
        if (local_18 != 0) {
          pvVar5 = (void *)(operator_new(0x20));
          *(unsigned char *)((char *)&local_8 + 0) = 2;
          if (pvVar5 == (void *)0x0) {
            iVar6 = (int)(0);
          }
          else {
            uVar3 = (undefined4)(thunk_FUN_110ce190());
            iVar6 = (int)(thunk_FUN_10f7b600(param_2,uVar3));
          }
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
          local_18 = (int)(iVar6);
          thunk_FUN_10f7b900();
          piVar7 = (int *)((int *)param_1[1]);
          if (piVar7 == (int *)param_1[2]) {
            thunk_FUN_10bcdfc0(piVar7,&local_18);
          }
          else {
            *piVar7 = (int)(iVar6);
            param_1[1] = param_1[1] + 4;
          }
        }
        iVar8 = (int)(iVar8 + 1);
      } while (iVar8 < iVar4);
    }
    thunk_FUN_11132140();
  }
  local_8 = (undefined4)(3);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bed460; body size 137 bytes.
#line 1 "ENTRY_10bed460"

void __thiscall Recovered_Bulk::FUN_10bed460(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cd5ad);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_1 + 0xd != &param_2) {
    thunk_FUN_10648010(param_2,param_3,param_4);
  }
  param_1[7] = 0;
  *(undefined2 *)((int)param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  thunk_FUN_10352990(*param_1,param_1[1],param_1,uVar1);
  param_1[1] = *param_1;
  thunk_FUN_10be0520();
  thunk_FUN_1036e480();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bed510; body size 81 bytes.
#line 1 "ENTRY_10bed510"

void __thiscall Recovered_Bulk::FUN_10bed510(char param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  param_1[7] = 0;
  *(undefined2 *)((int)param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  thunk_FUN_10352990(*param_1,param_1[1],param_1);
  param_1[1] = *param_1;
  if (param_2 == '\0') {
    puVar1 = (undefined4 *)(param_1 + 0xd);
    thunk_FUN_10352a90(*puVar1,param_1[0xe],puVar1);
    param_1[0xe] = *puVar1;
  }
  thunk_FUN_10be0520();
  return;
}


// Reference entry 10bed8c0; body size 110 bytes.
#line 1 "ENTRY_10bed8c0"

void __fastcall FUN_10bed8c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cd6a0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUriFilterBase);
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


// Reference entry 10bed950; body size 110 bytes.
#line 1 "ENTRY_10bed950"

void __fastcall FUN_10bed950(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cd6d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUriFilterBase);
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


// Reference entry 10bed9e0; body size 131 bytes.
#line 1 "ENTRY_10bed9e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bed9e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cd700);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUriFilterBase);
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


// Reference entry 10beda90; body size 131 bytes.
#line 1 "ENTRY_10beda90"

undefined4 * __thiscall Recovered_Bulk::FUN_10beda90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cd730);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUriFilterBase);
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


// Reference entry 10bedf20; body size 268 bytes.
#line 1 "ENTRY_10bedf20"

void __fastcall FUN_10bedf20(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cd810);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseDataSourceProxy);
  param_1[2] = (uint)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[10] = (uint)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[0x20] = (uint)&ghidra_vftable_SCBrowseDataSourceProxy;
  piVar1 = (int *)((int *)param_1[0x28]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x24]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x20] = (uint)&ghidra_vftable_SCBrowseDataSourceEventSink;
  piVar1 = (int *)((int *)param_1[0x22]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_104d76e0();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bee0b0; body size 292 bytes.
#line 1 "ENTRY_10bee0b0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bee0b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cd840);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBrowseDataSourceProxy);
  param_1[2] = (uint)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[10] = (uint)&ghidra_vftable_SCBrowseDataSourceProxy;
  param_1[0x20] = (uint)&ghidra_vftable_SCBrowseDataSourceProxy;
  piVar1 = (int *)((int *)param_1[0x28]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x26]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[0x24]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x20] = (uint)&ghidra_vftable_SCBrowseDataSourceEventSink;
  piVar1 = (int *)((int *)param_1[0x22]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_104d76e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
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
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cd91d);
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


// Reference entry 10beec60; body size 163 bytes.
#line 1 "ENTRY_10beec60"

undefined4 * __thiscall Recovered_Bulk::FUN_10beec60(void)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  undefined4 uVar2;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cd96d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlConnection_Callback);
  param_1[2] = 0;
  param_1[0xd] = 0;
  local_8 = (undefined4)(2);
  if (in_stack_00000028 != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)*in_stack_00000028)(param_1 + 4,uVar1));
    param_1[0xd] = uVar2;
    if (in_stack_00000028 != (int *)0x0) {
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004);
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bef940; body size 169 bytes.
#line 1 "ENTRY_10bef940"

undefined4 * __thiscall Recovered_Bulk::FUN_10bef940(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cdcfd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlRequest);
  param_1[2] = 0;
  param_1[3] = 2000;
  thunk_FUN_101e6610(param_2);
  param_1[0xd] = param_3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10befa20; body size 170 bytes.
#line 1 "ENTRY_10befa20"

undefined4 * __fastcall FUN_10befa20(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cdd3d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlRequest);
  param_1[2] = 0;
  param_1[3] = 2000;
  thunk_FUN_101e69d0(&DAT_1186d2ee);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf0010; body size 76 bytes.
#line 1 "ENTRY_10bf0010"

void __fastcall FUN_10bf0010(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cde90);
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


// Reference entry 10bf0080; body size 76 bytes.
#line 1 "ENTRY_10bf0080"

void __fastcall FUN_10bf0080(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cdec0);
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


// Reference entry 10bf0160; body size 223 bytes.
#line 1 "ENTRY_10bf0160"

void __fastcall FUN_10bf0160(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cdef0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlConnection);
  param_1[2] = (uint)&ghidra_vftable_SCUrlConnection;
  piVar1 = (int *)((int *)param_1[0xc]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[10]);
  local_8 = (undefined4)(1);
  if (piVar1 != (int *)0x0) {
    param_1[9] = 0;
    param_1[10] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[7]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(3);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCIObj;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bf0470; body size 81 bytes.
#line 1 "ENTRY_10bf0470"

int * __thiscall Recovered_Bulk::FUN_10bf0470(int *param_2)
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


// Reference entry 10bf04e0; body size 81 bytes.
#line 1 "ENTRY_10bf04e0"

int * __thiscall Recovered_Bulk::FUN_10bf04e0(int *param_2)
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


// Reference entry 10bf0640; body size 84 bytes.
#line 1 "ENTRY_10bf0640"

undefined4 * __thiscall Recovered_Bulk::FUN_10bf0640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlConnection_Callback);
  piVar1 = (int *)((int *)param_1[0xd]);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1) + 4);
    param_1[0xd] = 0;
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4 *)(param_1);
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


// Reference entry 10bf18b0; body size 196 bytes.
#line 1 "ENTRY_10bf18b0"

void __thiscall Recovered_Bulk::FUN_10bf18b0(undefined4 param_2,undefined4 *param_3,char param_4)
{
  int *param_1 = (int *)this;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116ce20d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if (param_1[0xe] == 0) {
    piVar3 = (int *)((int *)createPropertyBag());
    piVar1 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);
    piVar3 = (int *)((int *)param_1[0xf]);
    local_8 = (undefined4)(0);
    if (piVar3 != (int *)0x0) {
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*piVar3 + 8))();
    }
    param_1[0xe] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[0xf] = iVar4;
    local_8 = (undefined4)(1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
  }
  local_8 = (undefined4)(0xffffffff);
  if ((((char *)*param_3 != (char *)0x0) && (*(char *)*param_3 != '\0')) || (param_4 == '\0')) {
    (**(code **)(*(int *)param_1[0xe] + 0x1c))(param_2,param_3,uVar2);
  }
  ExceptionList = (void *)(local_10);
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
    piVar1[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar1[2] = param_2;
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCOpFactory);
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
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


// Reference entry 10bf3d70; body size 115 bytes.
#line 1 "ENTRY_10bf3d70"

void FUN_10bf3d70(undefined4 param_1,undefined4 *param_2)

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
    thunk_FUN_1148a50e(puVar4,0x20);
    puVar4 = (undefined4 *)(puVar2);
  } while( true );
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
  param_1[1] = 0;
  param_1[2] = 0;
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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10bf5910; body size 65 bytes.
#line 1 "ENTRY_10bf5910"

void __fastcall FUN_10bf5910(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
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
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116ceb70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[1]);
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
  iVar1 = (int)(*param_1);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bf5aa0; body size 118 bytes.
#line 1 "ENTRY_10bf5aa0"

void __fastcall FUN_10bf5aa0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116ceba0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  param_1[3] = (uint)&ghidra_vftable_SCControllerEventSink;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCSwfObjSysListener;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bf5c70; body size 115 bytes.
#line 1 "ENTRY_10bf5c70"

void __fastcall FUN_10bf5c70(int *param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cec00);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*param_1);
  local_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ^ (uint)&stack0xfffffffc));
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
    *(undefined4 *)puVar2[1] = 0;
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


// Reference entry 10bf60e0; body size 139 bytes.
#line 1 "ENTRY_10bf60e0"

undefined4 * __thiscall Recovered_Bulk::FUN_10bf60e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cec30);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  param_1[3] = (uint)&ghidra_vftable_SCControllerEventSink;
  piVar1 = (int *)((int *)param_1[5]);
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (uint)&ghidra_vftable_SCSwfObjSysListener;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
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
  param_1[1] = 0;
  param_1[2] = 0;
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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10bf7200; body size 65 bytes.
#line 1 "ENTRY_10bf7200"

void __fastcall FUN_10bf7200(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
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
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10bf5990();
    thunk_FUN_1148a50e(puVar1,0x14);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  return;
}


// Reference entry 10bf88b0; body size 101 bytes.
#line 1 "ENTRY_10bf88b0"

void __thiscall Recovered_Bulk::FUN_10bf88b0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 local_3c [44];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cef4d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bf54e0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20));
  local_8 = (undefined4)(0);
  thunk_FUN_10bf8930(param_2,local_3c);
  thunk_FUN_10bf5b40(uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bf9200; body size 170 bytes.
#line 1 "ENTRY_10bf9200"

void __fastcall FUN_10bf9200(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cf0e5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)((int *)thunk_FUN_1023a9c0(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar3 = (int *)((int *)*piVar2);
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bf9410; body size 138 bytes.
#line 1 "ENTRY_10bf9410"

void __fastcall FUN_10bf9410(int param_1)

{
  __time64_t _Var1;
  undefined1 local_3c [44];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cf15d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_10bf54e0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20));
  local_8 = (undefined4)(0);
  thunk_FUN_10bf8930(2,local_3c);
  thunk_FUN_10bf9680("AppRating-NumOfSigEvents",0);
  _Var1 = (__time64_t)(_time64((__time64_t *)0x0));
  thunk_FUN_10bf97e0("AppRating-DaysSinceSNF",(int)_Var1);
  thunk_FUN_10bf5b40();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bf9680; body size 280 bytes.
#line 1 "ENTRY_10bf9680"

void __stdcall FUN_10bf9680(char *param_1,undefined4 param_2)

{
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
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cf22d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
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
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    puVar1 = (undefined4 *)(puVar4 + 4);
    *puVar4 = (undefined4)(1);
    puVar4[3] = _Size;
    puVar4[2] = 0;
    puVar4[1] = 0;
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    param_1 = (char *)((char *)puVar1);
  }
  local_8 = (undefined4)(0);
  piVar5 = (int *)((int *)thunk_FUN_10bf3f30(local_18,&param_1));
  puVar1 = (undefined4 *)((undefined4 *)param_1);
  iVar3 = (int)(*piVar5);
  local_8 = (undefined4)(1);
  if ((param_1 != (char *)0x0) &&
     (puVar4 = (undefined4 *)((int)param_1 + -0x10), *(int *)((int)param_1 + -0x10) < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar4));
    if (iVar6 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar4);
    }
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_111a1880(iVar3 + 0xc,&DAT_11884800,param_2);
  *(undefined1 *)(iVar3 + 0x10) = 1;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bf97e0; body size 280 bytes.
#line 1 "ENTRY_10bf97e0"

void __stdcall FUN_10bf97e0(char *param_1,undefined4 param_2)

{
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
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cf26d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
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
    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    puVar1 = (undefined4 *)(puVar4 + 4);
    *puVar4 = (undefined4)(1);
    puVar4[3] = _Size;
    puVar4[2] = 0;
    puVar4[1] = 0;
    memcpy(puVar1,_Src,_Size);
    *(undefined1 *)((int)puVar1 + _Size) = 0;
    param_1 = (char *)((char *)puVar1);
  }
  local_8 = (undefined4)(0);
  piVar5 = (int *)((int *)thunk_FUN_10bf3f30(local_18,&param_1));
  puVar1 = (undefined4 *)((undefined4 *)param_1);
  iVar3 = (int)(*piVar5);
  local_8 = (undefined4)(1);
  if ((param_1 != (char *)0x0) &&
     (puVar4 = (undefined4 *)((int)param_1 + -0x10), *(int *)((int)param_1 + -0x10) < 0xffff)) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar4));
    if (iVar6 == 0) {
      puVar1[-2] = 0;
      puVar1[-3] = 0;
      thunk_FUN_113cfb70(puVar1,puVar1[-1]);
      free(puVar4);
    }
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_111a1880(iVar3 + 0xc,&DAT_118873a4,param_2);
  *(undefined1 *)(iVar3 + 0x10) = 1;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bf9940; body size 187 bytes.
#line 1 "ENTRY_10bf9940"

void __fastcall FUN_10bf9940(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cf2b5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 0x18) != 0) {
    thunk_FUN_10d87f10(DAT_12126b84 ^ (uint)&stack0xfffffffc);
    if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    }
  }
  piVar2 = (int *)((int *)thunk_FUN_1023ab10(&local_14));
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
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(*(undefined4 *)(param_1 + 0x10));
  }
  local_8 = (undefined4)(4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
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


// Reference entry 10bfb340; body size 76 bytes.
#line 1 "ENTRY_10bfb340"

void __fastcall FUN_10bfb340(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cf6f0);
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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10bfb4f0; body size 65 bytes.
#line 1 "ENTRY_10bfb4f0"

void __fastcall FUN_10bfb4f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
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
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cf720);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[1]);
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
  iVar1 = (int)(*param_1);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bfb9e0; body size 81 bytes.
#line 1 "ENTRY_10bfb9e0"

int * __thiscall Recovered_Bulk::FUN_10bfb9e0(int *param_2)
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
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// Reference entry 10bfc4a0; body size 65 bytes.
#line 1 "ENTRY_10bfc4a0"

void __fastcall FUN_10bfc4a0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4 *)puVar1[1] = 0;
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
    *(undefined4 *)puVar1[1] = 0;
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
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_10bfb550();
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  return;
}


// Reference entry 10bfcf10; body size 306 bytes.
#line 1 "ENTRY_10bfcf10"

/* WARNING: Removing unreachable block (ram,0x10bfcfeb) */
/* WARNING: Removing unreachable block (ram,0x10bfcffb) */
/* WARNING: Removing unreachable block (ram,0x10bfcfff) */

void __fastcall FUN_10bfcf10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cf980);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar4 = (void **)(&local_10);
  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 0x54));
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, puVar3 != (undefined4 *)0x0) {
    if ((int *)puVar3[1] != (int *)0x0) {
      if (puVar3[2] != 0) {
        (**(code **)(*(int *)puVar3[1] + 0x10))(uVar5);
      }
      puVar1 = (undefined4 *)((undefined4 *)puVar3[1]);
      if ((puVar1 != (undefined4 *)0x0) && (iVar6 = thunk_FUN_1123fcd0(puVar1 + 1), iVar6 == 0)) {
        (**(code **)*puVar1)(1);
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    puVar1 = (undefined4 *)((undefined4 *)puVar3[0x188e]);
    thunk_FUN_10bfb670();
    local_8 = (undefined4)(0);
    *puVar3 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
    if ((int *)puVar3[1] != (int *)0x0) {
      if (puVar3[2] != 0) {
        (**(code **)(*(int *)puVar3[1] + 0x10))();
      }
      puVar2 = (undefined4 *)((undefined4 *)puVar3[1]);
      if ((puVar2 != (undefined4 *)0x0) && (iVar6 = thunk_FUN_1123fcd0(puVar2 + 1), iVar6 == 0)) {
        (**(code **)*puVar2)(1);
      }
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(puVar3,0x623c);
    ppvVar4 = (void **)(ExceptionList);
    puVar3 = (undefined4 *)(puVar1);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  ExceptionList = (void *)(local_10);
  return;
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
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cfb3d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0x58,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bfdf40; body size 367 bytes.
#line 1 "ENTRY_10bfdf40"

/* WARNING: Removing unreachable block_10bfdf40 (ram,0x10bfe048) */
/* WARNING: Removing unreachable block (ram,0x10bfe058) */
/* WARNING: Removing unreachable block (ram,0x10bfe05c) */

void __fastcall FUN_10bfdf40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cfcbd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  cVar4 = (char)(thunk_FUN_112a7f50(param_1 + 100,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (int)(0);
  if (*(char *)(param_1 + 0x60) == '\0') {
    thunk_FUN_10bfd810();
    *(undefined1 *)(param_1 + 0x60) = 1;
    puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 0x54));
    while (puVar3 != (undefined4 *)0x0) {
      if ((int *)puVar3[1] != (int *)0x0) {
        if (puVar3[2] != 0) {
          (**(code **)(*(int *)puVar3[1] + 0x10))();
        }
        puVar1 = (undefined4 *)((undefined4 *)puVar3[1]);
        if ((puVar1 != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar1 + 1), iVar5 == 0)) {
          (**(code **)*puVar1)(1);
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar1 = (undefined4 *)((undefined4 *)puVar3[0x188e]);
      thunk_FUN_10bfb670();
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      *puVar3 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
      if ((int *)puVar3[1] != (int *)0x0) {
        if (puVar3[2] != 0) {
          (**(code **)(*(int *)puVar3[1] + 0x10))();
        }
        puVar2 = (undefined4 *)((undefined4 *)puVar3[1]);
        if ((puVar2 != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar2 + 1), iVar5 == 0)) {
          (**(code **)*puVar2)(1);
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      thunk_FUN_1148a50e(puVar3,0x623c);
      puVar3 = (undefined4 *)(puVar1);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (cVar4 != '\0') {
    thunk_FUN_112a8010(param_1 + 100);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bfe120; body size 171 bytes.
#line 1 "ENTRY_10bfe120"

void __fastcall FUN_10bfe120(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cfcfd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 100,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
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
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bfe200; body size 107 bytes.
#line 1 "ENTRY_10bfe200"

void __fastcall FUN_10bfe200(int param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cfd3d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 100,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  thunk_FUN_10bfd810();
  if (cVar1 != '\0') {
    thunk_FUN_112a8010(param_1 + 100);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10bfe820; body size 76 bytes.
#line 1 "ENTRY_10bfe820"

void __fastcall FUN_10bfe820(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cfd70);
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


// Reference entry 10bfe890; body size 76 bytes.
#line 1 "ENTRY_10bfe890"

void __fastcall FUN_10bfe890(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cfda0);
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


// Reference entry 10bfe900; body size 76 bytes.
#line 1 "ENTRY_10bfe900"

void __fastcall FUN_10bfe900(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cfdd0);
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


// Reference entry 10bfe970; body size 76 bytes.
#line 1 "ENTRY_10bfe970"

void __fastcall FUN_10bfe970(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cfe00);
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


// Reference entry 10bfeb40; body size 110 bytes.
#line 1 "ENTRY_10bfeb40"

void __fastcall FUN_10bfeb40(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cfe90);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServer);
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


// Reference entry 10bfed00; body size 81 bytes.
#line 1 "ENTRY_10bfed00"

int * __thiscall Recovered_Bulk::FUN_10bfed00(int *param_2)
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


// Reference entry 10bfed70; body size 81 bytes.
#line 1 "ENTRY_10bfed70"

int * __thiscall Recovered_Bulk::FUN_10bfed70(int *param_2)
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


// Reference entry 10bff080; body size 131 bytes.
#line 1 "ENTRY_10bff080"

undefined4 * __thiscall Recovered_Bulk::FUN_10bff080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116cff20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServer);
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


// Reference entry 10bff400; body size 306 bytes.
#line 1 "ENTRY_10bff400"

undefined4 * FUN_10bff400(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cff9d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)(operator_new(0x18));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
    piVar3 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMediaItemCollectionEnumerator);
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = -1;
    piVar3 = (int *)((int *)0x0);
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) == thunk_FUN_103bee70) {
        (**(code **)(*piVar2 + 4))();
        piVar3 = (int *)(piVar2);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
        (**(code **)(*piVar3 + 4))();
      }
    }
  }
  local_8 = (undefined4)(0);
  if (param_2 != (int *)piVar2[2]) {
    piVar4 = (int *)((int *)piVar2[3]);
    if (piVar4 != (int *)0x0) {
      piVar2[2] = 0;
      piVar2[3] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    piVar2[2] = (int)param_2;
    if (param_2 == (int *)0x0) {
      piVar2[3] = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      piVar2[3] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 10bff580; body size 292 bytes.
#line 1 "ENTRY_10bff580"

undefined4 * FUN_10bff580(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116cffdd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar2 = (int *)(operator_new(0x10));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
    piVar3 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = 0;
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCMusicServer);
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar3 = (int *)((int *)0x0);
    if (piVar2 != (int *)0x0) {
      if (*(code **)(*piVar2 + 0xc) == thunk_FUN_10c00420) {
        (**(code **)(*piVar2 + 4))();
        piVar3 = (int *)(piVar2);
      }
      else {
        piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(uVar1));
        (**(code **)(*piVar3 + 4))();
      }
    }
  }
  local_8 = (undefined4)(0);
  if (param_2 != (int *)piVar2[2]) {
    piVar4 = (int *)((int *)piVar2[3]);
    if (piVar4 != (int *)0x0) {
      piVar2[2] = 0;
      piVar2[3] = 0;
      (**(code **)(*piVar4 + 8))();
    }
    piVar2[2] = (int)param_2;
    if (param_2 == (int *)0x0) {
      piVar2[3] = 0;
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      piVar2[3] = (int)piVar4;
      (**(code **)(*piVar4 + 4))();
    }
  }
  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
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
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116d0075);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0x24))(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar2 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
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
  local_8 = (undefined4)(8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 10bffdd0; body size 286 bytes.
#line 1 "ENTRY_10bffdd0"

int * __thiscall Recovered_Bulk::FUN_10bffdd0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116d00d5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if ((*(int **)(param_1 + 8) != (int *)0x0) && (-1 < *(int *)(param_1 + 0x14))) {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x14))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (*(int *)(param_1 + 0x14) < iVar2) {
      piVar3 = (int *)((int *)(**(code **)(**(int **)(param_1 + 8) + 0x18))
                                (&local_14,*(int *)(param_1 + 0x14)));
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
      local_8 = (undefined4)(6);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
      ExceptionList = (void *)(local_10);
      return (int *)(param_2);
    }
  }
  *param_2 = (int)(0);
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
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


// Reference entry 10c020c0; body size 76 bytes.
#line 1 "ENTRY_10c020c0"

void __fastcall FUN_10c020c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116d0650);
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


// Reference entry 10c02230; body size 147 bytes.
#line 1 "ENTRY_10c02230"

void __fastcall FUN_10c02230(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_116d06e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10c02470; body size 118 bytes.
#line 1 "ENTRY_10c02470"

void __fastcall FUN_10c02470(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116d0770);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAppInteropManager);
  thunk_FUN_10c02230(uVar2);
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


// Reference entry 10c02810; body size 139 bytes.
#line 1 "ENTRY_10c02810"

undefined4 * __thiscall Recovered_Bulk::FUN_10c02810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116d0800);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAppInteropManager);
  thunk_FUN_10c02230(uVar2);
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
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
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}


// Reference entry 10c02aa0; body size 140 bytes.
#line 1 "ENTRY_10c02aa0"

void __fastcall FUN_10c02aa0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116d0890);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10c03180; body size 88 bytes.
#line 1 "ENTRY_10c03180"

bool __fastcall FUN_10c03180(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116d0a50);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x18))(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  iVar1 = (int)(*piVar2);
  local_8 = (undefined4)(0);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (bool)(iVar1 != 0);
}


// Reference entry 10c044d0; body size 119 bytes.
#line 1 "ENTRY_10c044d0"

void __fastcall FUN_10c044d0(int *param_1)

{
  undefined4 *puVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116d0dad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  puVar1 = (undefined4 *)((undefined4 *)
           thunk_FUN_10c944f0(&local_14,*param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  thunk_FUN_107cc5b0(*puVar1);
  local_8 = (undefined4)(1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_107cc370(7);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 10c04660; body size 124 bytes.
#line 1 "ENTRY_10c04660"

void FUN_10c04660(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_116d0e2d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_10c944f0(&param_2,*param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  thunk_FUN_107cc5b0(*puVar1);
  local_8 = (undefined4)(1);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_107cc370(7);
  ExceptionList = (void *)(local_10);
  return;
}


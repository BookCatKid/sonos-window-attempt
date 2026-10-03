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
typedef unsigned char uchar;
typedef int BOOL;
typedef void *HANDLE;
typedef void *LPVOID;
typedef unsigned int UINT;
typedef long LONG;
typedef long HRESULT;
typedef wchar_t WCHAR;
typedef int int3;
typedef unsigned int uint3;
typedef struct undefined3 { char _p[3]; undefined3(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined3;
typedef struct undefined5 { char _p[5]; undefined5(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined5;
typedef struct undefined6 { char _p[6]; undefined6(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined6;
typedef struct undefined7 { char _p[7]; undefined7(...);
  template<class T> operator T*(); template<class T> operator T(); } undefined7;
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
extern int FUN_1006aac8(...);
extern int FUN_10ea7290(...);
extern int FUN_10f4b5e0(...);
extern int FUN_1111b230(...);
extern int FUN_1111c680(...);
extern __declspec(dllimport) int _Xbad_function_call(...);
extern __declspec(dllimport) int _Xout_of_range(...);
extern __declspec(dllimport) int __stdio_common_vsprintf(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int append(...);
extern int cancelTimeout(...);
extern int createPropertyBag(...);
extern int createSCStringArray(...);
extern int int_allocRep(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strrchr(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_1021b750(...);
extern int thunk_FUN_1029e960(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_103021f0(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_1033c720(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_103eb560(...);
extern int thunk_FUN_103eb620(...);
extern int thunk_FUN_104d8ab0(...);
extern int thunk_FUN_104dad90(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a26b0(...);
extern int thunk_FUN_105a2cd0(...);
extern int thunk_FUN_105a2e60(...);
extern int thunk_FUN_105a3010(...);
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
extern int thunk_FUN_105f6050(...);
extern int thunk_FUN_10604c90(...);
extern int thunk_FUN_10604cd0(...);
extern int thunk_FUN_106c9af0(...);
extern int thunk_FUN_106c9eb0(...);
extern int thunk_FUN_106cf0e0(...);
extern int thunk_FUN_106d8310(...);
extern int thunk_FUN_106d8350(...);
extern int thunk_FUN_106d83f0(...);
extern int thunk_FUN_106dc520(...);
extern int thunk_FUN_106dc570(...);
extern int thunk_FUN_106dc650(...);
extern int thunk_FUN_106dc6c0(...);
extern int thunk_FUN_106dfa00(...);
extern int thunk_FUN_10785c60(...);
extern int thunk_FUN_10799310(...);
extern int thunk_FUN_107cccd0(...);
extern int thunk_FUN_1086f290(...);
extern int thunk_FUN_108754f0(...);
extern int thunk_FUN_10be2e40(...);
extern int thunk_FUN_10be4f80(...);
extern int thunk_FUN_10be6f80(...);
extern int thunk_FUN_10c5e5a0(...);
extern int thunk_FUN_10c96760(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10c9b9b0(...);
extern int thunk_FUN_10d4d500(...);
extern int thunk_FUN_10d4d580(...);
extern int thunk_FUN_10d50930(...);
extern int thunk_FUN_10d5e1e0(...);
extern int thunk_FUN_10d5e270(...);
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
extern int thunk_FUN_10dd0610(...);
extern int thunk_FUN_10dd0b60(...);
extern int thunk_FUN_10dd1440(...);
extern int thunk_FUN_10dd4b80(...);
extern int thunk_FUN_10dd5d50(...);
extern int thunk_FUN_10df15d0(...);
extern int thunk_FUN_10df2ea0(...);
extern int thunk_FUN_10df3040(...);
extern int thunk_FUN_10df3a40(...);
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
extern int thunk_FUN_10ef4620(...);
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
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110b9840(...);
extern int thunk_FUN_111123b0(...);
extern int thunk_FUN_111123c0(...);
extern int thunk_FUN_11113190(...);
extern int thunk_FUN_11113cb0(...);
extern int thunk_FUN_1111b630(...);
extern int thunk_FUN_1111bc60(...);
extern int thunk_FUN_1112b9e0(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_1112c280(...);
extern int thunk_FUN_1115f330(...);
extern int thunk_FUN_1115f360(...);
extern int thunk_FUN_1115f390(...);
extern int thunk_FUN_1115f570(...);
extern int thunk_FUN_11161d90(...);
extern int thunk_FUN_11162290(...);
extern int thunk_FUN_11162620(...);
extern int thunk_FUN_11164710(...);
extern int thunk_FUN_111a2bd0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111bd050(...);
extern int thunk_FUN_111bd6b0(...);
extern int thunk_FUN_111be2e0(...);
extern int thunk_FUN_111c1530(...);
extern int thunk_FUN_111fc270(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
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
extern int thunk_FUN_114577b0(...);
extern int thunk_FUN_1148a50e(...);
extern int utf8_length(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_1195e878;
extern int DAT_1211a564;
extern int DAT_1211a56c;
extern int DAT_1211a570;
extern int DAT_12126b84;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int g_lSCObjCount;
extern int ghidra_vftable_RHTControl;
extern int ghidra_vftable_RMusicServicesDirectory;
extern int ghidra_vftable_RServiceAuthHeaderBuilderFactory;
extern int ghidra_vftable_SCAggregateHelper;
extern int ghidra_vftable_SCAlexaAuthCompleteState;
extern int ghidra_vftable_SCAlexaAuthEnableAckChimeState;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCBridgeRemovalWizardCompleteState;
extern int ghidra_vftable_SCBridgeRemovalWizardInitState;
extern int ghidra_vftable_SCBridgeRemovalWizardIntroState;
extern int ghidra_vftable_SCChangeEmailWizCompleteState;
extern int ghidra_vftable_SCChangeEmailWizInitState;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCInfoViewTextPaneMetadata;
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
extern int ghidra_vftable_SCNewWizParams;
extern int ghidra_vftable_SCNewWizStayPut;
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
extern int ghidra_vftable_SCSwfObjSPInternalListener;
extern int ghidra_vftable_SCUsageDataCompleteState;
extern int ghidra_vftable_SCUsageDataInitState;
extern int ghidra_vftable_SCUsageDataOptInState;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack00000004;
extern int uStack_14;
extern int uStack_8;
extern int uStack_c;
extern int unaff_ESI;
extern undefined1 LAB_10ff820f[];
extern undefined1 LAB_117702a0[];
extern undefined1 LAB_117702d0[];
extern undefined1 LAB_11770300[];
extern undefined1 LAB_11770330[];
extern undefined1 LAB_11770f30[];
extern undefined1 LAB_11772e80[];
extern undefined1 LAB_11791770[];
extern undefined1 LAB_11795460[];
extern int *stack0x00000010;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std { template<class... A> static int _Xbad_function_call(A...); template<class... A> static int _Xout_of_range(A...);}
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int append(A...); template<class... A> static int int_allocRep(A...); static int op_ctor(...); static int op_eq(...); static int op_lt(...); template<class... A> static int utf8_length(A...); };
struct AlbumArtistDisplayOption { char _pad; AlbumArtistDisplayOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct AlexaAuthWizard { char _pad; AlexaAuthWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Cancel { char _pad; Cancel(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Canceling { char _pad; Canceling(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ChannelMapSet { char _pad; ChannelMapSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Check { char _pad; Check(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Close { char _pad; Close(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CurrentIRRepeaterState { char _pad; CurrentIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Fire { char _pad; Fire(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct KeepAlive { char _pad; KeepAlive(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct LEDFeedbackState { char _pad; LEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Password { char _pad; Password(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCAlarm { char _pad; SCAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCAlexaAuthReminderState { char _pad; SCAlexaAuthReminderState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAlarm { char _pad; SCIAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjACInternalListener { char _pad; SCSwfObjACInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjDDInternalListener { char _pad; SCSwfObjDDInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjSPInternalListener { char _pad; SCSwfObjSPInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSwfObjSPListener { char _pad; SCSwfObjSPListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Sink { char _pad; Sink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Stop { char _pad; Stop(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subscribe { char _pad; Subscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SwfObjSP { char _pad; SwfObjSP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SwfStr { char _pad; SwfStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Unsubscribe { char _pad; Unsubscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
typedef void *K;
typedef void *SHUFFLE;
typedef void *T;
typedef void *WARNING;
struct Recovered_Bulk { char _pad; undefined4 __thiscall FUN_10e19ca0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e19ca0(A...); undefined4 __thiscall FUN_10e19cf0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e19cf0(A...); undefined4 * __thiscall FUN_10e23140(undefined4 param_2); template<class... A> int FUN_10e23140(A...); undefined4 __thiscall FUN_10e24330(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e24330(A...); undefined4 __thiscall FUN_10e24380(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e24380(A...); void __thiscall FUN_10e2b550(int param_2); template<class... A> int FUN_10e2b550(A...); void __thiscall FUN_10e2bfe0(int param_2,ushort param_3); template<class... A> int FUN_10e2bfe0(A...); void __thiscall FUN_10e46b00(undefined4 *param_2); template<class... A> int FUN_10e46b00(A...); undefined4 __thiscall FUN_10e4afe0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e4afe0(A...); undefined4 __thiscall FUN_10e4b030(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e4b030(A...); void __thiscall FUN_10e4e590(undefined4 *param_2); template<class... A> int FUN_10e4e590(A...); undefined4 __thiscall FUN_10e55780(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e55780(A...); undefined4 __thiscall FUN_10e557d0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e557d0(A...); int __thiscall FUN_10e5acb0(uint *param_2); template<class... A> int FUN_10e5acb0(A...); void __thiscall FUN_10e62aa0(int param_2); template<class... A> int FUN_10e62aa0(A...); undefined4 __thiscall FUN_10e69d50(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e69d50(A...); undefined4 __thiscall FUN_10e69dd0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e69dd0(A...); undefined4 __thiscall FUN_10e79760(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e79760(A...); undefined4 __thiscall FUN_10e79a40(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e79a40(A...); undefined4 __thiscall FUN_10e84e70(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e84e70(A...); undefined4 __thiscall FUN_10e84ec0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10e84ec0(A...); undefined4 * __thiscall FUN_10e86e40(undefined4 param_2); template<class... A> int FUN_10e86e40(A...); void __thiscall FUN_10e9c020(int param_2); template<class... A> int FUN_10e9c020(A...); undefined4 * __thiscall FUN_10e9deb0(undefined4 *param_2); template<class... A> int FUN_10e9deb0(A...); undefined4 * __thiscall FUN_10e9dee0(undefined4 *param_2); template<class... A> int FUN_10e9dee0(A...); SCStr * __thiscall FUN_10ea1c30(SCStr *param_2); template<class... A> int FUN_10ea1c30(A...); SCStr * __thiscall FUN_10ea1dd0(SCStr *param_2); template<class... A> int FUN_10ea1dd0(A...); SCStr * __thiscall FUN_10ea1ec0(SCStr *param_2); template<class... A> int FUN_10ea1ec0(A...); SCStr * __thiscall FUN_10ea1f80(SCStr *param_2); template<class... A> int FUN_10ea1f80(A...); SCStr * __thiscall FUN_10ea1fd0(SCStr *param_2); template<class... A> int FUN_10ea1fd0(A...); SCStr * __thiscall FUN_10ea2020(SCStr *param_2); template<class... A> int FUN_10ea2020(A...); void __thiscall FUN_10eabdb0(undefined4 *param_2); template<class... A> int FUN_10eabdb0(A...); void __thiscall FUN_10eabf30(undefined4 *param_2); template<class... A> int FUN_10eabf30(A...); undefined4 * __thiscall FUN_10eae0a0(undefined4 param_2); template<class... A> int FUN_10eae0a0(A...); undefined4 __thiscall FUN_10eb2610(undefined4 param_2); template<class... A> int FUN_10eb2610(A...); void __thiscall FUN_10eb3a80(uint param_2); template<class... A> int FUN_10eb3a80(A...); int __thiscall FUN_10eb4f60(SCStr *param_2); template<class... A> int FUN_10eb4f60(A...); int __thiscall FUN_10eb4fb0(SCStr *param_2); template<class... A> int FUN_10eb4fb0(A...); int __thiscall FUN_10eb5000(SCStr *param_2); template<class... A> int FUN_10eb5000(A...); undefined4 __thiscall FUN_10eb9540(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10eb9540(A...); void __thiscall FUN_10eba5f0(undefined4 param_2); template<class... A> int FUN_10eba5f0(A...); void __thiscall FUN_10ebb360(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10ebb360(A...); void __thiscall FUN_10ebb790(undefined4 param_2); template<class... A> int FUN_10ebb790(A...); void __thiscall FUN_10ebb7d0(undefined4 param_2); template<class... A> int FUN_10ebb7d0(A...); void __thiscall FUN_10ebb810(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_10ebb810(A...); void __thiscall FUN_10ebb850(int param_2); template<class... A> int FUN_10ebb850(A...); void __thiscall FUN_10ebb890(int param_2,int param_3); template<class... A> int FUN_10ebb890(A...); void __thiscall FUN_10ebb8e0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10ebb8e0(A...); void __thiscall FUN_10ebba70(undefined4 param_2); template<class... A> int FUN_10ebba70(A...); void __thiscall FUN_10ebbab0(uint param_2); template<class... A> int FUN_10ebbab0(A...); void __thiscall FUN_10ebbaf0(uint param_2); template<class... A> int FUN_10ebbaf0(A...); void __thiscall FUN_10ebc210(undefined4 param_2); template<class... A> int FUN_10ebc210(A...); void __thiscall FUN_10ebc2a0(undefined4 param_2,int *param_3); template<class... A> int FUN_10ebc2a0(A...); void __thiscall FUN_10ebc5d0(SCStr *param_2); template<class... A> int FUN_10ebc5d0(A...); void __thiscall FUN_10ebfa70(undefined4 *param_2); template<class... A> int FUN_10ebfa70(A...); int __thiscall FUN_10ec35e0(undefined4 *param_2); template<class... A> int FUN_10ec35e0(A...); int __thiscall FUN_10ec3610(undefined4 *param_2); template<class... A> int FUN_10ec3610(A...); void __thiscall FUN_10ec99c0(undefined4 *param_2); template<class... A> int FUN_10ec99c0(A...); void __thiscall FUN_10ec9a10(uint param_2); template<class... A> int FUN_10ec9a10(A...); void __thiscall FUN_10ee16d0(int param_2,int param_3); template<class... A> int FUN_10ee16d0(A...); void __thiscall FUN_10ee1710(int param_2,int param_3); template<class... A> int FUN_10ee1710(A...); void __thiscall FUN_10ee1750(int param_2,int param_3); template<class... A> int FUN_10ee1750(A...); void __thiscall FUN_10ef5ee0(int param_2); template<class... A> int FUN_10ef5ee0(A...); void __thiscall FUN_10ef82c0(int param_2); template<class... A> int FUN_10ef82c0(A...); int __thiscall FUN_10ef9850(int *param_2); template<class... A> int FUN_10ef9850(A...); undefined4 * __thiscall FUN_10efdbb0(undefined4 *param_2); template<class... A> int FUN_10efdbb0(A...); void __thiscall FUN_10f01c60(undefined4 param_2); template<class... A> int FUN_10f01c60(A...); int __thiscall FUN_10f163a0(SCStr *param_2); template<class... A> int FUN_10f163a0(A...); void __thiscall FUN_10f16c50(undefined4 *param_2); template<class... A> int FUN_10f16c50(A...); int * __thiscall FUN_10f18020(byte param_2); template<class... A> int FUN_10f18020(A...); void __thiscall FUN_10f1aa30(undefined4 *param_2); template<class... A> int FUN_10f1aa30(A...); void __thiscall FUN_10f228a0(int param_2); template<class... A> int FUN_10f228a0(A...); undefined4 __thiscall FUN_10f2ce50(undefined4 param_2); template<class... A> int FUN_10f2ce50(A...); undefined4 __thiscall FUN_10f372e0(char *param_2,uint param_3); template<class... A> int FUN_10f372e0(A...); void __thiscall FUN_10f3d660(int param_2); template<class... A> int FUN_10f3d660(A...); void __thiscall FUN_10f3d690(int param_2); template<class... A> int FUN_10f3d690(A...); void __thiscall FUN_10f3fb40(undefined4 param_2); template<class... A> int FUN_10f3fb40(A...); void __thiscall FUN_10f41d20(int param_2); template<class... A> int FUN_10f41d20(A...); void __thiscall FUN_10f47fa0(undefined4 param_2); template<class... A> int FUN_10f47fa0(A...); void __thiscall FUN_10f499d0(undefined4 *param_2); template<class... A> int FUN_10f499d0(A...); void __thiscall FUN_10f4c970(undefined4 *param_2); template<class... A> int FUN_10f4c970(A...); undefined4 __thiscall FUN_10f50750(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10f50750(A...); void __thiscall FUN_10f518c0(undefined4 param_2,undefined8 param_3); template<class... A> int FUN_10f518c0(A...); void __thiscall FUN_10f63e00(SCStr *param_2,undefined1 param_3); template<class... A> int FUN_10f63e00(A...); undefined4 __thiscall FUN_10f67600(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10f67600(A...); void __thiscall FUN_10f68ab0(undefined4 param_2,undefined8 param_3); template<class... A> int FUN_10f68ab0(A...); int __thiscall FUN_10f6b450(uint *param_2); template<class... A> int FUN_10f6b450(A...); int __thiscall FUN_10f713b0(byte param_2); template<class... A> int FUN_10f713b0(A...); void __thiscall FUN_10f717d0(char param_2); template<class... A> int FUN_10f717d0(A...); void __thiscall FUN_10f71980(undefined4 *param_2,ushort *param_3); template<class... A> int FUN_10f71980(A...); void __thiscall FUN_10f734d0(int param_2); template<class... A> int FUN_10f734d0(A...); undefined4 __thiscall FUN_10f74070(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10f74070(A...); void __thiscall FUN_10f74150(undefined4 param_2,undefined8 param_3); template<class... A> int FUN_10f74150(A...); undefined4 * __thiscall FUN_10f76d30(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10f76d30(A...); SCStr * __thiscall FUN_10f79110(SCStr *param_2); template<class... A> int FUN_10f79110(A...); SCStr * __thiscall FUN_10f79860(SCStr *param_2); template<class... A> int FUN_10f79860(A...); undefined4 __thiscall FUN_10f79a70(undefined4 param_2); template<class... A> int FUN_10f79a70(A...); void __thiscall FUN_10f7ada0(uint param_2); template<class... A> int FUN_10f7ada0(A...); undefined4 * __thiscall FUN_10f7b130(undefined4 param_2); template<class... A> int FUN_10f7b130(A...); undefined4 * __thiscall FUN_10f7b600(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10f7b600(A...); int __thiscall FUN_10f86b30(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10f86b30(A...); void __thiscall FUN_10f8ed40(undefined4 param_2); template<class... A> int FUN_10f8ed40(A...); undefined4 __thiscall FUN_10f8ed80(char *param_2,uint param_3); template<class... A> int FUN_10f8ed80(A...); void __thiscall FUN_10f8f7d0(int param_2); template<class... A> int FUN_10f8f7d0(A...); undefined1 __thiscall FUN_10f90020(int param_2); template<class... A> int FUN_10f90020(A...); void __thiscall FUN_10f912e0(int param_2,int param_3); template<class... A> int FUN_10f912e0(A...); void __thiscall FUN_10f924f0(int param_2); template<class... A> int FUN_10f924f0(A...); int __thiscall FUN_10f99b60(uint *param_2); template<class... A> int FUN_10f99b60(A...); undefined4 __thiscall FUN_10fa0450(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fa0450(A...); undefined4 __thiscall FUN_10fa04b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fa04b0(A...); undefined4 __thiscall FUN_10fa7880(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fa7880(A...); undefined4 __thiscall FUN_10fa7ba0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fa7ba0(A...); int __thiscall FUN_10fab430(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fab430(A...); int __thiscall FUN_10fab470(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fab470(A...); int __thiscall FUN_10fab4b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fab4b0(A...); int __thiscall FUN_10fab4f0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fab4f0(A...); undefined4 __thiscall FUN_10fb1730(byte param_2); template<class... A> int FUN_10fb1730(A...); int * __thiscall FUN_10fb94a0(int *param_2,int param_3); template<class... A> int FUN_10fb94a0(A...); int __thiscall FUN_10fc0bc0(uint *param_2); template<class... A> int FUN_10fc0bc0(A...); undefined4 __thiscall FUN_10fc5e00(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fc5e00(A...); undefined4 __thiscall FUN_10fc5e60(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10fc5e60(A...); undefined4 * __thiscall FUN_10fccee0(undefined4 param_2); template<class... A> int FUN_10fccee0(A...); int * __thiscall FUN_10fcd4b0(int *param_2,uint param_3); template<class... A> int FUN_10fcd4b0(A...); void __thiscall FUN_10fcdd50(undefined4 *param_2); template<class... A> int FUN_10fcdd50(A...); undefined4 * __thiscall FUN_10fce700(byte param_2); template<class... A> int FUN_10fce700(A...); void __thiscall FUN_10fcf420(undefined4 *param_2); template<class... A> int FUN_10fcf420(A...); undefined4 * __thiscall FUN_10fdd050(undefined4 *param_2); template<class... A> int FUN_10fdd050(A...); undefined4 * __thiscall FUN_10fdd090(undefined4 *param_2); template<class... A> int FUN_10fdd090(A...); undefined4 * __thiscall FUN_10fdd0d0(undefined4 *param_2); template<class... A> int FUN_10fdd0d0(A...); undefined4 * __thiscall FUN_10fdd110(undefined4 *param_2); template<class... A> int FUN_10fdd110(A...); undefined4 * __thiscall FUN_10fdd150(undefined4 *param_2); template<class... A> int FUN_10fdd150(A...); undefined4 * __thiscall FUN_10fdd190(undefined4 *param_2); template<class... A> int FUN_10fdd190(A...); SCStr * __thiscall FUN_10fdd210(SCStr *param_2); template<class... A> int FUN_10fdd210(A...); SCStr * __thiscall FUN_10fdd260(SCStr *param_2); template<class... A> int FUN_10fdd260(A...); SCStr * __thiscall FUN_10fdd2d0(SCStr *param_2); template<class... A> int FUN_10fdd2d0(A...); SCStr * __thiscall FUN_10fdd320(SCStr *param_2); template<class... A> int FUN_10fdd320(A...); SCStr * __thiscall FUN_10fdd390(SCStr *param_2); template<class... A> int FUN_10fdd390(A...); SCStr * __thiscall FUN_10fdd490(SCStr *param_2); template<class... A> int FUN_10fdd490(A...); void __thiscall FUN_10fde830(undefined4 param_2); template<class... A> int FUN_10fde830(A...); void __thiscall FUN_10fe0020(undefined4 *param_2); template<class... A> int FUN_10fe0020(A...); void __thiscall FUN_10fe3520(undefined4 *param_2); template<class... A> int FUN_10fe3520(A...); void __thiscall FUN_10fe3720(uint param_2); template<class... A> int FUN_10fe3720(A...); void __thiscall FUN_10febc00(undefined4 *param_2); template<class... A> int FUN_10febc00(A...); void __thiscall FUN_10febc50(undefined4 *param_2); template<class... A> int FUN_10febc50(A...); void __thiscall FUN_10fef110(undefined4 *param_2); template<class... A> int FUN_10fef110(A...); void __thiscall FUN_10fef130(undefined4 *param_2); template<class... A> int FUN_10fef130(A...); void __thiscall FUN_10fef150(undefined4 *param_2); template<class... A> int FUN_10fef150(A...); void __thiscall FUN_10fef170(undefined4 *param_2); template<class... A> int FUN_10fef170(A...); void __thiscall FUN_10fef730(undefined4 *param_2); template<class... A> int FUN_10fef730(A...); void __thiscall FUN_10fef750(undefined4 *param_2); template<class... A> int FUN_10fef750(A...); void __thiscall FUN_10fef770(undefined4 *param_2); template<class... A> int FUN_10fef770(A...); void __thiscall FUN_10fef790(undefined4 *param_2); template<class... A> int FUN_10fef790(A...); void __thiscall FUN_10ff0dc0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10ff0dc0(A...); SCStr * __thiscall FUN_10ff15e0(SCStr *param_2,int param_3,undefined4 param_4); template<class... A> int FUN_10ff15e0(A...); SCStr * __thiscall FUN_10ff20b0(SCStr *param_2); template<class... A> int FUN_10ff20b0(A...); SCStr * __thiscall FUN_10ff2b20(SCStr *param_2); template<class... A> int FUN_10ff2b20(A...); void __thiscall FUN_10ff8430(undefined4 *param_2); template<class... A> int FUN_10ff8430(A...); void __thiscall FUN_10ff8480(undefined4 *param_2); template<class... A> int FUN_10ff8480(A...); void __thiscall FUN_10ff8cb0(undefined4 param_2); template<class... A> int FUN_10ff8cb0(A...); void __thiscall FUN_10ff8cf0(undefined4 param_2); template<class... A> int FUN_10ff8cf0(A...); undefined4 * __thiscall FUN_10ffb2b0(byte param_2); template<class... A> int FUN_10ffb2b0(A...); void __thiscall FUN_10ffb670(undefined4 *param_2); template<class... A> int FUN_10ffb670(A...); void __thiscall FUN_10ffc070(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10ffc070(A...); SCStr * __thiscall FUN_10ffcdc0(SCStr *param_2); template<class... A> int FUN_10ffcdc0(A...); SCStr * __thiscall FUN_10ffce10(SCStr *param_2); template<class... A> int FUN_10ffce10(A...); void __thiscall FUN_10ffd210(int param_2); template<class... A> int FUN_10ffd210(A...); void __thiscall FUN_10ffd290(int param_2); template<class... A> int FUN_10ffd290(A...); undefined4 * __thiscall FUN_10fffbb0(byte param_2); template<class... A> int FUN_10fffbb0(A...); SCStr * __thiscall FUN_11002ae0(SCStr *param_2); template<class... A> int FUN_11002ae0(A...); undefined1 __thiscall FUN_11005070(undefined4 param_2); template<class... A> int FUN_11005070(A...); undefined1 __thiscall FUN_110050a0(undefined4 param_2); template<class... A> int FUN_110050a0(A...); undefined1 __thiscall FUN_110051f0(undefined4 param_2); template<class... A> int FUN_110051f0(A...); };
using namespace std;
void __stdcall FUN_10e120a0(undefined4 param_1);
void __stdcall FUN_10e120a0(undefined4 param_1);
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
int * __fastcall FUN_10e28c10(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e28c10(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e28c40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e28c40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e28c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e28c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e28ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e28ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10e2aae0(int *param_1);
extern void __fastcall FUN_10e2aae0(...);
void __fastcall FUN_10e2ab10(int *param_1);
extern void __fastcall FUN_10e2ab10(...);
void __fastcall FUN_10e2ab40(int *param_1);
extern void __fastcall FUN_10e2ab40(...);
void __fastcall FUN_10e2ab70(int *param_1);
extern void __fastcall FUN_10e2ab70(...);
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
void __stdcall FUN_10e4a6b0(int param_1,int param_2);
void __stdcall FUN_10e4a6b0(int param_1,int param_2);
void __stdcall FUN_10e4a700(int param_1,int param_2);
void __stdcall FUN_10e4a700(int param_1,int param_2);
undefined4 __fastcall FUN_10e4ad50(int param_1);
extern undefined4 __fastcall FUN_10e4ad50(...);
undefined4 __fastcall FUN_10e4afb0(int param_1);
extern undefined4 __fastcall FUN_10e4afb0(...);
undefined4 __fastcall FUN_10e4e2d0(int param_1);
extern undefined4 __fastcall FUN_10e4e2d0(...);
undefined4 __fastcall FUN_10e4e380(int *param_1);
extern undefined4 __fastcall FUN_10e4e380(...);
undefined1 FUN_10e4e410(SCStr *param_1);
extern undefined1 FUN_10e4e410(...);
void __fastcall FUN_10e4e530(int *param_1);
extern void __fastcall FUN_10e4e530(...);
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
undefined4 * __fastcall FUN_10e5c000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10e5c000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
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
int * __fastcall FUN_10e5f6b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e5f6b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e5f6e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e5f6e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e5f710(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e5f710(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e5f740(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e5f740(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e5f770(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e5f770(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
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
void __stdcall FUN_10e69350(int param_1,int param_2);
void __stdcall FUN_10e69350(int param_1,int param_2);
undefined4 __fastcall FUN_10e698c0(int param_1);
extern undefined4 __fastcall FUN_10e698c0(...);
undefined4 __fastcall FUN_10e69cd0(int param_1);
extern undefined4 __fastcall FUN_10e69cd0(...);
undefined4 __fastcall FUN_10e714a0(int param_1);
extern undefined4 __fastcall FUN_10e714a0(...);
undefined4 __fastcall FUN_10e71570(int *param_1);
extern undefined4 __fastcall FUN_10e71570(...);
undefined1 FUN_10e71680(SCStr *param_1);
extern undefined1 FUN_10e71680(...);
void __fastcall FUN_10e71f60(int *param_1);
extern void __fastcall FUN_10e71f60(...);
undefined4 __fastcall FUN_10e72180(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10e72180(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_10e755c0(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e755c0(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e755e0(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e755e0(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e75600(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e75600(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e75620(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e75620(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e75640(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e75640(int param_1, unsigned int recovered_unused_stack_0);
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
void __stdcall FUN_10e82e70(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10e82e70(int param_1, unsigned int recovered_unused_stack_0);
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
undefined4 __fastcall FUN_10e86660(int param_1);
extern undefined4 __fastcall FUN_10e86660(...);
undefined4 __fastcall FUN_10e866e0(int *param_1);
extern undefined4 __fastcall FUN_10e866e0(...);
undefined1 FUN_10e86710(SCStr *param_1);
extern undefined1 FUN_10e86710(...);
void __fastcall FUN_10e867f0(int *param_1);
extern void __fastcall FUN_10e867f0(...);
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
int * __fastcall FUN_10e96720(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e96720(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e96750(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e96750(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e96780(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e96780(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e967b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e967b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e967e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e967e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e96810(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10e96810(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
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
void FUN_10ea4530(void);
extern void FUN_10ea4530(...);
int __fastcall FUN_10ea6c00(int param_1);
extern int __fastcall FUN_10ea6c00(...);
void __fastcall FUN_10ea6f20(int param_1);
extern void __fastcall FUN_10ea6f20(...);
void __stdcall FUN_10ea8130(undefined4 param_1,int *param_2);
void __stdcall FUN_10ea8130(undefined4 param_1,int *param_2);
void __fastcall FUN_10eab2c0(undefined4 *param_1);
extern void __fastcall FUN_10eab2c0(...);
void __fastcall FUN_10eab2f0(undefined4 *param_1);
extern void __fastcall FUN_10eab2f0(...);
void __fastcall FUN_10eab310(int *param_1);
extern void __fastcall FUN_10eab310(...);
void __stdcall FUN_10eabdf0(int param_1,int param_2);
void __stdcall FUN_10eabdf0(int param_1,int param_2);
void __stdcall FUN_10eabe20(undefined4 *param_1);
void __stdcall FUN_10eabe20(undefined4 *param_1);
void __fastcall FUN_10eac550(int *param_1);
extern void __fastcall FUN_10eac550(...);
void __fastcall FUN_10eac590(int *param_1);
extern void __fastcall FUN_10eac590(...);
void __stdcall FUN_10eac620(int param_1,int param_2);
void __stdcall FUN_10eac620(int param_1,int param_2);
int __fastcall FUN_10eacd00(int *param_1);
extern int __fastcall FUN_10eacd00(...);
int __fastcall FUN_10eacd20(int *param_1);
extern int __fastcall FUN_10eacd20(...);
int __fastcall FUN_10eace20(int *param_1);
extern int __fastcall FUN_10eace20(...);
undefined4 __fastcall FUN_10eb25f0(undefined4 param_1);
extern undefined4 __fastcall FUN_10eb25f0(...);
undefined4 * __fastcall FUN_10eb26d0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10eb26d0(...);
uint __fastcall FUN_10eb3a60(uint *param_1);
extern uint __fastcall FUN_10eb3a60(...);
int __fastcall FUN_10eb3b50(int *param_1);
extern int __fastcall FUN_10eb3b50(...);
undefined4 __stdcall FUN_10eb4160(undefined4 param_1);
undefined4 __stdcall FUN_10eb4160(undefined4 param_1);
undefined4 * __fastcall FUN_10eb6040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10eb6040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10eb6080(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10eb6080(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10eb60c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10eb60c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10ebba40(int *param_1);
extern void __fastcall FUN_10ebba40(...);
void __stdcall FUN_10ebc260(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_10ebc260(undefined4 param_1,undefined4 param_2);
undefined4 * __fastcall FUN_10ec0fb0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10ec0fb0(...);
undefined4 __fastcall FUN_10ec1d20(undefined4 param_1);
extern undefined4 __fastcall FUN_10ec1d20(...);
undefined4 FUN_10ec67a0(SCStr *param_1);
extern undefined4 FUN_10ec67a0(...);
undefined4 __stdcall FUN_10ec7200(undefined4 param_1);
undefined4 __stdcall FUN_10ec7200(undefined4 param_1);
undefined4 * __fastcall FUN_10ed09d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10ed09d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
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
int * __fastcall FUN_10edfac0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10edfac0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10edfdf0(int *param_1);
extern void __fastcall FUN_10edfdf0(...);
void __fastcall FUN_10ee1160(int param_1);
extern void __fastcall FUN_10ee1160(...);
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
int * __fastcall FUN_10eebed0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10eebed0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10eebf00(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10eebf00(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10eec2f0(int *param_1);
extern void __fastcall FUN_10eec2f0(...);
void __fastcall FUN_10eec320(int *param_1);
extern void __fastcall FUN_10eec320(...);
undefined4 FUN_10eee200(SCStr *param_1);
extern undefined4 FUN_10eee200(...);
undefined4 FUN_10eee9f0(SCStr *param_1);
extern undefined4 FUN_10eee9f0(...);
int __stdcall FUN_10eefae0(int *param_1);
int __stdcall FUN_10eefae0(int *param_1);
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
undefined4 __fastcall FUN_10f00a60(int param_1);
extern undefined4 __fastcall FUN_10f00a60(...);
void __stdcall FUN_10f01ee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void __stdcall FUN_10f01ee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __fastcall FUN_10f02150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f02150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f021f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f021f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
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
undefined4 __stdcall FUN_10f11b90(undefined4 param_1);
undefined4 __stdcall FUN_10f11b90(undefined4 param_1);
undefined4 * __fastcall FUN_10f16f30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f16f30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_10f19500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __stdcall FUN_10f19500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * __fastcall FUN_10f1bf40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f1bf40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f1bf80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f1bf80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int __stdcall FUN_10f1df20(int *param_1);
int __stdcall FUN_10f1df20(int *param_1);
int __stdcall FUN_10f1df70(int *param_1);
int __stdcall FUN_10f1df70(int *param_1);
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
undefined4 * __fastcall FUN_10f24a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f24a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f25bc0(undefined4 *param_1);
extern void __fastcall FUN_10f25bc0(...);
void __fastcall FUN_10f25bf0(undefined4 *param_1);
extern void __fastcall FUN_10f25bf0(...);
undefined4 __stdcall FUN_10f2a8e0(undefined4 param_1);
undefined4 __stdcall FUN_10f2a8e0(undefined4 param_1);
undefined4 __stdcall FUN_10f2a900(undefined4 param_1);
undefined4 __stdcall FUN_10f2a900(undefined4 param_1);
void __fastcall FUN_10f2f730(int param_1);
extern void __fastcall FUN_10f2f730(...);
undefined4 * __fastcall FUN_10f37e60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f37e60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int __stdcall FUN_10f392b0(int *param_1);
int __stdcall FUN_10f392b0(int *param_1);
undefined4 FUN_10f39910(int *param_1);
extern undefined4 FUN_10f39910(...);
undefined4 FUN_10f39960(SCStr *param_1);
extern undefined4 FUN_10f39960(...);
undefined4 FUN_10f3bdb0(SCStr *param_1);
extern undefined4 FUN_10f3bdb0(...);
void __fastcall FUN_10f3d8d0(int param_1);
extern void __fastcall FUN_10f3d8d0(...);
void __fastcall FUN_10f3d910(int param_1);
extern void __fastcall FUN_10f3d910(...);
void __fastcall FUN_10f3f550(int param_1);
extern void __fastcall FUN_10f3f550(...);
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
void __fastcall FUN_10f420a0(int *param_1);
extern void __fastcall FUN_10f420a0(...);
undefined4 __fastcall FUN_10f42da0(int *param_1);
extern undefined4 __fastcall FUN_10f42da0(...);
void __fastcall FUN_10f42dd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
void __fastcall FUN_10f42dd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
void __fastcall FUN_10f437a0(int param_1);
extern void __fastcall FUN_10f437a0(...);
void __fastcall FUN_10f44930(int *param_1);
extern void __fastcall FUN_10f44930(...);
int __fastcall FUN_10f450f0(int *param_1);
extern int __fastcall FUN_10f450f0(...);
uint __fastcall FUN_10f46d90(int *param_1);
extern uint __fastcall FUN_10f46d90(...);
void __fastcall FUN_10f47170(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f47170(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f47850(int param_1);
extern void __fastcall FUN_10f47850(...);
undefined4 __stdcall FUN_10f47f80(short param_1, unsigned int recovered_unused_stack_0);
undefined4 __stdcall FUN_10f47f80(short param_1, unsigned int recovered_unused_stack_0);
int __fastcall FUN_10f4b4a0(int *param_1);
extern int __fastcall FUN_10f4b4a0(...);
int __fastcall FUN_10f4b4e0(int *param_1);
extern int __fastcall FUN_10f4b4e0(...);
void __fastcall FUN_10f4b5c0(int param_1);
extern void __fastcall FUN_10f4b5c0(...);
undefined4 __fastcall FUN_10f4b990(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
undefined4 __fastcall FUN_10f4b990(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
void __stdcall FUN_10f4b9c0(int param_1,int param_2);
void __stdcall FUN_10f4b9c0(int param_1,int param_2);
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
undefined4 * __fastcall FUN_10f4e130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f4e130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f4e590(int *param_1);
extern void __fastcall FUN_10f4e590(...);
void __fastcall FUN_10f4e6f0(int param_1);
extern void __fastcall FUN_10f4e6f0(...);
int __stdcall FUN_10f4ec90(undefined4 param_1);
int __stdcall FUN_10f4ec90(undefined4 param_1);
void __stdcall FUN_10f4fa50(undefined4 param_1,SCStr *param_2);
void __stdcall FUN_10f4fa50(undefined4 param_1,SCStr *param_2);
void __fastcall FUN_10f52370(int *param_1);
extern void __fastcall FUN_10f52370(...);
void __fastcall FUN_10f523a0(int *param_1);
extern void __fastcall FUN_10f523a0(...);
int * __fastcall FUN_10f52570(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10f52570(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f52840(int *param_1);
extern void __fastcall FUN_10f52840(...);
int __fastcall FUN_10f637f0(int param_1);
extern int __fastcall FUN_10f637f0(...);
void __fastcall FUN_10f65ed0(int *param_1);
extern void __fastcall FUN_10f65ed0(...);
void __fastcall FUN_10f65f00(int *param_1);
extern void __fastcall FUN_10f65f00(...);
int * __fastcall FUN_10f661c0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10f661c0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f66710(int *param_1);
extern void __fastcall FUN_10f66710(...);
void FUN_10f67a70(void);
extern void FUN_10f67a70(...);
int __fastcall FUN_10f685d0(int param_1);
extern int __fastcall FUN_10f685d0(...);
undefined4 * __fastcall FUN_10f6b980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f6b980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f70bd0(int *param_1);
extern void __fastcall FUN_10f70bd0(...);
void __fastcall FUN_10f70c00(int *param_1);
extern void __fastcall FUN_10f70c00(...);
void __fastcall FUN_10f70cd0(int *param_1);
extern void __fastcall FUN_10f70cd0(...);
void __fastcall FUN_10f70d00(int *param_1);
extern void __fastcall FUN_10f70d00(...);
int * __fastcall FUN_10f71110(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10f71110(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f71d20(int *param_1);
extern void __fastcall FUN_10f71d20(...);
void __fastcall FUN_10f71d50(int *param_1);
extern void __fastcall FUN_10f71d50(...);
void __fastcall FUN_10f74de0(undefined4 *param_1);
extern void __fastcall FUN_10f74de0(...);
void __fastcall FUN_10f756a0(int param_1);
extern void __fastcall FUN_10f756a0(...);
void __fastcall FUN_10f756e0(int param_1);
extern void __fastcall FUN_10f756e0(...);
undefined4 __fastcall FUN_10f76f60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
undefined4 __fastcall FUN_10f76f60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
int __fastcall FUN_10f782a0(int param_1);
extern int __fastcall FUN_10f782a0(...);
void __fastcall FUN_10f782e0(int param_1);
extern void __fastcall FUN_10f782e0(...);
uint __fastcall FUN_10f79c00(int param_1);
extern uint __fastcall FUN_10f79c00(...);
bool __fastcall FUN_10f79c20(int param_1);
extern bool __fastcall FUN_10f79c20(...);
undefined2 __fastcall FUN_10f79d40(int param_1);
extern undefined2 __fastcall FUN_10f79d40(...);
void __fastcall FUN_10f7ad60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f7ad60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f7adf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f7adf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f7af60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f7af60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_10f7b0c0(int param_1);
void __stdcall FUN_10f7b0c0(int param_1);
void __fastcall FUN_10f7b5a0(int param_1);
extern void __fastcall FUN_10f7b5a0(...);
void __fastcall FUN_10f7b5d0(int param_1);
extern void __fastcall FUN_10f7b5d0(...);
void __fastcall FUN_10f7b900(int param_1);
extern void __fastcall FUN_10f7b900(...);
void __fastcall FUN_10f7b950(int param_1);
extern void __fastcall FUN_10f7b950(...);
void __stdcall FUN_10f7c290(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_10f7c290(undefined4 *param_1,undefined4 param_2);
undefined4 * __fastcall FUN_10f7c6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f7c6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
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
int * __fastcall FUN_10f83140(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_10f83140(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
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
undefined4 * __fastcall FUN_10f87ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f87ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10f887f0(undefined4 *param_1);
extern void __fastcall FUN_10f887f0(...);
void __fastcall FUN_10f8c8e0(int param_1);
extern void __fastcall FUN_10f8c8e0(...);
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
void __fastcall FUN_10f91cd0(undefined4 *param_1);
extern void __fastcall FUN_10f91cd0(...);
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
void __stdcall FUN_10f99360(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10f99360(int param_1, unsigned int recovered_unused_stack_0);
undefined4 * __fastcall FUN_10f9a6f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f9a6f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f9a730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10f9a730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
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
undefined4 __fastcall FUN_10fa9a40(int param_1);
extern undefined4 __fastcall FUN_10fa9a40(...);
undefined4 __fastcall FUN_10fa9a90(int *param_1);
extern undefined4 __fastcall FUN_10fa9a90(...);
undefined1 FUN_10fa9ac0(SCStr *param_1);
extern undefined1 FUN_10fa9ac0(...);
void __fastcall FUN_10fa9dc0(int *param_1);
extern void __fastcall FUN_10fa9dc0(...);
undefined4 * __fastcall FUN_10fae4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10fae4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10fae4f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10fae4f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10fae520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10fae520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10fafca0(int param_1);
extern void __fastcall FUN_10fafca0(...);
int __stdcall FUN_10fb1100(undefined4 param_1);
int __stdcall FUN_10fb1100(undefined4 param_1);
int __stdcall FUN_10fb1130(undefined4 param_1);
int __stdcall FUN_10fb1130(undefined4 param_1);
int __stdcall FUN_10fb1160(undefined4 param_1);
int __stdcall FUN_10fb1160(undefined4 param_1);
int __stdcall FUN_10fb1190(undefined4 param_1);
int __stdcall FUN_10fb1190(undefined4 param_1);
int __stdcall FUN_10fb11c0(undefined4 param_1);
int __stdcall FUN_10fb11c0(undefined4 param_1);
void __fastcall FUN_10fb6aa0(int param_1);
extern void __fastcall FUN_10fb6aa0(...);
void __fastcall FUN_10fb6ef0(int param_1);
extern void __fastcall FUN_10fb6ef0(...);
undefined4 * __fastcall FUN_10fb74d0(undefined4 param_1);
extern undefined4 * __fastcall FUN_10fb74d0(...);
SCStr * FUN_10fb8f00(SCStr *param_1,int param_2);
extern SCStr * FUN_10fb8f00(...);
void __stdcall FUN_10fbfe40(int param_1, unsigned int recovered_unused_stack_0);
void __stdcall FUN_10fbfe40(int param_1, unsigned int recovered_unused_stack_0);
undefined4 * __fastcall FUN_10fc12c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10fc12c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
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
void __fastcall FUN_10fce530(undefined4 *param_1);
extern void __fastcall FUN_10fce530(...);
void __stdcall FUN_10fcec60(int param_1,int param_2);
void __stdcall FUN_10fcec60(int param_1,int param_2);
SCStr * __stdcall FUN_10fced10(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_10fced10(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_10fced40(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
SCStr * __stdcall FUN_10fced40(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __stdcall FUN_10fcee40(undefined4 param_1);
undefined4 __stdcall FUN_10fcee40(undefined4 param_1);
undefined4 __stdcall FUN_10fcee60(undefined4 param_1);
undefined4 __stdcall FUN_10fcee60(undefined4 param_1);
SCStr * __stdcall FUN_10fcf010(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
SCStr * __stdcall FUN_10fcf010(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
SCStr * __stdcall FUN_10fcf040(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
SCStr * __stdcall FUN_10fcf040(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
undefined4 __stdcall FUN_10fcf0d0(undefined4 param_1, unsigned int recovered_unused_stack_0);
undefined4 __stdcall FUN_10fcf0d0(undefined4 param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_10fcf1f0(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_10fcf1f0(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_10fcf220(SCStr *param_1, unsigned int recovered_unused_stack_0);
SCStr * __stdcall FUN_10fcf220(SCStr *param_1, unsigned int recovered_unused_stack_0);
undefined4 __stdcall FUN_10fcf250(undefined4 param_1);
undefined4 __stdcall FUN_10fcf250(undefined4 param_1);
void __fastcall FUN_10fdd8d0(int param_1);
extern void __fastcall FUN_10fdd8d0(...);
void __fastcall FUN_10fddaa0(int param_1);
extern void __fastcall FUN_10fddaa0(...);
void __fastcall FUN_10fddea0(int param_1);
extern void __fastcall FUN_10fddea0(...);
void __fastcall FUN_10fe0720(undefined4 *param_1);
extern void __fastcall FUN_10fe0720(...);
void __stdcall FUN_10fe1610(int param_1,int param_2);
void __stdcall FUN_10fe1610(int param_1,int param_2);
void __fastcall FUN_10fe3320(int param_1);
extern void __fastcall FUN_10fe3320(...);
void __fastcall FUN_10fe3350(int param_1);
extern void __fastcall FUN_10fe3350(...);
void __fastcall FUN_10fe34f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10fe34f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10fe6d40(int param_1);
extern undefined4 __fastcall FUN_10fe6d40(...);
undefined4 __fastcall FUN_10fe84e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10fe84e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10fe8510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10fe8510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10fe8530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_10fe8530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_10fe9cb0(undefined4 param_1,int *param_2);
void __stdcall FUN_10fe9cb0(undefined4 param_1,int *param_2);
undefined4 * __fastcall FUN_10fec290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_10fec290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __stdcall FUN_10fef250(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_10fef250(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_10fef280(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_10fef280(undefined4 param_1,undefined4 param_2);
void __stdcall FUN_10ff0d00(int param_1,int param_2);
void __stdcall FUN_10ff0d00(int param_1,int param_2);
void __stdcall FUN_10ff0d50(int param_1,int param_2);
void __stdcall FUN_10ff0d50(int param_1,int param_2);
int __fastcall FUN_10ff1960(int param_1);
extern int __fastcall FUN_10ff1960(...);
undefined4 FUN_10ff1ad0(int param_1);
extern undefined4 FUN_10ff1ad0(...);
undefined4 __stdcall FUN_10ff1ce0(int param_1);
undefined4 __stdcall FUN_10ff1ce0(int param_1);
undefined4 __stdcall FUN_10ff1d00(int param_1);
undefined4 __stdcall FUN_10ff1d00(int param_1);
undefined1 FUN_10ff3020(int param_1);
extern undefined1 FUN_10ff3020(...);
undefined4 __fastcall FUN_10ff6e20(int param_1);
extern undefined4 __fastcall FUN_10ff6e20(...);
undefined4 FUN_10ff6e80(int param_1);
extern undefined4 FUN_10ff6e80(...);
undefined4 __fastcall FUN_10ff6f60(int param_1);
extern undefined4 __fastcall FUN_10ff6f60(...);
void __fastcall FUN_10ff81f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10ff81f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10ffaf90(undefined4 *param_1);
extern void __fastcall FUN_10ffaf90(...);
void __fastcall FUN_10ffb490(int *param_1);
extern void __fastcall FUN_10ffb490(...);
void __fastcall FUN_10ffbc50(int *param_1);
extern void __fastcall FUN_10ffbc50(...);
byte __fastcall FUN_10ffcab0(int param_1);
extern byte __fastcall FUN_10ffcab0(...);
undefined4 __fastcall FUN_10ffce70(int param_1);
extern undefined4 __fastcall FUN_10ffce70(...);
undefined4 __fastcall FUN_10ffd060(int *param_1);
extern undefined4 __fastcall FUN_10ffd060(...);
void __fastcall FUN_10ffd5c0(int *param_1);
extern void __fastcall FUN_10ffd5c0(...);
undefined4 __fastcall FUN_10ffec20(int *param_1);
extern undefined4 __fastcall FUN_10ffec20(...);
void __fastcall FUN_10fff880(undefined4 *param_1);
extern void __fastcall FUN_10fff880(...);
undefined4 FUN_10fffc00(SCStr *param_1);
extern undefined4 FUN_10fffc00(...);
void __fastcall FUN_10fffc90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10fffc90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 __fastcall FUN_110031b0(int *param_1);
extern undefined4 __fastcall FUN_110031b0(...);
void __fastcall FUN_11007ed0(int *param_1);
extern void __fastcall FUN_11007ed0(...);
void __fastcall FUN_11007f00(int *param_1);
extern void __fastcall FUN_11007f00(...);
int * __fastcall FUN_11008010(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
int * __fastcall FUN_11008010(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_110082c0(int *param_1);
extern void __fastcall FUN_110082c0(...);
void __stdcall FUN_1100bf00(int param_1);
void __stdcall FUN_1100bf00(int param_1);
void __stdcall FUN_1100bf20(int param_1);
void __stdcall FUN_1100bf20(int param_1);
void __fastcall FUN_11010200(int *param_1);
extern void __fastcall FUN_11010200(...);
// Reference entry 10e120a0; body size 17 bytes.
#line 1 "ENTRY_10e120a0"

void __stdcall FUN_10e120a0(undefined4 param_1)

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
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
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
  
  *(undefined1*)(param_1 + 0x94) = (undefined1)(0);
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
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
    *(undefined1*)(puVar1 + 3) = (undefined1)(0);
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e19ca0; body size 26 bytes.
#line 1 "ENTRY_10e19ca0"

undefined4 __thiscall Recovered_Bulk::FUN_10e19ca0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e19cf0; body size 23 bytes.
#line 1 "ENTRY_10e19cf0"

undefined4 __thiscall Recovered_Bulk::FUN_10e19cf0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e1eb40; body size 37 bytes.
#line 1 "ENTRY_10e1eb40"

void __fastcall FUN_10e1eb40(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e1eb70; body size 37 bytes.
#line 1 "ENTRY_10e1eb70"

void __fastcall FUN_10e1eb70(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e1eba0; body size 37 bytes.
#line 1 "ENTRY_10e1eba0"

void __fastcall FUN_10e1eba0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e1ef50; body size 24 bytes.
#line 1 "ENTRY_10e1ef50"

undefined4 __fastcall FUN_10e1ef50(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
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
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
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

undefined4 * __thiscall Recovered_Bulk::FUN_10e23140(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e24330; body size 26 bytes.
#line 1 "ENTRY_10e24330"

undefined4 __thiscall Recovered_Bulk::FUN_10e24330(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e24380; body size 23 bytes.
#line 1 "ENTRY_10e24380"

undefined4 __thiscall Recovered_Bulk::FUN_10e24380(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e24930; body size 24 bytes.
#line 1 "ENTRY_10e24930"

undefined4 __fastcall FUN_10e24930(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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

int * __fastcall FUN_10e28c10(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e28c40(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e28c70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e28ca0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 10e2b550; body size 56 bytes.
#line 1 "ENTRY_10e2b550"

void __thiscall Recovered_Bulk::FUN_10e2b550(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)((0x0))) {
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

void __thiscall Recovered_Bulk::FUN_10e2bfe0(int param_2,ushort param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x10) == (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x1c) + 0x30))());
    if ((cVar1 != '\0') && (*(int **)(param_1 + 0x24) != (int *)((0x0)))) {
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
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x38) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
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

void __thiscall Recovered_Bulk::FUN_10e46b00(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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

void __stdcall FUN_10e4a6b0(int param_1,int param_2)

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

void __stdcall FUN_10e4a700(int param_1,int param_2)

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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e4afe0; body size 26 bytes.
#line 1 "ENTRY_10e4afe0"

undefined4 __thiscall Recovered_Bulk::FUN_10e4afe0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e4b030; body size 23 bytes.
#line 1 "ENTRY_10e4b030"

undefined4 __thiscall Recovered_Bulk::FUN_10e4b030(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e4e2d0; body size 24 bytes.
#line 1 "ENTRY_10e4e2d0"

undefined4 __fastcall FUN_10e4e2d0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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

void __thiscall Recovered_Bulk::FUN_10e4e590(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e55780; body size 26 bytes.
#line 1 "ENTRY_10e55780"

undefined4 __thiscall Recovered_Bulk::FUN_10e55780(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e557d0; body size 23 bytes.
#line 1 "ENTRY_10e557d0"

undefined4 __thiscall Recovered_Bulk::FUN_10e557d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e58620; body size 60 bytes.
#line 1 "ENTRY_10e58620"

void __fastcall FUN_10e58620(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x4c));
    *(undefined4*)(param_1 + 0x4c) = (undefined4)(0);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x38))(1);
    }
    *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e58670; body size 37 bytes.
#line 1 "ENTRY_10e58670"

void __fastcall FUN_10e58670(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e586a0; body size 37 bytes.
#line 1 "ENTRY_10e586a0"

void __fastcall FUN_10e586a0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
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
    if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    }
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10e5acb0; body size 49 bytes.
#line 1 "ENTRY_10e5acb0"

int __thiscall Recovered_Bulk::FUN_10e5acb0(uint *param_2)
{
  int *param_1 = (int *)this;
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

undefined4 * __fastcall FUN_10e5c000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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

int * __fastcall FUN_10e5f6b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e5f6e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e5f710(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e5f740(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e5f770(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

void __thiscall Recovered_Bulk::FUN_10e62aa0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x24) == (int *)((0x0))) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 0x20))());
  }
  if (param_2 == iVar1) {
    *(undefined1*)(param_1 + 0x18) = (undefined1)(0);
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
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x78) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x14) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x84) != (int *)((0x0))) {
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
    *(undefined1*)(puVar2 + 3) = (undefined1)(0);
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

void __stdcall FUN_10e69350(int param_1,int param_2)

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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e69d50; body size 26 bytes.
#line 1 "ENTRY_10e69d50"

undefined4 __thiscall Recovered_Bulk::FUN_10e69d50(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e69dd0; body size 23 bytes.
#line 1 "ENTRY_10e69dd0"

undefined4 __thiscall Recovered_Bulk::FUN_10e69dd0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e714a0; body size 24 bytes.
#line 1 "ENTRY_10e714a0"

undefined4 __fastcall FUN_10e714a0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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

undefined4 __fastcall FUN_10e72180(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)((0x0))) {
    (**(code **)**(undefined4 **)(param_1 + 4))
              (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  return (undefined4)(0);
}


// Reference entry 10e755c0; body size 25 bytes.
#line 1 "ENTRY_10e755c0"

void __stdcall FUN_10e755c0(int param_1, unsigned int recovered_unused_stack_0)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e755e0; body size 18 bytes.
#line 1 "ENTRY_10e755e0"

void __stdcall FUN_10e755e0(int param_1, unsigned int recovered_unused_stack_0)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e75600; body size 18 bytes.
#line 1 "ENTRY_10e75600"

void __stdcall FUN_10e75600(int param_1, unsigned int recovered_unused_stack_0)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e75620; body size 25 bytes.
#line 1 "ENTRY_10e75620"

void __stdcall FUN_10e75620(int param_1, unsigned int recovered_unused_stack_0)

{
  if ((param_1 == 0) || (param_1 == 1)) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10e75640; body size 25 bytes.
#line 1 "ENTRY_10e75640"

void __stdcall FUN_10e75640(int param_1, unsigned int recovered_unused_stack_0)

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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x10) + 0x1c))());
    if (cVar1 != '\0') {
      (**(code **)(*(int *)(param_1 + 0xc) + 4))();
    }
  }
  if (*(int **)(param_1 + 0x78) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e79760; body size 26 bytes.
#line 1 "ENTRY_10e79760"

undefined4 __thiscall Recovered_Bulk::FUN_10e79760(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e79a40; body size 23 bytes.
#line 1 "ENTRY_10e79a40"

undefined4 __thiscall Recovered_Bulk::FUN_10e79a40(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e7b410; body size 24 bytes.
#line 1 "ENTRY_10e7b410"

undefined4 __fastcall FUN_10e7b410(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x38) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
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

void __stdcall FUN_10e82e70(int param_1, unsigned int recovered_unused_stack_0)

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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10e84e70; body size 26 bytes.
#line 1 "ENTRY_10e84e70"

undefined4 __thiscall Recovered_Bulk::FUN_10e84e70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e84ec0; body size 23 bytes.
#line 1 "ENTRY_10e84ec0"

undefined4 __thiscall Recovered_Bulk::FUN_10e84ec0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10e86660; body size 24 bytes.
#line 1 "ENTRY_10e86660"

undefined4 __fastcall FUN_10e86660(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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

undefined4 * __thiscall Recovered_Bulk::FUN_10e86e40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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

int * __fastcall FUN_10e96720(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e96750(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e96780(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e967b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e967e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10e96810(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

void __thiscall Recovered_Bulk::FUN_10e9c020(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x18) == (int *)((0x0))) {
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

undefined4 * __thiscall Recovered_Bulk::FUN_10e9deb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
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

undefined4 * __thiscall Recovered_Bulk::FUN_10e9dee0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)0x0);
  if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
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

SCStr * __thiscall Recovered_Bulk::FUN_10ea1c30(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x80) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1dd0; body size 53 bytes.
#line 1 "ENTRY_10ea1dd0"

SCStr * __thiscall Recovered_Bulk::FUN_10ea1dd0(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1ec0; body size 53 bytes.
#line 1 "ENTRY_10ea1ec0"

SCStr * __thiscall Recovered_Bulk::FUN_10ea1ec0(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1f80; body size 56 bytes.
#line 1 "ENTRY_10ea1f80"

SCStr * __thiscall Recovered_Bulk::FUN_10ea1f80(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea1fd0; body size 53 bytes.
#line 1 "ENTRY_10ea1fd0"

SCStr * __thiscall Recovered_Bulk::FUN_10ea1fd0(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ea2020; body size 56 bytes.
#line 1 "ENTRY_10ea2020"

SCStr * __thiscall Recovered_Bulk::FUN_10ea2020(SCStr *param_2)
{
  int param_1 = (int )this;
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
    if (*(int **)(param_1 + 0x1c) != (int *)((0x0))) {
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

void __stdcall FUN_10ea8130(undefined4 param_1,int *param_2)

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

void __thiscall Recovered_Bulk::FUN_10eabdb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10eabdf0; body size 35 bytes.
#line 1 "ENTRY_10eabdf0"

void __stdcall FUN_10eabdf0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    thunk_FUN_108754f0();
  }
  return;
}


// Reference entry 10eabe20; body size 17 bytes.
#line 1 "ENTRY_10eabe20"

void __stdcall FUN_10eabe20(undefined4 *param_1)

{
  FUN_10ea7290(*param_1);
  return;
}


// Reference entry 10eabf30; body size 19 bytes.
#line 1 "ENTRY_10eabf30"

void __thiscall Recovered_Bulk::FUN_10eabf30(undefined4 *param_2)
{
  int param_1 = (int )this;
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
    *(undefined4*)(iVar1 + 0x10) = (undefined4)(*(undefined4 *)(iVar1 + 0xc));
    return;
  }
  *(int*)(iVar1 + 0x10) = (int)(iVar3);
  return;
}


// Reference entry 10eac620; body size 54 bytes.
#line 1 "ENTRY_10eac620"

void __stdcall FUN_10eac620(int param_1,int param_2)

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

undefined4 * __thiscall Recovered_Bulk::FUN_10eae0a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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

undefined4 __thiscall Recovered_Bulk::FUN_10eb2610(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
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

void __thiscall Recovered_Bulk::FUN_10eb3a80(uint param_2)
{
  int *param_1 = (int *)this;
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

undefined4 __stdcall FUN_10eb4160(undefined4 param_1)

{
  thunk_FUN_106dfa00(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10eb4f60; body size 60 bytes.
#line 1 "ENTRY_10eb4f60"

int __thiscall Recovered_Bulk::FUN_10eb4f60(SCStr *param_2)
{
  int *param_1 = (int *)this;
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

int __thiscall Recovered_Bulk::FUN_10eb4fb0(SCStr *param_2)
{
  int *param_1 = (int *)this;
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

int __thiscall Recovered_Bulk::FUN_10eb5000(SCStr *param_2)
{
  int *param_1 = (int *)this;
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

undefined4 * __fastcall FUN_10eb6040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb6080; body size 48 bytes.
#line 1 "ENTRY_10eb6080"

undefined4 * __fastcall FUN_10eb6080(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb60c0; body size 48 bytes.
#line 1 "ENTRY_10eb60c0"

undefined4 * __fastcall FUN_10eb60c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10eb9540; body size 27 bytes.
#line 1 "ENTRY_10eb9540"

undefined4 __thiscall Recovered_Bulk::FUN_10eb9540(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2);
  (**(code **)(*param_1 + 8))(param_2,param_3);
  thunk_FUN_105ae230(uVar1,param_3);
  return (undefined4)(param_2);
}


// Reference entry 10eba5f0; body size 19 bytes.
#line 1 "ENTRY_10eba5f0"

void __thiscall Recovered_Bulk::FUN_10eba5f0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 8))(param_2);
  thunk_FUN_105ae450(param_2);
  return;
}


// Reference entry 10ebb360; body size 46 bytes.
#line 1 "ENTRY_10ebb360"

void __thiscall Recovered_Bulk::FUN_10ebb360(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
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

void __thiscall Recovered_Bulk::FUN_10ebb790(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2);
  thunk_FUN_105ad940(param_2);
  return;
}


// Reference entry 10ebb7d0; body size 40 bytes.
#line 1 "ENTRY_10ebb7d0"

void __thiscall Recovered_Bulk::FUN_10ebb7d0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2);
  thunk_FUN_105ae900(param_2);
  return;
}


// Reference entry 10ebb810; body size 48 bytes.
#line 1 "ENTRY_10ebb810"

void __thiscall Recovered_Bulk::FUN_10ebb810(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4);
  thunk_FUN_105aeb50(param_2,param_3,param_4);
  return;
}


// Reference entry 10ebb850; body size 50 bytes.
#line 1 "ENTRY_10ebb850"

void __thiscall Recovered_Bulk::FUN_10ebb850(int param_2)
{
  int *param_1 = (int *)this;
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

void __thiscall Recovered_Bulk::FUN_10ebb890(int param_2,int param_3)
{
  int *param_1 = (int *)this;
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

void __thiscall Recovered_Bulk::FUN_10ebb8e0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
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

void __thiscall Recovered_Bulk::FUN_10ebba70(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  (**(code **)(*param_1 + 0xc))(param_2);
  thunk_FUN_105af1c0(param_2);
  return;
}


// Reference entry 10ebbab0; body size 41 bytes.
#line 1 "ENTRY_10ebbab0"

void __thiscall Recovered_Bulk::FUN_10ebbab0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  iVar1 = (int)((**(code **)(*param_1 + 0xc))());
  *(uint*)(iVar1 + 0xd8) = (uint)(*(uint *)(iVar1 + 0xd8) | param_2);
  return;
}


// Reference entry 10ebbaf0; body size 43 bytes.
#line 1 "ENTRY_10ebbaf0"

void __thiscall Recovered_Bulk::FUN_10ebbaf0(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  thunk_FUN_105a26b0();
  thunk_FUN_10df2ea0();
  iVar1 = (int)((**(code **)(*param_1 + 0xc))());
  *(uint*)(iVar1 + 0xd8) = (uint)(*(uint *)(iVar1 + 0xd8) & ~param_2);
  return;
}


// Reference entry 10ebc210; body size 53 bytes.
#line 1 "ENTRY_10ebc210"

void __thiscall Recovered_Bulk::FUN_10ebc210(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_105a2cd0(param_2);
  thunk_FUN_105a2cd0(param_2);
  (**(code **)(*param_1 + 0x3c))();
  thunk_FUN_106dc650(param_2,param_1);
  return;
}


// Reference entry 10ebc260; body size 50 bytes.
#line 1 "ENTRY_10ebc260"

void __stdcall FUN_10ebc260(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10df15d0(param_2);
  thunk_FUN_105a2e60(param_2);
  thunk_FUN_106dc6c0(param_1,param_2);
  return;
}


// Reference entry 10ebc2a0; body size 63 bytes.
#line 1 "ENTRY_10ebc2a0"

void __thiscall Recovered_Bulk::FUN_10ebc2a0(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  thunk_FUN_10df3040(param_1);
  thunk_FUN_105a3010(param_2);
  (**(code **)(*param_1 + 0x40))();
  thunk_FUN_10df3a40(param_1,param_1[0x2f]);
  *param_3 = (int)(param_1[0x2f]);
  return;
}


// Reference entry 10ebc5d0; body size 42 bytes.
#line 1 "ENTRY_10ebc5d0"

void __thiscall Recovered_Bulk::FUN_10ebc5d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(*(SCStr **)(param_1 + 4)))->op_ctor(param_2);
  thunk_FUN_105f6050(param_2 + 4);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x24);
  return;
}


// Reference entry 10ebfa70; body size 59 bytes.
#line 1 "ENTRY_10ebfa70"

void __thiscall Recovered_Bulk::FUN_10ebfa70(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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

int __thiscall Recovered_Bulk::FUN_10ec35e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10ebd6e0(*(undefined4 *)(param_1 + 4),*param_2,param_2[1],param_2);
  return (int)(param_1);
}


// Reference entry 10ec3610; body size 63 bytes.
#line 1 "ENTRY_10ec3610"

int __thiscall Recovered_Bulk::FUN_10ec3610(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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

undefined4 __stdcall FUN_10ec7200(undefined4 param_1)

{
  thunk_FUN_106d83f0(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10ec99c0; body size 59 bytes.
#line 1 "ENTRY_10ec99c0"

void __thiscall Recovered_Bulk::FUN_10ec99c0(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10ebc8e0(puVar1,param_2);
  return;
}


// Reference entry 10ec9a10; body size 57 bytes.
#line 1 "ENTRY_10ec9a10"

void __thiscall Recovered_Bulk::FUN_10ec9a10(uint param_2)
{
  int *param_1 = (int *)this;
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

undefined4 * __fastcall FUN_10ed09d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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

int * __fastcall FUN_10edfac0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

void __thiscall Recovered_Bulk::FUN_10ee16d0(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (((param_2 != 0) && ((int)(param_2) == *(int *)(param_1 + 0xfc))) &&
     ((int)(param_3) == *(int *)(param_1 + 0xf8))) {
    thunk_FUN_10ee15b0(3);
  }
  return;
}


// Reference entry 10ee1710; body size 41 bytes.
#line 1 "ENTRY_10ee1710"

void __thiscall Recovered_Bulk::FUN_10ee1710(int param_2,int param_3)
{
  int param_1 = (int )this;
  if (((param_2 != 0) && ((int)(param_2) == *(int *)(param_1 + 0xfc))) &&
     ((int)(param_3) == *(int *)(param_1 + 0xf8))) {
    thunk_FUN_10ee15b0(4);
  }
  return;
}


// Reference entry 10ee1750; body size 41 bytes.
#line 1 "ENTRY_10ee1750"

void __thiscall Recovered_Bulk::FUN_10ee1750(int param_2,int param_3)
{
  int param_1 = (int )this;
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
  *(undefined4*)(param_1 + 0xc0) = (undefined4)(0);
  thunk_FUN_10302280(param_1 + 4,"Stop the KeepAlive timer");
  *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb0) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb4) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb8) = (undefined4)(1);
  thunk_FUN_111bd6b0();
  return;
}


// Reference entry 10ee2fa0; body size 35 bytes.
#line 1 "ENTRY_10ee2fa0"

void __fastcall FUN_10ee2fa0(int param_1)

{
  thunk_FUN_103021f0(param_1 + 4,5,"Cancel connection timer");
  *(undefined8*)(param_1 + 0x9c) = (undefined8)(0);
  return;
}


// Reference entry 10ee2fd0; body size 33 bytes.
#line 1 "ENTRY_10ee2fd0"

void __fastcall FUN_10ee2fd0(int param_1)

{
  thunk_FUN_10302280(param_1 + 4,"Cancel retransmit timer");
  *(undefined8*)(param_1 + 0x94) = (undefined8)(0);
  return;
}


// Reference entry 10ee4150; body size 58 bytes.
#line 1 "ENTRY_10ee4150"

void __fastcall FUN_10ee4150(int param_1)

{
  *(undefined4*)(param_1 + 0xc0) = (undefined4)(0);
  thunk_FUN_111bd050(*(undefined1 *)(param_1 + 0x358c));
  *(undefined1*)(param_1 + 0x358c) = (undefined1)(0);
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
  *(undefined1*)(param_1 + 0x358c) = (undefined1)(0);
  thunk_FUN_10302280(param_1 + 4,"Close notify sent");
  return (undefined4)(0);
}


// Reference entry 10ee7150; body size 32 bytes.
#line 1 "ENTRY_10ee7150"

void __fastcall FUN_10ee7150(int param_1)

{
  thunk_FUN_10302280(param_1 + 4,"Stop the KeepAlive timer");
  *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb0) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xb4) = (undefined4)(0);
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

int * __fastcall FUN_10eebed0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int * __fastcall FUN_10eebf00(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int __stdcall FUN_10eefae0(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10c5e5a0(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
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
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= (int)(*param_1))) {
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


// Reference entry 10ef5ee0; body size 62 bytes.
#line 1 "ENTRY_10ef5ee0"

void __thiscall Recovered_Bulk::FUN_10ef5ee0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  for (piVar1 = (int *)(*(int **)(param_1 + 4));(int *)( piVar1) != *(int **)(param_1 + 8); piVar1 = piVar1 + 1) {
    if (*piVar1 == param_2) {
      return;
    }
  }
  piVar1 = (int *)(*(int **)(param_1 + 8));
  if ((int *)(piVar1) == *(int **)(param_1 + 0xc)) {
    thunk_FUN_10ef4620(piVar1,&param_2);
    return;
  }
  *piVar1 = (int)(param_2);
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + 4);
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
  *(undefined1*)(param_1 + 8) = (undefined1)(uVar1);
  return;
}


// Reference entry 10ef82c0; body size 60 bytes.
#line 1 "ENTRY_10ef82c0"

void __thiscall Recovered_Bulk::FUN_10ef82c0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  int *_Dst;
  
  piVar1 = (int *)(*(int **)(param_1 + 8));
  _Dst = (int *)(*(int **)(param_1 + 4));
  if ((int *)((_Dst)) != (int *)(piVar1)) {
    while (*_Dst != param_2) {
      _Dst = (int *)(_Dst + 1);
      if ((int *)((_Dst)) == (int *)(piVar1)) {
        return;
      }
    }
    if ((int *)((_Dst)) != (int *)(piVar1)) {
      memmove(_Dst,_Dst + 1,(int)piVar1 - (int)(_Dst + 1));
      *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + -4);
    }
  }
  return;
}


// Reference entry 10ef9850; body size 49 bytes.
#line 1 "ENTRY_10ef9850"

int __thiscall Recovered_Bulk::FUN_10ef9850(int *param_2)
{
  int *param_1 = (int *)this;
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

undefined4 * __thiscall Recovered_Bulk::FUN_10efdbb0(undefined4 *param_2)
{
  int param_1 = (int )this;
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
      ((*(char **)(param_1 + 8) != (char *)((0x0) && (**(char **)(param_1 + 8) != '\0'))))) &&
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

void __thiscall Recovered_Bulk::FUN_10f01c60(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10f01c90(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x74);
  return;
}


// Reference entry 10f01ee0; body size 43 bytes.
#line 1 "ENTRY_10f01ee0"

void __stdcall FUN_10f01ee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  undefined1 local_4;
  
  thunk_FUN_10f01a30(&local_8,param_2,param_3);
  *param_1 = (undefined4)(local_8);
  *(undefined1*)(param_1 + 1) = (undefined1)(local_4);
  return;
}


// Reference entry 10f02150; body size 48 bytes.
#line 1 "ENTRY_10f02150"

undefined4 * __fastcall FUN_10f02150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x74));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f021f0; body size 48 bytes.
#line 1 "ENTRY_10f021f0"

undefined4 * __fastcall FUN_10f021f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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

undefined4 __stdcall FUN_10f11b90(undefined4 param_1)

{
  thunk_FUN_10f11890(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10f163a0; body size 60 bytes.
#line 1 "ENTRY_10f163a0"

int __thiscall Recovered_Bulk::FUN_10f163a0(SCStr *param_2)
{
  int *param_1 = (int *)this;
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

void __thiscall Recovered_Bulk::FUN_10f16c50(undefined4 *param_2)
{
  int param_1 = (int )this;
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10f15f70(puVar1,param_2);
  return;
}


// Reference entry 10f16f30; body size 48 bytes.
#line 1 "ENTRY_10f16f30"

undefined4 * __fastcall FUN_10f16f30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f18020; body size 55 bytes.
#line 1 "ENTRY_10f18020"

int * __thiscall Recovered_Bulk::FUN_10f18020(byte param_2)
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


// Reference entry 10f19500; body size 56 bytes.
#line 1 "ENTRY_10f19500"

void __stdcall FUN_10f19500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 2) {
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

void __thiscall Recovered_Bulk::FUN_10f1aa30(undefined4 *param_2)
{
  int param_1 = (int )this;
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10f15f70(puVar1,param_2);
  return;
}


// Reference entry 10f1bf40; body size 48 bytes.
#line 1 "ENTRY_10f1bf40"

undefined4 * __fastcall FUN_10f1bf40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1bf80; body size 48 bytes.
#line 1 "ENTRY_10f1bf80"

undefined4 * __fastcall FUN_10f1bf80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1df20; body size 56 bytes.
#line 1 "ENTRY_10f1df20"

int __stdcall FUN_10f1df20(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f1b420(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
    return (int)(local_4 + 0x14);
  }
                    
  std::_Xout_of_range("invalid map<K, T> key");
}


// Reference entry 10f1df70; body size 56 bytes.
#line 1 "ENTRY_10f1df70"

int __stdcall FUN_10f1df70(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f1b480(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
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
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= (int)(*param_1))) {
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
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= (int)(*param_1))) {
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

void __thiscall Recovered_Bulk::FUN_10f228a0(int param_2)
{
  int param_1 = (int )this;
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

undefined4 * __fastcall FUN_10f24a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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

undefined4 __stdcall FUN_10f2a8e0(undefined4 param_1)

{
  thunk_FUN_10f29d90(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10f2a900; body size 19 bytes.
#line 1 "ENTRY_10f2a900"

undefined4 __stdcall FUN_10f2a900(undefined4 param_1)

{
  thunk_FUN_10f29d90(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10f2ce50; body size 38 bytes.
#line 1 "ENTRY_10f2ce50"

undefined4 __thiscall Recovered_Bulk::FUN_10f2ce50(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
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
    if (*(undefined4 **)(param_1 + 0x538) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x538))(1);
    }
    *(undefined4*)(param_1 + 0x538) = (undefined4)(0);
  }
  return;
}


// Reference entry 10f372e0; body size 21 bytes.
#line 1 "ENTRY_10f372e0"

undefined4 __thiscall Recovered_Bulk::FUN_10f372e0(char *param_2,uint param_3)
{
  int param_1 = (int )this;
  ((SCStr *)((SCStr *)(param_1 + 0x20)))->append(param_2,param_3);
  return (undefined4)(1);
}


// Reference entry 10f37e60; body size 48 bytes.
#line 1 "ENTRY_10f37e60"

undefined4 * __fastcall FUN_10f37e60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f392b0; body size 56 bytes.
#line 1 "ENTRY_10f392b0"

int __stdcall FUN_10f392b0(int *param_1)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10f377b0(local_c,param_1);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
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
     (*(int *)(*(int *)(iVar1 + 8) + 0x10) <= (int)(*param_1))) {
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

void __thiscall Recovered_Bulk::FUN_10f3d660(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x3c) == (int *)((0x0))) {
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

void __thiscall Recovered_Bulk::FUN_10f3d690(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x34) == (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x3c) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
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
  if (*(int **)(param_1 + 0x120) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x120) + 0x14))();
    if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
    }
    *(undefined4*)(param_1 + 0x120) = (undefined4)(0);
  }
  return;
}


// Reference entry 10f3fb40; body size 37 bytes.
#line 1 "ENTRY_10f3fb40"

void __thiscall Recovered_Bulk::FUN_10f3fb40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((int *)(int *)(param_1[2]) != (int *)(0x0)) {
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


  if ((int *)(int *)(*param_1) != (int *)(0x0)) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
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


  if ((int *)(int *)(*param_1) != (int *)(0x0)) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
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


  if ((int *)(int *)(*param_1) != (int *)(0x0)) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
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


  if ((int *)(int *)(*param_1) != (int *)(0x0)) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
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

void __thiscall Recovered_Bulk::FUN_10f41d20(int param_2)
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

void __fastcall FUN_10f42dd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

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
  *(__time64_t*)(param_1 + 0x68) = (__time64_t)(_Var1);
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


  if ((int *)(int *)(*param_1) != (int *)(0x0)) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
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
    if ((((*(int *)(pcVar2 + 8) != 0) && (pcVar2 = (char *)param_1[0x13],(char *)( pcVar2) != (char *)0x0)) &&
        (*pcVar2 != '\0')) && ((param_1[0xe] == 0 || (param_1[0x10] != 0)))) {
      return (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(1)));
    }
  }
  return (uint)((uint)pcVar2 & 0xffffff00);
}


// Reference entry 10f47170; body size 58 bytes.
#line 1 "ENTRY_10f47170"

void __fastcall FUN_10f47170(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

undefined4 __stdcall FUN_10f47f80(short param_1, unsigned int recovered_unused_stack_0)

{
  return (undefined4)(((uint)(3) << 8 | (uint)(param_1 != 0x3ec)));
}


// Reference entry 10f47fa0; body size 37 bytes.
#line 1 "ENTRY_10f47fa0"

void __thiscall Recovered_Bulk::FUN_10f47fa0(undefined4 param_2)
{
  int param_1 = (int )this;
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

void __thiscall Recovered_Bulk::FUN_10f499d0(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
    *(undefined1*)(param_1 + 0x10) = (undefined1)(1);
    thunk_FUN_11161d90();
    return;
  }
  return;
}


// Reference entry 10f4b990; body size 21 bytes.
#line 1 "ENTRY_10f4b990"

undefined4 __fastcall FUN_10f4b990(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

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

void __stdcall FUN_10f4b9c0(int param_1,int param_2)

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
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)((0x0))) {
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
    if ((undefined1 *)(undefined1 *)(param_1[0xc]) != (undefined1 *)(0x0)) {
      puVar2 = (undefined1 *)((undefined1 *)param_1[0xc]);
    }
    iVar1 = (int)((**(code **)(*(int *)(param_1[0x10] + 0x1c) + 0xc))(puVar2));
    if (iVar1 != 0) {
      return;
    }
  }
  *(undefined1*)(param_1 + 0xd) = (undefined1)(1);
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
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)((0x0))) {
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
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)((0x0))) {
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
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)((0x0))) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 8));
    }
    uVar1 = (undefined4)(thunk_FUN_1115f390(puVar2));
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10f4c970; body size 59 bytes.
#line 1 "ENTRY_10f4c970"

void __thiscall Recovered_Bulk::FUN_10f4c970(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10f494b0(puVar1,param_2);
  return;
}


// Reference entry 10f4e130; body size 39 bytes.
#line 1 "ENTRY_10f4e130"

undefined4 * __fastcall FUN_10f4e130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
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


  if ((int *)(int *)(*param_1) != (int *)(0x0)) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
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

int __stdcall FUN_10f4ec90(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10f4da00(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10f4fa50; body size 33 bytes.
#line 1 "ENTRY_10f4fa50"

void __stdcall FUN_10f4fa50(undefined4 param_1,SCStr *param_2)

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

undefined4 __thiscall Recovered_Bulk::FUN_10f50750(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10f518c0; body size 29 bytes.
#line 1 "ENTRY_10f518c0"

void __thiscall Recovered_Bulk::FUN_10f518c0(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
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

int * __fastcall FUN_10f52570(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

void __thiscall Recovered_Bulk::FUN_10f63e00(SCStr *param_2,undefined1 param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("voice.confirmationTone"));
  if (bVar1) {
    *(undefined1*)(param_1 + 0x1c) = (undefined1)(param_3);
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

int * __fastcall FUN_10f661c0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

undefined4 __thiscall Recovered_Bulk::FUN_10f67600(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
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

void __thiscall Recovered_Bulk::FUN_10f68ab0(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 10f6b450; body size 49 bytes.
#line 1 "ENTRY_10f6b450"

int __thiscall Recovered_Bulk::FUN_10f6b450(uint *param_2)
{
  int *param_1 = (int *)this;
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

undefined4 * __fastcall FUN_10f6b980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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

int * __fastcall FUN_10f71110(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

int __thiscall Recovered_Bulk::FUN_10f713b0(byte param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (int)(param_1);
}


// Reference entry 10f717d0; body size 58 bytes.
#line 1 "ENTRY_10f717d0"

void __thiscall Recovered_Bulk::FUN_10f717d0(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 10f71980; body size 51 bytes.
#line 1 "ENTRY_10f71980"

void __thiscall Recovered_Bulk::FUN_10f71980(undefined4 *param_2,ushort *param_3)
{
  int param_1 = (int )this;
  param_3 = (ushort *)((ushort *)(uint)*param_3);
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
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

void __thiscall Recovered_Bulk::FUN_10f734d0(int param_2)
{
  int param_1 = (int )this;
  if ((int)(param_2) == *(int *)(param_1 + 0x90)) {
    *(undefined4*)(param_1 + 0x90) = (undefined4)(0);
    thunk_FUN_10f73060();
  }
  return;
}


// Reference entry 10f74070; body size 26 bytes.
#line 1 "ENTRY_10f74070"

undefined4 __thiscall Recovered_Bulk::FUN_10f74070(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10f74150; body size 29 bytes.
#line 1 "ENTRY_10f74150"

void __thiscall Recovered_Bulk::FUN_10f74150(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
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
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 8))(1);
    }
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  }
  return;
}


// Reference entry 10f756e0; body size 44 bytes.
#line 1 "ENTRY_10f756e0"

void __fastcall FUN_10f756e0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_10f75720();
    if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
    }
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  }
  return;
}


// Reference entry 10f76d30; body size 51 bytes.
#line 1 "ENTRY_10f76d30"

undefined4 * __thiscall Recovered_Bulk::FUN_10f76d30(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjACInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjACInternalListener);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f76f60; body size 37 bytes.
#line 1 "ENTRY_10f76f60"

undefined4 __fastcall FUN_10f76f60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

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
  *(undefined1*)(param_1 + 4) = (undefined1)(1);
  thunk_FUN_112af4e0();
  iStack_10 = (int)(param_1 + -0xc);
  pcStack_c = (char *)((char *)0x0);
  ((SCStr *)((SCStr *)&pcStack_14))->int_allocRep("SCIAlarm:onItemChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10f79110; body size 53 bytes.
#line 1 "ENTRY_10f79110"

SCStr * __thiscall Recovered_Bulk::FUN_10f79110(SCStr *param_2)
{
  int param_1 = (int )this;
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

SCStr * __thiscall Recovered_Bulk::FUN_10f79860(SCStr *param_2)
{
  int param_1 = (int )this;
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

undefined4 __thiscall Recovered_Bulk::FUN_10f79a70(undefined4 param_2)
{
  int *param_1 = (int *)this;
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

void __fastcall FUN_10f7ad60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1111b230();
  return;
}


// Reference entry 10f7ada0; body size 53 bytes.
#line 1 "ENTRY_10f7ada0"

void __thiscall Recovered_Bulk::FUN_10f7ada0(uint param_2)
{
  int param_1 = (int )this;
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

void __fastcall FUN_10f7adf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_1111b630();
    return;
  }
  return;
}


// Reference entry 10f7af60; body size 19 bytes.
#line 1 "ENTRY_10f7af60"

void __fastcall FUN_10f7af60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1111c680();
  return;
}


// Reference entry 10f7b0c0; body size 43 bytes.
#line 1 "ENTRY_10f7b0c0"

void __stdcall FUN_10f7b0c0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930(param_1);
    thunk_FUN_112af4e0("SCAlarm",3,"Remove Event Sink %p",param_1);
  }
  return;
}


// Reference entry 10f7b130; body size 44 bytes.
#line 1 "ENTRY_10f7b130"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7b130(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjDDInternalListener");
  param_1[6] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjDDInternalListener);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
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
    *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
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
    *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
  }
  return;
}


// Reference entry 10f7b600; body size 51 bytes.
#line 1 "ENTRY_10f7b600"

undefined4 * __thiscall Recovered_Bulk::FUN_10f7b600(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjSPInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSPInternalListener);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
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
    *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
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
    *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
  }
  return;
}


// Reference entry 10f7c290; body size 39 bytes.
#line 1 "ENTRY_10f7c290"

void __stdcall FUN_10f7c290(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_8;
  undefined1 local_4;
  
  thunk_FUN_10f7bb60(&local_8,param_2);
  *param_1 = (undefined4)(local_8);
  *(undefined1*)(param_1 + 1) = (undefined1)(local_4);
  return;
}


// Reference entry 10f7c6c0; body size 48 bytes.
#line 1 "ENTRY_10f7c6c0"

undefined4 * __fastcall FUN_10f7c6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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

int * __fastcall FUN_10f83140(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
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

int __thiscall Recovered_Bulk::FUN_10f86b30(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
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

undefined4 * __fastcall FUN_10f87ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
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
  if ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)(*(int *)*puVar2 + 0x18))();
      puVar2 = (undefined4 *)(puVar2 + 1);
    } while ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1));
    *(undefined4*)(param_1 + 0x20) = (undefined4)(*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  *(undefined4**)(param_1 + 0x20) = (undefined4 *)(puVar2);
  return;
}


// Reference entry 10f8ed40; body size 44 bytes.
#line 1 "ENTRY_10f8ed40"

void __thiscall Recovered_Bulk::FUN_10f8ed40(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c));
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20));
  if ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)(*(int *)*puVar2 + 4))(param_1 + 8,param_2);
      puVar2 = (undefined4 *)(puVar2 + 1);
    } while ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1));
  }
  return;
}


// Reference entry 10f8ed80; body size 21 bytes.
#line 1 "ENTRY_10f8ed80"

undefined4 __thiscall Recovered_Bulk::FUN_10f8ed80(char *param_2,uint param_3)
{
  int param_1 = (int )this;
  ((SCStr *)((SCStr *)(param_1 + 0x14)))->append(param_2,param_3);
  return (undefined4)(1);
}


// Reference entry 10f8f7d0; body size 37 bytes.
#line 1 "ENTRY_10f8f7d0"

void __thiscall Recovered_Bulk::FUN_10f8f7d0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x10) == (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
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
  
  *(undefined1*)(param_1 + 0x74) = (undefined1)(1);
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
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

undefined1 __thiscall Recovered_Bulk::FUN_10f90020(int param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  if (param_2 == 0) {
    uVar1 = (undefined1)((**(code **)(**(int **)(param_1 + 8) + 0x1d4))());
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 10f912e0; body size 33 bytes.
#line 1 "ENTRY_10f912e0"

void __thiscall Recovered_Bulk::FUN_10f912e0(int param_2,int param_3)
{
  int param_1 = (int )this;
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

void __thiscall Recovered_Bulk::FUN_10f924f0(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x1c) == (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
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

void __stdcall FUN_10f99360(int param_1, unsigned int recovered_unused_stack_0)

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

int __thiscall Recovered_Bulk::FUN_10f99b60(uint *param_2)
{
  int *param_1 = (int *)this;
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

undefined4 * __fastcall FUN_10f9a6f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a730; body size 48 bytes.
#line 1 "ENTRY_10f9a730"

undefined4 * __fastcall FUN_10f9a730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
    *(undefined1*)(puVar2 + 3) = (undefined1)(0);
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa0450; body size 26 bytes.
#line 1 "ENTRY_10fa0450"

undefined4 __thiscall Recovered_Bulk::FUN_10fa0450(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fa04b0; body size 23 bytes.
#line 1 "ENTRY_10fa04b0"

undefined4 __thiscall Recovered_Bulk::FUN_10fa04b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fa3450; body size 24 bytes.
#line 1 "ENTRY_10fa3450"

undefined4 __fastcall FUN_10fa3450(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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
  *(undefined4*)(param_1 + 0x34) = (undefined4)(uVar1);
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
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fa7880; body size 26 bytes.
#line 1 "ENTRY_10fa7880"

undefined4 __thiscall Recovered_Bulk::FUN_10fa7880(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fa7ba0; body size 23 bytes.
#line 1 "ENTRY_10fa7ba0"

undefined4 __thiscall Recovered_Bulk::FUN_10fa7ba0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fa9a40; body size 24 bytes.
#line 1 "ENTRY_10fa9a40"

undefined4 __fastcall FUN_10fa9a40(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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

int __thiscall Recovered_Bulk::FUN_10fab430(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
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

int __thiscall Recovered_Bulk::FUN_10fab470(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
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

int __thiscall Recovered_Bulk::FUN_10fab4b0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
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

int __thiscall Recovered_Bulk::FUN_10fab4f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
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

undefined4 * __fastcall FUN_10fae4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae4f0; body size 39 bytes.
#line 1 "ENTRY_10fae4f0"

undefined4 * __fastcall FUN_10fae4f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae520; body size 39 bytes.
#line 1 "ENTRY_10fae520"

undefined4 * __fastcall FUN_10fae520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
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

int __stdcall FUN_10fb1100(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fabd40(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb1130; body size 27 bytes.
#line 1 "ENTRY_10fb1130"

int __stdcall FUN_10fb1130(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fabfe0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb1160; body size 27 bytes.
#line 1 "ENTRY_10fb1160"

int __stdcall FUN_10fb1160(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fac280(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb1190; body size 27 bytes.
#line 1 "ENTRY_10fb1190"

int __stdcall FUN_10fb1190(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fac550(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb11c0; body size 27 bytes.
#line 1 "ENTRY_10fb11c0"

int __stdcall FUN_10fb11c0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10fac7f0(local_8,param_1));
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10fb1730; body size 35 bytes.
#line 1 "ENTRY_10fb1730"

undefined4 __thiscall Recovered_Bulk::FUN_10fb1730(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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

int * __thiscall Recovered_Bulk::FUN_10fb94a0(int *param_2,int param_3)
{
  int param_1 = (int )this;
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

void __stdcall FUN_10fbfe40(int param_1, unsigned int recovered_unused_stack_0)

{
  if (param_1 == 2) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10fc0bc0; body size 49 bytes.
#line 1 "ENTRY_10fc0bc0"

int __thiscall Recovered_Bulk::FUN_10fc0bc0(uint *param_2)
{
  int *param_1 = (int *)this;
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

undefined4 * __fastcall FUN_10fc12c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
    *(undefined1*)(puVar2 + 3) = (undefined1)(0);
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))());
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10fc5e00; body size 26 bytes.
#line 1 "ENTRY_10fc5e00"

undefined4 __thiscall Recovered_Bulk::FUN_10fc5e00(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fc5e60; body size 23 bytes.
#line 1 "ENTRY_10fc5e60"

undefined4 __thiscall Recovered_Bulk::FUN_10fc5e60(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10fc9370; body size 24 bytes.
#line 1 "ENTRY_10fc9370"

undefined4 __fastcall FUN_10fc9370(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
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
  
  if ((int *)(int *)(param_1[3]) != (int *)(0x0)) {
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
  *(undefined4*)(param_1 + 0x34) = (undefined4)(uVar1);
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

undefined4 * __thiscall Recovered_Bulk::FUN_10fccee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11164710();
  param_1[5] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjIndexListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10fcd4b0; body size 63 bytes.
#line 1 "ENTRY_10fcd4b0"

int * __thiscall Recovered_Bulk::FUN_10fcd4b0(int *param_2,uint param_3)
{
  int param_1 = (int )this;
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

void __thiscall Recovered_Bulk::FUN_10fcdd50(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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

undefined4 * __thiscall Recovered_Bulk::FUN_10fce700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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

void __stdcall FUN_10fcec60(int param_1,int param_2)

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

SCStr * __stdcall FUN_10fced10(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fced40; body size 32 bytes.
#line 1 "ENTRY_10fced40"

SCStr * __stdcall FUN_10fced40(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcee40; body size 19 bytes.
#line 1 "ENTRY_10fcee40"

undefined4 __stdcall FUN_10fcee40(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 10fcee60; body size 19 bytes.
#line 1 "ENTRY_10fcee60"

undefined4 __stdcall FUN_10fcee60(undefined4 param_1)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 10fcf010; body size 32 bytes.
#line 1 "ENTRY_10fcf010"

SCStr * __stdcall FUN_10fcf010(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcf040; body size 32 bytes.
#line 1 "ENTRY_10fcf040"

SCStr * __stdcall FUN_10fcf040(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcf0d0; body size 19 bytes.
#line 1 "ENTRY_10fcf0d0"

undefined4 __stdcall FUN_10fcf0d0(undefined4 param_1, unsigned int recovered_unused_stack_0)

{
  createPropertyBag();
  return (undefined4)(param_1);
}


// Reference entry 10fcf1f0; body size 32 bytes.
#line 1 "ENTRY_10fcf1f0"

SCStr * __stdcall FUN_10fcf1f0(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcf220; body size 32 bytes.
#line 1 "ENTRY_10fcf220"

SCStr * __stdcall FUN_10fcf220(SCStr *param_1, unsigned int recovered_unused_stack_0)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10fcf250; body size 19 bytes.
#line 1 "ENTRY_10fcf250"

undefined4 __stdcall FUN_10fcf250(undefined4 param_1)

{
  createSCStringArray();
  return (undefined4)(param_1);
}


// Reference entry 10fcf420; body size 59 bytes.
#line 1 "ENTRY_10fcf420"

void __thiscall Recovered_Bulk::FUN_10fcf420(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10fcd830(puVar1,param_2);
  return;
}


// Reference entry 10fdd050; body size 40 bytes.
#line 1 "ENTRY_10fdd050"

undefined4 * __thiscall Recovered_Bulk::FUN_10fdd050(undefined4 *param_2)
{
  int param_1 = (int )this;
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

undefined4 * __thiscall Recovered_Bulk::FUN_10fdd090(undefined4 *param_2)
{
  int param_1 = (int )this;
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

undefined4 * __thiscall Recovered_Bulk::FUN_10fdd0d0(undefined4 *param_2)
{
  int param_1 = (int )this;
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

undefined4 * __thiscall Recovered_Bulk::FUN_10fdd110(undefined4 *param_2)
{
  int param_1 = (int )this;
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

undefined4 * __thiscall Recovered_Bulk::FUN_10fdd150(undefined4 *param_2)
{
  int param_1 = (int )this;
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

undefined4 * __thiscall Recovered_Bulk::FUN_10fdd190(undefined4 *param_2)
{
  int param_1 = (int )this;
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

SCStr * __thiscall Recovered_Bulk::FUN_10fdd210(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd260; body size 53 bytes.
#line 1 "ENTRY_10fdd260"

SCStr * __thiscall Recovered_Bulk::FUN_10fdd260(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd2d0; body size 53 bytes.
#line 1 "ENTRY_10fdd2d0"

SCStr * __thiscall Recovered_Bulk::FUN_10fdd2d0(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd320; body size 53 bytes.
#line 1 "ENTRY_10fdd320"

SCStr * __thiscall Recovered_Bulk::FUN_10fdd320(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd390; body size 53 bytes.
#line 1 "ENTRY_10fdd390"

SCStr * __thiscall Recovered_Bulk::FUN_10fdd390(SCStr *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x50) + 0x20))());
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(0x208b - (uint)(cVar1 != '\0'),&DAT_11882ff0));
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10fdd490; body size 53 bytes.
#line 1 "ENTRY_10fdd490"

SCStr * __thiscall Recovered_Bulk::FUN_10fdd490(SCStr *param_2)
{
  int param_1 = (int )this;
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
  *(undefined1*)(*(int *)(param_1 + 0xb8) + 0x10) = (undefined1)(uVar1);
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
  *(undefined1*)(*(int *)(param_1 + 0xb8) + 0x10) = (undefined1)(uVar1);
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

void __thiscall Recovered_Bulk::FUN_10fde830(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x84))(param_2);
  *(undefined4*)(*(int *)(param_1 + 0xa0) + 0x10) = (undefined4)(param_2);
  (**(code **)(*(int *)(param_1 + 0x18) + 0xe4))();
  return;
}


// Reference entry 10fe0020; body size 59 bytes.
#line 1 "ENTRY_10fe0020"

void __thiscall Recovered_Bulk::FUN_10fe0020(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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

void __stdcall FUN_10fe1610(int param_1,int param_2)

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
    *(undefined4*)(param_1 + 0xa8) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10fe3350; body size 43 bytes.
#line 1 "ENTRY_10fe3350"

void __fastcall FUN_10fe3350(int param_1)

{
  if ((*(char *)(param_1 + 0xac) == '\0') && (*(int *)(param_1 + 0xa8) != 0)) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0xa8));
    *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
  }
  return;
}


// Reference entry 10fe34f0; body size 39 bytes.
#line 1 "ENTRY_10fe34f0"

void __fastcall FUN_10fe34f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uStack00000004;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(undefined4*)(param_1 + 0x84) = (undefined4)(0);
    uStack00000004 = (undefined4)(1);
                    
                    
    (**(code **)(*(int *)(param_1 + -0x24) + 0x2c))();
    return;
  }
  return;
}


// Reference entry 10fe3520; body size 59 bytes.
#line 1 "ENTRY_10fe3520"

void __thiscall Recovered_Bulk::FUN_10fe3520(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10fdea70(puVar1,param_2);
  return;
}


// Reference entry 10fe3720; body size 52 bytes.
#line 1 "ENTRY_10fe3720"

void __thiscall Recovered_Bulk::FUN_10fe3720(uint param_2)
{
  int param_1 = (int )this;
  void *_Src;
  void *_Dst;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2)) {
    _Dst = (void *)((void *)(*(int *)(param_1 + 8) + param_2 * 4));
    _Src = (void *)((void *)((int)_Dst + 4));
    memmove(_Dst,_Src,*(int *)(param_1 + 0xc) - (int)_Src);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + -4);
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
  
  if (*(int **)(param_1 + 0x10) == (int *)((0x0))) {
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

undefined4 __fastcall FUN_10fe84e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    thunk_FUN_10d4d500(*(int *)(param_1 + 0x1c));
  }
  return (undefined4)(0);
}


// Reference entry 10fe8510; body size 17 bytes.
#line 1 "ENTRY_10fe8510"

undefined4 __fastcall FUN_10fe8510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_10d4d580();
  }
  return (undefined4)(0);
}


// Reference entry 10fe8530; body size 22 bytes.
#line 1 "ENTRY_10fe8530"

undefined4 __fastcall FUN_10fe8530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_10d50930(*(undefined4 *)(param_1 + 8));
  }
  return (undefined4)(0);
}


// Reference entry 10fe9cb0; body size 57 bytes.
#line 1 "ENTRY_10fe9cb0"

void __stdcall FUN_10fe9cb0(undefined4 param_1,int *param_2)

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

void __thiscall Recovered_Bulk::FUN_10febc00(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10fe96d0(puVar1,param_2);
  return;
}


// Reference entry 10febc50; body size 59 bytes.
#line 1 "ENTRY_10febc50"

void __thiscall Recovered_Bulk::FUN_10febc50(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10fe9990(puVar1,param_2);
  return;
}


// Reference entry 10fec290; body size 48 bytes.
#line 1 "ENTRY_10fec290"

undefined4 * __fastcall FUN_10fec290(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fef110; body size 19 bytes.
#line 1 "ENTRY_10fef110"

void __thiscall Recovered_Bulk::FUN_10fef110(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef130; body size 19 bytes.
#line 1 "ENTRY_10fef130"

void __thiscall Recovered_Bulk::FUN_10fef130(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef150; body size 19 bytes.
#line 1 "ENTRY_10fef150"

void __thiscall Recovered_Bulk::FUN_10fef150(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef170; body size 19 bytes.
#line 1 "ENTRY_10fef170"

void __thiscall Recovered_Bulk::FUN_10fef170(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef250; body size 31 bytes.
#line 1 "ENTRY_10fef250"

void __stdcall FUN_10fef250(undefined4 param_1,undefined4 param_2)

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

void __stdcall FUN_10fef280(undefined4 param_1,undefined4 param_2)

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

void __thiscall Recovered_Bulk::FUN_10fef730(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef750; body size 19 bytes.
#line 1 "ENTRY_10fef750"

void __thiscall Recovered_Bulk::FUN_10fef750(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef770; body size 19 bytes.
#line 1 "ENTRY_10fef770"

void __thiscall Recovered_Bulk::FUN_10fef770(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10fef790; body size 19 bytes.
#line 1 "ENTRY_10fef790"

void __thiscall Recovered_Bulk::FUN_10fef790(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ff0d00; body size 60 bytes.
#line 1 "ENTRY_10ff0d00"

void __stdcall FUN_10ff0d00(int param_1,int param_2)

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

void __stdcall FUN_10ff0d50(int param_1,int param_2)

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

void __thiscall Recovered_Bulk::FUN_10ff0dc0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)((0x0))) {
    (**(code **)**(undefined4 **)(param_1 + 8))(param_3,param_2);
  }
  return;
}


// Reference entry 10ff15e0; body size 52 bytes.
#line 1 "ENTRY_10ff15e0"

SCStr * __thiscall Recovered_Bulk::FUN_10ff15e0(SCStr *param_2,int param_3,undefined4 param_4)
{
  int param_1 = (int )this;
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
  for (pbVar2 = (byte *)((byte *)(param_1 + 0x128));(byte *)( pbVar2) != (byte *)(param_1 + 0x138); pbVar2 = pbVar2 + 1)
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

undefined4 __stdcall FUN_10ff1ce0(int param_1)

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

undefined4 __stdcall FUN_10ff1d00(int param_1)

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

SCStr * __thiscall Recovered_Bulk::FUN_10ff20b0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x24))(param_2,0);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ff2b20; body size 46 bytes.
#line 1 "ENTRY_10ff2b20"

SCStr * __thiscall Recovered_Bulk::FUN_10ff2b20(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
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

void __fastcall FUN_10ff81f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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
    *(char*)(param_1 + 0x88) = (char)(cVar1);
    thunk_FUN_10ff3290();
  }
  return;
}


// Reference entry 10ff8430; body size 59 bytes.
#line 1 "ENTRY_10ff8430"

void __thiscall Recovered_Bulk::FUN_10ff8430(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10fe96d0(puVar1,param_2);
  return;
}


// Reference entry 10ff8480; body size 59 bytes.
#line 1 "ENTRY_10ff8480"

void __thiscall Recovered_Bulk::FUN_10ff8480(undefined4 *param_2)
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10fe9990(puVar1,param_2);
  return;
}


// Reference entry 10ff8cb0; body size 48 bytes.
#line 1 "ENTRY_10ff8cb0"

void __thiscall Recovered_Bulk::FUN_10ff8cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(param_2);
  if ((*(int **)(param_1 + 0x20) != (int *)((0x0))) && (*(int *)(*(int *)(param_1 + 0x28) + 0x10) == 0))
  {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10ff8cf0; body size 48 bytes.
#line 1 "ENTRY_10ff8cf0"

void __thiscall Recovered_Bulk::FUN_10ff8cf0(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x38) + 0x18))(param_2);
  if ((*(int *)(*(int *)(param_1 + 0x38) + 0x10) == 0) && (*(int **)(param_1 + 0x30) != (int *)((0x0))))
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

undefined4 * __thiscall Recovered_Bulk::FUN_10ffb2b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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

void __thiscall Recovered_Bulk::FUN_10ffb670(undefined4 *param_2)
{
  int param_1 = (int )this;
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
    *(undefined1*)(param_1 + 6) = (undefined1)(0);
    return;
  }
  param_1[3] = (int)(iVar2);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  return;
}


// Reference entry 10ffc070; body size 54 bytes.
#line 1 "ENTRY_10ffc070"

void __thiscall Recovered_Bulk::FUN_10ffc070(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
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
  
  if (*(int **)(param_1 + 0x34) == (int *)((0x0))) {
    return (byte)(0);
  }
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x34) + 0x8c))());
  return (byte)(-(iVar1 != 7) & 3);
}


// Reference entry 10ffcdc0; body size 46 bytes.
#line 1 "ENTRY_10ffcdc0"

SCStr * __thiscall Recovered_Bulk::FUN_10ffcdc0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10ffce10; body size 46 bytes.
#line 1 "ENTRY_10ffce10"

SCStr * __thiscall Recovered_Bulk::FUN_10ffce10(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
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
  
  if (*(int **)(param_1 + 0x34) != (int *)((0x0))) {
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

void __thiscall Recovered_Bulk::FUN_10ffd210(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    if (((*(int *)(param_1 + 0x10) == 0) && (*(char *)(param_1 + 0x3c) == '\0')) &&
       (*(int **)(param_1 + 0x34) != (int *)((0x0)))) {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(param_1 + 0x28,0);
      *(undefined1*)(param_1 + 0x3c) = (undefined1)(1);
    }
    thunk_FUN_103d61d0(param_2,0);
  }
  return;
}


// Reference entry 10ffd290; body size 56 bytes.
#line 1 "ENTRY_10ffd290"

void __thiscall Recovered_Bulk::FUN_10ffd290(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
    if (((*(int *)(param_1 + 0x10) == 0) && (*(char *)(param_1 + 0x3c) != '\0')) &&
       (*(int **)(param_1 + 0x34) != (int *)((0x0)))) {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x18))(param_1 + 0x28);
      *(undefined1*)(param_1 + 0x3c) = (undefined1)(0);
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


  if ((int *)(int *)(*param_1) != (int *)(0x0)) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
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

undefined4 * __thiscall Recovered_Bulk::FUN_10fffbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
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

void __fastcall FUN_10fffc90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

SCStr * __thiscall Recovered_Bulk::FUN_11002ae0(SCStr *param_2)
{
  int param_1 = (int )this;
  bool bVar1;
  int iVar2;
  
  if ((*(char **)(param_1 + 0x34) == (char *)((0x0))) || (**(char **)(param_1 + 0x34) == '\0')) {
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

undefined1 __thiscall Recovered_Bulk::FUN_11005070(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_111c1530(param_2));
  if ((*(int *)(param_1 + 0x442c) == 0xca) || (*(int *)(param_1 + 0x442c) == 0xcc)) {
    uVar1 = (undefined1)(1);
  }
  return (undefined1)(uVar1);
}


// Reference entry 110050a0; body size 52 bytes.
#line 1 "ENTRY_110050a0"

undefined1 __thiscall Recovered_Bulk::FUN_110050a0(undefined4 param_2)
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


// Reference entry 110051f0; body size 42 bytes.
#line 1 "ENTRY_110051f0"

undefined1 __thiscall Recovered_Bulk::FUN_110051f0(undefined4 param_2)
{
  int param_1 = (int )this;
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

int * __fastcall FUN_11008010(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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

void __stdcall FUN_1100bf00(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 1100bf20; body size 23 bytes.
#line 1 "ENTRY_1100bf20"

void __stdcall FUN_1100bf20(int param_1)

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


  if ((int *)(int *)(*param_1) != (int *)(0x0)) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


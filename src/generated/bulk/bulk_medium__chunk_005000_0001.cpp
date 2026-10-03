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
extern int FUN_1069ccd0(...);
extern int FUN_10bbd800(...);
extern int FUN_1110f110(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _Init(...);
extern __declspec(dllimport) int _Xbad_function_call(...);
extern __declspec(dllimport) int _Xout_of_range(...);
extern __declspec(dllimport) int __std_exception_copy(...);
extern __declspec(dllimport) int __std_exception_destroy(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern __declspec(dllimport) int always_noconv(...);
extern int createPropertyBag(...);
extern __declspec(dllimport) int fflush(...);
extern int getSingleton(...);
extern int hash(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int op_ctor(...);
extern int op_dtor(...);
extern int op_eq(...);
extern int op_lt(...);
extern int operator_new(...);
extern __declspec(dllimport) int setstate(...);
extern int thunk_FUN_10117000(...);
extern int thunk_FUN_101a2b90(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a9c10(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_1023a9f0(...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_1025ed70(...);
extern int thunk_FUN_102bcb30(...);
extern int thunk_FUN_102ec850(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_1033cdb0(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_103a3e50(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104886e0(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_104eeff0(...);
extern int thunk_FUN_1059d120(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105ad910(...);
extern int thunk_FUN_105b5360(...);
extern int thunk_FUN_105b6d40(...);
extern int thunk_FUN_105bb550(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105c12d0(...);
extern int thunk_FUN_1061c5e0(...);
extern int thunk_FUN_106243b0(...);
extern int thunk_FUN_106431c0(...);
extern int thunk_FUN_10648010(...);
extern int thunk_FUN_1064d7a0(...);
extern int thunk_FUN_1065a700(...);
extern int thunk_FUN_10699fb0(...);
extern int thunk_FUN_106a3130(...);
extern int thunk_FUN_106a39d0(...);
extern int thunk_FUN_106a4110(...);
extern int thunk_FUN_106a48e0(...);
extern int thunk_FUN_106a4c50(...);
extern int thunk_FUN_106a6540(...);
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
extern int thunk_FUN_106de840(...);
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
extern int thunk_FUN_1086c3e0(...);
extern int thunk_FUN_1086f2f0(...);
extern int thunk_FUN_10882500(...);
extern int thunk_FUN_108c41c0(...);
extern int thunk_FUN_108eeb60(...);
extern int thunk_FUN_10939420(...);
extern int thunk_FUN_1098def0(...);
extern int thunk_FUN_1098e120(...);
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
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10cf35e0(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf3780(...);
extern int thunk_FUN_10cf4ae0(...);
extern int thunk_FUN_10d9e5c0(...);
extern int thunk_FUN_10d9e6c0(...);
extern int thunk_FUN_10d9e6d0(...);
extern int thunk_FUN_10da6830(...);
extern int thunk_FUN_10e10fd0(...);
extern int thunk_FUN_10e110d0(...);
extern int thunk_FUN_10e111f0(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacd40(...);
extern int thunk_FUN_10eae160(...);
extern int thunk_FUN_10eb0c60(...);
extern int thunk_FUN_10eb0d90(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ee3000(...);
extern int thunk_FUN_10ee48c0(...);
extern int thunk_FUN_10ee7f70(...);
extern int thunk_FUN_10f04dc0(...);
extern int thunk_FUN_10f19cf0(...);
extern int thunk_FUN_10f56a40(...);
extern int thunk_FUN_10f7b950(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110c1190(...);
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
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a74c0(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_11203e10(...);
extern int thunk_FUN_11206ea0(...);
extern int thunk_FUN_11207070(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_1124a3d0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112505b0(...);
extern int thunk_FUN_11287ac0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112af500(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_00004494;
extern int DAT_00004498;
extern int DAT_0000449c;
extern int DAT_1187d548;
extern int DAT_11910258;
extern int DAT_11e2f6dc;
extern int DAT_12126b84;
extern int DAT_121a2a78;
extern int DAT_121a2ac4;
extern int DAT_121a2c38;
extern int DAT_121a2c3c;
extern int DAT_121a2d4c;
extern int DAT_121a2d98;
extern int DAT_121a2de8;
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
extern int DAT_121a2f94;
extern int DAT_121a2f98;
extern int DAT_121a3328;
extern int DAT_121a35d8;
extern int DAT_121a3640;
extern int DAT_121a3824;
extern int DAT_121a3adc;
extern int DAT_121a3ae0;
extern int DAT_121a3b30;
extern int DAT_121a3b34;
extern int DAT_121a3c34;
extern int DAT_121a3c38;
extern int DAT_121a3d68;
extern int DAT_121a3d6c;
extern int DAT_121a3e18;
extern int DAT_121a3e1c;
extern int DAT_121a43cc;
extern int DAT_121a43d0;
extern int DAT_121a4414;
extern int DAT_121a4418;
extern int DAT_121a4468;
extern int DAT_121a446c;
extern int DAT_121a44e4;
extern int DAT_121a4688;
extern int DAT_121a468c;
extern int DAT_121a48b4;
extern int DAT_121a48cc;
extern int DAT_121a48d0;
extern int DAT_121a4dbc;
extern int DAT_121a5030;
extern int g_lSCObjCount;
extern int ghidra_vftable_EtagFileParser;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RDeviceDeleteAIOOp;
extern int ghidra_vftable_RDeviceGetAIOOp;
extern int ghidra_vftable_RDeviceGetRequest;
extern int ghidra_vftable_RDeviceOpRequest;
extern int ghidra_vftable_RDevicePostAIOOp;
extern int ghidra_vftable_RDevicePutAIOOp;
extern int ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPostNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPutNoRedirectAIOOp;
extern int ghidra_vftable_SCAddProductLaunchable;
extern int ghidra_vftable_SCAmazonAlexaPreviewWizardType;
extern int ghidra_vftable_SCAmazonAlexaSetupWizardType;
extern int ghidra_vftable_SCApInstructionsWizardType;
extern int ghidra_vftable_SCArtworkCache;
extern int ghidra_vftable_SCBasicWizard;
extern int ghidra_vftable_SCBleConnectWizardType;
extern int ghidra_vftable_SCBluetoothOnlyWizardType;
extern int ghidra_vftable_SCBusinessWelcomeWizardType;
extern int ghidra_vftable_SCChirpTestWizardType;
extern int ghidra_vftable_SCConditionalElementTreeNoAppendInterface;
extern int ghidra_vftable_SCFlutterTestWizardType;
extern int ghidra_vftable_SCGhostWizardType;
extern int ghidra_vftable_SCGoogleAssistantPreviewWizardType;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCLegacyJoinExistingWizardInitState;
extern int ghidra_vftable_SCLogoArtworkCache;
extern int ghidra_vftable_SCNamePortableWizardType;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCPortablePreparationWizardType;
extern int ghidra_vftable_SCPortableStatusWizardType;
extern int ghidra_vftable_SCProductPlacementWizardType;
extern int ghidra_vftable_SCRegisterProductWizardType;
extern int ghidra_vftable_SCRenameWizardType;
extern int ghidra_vftable_SCSettingsReplicatorVoiceAllowDataCollection;
extern int ghidra_vftable_SCSettingsReplicatorVoiceLocale;
extern int ghidra_vftable_SCSwfObjMSDiscoveryInternalListener;
extern int ghidra_vftable_SCTransparentWizard;
extern int ghidra_vftable_SCTransparentWizardType;
extern int ghidra_vftable_SCVoiceServiceLocaleWizardType;
extern int ghidra_vftable_SCWacConnectWizardType;
extern int ghidra_vftable_SCWeaklyOwnedObjectManager;
extern int ghidra_vftable_SCWiredConnectWizardType;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_bad_cast;
extern int ghidra_vftable_std_basic_istringstream;
extern int ghidra_vftable_std_exception;
extern int uStack00000004;
extern int uStack_10;
extern int uStack_8;
extern int uStack_c;
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
namespace std { template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xout_of_range(A...); struct basic_ios { char _pad; basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int op_dtor(A...); template<class... A> int setstate(A...); }; struct basic_istream { char _pad; basic_istream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int op_dtor(A...); }; struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int _Init(A...); }; struct codecvt_base { char _pad; codecvt_base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int always_noconv(A...); };}
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> int hash(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_ctor(A...); template<class... A> int op_eq(A...); template<class... A> int op_lt(A...); };
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
typedef void *BLE;
typedef void *K;
typedef void *NFC;
typedef void *T;
typedef void *WARNING;
struct Announcements { char _pad; Announcements(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Connected { char _pad; Connected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Event { char _pad; Event(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct LegacyTV { char _pad; LegacyTV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Not { char _pad; Not(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Options { char _pad; Options(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct RemoteConfigured { char _pad; RemoteConfigured(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Remove { char _pad; Remove(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCAlarmManager { char _pad; SCAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCBTClassicConnectionManager { char _pad; SCBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIArtworkData { char _pad; SCIArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBTClassicConnectionManager { char _pad; SCIBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCSettingsReplicator { char _pad; SCSettingsReplicator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
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
template<class...> struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
template<class...> struct std_basic_ios { char _pad; std_basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
template<class...> struct std_basic_istream { char _pad; std_basic_istream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
template<class...> struct std_basic_streambuf { char _pad; std_basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered_Bulk { char _pad; void __thiscall FUN_1069d8b0(undefined4 *param_2); template<class... A> int FUN_1069d8b0(A...); void __thiscall FUN_1069dda0(undefined4 *param_2); template<class... A> int FUN_1069dda0(A...); void __thiscall FUN_1069ed80(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069ed80(A...); void __thiscall FUN_1069edb0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_1069edb0(A...); undefined4 __thiscall FUN_106a2b90(SCStr *param_2); template<class... A> int FUN_106a2b90(A...); int __thiscall FUN_106a30e0(undefined4 param_2); template<class... A> int FUN_106a30e0(A...); undefined4 * __thiscall FUN_106a40d0(int param_2); template<class... A> int FUN_106a40d0(A...); int __thiscall FUN_106a4e00(byte param_2); template<class... A> int FUN_106a4e00(A...); undefined4 * __thiscall FUN_106a4e30(byte param_2); template<class... A> int FUN_106a4e30(A...); void __thiscall FUN_106a6e50(undefined4 param_2); template<class... A> int FUN_106a6e50(A...); int __thiscall FUN_106ab730(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_106ab730(A...); int __thiscall FUN_106ab770(int *param_2); template<class... A> int FUN_106ab770(A...); void __thiscall FUN_106af240(undefined4 *param_2); template<class... A> int FUN_106af240(A...); void __thiscall FUN_106af2d0(undefined4 *param_2); template<class... A> int FUN_106af2d0(A...); void __thiscall FUN_106af320(undefined4 *param_2); template<class... A> int FUN_106af320(A...); void __thiscall FUN_106af6d0(int *param_2,SCStr *param_3); template<class... A> int FUN_106af6d0(A...); undefined4 * __thiscall FUN_106b1130(undefined4 *param_2); template<class... A> int FUN_106b1130(A...); undefined4 * __thiscall FUN_106b2380(undefined4 param_2); template<class... A> int FUN_106b2380(A...); int __thiscall FUN_106b6be0(byte param_2); template<class... A> int FUN_106b6be0(A...); void __thiscall FUN_106b89d0(undefined4 *param_2); template<class... A> int FUN_106b89d0(A...); void __thiscall FUN_106b89f0(undefined4 *param_2); template<class... A> int FUN_106b89f0(A...); void __thiscall FUN_106b8a40(undefined4 param_2); template<class... A> int FUN_106b8a40(A...); void __thiscall FUN_106b8ac0(char param_2); template<class... A> int FUN_106b8ac0(A...); void __thiscall FUN_106b8d40(undefined4 *param_2); template<class... A> int FUN_106b8d40(A...); bool __thiscall FUN_106b8d70(undefined4 *param_2); template<class... A> int FUN_106b8d70(A...); void __thiscall FUN_106ba600(undefined4 *param_2); template<class... A> int FUN_106ba600(A...); void __thiscall FUN_106ba620(undefined4 *param_2); template<class... A> int FUN_106ba620(A...); void __thiscall FUN_106ba670(int *param_2); template<class... A> int FUN_106ba670(A...); undefined4 __thiscall FUN_106c3cd0(undefined4 param_2); template<class... A> int FUN_106c3cd0(A...); void __thiscall FUN_106cc6c0(SCStr *param_2); template<class... A> int FUN_106cc6c0(A...); void __thiscall FUN_106cc710(undefined4 *param_2); template<class... A> int FUN_106cc710(A...); void __thiscall FUN_106cc760(undefined4 *param_2); template<class... A> int FUN_106cc760(A...); void __thiscall FUN_106cc7b0(undefined4 *param_2); template<class... A> int FUN_106cc7b0(A...); void __thiscall FUN_106cc800(undefined4 param_2); template<class... A> int FUN_106cc800(A...); int __thiscall FUN_106d1a20(SCStr *param_2); template<class... A> int FUN_106d1a20(A...); void __thiscall FUN_106d3760(undefined4 *param_2); template<class... A> int FUN_106d3760(A...); void __thiscall FUN_106d3780(undefined4 *param_2); template<class... A> int FUN_106d3780(A...); void __thiscall FUN_106d37a0(undefined4 *param_2); template<class... A> int FUN_106d37a0(A...); void __thiscall FUN_106d42c0(undefined4 *param_2); template<class... A> int FUN_106d42c0(A...); void __thiscall FUN_106d42e0(undefined4 *param_2); template<class... A> int FUN_106d42e0(A...); void __thiscall FUN_106d4300(undefined4 *param_2); template<class... A> int FUN_106d4300(A...); undefined4 __thiscall FUN_106d5d20(undefined4 param_2); template<class... A> int FUN_106d5d20(A...); void __thiscall FUN_106d68b0(int param_2); template<class... A> int FUN_106d68b0(A...); undefined4 * __thiscall FUN_106d8310(int *param_2); template<class... A> int FUN_106d8310(A...); void __thiscall FUN_106d90d0(undefined4 param_2); template<class... A> int FUN_106d90d0(A...); int __thiscall FUN_106d92c0(uint *param_2); template<class... A> int FUN_106d92c0(A...); int __thiscall FUN_106d9300(uint *param_2); template<class... A> int FUN_106d9300(A...); int * __thiscall FUN_106dacd0(byte param_2); template<class... A> int FUN_106dacd0(A...); void __thiscall FUN_106e1100(undefined4 *param_2); template<class... A> int FUN_106e1100(A...); undefined4 * __thiscall FUN_106e5e30(byte param_2); template<class... A> int FUN_106e5e30(A...); int __thiscall FUN_106e7ac0(undefined4 param_2); template<class... A> int FUN_106e7ac0(A...); int __thiscall FUN_106e8b80(undefined4 param_2); template<class... A> int FUN_106e8b80(A...); void __thiscall FUN_106f6ba0(undefined4 *param_2); template<class... A> int FUN_106f6ba0(A...); void __thiscall FUN_1072e190(int *param_2); template<class... A> int FUN_1072e190(A...); undefined4 * __thiscall FUN_1074b9f0(byte param_2); template<class... A> int FUN_1074b9f0(A...); undefined4 * __thiscall FUN_1074d330(byte param_2); template<class... A> int FUN_1074d330(A...); undefined4 * __thiscall FUN_1077c660(byte param_2); template<class... A> int FUN_1077c660(A...); undefined4 * __thiscall FUN_10783bb0(byte param_2); template<class... A> int FUN_10783bb0(A...); undefined4 __thiscall FUN_107bca20(undefined4 param_2); template<class... A> int FUN_107bca20(A...); int * __thiscall FUN_10827fe0(SCStr *param_2); template<class... A> int FUN_10827fe0(A...); void __thiscall FUN_1083e500(undefined4 param_2); template<class... A> int FUN_1083e500(A...); void __thiscall FUN_10848bd0(undefined4 *param_2); template<class... A> int FUN_10848bd0(A...); void __thiscall FUN_10848cf0(undefined4 *param_2); template<class... A> int FUN_10848cf0(A...); undefined4 * __thiscall FUN_1085e030(byte param_2); template<class... A> int FUN_1085e030(A...); void __thiscall FUN_108b4730(uint param_2); template<class... A> int FUN_108b4730(A...); void __thiscall FUN_108c6e80(char param_2); template<class... A> int FUN_108c6e80(A...); undefined4 * __thiscall FUN_108f9180(byte param_2); template<class... A> int FUN_108f9180(A...); undefined4 __thiscall FUN_10971200(byte param_2); template<class... A> int FUN_10971200(A...); void __thiscall FUN_109a66c0(undefined4 *param_2); template<class... A> int FUN_109a66c0(A...); undefined4 __thiscall FUN_10a08b50(undefined4 param_2); template<class... A> int FUN_10a08b50(A...); undefined4 __thiscall FUN_10a08b80(undefined4 param_2); template<class... A> int FUN_10a08b80(A...); int __thiscall FUN_10a129e0(SCStr *param_2); template<class... A> int FUN_10a129e0(A...); void __thiscall FUN_10a23870(int param_2); template<class... A> int FUN_10a23870(A...); void __thiscall FUN_10a4d9f0(undefined4 *param_2); template<class... A> int FUN_10a4d9f0(A...); void __thiscall FUN_10a4da40(undefined4 *param_2); template<class... A> int FUN_10a4da40(A...); void __thiscall FUN_10a642d0(undefined4 *param_2); template<class... A> int FUN_10a642d0(A...); void __thiscall FUN_10a64320(undefined4 *param_2); template<class... A> int FUN_10a64320(A...); void __thiscall FUN_10a779a0(int *param_2); template<class... A> int FUN_10a779a0(A...); undefined4 * __thiscall FUN_10a7d640(undefined4 param_2); template<class... A> int FUN_10a7d640(A...); undefined4 * __thiscall FUN_10ab3600(byte param_2); template<class... A> int FUN_10ab3600(A...); undefined4 * __thiscall FUN_10b0e6a0(byte param_2); template<class... A> int FUN_10b0e6a0(A...); void __thiscall FUN_10b10630(short param_2); template<class... A> int FUN_10b10630(A...); undefined4 * __thiscall FUN_10b22ff0(undefined4 *param_2); template<class... A> int FUN_10b22ff0(A...); undefined4 __thiscall FUN_10b48570(undefined4 param_2); template<class... A> int FUN_10b48570(A...); undefined4 * __thiscall FUN_10b589f0(undefined4 param_2); template<class... A> int FUN_10b589f0(A...); undefined4 * __thiscall FUN_10b58e60(byte param_2); template<class... A> int FUN_10b58e60(A...); SCStr * __thiscall FUN_10b6ff10(SCStr *param_2); template<class... A> int FUN_10b6ff10(A...); undefined4 * __thiscall FUN_10b7b430(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b7b430(A...); undefined4 __thiscall FUN_10b7e7e0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b7e7e0(A...); SCStr * __thiscall FUN_10b81cb0(SCStr *param_2); template<class... A> int FUN_10b81cb0(A...); undefined4 * __thiscall FUN_10b88a20(byte param_2); template<class... A> int FUN_10b88a20(A...); undefined4 * __thiscall FUN_10b88a60(byte param_2); template<class... A> int FUN_10b88a60(A...); undefined4 * __thiscall FUN_10b88aa0(byte param_2); template<class... A> int FUN_10b88aa0(A...); undefined4 * __thiscall FUN_10b88ae0(byte param_2); template<class... A> int FUN_10b88ae0(A...); undefined4 * __thiscall FUN_10b88e90(byte param_2); template<class... A> int FUN_10b88e90(A...); void __thiscall FUN_10b8e970(undefined4 param_2); template<class... A> int FUN_10b8e970(A...); undefined4 * __thiscall FUN_10b90770(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b90770(A...); undefined4 * __thiscall FUN_10b907c0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b907c0(A...); void __thiscall FUN_10b937b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10b937b0(A...); undefined4 * __thiscall FUN_10b9a030(byte param_2); template<class... A> int FUN_10b9a030(A...); void __thiscall FUN_10b9d980(void *param_2,size_t param_3); template<class... A> int FUN_10b9d980(A...); void __thiscall FUN_10b9d9c0(void *param_2,size_t param_3); template<class... A> int FUN_10b9d9c0(A...); SCStr * __thiscall FUN_10b9ddf0(SCStr *param_2); template<class... A> int FUN_10b9ddf0(A...); SCStr * __thiscall FUN_10b9de20(SCStr *param_2); template<class... A> int FUN_10b9de20(A...); void __thiscall FUN_10b9e1f0(undefined4 param_2); template<class... A> int FUN_10b9e1f0(A...); undefined4 __thiscall FUN_10ba0860(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10ba0860(A...); void __thiscall FUN_10ba17b0(int param_2); template<class... A> int FUN_10ba17b0(A...); void __thiscall FUN_10ba1800(int param_2); template<class... A> int FUN_10ba1800(A...); void __thiscall FUN_10ba1a60(int param_2); template<class... A> int FUN_10ba1a60(A...); int __thiscall FUN_10ba3300(int *param_2); template<class... A> int FUN_10ba3300(A...); int __thiscall FUN_10ba8180(byte param_2); template<class... A> int FUN_10ba8180(A...); void __thiscall FUN_10ba86b0(undefined4 *param_2); template<class... A> int FUN_10ba86b0(A...); void __thiscall FUN_10ba8790(char param_2); template<class... A> int FUN_10ba8790(A...); void __thiscall FUN_10ba8840(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_10ba8840(A...); void __thiscall FUN_10ba9fd0(undefined4 *param_2); template<class... A> int FUN_10ba9fd0(A...); void __thiscall FUN_10baa820(int param_2); template<class... A> int FUN_10baa820(A...); void __thiscall FUN_10baa860(int param_2); template<class... A> int FUN_10baa860(A...); void __thiscall FUN_10bab320(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10bab320(A...); undefined4 __thiscall FUN_10bb4330(undefined4 param_2); template<class... A> int FUN_10bb4330(A...); void __thiscall FUN_10bb6b30(int param_2); template<class... A> int FUN_10bb6b30(A...); int __thiscall FUN_10bc6fe0(byte param_2); template<class... A> int FUN_10bc6fe0(A...); void __thiscall FUN_10bc7290(undefined4 *param_2); template<class... A> int FUN_10bc7290(A...); void __thiscall FUN_10bc7390(char param_2); template<class... A> int FUN_10bc7390(A...); void __thiscall FUN_10bc7450(undefined4 *param_2,undefined4 param_3); template<class... A> int FUN_10bc7450(A...); void __thiscall FUN_10bc7530(undefined4 *param_2); template<class... A> int FUN_10bc7530(A...); void __thiscall FUN_10bc79f0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10bc79f0(A...); SCStr * __thiscall FUN_10bc81e0(SCStr *param_2); template<class... A> int FUN_10bc81e0(A...); void __thiscall FUN_10bc9060(int param_2); template<class... A> int FUN_10bc9060(A...); void __thiscall FUN_10bced50(undefined4 param_2); template<class... A> int FUN_10bced50(A...); int __thiscall FUN_10bcf5a0(uint *param_2); template<class... A> int FUN_10bcf5a0(A...); int __thiscall FUN_10bcf5e0(SCStr *param_2); template<class... A> int FUN_10bcf5e0(A...); int __thiscall FUN_10bcf630(SCStr *param_2); template<class... A> int FUN_10bcf630(A...); int __thiscall FUN_10bcf680(SCStr *param_2); template<class... A> int FUN_10bcf680(A...); int __thiscall FUN_10bcf6d0(int *param_2); template<class... A> int FUN_10bcf6d0(A...); int __thiscall FUN_10bcf710(int *param_2); template<class... A> int FUN_10bcf710(A...); int __thiscall FUN_10bcf750(int *param_2); template<class... A> int FUN_10bcf750(A...); int __thiscall FUN_10bcf790(int *param_2); template<class... A> int FUN_10bcf790(A...); int __thiscall FUN_10bcf7d0(int *param_2); template<class... A> int FUN_10bcf7d0(A...); void __thiscall FUN_10bd27a0(undefined4 *param_2); template<class... A> int FUN_10bd27a0(A...); undefined4 __thiscall FUN_10bd8ff0(byte param_2); template<class... A> int FUN_10bd8ff0(A...); undefined4 * __thiscall FUN_10bd91d0(byte param_2); template<class... A> int FUN_10bd91d0(A...); void __thiscall FUN_10bd9600(int param_2); template<class... A> int FUN_10bd9600(A...); undefined4 __thiscall FUN_10be6cf0(int param_2); template<class... A> int FUN_10be6cf0(A...); void __thiscall FUN_10be9e80(undefined4 *param_2); template<class... A> int FUN_10be9e80(A...); undefined4 __thiscall FUN_10bee4a0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10bee4a0(A...); undefined4 __thiscall FUN_10bee5b0(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10bee5b0(A...); };
using namespace std;
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
void __fastcall FUN_106a65c0(int *param_1);
extern void __fastcall FUN_106a65c0(...);
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
void __fastcall FUN_1074b740(undefined4 *param_1);
extern void __fastcall FUN_1074b740(...);
void __fastcall FUN_1074d080(undefined4 *param_1);
extern void __fastcall FUN_1074d080(...);
void FUN_10758160(void);
extern void FUN_10758160(...);
void FUN_10758190(void);
extern void FUN_10758190(...);
void __fastcall FUN_10761000(int *param_1);
extern void __fastcall FUN_10761000(...);
void __fastcall FUN_10768300(undefined4 *param_1);
extern void __fastcall FUN_10768300(...);
void FUN_10771db0(void);
extern void FUN_10771db0(...);
void __fastcall FUN_10773f70(int *param_1);
extern void __fastcall FUN_10773f70(...);
void FUN_10774410(void);
extern void FUN_10774410(...);
void __fastcall FUN_1077c380(undefined4 *param_1);
extern void __fastcall FUN_1077c380(...);
bool FUN_10781c60(void);
extern bool FUN_10781c60(...);
void __fastcall FUN_10783930(undefined4 *param_1);
extern void __fastcall FUN_10783930(...);
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
void __fastcall FUN_107e6c70(undefined4 *param_1);
extern void __fastcall FUN_107e6c70(...);
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
void __fastcall FUN_1085dd80(undefined4 *param_1);
extern void __fastcall FUN_1085dd80(...);
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
void __fastcall FUN_108f8ed0(undefined4 *param_1);
extern void __fastcall FUN_108f8ed0(...);
void FUN_108fcfa0(void);
extern void FUN_108fcfa0(...);
void FUN_1092ed60(void);
extern void FUN_1092ed60(...);
void __fastcall FUN_10954df0(undefined4 *param_1);
extern void __fastcall FUN_10954df0(...);
void __fastcall FUN_10958870(undefined4 *param_1);
extern void __fastcall FUN_10958870(...);
void __fastcall FUN_1095c3d0(int *param_1);
extern void __fastcall FUN_1095c3d0(...);
void FUN_10970e90(void);
extern void FUN_10970e90(...);
void __fastcall FUN_10970eb0(undefined4 *param_1);
extern void __fastcall FUN_10970eb0(...);
void FUN_1097e9a0(void);
extern void FUN_1097e9a0(...);
void FUN_10988080(void);
extern void FUN_10988080(...);
void FUN_109887c0(void);
extern void FUN_109887c0(...);
void __fastcall FUN_10989760(int *param_1);
extern void __fastcall FUN_10989760(...);
void __fastcall FUN_10989940(undefined4 *param_1);
extern void __fastcall FUN_10989940(...);
void __stdcall FUN_1098e820(undefined4 *param_1,undefined4 param_2);
void __stdcall FUN_1098e820(undefined4 *param_1,undefined4 param_2);
undefined4 * __fastcall FUN_1098eec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
undefined4 * __fastcall FUN_1098eec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
void __fastcall FUN_10990220(undefined4 *param_1);
extern void __fastcall FUN_10990220(...);
int FUN_109919c0(int param_1);
extern int FUN_109919c0(...);
void __fastcall FUN_10999ce0(undefined4 *param_1);
extern void __fastcall FUN_10999ce0(...);
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
void __fastcall FUN_10a41880(undefined4 *param_1);
extern void __fastcall FUN_10a41880(...);
void __fastcall FUN_10a45050(undefined4 *param_1);
extern void __fastcall FUN_10a45050(...);
void __fastcall FUN_10a497a0(undefined4 *param_1);
extern void __fastcall FUN_10a497a0(...);
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
void __fastcall FUN_10a80e20(undefined4 *param_1);
extern void __fastcall FUN_10a80e20(...);
void __fastcall FUN_10a92a00(undefined4 *param_1);
extern void __fastcall FUN_10a92a00(...);
void __fastcall FUN_10a92b90(int param_1);
extern void __fastcall FUN_10a92b90(...);
void FUN_10ab26b0(void);
extern void FUN_10ab26b0(...);
void __fastcall FUN_10ab3400(undefined4 *param_1);
extern void __fastcall FUN_10ab3400(...);
void __fastcall FUN_10ab4880(undefined4 *param_1);
extern void __fastcall FUN_10ab4880(...);
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
void __fastcall FUN_10b58c60(undefined4 *param_1);
extern void __fastcall FUN_10b58c60(...);
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
void __fastcall FUN_10ba6e80(int param_1);
extern void __fastcall FUN_10ba6e80(...);
void __fastcall FUN_10ba6ec0(int *param_1);
extern void __fastcall FUN_10ba6ec0(...);
void __fastcall FUN_10ba7e70(int *param_1);
extern void __fastcall FUN_10ba7e70(...);
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
// Reference entry 10699a70; body size 39 bytes.
#line 1 "ENTRY_10699a70"

undefined4 * __fastcall FUN_10699a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 106a40d0; body size 48 bytes.
#line 1 "ENTRY_106a40d0"

undefined4 * __thiscall Recovered_Bulk::FUN_106a40d0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_exception);
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  __std_exception_copy(param_2 + 4,param_1 + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_bad_cast);
  return (undefined4 *)(param_1);
}


// Reference entry 106a4110; body size 24 bytes.
#line 1 "ENTRY_106a4110"

undefined4 * __fastcall FUN_106a4110(undefined4 *param_1)

{
  *(undefined8*)(param_1 + 1) = (undefined8)(0);
  param_1[1] = (undefined4)("bad cast");
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_bad_cast);
  return (undefined4 *)(param_1);
}


// Reference entry 106a4400; body size 25 bytes.
#line 1 "ENTRY_106a4400"

void __fastcall FUN_106a4400(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int **)(param_1 + 4) != (int *)(0x0)) {
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


// Reference entry 106a65c0; body size 33 bytes.
#line 1 "ENTRY_106a65c0"

void __fastcall FUN_106a65c0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106a6540());
  if (iVar1 == 0) {
    ((std::basic_ios *)((std_basic_ios<char,std::char_traits<char>> *)(*(int *)(*param_1 + 4) + (int)param_1)))->setstate(2,
               false);
  }
  return;
}


// Reference entry 106a6e50; body size 58 bytes.
#line 1 "ENTRY_106a6e50"

void __thiscall Recovered_Bulk::FUN_106a6e50(undefined4 param_2)
{
  std_basic_streambuf<char,std::char_traits<char>> *param_1 = (std_basic_streambuf<char,std::char_traits<char>> *)this;
  bool bVar1;
  codecvt_base *this_;
  
  this_ = (codecvt_base *)((codecvt_base *)thunk_FUN_106a39d0(param_2));
  bVar1 = (bool)(((std::codecvt_base *)(this_))->always_noconv());
  if (bVar1) {
    *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
    return;
  }
  *(codecvt_base**)(param_1 + 0x38) = (codecvt_base *)(this_);
  ((std::basic_streambuf *)(param_1))->_Init();
  return;
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)((param_1)) != (undefined4 *)(puVar1); param_1 = param_1 + 5) {
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
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
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
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
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
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
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
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 5) {
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
  if (*(int **)(param_1 + 0x2c) != (int *)(0x0)) {
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
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
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
  if ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)*puVar2)(0);
      puVar2 = (undefined4 *)(puVar2 + 5);
    } while ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1));
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
  *(undefined4*)(param_1 + 0x118) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x11c) = (undefined4)(0);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
  if ((int)((param_1 + 4)) != *(int *)(param_1 + 8)) {
    thunk_FUN_106aec80(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
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
    *(undefined4*)(param_1 + 0x100) = (undefined4)(0);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
    *(undefined4*)(param_1 + 0x85ac) = (undefined4)(0);
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
  
  for (;(int *)( param_1) != (int *)(param_2); param_1 = param_1 + 10) {
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  
  for (;(int *)( param_1) != (int *)(param_2); param_1 = param_1 + 10) {
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)((param_1)) != (undefined4 *)(puVar1); param_1 = param_1 + 8) {
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
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 106e7ac0; body size 50 bytes.
#line 1 "ENTRY_106e7ac0"

int __thiscall Recovered_Bulk::FUN_106e7ac0(undefined4 param_2)
{
  int param_1 = (int )this;
  if ((int)((param_1 + 0x18)) != *(int *)(param_1 + 0x1c)) {
    thunk_FUN_106e1600(param_2);
    *(int*)(param_1 + 0x18) = (int)(*(int *)(param_1 + 0x18) + 0x20);
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
  *(undefined4*)(iVar1 + -0x1c) = (undefined4)(3);
  if ((int)((iVar1 + -8)) != *(int *)(iVar1 + -4)) {
    thunk_FUN_106e1600(param_2);
    *(int*)(iVar1 + -8) = (int)(*(int *)(iVar1 + -8) + 0x20);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  if ((SCStr *)((param_1 + 0xc)) != (SCStr *)(this_)) {
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
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
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


// Reference entry 1074b740; body size 33 bytes.
#line 1 "ENTRY_1074b740"

void __fastcall FUN_1074b740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaPreviewWizardType);
  if ((undefined4 *)(DAT_121a2a78) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2a78)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 1074b9f0; body size 56 bytes.
#line 1 "ENTRY_1074b9f0"

undefined4 * __thiscall Recovered_Bulk::FUN_1074b9f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaPreviewWizardType);
  if ((undefined4 *)(DAT_121a2a78) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2a78)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1074d080; body size 33 bytes.
#line 1 "ENTRY_1074d080"

void __fastcall FUN_1074d080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaSetupWizardType);
  if ((undefined4 *)(DAT_121a2ac4) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2ac4)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 1074d330; body size 56 bytes.
#line 1 "ENTRY_1074d330"

undefined4 * __thiscall Recovered_Bulk::FUN_1074d330(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAmazonAlexaSetupWizardType);
  if ((undefined4 *)(DAT_121a2ac4) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2ac4)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
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
  *(undefined1*)(iVar2 + 0xf4) = (undefined1)(uVar1);
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
  *(undefined1*)(iVar2 + 0xf4) = (undefined1)(uVar1);
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


// Reference entry 10768300; body size 49 bytes.
#line 1 "ENTRY_10768300"

void __fastcall FUN_10768300(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCApInstructionsWizardType);
  if ((undefined4 *)(DAT_121a2c38) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2c38)(1);
  }
  if ((undefined4 *)(DAT_121a2c3c) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2c3c)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 10771db0; body size 59 bytes.
#line 1 "ENTRY_10771db0"

void FUN_10771db0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10ebc1d0());
  *(undefined4*)(iVar1 + 0xf4) = (undefined4)(3);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


// Reference entry 1077c380; body size 33 bytes.
#line 1 "ENTRY_1077c380"

void __fastcall FUN_1077c380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBleConnectWizardType);
  if ((undefined4 *)(DAT_121a2d4c) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2d4c)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 1077c660; body size 56 bytes.
#line 1 "ENTRY_1077c660"

undefined4 * __thiscall Recovered_Bulk::FUN_1077c660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBleConnectWizardType);
  if ((undefined4 *)(DAT_121a2d4c) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2d4c)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10781c60; body size 17 bytes.
#line 1 "ENTRY_10781c60"

bool FUN_10781c60(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_106dbf00(DAT_121a2d98));
  return (bool)(0 < iVar1);
}


// Reference entry 10783930; body size 33 bytes.
#line 1 "ENTRY_10783930"

void __fastcall FUN_10783930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBluetoothOnlyWizardType);
  if ((undefined4 *)(DAT_121a2de8) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2de8)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 10783bb0; body size 56 bytes.
#line 1 "ENTRY_10783bb0"

undefined4 * __thiscall Recovered_Bulk::FUN_10783bb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBluetoothOnlyWizardType);
  if ((undefined4 *)(DAT_121a2de8) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2de8)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


// Reference entry 107e6c70; body size 49 bytes.
#line 1 "ENTRY_107e6c70"

void __fastcall FUN_107e6c70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBusinessWelcomeWizardType);
  if ((undefined4 *)(DAT_121a2f94) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2f94)(1);
  }
  if ((undefined4 *)(DAT_121a2f98) != (undefined4 *)0x0) {
    (**(code **)DAT_121a2f98)(1);
  }
  thunk_FUN_106de840();
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
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  
  *(undefined4*)(param_1 + 0x100) = (undefined4)(param_2);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


// Reference entry 1085dd80; body size 33 bytes.
#line 1 "ENTRY_1085dd80"

void __fastcall FUN_1085dd80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantPreviewWizardType);
  if ((undefined4 *)(DAT_121a3328) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3328)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 1085e030; body size 56 bytes.
#line 1 "ENTRY_1085e030"

undefined4 * __thiscall Recovered_Bulk::FUN_1085e030(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGoogleAssistantPreviewWizardType);
  if ((undefined4 *)(DAT_121a3328) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3328)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  *(undefined1*)(iVar2 + 0x118) = (undefined1)(*(undefined1 *)(iVar1 + 0x118));
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
  *(undefined1*)(iVar2 + 0x118) = (undefined1)(*(undefined1 *)(iVar1 + 0x118));
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
  *(char*)(iVar1 + 0xf5) = (char)(param_2);
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
  *(undefined1*)(iVar2 + 0x110) = (undefined1)(uVar1);
  return;
}


// Reference entry 108f8ed0; body size 33 bytes.
#line 1 "ENTRY_108f8ed0"

void __fastcall FUN_108f8ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNamePortableWizardType);
  if ((undefined4 *)(DAT_121a3824) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3824)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 108f9180; body size 56 bytes.
#line 1 "ENTRY_108f9180"

undefined4 * __thiscall Recovered_Bulk::FUN_108f9180(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNamePortableWizardType);
  if ((undefined4 *)(DAT_121a3824) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3824)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
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


// Reference entry 10954df0; body size 49 bytes.
#line 1 "ENTRY_10954df0"

void __fastcall FUN_10954df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPortablePreparationWizardType);
  if ((undefined4 *)(DAT_121a3adc) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3adc)(1);
  }
  if ((undefined4 *)(DAT_121a3ae0) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3ae0)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 10958870; body size 49 bytes.
#line 1 "ENTRY_10958870"

void __fastcall FUN_10958870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPortableStatusWizardType);
  if ((undefined4 *)(DAT_121a3b30) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3b30)(1);
  }
  if ((undefined4 *)(DAT_121a3b34) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3b34)(1);
  }
  thunk_FUN_106de840();
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


// Reference entry 10970eb0; body size 49 bytes.
#line 1 "ENTRY_10970eb0"

void __fastcall FUN_10970eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCProductPlacementWizardType);
  if ((undefined4 *)(DAT_121a3c34) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3c34)(1);
  }
  if ((undefined4 *)(DAT_121a3c38) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3c38)(1);
  }
  thunk_FUN_106de840();
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
  *(undefined4*)(iVar1 + 0xf4) = (undefined4)(2);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 );
  }

  return;

 } catch (...) { }
}


// Reference entry 10989940; body size 49 bytes.
#line 1 "ENTRY_10989940"

void __fastcall FUN_10989940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRegisterProductWizardType);
  if ((undefined4 *)(DAT_121a3d68) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3d68)(1);
  }
  if ((undefined4 *)(DAT_121a3d6c) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3d6c)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 1098e820; body size 39 bytes.
#line 1 "ENTRY_1098e820"

void __stdcall FUN_1098e820(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_8;
  undefined1 local_4;
  
  thunk_FUN_1098def0(&local_8,param_2);
  *param_1 = (undefined4)(local_8);
  *(undefined1*)(param_1 + 1) = (undefined1)(local_4);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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


// Reference entry 10999ce0; body size 49 bytes.
#line 1 "ENTRY_10999ce0"

void __fastcall FUN_10999ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRenameWizardType);
  if ((undefined4 *)(DAT_121a3e18) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3e18)(1);
  }
  if ((undefined4 *)(DAT_121a3e1c) != (undefined4 *)0x0) {
    (**(code **)DAT_121a3e1c)(1);
  }
  thunk_FUN_106de840();
  return;
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
  if ((undefined4 *)((param_1 + 0x10c)) != (undefined4 *)(param_2)) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  *(undefined4*)(iVar1 + 0xf4) = (undefined4)(1);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  *(undefined1*)(iVar2 + 0xf4) = (undefined1)(uVar1);
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
  *(undefined1*)(iVar2 + 0xf4) = (undefined1)(uVar1);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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


// Reference entry 10a41880; body size 49 bytes.
#line 1 "ENTRY_10a41880"

void __fastcall FUN_10a41880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceServiceLocaleWizardType);
  if ((undefined4 *)(DAT_121a43cc) != (undefined4 *)0x0) {
    (**(code **)DAT_121a43cc)(1);
  }
  if ((undefined4 *)(DAT_121a43d0) != (undefined4 *)0x0) {
    (**(code **)DAT_121a43d0)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 10a45050; body size 49 bytes.
#line 1 "ENTRY_10a45050"

void __fastcall FUN_10a45050(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWacConnectWizardType);
  if ((undefined4 *)(DAT_121a4414) != (undefined4 *)0x0) {
    (**(code **)DAT_121a4414)(1);
  }
  if ((undefined4 *)(DAT_121a4418) != (undefined4 *)0x0) {
    (**(code **)DAT_121a4418)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 10a497a0; body size 49 bytes.
#line 1 "ENTRY_10a497a0"

void __fastcall FUN_10a497a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWiredConnectWizardType);
  if ((undefined4 *)(DAT_121a4468) != (undefined4 *)0x0) {
    (**(code **)DAT_121a4468)(1);
  }
  if ((undefined4 *)(DAT_121a446c) != (undefined4 *)0x0) {
    (**(code **)DAT_121a446c)(1);
  }
  thunk_FUN_106de840();
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
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
    *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_1 + 8));
    return;
  }
  *(int*)(param_1 + 0xc) = (int)(iVar2);
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


// Reference entry 10a80e20; body size 49 bytes.
#line 1 "ENTRY_10a80e20"

void __fastcall FUN_10a80e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCChirpTestWizardType);
  if ((undefined4 *)(DAT_121a4688) != (undefined4 *)0x0) {
    (**(code **)DAT_121a4688)(1);
  }
  if ((undefined4 *)(DAT_121a468c) != (undefined4 *)0x0) {
    (**(code **)DAT_121a468c)(1);
  }
  thunk_FUN_106de840();
  return;
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
    *(undefined4*)(param_1 + 0x11c) = (undefined4)(0);
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


// Reference entry 10ab3400; body size 33 bytes.
#line 1 "ENTRY_10ab3400"

void __fastcall FUN_10ab3400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFlutterTestWizardType);
  if ((undefined4 *)(DAT_121a48b4) != (undefined4 *)0x0) {
    (**(code **)DAT_121a48b4)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 10ab3600; body size 56 bytes.
#line 1 "ENTRY_10ab3600"

undefined4 * __thiscall Recovered_Bulk::FUN_10ab3600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFlutterTestWizardType);
  if ((undefined4 *)(DAT_121a48b4) != (undefined4 *)0x0) {
    (**(code **)DAT_121a48b4)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ab4880; body size 49 bytes.
#line 1 "ENTRY_10ab4880"

void __fastcall FUN_10ab4880(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGhostWizardType);
  if ((undefined4 *)(DAT_121a48cc) != (undefined4 *)0x0) {
    (**(code **)DAT_121a48cc)(1);
  }
  if ((undefined4 *)(DAT_121a48d0) != (undefined4 *)0x0) {
    (**(code **)DAT_121a48d0)(1);
  }
  thunk_FUN_106de840();
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
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
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(int *)(local_4 + 0x10) <= (int)(*param_1))) {
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(undefined1*)(iVar1 + 0x112) = (undefined1)(1);
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
  *(undefined1*)(iVar2 + 0xf4) = (undefined1)(uVar1);
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
  *(short*)(iVar1 + 0x14e) = (short)(param_2);
  *(bool*)(param_1 + 4) = (bool)(param_2 == 0);
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
    *(undefined1*)(iVar1 + 0x14c) = (undefined1)(0);
    return;
  }
  iVar1 = (int)(thunk_FUN_10eb41b0());
  *(undefined1*)(iVar1 + 0x14c) = (undefined1)(1);
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


// Reference entry 10b58c60; body size 33 bytes.
#line 1 "ENTRY_10b58c60"

void __fastcall FUN_10b58c60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTransparentWizardType);
  if ((undefined4 *)(DAT_121a4dbc) != (undefined4 *)0x0) {
    (**(code **)DAT_121a4dbc)(1);
  }
  thunk_FUN_106de840();
  return;
}


// Reference entry 10b58e60; body size 56 bytes.
#line 1 "ENTRY_10b58e60"

undefined4 * __thiscall Recovered_Bulk::FUN_10b58e60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTransparentWizardType);
  if ((undefined4 *)(DAT_121a4dbc) != (undefined4 *)0x0) {
    (**(code **)DAT_121a4dbc)(1);
  }
  thunk_FUN_106de840();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
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
    *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
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
    *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
    *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + 4);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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
  *(undefined4*)(param_1 + 0x34) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x38) = (undefined4)(0);
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
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10b9de20; body size 30 bytes.
#line 1 "ENTRY_10b9de20"

SCStr * __thiscall Recovered_Bulk::FUN_10b9de20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x34));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x38));
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
  *(undefined1*)(param_1 + 0x58) = (undefined1)(1);
  *(undefined4*)(param_1 + 0x54) = (undefined4)(param_2);
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
      *(undefined1*)(param_1 + 0x58) = (undefined1)(0);
      *(undefined4*)(param_1 + 0x54) = (undefined4)(0x3ec);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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


  if ((int *)(int *)(*param_1) != (int *)0x0) {
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


// Reference entry 10ba6e80; body size 48 bytes.
#line 1 "ENTRY_10ba6e80"

void __fastcall FUN_10ba6e80(int param_1)

{
  int iVar1;
  
  *(undefined***)(*(int *)(*(int *)(param_1 + -0x60) + 4) + -0x60 + param_1) = (undefined **)((uint)&ghidra_vftable_std_basic_istringstream);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + -0x60) + 4));
  *(int*)(iVar1 + -100 + param_1) = (int)(iVar1 + -0x60);
  thunk_FUN_104eeff0();
                    
                    
  ((std::basic_istream *)((std_basic_istream<char,std::char_traits<char>> *)(param_1 + -0x48)))->op_dtor();
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


// Reference entry 10ba7e70; body size 56 bytes.
#line 1 "ENTRY_10ba7e70"

void __fastcall FUN_10ba7e70(int *param_1)

{
  std_basic_ios<char,std::char_traits<char>> *this_;
  
  this_ = (std_basic_ios<char,std::char_traits<char>> *)(param_1 + 0x18);
  *(undefined***)(this_ + *(int *)(*param_1 + 4) + -0x60) = (undefined **)((uint)&ghidra_vftable_std_basic_istringstream);
  *(int*)(this_ + *(int *)(*param_1 + 4) + -100) = (int)(*(int *)(*param_1 + 4) + -0x60);
  thunk_FUN_104eeff0();
  ((std::basic_istream *)((std_basic_istream<char,std::char_traits<char>> *)(param_1 + 6)))->op_dtor();
                    
                    
  ((std::basic_ios *)(this_))->op_dtor();
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
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
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
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
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
  if (*(int **)(param_1 + 0x2c) != (int *)(0x0)) {
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
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
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
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_10da6830();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4*)(*(int *)(param_1 + 0x20) + 0x1c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10bab2a0; body size 60 bytes.
#line 1 "ENTRY_10bab2a0"

void __fastcall FUN_10bab2a0(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 4) != (int *)(0x0)) {
    (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
    piVar1 = (int *)(*(int **)(param_1 + 8));
    if ((int *)(piVar1) != (int *)0x0) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
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
  if (*(int **)(param_1 + 4) != (int *)(0x0)) {
                    
                    
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb6b30; body size 57 bytes.
#line 1 "ENTRY_10bb6b30"

void __thiscall Recovered_Bulk::FUN_10bb6b30(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x20) == (int *)(0x0)) {
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
  
  if (*(int **)(param_1 + 0x20) != (int *)(0x0)) {
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
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)(0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
  }
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
                    
                    
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
  *(undefined1*)(param_1 + 0x24) = (undefined1)(0);
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
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
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
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
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
  if (*(int **)(param_1 + 0x2c) != (int *)(0x0)) {
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
  if (*(int **)(param_1 + 0x38) != (int *)(0x0)) {
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
    *(undefined4*)(param_1 + 0x30) = (undefined4)(0);
  }
  return;
}


// Reference entry 10bc8bb0; body size 24 bytes.
#line 1 "ENTRY_10bc8bb0"

undefined4 __fastcall FUN_10bc8bb0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x38) != (int *)(0x0)) {
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
  
  if (*(int **)(param_1 + 0x38) != (int *)(0x0)) {
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
    if (*(undefined4 **)(iVar1 + 0x3c) != (undefined4 *)(0x0)) {
      (**(code **)**(undefined4 **)(iVar1 + 0x3c))(1);
    }
    *(undefined4*)(iVar1 + 0x3c) = (undefined4)(0);
  }
  return;
}


// Reference entry 10bcb620; body size 37 bytes.
#line 1 "ENTRY_10bcb620"

void __fastcall FUN_10bcb620(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)(0x0)) {
      (**(code **)**(undefined4 **)(param_1 + 0x3c))(1);
    }
    *(undefined4*)(param_1 + 0x3c) = (undefined4)(0);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
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
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
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


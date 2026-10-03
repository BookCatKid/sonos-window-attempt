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
extern __declspec(dllimport) int __stdio_common_vsprintf_p(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _strdup(...);
extern int addDeveloperOption(...);
extern int append(...);
extern int beginsWith(...);
extern __declspec(dllimport) int ceil(...);
extern int createActionContextForAction(...);
extern int createPropertyBag(...);
extern int createSCActionFilterer(...);
extern int createSCDisplayMessagePopupAction(...);
extern int createSCIControllerTest(...);
extern int createSCINetstartGetScanListOp(...);
extern int createSCIWizardComponentBuilder(...);
extern int createSCIntArray(...);
extern int createSCNullAsyncOperation(...);
extern int createSCRecurrence(...);
extern int createSCRunAsyncIOOperationAction(...);
extern int createSCRunAsyncIOOperationActionWithMessage(...);
extern int createSCStringArray(...);
extern int createSCSystemTime(...);
extern int createSCTime(...);
extern int createSCUriArray(...);
extern int createServiceAccountsByServiceFilter(...);
extern int createStringTemplate(...);
extern int empty(...);
extern int format(...);
extern int getAppReportingInstance(...);
extern int getBuffer(...);
extern int getDiagnosticCommandNames(...);
extern int getDiagnosticCommands(...);
extern int getDiagnosticFiles(...);
extern int getNewWizManager(...);
extern int getSCHousehold(...);
extern int getSCIResourceHelper(...);
extern int getSingleton(...);
extern int hasDeveloperOption(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_endsWith(...);
extern int int_queryInterfaceSCILibraryTests(...);
extern int int_queryInterfaceSCINetworkManagement(...);
extern int int_queryInterfaceSCIOpFactory(...);
extern int int_queryInterfaceSCISystem(...);
extern int int_release(...);
extern int length(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int operator_new(...);
extern int prepend(...);
extern int removeDeveloperOption(...);
extern int set(...);
extern int setFromUTF16(...);
extern int stringWithFormat(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strspn(...);
extern __declspec(dllimport) int strtok(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2210(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101a2e90(...);
extern int thunk_FUN_101a31e0(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101a7560(...);
extern int thunk_FUN_101a9bd0(...);
extern int thunk_FUN_101a9be0(...);
extern int thunk_FUN_101aaf60(...);
extern int thunk_FUN_101ab700(...);
extern int thunk_FUN_101abde0(...);
extern int thunk_FUN_101abf90(...);
extern int thunk_FUN_101b1ce0(...);
extern int thunk_FUN_101b1fc0(...);
extern int thunk_FUN_101b2090(...);
extern int thunk_FUN_101b2900(...);
extern int thunk_FUN_101b4dd0(...);
extern int thunk_FUN_101b4e80(...);
extern int thunk_FUN_101b52e0(...);
extern int thunk_FUN_101b5390(...);
extern int thunk_FUN_101b8640(...);
extern int thunk_FUN_101b87c0(...);
extern int thunk_FUN_101b88f0(...);
extern int thunk_FUN_101b8fc0(...);
extern int thunk_FUN_101b9160(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101bb3b0(...);
extern int thunk_FUN_101bc5e0(...);
extern int thunk_FUN_101bdde0(...);
extern int thunk_FUN_101be460(...);
extern int thunk_FUN_101be780(...);
extern int thunk_FUN_101c9bc0(...);
extern int thunk_FUN_101e6610(...);
extern int thunk_FUN_101e6a90(...);
extern int thunk_FUN_101ee330(...);
extern int thunk_FUN_101f0850(...);
extern int thunk_FUN_101f0dc0(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_102178d0(...);
extern int thunk_FUN_10222090(...);
extern int thunk_FUN_10222100(...);
extern int thunk_FUN_10223600(...);
extern int thunk_FUN_1023ab10(...);
extern int thunk_FUN_1024a980(...);
extern int thunk_FUN_1024dc20(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_10251f30(...);
extern int thunk_FUN_1025b8b0(...);
extern int thunk_FUN_1025c790(...);
extern int thunk_FUN_1025dc50(...);
extern int thunk_FUN_10260b00(...);
extern int thunk_FUN_1026b9f0(...);
extern int thunk_FUN_1026dd40(...);
extern int thunk_FUN_10271030(...);
extern int thunk_FUN_102788f0(...);
extern int thunk_FUN_10292c70(...);
extern int thunk_FUN_1029d380(...);
extern int thunk_FUN_1029e2d0(...);
extern int thunk_FUN_102beb10(...);
extern int thunk_FUN_102c0620(...);
extern int thunk_FUN_102c1e60(...);
extern int thunk_FUN_102d5690(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_102de430(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_1030a0d0(...);
extern int thunk_FUN_103134f0(...);
extern int thunk_FUN_10313b00(...);
extern int thunk_FUN_10320a30(...);
extern int thunk_FUN_10323890(...);
extern int thunk_FUN_1033cdf0(...);
extern int thunk_FUN_1034d440(...);
extern int thunk_FUN_1034d980(...);
extern int thunk_FUN_1034e0e0(...);
extern int thunk_FUN_103798e0(...);
extern int thunk_FUN_1037a2b0(...);
extern int thunk_FUN_103a3e50(...);
extern int thunk_FUN_103ac5f0(...);
extern int thunk_FUN_103aca40(...);
extern int thunk_FUN_103ba670(...);
extern int thunk_FUN_103bbe00(...);
extern int thunk_FUN_110683a0(...);
extern int thunk_FUN_110689f0(...);
extern int thunk_FUN_11069bc0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_1106d3a0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1123fe90(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_113b9e10(...);
extern int thunk_FUN_113b9ec0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148ac80(...);
extern int thunk_FUN_1148b586(...);
extern __declspec(dllimport) int tolower(...);
extern __declspec(dllimport) int toupper(...);
extern int trim(...);
extern int trimRear(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_SCCountryList;
extern int ghidra_vftable_SCElapsedTimeMeasurement;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIntArray;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCStringArray;
extern int ghidra_vftable_SCVersion;
extern int ghidra_vftable_SwigDirector_SCIAbilityDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIActionFactorySwigBase;
extern int ghidra_vftable_SwigDirector_SCIBleDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCIBrowseItemSwigBase;
extern int ghidra_vftable_SwigDirector_SCICustomSubWizardSwigBase;
extern int ghidra_vftable_SwigDirector_SCIExperimentManagerProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCILocalMusicBrowseItemInfoSwigBase;
extern int ghidra_vftable_SwigDirector_SCISavedDataProviderSwigBase;
extern int ghidra_vftable_SwigDirector_SCIWifiDelegateSwigBase;
extern int ghidra_vftable_SwigDirector_SCLibSonarCallback;
extern undefined1 LAB_101a56a3[];
extern undefined1 LAB_101a70b6[];
extern undefined1 LAB_101a70bc[];
extern undefined1 LAB_101a7266[];
extern undefined1 LAB_101a726c[];
extern undefined1 LAB_101ab5e6[];
extern undefined1 LAB_101ab5ec[];
extern undefined1 LAB_101b1da4[];
extern undefined1 LAB_101b1dbf[];
extern undefined1 LAB_101b8bba[];
extern undefined1 LAB_101b8dc2[];
extern undefined1 LAB_101be642[];
extern undefined1 LAB_101be911[];
extern undefined1 LAB_101c0b8b[];
extern undefined1 LAB_101c2075[];
extern undefined1 LAB_101c26c8[];
extern undefined1 LAB_101c2aed[];
extern undefined1 LAB_101c2c5c[];
extern undefined1 LAB_114e5e60[];
extern undefined1 LAB_114e5e90[];
extern undefined1 LAB_114e5ef0[];
extern undefined1 LAB_114e5f20[];
extern undefined1 LAB_114e5f50[];
extern undefined1 LAB_114e5f80[];
extern undefined1 LAB_114e5fb0[];
extern undefined1 LAB_114e5fe0[];
extern undefined1 LAB_114e6010[];
extern undefined1 LAB_114e60a0[];
extern undefined1 LAB_114e60d0[];
extern undefined1 LAB_114e6100[];
extern undefined1 LAB_114e6190[];
extern undefined1 LAB_114e61c0[];
extern undefined1 LAB_114e61f0[];
extern undefined1 LAB_114e6220[];
extern undefined1 LAB_114e6250[];
extern undefined1 LAB_114e63a0[];
extern undefined1 LAB_114e63d0[];
extern undefined1 LAB_114e6490[];
extern undefined1 LAB_114e64c0[];
extern undefined1 LAB_114e64f0[];
extern undefined1 LAB_114e6580[];
extern undefined1 LAB_114e65b0[];
extern undefined1 LAB_114e65e0[];
extern undefined1 LAB_114e6610[];
extern undefined1 LAB_114e6730[];
extern undefined1 LAB_114e6790[];
extern undefined1 LAB_114e67c0[];
extern undefined1 LAB_114e67f0[];
extern undefined1 LAB_114e6820[];
extern undefined1 LAB_114e6850[];
extern undefined1 LAB_114e68b0[];
extern undefined1 LAB_114e6970[];
extern undefined1 LAB_114e69a0[];
extern undefined1 LAB_114e6a60[];
extern undefined1 LAB_114e6af0[];
extern undefined1 LAB_114e6b20[];
extern undefined1 LAB_114e6b50[];
extern undefined1 LAB_114e6b80[];
extern undefined1 LAB_114e6bb0[];
extern undefined1 LAB_114e6c10[];
extern undefined1 LAB_114e6c40[];
extern undefined1 LAB_114e6ca0[];
extern undefined1 LAB_114e6cd0[];
extern undefined1 LAB_114e6d00[];
extern undefined1 LAB_114e6d30[];
extern undefined1 LAB_114e6df0[];
extern undefined1 LAB_114e6e80[];
extern undefined1 LAB_114e6f40[];
extern undefined1 LAB_114e6fd0[];
extern undefined1 LAB_114e7000[];
extern undefined1 LAB_114e7060[];
extern undefined1 LAB_114e70c0[];
extern undefined1 LAB_114e7150[];
extern undefined1 LAB_114e7180[];
extern undefined1 LAB_114e71b0[];
extern undefined1 LAB_114e71e0[];
extern undefined1 LAB_114e7210[];
extern undefined1 LAB_114e7240[];
extern undefined1 LAB_114e7270[];
extern undefined1 LAB_114e72a0[];
extern undefined1 LAB_114e72d0[];
extern undefined1 LAB_114e7300[];
extern undefined1 LAB_114e7360[];
extern undefined1 LAB_114e7390[];
extern undefined1 LAB_114e73c0[];
extern undefined1 LAB_114e73f0[];
extern undefined1 LAB_114e7420[];
extern undefined1 LAB_114e7450[];
extern undefined1 LAB_114e7480[];
extern undefined1 LAB_114e74b0[];
extern undefined1 LAB_114e75d0[];
extern undefined1 LAB_114e7600[];
extern undefined1 LAB_114e7630[];
extern undefined1 LAB_114e7690[];
extern undefined1 LAB_114e76c0[];
extern undefined1 LAB_114e76f0[];
extern undefined1 LAB_114e7720[];
extern undefined1 LAB_114e7750[];
extern undefined1 LAB_114e7780[];
extern undefined1 LAB_114e77b0[];
extern undefined1 LAB_114e77e0[];
extern undefined1 LAB_114e7810[];
extern undefined1 LAB_114e7840[];
extern undefined1 LAB_114e7870[];
extern undefined1 LAB_114e78a0[];
extern undefined1 LAB_114e78d0[];
extern undefined1 LAB_114e7900[];
extern undefined1 LAB_114e7930[];
extern undefined1 LAB_114e7960[];
extern undefined1 LAB_114e7990[];
extern undefined1 LAB_114e79c0[];
extern undefined1 LAB_114e7a20[];
extern undefined1 LAB_114e7a50[];
extern undefined1 LAB_114e7a80[];
extern undefined1 LAB_114e7ab0[];
extern undefined1 LAB_114e7ae0[];
extern undefined1 LAB_114e7b10[];
extern undefined1 LAB_114e7b40[];
extern undefined1 LAB_114e7b70[];
extern undefined1 LAB_114e7ba0[];
extern undefined1 LAB_114e7bd0[];
extern undefined1 LAB_114e7c30[];
extern undefined1 LAB_114e7cc0[];
extern undefined1 LAB_114e7d20[];
extern undefined1 LAB_114e7e10[];
extern undefined1 LAB_114e7ea0[];
extern undefined1 LAB_114e7f90[];
extern undefined1 LAB_114e7ff0[];
extern undefined1 LAB_114e8020[];
extern undefined1 LAB_114e8080[];
extern undefined1 LAB_114e8140[];
extern undefined1 LAB_114e8170[];
extern undefined1 LAB_114e81a0[];
extern undefined1 LAB_114e82c0[];
extern undefined1 LAB_114e8320[];
extern undefined1 LAB_114e8350[];
extern undefined1 LAB_114e8380[];
extern undefined1 LAB_114e83b0[];
extern undefined1 LAB_114e83e0[];
extern undefined1 LAB_114e8440[];
extern undefined1 LAB_114e84d0[];
extern undefined1 LAB_114e8500[];
extern undefined1 LAB_114e8530[];
extern undefined1 LAB_114e8560[];
extern undefined1 LAB_114e85f0[];
extern undefined1 LAB_114e8620[];
extern undefined1 LAB_114e8650[];
extern undefined1 LAB_114e8680[];
extern undefined1 LAB_114e86b0[];
extern undefined1 LAB_114e86e0[];
extern undefined1 LAB_114e8740[];
extern undefined1 LAB_114e87a0[];
extern undefined1 LAB_114e8800[];
extern undefined1 LAB_114e8830[];
extern undefined1 LAB_114e8860[];
extern undefined1 LAB_114e8890[];
extern undefined1 LAB_114e88c0[];
extern undefined1 LAB_114e88f0[];
extern undefined1 LAB_114e8920[];
extern undefined1 LAB_114e8950[];
extern undefined1 LAB_114e8980[];
extern undefined1 LAB_114e8a40[];
extern undefined1 LAB_114e8a70[];
extern undefined1 LAB_114e8aa0[];
extern undefined1 LAB_114e8ad0[];
extern undefined1 LAB_114e8b00[];
extern undefined1 LAB_114e8b30[];
extern undefined1 LAB_114e8b60[];
extern undefined1 LAB_114e8bc0[];
extern undefined1 LAB_114e8bf0[];
extern undefined1 LAB_114e8c20[];
extern undefined1 LAB_114e8c50[];
extern undefined1 LAB_114e8c80[];
extern undefined1 LAB_114e8cb0[];
extern undefined1 LAB_114e8ce0[];
extern undefined1 LAB_114e8d10[];
extern undefined1 LAB_114e8d40[];
extern undefined1 LAB_114e8d70[];
extern undefined1 LAB_114e8da0[];
extern undefined1 LAB_114e8dd0[];
extern undefined1 LAB_114e8e00[];
extern undefined1 LAB_114e8e30[];
extern undefined1 LAB_114e8e60[];
extern undefined1 LAB_114e8e90[];
extern undefined1 LAB_114e8ec0[];
extern undefined1 LAB_114e8ef0[];
extern undefined1 LAB_114e8f20[];
extern undefined1 LAB_114e8f50[];
extern undefined1 LAB_114e8f80[];
extern undefined1 LAB_114e8fb0[];
extern undefined1 LAB_114e8fe0[];
extern undefined1 LAB_114e9010[];
extern undefined1 LAB_114e9040[];
extern undefined1 LAB_114e9070[];
extern undefined1 LAB_114e90a0[];
extern undefined1 LAB_114e90d0[];
extern undefined1 LAB_114e9100[];
extern undefined1 LAB_114e9130[];
extern undefined1 LAB_114e9160[];
extern undefined1 LAB_114e9190[];
extern undefined1 LAB_114e91c0[];
extern undefined1 LAB_114e91f0[];
extern undefined1 LAB_114e9220[];
extern undefined1 LAB_114e9250[];
extern undefined1 LAB_114e9280[];
extern undefined1 LAB_114e92b0[];
extern undefined1 LAB_114e92e0[];
extern undefined1 LAB_114e9310[];
extern undefined1 LAB_114e9340[];
extern undefined1 LAB_114e93a0[];
extern undefined1 LAB_114e93d0[];
extern undefined1 LAB_114e9430[];
extern undefined1 LAB_114e9460[];
extern undefined1 LAB_114e9490[];
extern undefined1 LAB_114e94f0[];
extern undefined1 LAB_114e9520[];
extern undefined1 LAB_114e9550[];
extern undefined1 LAB_114e9580[];
extern undefined1 LAB_114e95b0[];
extern undefined1 LAB_114e95e0[];
extern undefined1 LAB_114e9640[];
extern undefined1 LAB_114e9670[];
extern undefined1 LAB_114e96a0[];
extern undefined1 LAB_114e96d0[];
extern undefined1 LAB_114e9700[];
extern undefined1 LAB_114e9730[];
extern undefined1 LAB_114e9760[];
extern undefined1 LAB_114e9790[];
extern undefined1 LAB_114e97c0[];
extern undefined1 LAB_114e98b0[];
extern undefined1 LAB_114e98e0[];
extern undefined1 LAB_114e99d0[];
extern undefined1 LAB_114e9a00[];
extern undefined1 LAB_114e9a30[];
extern undefined1 LAB_114e9b20[];
extern undefined1 LAB_114e9b50[];
extern undefined1 LAB_114e9b80[];
extern undefined1 LAB_114e9bb0[];
extern undefined1 LAB_114e9be0[];
extern undefined1 LAB_114e9c40[];
extern undefined1 LAB_114e9c70[];
extern undefined1 LAB_114e9d00[];
extern undefined1 LAB_114e9d90[];
extern undefined1 LAB_114e9f10[];
extern undefined1 LAB_114e9fa0[];
extern undefined1 LAB_114ea030[];
extern undefined1 LAB_114ea090[];
extern undefined1 LAB_114ea150[];
extern undefined1 LAB_114ea180[];
extern undefined1 LAB_114ea210[];
extern undefined1 LAB_114ea270[];
extern undefined1 LAB_114ea2a0[];
extern undefined1 LAB_114ea330[];
extern undefined1 LAB_114ea360[];
extern undefined1 LAB_114ea390[];
extern undefined1 LAB_114ea3c0[];
extern undefined1 LAB_114ea3f0[];
extern undefined1 LAB_114ea420[];
extern undefined1 LAB_114ea450[];
extern undefined1 LAB_114ea480[];
extern undefined1 LAB_114ea4b0[];
extern undefined1 LAB_114ea510[];
extern undefined1 LAB_114ea540[];
extern undefined1 LAB_114ea570[];
extern undefined1 LAB_114ea5a0[];
extern undefined1 LAB_114ea5d0[];
extern undefined1 LAB_114ea600[];
extern undefined1 LAB_114ea630[];
extern undefined1 LAB_114ea660[];
extern undefined1 LAB_114ea6c0[];
extern undefined1 LAB_114ea6f0[];
extern undefined1 LAB_114ea720[];
extern undefined1 LAB_114ea750[];
extern undefined1 LAB_114ea810[];
extern undefined1 LAB_114ea8a0[];
extern undefined1 LAB_114ea8d0[];
extern undefined1 LAB_114ea960[];
extern undefined1 LAB_114ea990[];
extern undefined1 LAB_114ea9c0[];
extern undefined1 LAB_114ea9f0[];
extern undefined1 LAB_114eaa20[];
extern undefined1 LAB_114eaa50[];
extern undefined1 LAB_114eaa80[];
extern undefined1 LAB_114eaab0[];
extern undefined1 LAB_114eaae0[];
extern undefined1 LAB_114eab10[];
extern undefined1 LAB_114eab40[];
extern undefined1 LAB_114eab70[];
extern undefined1 LAB_114eaba0[];
extern undefined1 LAB_114eac00[];
extern undefined1 LAB_114ead20[];
extern undefined1 LAB_114eade0[];
extern undefined1 LAB_114eae40[];
extern undefined1 LAB_114eae70[];
extern undefined1 LAB_114eaea0[];
extern undefined1 LAB_114eaed0[];
extern undefined1 LAB_114eaf00[];
extern undefined1 LAB_114eaf60[];
extern undefined1 LAB_114eaf90[];
extern undefined1 LAB_114eafc0[];
extern undefined1 LAB_114eaff0[];
extern undefined1 LAB_114eb020[];
extern undefined1 LAB_114eb050[];
extern undefined1 LAB_114eb080[];
extern undefined1 LAB_114eb0b0[];
extern undefined1 LAB_114eb0e0[];
extern undefined1 LAB_114eb110[];
extern undefined1 LAB_114eb140[];
extern undefined1 LAB_114eb170[];
extern undefined1 LAB_114eb1a0[];
extern undefined1 LAB_114eb1d0[];
extern undefined1 LAB_114eb200[];
extern undefined1 LAB_114eb230[];
extern undefined1 LAB_114eb2f0[];
extern undefined1 LAB_114eb320[];
extern undefined1 LAB_114eb380[];
extern undefined1 LAB_114eb3b0[];
extern undefined1 LAB_114eb3e0[];
extern undefined1 LAB_114eb410[];
extern undefined1 LAB_114eb440[];
extern undefined1 LAB_114eb470[];
extern undefined1 LAB_114eb4a0[];
extern undefined1 LAB_114eb4d0[];
extern undefined1 LAB_114eb500[];
extern undefined1 LAB_114eb530[];
extern undefined1 LAB_114eb560[];
extern undefined1 LAB_114eb5c0[];
extern undefined1 LAB_114eb620[];
extern undefined1 LAB_114eb650[];
extern undefined1 LAB_114eb7d0[];
extern undefined1 LAB_114eb920[];
extern undefined1 LAB_114eb950[];
extern undefined1 LAB_114eb980[];
extern undefined1 LAB_114eba70[];
extern undefined1 LAB_114ebb00[];
extern undefined1 LAB_114ebb30[];
extern undefined1 LAB_114ebb60[];
extern undefined1 LAB_114ebc20[];
extern undefined1 LAB_114ebd10[];
extern undefined1 LAB_114ebd40[];
extern undefined1 LAB_114ebd70[];
extern undefined1 LAB_114ebda0[];
extern undefined1 LAB_114ebdd0[];
extern undefined1 LAB_114ebe00[];
extern undefined1 LAB_114ebe30[];
extern undefined1 LAB_114ebe60[];
extern undefined1 LAB_114ebe90[];
extern undefined1 LAB_114ebec0[];
extern undefined1 LAB_114ebef0[];
extern undefined1 LAB_114ebf20[];
extern undefined1 LAB_114ebf50[];
extern undefined1 LAB_114ebf80[];
extern undefined1 LAB_114ebfb0[];
extern undefined1 LAB_114ebfe0[];
extern undefined1 LAB_114ec010[];
extern undefined1 LAB_114ec040[];
extern undefined1 LAB_114ec220[];
extern undefined1 LAB_114ec2b0[];
extern undefined1 LAB_114ec2e0[];
extern undefined1 LAB_114ec370[];
extern undefined1 LAB_114ec3a0[];
extern undefined1 LAB_114ec3d0[];
extern undefined1 LAB_114ec400[];
extern undefined1 LAB_114ec430[];
extern undefined1 LAB_114ec460[];
extern undefined1 LAB_114ec6d0[];
extern undefined1 LAB_114ec700[];
extern undefined1 LAB_114ec7f0[];
extern undefined1 LAB_114ec8e0[];
extern undefined1 LAB_114ec9a0[];
extern undefined1 LAB_114ec9d0[];
extern undefined1 LAB_114eca00[];
extern undefined1 LAB_114eca30[];
extern undefined1 LAB_114eca60[];
extern undefined1 LAB_114eca90[];
extern undefined1 LAB_114ecac0[];
extern undefined1 LAB_114ecaf0[];
extern undefined1 LAB_114ecb20[];
extern undefined1 LAB_114ecb50[];
extern undefined1 LAB_114ecb80[];
extern undefined1 LAB_114ecbe0[];
extern undefined1 LAB_114ecc10[];
extern undefined1 LAB_114ecc70[];
extern undefined1 LAB_114ecd00[];
extern undefined1 LAB_114ecd90[];
extern undefined1 LAB_114ecdc0[];
extern undefined1 LAB_114ecdf0[];
extern undefined1 LAB_114ece20[];
extern undefined1 LAB_114ece80[];
extern undefined1 LAB_114eceb0[];
extern undefined1 LAB_114ecee0[];
extern undefined1 LAB_114ecf10[];
extern undefined1 LAB_114ecf40[];
extern undefined1 LAB_114ecf70[];
extern undefined1 LAB_114ecfa0[];
extern undefined1 LAB_114ecfd0[];
extern undefined1 LAB_114ed030[];
extern undefined1 LAB_114ed090[];
extern undefined1 LAB_114ed0c0[];
extern undefined1 LAB_114ed0f0[];
extern undefined1 LAB_114ed1b0[];
extern undefined1 LAB_114ed1e0[];
extern undefined1 LAB_114ed210[];
extern undefined1 LAB_114ed240[];
extern undefined1 LAB_114ed270[];
extern undefined1 LAB_114ed2a0[];
extern undefined1 LAB_114ed2d0[];
extern undefined1 LAB_114ed300[];
extern undefined1 LAB_114ed330[];
extern undefined1 LAB_114ed360[];
extern undefined1 LAB_114ed390[];
extern undefined1 LAB_114ed3f0[];
extern undefined1 LAB_114ed420[];
extern undefined1 LAB_114ed450[];
extern undefined1 LAB_114ed4b0[];
extern undefined1 LAB_114ed4e0[];
extern undefined1 LAB_114ed6c0[];
extern undefined1 LAB_114ed6f0[];
extern undefined1 LAB_114ed720[];
extern undefined1 LAB_114ed780[];
extern undefined1 LAB_114ed7b0[];
extern undefined1 LAB_114ed7e0[];
extern undefined1 LAB_114ed810[];
extern undefined1 LAB_114ed840[];
extern undefined1 LAB_114ed870[];
extern undefined1 LAB_114ed8a0[];
extern undefined1 LAB_114ed8d0[];
extern undefined1 LAB_114ed900[];
extern undefined1 LAB_114ed930[];
extern undefined1 LAB_114ed960[];
extern undefined1 LAB_114ed9c0[];
extern undefined1 LAB_114eda20[];
extern undefined1 LAB_114eda80[];
extern undefined1 LAB_114edab0[];
extern undefined1 LAB_114edae0[];
extern undefined1 LAB_114edb10[];
extern undefined1 LAB_114edb70[];
extern undefined1 LAB_114edba0[];
extern undefined1 LAB_114edbd0[];
extern undefined1 LAB_114edc90[];
extern undefined1 LAB_114edea0[];
extern undefined1 LAB_114edf90[];
extern undefined1 LAB_114edfc0[];
extern undefined1 LAB_114ee080[];
extern undefined1 LAB_114ee0b0[];
extern undefined1 LAB_114ee170[];
extern undefined1 LAB_114ee1a0[];
extern undefined1 LAB_114ee1d0[];
extern undefined1 LAB_114ee200[];
extern undefined1 LAB_114ee230[];
extern undefined1 LAB_114ee290[];
extern undefined1 LAB_114ee2c0[];
extern undefined1 LAB_114ee2f0[];
extern undefined1 LAB_114ee320[];
extern undefined1 LAB_114ee350[];
extern undefined1 LAB_114ee380[];
extern undefined1 LAB_114ee3b0[];
extern undefined1 LAB_114ee3e0[];
extern undefined1 LAB_114ee410[];
extern undefined1 LAB_114ee440[];
extern undefined1 LAB_114ee470[];
extern undefined1 LAB_114ee4a0[];
extern undefined1 LAB_114ee4d0[];
extern undefined1 LAB_114ee530[];
extern undefined1 LAB_114ee560[];
extern undefined1 LAB_114ee590[];
extern undefined1 LAB_114ee5c0[];
extern undefined1 LAB_114ee5f0[];
extern undefined1 LAB_114ee7a0[];
extern undefined1 LAB_114ee7d0[];
extern undefined1 LAB_114ee800[];
extern undefined1 LAB_114ee830[];
extern undefined1 LAB_114ee860[];
extern undefined1 LAB_114ee890[];
extern undefined1 LAB_114ee8c0[];
extern undefined1 LAB_114ee8f0[];
extern undefined1 LAB_114ee920[];
extern undefined1 LAB_114ee950[];
extern undefined1 LAB_114ee980[];
extern undefined1 LAB_114ee9b0[];
extern undefined1 LAB_114eea10[];
extern undefined1 LAB_114eea40[];
extern undefined1 LAB_114eea70[];
extern undefined1 LAB_114eec20[];
extern undefined1 LAB_114eec80[];
extern undefined1 LAB_114eed40[];
extern undefined1 LAB_114eeda0[];
extern undefined1 LAB_114eee00[];
extern undefined1 LAB_114eee60[];
extern undefined1 LAB_114eee90[];
extern undefined1 LAB_114eeec0[];
extern undefined1 LAB_114eeef0[];
extern undefined1 LAB_114eef20[];
extern undefined1 LAB_114eef50[];
extern undefined1 LAB_114eefe0[];
extern undefined1 LAB_114ef010[];
extern undefined1 LAB_114ef040[];
extern undefined1 LAB_114ef070[];
extern undefined1 LAB_114ef0d0[];
extern undefined1 LAB_114ef100[];
extern undefined1 LAB_114ef130[];
extern undefined1 LAB_114ef160[];
extern undefined1 LAB_114ef1c0[];
extern undefined1 LAB_114ef1f0[];
extern undefined1 LAB_114ef250[];
extern undefined1 LAB_114ef280[];
extern undefined1 LAB_114ef2e0[];
extern undefined1 LAB_114ef370[];
extern undefined1 LAB_114ef3a0[];
extern undefined1 LAB_114ef3d0[];
extern undefined1 LAB_114ef430[];
extern undefined1 LAB_114ef460[];
extern undefined1 LAB_114ef490[];
extern undefined1 LAB_114ef4c0[];
extern undefined1 LAB_114ef4f0[];
extern undefined1 LAB_114ef610[];
extern undefined1 LAB_114ef670[];
extern undefined1 LAB_114ef6a0[];
extern undefined1 LAB_114ef6d0[];
extern undefined1 LAB_114ef700[];
extern undefined1 LAB_114ef7c0[];
extern undefined1 LAB_114ef820[];
extern undefined1 LAB_114ef850[];
extern undefined1 LAB_114ef880[];
extern undefined1 LAB_114ef8b0[];
extern undefined1 LAB_114ef8e0[];
extern undefined1 LAB_114ef9a0[];
extern undefined1 LAB_114ef9d0[];
extern undefined1 LAB_114efa00[];
extern undefined1 LAB_114efa90[];
extern undefined1 LAB_114efac0[];
extern undefined1 LAB_114efb20[];
extern undefined1 LAB_114efbe0[];
extern undefined1 LAB_114efc70[];
extern undefined1 LAB_114efd30[];
extern undefined1 LAB_114efdc0[];
extern undefined1 LAB_114efdf0[];
extern undefined1 LAB_114efe80[];
extern undefined1 LAB_114efeb0[];
extern undefined1 LAB_114efee0[];
extern undefined1 LAB_114eff10[];
extern undefined1 LAB_114eff40[];
extern undefined1 LAB_114eff70[];
extern undefined1 LAB_114effa0[];
extern undefined1 LAB_114effd0[];
extern undefined1 LAB_114f0000[];
extern undefined1 LAB_114f0030[];
extern undefined1 LAB_114f0060[];
extern undefined1 LAB_114f0090[];
extern undefined1 LAB_114f00c0[];
extern undefined1 LAB_114f00f0[];
extern undefined1 LAB_114f0120[];
extern undefined1 LAB_114f0150[];
extern undefined1 LAB_114f0180[];
extern undefined1 LAB_114f01b0[];
extern undefined1 LAB_114f01e0[];
extern undefined1 LAB_114f0210[];
extern undefined1 LAB_114f0240[];
extern undefined1 LAB_114f0270[];
extern undefined1 LAB_114f0300[];
extern undefined1 LAB_114f03f0[];
extern undefined1 LAB_114f0420[];
extern undefined1 LAB_114f0450[];
extern undefined1 LAB_114f04b0[];
extern undefined1 LAB_114f04e0[];
extern undefined1 LAB_114f0600[];
extern undefined1 LAB_114f0690[];
extern undefined1 LAB_114f06c0[];
extern undefined1 LAB_114f06f0[];
extern undefined1 LAB_114f0720[];
extern undefined1 LAB_114f0750[];
extern undefined1 LAB_114f0780[];
extern undefined1 LAB_114f07e0[];
extern undefined1 LAB_114f0810[];
extern undefined1 LAB_114f0840[];
extern undefined1 LAB_114f0870[];
extern undefined1 LAB_114f0900[];
extern undefined1 LAB_114f0a50[];
extern undefined1 LAB_114f0a80[];
extern undefined1 LAB_114f0ab0[];
extern undefined1 LAB_114f0ae0[];
extern undefined1 LAB_114f0b40[];
extern undefined1 LAB_114f0c00[];
extern undefined1 LAB_114f0c30[];
extern undefined1 LAB_114f0f00[];
extern undefined1 LAB_114f0f90[];
extern undefined1 LAB_114f1020[];
extern undefined1 LAB_114f1050[];
extern undefined1 LAB_114f1080[];
extern undefined1 LAB_114f10b0[];
extern undefined1 LAB_114f10e0[];
extern undefined1 LAB_114f1110[];
extern undefined1 LAB_114f1140[];
extern undefined1 LAB_114f1170[];
extern undefined1 LAB_114f11a0[];
extern undefined1 LAB_114f11d0[];
extern undefined1 LAB_114f1200[];
extern undefined1 LAB_114f1230[];
extern undefined1 LAB_114f1260[];
extern undefined1 LAB_114f1290[];
extern undefined1 LAB_114f12c0[];
extern undefined1 LAB_114f12f0[];
extern undefined1 LAB_114f1320[];
extern undefined1 LAB_114f1350[];
extern undefined1 LAB_114f1380[];
extern undefined1 LAB_114f13b0[];
extern undefined1 LAB_114f13e0[];
extern undefined1 LAB_114f1410[];
extern undefined1 LAB_114f1440[];
extern undefined1 LAB_114f1470[];
extern undefined1 LAB_114f14a0[];
extern undefined1 LAB_114f14d0[];
extern undefined1 LAB_114f1500[];
extern undefined1 LAB_114f1560[];
extern undefined1 LAB_114f1590[];
extern undefined1 LAB_114f1680[];
extern undefined1 LAB_114f16b0[];
extern undefined1 LAB_114f1740[];
extern undefined1 LAB_114f1770[];
extern undefined1 LAB_114f17d0[];
extern undefined1 LAB_114f1830[];
extern undefined1 LAB_114f1860[];
extern undefined1 LAB_114f1890[];
extern undefined1 LAB_114f18c0[];
extern undefined1 LAB_114f18f0[];
extern undefined1 LAB_114f1920[];
extern undefined1 LAB_114f1950[];
extern undefined1 LAB_114f1980[];
extern undefined1 LAB_114f19b0[];
extern undefined1 LAB_114f19e0[];
extern undefined1 LAB_114f1a10[];
extern undefined1 LAB_114f1a40[];
extern undefined1 LAB_114f1a70[];
extern undefined1 LAB_114f1aa0[];
extern undefined1 LAB_114f1ad0[];
extern undefined1 LAB_114f1b00[];
extern undefined1 LAB_114f1b30[];
extern undefined1 LAB_114f1b60[];
extern undefined1 LAB_114f1b90[];
extern undefined1 LAB_114f1bc0[];
extern undefined1 LAB_114f1bf0[];
extern undefined1 LAB_114f1c50[];
extern undefined1 LAB_114f1c80[];
extern undefined1 LAB_114f1d10[];
extern undefined1 LAB_114f1d40[];
extern undefined1 LAB_114f1d70[];
extern undefined1 LAB_114f1da0[];
extern undefined1 LAB_114f21c0[];
extern undefined1 LAB_114f2250[];
extern undefined1 LAB_114f2280[];
extern undefined1 LAB_114f22b0[];
extern undefined1 LAB_114f22e0[];
extern undefined1 LAB_114f2310[];
extern undefined1 LAB_114f2a00[];
extern undefined1 LAB_114f2b20[];
extern undefined1 LAB_114f2b80[];
extern undefined1 LAB_114f2bb0[];
extern undefined1 LAB_114f2be0[];
extern undefined1 LAB_114f2c10[];
extern undefined1 LAB_114f2c40[];
extern undefined1 LAB_114f2c70[];
extern undefined1 LAB_114f2ca0[];
extern undefined1 LAB_114f2cd0[];
extern undefined1 LAB_114f2d00[];
extern undefined1 LAB_114f2d30[];
extern undefined1 LAB_114f2d60[];
extern undefined1 LAB_114f2d90[];
extern undefined1 LAB_114f2dc0[];
extern undefined1 LAB_114f2df0[];
extern undefined1 LAB_114f2e20[];
extern undefined1 LAB_114f2e80[];
extern undefined1 LAB_114f2ee0[];
extern undefined1 LAB_114f2f10[];
extern undefined1 LAB_114f2f40[];
extern undefined1 LAB_114f2fd0[];
extern undefined1 LAB_114f3060[];
extern undefined1 LAB_114f3090[];
extern undefined1 LAB_114f3120[];
extern undefined1 LAB_114f3210[];
extern undefined1 LAB_114f32a0[];
extern undefined1 LAB_114f331d[];
extern undefined1 LAB_114f335d[];
extern undefined1 LAB_114f3390[];
extern undefined1 LAB_114f341d[];
extern undefined1 LAB_114f345d[];
extern undefined1 LAB_114f349d[];
extern undefined1 LAB_114f3810[];
extern undefined1 LAB_114f38d5[];
extern undefined1 LAB_114f391b[];
extern undefined1 LAB_114f396d[];
extern undefined1 LAB_114f39b5[];
extern undefined1 LAB_114f3ac0[];
extern undefined1 LAB_114f3afd[];
extern undefined1 LAB_114f3c1b[];
extern undefined1 LAB_114f3c5d[];
extern undefined1 LAB_114f3cab[];
extern undefined1 LAB_114f3ced[];
extern undefined1 LAB_114f4610[];
extern undefined1 LAB_114f4670[];
extern undefined1 LAB_114f47cd[];
extern undefined1 LAB_114f480d[];
extern undefined1 LAB_114f484d[];
extern undefined1 LAB_114f488d[];
extern undefined1 LAB_114f4aad[];
extern undefined1 LAB_114f4b65[];
extern undefined1 LAB_114f4ba5[];
extern undefined1 LAB_114f4be5[];
extern undefined1 LAB_114f4c25[];
extern undefined1 LAB_114f4c65[];
extern undefined1 LAB_114f4ca5[];
extern undefined1 LAB_114f4ce5[];
extern undefined1 LAB_114f4d25[];
extern undefined1 LAB_114f4d65[];
extern undefined1 LAB_114f4da5[];
extern undefined1 LAB_114f4ddd[];
extern undefined1 LAB_114f4e25[];
extern undefined1 LAB_114f4e65[];
extern undefined1 LAB_114f4ea5[];
extern undefined1 LAB_114f4ee5[];
extern undefined1 LAB_114f4f25[];
extern undefined1 LAB_114f4f65[];
extern undefined1 LAB_114f4fa5[];
extern undefined1 LAB_114f4fe5[];
extern undefined1 LAB_114f5025[];
extern undefined1 LAB_114f50a5[];
extern undefined1 LAB_114f50d0[];
extern undefined1 LAB_114f510d[];
extern undefined1 LAB_114f5155[];
extern undefined1 LAB_114f5195[];
extern undefined1 LAB_114f51dd[];
extern undefined1 LAB_114f5225[];
extern undefined1 LAB_114f5275[];
extern undefined1 LAB_114f52ee[];
extern undefined1 LAB_114f5365[];
extern undefined1 LAB_114f53ad[];
extern undefined1 LAB_114f5625[];
extern undefined1 LAB_114f56d5[];
extern undefined1 LAB_114f572d[];
extern undefined1 LAB_114f5760[];
extern undefined1 LAB_114f5790[];
extern undefined1 LAB_114f57dc[];
extern undefined1 LAB_114f5857[];
extern undefined1 LAB_114f58c7[];
extern undefined1 LAB_114f5940[];
extern undefined1 LAB_114f597d[];
extern undefined1 LAB_114f59bd[];
extern undefined1 LAB_114f5a1b[];
extern undefined1 LAB_114f5a5d[];
extern undefined1 LAB_114f5ad0[];
extern undefined1 LAB_114f5d10[];
extern undefined1 LAB_114f5d70[];
extern undefined1 LAB_114f6089[];
extern undefined1 LAB_114f6106[];
extern undefined1 LAB_114f615d[];
extern undefined1 LAB_114f61a5[];
extern undefined1 LAB_114f61dd[];
extern undefined1 LAB_114f6247[];
extern undefined1 LAB_114f62b7[];
extern undefined1 LAB_114f62fd[];
extern undefined1 LAB_114f633d[];
extern undefined1 LAB_114f637d[];
extern undefined1 LAB_114f651d[];
extern undefined1 LAB_114f6870[];
extern undefined1 LAB_114f68d0[];
extern undefined1 LAB_114f690d[];
extern undefined1 LAB_114f694d[];
extern undefined1 LAB_114f6980[];
extern undefined1 LAB_114f69ed[];
extern undefined1 LAB_114f6a2d[];
extern undefined1 LAB_114f6bbd[];
extern undefined1 LAB_114f6f4d[];
extern undefined1 LAB_114f7035[];
extern undefined1 LAB_114f70b5[];
extern undefined1 LAB_114f7175[];
extern undefined1 LAB_114f7227[];
extern undefined1 LAB_114f7295[];
extern undefined1 LAB_114f7305[];
extern undefined1 LAB_114f7375[];
extern undefined1 LAB_114f73e5[];
extern undefined1 LAB_114f7455[];
extern undefined1 LAB_114f74c5[];
extern undefined1 LAB_114f7535[];
extern undefined1 LAB_114f75a5[];
extern undefined1 LAB_114f76e6[];
extern undefined1 LAB_114f772d[];
extern undefined1 LAB_114f777d[];
extern undefined1 LAB_114f77cd[];
extern undefined1 LAB_114f7815[];
extern undefined1 LAB_114f7865[];
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0x0000000c;
extern int *stack0xffffffb4;
extern int *stack0xffffffd0;
extern int *stack0xffffffd4;
extern int *stack0xffffffd8;
extern int *stack0xffffffdc;
extern int *stack0xffffffe0;
extern int *stack0xffffffe4;
extern int *stack0xfffffffc;
extern void *ExceptionList;
namespace std {}
struct SCLibParameters { char _pad; SCLibParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int addDeveloperOption(A...); template<class... A> int getDiagnosticCommandNames(A...); template<class... A> int getDiagnosticCommands(A...); template<class... A> int getDiagnosticFiles(A...); template<class... A> int hasDeveloperOption(A...); template<class... A> int removeDeveloperOption(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int createActionContextForAction(A...); template<class... A> int createSCDisplayMessagePopupAction(A...); template<class... A> int createSCRunAsyncIOOperationAction(A...); template<class... A> int createSCRunAsyncIOOperationActionWithMessage(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); template<class... A> int int_queryInterfaceSCILibraryTests(A...); template<class... A> int int_queryInterfaceSCINetworkManagement(A...); template<class... A> int int_queryInterfaceSCIOpFactory(A...); template<class... A> int int_queryInterfaceSCISystem(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int append(A...); template<class... A> int beginsWith(A...); template<class... A> int empty(A...); template<class... A> int format(A...); template<class... A> int getBuffer(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_endsWith(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); template<class... A> int op_ctor(A...); template<class... A> int op_eq(A...); template<class... A> int prepend(A...); template<class... A> int set(A...); template<class... A> int setFromUTF16(A...); template<class... A> int stringWithFormat(A...); template<class... A> int trim(A...); template<class... A> int trimRear(A...); };
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *CHN;
typedef void *LOCALMUSICBROWSE_CPUDN;
typedef void *SQ;
typedef void *WARNING;
typedef void *X;
struct Ability { char _pad; Ability(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DebugMenu { char _pad; DebugMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Resource { char _pad; Resource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAbilityDelegate { char _pad; SCIAbilityDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIAction { char _pad; SCIAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionDelegate { char _pad; SCIActionDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIActionDescriptor { char _pad; SCIActionDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIDebug { char _pad; SCIDebug(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILibrary { char _pad; SCILibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCILibraryTests { char _pad; SCILibraryTests(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINetworkManagement { char _pad; SCINetworkManagement(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOp { char _pad; SCIOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpFactory { char _pad; SCIOpFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCISystem { char _pad; SCISystem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIZoneGroupMgr { char _pad; SCIZoneGroupMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Search { char _pad; Search(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Service { char _pad; Service(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct State { char _pad; State(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Universal { char _pad; Universal(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct UniversalSearch { char _pad; UniversalSearch(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; int * __thiscall FUN_10175d60(undefined4 *param_2); int * __thiscall FUN_1018ba00(undefined4 *param_2); int * __thiscall FUN_101923f0(undefined4 *param_2); uint __thiscall FUN_101a1ea0(char *param_2); void __thiscall FUN_101a32e0(int param_2,int param_3,int param_4); int * __thiscall FUN_101a3470(int *param_2,int *param_3,int *param_4); void __thiscall FUN_101a3540(int *param_2,int *param_3,int *param_4); void __thiscall FUN_101a3610(int *param_2,int *param_3,int *param_4); void __thiscall FUN_101a3840(undefined4 *param_2); SCStr * __thiscall FUN_101a38b0(char param_2); SCStr * __thiscall FUN_101a3910(void *param_2,size_t param_3); bool __thiscall FUN_101a39a0(int *param_2); bool __thiscall FUN_101a3a30(int *param_2); bool __thiscall FUN_101a3ac0(char *param_2); bool __thiscall FUN_101a3b90(undefined4 *param_2,char param_3); bool __thiscall FUN_101a3bf0(undefined4 *param_2,char param_3); bool __thiscall FUN_101a3c50(char *param_2,char param_3); bool __thiscall FUN_101a43a0(char *param_2); int __thiscall FUN_101a4510(int *param_2); void __thiscall FUN_101a4890(char *param_2); uint __thiscall FUN_101a4ab0(undefined4 param_2,undefined4 param_3); void __thiscall FUN_101a4e80(undefined4 *param_2); SCStr * __thiscall FUN_101a4ef0(void *param_2,size_t param_3); SCStr * __thiscall FUN_101a5030(char *param_2,char *param_3,char param_4); void __thiscall FUN_101a55c0(int param_2,uint param_3); SCStr * __thiscall FUN_101a6660(char *param_2); SCStr * __thiscall FUN_101a6790(char *param_2); SCStr * __thiscall FUN_101a68a0(char *param_2); int __thiscall FUN_101a6a70(int *param_2); int __thiscall FUN_101a6b50(int *param_2); undefined4 * __thiscall FUN_101a6f70(void *param_2,undefined4 *param_3); undefined4 * __thiscall FUN_101a7120(void *param_2,undefined4 *param_3); void __thiscall FUN_101a9800(int param_2,int param_3,int param_4); void __thiscall FUN_101a9870(int param_2,int param_3,int param_4); undefined4 __thiscall FUN_101a9dc0(int param_2); undefined4 * __thiscall FUN_101aa5c0(undefined4 param_2,SCStr *param_3); undefined8 * __thiscall FUN_101aa720(undefined8 *param_2); int * __thiscall FUN_101aab50(int *param_2); int * __thiscall FUN_101aac80(undefined4 *param_2); undefined4 * __thiscall FUN_101ab4a0(void *param_2,undefined4 *param_3); void __thiscall FUN_101ab650(int *param_2,undefined4 param_3,uint param_4); undefined8 * __thiscall FUN_101ac230(undefined8 *param_2); SCStr * __thiscall FUN_101acb00(SCStr *param_2); undefined8 * __thiscall FUN_101acb80(undefined8 *param_2); undefined4 * __thiscall FUN_101ace30(int param_2); undefined8 * __thiscall FUN_101af110(undefined8 *param_2); undefined8 * __thiscall FUN_101afeb0(undefined8 *param_2); undefined8 * __thiscall FUN_101aff50(undefined8 *param_2); int __thiscall FUN_101b0190(int param_2); void __thiscall FUN_101b1ce0(uint param_2,undefined4 param_3); void __thiscall FUN_101b1e40(int param_2,int param_3,int param_4); void __thiscall FUN_101b1f30(undefined8 *param_2); uint __thiscall FUN_101b1fc0(int param_2); void __thiscall FUN_101b2480(int param_2); SCIAction * __thiscall FUN_101b2eb0(SCIAction *param_2,undefined4 param_3,int *param_4); SCIAction * __thiscall FUN_101b2f90(SCIAction *param_2,undefined4 param_3,int *param_4); SCIAction * __thiscall FUN_101b3070(SCIAction *param_2,int *param_3); SCIAction * __thiscall FUN_101b3150(SCIAction *param_2,int *param_3); SCIAction * __thiscall FUN_101b3230(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            int *param_5); SCIAction * __thiscall FUN_101b3310(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,int *param_10); SCIAction * __thiscall FUN_101b3400(SCIAction *param_2,undefined4 param_3,int *param_4); SCIAction * __thiscall FUN_101b34e0(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int *param_8); SCIAction * __thiscall FUN_101b35d0(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int *param_9); SCIAction * __thiscall FUN_101b36c0(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,int *param_11); undefined4 * __thiscall FUN_101b37c0(undefined4 *param_2,int param_3,bool param_4,SCStr *param_5,
            undefined4 param_6); SCIAction * __thiscall FUN_101b3880(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6); SCIAction * __thiscall FUN_101b3960(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            int *param_5); SCIAction * __thiscall FUN_101b3a40(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            int *param_5); SCIAction * __thiscall FUN_101b3b20(SCIAction *param_2,int *param_3); SCIAction * __thiscall FUN_101b3c00(SCIAction *param_2,undefined4 param_3,int *param_4); SCIAction * __thiscall FUN_101b3ce0(SCIAction *param_2,int *param_3); SCIAction * __thiscall FUN_101b3dc0(SCIAction *param_2,undefined4 param_3,int *param_4); SCIAction * __thiscall FUN_101b3ea0(SCIAction *param_2,undefined4 param_3,int *param_4); SCIAction * __thiscall FUN_101b3f80(SCIAction *param_2,int *param_3); SCIAction * __thiscall FUN_101b4180(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            int *param_5); undefined4 * __thiscall FUN_101b4260(undefined4 *param_2,int *param_3); undefined4 * __thiscall FUN_101b42f0(undefined4 *param_2,undefined4 param_3); SCIAction * __thiscall FUN_101b43a0(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,int *param_10); SCIAction * __thiscall FUN_101b4490(SCIAction *param_2,int *param_3); SCIAction * __thiscall FUN_101b4570(SCIAction *param_2,undefined4 param_3); SCIAction * __thiscall FUN_101b4670(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6); int * __thiscall FUN_101b4750(int *param_2,int *param_3); void __thiscall FUN_101b49f0(undefined4 param_2,SCStr *param_3); SCStr * __thiscall FUN_101b5070(SCStr *param_2); void __thiscall FUN_101b5900(undefined4 param_2); undefined4 __thiscall FUN_101b6650(undefined4 *param_2); undefined4 * __thiscall FUN_101b6a70(undefined4 *param_2,SCStr *param_3); void __thiscall FUN_101b75d0(int param_2,char *param_3,int *param_4); void __thiscall FUN_101b7920(char *param_2,int *param_3); uint __thiscall FUN_101b8020(int param_2); undefined4 * __thiscall FUN_101b8150(undefined4 param_2,undefined4 param_3,undefined4 param_4); undefined4 * __thiscall FUN_101b8460(byte param_2); undefined4 __thiscall FUN_101b8570(int *param_2); bool __thiscall FUN_101b87f0(char *param_2); bool __thiscall FUN_101b88f0(int *param_2); undefined1 __thiscall FUN_101b8d30(int *param_2); void __thiscall FUN_101b8fc0(int *param_2,int *param_3); undefined4 * __thiscall FUN_101b9390(int param_2); int * __thiscall FUN_101b9420(int param_2); undefined4 * __thiscall FUN_101b94f0(int param_2); undefined4 * __thiscall FUN_101b9770(int param_2); undefined4 * __thiscall FUN_101b9a40(char *param_2); int * __thiscall FUN_101ba530(int *param_2); void __thiscall FUN_101baaf0(int *param_2,undefined4 param_3); void __thiscall FUN_101bb010(undefined4 param_2,SCStr *param_3); void __thiscall FUN_101bbc60(undefined4 param_2,undefined4 param_3); void __thiscall FUN_101bbd90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_101be320(byte param_2); void __thiscall FUN_101be6a0(int *param_2); uint __thiscall FUN_101be8b0(int *param_2); undefined4 __thiscall FUN_101bea30(undefined4 param_2); undefined4 * __thiscall FUN_101c3740(undefined4 param_2,undefined4 param_3,undefined4 *param_4); int * __thiscall FUN_101c3c40(int *param_2); int * __thiscall FUN_101c3da0(int *param_2); int * __thiscall FUN_101c3ed0(undefined4 *param_2); };
using namespace std;
undefined4 FUN_10155a50(int *param_1);
undefined4 FUN_10155af0(int *param_1);
undefined4 FUN_10155c80(int *param_1);
undefined4 FUN_10155d50(int *param_1);
undefined4 FUN_10155df0(int *param_1,undefined4 param_2);
undefined4 FUN_10155e90(int *param_1,undefined4 param_2);
undefined4 FUN_10155f40(int *param_1);
undefined4 FUN_10155fe0(int *param_1);
undefined4 __stdcall FUN_101560b0(int *param_1,ushort *param_2);
SCStr * __stdcall FUN_101563d0(int *param_1,undefined4 param_2,undefined4 param_3);
SCStr * __stdcall FUN_10156520(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10156680(int *param_1,undefined4 param_2);
undefined4 FUN_10156940(int *param_1);
SCStr * __stdcall FUN_101569e0(int *param_1,undefined4 param_2);
undefined4 FUN_10156b30(int *param_1);
void __stdcall FUN_10156dd0(int *param_1,ushort *param_2);
SCStr * __stdcall FUN_10156f10(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10157940(int *param_1);
SCStr * __stdcall FUN_101579e0(int *param_1);
SCStr * __stdcall FUN_10157e40(int *param_1,undefined4 param_2);
SCStr * __stdcall FUN_10157f90(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_101580e0(int *param_1);
undefined4 FUN_10158370(int *param_1);
undefined4 FUN_10158430(int *param_1);
undefined4 FUN_101584d0(int *param_1,undefined4 param_2);
undefined4 FUN_10158570(int *param_1);
SCStr * __stdcall FUN_10158af0(int *param_1,undefined4 param_2);
undefined4 FUN_10158f50(int *param_1,undefined4 param_2);
undefined4 FUN_10158ff0(int *param_1,undefined4 param_2);
undefined4 FUN_10159130(int *param_1);
undefined4 FUN_101591d0(int *param_1);
undefined4 FUN_10159270(int *param_1);
SCStr * __stdcall FUN_10159400(int *param_1);
void __stdcall FUN_10159880(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_10159950(int *param_1);
undefined4 FUN_10159ce0(int *param_1);
undefined4 __stdcall FUN_10159fa0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1015a030(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1015a0c0(int *param_1,ushort *param_2,ushort *param_3);
undefined1 __stdcall FUN_1015a180(int *param_1,ushort *param_2);
undefined4 FUN_1015a2e0(int *param_1,undefined4 param_2);
undefined4 FUN_1015a4b0(int *param_1,undefined4 param_2);
undefined4 FUN_1015a550(void);
void __stdcall FUN_1015a8d0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1015a9b0(int *param_1,ushort *param_2);
undefined4 FUN_1015aa60(int *param_1);
void __stdcall FUN_1015ab10(int *param_1,ushort *param_2);
undefined4 FUN_1015ae90(int *param_1);
undefined4 FUN_1015b1f0(int *param_1);
undefined1 __stdcall FUN_1015b560(int *param_1,ushort *param_2);
undefined4 FUN_1015b800(int *param_1);
undefined4 FUN_1015b8a0(int *param_1);
undefined4 FUN_1015ba40(int *param_1);
undefined4 FUN_1015bc80(void);
undefined4 FUN_1015c030(void);
void __stdcall FUN_1015c0f0(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_1015c270(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_1015c4e0(int *param_1);
undefined4 FUN_1015c580(int *param_1,undefined4 param_2);
undefined4 FUN_1015c620(int *param_1);
undefined4 FUN_1015c6c0(int *param_1);
void __stdcall FUN_1015c7a0(int *param_1,ushort *param_2);
undefined4 FUN_1015cad0(void);
undefined4 __stdcall FUN_1015cb70(ushort *param_1);
undefined4 FUN_1015cdb0(int *param_1,undefined4 param_2);
undefined4 FUN_1015ce50(int *param_1,undefined4 param_2);
undefined4 FUN_1015cef0(int *param_1,undefined4 param_2);
undefined4 FUN_1015cf90(int *param_1,undefined4 param_2);
undefined4 FUN_1015d030(int *param_1);
undefined4 FUN_1015d0d0(int *param_1);
undefined4 FUN_1015d170(int *param_1);
undefined4 FUN_1015d210(int *param_1);
undefined4 FUN_1015d790(int *param_1,undefined4 param_2);
undefined4 FUN_1015d850(int *param_1);
undefined4 FUN_1015d900(int *param_1);
undefined4 FUN_1015db10(int *param_1);
undefined4 FUN_1015dcc0(int *param_1);
undefined4 __stdcall FUN_1015dd60(int *param_1,ushort *param_2);
void __stdcall FUN_1015dea0(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_1015df90(int *param_1,undefined4 param_2,undefined4 param_3,ushort *param_4);
undefined4 FUN_1015e060(int *param_1);
undefined4 FUN_1015e100(int *param_1);
undefined4 FUN_1015e1a0(int *param_1);
undefined4 FUN_1015e240(int *param_1);
undefined4 __stdcall FUN_1015e2e0(int *param_1,ushort *param_2);
undefined4 FUN_1015e390(int *param_1,int *param_2);
undefined4 FUN_1015e440(int *param_1,undefined4 param_2);
undefined4 FUN_1015e4e0(int *param_1,int *param_2);
void __stdcall FUN_1015e590(int *param_1,ushort *param_2);
undefined4 FUN_1015e630(int *param_1);
undefined4 FUN_1015e6d0(int *param_1);
undefined4 __stdcall FUN_1015e770(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_1015e820(int *param_1,undefined4 param_2);
undefined4 FUN_1015e9d0(int *param_1);
undefined4 FUN_1015ea70(int *param_1);
undefined4 FUN_1015eb10(int *param_1,undefined4 param_2);
undefined4 FUN_1015ecd0(int *param_1);
undefined4 FUN_1015ed70(int *param_1);
undefined4 FUN_1015ee10(int *param_1,undefined4 param_2);
undefined4 FUN_1015eeb0(int *param_1,undefined4 param_2);
undefined4 FUN_1015ef50(int *param_1,int *param_2);
undefined4 FUN_1015f000(int *param_1,undefined4 param_2);
undefined4 FUN_1015f0d0(int *param_1);
undefined4 FUN_1015f7e0(int *param_1);
undefined4 FUN_1015fb80(int *param_1);
undefined4 FUN_1015fd10(int *param_1);
undefined4 FUN_10160190(int *param_1);
undefined4 FUN_10160430(int *param_1);
undefined4 __stdcall FUN_10160bc0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10160dc0(int *param_1,ushort *param_2);
SCStr * __stdcall FUN_10160e70(int *param_1);
undefined4 __stdcall FUN_101610b0(int *param_1,ushort *param_2);
undefined4 FUN_101615e0(int *param_1);
undefined4 __stdcall FUN_101616a0(int *param_1,ushort *param_2);
SCStr * __stdcall FUN_101617a0(int *param_1,undefined4 param_2);
undefined4 FUN_10161da0(void);
void __stdcall FUN_10161fe0(int *param_1,undefined4 param_2,ushort *param_3);
undefined1 __stdcall FUN_10162070(int *param_1,ushort *param_2);
undefined4 FUN_101621f0(int *param_1);
float10 __stdcall FUN_10162290(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5);
undefined4
__stdcall FUN_10162390(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5);
undefined4 FUN_10162630(int *param_1);
undefined4 __stdcall FUN_10162920(int *param_1,ushort *param_2);
void __stdcall FUN_101629d0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10162a50(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined1 __stdcall FUN_10162b40(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_10162df0(int *param_1,ushort *param_2);
void __stdcall FUN_10162e80(int *param_1,ushort *param_2);
void __stdcall FUN_10162f10(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4);
undefined4 FUN_10163010(int *param_1);
float10 __stdcall FUN_101630b0(int *param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_10163180(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_101633a0(int *param_1);
undefined4 FUN_10163540(void);
undefined4 __stdcall FUN_10163700(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_101637b0(ushort *param_1);
undefined1 __stdcall FUN_10163840(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_101638d0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10163960(int *param_1,ushort *param_2);
void __stdcall FUN_10163a10(int *param_1,ushort *param_2);
void __stdcall FUN_10163a90(int *param_1,ushort *param_2,int param_3);
void __stdcall FUN_10163b20(int *param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_10163c30(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_101640b0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10164170(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_10164370(int *param_1,ushort *param_2);
void __stdcall FUN_10164460(int *param_1,ushort *param_2);
undefined4 FUN_10164510(int *param_1,undefined4 param_2);
undefined4 FUN_101645b0(int *param_1);
undefined4 FUN_10164650(int *param_1);
undefined4 FUN_101647f0(int *param_1);
undefined4 FUN_10164c10(int *param_1);
undefined4 FUN_10164cb0(int *param_1);
undefined4 __stdcall FUN_10164d50(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10164e00(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_10164ef0(int *param_1);
undefined4 FUN_10164f90(int *param_1);
undefined4 FUN_10165030(int *param_1);
undefined4 FUN_101650d0(int *param_1);
undefined4 __stdcall FUN_10165170(int *param_1,ushort *param_2);
undefined4 FUN_10165230(int *param_1);
undefined4 FUN_101652d0(int *param_1);
undefined4 __stdcall FUN_10165370(int *param_1,ushort *param_2);
undefined4 FUN_10165420(int *param_1);
undefined4 FUN_101654c0(int *param_1);
undefined4 FUN_10165560(int *param_1);
undefined4 FUN_10165600(int *param_1);
undefined4 FUN_101656a0(int *param_1);
undefined4 FUN_10165740(int *param_1);
undefined4 __stdcall FUN_101657e0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10165890(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10165940(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4);
undefined4 __stdcall FUN_10165a00(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10165ab0(int *param_1,ushort *param_2);
undefined4 FUN_10165b60(int *param_1,undefined4 param_2);
undefined4 FUN_10165c00(int *param_1,int *param_2);
undefined4 FUN_10165cb0(int *param_1);
undefined4 FUN_10165d50(int *param_1);
undefined4 FUN_10165df0(int *param_1);
undefined4 __stdcall FUN_10165e90(int *param_1,ushort *param_2,ushort *param_3,int param_4);
undefined4 FUN_10165f90(int *param_1);
undefined4 __stdcall FUN_10166030(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_10166130(int *param_1,int *param_2);
undefined4 FUN_101661e0(int *param_1);
undefined4 FUN_10166280(int *param_1);
undefined4 FUN_10166340(int *param_1);
undefined4 FUN_101663e0(int *param_1);
undefined4 FUN_10166480(int *param_1);
undefined4 FUN_10166520(int *param_1);
undefined4 FUN_101665c0(int *param_1);
undefined4 FUN_10166660(int *param_1);
undefined4 FUN_101667f0(int *param_1);
undefined4 FUN_10166890(int *param_1);
undefined4 FUN_10166a20(int *param_1);
undefined4 FUN_10166ac0(int *param_1,undefined4 param_2);
undefined4 FUN_10166b60(int *param_1);
undefined4 FUN_10166cf0(int *param_1);
undefined4 FUN_10166e00(int *param_1,int *param_2);
undefined4 FUN_10166eb0(int *param_1);
undefined4 FUN_10166f50(int *param_1);
undefined4 FUN_10166ff0(int *param_1);
undefined4 FUN_10167090(int *param_1);
undefined4 FUN_10167220(int *param_1);
undefined4 FUN_101672c0(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_10167500(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_101675b0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10167660(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10167710(int *param_1,ushort *param_2);
void __stdcall FUN_10167800(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_10167930(int *param_1,ushort *param_2);
void __stdcall FUN_10167ba0(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_10168040(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_10168120(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_101685a0(void);
void __stdcall FUN_10168680(int *param_1,ushort *param_2,ushort *param_3);
undefined4
__stdcall FUN_101687a0(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5);
void __stdcall FUN_10168cf0(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_10168e50(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10168f00(void);
undefined4 FUN_10168fc0(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_10169060(int *param_1,ushort *param_2);
undefined4 FUN_10169200(int *param_1);
SCStr * __stdcall FUN_10169340(int *param_1,undefined4 param_2);
undefined4 FUN_10169680(int *param_1,undefined4 param_2);
SCStr * __stdcall FUN_10169990(int *param_1,undefined4 param_2);
undefined4 FUN_1016a410(int *param_1,undefined4 param_2);
SCStr * __stdcall FUN_1016a6b0(int *param_1);
SCStr * __stdcall FUN_1016a9e0(int *param_1);
SCStr * __stdcall FUN_1016ac20(int *param_1);
undefined4 FUN_1016b070(int *param_1);
SCStr * __stdcall FUN_1016b110(int *param_1,undefined4 param_2);
undefined4 FUN_1016b440(int *param_1);
undefined4 __stdcall FUN_1016b5d0(ushort *param_1,undefined4 param_2);
undefined4 FUN_1016b680(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1016bd50(int *param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_1016be40(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined4 FUN_1016bf30(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_1016bfd0(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_1016c0c0(int *param_1);
undefined4 __stdcall FUN_1016c160(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4);
undefined4 FUN_1016c2a0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __stdcall FUN_1016c340(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4);
undefined4 FUN_1016c480(int *param_1);
undefined4 FUN_1016c620(int *param_1);
undefined4 FUN_1016c6e0(int *param_1);
undefined4 FUN_1016c780(int *param_1);
undefined4 FUN_1016c820(int *param_1);
undefined4 FUN_1016c8c0(int *param_1);
undefined4 FUN_1016c960(int *param_1);
undefined4 __stdcall FUN_1016ca00(int *param_1,ushort *param_2);
undefined4 FUN_1016cab0(int *param_1);
undefined4 FUN_1016cc40(int *param_1);
undefined4 FUN_1016cce0(int *param_1);
undefined4 FUN_1016cd80(int *param_1);
undefined4 FUN_1016ce20(int *param_1);
undefined4 FUN_1016d1b0(int *param_1);
undefined4 FUN_1016d430(int *param_1);
undefined4 FUN_1016d4d0(int *param_1);
undefined4 FUN_1016d750(int *param_1);
undefined4 __stdcall FUN_1016d7f0(int *param_1,ushort *param_2);
undefined4 FUN_1016d8b0(int *param_1);
undefined4 FUN_1016d950(int *param_1);
undefined4 FUN_1016d9f0(int *param_1);
undefined4 FUN_1016da90(int *param_1);
undefined4 FUN_1016db50(int *param_1);
undefined4 FUN_1016dbf0(int *param_1);
undefined1 __stdcall FUN_1016dc90(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1016dd20(undefined4 *param_1,ushort *param_2);
undefined4 FUN_1016ddf0(int *param_1);
undefined4 FUN_1016de90(int *param_1);
void __stdcall FUN_1016df80(int *param_1,ushort *param_2);
undefined4 FUN_1016e2b0(int *param_1,undefined4 param_2);
undefined4 FUN_1016ea20(int *param_1);
undefined4 FUN_1016ef10(void);
undefined4 __stdcall FUN_1016f150(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1016f200(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 __stdcall FUN_1016f520(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1016f5e0(int *param_1,ushort *param_2);
undefined4 FUN_1016f6a0(int *param_1);
undefined4 FUN_1016f870(int *param_1);
void __stdcall FUN_1016f990(int *param_1,undefined4 param_2,ushort *param_3);
undefined4 FUN_1016fa20(int *param_1);
undefined4 __stdcall FUN_1016fae0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1016fb90(int *param_1,ushort *param_2);
undefined4 FUN_1016fc50(int *param_1);
undefined4 __stdcall FUN_1016fcf0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1016fdb0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1016fe80(ushort *param_1);
undefined4 FUN_1016ff30(int *param_1);
undefined4 FUN_10170050(int *param_1,undefined4 param_2);
undefined4 FUN_101702a0(int *param_1);
undefined4 FUN_101704a0(void);
undefined4 FUN_10170540(int *param_1);
undefined4 FUN_101705e0(int *param_1);
undefined4 FUN_10170680(int *param_1,undefined4 param_2);
void __stdcall FUN_10170a00(int *param_1,ushort *param_2);
void FUN_10170c90(int *param_1,ushort *param_2);
void __stdcall FUN_10170f80(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4);
void __stdcall FUN_10171090(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_10171170(int *param_1,ushort *param_2);
void __stdcall FUN_101712f0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4);
void __stdcall FUN_10171400(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_101714e0(int *param_1,ushort *param_2);
void __stdcall FUN_10171670(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_10171710(int *param_1);
void __stdcall FUN_101718b0(int *param_1,ushort *param_2);
void __stdcall FUN_10171940(int *param_1,ushort *param_2,int param_3);
undefined4 FUN_101719e0(int *param_1,undefined4 param_2);
SCStr * __stdcall FUN_10171b70(int *param_1,undefined4 param_2);
undefined4 FUN_10171e60(int *param_1,undefined4 param_2);
undefined4 FUN_10171f00(int *param_1);
SCStr * __stdcall FUN_101726c0(int *param_1,undefined4 param_2);
undefined4 FUN_10172e20(int *param_1);
undefined4 FUN_10172ec0(int *param_1);
SCStr * __stdcall FUN_10172f60(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_10173440(int *param_1,ushort *param_2);
undefined4 FUN_101736b0(int *param_1);
SCStr * __stdcall FUN_10173750(int *param_1,undefined4 param_2);
SCStr * __stdcall FUN_101738a0(int *param_1);
undefined4 FUN_10173cd0(int *param_1);
undefined4 FUN_101743d0(int *param_1);
undefined4 FUN_10174470(int *param_1);
undefined4 FUN_10174510(int *param_1);
undefined4 FUN_101745b0(int *param_1,int *param_2);
undefined4 FUN_10174660(int *param_1);
undefined4 FUN_10174700(int *param_1);
undefined4 FUN_101747a0(int *param_1);
undefined4 FUN_10174840(int *param_1,undefined4 param_2);
undefined4 FUN_101748e0(int *param_1);
undefined4 FUN_10174980(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_10174a20(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_10174b10(int *param_1,undefined4 param_2);
undefined4 FUN_10174bb0(int *param_1,int *param_2);
undefined4 FUN_10174c60(int *param_1,undefined4 param_2);
undefined4 FUN_10174d00(int *param_1,int *param_2);
undefined4 __stdcall FUN_10174db0(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_10174ea0(int *param_1,undefined4 param_2);
undefined4 FUN_10174f40(int *param_1);
undefined4 FUN_10175900(int *param_1);
undefined4 __stdcall FUN_10176100(undefined4 *param_1,ushort *param_2);
undefined4 FUN_10176690(int *param_1);
undefined4 FUN_10176760(int *param_1);
undefined4 FUN_10176830(int *param_1);
undefined4 FUN_10176a10(int *param_1);
undefined4 __stdcall FUN_10176ae0(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_10176ba0(int *param_1);
undefined4 FUN_101778b0(int *param_1);
undefined4 __stdcall FUN_10177950(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_10177ee0(int *param_1,ushort *param_2);
void __stdcall FUN_10178460(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_10178920(int *param_1);
undefined4
__stdcall FUN_10178a10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ushort *param_5,
            undefined4 param_6);
undefined4
FUN_10178ad0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
            undefined4 param_6);
undefined4
FUN_10178b90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            int param_6,undefined4 param_7);
undefined4 FUN_10178c50(int *param_1,undefined4 param_2);
undefined4 FUN_10178cf0(int *param_1,undefined4 param_2);
undefined4 FUN_10178d90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10178e30(int *param_1);
undefined4
FUN_10178ed0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5);
undefined4
__stdcall FUN_10178f80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ushort *param_5,
            undefined4 param_6);
undefined4 __stdcall FUN_10179040(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_10179230(int *param_1);
undefined4 FUN_101792f0(int *param_1);
undefined4 FUN_101794b0(int *param_1);
undefined4 __stdcall FUN_10179870(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10179ae0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10179c10(int *param_1,ushort *param_2);
undefined4 FUN_10179ca0(int *param_1);
undefined4 __stdcall FUN_10179d40(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10179ea0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10179f30(int *param_1,ushort *param_2,undefined4 *param_3);
float10 __stdcall FUN_10179fd0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_1017a060(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 __stdcall FUN_1017a0f0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_1017a180(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_1017a210(int *param_1);
undefined4 __stdcall FUN_1017a2b0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1017a410(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1017a570(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1017a600(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1017a6b0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_1017aa40(int *param_1,ushort *param_2);
void __stdcall FUN_1017aad0(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_1017ab60(int *param_1,ushort *param_2,int param_3);
void FUN_1017abf0(int *param_1,ushort *param_2,undefined8 param_3);
void __stdcall FUN_1017ac80(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_1017ad10(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_1017ada0(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_1017ae30(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_1017aec0(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_1017af80(int *param_1);
undefined4 FUN_1017b030(int *param_1);
undefined4 FUN_1017b210(int *param_1);
undefined4 FUN_1017b2b0(int *param_1);
undefined4 FUN_1017b360(int *param_1);
undefined4 FUN_1017b5a0(int *param_1);
undefined4 __stdcall FUN_1017b640(ushort *param_1);
undefined1 __stdcall FUN_1017d060(int *param_1,ushort *param_2);
float10 __stdcall FUN_1017d0f0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1017d180(int *param_1,ushort *param_2);
void __stdcall FUN_1017d330(int *param_1,ushort *param_2,int param_3);
void FUN_1017d3c0(int *param_1,ushort *param_2,undefined8 param_3);
void __stdcall FUN_1017d450(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_1017d4e0(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_1017d5a0(int *param_1,ushort *param_2);
void __stdcall FUN_1017d620(int *param_1,ushort *param_2,int param_3);
void FUN_1017d6b0(int *param_1,ushort *param_2,undefined8 param_3);
void __stdcall FUN_1017d740(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_1017d7d0(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_1017d8a0(int *param_1,int *param_2);
void __stdcall FUN_1017d9a0(int *param_1,ushort *param_2);
undefined4 FUN_1017dbc0(void);
undefined4 FUN_1017dd70(int *param_1);
undefined4 FUN_1017df00(int *param_1);
undefined4 FUN_1017dfa0(int *param_1);
void __stdcall FUN_1017e0a0(int *param_1,ushort *param_2);
undefined4 FUN_1017e140(void);
undefined4 FUN_1017e2d0(int *param_1);
undefined4 FUN_1017e370(int *param_1);
undefined4 FUN_1017e410(int *param_1);
undefined4 FUN_1017e850(int *param_1);
undefined4 FUN_1017f330(int *param_1);
SCStr * __stdcall FUN_1017f7c0(int *param_1,undefined4 param_2);
undefined4 FUN_1017f910(int *param_1);
undefined1 __stdcall FUN_1017fd60(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_1017fdf0(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_10180270(int *param_1,ushort *param_2);
void __stdcall FUN_10180300(int *param_1,ushort *param_2);
void __stdcall FUN_10180390(int *param_1,ushort *param_2);
void __stdcall FUN_10180420(int *param_1,ushort *param_2);
undefined4 FUN_101805b0(int *param_1);
undefined4 FUN_101807b0(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_10180850(int *param_1,ushort *param_2);
undefined4 FUN_101808e0(int *param_1);
undefined1 __stdcall FUN_10180980(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10180a10(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10180aa0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10180b30(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10180bc0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10180c70(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10180d40(int *param_1,ushort *param_2);
undefined4 FUN_10180e60(int *param_1);
undefined4 FUN_10180f00(int *param_1);
undefined4 __stdcall FUN_10180fa0(int *param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_10181210(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4);
undefined4 FUN_10181330(int *param_1);
undefined4 __stdcall FUN_101813d0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10181480(int *param_1,ushort *param_2);
undefined4 FUN_10181530(int *param_1);
undefined4 FUN_10181df0(int *param_1);
undefined1 __stdcall FUN_10181e90(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_10181f20(int *param_1,ushort *param_2,undefined4 param_3);
undefined1 __stdcall FUN_10181fe0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4);
undefined4 __stdcall FUN_101820e0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10182170(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_10182240(int *param_1,undefined4 param_2);
undefined4 FUN_101822e0(int *param_1);
undefined4 __stdcall FUN_10182380(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10182430(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_101824e0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10182620(int *param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_10182890(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4);
undefined4 __stdcall FUN_101829b0(int *param_1,ushort *param_2,ushort *param_3);
undefined1 __stdcall FUN_10182aa0(int *param_1,ushort *param_2);
undefined4 FUN_101833a0(int *param_1);
SCStr * __stdcall FUN_10183530(int *param_1);
undefined4 __stdcall FUN_10183960(ushort *param_1,undefined4 param_2,ushort *param_3);
undefined4 FUN_10183b90(int *param_1);
undefined4 FUN_10183d30(int *param_1);
undefined4 FUN_10183ec0(int *param_1);
undefined1 __stdcall FUN_10183f70(ushort *param_1);
void __stdcall FUN_10184070(int *param_1,ushort *param_2);
void __stdcall FUN_10184190(int *param_1,ushort *param_2);
undefined4 FUN_101842a0(int *param_1);
undefined4 FUN_10184340(int *param_1,undefined4 param_2);
undefined4 FUN_101845d0(int *param_1);
undefined4 FUN_10184670(int *param_1);
undefined4 FUN_10184710(int *param_1);
undefined4 FUN_101847b0(int *param_1);
SCStr * __stdcall FUN_10184940(int *param_1);
undefined4 FUN_10184ab0(int *param_1);
undefined4 FUN_10184b50(int *param_1);
undefined4 FUN_10184bf0(int *param_1);
SCStr * __stdcall FUN_10184da0(int *param_1);
SCStr * __stdcall FUN_10184f10(int *param_1);
undefined4 FUN_101851a0(int *param_1);
undefined4 FUN_10185250(int *param_1);
undefined4 FUN_101853e0(int *param_1);
void __stdcall FUN_10185720(int *param_1,ushort *param_2);
undefined4 FUN_10185840(int *param_1);
undefined4 FUN_101858e0(void);
undefined4 __stdcall FUN_10185a30(ushort *param_1);
undefined4 FUN_10185ae0(int *param_1);
undefined4 FUN_10185b80(void);
undefined4 FUN_10185c20(int *param_1);
undefined4 FUN_10185cc0(int *param_1,undefined4 param_2);
undefined4 FUN_10185e70(int *param_1);
undefined4 FUN_101864f0(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_101866b0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4);
undefined4 FUN_101867d0(int *param_1,undefined4 param_2);
undefined4 FUN_10186870(int *param_1);
undefined4 FUN_10186910(int *param_1);
undefined4 __stdcall FUN_10186d80(int *param_1,ushort *param_2);
undefined4 FUN_10186f50(int *param_1);
undefined4 FUN_10186ff0(int *param_1);
void __stdcall FUN_10187090(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_10187120(int *param_1,ushort *param_2);
void __stdcall FUN_101871a0(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_101875b0(int *param_1,ushort *param_2);
void __stdcall FUN_10187640(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_101876d0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10187990(int *param_1,ushort *param_2);
void __stdcall FUN_10187a30(int *param_1,undefined4 param_2,ushort *param_3);
undefined4 FUN_10187c50(int *param_1);
undefined4 FUN_10187fd0(int *param_1);
undefined4 FUN_10188250(int *param_1);
void __stdcall FUN_10188630(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_10188a40(int *param_1,ushort *param_2);
undefined4 FUN_10188ae0(int *param_1);
undefined4
__stdcall FUN_10188d80(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10,
            undefined4 param_11,int param_12,int param_13,ushort *param_14);
undefined4 __stdcall FUN_10188f10(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4);
undefined4 __stdcall FUN_10189040(int *param_1,ushort *param_2,undefined4 param_3);
undefined4
__stdcall FUN_10189170(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10,
            undefined4 param_11,int param_12,int param_13);
undefined4
__stdcall FUN_101892f0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10,
            undefined4 param_11,int param_12);
undefined4
__stdcall FUN_10189460(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10,
            undefined4 param_11);
undefined4
__stdcall FUN_101895c0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10);
undefined4
__stdcall FUN_10189720(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9);
undefined4
__stdcall FUN_10189870(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8);
undefined4
__stdcall FUN_101899c0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7);
undefined4
__stdcall FUN_10189b00(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6);
undefined4
__stdcall FUN_10189c40(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5);
undefined4 __stdcall FUN_10189d80(int *param_1,ushort *param_2);
undefined4 FUN_10189e30(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_10189ed0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10189f90(int *param_1,ushort *param_2);
undefined4 FUN_1018a050(int *param_1);
undefined4 FUN_1018a0f0(int *param_1);
undefined4 FUN_1018a190(int *param_1);
undefined4 FUN_1018a250(void);
undefined4 FUN_1018a2f0(int *param_1,undefined4 param_2);
undefined4 FUN_1018a390(int *param_1,undefined4 param_2);
undefined4 FUN_1018a700(int *param_1);
undefined4 FUN_1018ab80(int *param_1);
undefined4 FUN_1018acc0(int *param_1);
undefined4 __stdcall FUN_1018ad60(ushort *param_1);
undefined4 FUN_1018b100(int *param_1);
undefined4 FUN_1018b1f0(int *param_1);
undefined4 FUN_1018b740(int *param_1);
undefined4 FUN_1018bb00(void);
undefined1 __stdcall FUN_1018bba0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_1018bca0(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_1018bd50(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_1018be30(int *param_1,ushort *param_2);
undefined4 FUN_1018c0a0(int *param_1);
undefined4 FUN_1018c150(int *param_1);
undefined4 FUN_1018c210(int *param_1);
undefined4 FUN_1018c2c0(int *param_1);
undefined4 FUN_1018c5b0(int *param_1);
void __stdcall FUN_1018d0c0(int *param_1,ushort *param_2);
undefined4 FUN_1018d230(int *param_1);
undefined4 FUN_1018d2d0(int *param_1);
undefined4 FUN_1018d3f0(int *param_1);
undefined4 FUN_1018d590(int *param_1);
undefined4 FUN_1018dc00(int *param_1);
undefined4 FUN_1018dca0(int *param_1);
void __stdcall FUN_1018eea0(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_1018f1c0(int *param_1,ushort *param_2);
void __stdcall FUN_1018f5a0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
void __stdcall FUN_1018f660(int *param_1,ushort *param_2,ushort *param_3);
void __stdcall FUN_1018f720(int *param_1,ushort *param_2);
void __stdcall FUN_1018f7a0(int *param_1,ushort *param_2);
void __stdcall FUN_1018f8f0(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 __stdcall FUN_1018f9b0(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 __stdcall FUN_1018fa60(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 __stdcall FUN_1018fb10(int *param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_1018fc00(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 __stdcall FUN_1018fcb0(int *param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_1018fdb0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4);
undefined4 __stdcall FUN_1018fea0(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_1018ff60(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 FUN_10190020(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_101900c0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10190160(int *param_1);
undefined4 FUN_10190200(int *param_1,undefined4 param_2);
undefined4 __stdcall FUN_101902a0(int *param_1,ushort *param_2);
undefined4 FUN_10190350(int *param_1);
undefined4 FUN_101903f0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 __stdcall FUN_10190490(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10190540(int *param_1,ushort *param_2,undefined4 param_3);
undefined4 __stdcall FUN_101905f0(int *param_1,ushort *param_2);
undefined4 FUN_101906a0(int *param_1);
undefined4 FUN_10190900(int *param_1);
undefined1 __stdcall FUN_10190a20(int *param_1,ushort *param_2);
undefined4 FUN_10190ab0(int *param_1);
undefined4 __stdcall FUN_10190c80(int *param_1,ushort *param_2);
undefined4 FUN_10190d10(int *param_1);
undefined4 FUN_10191180(int *param_1);
undefined4 FUN_10191220(int *param_1);
undefined4 FUN_10191510(int *param_1,undefined4 param_2);
undefined4 FUN_101915b0(int *param_1);
undefined4 FUN_10191740(int *param_1);
void __stdcall FUN_101919f0(int *param_1,ushort *param_2);
void __stdcall FUN_10191b10(int *param_1,ushort *param_2,int param_3);
void __stdcall FUN_10191bd0(int *param_1,ushort *param_2,undefined4 param_3);
void __stdcall FUN_10191c80(int *param_1,ushort *param_2,ushort *param_3);
undefined4 FUN_10191fe0(int *param_1);
undefined4 __stdcall FUN_10192080(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4);
undefined4
__stdcall FUN_10192140(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5);
undefined4 __stdcall FUN_10192200(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4);
undefined4 __stdcall FUN_101922c0(int *param_1,ushort *param_2);
undefined4 FUN_101924e0(int *param_1);
undefined4 FUN_10192580(int *param_1);
undefined4 __stdcall FUN_10192670(int *param_1,ushort *param_2);
undefined4 __stdcall FUN_10192720(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10192890(int *param_1);
undefined4 FUN_10192930(int *param_1);
undefined4 __stdcall FUN_101929d0(int *param_1,ushort *param_2);
undefined4 FUN_10192a90(int *param_1);
undefined4 FUN_10192b30(int *param_1);
undefined4 FUN_10192bd0(int *param_1);
undefined4 FUN_10192c70(int *param_1);
undefined4 FUN_10192e10(int *param_1);
undefined4 FUN_10192eb0(int *param_1);
void __stdcall FUN_10194400(undefined4 *param_1,ushort *param_2,undefined4 param_3,ushort *param_4);
undefined4 __stdcall FUN_10194510(int *param_1,ushort *param_2);
undefined1 __stdcall FUN_101945e0(undefined4 *param_1,ushort *param_2);
undefined4 FUN_10194690(int *param_1,undefined4 param_2);
void __stdcall FUN_10195a20(undefined4 *param_1,ushort *param_2,undefined4 param_3,ushort *param_4);
void __stdcall FUN_10195c50(SCLibParameters *param_1,ushort *param_2);
undefined4 FUN_10195cd0(SCLibParameters *param_1);
undefined4 FUN_10195d70(SCLibParameters *param_1);
undefined4 FUN_10195e10(SCLibParameters *param_1);
bool __stdcall FUN_10195eb0(SCLibParameters *param_1,ushort *param_2);
void __stdcall FUN_10197e00(SCLibParameters *param_1,ushort *param_2);
undefined4
__stdcall FUN_101985e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,ushort *param_8);
void FUN_101986e0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14);
void __stdcall FUN_10199380(undefined4 param_1,ushort *param_2,ushort *param_3);
undefined4 __stdcall FUN_1019b6c0(ushort *param_1);
undefined4 __fastcall FUN_1019b770(int *param_1);
undefined4 __fastcall FUN_1019b810(int *param_1);
undefined4 __fastcall FUN_1019b8b0(int *param_1);
undefined4 __stdcall FUN_1019b950(ushort *param_1,int param_2);
undefined4 __fastcall FUN_1019ba20(int *param_1);
undefined4 __fastcall FUN_1019bac0(int *param_1);
undefined4 FUN_1019bb60(int *param_1);
undefined4 __fastcall FUN_1019bc00(int *param_1);
undefined4 __fastcall FUN_1019bca0(int *param_1);
undefined4 __fastcall FUN_1019bd40(int *param_1);
undefined4 __fastcall FUN_1019bde0(int *param_1);
undefined4 __fastcall FUN_1019be80(int *param_1);
undefined4 FUN_1019bf20(undefined4 param_1,undefined4 param_2,int *param_3);
undefined4 __stdcall FUN_1019c060(ushort *param_1);
undefined4 FUN_1019c1c0(void);
undefined4 __stdcall FUN_1019c260(ushort *param_1);
void __stdcall FUN_1019ea50(int param_1);
void __stdcall FUN_1019efc0(int param_1);
undefined4 __fastcall FUN_1019f260(int *param_1);
undefined4 __fastcall FUN_1019f300(int *param_1);
undefined4 __fastcall FUN_1019f590(int *param_1);
SCStr * __stdcall FUN_1019fc60(ushort *param_1,undefined4 param_2);
undefined4 * FUN_1019fe90(void);
undefined4 * FUN_1019ff80(void);
undefined4 * FUN_101a02d0(void);
undefined4 * FUN_101a0400(void);
undefined4 * FUN_101a0710(void);
undefined4 * FUN_101a0810(void);
undefined4 * FUN_101a0b50(void);
undefined4 * FUN_101a0ff0(void);
undefined4 * FUN_101a1740(void);
undefined4 * FUN_101a1c00(void);
void FUN_101a2210(int *param_1,int *param_2);
int * FUN_101a2690(int *param_1,int *param_2,int *param_3,undefined4 param_4);
int * FUN_101a2750(int *param_1,int *param_2,int *param_3,undefined4 param_4);
void FUN_101a28a0(undefined4 param_1,int *param_2);
void __fastcall FUN_101a2bf0(int *param_1);
int __stdcall FUN_101a3180(undefined4 *param_1);
void __fastcall FUN_101a33f0(int *param_1);
void * FUN_101a37d0(uint param_1);
int __fastcall FUN_101a4810(undefined4 *param_1);
SCStr * __fastcall FUN_101a6400(SCStr *param_1);
SCStr * __fastcall FUN_101a6520(SCStr *param_1);
SCStr * __fastcall FUN_101a65c0(SCStr *param_1);
void FUN_101a6730(char *param_1,char *param_2);
int FUN_101a6840(char *param_1,char *param_2);
void FUN_101a7d50(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4);
void FUN_101a7f30(int param_1,int param_2,uint param_3,undefined4 *param_4,code *param_5);
void FUN_101a8030(int param_1,int param_2,uint param_3,int *param_4);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_101a91a0(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_101a9210(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_101a99b0(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_101a9a20(int *param_1);
void * FUN_101a9c10(uint param_1);
void * FUN_101a9c80(uint param_1);
void FUN_101a9e20(undefined4 *param_1);
void __fastcall FUN_101aa470(int param_1);
void FUN_101ab800(undefined4 param_1,int param_2);
void FUN_101aba20(undefined4 param_1,SCStr *param_2,SCStr *param_3);
void FUN_101abde0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void __fastcall FUN_101ae880(int *param_1);
void __fastcall FUN_101ae960(int param_1);
void __fastcall FUN_101ae9e0(int *param_1);
void __fastcall FUN_101aea50(int param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_101aecb0(int *param_1);
void __fastcall FUN_101af0b0(int *param_1);
void __fastcall FUN_101b2580(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_101b2610(int *param_1);
SCStr * FUN_101b4dd0(SCStr *param_1,undefined4 param_2);
SCStr * FUN_101b4e80(SCStr *param_1,undefined4 param_2);
SCStr * FUN_101b52e0(SCStr *param_1,undefined4 param_2);
SCStr * FUN_101b5390(SCStr *param_1,undefined4 param_2);
void __fastcall FUN_101b5580(int param_1);
void __fastcall FUN_101b7ef0(int param_1);
void __fastcall FUN_101b8290(undefined4 *param_1);
undefined4 * FUN_101b8640(undefined4 *param_1,int param_2,int param_3,int param_4);
bool __stdcall FUN_101b8a00(char *param_1,char *param_2);
void __fastcall FUN_101b91d0(undefined4 *param_1);
void __fastcall FUN_101b9ae0(int *param_1);
void __fastcall FUN_101ba1b0(int *param_1);
void __fastcall FUN_101ba300(int *param_1);
void __fastcall FUN_101baa90(int param_1);
void __fastcall FUN_101badc0(int param_1);
undefined4 * FUN_101bae20(undefined4 *param_1,undefined4 param_2);
SCStr * FUN_101bb1c0(SCStr *param_1);
undefined4 FUN_101bb3b0(char *param_1);
char * FUN_101bb4f0(char *param_1,int *param_2);
char * FUN_101bb5e0(char *param_1);
char * FUN_101bb690(char *param_1,int param_2);
undefined1 * __fastcall FUN_101bb8c0(int param_1);
void __fastcall FUN_101bba70(int param_1);
void __fastcall FUN_101bbb40(int param_1);
void FUN_101bcc60(SCStr *param_1,SCStr *param_2,SCStr *param_3,code *param_4);
void __fastcall FUN_101be130(int param_1);
bool FUN_101be520(undefined1 *param_1,undefined1 *param_2);
undefined1 __fastcall FUN_101be5d0(int *param_1);
undefined4 * FUN_101be780(undefined4 *param_1);
undefined4 * FUN_101be800(undefined4 *param_1);
uint __fastcall FUN_101bead0(int *param_1);
int * FUN_101bf1f0(int *param_1,int *param_2,undefined4 param_3);
undefined1 FUN_101bf480(undefined4 param_1,int param_2);
SCStr * FUN_101c0230(SCStr *param_1,undefined4 param_2);
SCStr * FUN_101c0870(SCStr *param_1);
SCStr * FUN_101c0dd0(SCStr *param_1,undefined4 param_2);
SCStr * FUN_101c15b0(SCStr *param_1,undefined4 param_2);
SCStr * FUN_101c1c20(SCStr *param_1);
SCStr * FUN_101c1e10(SCStr *param_1);
SCStr * FUN_101c21e0(SCStr *param_1,int param_2);
bool FUN_101c2380(void);
bool FUN_101c24d0(void);
undefined1 FUN_101c2620(void);
bool FUN_101c27a0(void);
bool FUN_101c28f0(void);
undefined1 FUN_101c2a40(void);
undefined1 FUN_101c2bc0(void);
SCStr * FUN_101c33b0(SCStr *param_1,SCStr *param_2);
void __stdcall FUN_101c3fc0(undefined4 *param_1);
int * FUN_101c4140(int *param_1,int *param_2);
// Reference entry 10155a50; body size 117 bytes.
#line 1 "ENTRY_10155a50"

undefined4 FUN_10155a50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xa0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10155af0; body size 117 bytes.
#line 1 "ENTRY_10155af0"

undefined4 FUN_10155af0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xa8))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10155c80; body size 117 bytes.
#line 1 "ENTRY_10155c80"

undefined4 FUN_10155c80(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe8))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10155d50; body size 117 bytes.
#line 1 "ENTRY_10155d50"

undefined4 FUN_10155d50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xb0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10155df0; body size 120 bytes.
#line 1 "ENTRY_10155df0"

undefined4 FUN_10155df0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xa4))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10155e90; body size 120 bytes.
#line 1 "ENTRY_10155e90"

undefined4 FUN_10155e90(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x98))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10155f40; body size 114 bytes.
#line 1 "ENTRY_10155f40"

undefined4 FUN_10155f40(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x68))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10155fe0; body size 117 bytes.
#line 1 "ENTRY_10155fe0"

undefined4 FUN_10155fe0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x9c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101560b0; body size 135 bytes.
#line 1 "ENTRY_101560b0"

undefined4 __stdcall FUN_101560b0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xec))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101563d0; body size 263 bytes.
#line 1 "ENTRY_101563d0"

SCStr * __stdcall FUN_101563d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x2c))(local_24,param_2,param_3,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10156520; body size 266 bytes.
#line 1 "ENTRY_10156520"

SCStr * __stdcall FUN_10156520(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x28))(local_24,param_2,param_3,param_4,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10156680; body size 120 bytes.
#line 1 "ENTRY_10156680"

undefined4 FUN_10156680(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe0))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10156940; body size 117 bytes.
#line 1 "ENTRY_10156940"

undefined4 FUN_10156940(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xb4))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101569e0; body size 263 bytes.
#line 1 "ENTRY_101569e0"

SCStr * __stdcall FUN_101569e0(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0xe4))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10156b30; body size 117 bytes.
#line 1 "ENTRY_10156b30"

undefined4 FUN_10156b30(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xac))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10156dd0; body size 100 bytes.
#line 1 "ENTRY_10156dd0"

void __stdcall FUN_10156dd0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 200))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10156f10; body size 263 bytes.
#line 1 "ENTRY_10156f10"

SCStr * __stdcall FUN_10156f10(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x2c))(local_24,param_2,param_3,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10157940; body size 114 bytes.
#line 1 "ENTRY_10157940"

undefined4 FUN_10157940(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101579e0; body size 260 bytes.
#line 1 "ENTRY_101579e0"

SCStr * __stdcall FUN_101579e0(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x90))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10157e40; body size 260 bytes.
#line 1 "ENTRY_10157e40"

SCStr * __stdcall FUN_10157e40(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x68))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10157f90; body size 263 bytes.
#line 1 "ENTRY_10157f90"

SCStr * __stdcall FUN_10157f90(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 100))(local_24,param_2,param_3,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 101580e0; body size 117 bytes.
#line 1 "ENTRY_101580e0"

undefined4 FUN_101580e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x94))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10158370; body size 117 bytes.
#line 1 "ENTRY_10158370"

undefined4 FUN_10158370(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xac))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10158430; body size 117 bytes.
#line 1 "ENTRY_10158430"

undefined4 FUN_10158430(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xc0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101584d0; body size 117 bytes.
#line 1 "ENTRY_101584d0"

undefined4 FUN_101584d0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10158570; body size 114 bytes.
#line 1 "ENTRY_10158570"

undefined4 FUN_10158570(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10158af0; body size 263 bytes.
#line 1 "ENTRY_10158af0"

SCStr * __stdcall FUN_10158af0(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0xb0))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10158f50; body size 117 bytes.
#line 1 "ENTRY_10158f50"

undefined4 FUN_10158f50(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10158ff0; body size 117 bytes.
#line 1 "ENTRY_10158ff0"

undefined4 FUN_10158ff0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10159130; body size 114 bytes.
#line 1 "ENTRY_10159130"

undefined4 FUN_10159130(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101591d0; body size 114 bytes.
#line 1 "ENTRY_101591d0"

undefined4 FUN_101591d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10159270; body size 114 bytes.
#line 1 "ENTRY_10159270"

undefined4 FUN_10159270(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10159400; body size 257 bytes.
#line 1 "ENTRY_10159400"

SCStr * __stdcall FUN_10159400(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x30))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10159880; body size 100 bytes.
#line 1 "ENTRY_10159880"

void __stdcall FUN_10159880(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x58))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10159950; body size 114 bytes.
#line 1 "ENTRY_10159950"

undefined4 FUN_10159950(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10159ce0; body size 114 bytes.
#line 1 "ENTRY_10159ce0"

undefined4 FUN_10159ce0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10159fa0; body size 103 bytes.
#line 1 "ENTRY_10159fa0"

undefined4 __stdcall FUN_10159fa0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x54))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 1015a030; body size 103 bytes.
#line 1 "ENTRY_1015a030"

undefined4 __stdcall FUN_1015a030(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x18))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 1015a0c0; body size 147 bytes.
#line 1 "ENTRY_1015a0c0"

undefined4 __stdcall FUN_1015a0c0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x14))(&local_14,&param_2,uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 1015a180; body size 106 bytes.
#line 1 "ENTRY_1015a180"

undefined1 __stdcall FUN_1015a180(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x44))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1015a2e0; body size 117 bytes.
#line 1 "ENTRY_1015a2e0"

undefined4 FUN_1015a2e0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015a4b0; body size 117 bytes.
#line 1 "ENTRY_1015a4b0"

undefined4 FUN_1015a4b0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015a550; body size 111 bytes.
#line 1 "ENTRY_1015a550"

undefined4 FUN_1015a550(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102c1e60(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015a8d0; body size 97 bytes.
#line 1 "ENTRY_1015a8d0"

void __stdcall FUN_1015a8d0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1015a9b0; body size 132 bytes.
#line 1 "ENTRY_1015a9b0"

undefined4 __stdcall FUN_1015a9b0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x1c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015aa60; body size 114 bytes.
#line 1 "ENTRY_1015aa60"

undefined4 FUN_1015aa60(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015ab10; body size 105 bytes.
#line 1 "ENTRY_1015ab10"

void __stdcall FUN_1015ab10(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x14))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1015ae90; body size 114 bytes.
#line 1 "ENTRY_1015ae90"

undefined4 FUN_1015ae90(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x48))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015b1f0; body size 114 bytes.
#line 1 "ENTRY_1015b1f0"

undefined4 FUN_1015b1f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015b560; body size 114 bytes.
#line 1 "ENTRY_1015b560"

undefined1 __stdcall FUN_1015b560(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x30))());

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1015b800; body size 114 bytes.
#line 1 "ENTRY_1015b800"

undefined4 FUN_1015b800(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x48))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015b8a0; body size 114 bytes.
#line 1 "ENTRY_1015b8a0"

undefined4 FUN_1015b8a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x4c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015ba40; body size 114 bytes.
#line 1 "ENTRY_1015ba40"

undefined4 FUN_1015ba40(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015bc80; body size 111 bytes.
#line 1 "ENTRY_1015bc80"

undefined4 FUN_1015bc80(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1023ab10(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015c030; body size 111 bytes.
#line 1 "ENTRY_1015c030"

undefined4 FUN_1015c030(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1024a980(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015c0f0; body size 159 bytes.
#line 1 "ENTRY_1015c0f0"

void __stdcall FUN_1015c0f0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_18);
  (**(code **)(*param_1 + 0x1c))();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1015c270; body size 141 bytes.
#line 1 "ENTRY_1015c270"

void __stdcall FUN_1015c270(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x1c))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1015c4e0; body size 114 bytes.
#line 1 "ENTRY_1015c4e0"

undefined4 FUN_1015c4e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015c580; body size 117 bytes.
#line 1 "ENTRY_1015c580"

undefined4 FUN_1015c580(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015c620; body size 114 bytes.
#line 1 "ENTRY_1015c620"

undefined4 FUN_1015c620(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015c6c0; body size 114 bytes.
#line 1 "ENTRY_1015c6c0"

undefined4 FUN_1015c6c0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015c7a0; body size 105 bytes.
#line 1 "ENTRY_1015c7a0"

void __stdcall FUN_1015c7a0(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x40))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1015cad0; body size 111 bytes.
#line 1 "ENTRY_1015cad0"

undefined4 FUN_1015cad0(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10222090(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015cb70; body size 140 bytes.
#line 1 "ENTRY_1015cb70"

undefined4 __stdcall FUN_1015cb70(ushort *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10222100(&param_1));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015cdb0; body size 117 bytes.
#line 1 "ENTRY_1015cdb0"

undefined4 FUN_1015cdb0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015ce50; body size 117 bytes.
#line 1 "ENTRY_1015ce50"

undefined4 FUN_1015ce50(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015cef0; body size 117 bytes.
#line 1 "ENTRY_1015cef0"

undefined4 FUN_1015cef0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015cf90; body size 117 bytes.
#line 1 "ENTRY_1015cf90"

undefined4 FUN_1015cf90(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x68))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015d030; body size 114 bytes.
#line 1 "ENTRY_1015d030"

undefined4 FUN_1015d030(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x70))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015d0d0; body size 114 bytes.
#line 1 "ENTRY_1015d0d0"

undefined4 FUN_1015d0d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x6c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015d170; body size 114 bytes.
#line 1 "ENTRY_1015d170"

undefined4 FUN_1015d170(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015d210; body size 114 bytes.
#line 1 "ENTRY_1015d210"

undefined4 FUN_1015d210(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015d790; body size 117 bytes.
#line 1 "ENTRY_1015d790"

undefined4 FUN_1015d790(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015d850; body size 114 bytes.
#line 1 "ENTRY_1015d850"

undefined4 FUN_1015d850(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x60))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015d900; body size 114 bytes.
#line 1 "ENTRY_1015d900"

undefined4 FUN_1015d900(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015db10; body size 114 bytes.
#line 1 "ENTRY_1015db10"

undefined4 FUN_1015db10(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015dcc0; body size 114 bytes.
#line 1 "ENTRY_1015dcc0"

undefined4 FUN_1015dcc0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x6c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015dd60; body size 103 bytes.
#line 1 "ENTRY_1015dd60"

undefined4 __stdcall FUN_1015dd60(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x18))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 1015dea0; body size 100 bytes.
#line 1 "ENTRY_1015dea0"

void __stdcall FUN_1015dea0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x1c))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1015df90; body size 103 bytes.
#line 1 "ENTRY_1015df90"

void __stdcall FUN_1015df90(int *param_1,undefined4 param_2,undefined4 param_3,ushort *param_4)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_4);
  (**(code **)(*param_1 + 0x24))(param_2,param_3,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1015e060; body size 114 bytes.
#line 1 "ENTRY_1015e060"

undefined4 FUN_1015e060(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e100; body size 114 bytes.
#line 1 "ENTRY_1015e100"

undefined4 FUN_1015e100(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e1a0; body size 114 bytes.
#line 1 "ENTRY_1015e1a0"

undefined4 FUN_1015e1a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e240; body size 114 bytes.
#line 1 "ENTRY_1015e240"

undefined4 FUN_1015e240(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e2e0; body size 132 bytes.
#line 1 "ENTRY_1015e2e0"

undefined4 __stdcall FUN_1015e2e0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x14))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e390; body size 125 bytes.
#line 1 "ENTRY_1015e390"

undefined4 FUN_1015e390(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e440; body size 117 bytes.
#line 1 "ENTRY_1015e440"

undefined4 FUN_1015e440(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e4e0; body size 125 bytes.
#line 1 "ENTRY_1015e4e0"

undefined4 FUN_1015e4e0(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e590; body size 105 bytes.
#line 1 "ENTRY_1015e590"

void __stdcall FUN_1015e590(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x34))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1015e630; body size 114 bytes.
#line 1 "ENTRY_1015e630"

undefined4 FUN_1015e630(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e6d0; body size 114 bytes.
#line 1 "ENTRY_1015e6d0"

undefined4 FUN_1015e6d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e770; body size 135 bytes.
#line 1 "ENTRY_1015e770"

undefined4 __stdcall FUN_1015e770(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x28))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e820; body size 117 bytes.
#line 1 "ENTRY_1015e820"

undefined4 FUN_1015e820(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015e9d0; body size 114 bytes.
#line 1 "ENTRY_1015e9d0"

undefined4 FUN_1015e9d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015ea70; body size 114 bytes.
#line 1 "ENTRY_1015ea70"

undefined4 FUN_1015ea70(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015eb10; body size 117 bytes.
#line 1 "ENTRY_1015eb10"

undefined4 FUN_1015eb10(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015ecd0; body size 114 bytes.
#line 1 "ENTRY_1015ecd0"

undefined4 FUN_1015ecd0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015ed70; body size 114 bytes.
#line 1 "ENTRY_1015ed70"

undefined4 FUN_1015ed70(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015ee10; body size 120 bytes.
#line 1 "ENTRY_1015ee10"

undefined4 FUN_1015ee10(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xf0))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015eeb0; body size 120 bytes.
#line 1 "ENTRY_1015eeb0"

undefined4 FUN_1015eeb0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe4))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015ef50; body size 128 bytes.
#line 1 "ENTRY_1015ef50"

undefined4 FUN_1015ef50(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe8))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015f000; body size 120 bytes.
#line 1 "ENTRY_1015f000"

undefined4 FUN_1015f000(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xec))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015f0d0; body size 114 bytes.
#line 1 "ENTRY_1015f0d0"

undefined4 FUN_1015f0d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x74))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015f7e0; body size 114 bytes.
#line 1 "ENTRY_1015f7e0"

undefined4 FUN_1015f7e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015fb80; body size 117 bytes.
#line 1 "ENTRY_1015fb80"

undefined4 FUN_1015fb80(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x8c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1015fd10; body size 117 bytes.
#line 1 "ENTRY_1015fd10"

undefined4 FUN_1015fd10(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xb8))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10160190; body size 117 bytes.
#line 1 "ENTRY_10160190"

undefined4 FUN_10160190(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x80))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10160430; body size 117 bytes.
#line 1 "ENTRY_10160430"

undefined4 FUN_10160430(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x94))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10160bc0; body size 132 bytes.
#line 1 "ENTRY_10160bc0"

undefined4 __stdcall FUN_10160bc0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x14))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10160dc0; body size 132 bytes.
#line 1 "ENTRY_10160dc0"

undefined4 __stdcall FUN_10160dc0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x20))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10160e70; body size 257 bytes.
#line 1 "ENTRY_10160e70"

SCStr * __stdcall FUN_10160e70(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 101610b0; body size 132 bytes.
#line 1 "ENTRY_101610b0"

undefined4 __stdcall FUN_101610b0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x24))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101615e0; body size 114 bytes.
#line 1 "ENTRY_101615e0"

undefined4 FUN_101615e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101616a0; body size 132 bytes.
#line 1 "ENTRY_101616a0"

undefined4 __stdcall FUN_101616a0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x20))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101617a0; body size 260 bytes.
#line 1 "ENTRY_101617a0"

SCStr * __stdcall FUN_101617a0(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x18))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10161da0; body size 111 bytes.
#line 1 "ENTRY_10161da0"

undefined4 FUN_10161da0(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1024dc20(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10161fe0; body size 100 bytes.
#line 1 "ENTRY_10161fe0"

void __stdcall FUN_10161fe0(int *param_1,undefined4 param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x14))(param_2,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10162070; body size 106 bytes.
#line 1 "ENTRY_10162070"

undefined1 __stdcall FUN_10162070(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x18))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 101621f0; body size 114 bytes.
#line 1 "ENTRY_101621f0"

undefined4 FUN_101621f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10162290; body size 198 bytes.
#line 1 "ENTRY_10162290"

float10 __stdcall FUN_10162290(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5
                    )

{
 try {
  uint uVar1;
  float10 fVar2;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  fVar2 = (float10)((float10)(**(code **)(*param_1 + 0x28))(&local_18,&local_14,&param_2,param_5,uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (float10)((float10)(double)fVar2);

 } catch (...) { }
}


// Reference entry 10162390; body size 196 bytes.
#line 1 "ENTRY_10162390"

undefined4
__stdcall FUN_10162390(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x24))(&local_18,&local_14,&param_2,param_5,uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10162630; body size 114 bytes.
#line 1 "ENTRY_10162630"

undefined4 FUN_10162630(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10162920; body size 132 bytes.
#line 1 "ENTRY_10162920"

undefined4 __stdcall FUN_10162920(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x38))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101629d0; body size 97 bytes.
#line 1 "ENTRY_101629d0"

void __stdcall FUN_101629d0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10162a50; body size 153 bytes.
#line 1 "ENTRY_10162a50"

undefined1 __stdcall FUN_10162a50(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x1c))(&local_14,&param_2,param_4,uVar2));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10162b40; body size 150 bytes.
#line 1 "ENTRY_10162b40"

undefined1 __stdcall FUN_10162b40(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x40))(&local_14,&param_2,uVar2));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10162df0; body size 105 bytes.
#line 1 "ENTRY_10162df0"

void __stdcall FUN_10162df0(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x54))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10162e80; body size 105 bytes.
#line 1 "ENTRY_10162e80"

void __stdcall FUN_10162e80(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x4c))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10162f10; body size 187 bytes.
#line 1 "ENTRY_10162f10"

void __stdcall FUN_10162f10(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
 try {
  uint uVar1;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  (**(code **)(*param_1 + 0x3c))(&local_18,&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10163010; body size 114 bytes.
#line 1 "ENTRY_10163010"

undefined4 FUN_10163010(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101630b0; body size 151 bytes.
#line 1 "ENTRY_101630b0"

float10 __stdcall FUN_101630b0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  float10 fVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  fVar2 = (float10)((float10)(**(code **)(*param_1 + 0x24))(&local_14,&param_2,uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (float10)((float10)(double)fVar2);

 } catch (...) { }
}


// Reference entry 10163180; body size 147 bytes.
#line 1 "ENTRY_10163180"

undefined4 __stdcall FUN_10163180(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x20))(&local_14,&param_2,uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 101633a0; body size 114 bytes.
#line 1 "ENTRY_101633a0"

undefined4 FUN_101633a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10163540; body size 111 bytes.
#line 1 "ENTRY_10163540"

undefined4 FUN_10163540(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102518f0(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10163700; body size 132 bytes.
#line 1 "ENTRY_10163700"

undefined4 __stdcall FUN_10163700(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101637b0; body size 104 bytes.
#line 1 "ENTRY_101637b0"

undefined1 __stdcall FUN_101637b0(ushort *param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  uVar1 = (undefined1)(thunk_FUN_10251f30(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10163840; body size 106 bytes.
#line 1 "ENTRY_10163840"

undefined1 __stdcall FUN_10163840(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x18))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 101638d0; body size 106 bytes.
#line 1 "ENTRY_101638d0"

undefined1 __stdcall FUN_101638d0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x4c))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10163960; body size 106 bytes.
#line 1 "ENTRY_10163960"

undefined1 __stdcall FUN_10163960(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x40))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10163a10; body size 97 bytes.
#line 1 "ENTRY_10163a10"

void __stdcall FUN_10163a10(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x48))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10163a90; body size 108 bytes.
#line 1 "ENTRY_10163a90"

void __stdcall FUN_10163a90(int *param_1,ushort *param_2,int param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x44))(&local_14,param_3 != 0,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10163b20; body size 141 bytes.
#line 1 "ENTRY_10163b20"

void __stdcall FUN_10163b20(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x3c))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10163c30; body size 103 bytes.
#line 1 "ENTRY_10163c30"

undefined4 __stdcall FUN_10163c30(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x1c))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 101640b0; body size 106 bytes.
#line 1 "ENTRY_101640b0"

undefined1 __stdcall FUN_101640b0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x14))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10164170; body size 150 bytes.
#line 1 "ENTRY_10164170"

undefined1 __stdcall FUN_10164170(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x34))(&local_14,&param_2,uVar2));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10164370; body size 97 bytes.
#line 1 "ENTRY_10164370"

void __stdcall FUN_10164370(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10164460; body size 97 bytes.
#line 1 "ENTRY_10164460"

void __stdcall FUN_10164460(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10164510; body size 117 bytes.
#line 1 "ENTRY_10164510"

undefined4 FUN_10164510(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101645b0; body size 114 bytes.
#line 1 "ENTRY_101645b0"

undefined4 FUN_101645b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10164650; body size 114 bytes.
#line 1 "ENTRY_10164650"

undefined4 FUN_10164650(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101647f0; body size 114 bytes.
#line 1 "ENTRY_101647f0"

undefined4 FUN_101647f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10164c10; body size 117 bytes.
#line 1 "ENTRY_10164c10"

undefined4 FUN_10164c10(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xb4))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10164cb0; body size 117 bytes.
#line 1 "ENTRY_10164cb0"

undefined4 FUN_10164cb0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x118))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10164d50; body size 135 bytes.
#line 1 "ENTRY_10164d50"

undefined4 __stdcall FUN_10164d50(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xd8))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10164e00; body size 179 bytes.
#line 1 "ENTRY_10164e00"

undefined4 __stdcall FUN_10164e00(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xd4))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10164ef0; body size 117 bytes.
#line 1 "ENTRY_10164ef0"

undefined4 FUN_10164ef0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xb8))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10164f90; body size 117 bytes.
#line 1 "ENTRY_10164f90"

undefined4 FUN_10164f90(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xbc))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165030; body size 117 bytes.
#line 1 "ENTRY_10165030"

undefined4 FUN_10165030(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x84))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101650d0; body size 117 bytes.
#line 1 "ENTRY_101650d0"

undefined4 FUN_101650d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x9c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165170; body size 143 bytes.
#line 1 "ENTRY_10165170"

undefined4 __stdcall FUN_10165170(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x98))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165230; body size 117 bytes.
#line 1 "ENTRY_10165230"

undefined4 FUN_10165230(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x88))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101652d0; body size 117 bytes.
#line 1 "ENTRY_101652d0"

undefined4 FUN_101652d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xa0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165370; body size 135 bytes.
#line 1 "ENTRY_10165370"

undefined4 __stdcall FUN_10165370(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xac))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165420; body size 117 bytes.
#line 1 "ENTRY_10165420"

undefined4 FUN_10165420(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x11c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101654c0; body size 117 bytes.
#line 1 "ENTRY_101654c0"

undefined4 FUN_101654c0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x120))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165560; body size 117 bytes.
#line 1 "ENTRY_10165560"

undefined4 FUN_10165560(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xc0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165600; body size 117 bytes.
#line 1 "ENTRY_10165600"

undefined4 FUN_10165600(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x128))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101656a0; body size 117 bytes.
#line 1 "ENTRY_101656a0"

undefined4 FUN_101656a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 300))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165740; body size 117 bytes.
#line 1 "ENTRY_10165740"

undefined4 FUN_10165740(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x130))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101657e0; body size 135 bytes.
#line 1 "ENTRY_101657e0"

undefined4 __stdcall FUN_101657e0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x140))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165890; body size 135 bytes.
#line 1 "ENTRY_10165890"

undefined4 __stdcall FUN_10165890(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x13c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165940; body size 149 bytes.
#line 1 "ENTRY_10165940"

undefined4 __stdcall FUN_10165940(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  SCStr aSStack_28 [4];
  undefined4 uStack_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uStack_24 = (undefined4)(param_3);
  ((SCStr *)(aSStack_28))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x144))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165a00; body size 135 bytes.
#line 1 "ENTRY_10165a00"

undefined4 __stdcall FUN_10165a00(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x138))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165ab0; body size 135 bytes.
#line 1 "ENTRY_10165ab0"

undefined4 __stdcall FUN_10165ab0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x134))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165b60; body size 120 bytes.
#line 1 "ENTRY_10165b60"

undefined4 FUN_10165b60(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x108))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165c00; body size 128 bytes.
#line 1 "ENTRY_10165c00"

undefined4 FUN_10165c00(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x104))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165cb0; body size 117 bytes.
#line 1 "ENTRY_10165cb0"

undefined4 FUN_10165cb0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x114))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165d50; body size 117 bytes.
#line 1 "ENTRY_10165d50"

undefined4 FUN_10165d50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x110))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165df0; body size 117 bytes.
#line 1 "ENTRY_10165df0"

undefined4 FUN_10165df0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x8c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165e90; body size 190 bytes.
#line 1 "ENTRY_10165e90"

undefined4 __stdcall FUN_10165e90(int *param_1,ushort *param_2,ushort *param_3,int param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  param_3 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_3 + 1)) << 8 | (uint)(param_4 != 0)));
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xb0))(&param_3,&local_14,&param_2,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10165f90; body size 117 bytes.
#line 1 "ENTRY_10165f90"

undefined4 FUN_10165f90(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x10c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166030; body size 197 bytes.
#line 1 "ENTRY_10166030"

undefined4 __stdcall FUN_10166030(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  ((SCStr *)((SCStr *)&stack0xffffffd8))->op_ctor((SCStr *)&local_18);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x94))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166130; body size 128 bytes.
#line 1 "ENTRY_10166130"

undefined4 FUN_10166130(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xa4))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101661e0; body size 117 bytes.
#line 1 "ENTRY_101661e0"

undefined4 FUN_101661e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x90))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166280; body size 117 bytes.
#line 1 "ENTRY_10166280"

undefined4 FUN_10166280(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x124))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166340; body size 117 bytes.
#line 1 "ENTRY_10166340"

undefined4 FUN_10166340(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe8))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101663e0; body size 117 bytes.
#line 1 "ENTRY_101663e0"

undefined4 FUN_101663e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x148))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166480; body size 117 bytes.
#line 1 "ENTRY_10166480"

undefined4 FUN_10166480(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166520; body size 117 bytes.
#line 1 "ENTRY_10166520"

undefined4 FUN_10166520(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x154))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101665c0; body size 114 bytes.
#line 1 "ENTRY_101665c0"

undefined4 FUN_101665c0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x78))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166660; body size 117 bytes.
#line 1 "ENTRY_10166660"

undefined4 FUN_10166660(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xdc))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101667f0; body size 114 bytes.
#line 1 "ENTRY_101667f0"

undefined4 FUN_101667f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166890; body size 114 bytes.
#line 1 "ENTRY_10166890"

undefined4 FUN_10166890(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 100))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166a20; body size 117 bytes.
#line 1 "ENTRY_10166a20"

undefined4 FUN_10166a20(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166ac0; body size 117 bytes.
#line 1 "ENTRY_10166ac0"

undefined4 FUN_10166ac0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x48))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166b60; body size 114 bytes.
#line 1 "ENTRY_10166b60"

undefined4 FUN_10166b60(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166cf0; body size 117 bytes.
#line 1 "ENTRY_10166cf0"

undefined4 FUN_10166cf0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x80))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166e00; body size 125 bytes.
#line 1 "ENTRY_10166e00"

undefined4 FUN_10166e00(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x4c))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166eb0; body size 116 bytes.
#line 1 "ENTRY_10166eb0"

undefined4 FUN_10166eb0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x4c))(&param_1,0,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166f50; body size 114 bytes.
#line 1 "ENTRY_10166f50"

undefined4 FUN_10166f50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10166ff0; body size 117 bytes.
#line 1 "ENTRY_10166ff0"

undefined4 FUN_10166ff0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xd0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10167090; body size 117 bytes.
#line 1 "ENTRY_10167090"

undefined4 FUN_10167090(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x150))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10167220; body size 117 bytes.
#line 1 "ENTRY_10167220"

undefined4 FUN_10167220(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe4))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101672c0; body size 117 bytes.
#line 1 "ENTRY_101672c0"

undefined4 FUN_101672c0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10167500; body size 132 bytes.
#line 1 "ENTRY_10167500"

undefined4 __stdcall FUN_10167500(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x74))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101675b0; body size 135 bytes.
#line 1 "ENTRY_101675b0"

undefined4 __stdcall FUN_101675b0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xec))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10167660; body size 135 bytes.
#line 1 "ENTRY_10167660"

undefined4 __stdcall FUN_10167660(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xf0))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10167710; body size 132 bytes.
#line 1 "ENTRY_10167710"

undefined4 __stdcall FUN_10167710(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x70))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10167800; body size 151 bytes.
#line 1 "ENTRY_10167800"

void __stdcall FUN_10167800(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_18);
  (**(code **)(*param_1 + 0x5c))(&local_14);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10167930; body size 100 bytes.
#line 1 "ENTRY_10167930"

void __stdcall FUN_10167930(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0xf8))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10167ba0; body size 141 bytes.
#line 1 "ENTRY_10167ba0"

void __stdcall FUN_10167ba0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x20))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10168040; body size 141 bytes.
#line 1 "ENTRY_10168040"

void __stdcall FUN_10168040(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x24))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10168120; body size 141 bytes.
#line 1 "ENTRY_10168120"

void __stdcall FUN_10168120(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x24))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101685a0; body size 111 bytes.
#line 1 "ENTRY_101685a0"

undefined4 FUN_101685a0(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1025dc50(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10168680; body size 141 bytes.
#line 1 "ENTRY_10168680"

void __stdcall FUN_10168680(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x28))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101687a0; body size 269 bytes.
#line 1 "ENTRY_101687a0"

undefined4
__stdcall FUN_101687a0(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_1);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_1 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_1))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)
           thunk_FUN_1025b8b0(&param_2,&local_1c,&local_18,&local_14,&param_1,param_5,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10168cf0; body size 100 bytes.
#line 1 "ENTRY_10168cf0"

void __stdcall FUN_10168cf0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10168e50; body size 103 bytes.
#line 1 "ENTRY_10168e50"

void __stdcall FUN_10168e50(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x20))(&local_14,param_3,param_4,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10168f00; body size 111 bytes.
#line 1 "ENTRY_10168f00"

undefined4 FUN_10168f00(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1025c790(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10168fc0; body size 117 bytes.
#line 1 "ENTRY_10168fc0"

undefined4 FUN_10168fc0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10169060; body size 132 bytes.
#line 1 "ENTRY_10169060"

undefined4 __stdcall FUN_10169060(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x2c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10169200; body size 114 bytes.
#line 1 "ENTRY_10169200"

undefined4 FUN_10169200(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10169340; body size 260 bytes.
#line 1 "ENTRY_10169340"

SCStr * __stdcall FUN_10169340(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x28))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10169680; body size 117 bytes.
#line 1 "ENTRY_10169680"

undefined4 FUN_10169680(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10169990; body size 260 bytes.
#line 1 "ENTRY_10169990"

SCStr * __stdcall FUN_10169990(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 1016a410; body size 117 bytes.
#line 1 "ENTRY_1016a410"

undefined4 FUN_1016a410(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016a6b0; body size 257 bytes.
#line 1 "ENTRY_1016a6b0"

SCStr * __stdcall FUN_1016a6b0(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x30))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 1016a9e0; body size 257 bytes.
#line 1 "ENTRY_1016a9e0"

SCStr * __stdcall FUN_1016a9e0(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x34))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 1016ac20; body size 257 bytes.
#line 1 "ENTRY_1016ac20"

SCStr * __stdcall FUN_1016ac20(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x2c))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 1016b070; body size 114 bytes.
#line 1 "ENTRY_1016b070"

undefined4 FUN_1016b070(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016b110; body size 260 bytes.
#line 1 "ENTRY_1016b110"

SCStr * __stdcall FUN_1016b110(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x38))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 1016b440; body size 114 bytes.
#line 1 "ENTRY_1016b440"

undefined4 FUN_1016b440(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016b5d0; body size 135 bytes.
#line 1 "ENTRY_1016b5d0"

undefined4 __stdcall FUN_1016b5d0(ushort *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1026b9f0(&param_1,&local_14,param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016b680; body size 117 bytes.
#line 1 "ENTRY_1016b680"

undefined4 FUN_1016b680(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016bd50; body size 179 bytes.
#line 1 "ENTRY_1016bd50"

undefined4 __stdcall FUN_1016bd50(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xcc))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016be40; body size 182 bytes.
#line 1 "ENTRY_1016be40"

undefined4 __stdcall FUN_1016be40(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 200))(&param_3,&local_14,&param_2,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016bf30; body size 120 bytes.
#line 1 "ENTRY_1016bf30"

undefined4 FUN_1016bf30(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xc4))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016bfd0; body size 179 bytes.
#line 1 "ENTRY_1016bfd0"

undefined4 __stdcall FUN_1016bfd0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x9c))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c0c0; body size 117 bytes.
#line 1 "ENTRY_1016c0c0"

undefined4 FUN_1016c0c0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xbc))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c160; body size 225 bytes.
#line 1 "ENTRY_1016c160"

undefined4 __stdcall FUN_1016c160(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xf0))(&param_3,&local_18,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c2a0; body size 123 bytes.
#line 1 "ENTRY_1016c2a0"

undefined4 FUN_1016c2a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xf8))
                     (&param_1,param_2,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c340; body size 225 bytes.
#line 1 "ENTRY_1016c340"

undefined4 __stdcall FUN_1016c340(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xc0))(&param_3,&local_18,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c480; body size 117 bytes.
#line 1 "ENTRY_1016c480"

undefined4 FUN_1016c480(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe8))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c620; body size 114 bytes.
#line 1 "ENTRY_1016c620"

undefined4 FUN_1016c620(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c6e0; body size 117 bytes.
#line 1 "ENTRY_1016c6e0"

undefined4 FUN_1016c6e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x8c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c780; body size 117 bytes.
#line 1 "ENTRY_1016c780"

undefined4 FUN_1016c780(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x90))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c820; body size 114 bytes.
#line 1 "ENTRY_1016c820"

undefined4 FUN_1016c820(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 100))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c8c0; body size 117 bytes.
#line 1 "ENTRY_1016c8c0"

undefined4 FUN_1016c8c0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x98))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016c960; body size 117 bytes.
#line 1 "ENTRY_1016c960"

undefined4 FUN_1016c960(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xd0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016ca00; body size 132 bytes.
#line 1 "ENTRY_1016ca00"

undefined4 __stdcall FUN_1016ca00(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x1c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016cab0; body size 114 bytes.
#line 1 "ENTRY_1016cab0"

undefined4 FUN_1016cab0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x6c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016cc40; body size 117 bytes.
#line 1 "ENTRY_1016cc40"

undefined4 FUN_1016cc40(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x84))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016cce0; body size 117 bytes.
#line 1 "ENTRY_1016cce0"

undefined4 FUN_1016cce0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x94))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016cd80; body size 117 bytes.
#line 1 "ENTRY_1016cd80"

undefined4 FUN_1016cd80(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xb0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016ce20; body size 117 bytes.
#line 1 "ENTRY_1016ce20"

undefined4 FUN_1016ce20(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x88))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016d1b0; body size 114 bytes.
#line 1 "ENTRY_1016d1b0"

undefined4 FUN_1016d1b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016d430; body size 114 bytes.
#line 1 "ENTRY_1016d430"

undefined4 FUN_1016d430(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016d4d0; body size 117 bytes.
#line 1 "ENTRY_1016d4d0"

undefined4 FUN_1016d4d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xd8))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016d750; body size 114 bytes.
#line 1 "ENTRY_1016d750"

undefined4 FUN_1016d750(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x54))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016d7f0; body size 140 bytes.
#line 1 "ENTRY_1016d7f0"

undefined4 __stdcall FUN_1016d7f0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x58))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016d8b0; body size 114 bytes.
#line 1 "ENTRY_1016d8b0"

undefined4 FUN_1016d8b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016d950; body size 114 bytes.
#line 1 "ENTRY_1016d950"

undefined4 FUN_1016d950(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016d9f0; body size 114 bytes.
#line 1 "ENTRY_1016d9f0"

undefined4 FUN_1016d9f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x48))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016da90; body size 117 bytes.
#line 1 "ENTRY_1016da90"

undefined4 FUN_1016da90(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016db50; body size 114 bytes.
#line 1 "ENTRY_1016db50"

undefined4 FUN_1016db50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x5c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016dbf0; body size 114 bytes.
#line 1 "ENTRY_1016dbf0"

undefined4 FUN_1016dbf0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x60))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016dc90; body size 106 bytes.
#line 1 "ENTRY_1016dc90"

undefined1 __stdcall FUN_1016dc90(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x44))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1016dd20; body size 131 bytes.
#line 1 "ENTRY_1016dd20"

undefined4 __stdcall FUN_1016dd20(undefined4 *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)*param_1)(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016ddf0; body size 114 bytes.
#line 1 "ENTRY_1016ddf0"

undefined4 FUN_1016ddf0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016de90; body size 114 bytes.
#line 1 "ENTRY_1016de90"

undefined4 FUN_1016de90(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016df80; body size 97 bytes.
#line 1 "ENTRY_1016df80"

void __stdcall FUN_1016df80(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x74))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1016e2b0; body size 117 bytes.
#line 1 "ENTRY_1016e2b0"

undefined4 FUN_1016e2b0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016ea20; body size 114 bytes.
#line 1 "ENTRY_1016ea20"

undefined4 FUN_1016ea20(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016ef10; body size 111 bytes.
#line 1 "ENTRY_1016ef10"

undefined4 FUN_1016ef10(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1026dd40(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016f150; body size 132 bytes.
#line 1 "ENTRY_1016f150"

undefined4 __stdcall FUN_1016f150(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x1c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016f200; body size 135 bytes.
#line 1 "ENTRY_1016f200"

undefined4 __stdcall FUN_1016f200(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x18))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016f520; body size 140 bytes.
#line 1 "ENTRY_1016f520"

undefined4 __stdcall FUN_1016f520(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x1c))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016f5e0; body size 140 bytes.
#line 1 "ENTRY_1016f5e0"

undefined4 __stdcall FUN_1016f5e0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x18))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016f6a0; body size 114 bytes.
#line 1 "ENTRY_1016f6a0"

undefined4 FUN_1016f6a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016f870; body size 114 bytes.
#line 1 "ENTRY_1016f870"

undefined4 FUN_1016f870(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016f990; body size 108 bytes.
#line 1 "ENTRY_1016f990"

void __stdcall FUN_1016f990(int *param_1,undefined4 param_2,ushort *param_3)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x18))(param_2);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1016fa20; body size 114 bytes.
#line 1 "ENTRY_1016fa20"

undefined4 FUN_1016fa20(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016fae0; body size 111 bytes.
#line 1 "ENTRY_1016fae0"

undefined4 __stdcall FUN_1016fae0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  uVar1 = (undefined4)((**(code **)(*param_1 + 0x14))());

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016fb90; body size 140 bytes.
#line 1 "ENTRY_1016fb90"

undefined4 __stdcall FUN_1016fb90(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x18))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016fc50; body size 114 bytes.
#line 1 "ENTRY_1016fc50"

undefined4 FUN_1016fc50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016fcf0; body size 140 bytes.
#line 1 "ENTRY_1016fcf0"

undefined4 __stdcall FUN_1016fcf0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x14))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016fdb0; body size 140 bytes.
#line 1 "ENTRY_1016fdb0"

undefined4 __stdcall FUN_1016fdb0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x1c))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016fe80; body size 132 bytes.
#line 1 "ENTRY_1016fe80"

undefined4 __stdcall FUN_1016fe80(ushort *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10271030(&param_1,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1016ff30; body size 114 bytes.
#line 1 "ENTRY_1016ff30"

undefined4 FUN_1016ff30(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10170050; body size 117 bytes.
#line 1 "ENTRY_10170050"

undefined4 FUN_10170050(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101702a0; body size 114 bytes.
#line 1 "ENTRY_101702a0"

undefined4 FUN_101702a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101704a0; body size 111 bytes.
#line 1 "ENTRY_101704a0"

undefined4 FUN_101704a0(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102788f0(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10170540; body size 114 bytes.
#line 1 "ENTRY_10170540"

undefined4 FUN_10170540(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101705e0; body size 114 bytes.
#line 1 "ENTRY_101705e0"

undefined4 FUN_101705e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10170680; body size 117 bytes.
#line 1 "ENTRY_10170680"

undefined4 FUN_10170680(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10170a00; body size 97 bytes.
#line 1 "ENTRY_10170a00"

void __stdcall FUN_10170a00(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x28))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10170c90; body size 108 bytes.
#line 1 "ENTRY_10170c90"

void FUN_10170c90(int *param_1,ushort *param_2)

{
 try {
  undefined4 uStack_20;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&uStack_20))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x20))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10170f80; body size 211 bytes.
#line 1 "ENTRY_10170f80"

void __stdcall FUN_10170f80(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
 try {
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;




  ((SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_4);
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  ((SCStr *)((SCStr *)&stack0xffffffd8))->op_ctor((SCStr *)&local_18);
  ((SCStr *)((SCStr *)&stack0xffffffd4))->op_ctor((SCStr *)&local_1c);
  (**(code **)(*param_1 + 0x30))();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10171090; body size 172 bytes.
#line 1 "ENTRY_10171090"

void __stdcall FUN_10171090(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->int_allocRep("");
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  ((SCStr *)((SCStr *)&stack0xffffffd8))->op_ctor((SCStr *)&local_18);
  (**(code **)(*param_1 + 0x30))();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10171170; body size 131 bytes.
#line 1 "ENTRY_10171170"

void __stdcall FUN_10171170(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->int_allocRep("");
  ((SCStr *)((SCStr *)&stack0xffffffe0))->int_allocRep("");
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x30))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101712f0; body size 211 bytes.
#line 1 "ENTRY_101712f0"

void __stdcall FUN_101712f0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
 try {
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;




  ((SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_4);
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  ((SCStr *)((SCStr *)&stack0xffffffd8))->op_ctor((SCStr *)&local_18);
  ((SCStr *)((SCStr *)&stack0xffffffd4))->op_ctor((SCStr *)&local_1c);
  (**(code **)(*param_1 + 0x34))();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10171400; body size 172 bytes.
#line 1 "ENTRY_10171400"

void __stdcall FUN_10171400(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->int_allocRep("");
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  ((SCStr *)((SCStr *)&stack0xffffffd8))->op_ctor((SCStr *)&local_18);
  (**(code **)(*param_1 + 0x34))();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101714e0; body size 131 bytes.
#line 1 "ENTRY_101714e0"

void __stdcall FUN_101714e0(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->int_allocRep("");
  ((SCStr *)((SCStr *)&stack0xffffffe0))->int_allocRep("");
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x34))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10171670; body size 100 bytes.
#line 1 "ENTRY_10171670"

void __stdcall FUN_10171670(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10171710; body size 114 bytes.
#line 1 "ENTRY_10171710"

undefined4 FUN_10171710(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101718b0; body size 97 bytes.
#line 1 "ENTRY_101718b0"

void __stdcall FUN_101718b0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x1c))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10171940; body size 108 bytes.
#line 1 "ENTRY_10171940"

void __stdcall FUN_10171940(int *param_1,ushort *param_2,int param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,param_3 != 0,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101719e0; body size 117 bytes.
#line 1 "ENTRY_101719e0"

undefined4 FUN_101719e0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10171b70; body size 260 bytes.
#line 1 "ENTRY_10171b70"

SCStr * __stdcall FUN_10171b70(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10171e60; body size 117 bytes.
#line 1 "ENTRY_10171e60"

undefined4 FUN_10171e60(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10171f00; body size 114 bytes.
#line 1 "ENTRY_10171f00"

undefined4 FUN_10171f00(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101726c0; body size 260 bytes.
#line 1 "ENTRY_101726c0"

SCStr * __stdcall FUN_101726c0(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x6c))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10172e20; body size 117 bytes.
#line 1 "ENTRY_10172e20"

undefined4 FUN_10172e20(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x8c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10172ec0; body size 117 bytes.
#line 1 "ENTRY_10172ec0"

undefined4 FUN_10172ec0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x90))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10172f60; body size 260 bytes.
#line 1 "ENTRY_10172f60"

SCStr * __stdcall FUN_10172f60(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x70))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10173440; body size 135 bytes.
#line 1 "ENTRY_10173440"

undefined4 __stdcall FUN_10173440(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0xdc))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101736b0; body size 117 bytes.
#line 1 "ENTRY_101736b0"

undefined4 FUN_101736b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10173750; body size 260 bytes.
#line 1 "ENTRY_10173750"

SCStr * __stdcall FUN_10173750(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x40))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 101738a0; body size 257 bytes.
#line 1 "ENTRY_101738a0"

SCStr * __stdcall FUN_101738a0(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10173cd0; body size 114 bytes.
#line 1 "ENTRY_10173cd0"

undefined4 FUN_10173cd0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101743d0; body size 117 bytes.
#line 1 "ENTRY_101743d0"

undefined4 FUN_101743d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xbc))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174470; body size 114 bytes.
#line 1 "ENTRY_10174470"

undefined4 FUN_10174470(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174510; body size 114 bytes.
#line 1 "ENTRY_10174510"

undefined4 FUN_10174510(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101745b0; body size 125 bytes.
#line 1 "ENTRY_101745b0"

undefined4 FUN_101745b0(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174660; body size 114 bytes.
#line 1 "ENTRY_10174660"

undefined4 FUN_10174660(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174700; body size 114 bytes.
#line 1 "ENTRY_10174700"

undefined4 FUN_10174700(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101747a0; body size 114 bytes.
#line 1 "ENTRY_101747a0"

undefined4 FUN_101747a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x4c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174840; body size 117 bytes.
#line 1 "ENTRY_10174840"

undefined4 FUN_10174840(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x5c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101748e0; body size 114 bytes.
#line 1 "ENTRY_101748e0"

undefined4 FUN_101748e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x54))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174980; body size 117 bytes.
#line 1 "ENTRY_10174980"

undefined4 FUN_10174980(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174a20; body size 176 bytes.
#line 1 "ENTRY_10174a20"

undefined4 __stdcall FUN_10174a20(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x28))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174b10; body size 117 bytes.
#line 1 "ENTRY_10174b10"

undefined4 FUN_10174b10(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174bb0; body size 128 bytes.
#line 1 "ENTRY_10174bb0"

undefined4 FUN_10174bb0(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xac))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174c60; body size 120 bytes.
#line 1 "ENTRY_10174c60"

undefined4 FUN_10174c60(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x98))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174d00; body size 128 bytes.
#line 1 "ENTRY_10174d00"

undefined4 FUN_10174d00(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x8c))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174db0; body size 176 bytes.
#line 1 "ENTRY_10174db0"

undefined4 __stdcall FUN_10174db0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 100))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174ea0; body size 117 bytes.
#line 1 "ENTRY_10174ea0"

undefined4 FUN_10174ea0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x60))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10174f40; body size 114 bytes.
#line 1 "ENTRY_10174f40"

undefined4 FUN_10174f40(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10175900; body size 114 bytes.
#line 1 "ENTRY_10175900"

undefined4 FUN_10175900(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x7c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10175d60; body size 179 bytes.
#line 1 "ENTRY_10175d60"

int * __thiscall Recovered_Bulk::FUN_10175d60(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)(param_2);


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)0x0);
  local_14 = (int *)(param_1);
  if (param_2 != (undefined4 *)0x0) {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCINowPlaying");
    piVar3 = (int *)((int *)(**(code **)*puVar1)(&local_14,&param_2));
    piVar4 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4 *)((undefined4 *)0x0);

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(uVar2);
  }

  return (int *)(piVar4);

 } catch (...) { }
}


// Reference entry 10176100; body size 131 bytes.
#line 1 "ENTRY_10176100"

undefined4 __stdcall FUN_10176100(undefined4 *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)*param_1)(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10176690; body size 114 bytes.
#line 1 "ENTRY_10176690"

undefined4 FUN_10176690(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10176760; body size 114 bytes.
#line 1 "ENTRY_10176760"

undefined4 FUN_10176760(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10176830; body size 114 bytes.
#line 1 "ENTRY_10176830"

undefined4 FUN_10176830(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10176a10; body size 114 bytes.
#line 1 "ENTRY_10176a10"

undefined4 FUN_10176a10(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10176ae0; body size 143 bytes.
#line 1 "ENTRY_10176ae0"

undefined4 __stdcall FUN_10176ae0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&uStack_24))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x14))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10176ba0; body size 114 bytes.
#line 1 "ENTRY_10176ba0"

undefined4 FUN_10176ba0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101778b0; body size 114 bytes.
#line 1 "ENTRY_101778b0"

undefined4 FUN_101778b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10177950; body size 194 bytes.
#line 1 "ENTRY_10177950"

undefined4 __stdcall FUN_10177950(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  ((SCStr *)((SCStr *)&stack0xffffffd8))->op_ctor((SCStr *)&local_18);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x38))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10177ee0; body size 105 bytes.
#line 1 "ENTRY_10177ee0"

void __stdcall FUN_10177ee0(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x34))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10178460; body size 141 bytes.
#line 1 "ENTRY_10178460"

void __stdcall FUN_10178460(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x2c))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10178920; body size 114 bytes.
#line 1 "ENTRY_10178920"

undefined4 FUN_10178920(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 4))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10178a10; body size 144 bytes.
#line 1 "ENTRY_10178a10"

undefined4
__stdcall FUN_10178a10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ushort *param_5,
            undefined4 param_6)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_5);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_5,param_2,param_3,param_4,&local_14,param_6,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_5 != (ushort *)0x0) {
    (**(code **)(*(int *)param_5 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10178ad0; body size 146 bytes.
#line 1 "ENTRY_10178ad0"

undefined4
FUN_10178ad0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
            undefined4 param_6)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  bVar3 = (bool)(param_4 != (int *)0x0);
  param_4 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_4 + 1)) << 8 | (uint)(param_5 != 0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))
                     (&param_4,param_2,param_3,bVar3,param_4,param_6,
                      DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10178b90; body size 149 bytes.
#line 1 "ENTRY_10178b90"

undefined4
FUN_10178b90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            int param_6,undefined4 param_7)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  bVar3 = (bool)(param_5 != (int *)0x0);
  param_5 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_5 + 1)) << 8 | (uint)(param_6 != 0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))
                     (&param_5,param_2,param_3,param_4,bVar3,param_5,param_7,
                      DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10178c50; body size 117 bytes.
#line 1 "ENTRY_10178c50"

undefined4 FUN_10178c50(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10178cf0; body size 117 bytes.
#line 1 "ENTRY_10178cf0"

undefined4 FUN_10178cf0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10178d90; body size 123 bytes.
#line 1 "ENTRY_10178d90"

undefined4 FUN_10178d90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))
                     (&param_1,param_2,param_3,param_4,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10178e30; body size 114 bytes.
#line 1 "ENTRY_10178e30"

undefined4 FUN_10178e30(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10178ed0; body size 126 bytes.
#line 1 "ENTRY_10178ed0"

undefined4
FUN_10178ed0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))
                     (&param_1,param_2,param_3,param_4,param_5,DAT_12126b84 
                     ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10178f80; body size 144 bytes.
#line 1 "ENTRY_10178f80"

undefined4
__stdcall FUN_10178f80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ushort *param_5,
            undefined4 param_6)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_5);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_5,param_2,param_3,param_4,&local_14,param_6,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_5 != (ushort *)0x0) {
    (**(code **)(*(int *)param_5 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10179040; body size 176 bytes.
#line 1 "ENTRY_10179040"

undefined4 __stdcall FUN_10179040(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x3c))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10179230; body size 114 bytes.
#line 1 "ENTRY_10179230"

undefined4 FUN_10179230(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101792f0; body size 114 bytes.
#line 1 "ENTRY_101792f0"

undefined4 FUN_101792f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101794b0; body size 114 bytes.
#line 1 "ENTRY_101794b0"

undefined4 FUN_101794b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10179870; body size 103 bytes.
#line 1 "ENTRY_10179870"

undefined4 __stdcall FUN_10179870(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x24))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10179ae0; body size 103 bytes.
#line 1 "ENTRY_10179ae0"

undefined4 __stdcall FUN_10179ae0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x20))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10179c10; body size 106 bytes.
#line 1 "ENTRY_10179c10"

undefined1 __stdcall FUN_10179c10(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x74))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10179ca0; body size 117 bytes.
#line 1 "ENTRY_10179ca0"

undefined4 FUN_10179ca0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x94))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10179d40; body size 132 bytes.
#line 1 "ENTRY_10179d40"

undefined4 __stdcall FUN_10179d40(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x60))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10179ea0; body size 106 bytes.
#line 1 "ENTRY_10179ea0"

undefined1 __stdcall FUN_10179ea0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x3c))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10179f30; body size 116 bytes.
#line 1 "ENTRY_10179f30"

undefined1 __stdcall FUN_10179f30(int *param_1,ushort *param_2,undefined4 *param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  *param_3 = (undefined4)(0);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x38))(&local_14,param_3,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10179fd0; body size 107 bytes.
#line 1 "ENTRY_10179fd0"

float10 __stdcall FUN_10179fd0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  float10 fVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  fVar2 = (float10)((float10)(**(code **)(*param_1 + 0x30))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (float10)((float10)(double)fVar2);

 } catch (...) { }
}


// Reference entry 1017a060; body size 109 bytes.
#line 1 "ENTRY_1017a060"

undefined1 __stdcall FUN_1017a060(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))(&local_14,param_3,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1017a0f0; body size 103 bytes.
#line 1 "ENTRY_1017a0f0"

undefined4 __stdcall FUN_1017a0f0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x24))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 1017a180; body size 109 bytes.
#line 1 "ENTRY_1017a180"

undefined1 __stdcall FUN_1017a180(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x20))(&local_14,param_3,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1017a210; body size 117 bytes.
#line 1 "ENTRY_1017a210"

undefined4 FUN_1017a210(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x90))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017a2b0; body size 132 bytes.
#line 1 "ENTRY_1017a2b0"

undefined4 __stdcall FUN_1017a2b0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x6c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017a410; body size 132 bytes.
#line 1 "ENTRY_1017a410"

undefined4 __stdcall FUN_1017a410(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x48))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017a570; body size 106 bytes.
#line 1 "ENTRY_1017a570"

undefined4 __stdcall FUN_1017a570(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x80))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 1017a600; body size 135 bytes.
#line 1 "ENTRY_1017a600"

undefined4 __stdcall FUN_1017a600(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x84))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017a6b0; body size 132 bytes.
#line 1 "ENTRY_1017a6b0"

undefined4 __stdcall FUN_1017a6b0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x54))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017aa40; body size 106 bytes.
#line 1 "ENTRY_1017aa40"

undefined1 __stdcall FUN_1017aa40(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x78))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1017aad0; body size 100 bytes.
#line 1 "ENTRY_1017aad0"

void __stdcall FUN_1017aad0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 100))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017ab60; body size 108 bytes.
#line 1 "ENTRY_1017ab60"

void __stdcall FUN_1017ab60(int *param_1,ushort *param_2,int param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x40))(&local_14,param_3 != 0,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017abf0; body size 110 bytes.
#line 1 "ENTRY_1017abf0"

void FUN_1017abf0(int *param_1,ushort *param_2,undefined8 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x34))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017ac80; body size 100 bytes.
#line 1 "ENTRY_1017ac80"

void __stdcall FUN_1017ac80(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x28))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017ad10; body size 100 bytes.
#line 1 "ENTRY_1017ad10"

void __stdcall FUN_1017ad10(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x70))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017ada0; body size 100 bytes.
#line 1 "ENTRY_1017ada0"

void __stdcall FUN_1017ada0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x4c))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017ae30; body size 100 bytes.
#line 1 "ENTRY_1017ae30"

void __stdcall FUN_1017ae30(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x58))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017aec0; body size 141 bytes.
#line 1 "ENTRY_1017aec0"

void __stdcall FUN_1017aec0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x1c))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017af80; body size 117 bytes.
#line 1 "ENTRY_1017af80"

undefined4 FUN_1017af80(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x98))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017b030; body size 114 bytes.
#line 1 "ENTRY_1017b030"

undefined4 FUN_1017b030(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017b210; body size 114 bytes.
#line 1 "ENTRY_1017b210"

undefined4 FUN_1017b210(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017b2b0; body size 114 bytes.
#line 1 "ENTRY_1017b2b0"

undefined4 FUN_1017b2b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017b360; body size 114 bytes.
#line 1 "ENTRY_1017b360"

undefined4 FUN_1017b360(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017b5a0; body size 114 bytes.
#line 1 "ENTRY_1017b5a0"

undefined4 FUN_1017b5a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017b640; body size 132 bytes.
#line 1 "ENTRY_1017b640"

undefined4 __stdcall FUN_1017b640(ushort *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1029e2d0(&param_1,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017d060; body size 106 bytes.
#line 1 "ENTRY_1017d060"

undefined1 __stdcall FUN_1017d060(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x14))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1017d0f0; body size 107 bytes.
#line 1 "ENTRY_1017d0f0"

float10 __stdcall FUN_1017d0f0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  float10 fVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  fVar2 = (float10)((float10)(**(code **)(*param_1 + 0x2c))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (float10)((float10)(double)fVar2);

 } catch (...) { }
}


// Reference entry 1017d180; body size 103 bytes.
#line 1 "ENTRY_1017d180"

undefined4 __stdcall FUN_1017d180(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x20))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 1017d330; body size 108 bytes.
#line 1 "ENTRY_1017d330"

void __stdcall FUN_1017d330(int *param_1,ushort *param_2,int param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x1c))(&local_14,param_3 != 0,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017d3c0; body size 110 bytes.
#line 1 "ENTRY_1017d3c0"

void FUN_1017d3c0(int *param_1,ushort *param_2,undefined8 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x34))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017d450; body size 100 bytes.
#line 1 "ENTRY_1017d450"

void __stdcall FUN_1017d450(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x28))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017d4e0; body size 141 bytes.
#line 1 "ENTRY_1017d4e0"

void __stdcall FUN_1017d4e0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x40))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017d5a0; body size 97 bytes.
#line 1 "ENTRY_1017d5a0"

void __stdcall FUN_1017d5a0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x44))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017d620; body size 108 bytes.
#line 1 "ENTRY_1017d620"

void __stdcall FUN_1017d620(int *param_1,ushort *param_2,int param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x18))(&local_14,param_3 != 0,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017d6b0; body size 110 bytes.
#line 1 "ENTRY_1017d6b0"

void FUN_1017d6b0(int *param_1,ushort *param_2,undefined8 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x30))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017d740; body size 100 bytes.
#line 1 "ENTRY_1017d740"

void __stdcall FUN_1017d740(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x24))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017d7d0; body size 141 bytes.
#line 1 "ENTRY_1017d7d0"

void __stdcall FUN_1017d7d0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x3c))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017d8a0; body size 125 bytes.
#line 1 "ENTRY_1017d8a0"

undefined4 FUN_1017d8a0(int *param_1,int *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  param_2 = (int *)((int *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_2 != (int *)0x0)));
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_2,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017d9a0; body size 105 bytes.
#line 1 "ENTRY_1017d9a0"

void __stdcall FUN_1017d9a0(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x14))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017dbc0; body size 111 bytes.
#line 1 "ENTRY_1017dbc0"

undefined4 FUN_1017dbc0(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102beb10(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017dd70; body size 114 bytes.
#line 1 "ENTRY_1017dd70"

undefined4 FUN_1017dd70(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017df00; body size 114 bytes.
#line 1 "ENTRY_1017df00"

undefined4 FUN_1017df00(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017dfa0; body size 114 bytes.
#line 1 "ENTRY_1017dfa0"

undefined4 FUN_1017dfa0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017e0a0; body size 105 bytes.
#line 1 "ENTRY_1017e0a0"

void __stdcall FUN_1017e0a0(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x1c))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1017e140; body size 111 bytes.
#line 1 "ENTRY_1017e140"

undefined4 FUN_1017e140(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102c0620(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017e2d0; body size 114 bytes.
#line 1 "ENTRY_1017e2d0"

undefined4 FUN_1017e2d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017e370; body size 114 bytes.
#line 1 "ENTRY_1017e370"

undefined4 FUN_1017e370(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017e410; body size 114 bytes.
#line 1 "ENTRY_1017e410"

undefined4 FUN_1017e410(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017e850; body size 114 bytes.
#line 1 "ENTRY_1017e850"

undefined4 FUN_1017e850(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017f330; body size 114 bytes.
#line 1 "ENTRY_1017f330"

undefined4 FUN_1017f330(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017f7c0; body size 260 bytes.
#line 1 "ENTRY_1017f7c0"

SCStr * __stdcall FUN_1017f7c0(int *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x34))(local_24,param_2,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 1017f910; body size 114 bytes.
#line 1 "ENTRY_1017f910"

undefined4 FUN_1017f910(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1017fd60; body size 106 bytes.
#line 1 "ENTRY_1017fd60"

undefined1 __stdcall FUN_1017fd60(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x1c))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1017fdf0; body size 150 bytes.
#line 1 "ENTRY_1017fdf0"

undefined1 __stdcall FUN_1017fdf0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x14))(&local_14,&param_2,uVar2));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10180270; body size 105 bytes.
#line 1 "ENTRY_10180270"

void __stdcall FUN_10180270(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x30))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10180300; body size 105 bytes.
#line 1 "ENTRY_10180300"

void __stdcall FUN_10180300(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x20))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10180390; body size 105 bytes.
#line 1 "ENTRY_10180390"

void __stdcall FUN_10180390(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x18))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10180420; body size 105 bytes.
#line 1 "ENTRY_10180420"

void __stdcall FUN_10180420(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x28))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101805b0; body size 114 bytes.
#line 1 "ENTRY_101805b0"

undefined4 FUN_101805b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101807b0; body size 117 bytes.
#line 1 "ENTRY_101807b0"

undefined4 FUN_101807b0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10180850; body size 103 bytes.
#line 1 "ENTRY_10180850"

undefined4 __stdcall FUN_10180850(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x44))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 101808e0; body size 114 bytes.
#line 1 "ENTRY_101808e0"

undefined4 FUN_101808e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10180980; body size 106 bytes.
#line 1 "ENTRY_10180980"

undefined1 __stdcall FUN_10180980(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x24))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10180a10; body size 106 bytes.
#line 1 "ENTRY_10180a10"

undefined1 __stdcall FUN_10180a10(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x3c))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10180aa0; body size 106 bytes.
#line 1 "ENTRY_10180aa0"

undefined1 __stdcall FUN_10180aa0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x34))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10180b30; body size 106 bytes.
#line 1 "ENTRY_10180b30"

undefined1 __stdcall FUN_10180b30(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x40))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10180bc0; body size 132 bytes.
#line 1 "ENTRY_10180bc0"

undefined4 __stdcall FUN_10180bc0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x20))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10180c70; body size 106 bytes.
#line 1 "ENTRY_10180c70"

undefined1 __stdcall FUN_10180c70(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x30))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10180d40; body size 106 bytes.
#line 1 "ENTRY_10180d40"

undefined1 __stdcall FUN_10180d40(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x38))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10180e60; body size 114 bytes.
#line 1 "ENTRY_10180e60"

undefined4 FUN_10180e60(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10180f00; body size 114 bytes.
#line 1 "ENTRY_10180f00"

undefined4 FUN_10180f00(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x54))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10180fa0; body size 176 bytes.
#line 1 "ENTRY_10180fa0"

undefined4 __stdcall FUN_10180fa0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x60))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10181210; body size 222 bytes.
#line 1 "ENTRY_10181210"

undefined4 __stdcall FUN_10181210(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x68))(&param_3,&local_18,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10181330; body size 114 bytes.
#line 1 "ENTRY_10181330"

undefined4 FUN_10181330(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x6c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101813d0; body size 132 bytes.
#line 1 "ENTRY_101813d0"

undefined4 __stdcall FUN_101813d0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x74))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10181480; body size 132 bytes.
#line 1 "ENTRY_10181480"

undefined4 __stdcall FUN_10181480(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x70))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10181530; body size 114 bytes.
#line 1 "ENTRY_10181530"

undefined4 FUN_10181530(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x5c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10181df0; body size 114 bytes.
#line 1 "ENTRY_10181df0"

undefined4 FUN_10181df0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10181e90; body size 109 bytes.
#line 1 "ENTRY_10181e90"

undefined1 __stdcall FUN_10181e90(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x24))(&local_14,param_3,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10181f20; body size 100 bytes.
#line 1 "ENTRY_10181f20"

void __stdcall FUN_10181f20(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x1c))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10181fe0; body size 112 bytes.
#line 1 "ENTRY_10181fe0"

undefined1 __stdcall FUN_10181fe0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x14))(&local_14,param_3,param_4,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 101820e0; body size 103 bytes.
#line 1 "ENTRY_101820e0"

undefined4 __stdcall FUN_101820e0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x14))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10182170; body size 109 bytes.
#line 1 "ENTRY_10182170"

undefined1 __stdcall FUN_10182170(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x18))(&local_14,param_3,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10182240; body size 117 bytes.
#line 1 "ENTRY_10182240"

undefined4 FUN_10182240(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101822e0; body size 114 bytes.
#line 1 "ENTRY_101822e0"

undefined4 FUN_101822e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10182380; body size 132 bytes.
#line 1 "ENTRY_10182380"

undefined4 __stdcall FUN_10182380(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x20))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10182430; body size 132 bytes.
#line 1 "ENTRY_10182430"

undefined4 __stdcall FUN_10182430(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x28))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101824e0; body size 132 bytes.
#line 1 "ENTRY_101824e0"

undefined4 __stdcall FUN_101824e0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x2c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10182620; body size 176 bytes.
#line 1 "ENTRY_10182620"

undefined4 __stdcall FUN_10182620(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x58))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10182890; body size 222 bytes.
#line 1 "ENTRY_10182890"

undefined4 __stdcall FUN_10182890(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x60))(&param_3,&local_18,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101829b0; body size 176 bytes.
#line 1 "ENTRY_101829b0"

undefined4 __stdcall FUN_101829b0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x54))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10182aa0; body size 106 bytes.
#line 1 "ENTRY_10182aa0"

undefined1 __stdcall FUN_10182aa0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x50))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 101833a0; body size 114 bytes.
#line 1 "ENTRY_101833a0"

undefined4 FUN_101833a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10183530; body size 257 bytes.
#line 1 "ENTRY_10183530"

SCStr * __stdcall FUN_10183530(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x24))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10183960; body size 179 bytes.
#line 1 "ENTRY_10183960"

undefined4 __stdcall FUN_10183960(ushort *param_1,undefined4 param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  param_1 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_1))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_102d5690(&param_3,&local_14,param_2,&param_1,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10183b90; body size 114 bytes.
#line 1 "ENTRY_10183b90"

undefined4 FUN_10183b90(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x60))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10183d30; body size 114 bytes.
#line 1 "ENTRY_10183d30"

undefined4 FUN_10183d30(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10183ec0; body size 114 bytes.
#line 1 "ENTRY_10183ec0"

undefined4 FUN_10183ec0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10183f70; body size 104 bytes.
#line 1 "ENTRY_10183f70"

undefined1 __stdcall FUN_10183f70(ushort *param_1)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  uVar1 = (undefined1)(thunk_FUN_102d65b0(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10184070; body size 97 bytes.
#line 1 "ENTRY_10184070"

void __stdcall FUN_10184070(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x4c))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10184190; body size 97 bytes.
#line 1 "ENTRY_10184190"

void __stdcall FUN_10184190(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x48))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101842a0; body size 114 bytes.
#line 1 "ENTRY_101842a0"

undefined4 FUN_101842a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10184340; body size 117 bytes.
#line 1 "ENTRY_10184340"

undefined4 FUN_10184340(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101845d0; body size 114 bytes.
#line 1 "ENTRY_101845d0"

undefined4 FUN_101845d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10184670; body size 117 bytes.
#line 1 "ENTRY_10184670"

undefined4 FUN_10184670(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x8c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10184710; body size 117 bytes.
#line 1 "ENTRY_10184710"

undefined4 FUN_10184710(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x88))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101847b0; body size 117 bytes.
#line 1 "ENTRY_101847b0"

undefined4 FUN_101847b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x84))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10184940; body size 257 bytes.
#line 1 "ENTRY_10184940"

SCStr * __stdcall FUN_10184940(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x34))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10184ab0; body size 114 bytes.
#line 1 "ENTRY_10184ab0"

undefined4 FUN_10184ab0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x7c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10184b50; body size 117 bytes.
#line 1 "ENTRY_10184b50"

undefined4 FUN_10184b50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x80))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10184bf0; body size 114 bytes.
#line 1 "ENTRY_10184bf0"

undefined4 FUN_10184bf0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x44))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10184da0; body size 257 bytes.
#line 1 "ENTRY_10184da0"

SCStr * __stdcall FUN_10184da0(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x78))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 10184f10; body size 257 bytes.
#line 1 "ENTRY_10184f10"

SCStr * __stdcall FUN_10184f10(int *param_1)

{
 try {
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (undefined4)(local_14);
  ((SCStr *)((SCStr *)&local_1c))->int_addref();

  ((SCStr *)((SCStr *)&local_14))->int_release();


  pSVar2 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x74))(local_24,uVar1));
  if (pSVar2 != (SCStr *)&local_1c) {
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(*(undefined4 *)pSVar2);
    ((SCStr *)((SCStr *)&local_1c))->int_addref();
  }
  local_18 = (undefined4)(*(undefined4 *)(pSVar2 + 4));

  ((SCStr *)((SCStr *)local_24))->int_release();
  local_24[0] = (undefined4)(0);

  pSVar2 = (SCStr *)(operator_new(8));
  if (pSVar2 == (SCStr *)0x0) {
    pSVar2 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar2))->op_ctor((SCStr *)&local_1c);
    *(undefined4 *)(pSVar2 + 4) = local_18;
  }

  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (SCStr *)(pSVar2);

 } catch (...) { }
}


// Reference entry 101851a0; body size 114 bytes.
#line 1 "ENTRY_101851a0"

undefined4 FUN_101851a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x5c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10185250; body size 114 bytes.
#line 1 "ENTRY_10185250"

undefined4 FUN_10185250(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101853e0; body size 117 bytes.
#line 1 "ENTRY_101853e0"

undefined4 FUN_101853e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x98))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10185720; body size 100 bytes.
#line 1 "ENTRY_10185720"

void __stdcall FUN_10185720(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x9c))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10185840; body size 114 bytes.
#line 1 "ENTRY_10185840"

undefined4 FUN_10185840(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101858e0; body size 111 bytes.
#line 1 "ENTRY_101858e0"

undefined4 FUN_101858e0(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101ee330(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10185a30; body size 132 bytes.
#line 1 "ENTRY_10185a30"

undefined4 __stdcall FUN_10185a30(ushort *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101f0850(&param_1,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10185ae0; body size 114 bytes.
#line 1 "ENTRY_10185ae0"

undefined4 FUN_10185ae0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x48))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10185b80; body size 111 bytes.
#line 1 "ENTRY_10185b80"

undefined4 FUN_10185b80(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101f0dc0(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10185c20; body size 114 bytes.
#line 1 "ENTRY_10185c20"

undefined4 FUN_10185c20(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10185cc0; body size 117 bytes.
#line 1 "ENTRY_10185cc0"

undefined4 FUN_10185cc0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10185e70; body size 365 bytes.
#line 1 "ENTRY_10185e70"

undefined4 FUN_10185e70(int *param_1)

{
 try {
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int *piStack_2c;
  undefined1 local_24 [36];
  
  thunk_FUN_101e6a90();
  iVar2 = (int)((**(code **)(*param_1 + 0x14))(local_24));
  if ((SCStr *)(iVar2 + 4) != (SCStr *)&local_48) {
    ((SCStr *)((SCStr *)&local_48))->int_release();
    local_48 = (undefined4)(*(undefined4 *)(iVar2 + 4));
    ((SCStr *)((SCStr *)&local_48))->int_addref();
  }
  if ((SCStr *)(iVar2 + 8) != (SCStr *)&uStack_44) {
    ((SCStr *)((SCStr *)&uStack_44))->int_release();
    uStack_44 = (undefined4)(*(undefined4 *)(iVar2 + 8));
    ((SCStr *)((SCStr *)&uStack_44))->int_addref();
  }
  if ((SCStr *)(iVar2 + 0xc) != (SCStr *)&uStack_40) {
    ((SCStr *)((SCStr *)&uStack_40))->int_release();
    uStack_40 = (undefined4)(*(undefined4 *)(iVar2 + 0xc));
    ((SCStr *)((SCStr *)&uStack_40))->int_addref();
  }
  if ((SCStr *)(iVar2 + 0x10) != (SCStr *)&uStack_3c) {
    ((SCStr *)((SCStr *)&uStack_3c))->int_release();
    uStack_3c = (undefined4)(*(undefined4 *)(iVar2 + 0x10));
    ((SCStr *)((SCStr *)&uStack_3c))->int_addref();
  }
  if ((SCStr *)(iVar2 + 0x14) != (SCStr *)&uStack_38) {
    ((SCStr *)((SCStr *)&uStack_38))->int_release();
    uStack_38 = (undefined4)(*(undefined4 *)(iVar2 + 0x14));
    ((SCStr *)((SCStr *)&uStack_38))->int_addref();
  }
  if ((SCStr *)(iVar2 + 0x18) != (SCStr *)&uStack_34) {
    ((SCStr *)((SCStr *)&uStack_34))->int_release();
    uStack_34 = (undefined4)(*(undefined4 *)(iVar2 + 0x18));
    ((SCStr *)((SCStr *)&uStack_34))->int_addref();
  }
  piVar1 = (int *)(piStack_2c);
  iVar3 = (int)(*(int *)(iVar2 + 0x1c));
  if (iVar3 != iStack_30) {
    if (piStack_2c != (int *)0x0) {
      iStack_30 = (int)(0);
      piStack_2c = (int *)((int *)0x0);
      (**(code **)(*piVar1 + 8))();
      iVar3 = (int)(*(int *)(iVar2 + 0x1c));
    }
    piStack_2c = (int *)(*(int **)(iVar2 + 0x20));
    iStack_30 = (int)(iVar3);
    if (piStack_2c != (int *)0x0) {
      (**(code **)(*piStack_2c + 4))();
    }
  }
  thunk_FUN_10120220();
  pvVar4 = (void *)(operator_new(0x24));
  if (pvVar4 != (void *)0x0) {
    uVar5 = (undefined4)(thunk_FUN_101e6610(&stack0xffffffb4));
    thunk_FUN_10120220();
    return (undefined4)(uVar5);
  }
  thunk_FUN_10120220();
  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 101864f0; body size 117 bytes.
#line 1 "ENTRY_101864f0"

undefined4 FUN_101864f0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101866b0; body size 222 bytes.
#line 1 "ENTRY_101866b0"

undefined4 __stdcall FUN_101866b0(int *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x28))(&param_3,&local_18,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101867d0; body size 117 bytes.
#line 1 "ENTRY_101867d0"

undefined4 FUN_101867d0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10186870; body size 114 bytes.
#line 1 "ENTRY_10186870"

undefined4 FUN_10186870(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10186910; body size 114 bytes.
#line 1 "ENTRY_10186910"

undefined4 FUN_10186910(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10186d80; body size 132 bytes.
#line 1 "ENTRY_10186d80"

undefined4 __stdcall FUN_10186d80(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x14))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10186f50; body size 114 bytes.
#line 1 "ENTRY_10186f50"

undefined4 FUN_10186f50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10186ff0; body size 114 bytes.
#line 1 "ENTRY_10186ff0"

undefined4 FUN_10186ff0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10187090; body size 100 bytes.
#line 1 "ENTRY_10187090"

void __stdcall FUN_10187090(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x28))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10187120; body size 97 bytes.
#line 1 "ENTRY_10187120"

void __stdcall FUN_10187120(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x20))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101871a0; body size 141 bytes.
#line 1 "ENTRY_101871a0"

void __stdcall FUN_101871a0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x24))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101875b0; body size 97 bytes.
#line 1 "ENTRY_101875b0"

void __stdcall FUN_101875b0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10187640; body size 97 bytes.
#line 1 "ENTRY_10187640"

void __stdcall FUN_10187640(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x24))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101876d0; body size 114 bytes.
#line 1 "ENTRY_101876d0"

undefined1 __stdcall FUN_101876d0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))());

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10187990; body size 111 bytes.
#line 1 "ENTRY_10187990"

undefined4 __stdcall FUN_10187990(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  uVar1 = (undefined4)((**(code **)(*param_1 + 0x28))());

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10187a30; body size 100 bytes.
#line 1 "ENTRY_10187a30"

void __stdcall FUN_10187a30(int *param_1,undefined4 param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x20))(param_2,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10187c50; body size 114 bytes.
#line 1 "ENTRY_10187c50"

undefined4 FUN_10187c50(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10187fd0; body size 114 bytes.
#line 1 "ENTRY_10187fd0"

undefined4 FUN_10187fd0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10188250; body size 114 bytes.
#line 1 "ENTRY_10188250"

undefined4 FUN_10188250(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10188630; body size 97 bytes.
#line 1 "ENTRY_10188630"

void __stdcall FUN_10188630(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x1c))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10188a40; body size 106 bytes.
#line 1 "ENTRY_10188a40"

undefined1 __stdcall FUN_10188a40(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10188ae0; body size 114 bytes.
#line 1 "ENTRY_10188ae0"

undefined4 FUN_10188ae0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10188d80; body size 304 bytes.
#line 1 "ENTRY_10188d80"

undefined4
__stdcall FUN_10188d80(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10,
            undefined4 param_11,int param_12,int param_13,ushort *param_14)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_1c))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_7);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_8);
  param_9 = (int)(((uint)(*(unsigned short *)((char *)&param_9 + 1)) << 8 | (uint)(param_9 != 0)));
  param_2 = (ushort *)((ushort *)0x0);
  param_8 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_8 + 1)) << 8 | (uint)(param_10 != 0)));
  param_7 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_7 + 1)) << 8 | (uint)(param_12 != 0)));
  param_5 = (int)(((uint)(*(unsigned short *)((char *)&param_5 + 1)) << 8 | (uint)(param_13 != 0)));
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_14);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_1c,param_3,param_4,bVar3,param_6,&local_18,&local_14,param_9,param_8,
                     param_11,param_7,param_5,&param_2,uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();


  ((SCStr *)((SCStr *)&local_1c))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10188f10; body size 232 bytes.
#line 1 "ENTRY_10188f10"

undefined4 __stdcall FUN_10188f10(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  SCStr local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  ((SCStr *)(local_1c))->int_allocRep("");
  ((SCStr *)((SCStr *)&local_14))->int_allocRep((char *)0x0);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,param_4,0,0,&param_2,&local_14,0,1,0,0,0,local_1c,uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_1c))->int_release();

  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10189040; body size 231 bytes.
#line 1 "ENTRY_10189040"

undefined4 __stdcall FUN_10189040(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  SCStr local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  ((SCStr *)(local_1c))->int_allocRep("");
  ((SCStr *)((SCStr *)&local_14))->int_allocRep((char *)0x0);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,0,0,0,&param_2,&local_14,0,1,0,0,0,local_1c,uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)(local_1c))->int_release();

  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10189170; body size 292 bytes.
#line 1 "ENTRY_10189170"

undefined4
__stdcall FUN_10189170(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10,
            undefined4 param_11,int param_12,int param_13)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_7);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_8);
  bVar4 = (bool)(param_9 != 0);
  param_9 = (int)(((uint)(*(unsigned short *)((char *)&param_9 + 1)) << 8 | (uint)(param_10 != 0)));
  param_8 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_8 + 1)) << 8 | (uint)(param_12 != 0)));
  param_7 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_7 + 1)) << 8 | (uint)(param_13 != 0)));
  ((SCStr *)((SCStr *)&param_5))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,param_4,bVar3,param_6,&local_14,&param_2,bVar4,param_9,
                     param_11,param_8,param_7,&param_5,uVar1));

  ((SCStr *)((SCStr *)&param_5))->int_release();

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 101892f0; body size 283 bytes.
#line 1 "ENTRY_101892f0"

undefined4
__stdcall FUN_101892f0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10,
            undefined4 param_11,int param_12)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_7);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_8);
  param_9 = (int)(((uint)(*(unsigned short *)((char *)&param_9 + 1)) << 8 | (uint)(param_9 != 0)));
  param_8 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_8 + 1)) << 8 | (uint)(param_10 != 0)));
  param_7 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_7 + 1)) << 8 | (uint)(param_12 != 0)));
  ((SCStr *)((SCStr *)&param_5))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,param_4,bVar3,param_6,&local_14,&param_2,param_9,param_8,
                     param_11,param_7,0,&param_5,uVar1));

  ((SCStr *)((SCStr *)&param_5))->int_release();

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10189460; body size 274 bytes.
#line 1 "ENTRY_10189460"

undefined4
__stdcall FUN_10189460(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10,
            undefined4 param_11)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_7);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_8);
  param_8 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_8 + 1)) << 8 | (uint)(param_9 != 0)));
  param_7 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_7 + 1)) << 8 | (uint)(param_10 != 0)));
  ((SCStr *)((SCStr *)&param_5))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,param_4,bVar3,param_6,&local_14,&param_2,param_8,param_7,
                     param_11,0,0,&param_5,uVar1));

  ((SCStr *)((SCStr *)&param_5))->int_release();

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 101895c0; body size 273 bytes.
#line 1 "ENTRY_101895c0"

undefined4
__stdcall FUN_101895c0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9,int param_10)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_7);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_8);
  param_8 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_8 + 1)) << 8 | (uint)(param_9 != 0)));
  param_7 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_7 + 1)) << 8 | (uint)(param_10 != 0)));
  ((SCStr *)((SCStr *)&param_5))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,param_4,bVar3,param_6,&local_14,&param_2,param_8,param_7,0,0,
                     0,&param_5,uVar1));

  ((SCStr *)((SCStr *)&param_5))->int_release();

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10189720; body size 264 bytes.
#line 1 "ENTRY_10189720"

undefined4
__stdcall FUN_10189720(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8,int param_9)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_7);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_8);
  param_7 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_7 + 1)) << 8 | (uint)(param_9 != 0)));
  ((SCStr *)((SCStr *)&param_5))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,param_4,bVar3,param_6,&local_14,&param_2,param_7,1,0,0,0,
                     &param_5,uVar1));

  ((SCStr *)((SCStr *)&param_5))->int_release();

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10189870; body size 255 bytes.
#line 1 "ENTRY_10189870"

undefined4
__stdcall FUN_10189870(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7,ushort *param_8)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_7);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_8);
  ((SCStr *)((SCStr *)&param_5))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_18,param_3,param_4,bVar3,param_6,&local_14,&param_2,0,1,0,0,0,&param_5,
                     uVar1));

  ((SCStr *)((SCStr *)&param_5))->int_release();

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 101899c0; body size 247 bytes.
#line 1 "ENTRY_101899c0"

undefined4
__stdcall FUN_101899c0(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,ushort *param_7)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_7);
  ((SCStr *)((SCStr *)&param_7))->int_allocRep("");
  ((SCStr *)((SCStr *)&param_5))->int_allocRep((char *)0x0);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_14,param_3,param_4,bVar3,param_6,&param_2,&param_5,0,1,0,0,0,&param_7,
                     uVar1));

  ((SCStr *)((SCStr *)&param_5))->int_release();
  param_5 = (int)(0);

  ((SCStr *)((SCStr *)&param_7))->int_release();

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10189b00; body size 242 bytes.
#line 1 "ENTRY_10189b00"

undefined4
__stdcall FUN_10189b00(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);
  ((SCStr *)(local_18))->int_allocRep("");
  ((SCStr *)((SCStr *)&param_5))->int_allocRep((char *)0x0);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_14,param_3,param_4,bVar3,param_6,&param_2,&param_5,0,1,0,0,0,local_18,
                     uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&param_5))->int_release();
  param_5 = (int)(0);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10189c40; body size 241 bytes.
#line 1 "ENTRY_10189c40"

undefined4
__stdcall FUN_10189c40(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  bVar3 = (bool)(param_5 != 0);
  ((SCStr *)(local_18))->int_allocRep("");
  ((SCStr *)((SCStr *)&param_5))->int_allocRep((char *)0x0);
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("");
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x38))
                    (&local_14,param_3,param_4,bVar3,0,&param_2,&param_5,0,1,0,0,0,local_18,uVar1));

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&param_5))->int_release();
  param_5 = (int)(0);

  ((SCStr *)(local_18))->int_release();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10189d80; body size 132 bytes.
#line 1 "ENTRY_10189d80"

undefined4 __stdcall FUN_10189d80(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10189e30; body size 117 bytes.
#line 1 "ENTRY_10189e30"

undefined4 FUN_10189e30(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10189ed0; body size 140 bytes.
#line 1 "ENTRY_10189ed0"

undefined4 __stdcall FUN_10189ed0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x2c))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10189f90; body size 140 bytes.
#line 1 "ENTRY_10189f90"

undefined4 __stdcall FUN_10189f90(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x30))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018a050; body size 114 bytes.
#line 1 "ENTRY_1018a050"

undefined4 FUN_1018a050(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018a0f0; body size 114 bytes.
#line 1 "ENTRY_1018a0f0"

undefined4 FUN_1018a0f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018a190; body size 114 bytes.
#line 1 "ENTRY_1018a190"

undefined4 FUN_1018a190(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018a250; body size 111 bytes.
#line 1 "ENTRY_1018a250"

undefined4 FUN_1018a250(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10292c70(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018a2f0; body size 117 bytes.
#line 1 "ENTRY_1018a2f0"

undefined4 FUN_1018a2f0(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018a390; body size 117 bytes.
#line 1 "ENTRY_1018a390"

undefined4 FUN_1018a390(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018a700; body size 114 bytes.
#line 1 "ENTRY_1018a700"

undefined4 FUN_1018a700(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018ab80; body size 114 bytes.
#line 1 "ENTRY_1018ab80"

undefined4 FUN_1018ab80(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018acc0; body size 114 bytes.
#line 1 "ENTRY_1018acc0"

undefined4 FUN_1018acc0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018ad60; body size 132 bytes.
#line 1 "ENTRY_1018ad60"

undefined4 __stdcall FUN_1018ad60(ushort *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1029d380(&param_1,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018b100; body size 114 bytes.
#line 1 "ENTRY_1018b100"

undefined4 FUN_1018b100(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018b1f0; body size 114 bytes.
#line 1 "ENTRY_1018b1f0"

undefined4 FUN_1018b1f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x34))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018b740; body size 114 bytes.
#line 1 "ENTRY_1018b740"

undefined4 FUN_1018b740(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x54))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018ba00; body size 179 bytes.
#line 1 "ENTRY_1018ba00"

int * __thiscall Recovered_Bulk::FUN_1018ba00(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)(param_2);


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)0x0);
  local_14 = (int *)(param_1);
  if (param_2 != (undefined4 *)0x0) {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCISystem");
    piVar3 = (int *)((int *)(**(code **)*puVar1)(&local_14,&param_2));
    piVar4 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4 *)((undefined4 *)0x0);

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(uVar2);
  }

  return (int *)(piVar4);

 } catch (...) { }
}


// Reference entry 1018bb00; body size 111 bytes.
#line 1 "ENTRY_1018bb00"

undefined4 FUN_1018bb00(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102de430(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018bba0; body size 114 bytes.
#line 1 "ENTRY_1018bba0"

undefined1 __stdcall FUN_1018bba0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x60))());

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1018bca0; body size 114 bytes.
#line 1 "ENTRY_1018bca0"

undefined1 __stdcall FUN_1018bca0(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x5c))());

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1018bd50; body size 168 bytes.
#line 1 "ENTRY_1018bd50"

undefined1 __stdcall FUN_1018bd50(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined1 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  ((SCStr *)((SCStr *)&stack0xffffffd8))->op_ctor((SCStr *)&local_18);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x58))());

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 1018be30; body size 97 bytes.
#line 1 "ENTRY_1018be30"

void __stdcall FUN_1018be30(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x6c))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1018c0a0; body size 114 bytes.
#line 1 "ENTRY_1018c0a0"

undefined4 FUN_1018c0a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018c150; body size 114 bytes.
#line 1 "ENTRY_1018c150"

undefined4 FUN_1018c150(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018c210; body size 114 bytes.
#line 1 "ENTRY_1018c210"

undefined4 FUN_1018c210(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018c2c0; body size 114 bytes.
#line 1 "ENTRY_1018c2c0"

undefined4 FUN_1018c2c0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018c5b0; body size 114 bytes.
#line 1 "ENTRY_1018c5b0"

undefined4 FUN_1018c5b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018d0c0; body size 105 bytes.
#line 1 "ENTRY_1018d0c0"

void __stdcall FUN_1018d0c0(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x1c))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1018d230; body size 114 bytes.
#line 1 "ENTRY_1018d230"

undefined4 FUN_1018d230(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018d2d0; body size 114 bytes.
#line 1 "ENTRY_1018d2d0"

undefined4 FUN_1018d2d0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018d3f0; body size 114 bytes.
#line 1 "ENTRY_1018d3f0"

undefined4 FUN_1018d3f0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018d590; body size 114 bytes.
#line 1 "ENTRY_1018d590"

undefined4 FUN_1018d590(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018dc00; body size 114 bytes.
#line 1 "ENTRY_1018dc00"

undefined4 FUN_1018dc00(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018dca0; body size 114 bytes.
#line 1 "ENTRY_1018dca0"

undefined4 FUN_1018dca0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018eea0; body size 100 bytes.
#line 1 "ENTRY_1018eea0"

void __stdcall FUN_1018eea0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x14))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1018f1c0; body size 97 bytes.
#line 1 "ENTRY_1018f1c0"

void __stdcall FUN_1018f1c0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x20))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1018f5a0; body size 144 bytes.
#line 1 "ENTRY_1018f5a0"

void __stdcall FUN_1018f5a0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x18))(&local_14,&param_2,param_4,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1018f660; body size 146 bytes.
#line 1 "ENTRY_1018f660"

void __stdcall FUN_1018f660(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0x18))(&local_14,&param_2,60000,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1018f720; body size 97 bytes.
#line 1 "ENTRY_1018f720"

void __stdcall FUN_1018f720(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x48))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1018f7a0; body size 97 bytes.
#line 1 "ENTRY_1018f7a0"

void __stdcall FUN_1018f7a0(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x1c))(&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1018f8f0; body size 100 bytes.
#line 1 "ENTRY_1018f8f0"

void __stdcall FUN_1018f8f0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0x18))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1018f9b0; body size 135 bytes.
#line 1 "ENTRY_1018f9b0"

undefined4 __stdcall FUN_1018f9b0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x34))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018fa60; body size 135 bytes.
#line 1 "ENTRY_1018fa60"

undefined4 __stdcall FUN_1018fa60(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x1c))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018fb10; body size 176 bytes.
#line 1 "ENTRY_1018fb10"

undefined4 __stdcall FUN_1018fb10(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x20))(&param_3,&local_14,&param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018fc00; body size 135 bytes.
#line 1 "ENTRY_1018fc00"

undefined4 __stdcall FUN_1018fc00(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x44))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018fcb0; body size 194 bytes.
#line 1 "ENTRY_1018fcb0"

undefined4 __stdcall FUN_1018fcb0(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_18))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_3);
  ((SCStr *)((SCStr *)&stack0xffffffdc))->op_ctor((SCStr *)&local_14);
  ((SCStr *)((SCStr *)&stack0xffffffd8))->op_ctor((SCStr *)&local_18);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x2c))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_18))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018fdb0; body size 179 bytes.
#line 1 "ENTRY_1018fdb0"

undefined4 __stdcall FUN_1018fdb0(int *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x30))(&param_3,&local_14,&param_2,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_3 != (ushort *)0x0) {
    (**(code **)(*(int *)param_3 + 8))();
  }

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018fea0; body size 140 bytes.
#line 1 "ENTRY_1018fea0"

undefined4 __stdcall FUN_1018fea0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x28))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1018ff60; body size 143 bytes.
#line 1 "ENTRY_1018ff60"

undefined4 __stdcall FUN_1018ff60(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&uStack_24))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x24))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10190020; body size 123 bytes.
#line 1 "ENTRY_10190020"

undefined4 FUN_10190020(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x58))
                     (&param_1,param_2,param_3,param_4,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101900c0; body size 120 bytes.
#line 1 "ENTRY_101900c0"

undefined4 FUN_101900c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x48))
                     (&param_1,param_2,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10190160; body size 114 bytes.
#line 1 "ENTRY_10190160"

undefined4 FUN_10190160(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10190200; body size 117 bytes.
#line 1 "ENTRY_10190200"

undefined4 FUN_10190200(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101902a0; body size 132 bytes.
#line 1 "ENTRY_101902a0"

undefined4 __stdcall FUN_101902a0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x54))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10190350; body size 114 bytes.
#line 1 "ENTRY_10190350"

undefined4 FUN_10190350(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x38))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101903f0; body size 120 bytes.
#line 1 "ENTRY_101903f0"

undefined4 FUN_101903f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x4c))
                     (&param_1,param_2,param_3,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10190490; body size 132 bytes.
#line 1 "ENTRY_10190490"

undefined4 __stdcall FUN_10190490(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x18))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10190540; body size 135 bytes.
#line 1 "ENTRY_10190540"

undefined4 __stdcall FUN_10190540(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x3c))(&param_2,&local_14,param_3,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101905f0; body size 132 bytes.
#line 1 "ENTRY_101905f0"

undefined4 __stdcall FUN_101905f0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x14))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101906a0; body size 114 bytes.
#line 1 "ENTRY_101906a0"

undefined4 FUN_101906a0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x5c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10190900; body size 117 bytes.
#line 1 "ENTRY_10190900"

undefined4 FUN_10190900(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x104))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10190a20; body size 109 bytes.
#line 1 "ENTRY_10190a20"

undefined1 __stdcall FUN_10190a20(int *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)(*param_1 + 0xe0))(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10190ab0; body size 114 bytes.
#line 1 "ENTRY_10190ab0"

undefined4 FUN_10190ab0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x3c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10190c80; body size 106 bytes.
#line 1 "ENTRY_10190c80"

undefined4 __stdcall FUN_10190c80(int *param_1,ushort *param_2)

{
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0xd8))(&local_14,uVar1));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10190d10; body size 117 bytes.
#line 1 "ENTRY_10190d10"

undefined4 FUN_10190d10(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xf0))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10191180; body size 117 bytes.
#line 1 "ENTRY_10191180"

undefined4 FUN_10191180(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xf4))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10191220; body size 117 bytes.
#line 1 "ENTRY_10191220"

undefined4 FUN_10191220(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0xe8))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10191510; body size 117 bytes.
#line 1 "ENTRY_10191510"

undefined4 FUN_10191510(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x7c))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101915b0; body size 114 bytes.
#line 1 "ENTRY_101915b0"

undefined4 FUN_101915b0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x74))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10191740; body size 114 bytes.
#line 1 "ENTRY_10191740"

undefined4 FUN_10191740(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x54))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101919f0; body size 108 bytes.
#line 1 "ENTRY_101919f0"

void __stdcall FUN_101919f0(int *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe4))->op_ctor((SCStr *)&local_14);
  (**(code **)(*param_1 + 0x8c))();

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10191b10; body size 111 bytes.
#line 1 "ENTRY_10191b10"

void __stdcall FUN_10191b10(int *param_1,ushort *param_2,int param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0xe4))(&local_14,param_3 != 0,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10191bd0; body size 103 bytes.
#line 1 "ENTRY_10191bd0"

void __stdcall FUN_10191bd0(int *param_1,ushort *param_2,undefined4 param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  (**(code **)(*param_1 + 0xdc))(&local_14,param_3,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10191c80; body size 144 bytes.
#line 1 "ENTRY_10191c80"

void __stdcall FUN_10191c80(int *param_1,ushort *param_2,ushort *param_3)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  (**(code **)(*param_1 + 0xd4))(&local_14,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10191fe0; body size 114 bytes.
#line 1 "ENTRY_10191fe0"

undefined4 FUN_10191fe0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x50))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192080; body size 138 bytes.
#line 1 "ENTRY_10192080"

undefined4 __stdcall FUN_10192080(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x44))(&param_2,&local_14,param_3,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192140; body size 149 bytes.
#line 1 "ENTRY_10192140"

undefined4
__stdcall FUN_10192140(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(param_5 != 0)));
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x40))(&param_2,&local_14,param_3,param_4,param_2,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192200; body size 140 bytes.
#line 1 "ENTRY_10192200"

undefined4 __stdcall FUN_10192200(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x40))(&param_2,&local_14,param_3,param_4,1,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101922c0; body size 132 bytes.
#line 1 "ENTRY_101922c0"

undefined4 __stdcall FUN_101922c0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x4c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101923f0; body size 179 bytes.
#line 1 "ENTRY_101923f0"

int * __thiscall Recovered_Bulk::FUN_101923f0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)(param_2);


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)0x0);
  local_14 = (int *)(param_1);
  if (param_2 != (undefined4 *)0x0) {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIZoneGroupMgr");
    piVar3 = (int *)((int *)(**(code **)*puVar1)(&local_14,&param_2));
    piVar4 = (int *)((int *)*piVar3);
    *piVar3 = (int)(0);

    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))();
    }

    ((SCStr *)((SCStr *)&param_2))->int_release();
    param_2 = (undefined4 *)((undefined4 *)0x0);

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
  }

  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(uVar2);
  }

  return (int *)(piVar4);

 } catch (...) { }
}


// Reference entry 101924e0; body size 114 bytes.
#line 1 "ENTRY_101924e0"

undefined4 FUN_101924e0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x60))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192580; body size 114 bytes.
#line 1 "ENTRY_10192580"

undefined4 FUN_10192580(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x54))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192670; body size 132 bytes.
#line 1 "ENTRY_10192670"

undefined4 __stdcall FUN_10192670(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x5c))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192720; body size 138 bytes.
#line 1 "ENTRY_10192720"

undefined4 __stdcall FUN_10192720(int *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x48))(&param_2,&local_14,param_3,param_4,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192890; body size 114 bytes.
#line 1 "ENTRY_10192890"

undefined4 FUN_10192890(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 100))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192930; body size 114 bytes.
#line 1 "ENTRY_10192930"

undefined4 FUN_10192930(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101929d0; body size 140 bytes.
#line 1 "ENTRY_101929d0"

undefined4 __stdcall FUN_101929d0(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x1c))(&param_2));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192a90; body size 114 bytes.
#line 1 "ENTRY_10192a90"

undefined4 FUN_10192a90(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x20))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192b30; body size 114 bytes.
#line 1 "ENTRY_10192b30"

undefined4 FUN_10192b30(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x30))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192bd0; body size 114 bytes.
#line 1 "ENTRY_10192bd0"

undefined4 FUN_10192bd0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x2c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192c70; body size 114 bytes.
#line 1 "ENTRY_10192c70"

undefined4 FUN_10192c70(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x6c))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192e10; body size 114 bytes.
#line 1 "ENTRY_10192e10"

undefined4 FUN_10192e10(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x24))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10192eb0; body size 114 bytes.
#line 1 "ENTRY_10192eb0"

undefined4 FUN_10192eb0(int *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x18))(&param_1,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10194400; body size 143 bytes.
#line 1 "ENTRY_10194400"

void __stdcall FUN_10194400(undefined4 *param_1,ushort *param_2,undefined4 param_3,ushort *param_4)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  (**(code **)*param_1)(&local_14,param_3,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10194510; body size 132 bytes.
#line 1 "ENTRY_10194510"

undefined4 __stdcall FUN_10194510(int *param_1,ushort *param_2)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 4))(&param_2,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_2 != (ushort *)0x0) {
    (**(code **)(*(int *)param_2 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101945e0; body size 105 bytes.
#line 1 "ENTRY_101945e0"

undefined1 __stdcall FUN_101945e0(undefined4 *param_1,ushort *param_2)

{
 try {
  undefined1 uVar1;
  uint uVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  uVar1 = (undefined1)((**(code **)*param_1)(&local_14,uVar2));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined1)(uVar1);

 } catch (...) { }
}


// Reference entry 10194690; body size 117 bytes.
#line 1 "ENTRY_10194690"

undefined4 FUN_10194690(int *param_1,undefined4 param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 4))(&param_1,param_2,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10195a20; body size 143 bytes.
#line 1 "ENTRY_10195a20"

void __stdcall FUN_10195a20(undefined4 *param_1,ushort *param_2,undefined4 param_3,ushort *param_4)

{
 try {
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_4);
  (**(code **)*param_1)(&local_14,param_3,&param_2,uVar1);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10195c50; body size 97 bytes.
#line 1 "ENTRY_10195c50"

void __stdcall FUN_10195c50(SCLibParameters *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCLibParameters *)(param_1))->addDeveloperOption((SCStr *)&local_14);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10195cd0; body size 115 bytes.
#line 1 "ENTRY_10195cd0"

undefined4 FUN_10195cd0(SCLibParameters *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar4 = (int **)(&local_14);
  puVar3 = (undefined4 *)((undefined4 *)((SCLibParameters *)(param_1))->getDiagnosticCommandNames());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar4,uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10195d70; body size 115 bytes.
#line 1 "ENTRY_10195d70"

undefined4 FUN_10195d70(SCLibParameters *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar4 = (int **)(&local_14);
  puVar3 = (undefined4 *)((undefined4 *)((SCLibParameters *)(param_1))->getDiagnosticCommands());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar4,uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10195e10; body size 115 bytes.
#line 1 "ENTRY_10195e10"

undefined4 FUN_10195e10(SCLibParameters *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ppiVar4 = (int **)(&local_14);
  puVar3 = (undefined4 *)((undefined4 *)((SCLibParameters *)(param_1))->getDiagnosticFiles());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(ppiVar4,uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10195eb0; body size 104 bytes.
#line 1 "ENTRY_10195eb0"

bool __stdcall FUN_10195eb0(SCLibParameters *param_1,ushort *param_2)

{
 try {
  bool bVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  bVar1 = (bool)(((SCLibParameters *)(param_1))->hasDeveloperOption((SCStr *)&local_14));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (bool)(bVar1);

 } catch (...) { }
}


// Reference entry 10197e00; body size 97 bytes.
#line 1 "ENTRY_10197e00"

void __stdcall FUN_10197e00(SCLibParameters *param_1,ushort *param_2)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  ((SCLibParameters *)(param_1))->removeDeveloperOption((SCStr *)&local_14);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 101985e0; body size 137 bytes.
#line 1 "ENTRY_101985e0"

undefined4
__stdcall FUN_101985e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,ushort *param_8)

{
 try {
  undefined4 uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_8);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  uVar1 = (undefined4)((**(code **)(*param_1 + 0xc))(param_2,param_3,param_4,param_5,param_6,param_7));

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 101986e0; body size 200 bytes.
#line 1 "ENTRY_101986e0"

void FUN_101986e0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  (**(code **)(*param_1 + 0x14))
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
             param_12,param_13,param_14);
  return;
}


// Reference entry 10199380; body size 141 bytes.
#line 1 "ENTRY_10199380"

void __stdcall FUN_10199380(undefined4 param_1,ushort *param_2,ushort *param_3)

{
 try {
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_2);
  param_2 = (ushort *)((ushort *)0x0);
  ((SCStr *)((SCStr *)&param_2))->setFromUTF16(param_3);
  thunk_FUN_10223600(&local_14,&param_2);

  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (ushort *)((ushort *)0x0);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 1019b6c0; body size 132 bytes.
#line 1 "ENTRY_1019b6c0"

undefined4 __stdcall FUN_1019b6c0(ushort *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101c9bc0(&param_1,&local_14,uVar2));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019b770; body size 111 bytes.
#line 1 "ENTRY_1019b770"

undefined4 __fastcall FUN_1019b770(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createPropertyBag());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019b810; body size 111 bytes.
#line 1 "ENTRY_1019b810"

undefined4 __fastcall FUN_1019b810(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCActionFilterer());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019b8b0; body size 111 bytes.
#line 1 "ENTRY_1019b8b0"

undefined4 __fastcall FUN_1019b8b0(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCIControllerTest());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019b950; body size 151 bytes.
#line 1 "ENTRY_1019b950"

undefined4 __stdcall FUN_1019b950(ushort *param_1,int param_2)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  param_1 = (ushort *)((ushort *)((uint)(*(unsigned short *)((char *)&param_1 + 1)) << 8 | (uint)(param_2 != 0)));
  ((SCStr *)((SCStr *)&uStack_24))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)createSCINetstartGetScanListOp(&param_1));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019ba20; body size 111 bytes.
#line 1 "ENTRY_1019ba20"

undefined4 __fastcall FUN_1019ba20(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCIWizardComponentBuilder());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019bac0; body size 111 bytes.
#line 1 "ENTRY_1019bac0"

undefined4 __fastcall FUN_1019bac0(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCIntArray());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019bb60; body size 117 bytes.
#line 1 "ENTRY_1019bb60"

undefined4 FUN_1019bb60(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCNullAsyncOperation((int)&param_1));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019bc00; body size 111 bytes.
#line 1 "ENTRY_1019bc00"

undefined4 __fastcall FUN_1019bc00(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCRecurrence());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019bca0; body size 111 bytes.
#line 1 "ENTRY_1019bca0"

undefined4 __fastcall FUN_1019bca0(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCStringArray());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019bd40; body size 111 bytes.
#line 1 "ENTRY_1019bd40"

undefined4 __fastcall FUN_1019bd40(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCSystemTime());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019bde0; body size 111 bytes.
#line 1 "ENTRY_1019bde0"

undefined4 __fastcall FUN_1019bde0(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCTime());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019be80; body size 111 bytes.
#line 1 "ENTRY_1019be80"

undefined4 __fastcall FUN_1019be80(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)createSCUriArray());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019bf20; body size 123 bytes.
#line 1 "ENTRY_1019bf20"

undefined4 FUN_1019bf20(undefined4 param_1,undefined4 param_2,int *param_3)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)
           thunk_FUN_101b8640(&param_3,param_1,param_2,param_3,DAT_12126b84 
                             ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019c060; body size 140 bytes.
#line 1 "ENTRY_1019c060"

undefined4 __stdcall FUN_1019c060(ushort *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  ((SCStr *)((SCStr *)&stack0xffffffe0))->op_ctor((SCStr *)&local_14);
  puVar2 = (undefined4 *)((undefined4 *)createServiceAccountsByServiceFilter(&param_1));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))();
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019c1c0; body size 111 bytes.
#line 1 "ENTRY_1019c1c0"

undefined4 FUN_1019c1c0(void)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10260b00(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019c260; body size 132 bytes.
#line 1 "ENTRY_1019c260"

undefined4 __stdcall FUN_1019c260(ushort *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  puVar3 = (undefined4 *)((undefined4 *)createStringTemplate((SCStr *)&param_1));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)param_1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019ea50; body size 117 bytes.
#line 1 "ENTRY_1019ea50"

void __stdcall FUN_1019ea50(int param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  if (param_1 != 0) {

    ((SCStr *)((SCStr *)(param_1 + 8)))->int_release();
    *(undefined4 *)(param_1 + 8) = 0;

    ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
    *(undefined4 *)(param_1 + 4) = 0;
    thunk_FUN_1148a50e(param_1,0xc,uVar1);
  }

  return;

 } catch (...) { }
}


// Reference entry 1019efc0; body size 137 bytes.
#line 1 "ENTRY_1019efc0"

void __stdcall FUN_1019efc0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_1 != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x38));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    piVar1 = (int *)(*(int **)(param_1 + 0x30));

    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    thunk_FUN_1148a50e(param_1,0x48);
  }

  return;

 } catch (...) { }
}


// Reference entry 1019f260; body size 111 bytes.
#line 1 "ENTRY_1019f260"

undefined4 __fastcall FUN_1019f260(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)getAppReportingInstance());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019f300; body size 111 bytes.
#line 1 "ENTRY_1019f300"

undefined4 __fastcall FUN_1019f300(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)getNewWizManager());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019f590; body size 111 bytes.
#line 1 "ENTRY_1019f590"

undefined4 __fastcall FUN_1019f590(int *param_1)

{
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  puVar3 = (undefined4 *)((undefined4 *)getSCIResourceHelper());
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);

  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(uVar2);

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1019fc60; body size 304 bytes.
#line 1 "ENTRY_1019fc60"

SCStr * __stdcall FUN_1019fc60(ushort *param_1,undefined4 param_2)

{
 try {
  SCStr *pSVar1;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_18))->int_allocRep("none");
  ((SCStr *)((SCStr *)&local_20))->int_release();
  local_20 = (undefined4)(local_18);
  ((SCStr *)((SCStr *)&local_20))->int_addref();

  ((SCStr *)((SCStr *)&local_18))->int_release();



  ((SCStr *)((SCStr *)&local_14))->setFromUTF16(param_1);
  pSVar1 = (SCStr *)((SCStr *)thunk_FUN_102178d0(local_28,&local_14,param_2));
  if (pSVar1 != (SCStr *)&local_20) {
    ((SCStr *)((SCStr *)&local_20))->int_release();
    local_20 = (undefined4)(*(undefined4 *)pSVar1);
    ((SCStr *)((SCStr *)&local_20))->int_addref();
  }
  local_1c = (undefined4)(*(undefined4 *)(pSVar1 + 4));

  ((SCStr *)((SCStr *)local_28))->int_release();
  local_28[0] = (undefined4)(0);

  pSVar1 = (SCStr *)(operator_new(8));
  if (pSVar1 == (SCStr *)0x0) {
    pSVar1 = (SCStr *)((SCStr *)0x0);
  }
  else {
    ((SCStr *)(pSVar1))->op_ctor((SCStr *)&local_20);
    *(undefined4 *)(pSVar1 + 4) = local_1c;
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&local_20))->int_release();

  return (SCStr *)(pSVar1);

 } catch (...) { }
}


// Reference entry 1019fe90; body size 129 bytes.
#line 1 "ENTRY_1019fe90"

undefined4 * FUN_1019fe90(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x40));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIAbilityDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1019ff80; body size 238 bytes.
#line 1 "ENTRY_1019ff80"

undefined4 * FUN_1019ff80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x7c));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIActionFactorySwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    puVar1[0x10] = (undefined4)(0);
    puVar1[0x11] = (undefined4)(0);
    puVar1[0x12] = (undefined4)(0);
    puVar1[0x13] = (undefined4)(0);
    puVar1[0x14] = (undefined4)(0);
    puVar1[0x15] = (undefined4)(0);
    puVar1[0x16] = (undefined4)(0);
    puVar1[0x17] = (undefined4)(0);
    puVar1[0x18] = (undefined4)(0);
    puVar1[0x19] = (undefined4)(0);
    puVar1[0x1a] = (undefined4)(0);
    puVar1[0x1b] = (undefined4)(0);
    puVar1[0x1c] = (undefined4)(0);
    puVar1[0x1d] = (undefined4)(0);
    puVar1[0x1e] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a02d0; body size 129 bytes.
#line 1 "ENTRY_101a02d0"

undefined4 * FUN_101a02d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x40));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBleDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0400; body size 408 bytes.
#line 1 "ENTRY_101a0400"

undefined4 * FUN_101a0400(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc0));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIBrowseItemSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    puVar1[0x10] = (undefined4)(0);
    puVar1[0x11] = (undefined4)(0);
    puVar1[0x12] = (undefined4)(0);
    puVar1[0x13] = (undefined4)(0);
    puVar1[0x14] = (undefined4)(0);
    puVar1[0x15] = (undefined4)(0);
    puVar1[0x16] = (undefined4)(0);
    puVar1[0x17] = (undefined4)(0);
    puVar1[0x18] = (undefined4)(0);
    puVar1[0x19] = (undefined4)(0);
    puVar1[0x1a] = (undefined4)(0);
    puVar1[0x1b] = (undefined4)(0);
    puVar1[0x1c] = (undefined4)(0);
    puVar1[0x1d] = (undefined4)(0);
    puVar1[0x1e] = (undefined4)(0);
    puVar1[0x1f] = (undefined4)(0);
    puVar1[0x20] = (undefined4)(0);
    puVar1[0x21] = (undefined4)(0);
    puVar1[0x22] = (undefined4)(0);
    puVar1[0x23] = (undefined4)(0);
    puVar1[0x24] = (undefined4)(0);
    puVar1[0x25] = (undefined4)(0);
    puVar1[0x26] = (undefined4)(0);
    puVar1[0x27] = (undefined4)(0);
    puVar1[0x28] = (undefined4)(0);
    puVar1[0x29] = (undefined4)(0);
    puVar1[0x2a] = (undefined4)(0);
    puVar1[0x2b] = (undefined4)(0);
    puVar1[0x2c] = (undefined4)(0);
    puVar1[0x2d] = (undefined4)(0);
    puVar1[0x2e] = (undefined4)(0);
    puVar1[0x2f] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0710; body size 136 bytes.
#line 1 "ENTRY_101a0710"

undefined4 * FUN_101a0710(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x44));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCICustomSubWizardSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    puVar1[0x10] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0810; body size 161 bytes.
#line 1 "ENTRY_101a0810"

undefined4 * FUN_101a0810(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x50));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIExperimentManagerProviderSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    puVar1[0x10] = (undefined4)(0);
    puVar1[0x11] = (undefined4)(0);
    puVar1[0x12] = (undefined4)(0);
    puVar1[0x13] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0b50; body size 154 bytes.
#line 1 "ENTRY_101a0b50"

undefined4 * FUN_101a0b50(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x4c));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCILocalMusicBrowseItemInfoSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    puVar1[0x10] = (undefined4)(0);
    puVar1[0x11] = (undefined4)(0);
    puVar1[0x12] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a0ff0; body size 129 bytes.
#line 1 "ENTRY_101a0ff0"

undefined4 * FUN_101a0ff0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x40));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCISavedDataProviderSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1740; body size 154 bytes.
#line 1 "ENTRY_101a1740"

undefined4 * FUN_101a1740(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x4c));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(1);
    puVar1[2] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCIWifiDelegateSwigBase);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    puVar1[0x10] = (undefined4)(0);
    puVar1[0x11] = (undefined4)(0);
    puVar1[0x12] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1c00; body size 182 bytes.
#line 1 "ENTRY_101a1c00"

undefined4 * FUN_101a1c00(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0x5c));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = (undefined4)(0);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SwigDirector_SCLibSonarCallback);
    puVar1[2] = (undefined4)(0);
    puVar1[3] = (undefined4)(0);
    puVar1[4] = (undefined4)(0);
    puVar1[5] = (undefined4)(0);
    puVar1[6] = (undefined4)(0);
    puVar1[7] = (undefined4)(0);
    puVar1[8] = (undefined4)(0);
    puVar1[9] = (undefined4)(0);
    puVar1[10] = (undefined4)(0);
    puVar1[0xb] = (undefined4)(0);
    puVar1[0xc] = (undefined4)(0);
    puVar1[0xd] = (undefined4)(0);
    puVar1[0xe] = (undefined4)(0);
    puVar1[0xf] = (undefined4)(0);
    puVar1[0x10] = (undefined4)(0);
    puVar1[0x11] = (undefined4)(0);
    puVar1[0x12] = (undefined4)(0);
    puVar1[0x13] = (undefined4)(0);
    puVar1[0x14] = (undefined4)(0);
    puVar1[0x15] = (undefined4)(0);
    puVar1[0x16] = (undefined4)(0);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 101a1ea0; body size 241 bytes.
#line 1 "ENTRY_101a1ea0"

uint __thiscall Recovered_Bulk::FUN_101a1ea0(char *param_2)
{
  uint param_1 = (uint )this;
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint local_4;
  
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  pcVar3 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  pcVar3 = (char *)(pcVar3 + (1 - (int)(param_2 + 1)));
  local_4 = (uint)(param_1);
  if (pcVar3 < (char *)0x1ff) {
    iVar2 = (int)(param_1 + 0x3fc);
  }
  else {
    free((void *)0x0);
    *(undefined4 *)(param_1 + 0x3fc) = 0;
    *(char **)(param_1 + 0x400) = pcVar3;
    local_4 = (uint)(thunk_FUN_1148b586(-(uint)((int)((unsigned long long)(pcVar3) * 2 >> 0x20) != 0) |
                                 (uint)((unsigned long long)(pcVar3) * 2)));
    *(uint *)(param_1 + 0x3fc) = local_4;
    iVar2 = (int)(local_4 + *(int *)(param_1 + 0x400) * 2);
  }
  iVar2 = (int)(thunk_FUN_110689f0(&param_2,param_2 + (int)pcVar3,&local_4,iVar2,1));
  uVar4 = (uint)(param_1);
  if (*(uint *)(param_1 + 0x3fc) != 0) {
    uVar4 = (uint)(*(uint *)(param_1 + 0x3fc));
  }
  if ((iVar2 == 0) && (uVar4 < local_4)) {
    *(int *)(param_1 + 0x404) = ((int)(local_4 - uVar4) >> 1) + -1;
    return (uint)(param_1);
  }
  *(undefined4 *)(param_1 + 0x404) = 0;
  return (uint)(param_1);
}


// Reference entry 101a2210; body size 149 bytes.
#line 1 "ENTRY_101a2210"

void FUN_101a2210(int *param_1,int *param_2)

{
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);
  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    iVar1 = (int)(*param_1);

    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar4 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar3), iVar4 == 0)) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    *param_1 = (int)(0);

  }

  return;

 } catch (...) { }
}


// Reference entry 101a2690; body size 147 bytes.
#line 1 "ENTRY_101a2690"

int * FUN_101a2690(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    iVar1 = (int)(*param_1);
    *param_3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_3 = (int *)(param_3 + 1);

  }
  thunk_FUN_101a2210(param_3,param_3,param_4);

  return (int *)(param_3);

 } catch (...) { }
}


// Reference entry 101a2750; body size 147 bytes.
#line 1 "ENTRY_101a2750"

int * FUN_101a2750(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    iVar1 = (int)(*param_1);
    *param_3 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_3 = (int *)(param_3 + 1);

  }
  thunk_FUN_101a2210(param_3,param_3,param_4);

  return (int *)(param_3);

 } catch (...) { }
}


// Reference entry 101a28a0; body size 126 bytes.
#line 1 "ENTRY_101a28a0"

void FUN_101a28a0(undefined4 param_1,int *param_2)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  iVar1 = (int)(*param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),DAT_12126b84 ));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  *param_2 = (int)(0);

  return;

 } catch (...) { }
}


// Reference entry 101a2bf0; body size 96 bytes.
#line 1 "ENTRY_101a2bf0"

void __fastcall FUN_101a2bf0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101a2210(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
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


// Reference entry 101a3180; body size 72 bytes.
#line 1 "ENTRY_101a3180"

int __stdcall FUN_101a3180(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = (int)(0x1505);
  pcVar3 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    pcVar3 = (char *)((char *)*param_1);
  }
  cVar1 = (char)(*pcVar3);
  while (cVar1 != 0) {
    pcVar3 = (char *)(pcVar3 + 1);
    iVar2 = (int)(tolower((int)cVar1));
    iVar4 = (int)(iVar4 * 0x21 + iVar2);
    cVar1 = (char)(*pcVar3);
  }
  return (int)(iVar4);
}


// Reference entry 101a32e0; body size 104 bytes.
#line 1 "ENTRY_101a32e0"

void __thiscall Recovered_Bulk::FUN_101a32e0(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101a2210(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
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


// Reference entry 101a33f0; body size 96 bytes.
#line 1 "ENTRY_101a33f0"

void __fastcall FUN_101a33f0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_101a2210(*param_1,param_1[1],param_1);
    iVar1 = (int)(*param_1);
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


// Reference entry 101a3470; body size 157 bytes.
#line 1 "ENTRY_101a3470"

int * __thiscall Recovered_Bulk::FUN_101a3470(int *param_2,int *param_3,int *param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    iVar1 = (int)(*param_2);
    *param_4 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_4 = (int *)(param_4 + 1);

  }
  thunk_FUN_101a2210(param_4,param_4,param_1);

  return (int *)(param_4);

 } catch (...) { }
}


// Reference entry 101a3540; body size 155 bytes.
#line 1 "ENTRY_101a3540"

void __thiscall Recovered_Bulk::FUN_101a3540(int *param_2,int *param_3,int *param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    iVar1 = (int)(*param_2);
    *param_4 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_4 = (int *)(param_4 + 1);

  }
  thunk_FUN_101a2210(param_4,param_4,param_1);

  return;

 } catch (...) { }
}


// Reference entry 101a3610; body size 155 bytes.
#line 1 "ENTRY_101a3610"

void __thiscall Recovered_Bulk::FUN_101a3610(int *param_2,int *param_3,int *param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    iVar1 = (int)(*param_2);
    *param_4 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar3);
    }
    param_4 = (int *)(param_4 + 1);

  }
  thunk_FUN_101a2210(param_4,param_4,param_1);

  return;

 } catch (...) { }
}


// Reference entry 101a37d0; body size 87 bytes.
#line 1 "ENTRY_101a37d0"

void * FUN_101a37d0(uint param_1)

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


// Reference entry 101a3840; body size 82 bytes.
#line 1 "ENTRY_101a3840"

void __thiscall Recovered_Bulk::FUN_101a3840(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)((char *)*param_2);
  if (pcVar4 == (char *)0x0) {
    uVar3 = (uint)(0);
  }
  else {
    uVar3 = (uint)(*(uint *)(pcVar4 + -0xc));
    if (uVar3 == 0) {
      pcVar2 = (char *)(pcVar4);
      do {
        cVar1 = (char)(*pcVar2);
        pcVar2 = (char *)(pcVar2 + 1);
      } while (cVar1 != '\0');
      uVar3 = (uint)((int)pcVar2 - (int)(pcVar4 + 1));
      *(uint *)(pcVar4 + -0xc) = uVar3;
      pcVar4 = (char *)((char *)*param_2);
    }
    if (pcVar4 != (char *)0x0) {
      ((SCStr *)(param_1))->append(pcVar4,uVar3);
      return;
    }
  }
  ((SCStr *)(param_1))->append("",uVar3);
  return;
}


// Reference entry 101a38b0; body size 75 bytes.
#line 1 "ENTRY_101a38b0"

SCStr * __thiscall Recovered_Bulk::FUN_101a38b0(char param_2)
{
  SCStr *param_1 = (SCStr *)this;
  uint uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(*(char **)param_1);
  if (pcVar5 == (char *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(*(int *)(pcVar5 + -0xc));
    if (iVar4 == 0) {
      pcVar3 = (char *)(pcVar5);
      do {
        cVar2 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar2 != '\0');
      iVar4 = (int)((int)pcVar3 - (int)(pcVar5 + 1));
      *(int *)(pcVar5 + -0xc) = iVar4;
    }
  }
  uVar1 = (uint)(iVar4 + 1);
  pcVar5 = (char *)(((SCStr *)(param_1))->getBuffer(uVar1));
  pcVar5[uVar1] = (char)('\0');
  pcVar5[iVar4] = (char)(param_2);
  *(uint *)(*(int *)param_1 + -0xc) = uVar1;
  return (SCStr *)(param_1);
}


// Reference entry 101a3910; body size 109 bytes.
#line 1 "ENTRY_101a3910"

SCStr * __thiscall Recovered_Bulk::FUN_101a3910(void *param_2,size_t param_3)
{
  SCStr *param_1 = (SCStr *)this;
  uint uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar3 = (char *)(*(char **)param_1);
  if (pcVar3 == (char *)0x0) {
    iVar5 = (int)(0);
  }
  else {
    iVar5 = (int)(*(int *)(pcVar3 + -0xc));
    if (iVar5 == 0) {
      pcVar4 = (char *)(pcVar3);
      do {
        cVar2 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar2 != '\0');
      iVar5 = (int)((int)pcVar4 - (int)(pcVar3 + 1));
      *(int *)(pcVar3 + -0xc) = iVar5;
    }
  }
  uVar1 = (uint)(iVar5 + param_3);
  pcVar3 = (char *)(((SCStr *)(param_1))->getBuffer(uVar1));
  memcpy(pcVar3 + iVar5,param_2,param_3);
  pcVar3[uVar1] = (char)('\0');
  *(uint *)(*(int *)param_1 + -0xc) = uVar1;
  return (SCStr *)(param_1);
}


// Reference entry 101a39a0; body size 110 bytes.
#line 1 "ENTRY_101a39a0"

bool __thiscall Recovered_Bulk::FUN_101a39a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  char *pcVar2;
  size_t _MaxCount;
  int iVar3;
  char *_Str2;
  
  _Str2 = (char *)((char *)*param_2);
  if ((_Str2 == (char *)0x0) || (*_Str2 == '\0')) {
    return (bool)(true);
  }
  pcVar2 = (char *)((char *)*param_1);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    _MaxCount = (size_t)(*(size_t *)(_Str2 + -0xc));
    if (_MaxCount == 0) {
      pcVar2 = (char *)(_Str2);
      do {
        cVar1 = (char)(*pcVar2);
        pcVar2 = (char *)(pcVar2 + 1);
      } while (cVar1 != '\0');
      _MaxCount = (size_t)((int)pcVar2 - (int)(_Str2 + 1));
      *(size_t *)(_Str2 + -0xc) = _MaxCount;
      _Str2 = (char *)((char *)*param_2);
      pcVar2 = (char *)((char *)*param_1);
      if (_Str2 == (char *)0x0) {
        _Str2 = (char *)("");
      }
    }
    iVar3 = (int)(strncmp(pcVar2,_Str2,_MaxCount));
    return (bool)(iVar3 == 0);
  }
  return (bool)(false);
}


// Reference entry 101a3a30; body size 110 bytes.
#line 1 "ENTRY_101a3a30"

bool __thiscall Recovered_Bulk::FUN_101a3a30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  char *pcVar2;
  size_t _MaxCount;
  int iVar3;
  char *_Str2;
  
  _Str2 = (char *)((char *)*param_2);
  if ((_Str2 == (char *)0x0) || (*_Str2 == '\0')) {
    return (bool)(true);
  }
  pcVar2 = (char *)((char *)*param_1);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    _MaxCount = (size_t)(*(size_t *)(_Str2 + -0xc));
    if (_MaxCount == 0) {
      pcVar2 = (char *)(_Str2);
      do {
        cVar1 = (char)(*pcVar2);
        pcVar2 = (char *)(pcVar2 + 1);
      } while (cVar1 != '\0');
      _MaxCount = (size_t)((int)pcVar2 - (int)(_Str2 + 1));
      *(size_t *)(_Str2 + -0xc) = _MaxCount;
      _Str2 = (char *)((char *)*param_2);
      pcVar2 = (char *)((char *)*param_1);
      if (_Str2 == (char *)0x0) {
        _Str2 = (char *)("");
      }
    }
    iVar3 = (int)(strncmp(pcVar2,_Str2,_MaxCount));
    return (bool)(iVar3 == 0);
  }
  return (bool)(false);
}


// Reference entry 101a3ac0; body size 74 bytes.
#line 1 "ENTRY_101a3ac0"

bool __thiscall Recovered_Bulk::FUN_101a3ac0(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  char *_Str1;
  int iVar2;
  char *pcVar3;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return (bool)(true);
  }
  _Str1 = (char *)((char *)*param_1);
  if ((_Str1 != (char *)0x0) && (*_Str1 != '\0')) {
    pcVar3 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    iVar2 = (int)(strncmp(_Str1,param_2,(int)pcVar3 - (int)(param_2 + 1)));
    return (bool)(iVar2 == 0);
  }
  return (bool)(false);
}


// Reference entry 101a3b90; body size 77 bytes.
#line 1 "ENTRY_101a3b90"

bool __thiscall Recovered_Bulk::FUN_101a3b90(undefined4 *param_2,char param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  char *_Str;
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((char *)*param_2);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    return (bool)(true);
  }
  _Str = (char *)((char *)*param_1);
  if ((_Str != (char *)0x0) && (*_Str != '\0')) {
    if (param_3 != '\0') {
      iVar1 = (int)(thunk_FUN_113b9e10());
      return (bool)(iVar1 != 0);
    }
    pcVar2 = (char *)(strstr(_Str,pcVar2));
    return (bool)(pcVar2 != (char *)0x0);
  }
  return (bool)(false);
}


// Reference entry 101a3bf0; body size 77 bytes.
#line 1 "ENTRY_101a3bf0"

bool __thiscall Recovered_Bulk::FUN_101a3bf0(undefined4 *param_2,char param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  char *_Str;
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((char *)*param_2);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    return (bool)(true);
  }
  _Str = (char *)((char *)*param_1);
  if ((_Str != (char *)0x0) && (*_Str != '\0')) {
    if (param_3 != '\0') {
      iVar1 = (int)(thunk_FUN_113b9e10());
      return (bool)(iVar1 != 0);
    }
    pcVar2 = (char *)(strstr(_Str,pcVar2));
    return (bool)(pcVar2 != (char *)0x0);
  }
  return (bool)(false);
}


// Reference entry 101a3c50; body size 75 bytes.
#line 1 "ENTRY_101a3c50"

bool __thiscall Recovered_Bulk::FUN_101a3c50(char *param_2,char param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  char *pcVar2;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return (bool)(true);
  }
  pcVar2 = (char *)((char *)*param_1);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    if (param_3 != '\0') {
      iVar1 = (int)(thunk_FUN_113b9e10());
      return (bool)(iVar1 != 0);
    }
    pcVar2 = (char *)(strstr(pcVar2,param_2));
    return (bool)(pcVar2 != (char *)0x0);
  }
  return (bool)(false);
}


// Reference entry 101a43a0; body size 100 bytes.
#line 1 "ENTRY_101a43a0"

bool __thiscall Recovered_Bulk::FUN_101a43a0(char *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  char cVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return (bool)(true);
  }
  pcVar2 = (char *)(*(char **)param_1);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    pcVar6 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar6);
      pcVar6 = (char *)(pcVar6 + 1);
    } while (cVar1 != '\0');
    uVar5 = (uint)(*(uint *)(pcVar2 + -0xc));
    if (uVar5 == 0) {
      pcVar4 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar1 != '\0');
      uVar5 = (uint)((int)pcVar4 - (int)(pcVar2 + 1));
      *(uint *)(pcVar2 + -0xc) = uVar5;
    }
    bVar3 = (bool)(((SCStr *)(param_1))->int_endsWith(param_2,uVar5,(int)pcVar6 - (int)(param_2 + 1)));
    return (bool)(bVar3);
  }
  return (bool)(false);
}


// Reference entry 101a4510; body size 112 bytes.
#line 1 "ENTRY_101a4510"

int __thiscall Recovered_Bulk::FUN_101a4510(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  char *_Str;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _Str = (char *)((char *)*param_1);
  pcVar2 = (char *)("");
  if ((char *)*param_2 != (char *)0x0) {
    pcVar2 = (char *)((char *)*param_2);
  }
  if (((_Str != (char *)0x0) && (pcVar2 != (char *)0x0)) && (*pcVar2 != '\0')) {
    pcVar4 = (char *)(_Str);
    do {
      cVar1 = (char)(*pcVar4);
      pcVar4 = (char *)(pcVar4 + 1);
    } while (cVar1 != '\0');
    pcVar3 = (char *)(pcVar2);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar3 - (int)(pcVar2 + 1)) <= (uint)((int)pcVar4 - (int)(_Str + 1))) {
      pcVar2 = (char *)(strstr(_Str,pcVar2));
      if (pcVar2 != (char *)0x0) {
        pcVar3 = (char *)(pcVar2 + 1);
        do {
          cVar1 = (char)(*pcVar2);
          pcVar2 = (char *)(pcVar2 + 1);
        } while (cVar1 != '\0');
        return (int)(((int)pcVar4 - (int)(_Str + 1)) - ((int)pcVar2 - (int)pcVar3));
      }
    }
  }
  return (int)(-1);
}


// Reference entry 101a4810; body size 66 bytes.
#line 1 "ENTRY_101a4810"

int __fastcall FUN_101a4810(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    pcVar3 = (char *)((char *)*param_1);
  }
  iVar4 = (int)(0x1505);
  cVar1 = (char)(*pcVar3);
  while (cVar1 != 0) {
    pcVar3 = (char *)(pcVar3 + 1);
    iVar2 = (int)(tolower((int)cVar1));
    iVar4 = (int)(iVar4 * 0x21 + iVar2);
    cVar1 = (char)(*pcVar3);
  }
  return (int)(iVar4);
}


// Reference entry 101a4890; body size 108 bytes.
#line 1 "ENTRY_101a4890"

void __thiscall Recovered_Bulk::FUN_101a4890(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *_Dst;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar3 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(param_2 + 1));
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    _Dst = (undefined4 *)(puVar2 + 4);
    *puVar2 = (undefined4)(1);
    puVar2[3] = (undefined4)(_Size);
    puVar2[2] = (undefined4)(0);
    puVar2[1] = (undefined4)(0);
    memcpy(_Dst,param_2,_Size);
    *(undefined1 *)((int)_Dst + _Size) = 0;
    *param_1 = (undefined4)(_Dst);
    puVar2[1] = (undefined4)(_Size);
    return;
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 101a4ab0; body size 245 bytes.
#line 1 "ENTRY_101a4ab0"

uint __thiscall Recovered_Bulk::FUN_101a4ab0(undefined4 param_2,undefined4 param_3)
{
  SCStr *param_1 = (SCStr *)this;
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  pcVar1 = (char *)(((SCStr *)(param_1))->getBuffer(0x200));
  if (*(int *)param_1 == 0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(*(int *)(*(int *)param_1 + -4));
  }
  puVar2 = (uint *)((uint *)thunk_FUN_101a6c80());
  uVar3 = (uint)(__stdio_common_vsprintf_p(*puVar2,puVar2[1],pcVar1,iVar4 + 1U,param_2,0,param_3));
  if ((int)uVar3 < 0) {
    uVar3 = (uint)(0xffffffff);
  }
  if ((int)uVar3 < 0) {
    uVar3 = (uint)(__stdio_common_vsprintf_p(*puVar2 | 2,puVar2[1],0,0,param_2,0,param_3));
    if ((int)uVar3 < 0) {
      uVar3 = (uint)(0xffffffff);
    }
    if ((int)uVar3 < 0) {
      ((SCStr *)(param_1))->empty();
      return (uint)(0);
    }
  }
  if (iVar4 + 1U <= uVar3) {
    pcVar1 = (char *)(((SCStr *)(param_1))->getBuffer(uVar3));
    if (*(int *)param_1 == 0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)(*(int *)(*(int *)param_1 + -4));
    }
    uVar3 = (uint)(__stdio_common_vsprintf_p(*puVar2,puVar2[1],pcVar1,iVar4 + 1,param_2,0,param_3));
    if ((int)uVar3 < 0) {
      uVar3 = (uint)(0xffffffff);
    }
  }
  if (0 < (int)uVar3) {
    *(uint *)(*(int *)param_1 + -0xc) = uVar3;
    return (uint)(uVar3);
  }
  ((SCStr *)(param_1))->empty();
  return (uint)(uVar3);
}


// Reference entry 101a4e80; body size 82 bytes.
#line 1 "ENTRY_101a4e80"

void __thiscall Recovered_Bulk::FUN_101a4e80(undefined4 *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)((char *)*param_2);
  if (pcVar4 == (char *)0x0) {
    uVar3 = (uint)(0);
  }
  else {
    uVar3 = (uint)(*(uint *)(pcVar4 + -0xc));
    if (uVar3 == 0) {
      pcVar2 = (char *)(pcVar4);
      do {
        cVar1 = (char)(*pcVar2);
        pcVar2 = (char *)(pcVar2 + 1);
      } while (cVar1 != '\0');
      uVar3 = (uint)((int)pcVar2 - (int)(pcVar4 + 1));
      *(uint *)(pcVar4 + -0xc) = uVar3;
      pcVar4 = (char *)((char *)*param_2);
    }
    if (pcVar4 != (char *)0x0) {
      ((SCStr *)(param_1))->prepend(pcVar4,uVar3);
      return;
    }
  }
  ((SCStr *)(param_1))->prepend("",uVar3);
  return;
}


// Reference entry 101a4ef0; body size 114 bytes.
#line 1 "ENTRY_101a4ef0"

SCStr * __thiscall Recovered_Bulk::FUN_101a4ef0(void *param_2,size_t param_3)
{
  SCStr *param_1 = (SCStr *)this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)(*(char **)param_1);
  if (pcVar2 == (char *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)(*(int *)(pcVar2 + -0xc));
    if (iVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      iVar4 = (int)((int)pcVar3 - (int)(pcVar2 + 1));
      *(int *)(pcVar2 + -0xc) = iVar4;
    }
  }
  pcVar2 = (char *)(((SCStr *)(param_1))->getBuffer(iVar4 + param_3));
  memmove(pcVar2 + param_3,pcVar2,iVar4 + 1);
  memcpy(pcVar2,param_2,param_3);
  *(size_t *)(*(int *)param_1 + -0xc) = iVar4 + param_3;
  return (SCStr *)(param_1);
}


// Reference entry 101a5030; body size 383 bytes.
#line 1 "ENTRY_101a5030"

SCStr * __thiscall Recovered_Bulk::FUN_101a5030(char *param_2,char *param_3,char param_4)
{
  SCStr *param_1 = (SCStr *)this;
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *_Str;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  
  pcVar3 = (char *)(*(char **)param_1);
  if (pcVar3 == (char *)0x0) {
    return (SCStr *)(param_1);
  }
  pcVar5 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar5);
    pcVar5 = (char *)(pcVar5 + 1);
  } while (cVar1 != '\0');
  uVar6 = (uint)((int)pcVar5 - (int)(param_2 + 1));
  pcVar5 = (char *)(param_3);
  do {
    cVar1 = (char)(*pcVar5);
    pcVar5 = (char *)(pcVar5 + 1);
  } while (cVar1 != '\0');
  uVar8 = (uint)(*(uint *)(pcVar3 + -0xc));
  iVar2 = (int)(((int)pcVar5 - (int)(param_3 + 1)) - uVar6);
  if (uVar8 == 0) {
    pcVar7 = (char *)(pcVar3);
    do {
      cVar1 = (char)(*pcVar7);
      pcVar7 = (char *)(pcVar7 + 1);
    } while (cVar1 != '\0');
    uVar8 = (uint)((int)pcVar7 - (int)(pcVar3 + 1));
    *(uint *)(pcVar3 + -0xc) = uVar8;
  }
  if (((uVar6 != 0) && (uVar6 <= uVar8)) &&
     (pcVar3 = strstr(*(char **)param_1,param_2), pcVar3 != (char *)0x0)) {
    iVar4 = (int)(1);
    if ((0 < iVar2) && (param_4 != '\0')) {
      pcVar3 = (char *)(strstr(pcVar3 + uVar6,param_2));
      if (pcVar3 == (char *)0x0) {
        iVar4 = (int)(1);
      }
      else {
        iVar4 = (int)(1);
        do {
          iVar4 = (int)(iVar4 + 1);
          pcVar3 = (char *)(strstr(pcVar3 + uVar6,param_2));
        } while (pcVar3 != (char *)0x0);
      }
    }
    pcVar3 = (char *)(((SCStr *)(param_1))->getBuffer(iVar4 * iVar2 + uVar8));
    pcVar7 = (char *)(strstr(pcVar3,param_2));
    do {
      _Str = (char *)(pcVar7 + uVar6);
      if (iVar2 != 0) {
        memmove(_Str + iVar2,_Str,(size_t)(pcVar3 + uVar8 + (1 - (int)_Str)));
        _Str = (char *)(_Str + iVar2);
      }
      memcpy(pcVar7,param_3,(int)pcVar5 - (int)(param_3 + 1));
      uVar8 = (uint)(uVar8 + iVar2);
      pcVar7 = (char *)(strstr(_Str,param_2));
    } while ((pcVar7 != (char *)0x0) && (param_4 != '\0'));
    *(uint *)(*(int *)param_1 + -0xc) = uVar8;
    return (SCStr *)(param_1);
  }
  return (SCStr *)(param_1);
}


// Reference entry 101a55c0; body size 256 bytes.
#line 1 "ENTRY_101a55c0"

void __thiscall Recovered_Bulk::FUN_101a55c0(int param_2,uint param_3)
{
  SCStr *param_1 = (SCStr *)this;
  int iVar1;
  char *_Memory;
  int iVar2;
  char *local_410;
  int local_40c;
  uint local_408;
  char local_404 [1024];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_410);
  local_408 = (uint)(param_3);
  local_40c = (int)(param_2);
  iVar2 = (int)(param_2 + param_3 * 2);
  if (param_3 < 0x400) {
    local_410 = (char *)(local_404);
    iVar1 = (int)(thunk_FUN_110683a0(&local_40c,iVar2,&local_410,&local_4,1));
    if (iVar1 != 2) {
      *local_410 = (char)('\0');
      ((SCStr *)(param_1))->set(local_404,(int)local_410 - (int)local_404);
      if (iVar1 != 2) goto LAB_101a56a3;
    }
  }
  _Memory = (char *)((char *)thunk_FUN_1148b586(local_408 * 4 + 1));
  local_40c = (int)(param_2);
  local_410 = (char *)(_Memory);
  iVar2 = (int)(thunk_FUN_110683a0(&local_40c,iVar2,&local_410,_Memory + local_408 * 4,1));
  if (iVar2 != 2) {
    *local_410 = (char)('\0');
  }
  ((SCStr *)(param_1))->set(_Memory,(int)local_410 - (int)_Memory);
  free(_Memory);
LAB_101a56a3:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 101a6400; body size 116 bytes.
#line 1 "ENTRY_101a6400"

SCStr * __fastcall FUN_101a6400(SCStr *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar2 = (char *)(*(char **)param_1);
  if (pcVar2 != (char *)0x0) {
    iVar6 = (int)(*(int *)(pcVar2 + -0xc));
    if (iVar6 == 0) {
      pcVar5 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar5);
        pcVar5 = (char *)(pcVar5 + 1);
      } while (cVar1 != '\0');
      iVar6 = (int)((int)pcVar5 - (int)(pcVar2 + 1));
      *(int *)(pcVar2 + -0xc) = iVar6;
      if (iVar6 == 0) {
        return (SCStr *)(param_1);
      }
    }
    pcVar2 = (char *)((char *)thunk_FUN_1148b586(iVar6 + 1));
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)(*(undefined1 **)param_1);
    }
    uVar3 = (uint)(thunk_FUN_1123fe90(pcVar2,iVar6,puVar4,iVar6,0,1,0));
    ((SCStr *)(param_1))->set(pcVar2,uVar3);
    ((SCStr *)(param_1))->trim("\n\r\t ");
    free(pcVar2);
  }
  return (SCStr *)(param_1);
}


// Reference entry 101a6520; body size 127 bytes.
#line 1 "ENTRY_101a6520"

SCStr * __fastcall FUN_101a6520(SCStr *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  pcVar2 = (char *)(*(char **)param_1);
  if (pcVar2 == (char *)0x0) {
    ((SCStr *)(param_1))->getBuffer(0);
    return (SCStr *)(param_1);
  }
  uVar5 = (uint)(*(uint *)(pcVar2 + -0xc));
  if (uVar5 == 0) {
    pcVar4 = (char *)(pcVar2);
    do {
      cVar1 = (char)(*pcVar4);
      pcVar4 = (char *)(pcVar4 + 1);
    } while (cVar1 != '\0');
    uVar5 = (uint)((int)pcVar4 - (int)(pcVar2 + 1));
    *(uint *)(pcVar2 + -0xc) = uVar5;
  }
  pcVar2 = (char *)(((SCStr *)(param_1))->getBuffer(uVar5));
  iVar6 = (int)(0);
  if ((int)uVar5 < 1) {
    return (SCStr *)(param_1);
  }
  do {
    iVar3 = (int)(tolower((int)pcVar2[iVar6]));
    pcVar2[iVar6] = (char)((char)iVar3);
    iVar6 = (int)(iVar6 + 1);
  } while (iVar6 < (int)uVar5);
  return (SCStr *)(param_1);
}


// Reference entry 101a65c0; body size 127 bytes.
#line 1 "ENTRY_101a65c0"

SCStr * __fastcall FUN_101a65c0(SCStr *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  pcVar2 = (char *)(*(char **)param_1);
  if (pcVar2 == (char *)0x0) {
    ((SCStr *)(param_1))->getBuffer(0);
    return (SCStr *)(param_1);
  }
  uVar5 = (uint)(*(uint *)(pcVar2 + -0xc));
  if (uVar5 == 0) {
    pcVar4 = (char *)(pcVar2);
    do {
      cVar1 = (char)(*pcVar4);
      pcVar4 = (char *)(pcVar4 + 1);
    } while (cVar1 != '\0');
    uVar5 = (uint)((int)pcVar4 - (int)(pcVar2 + 1));
    *(uint *)(pcVar2 + -0xc) = uVar5;
  }
  pcVar2 = (char *)(((SCStr *)(param_1))->getBuffer(uVar5));
  iVar6 = (int)(0);
  if ((int)uVar5 < 1) {
    return (SCStr *)(param_1);
  }
  do {
    iVar3 = (int)(toupper((int)pcVar2[iVar6]));
    pcVar2[iVar6] = (char)((char)iVar3);
    iVar6 = (int)(iVar6 + 1);
  } while (iVar6 < (int)uVar5);
  return (SCStr *)(param_1);
}


// Reference entry 101a6660; body size 155 bytes.
#line 1 "ENTRY_101a6660"

SCStr * __thiscall Recovered_Bulk::FUN_101a6660(char *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  char cVar1;
  char *pcVar2;
  char *_Str;
  size_t sVar3;
  char *pcVar4;
  uint uVar5;
  
  pcVar2 = (char *)(*(char **)param_1);
  if (pcVar2 == (char *)0x0) {
    uVar5 = (uint)(0);
  }
  else {
    uVar5 = (uint)(*(uint *)(pcVar2 + -0xc));
    if (uVar5 == 0) {
      pcVar4 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar4);
        pcVar4 = (char *)(pcVar4 + 1);
      } while (cVar1 != '\0');
      uVar5 = (uint)((int)pcVar4 - (int)(pcVar2 + 1));
      *(uint *)(pcVar2 + -0xc) = uVar5;
    }
  }
  _Str = (char *)(((SCStr *)(param_1))->getBuffer(uVar5));
  sVar3 = (size_t)(strspn(_Str,param_2));
  pcVar2 = (char *)(_Str + sVar3);
  pcVar4 = (char *)(pcVar2);
  do {
    cVar1 = (char)(*pcVar4);
    pcVar4 = (char *)(pcVar4 + 1);
  } while (cVar1 != '\0');
  if (sVar3 != 0) {
    memmove(_Str,pcVar2,(size_t)(pcVar4 + (1 - (int)(pcVar2 + 1))));
  }
  uVar5 = (uint)(((SCStr *)(_Str))->trimRear(param_2));
  if (uVar5 != 0) {
    *(uint *)(*(int *)param_1 + -0xc) = uVar5;
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->empty();
  return (SCStr *)(param_1);
}


// Reference entry 101a6730; body size 76 bytes.
#line 1 "ENTRY_101a6730"

void FUN_101a6730(char *param_1,char *param_2)

{
  char *_Src;
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  
  sVar2 = (size_t)(strspn(param_1,param_2));
  _Src = (char *)(param_1 + sVar2);
  pcVar3 = (char *)(_Src);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  if (sVar2 != 0) {
    memmove(param_1,_Src,(size_t)(pcVar3 + (1 - (int)(_Src + 1))));
  }
  ((SCStr *)(param_1))->trimRear(param_2);
  return;
}


// Reference entry 101a6790; body size 139 bytes.
#line 1 "ENTRY_101a6790"

SCStr * __thiscall Recovered_Bulk::FUN_101a6790(char *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *_Str;
  size_t sVar5;
  int iVar6;
  
  pcVar2 = (char *)(*(char **)param_1);
  if (pcVar2 == (char *)0x0) {
    uVar4 = (uint)(0);
  }
  else {
    uVar4 = (uint)(*(uint *)(pcVar2 + -0xc));
    if (uVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      uVar4 = (uint)((int)pcVar3 - (int)(pcVar2 + 1));
      *(uint *)(pcVar2 + -0xc) = uVar4;
    }
  }
  _Str = (char *)(((SCStr *)(param_1))->getBuffer(uVar4));
  sVar5 = (size_t)(strspn(_Str,param_2));
  pcVar2 = (char *)(_Str + sVar5);
  pcVar3 = (char *)(pcVar2);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  iVar6 = (int)((int)pcVar3 - (int)(pcVar2 + 1));
  if (sVar5 != 0) {
    memmove(_Str,pcVar2,iVar6 + 1);
  }
  if (iVar6 != 0) {
    *(int *)(*(int *)param_1 + -0xc) = iVar6;
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->empty();
  return (SCStr *)(param_1);
}


// Reference entry 101a6840; body size 65 bytes.
#line 1 "ENTRY_101a6840"

int FUN_101a6840(char *param_1,char *param_2)

{
  char *_Src;
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  
  sVar2 = (size_t)(strspn(param_1,param_2));
  _Src = (char *)(param_1 + sVar2);
  pcVar3 = (char *)(_Src);
  do {
    cVar1 = (char)(*pcVar3);
    pcVar3 = (char *)(pcVar3 + 1);
  } while (cVar1 != '\0');
  if (sVar2 != 0) {
    memmove(param_1,_Src,((int)pcVar3 - (int)(_Src + 1)) + 1);
  }
  return (int)((int)pcVar3 - (int)(_Src + 1));
}


// Reference entry 101a68a0; body size 88 bytes.
#line 1 "ENTRY_101a68a0"

SCStr * __thiscall Recovered_Bulk::FUN_101a68a0(char *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar2 = (char *)(*(char **)param_1);
  if (pcVar2 == (char *)0x0) {
    uVar4 = (uint)(0);
  }
  else {
    uVar4 = (uint)(*(uint *)(pcVar2 + -0xc));
    if (uVar4 == 0) {
      pcVar3 = (char *)(pcVar2);
      do {
        cVar1 = (char)(*pcVar3);
        pcVar3 = (char *)(pcVar3 + 1);
      } while (cVar1 != '\0');
      uVar4 = (uint)((int)pcVar3 - (int)(pcVar2 + 1));
      *(uint *)(pcVar2 + -0xc) = uVar4;
    }
  }
  pcVar2 = (char *)(((SCStr *)(param_1))->getBuffer(uVar4));
  uVar4 = (uint)(((SCStr *)(pcVar2))->trimRear(param_2));
  if (uVar4 != 0) {
    *(uint *)(*(int *)param_1 + -0xc) = uVar4;
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->empty();
  return (SCStr *)(param_1);
}


// Reference entry 101a6a70; body size 97 bytes.
#line 1 "ENTRY_101a6a70"

int __thiscall Recovered_Bulk::FUN_101a6a70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *_SubStr;
  
  pcVar3 = (char *)((char *)*param_1);
  _SubStr = (char *)("");
  if ((char *)*param_2 != (char *)0x0) {
    _SubStr = (char *)((char *)*param_2);
  }
  if (((pcVar3 != (char *)0x0) && (_SubStr != (char *)0x0)) && (*_SubStr != '\0')) {
    uVar1 = (uint)(thunk_FUN_11069bc0(pcVar3));
    uVar2 = (uint)(thunk_FUN_11069bc0(_SubStr));
    if (uVar2 <= uVar1) {
      pcVar3 = (char *)(strstr(pcVar3,_SubStr));
      if (pcVar3 != (char *)0x0) {
        iVar4 = (int)(thunk_FUN_11069bc0(pcVar3));
        return (int)(uVar1 - iVar4);
      }
    }
  }
  return (int)(-1);
}


// Reference entry 101a6b50; body size 118 bytes.
#line 1 "ENTRY_101a6b50"

int __thiscall Recovered_Bulk::FUN_101a6b50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *_SubStr;
  
  pcVar3 = (char *)((char *)*param_1);
  _SubStr = (char *)("");
  if ((char *)*param_2 != (char *)0x0) {
    _SubStr = (char *)((char *)*param_2);
  }
  if (((pcVar3 != (char *)0x0) && (_SubStr != (char *)0x0)) && (*_SubStr != '\0')) {
    uVar1 = (uint)(thunk_FUN_11069bc0(pcVar3));
    uVar2 = (uint)(thunk_FUN_11069bc0(_SubStr));
    if (uVar2 <= uVar1) {
      pcVar3 = (char *)(strstr(pcVar3,_SubStr));
      if (pcVar3 != (char *)0x0) {
        do {
          pcVar4 = (char *)(pcVar3);
          pcVar3 = (char *)(strstr(pcVar4 + 1,_SubStr));
        } while (pcVar3 != (char *)0x0);
        if (pcVar4 != (char *)0x0) {
          iVar5 = (int)(thunk_FUN_11069bc0(pcVar4));
          return (int)(uVar1 - iVar5);
        }
      }
    }
  }
  return (int)(-1);
}


// Reference entry 101a6f70; body size 342 bytes.
#line 1 "ENTRY_101a6f70"

undefined4 * __thiscall Recovered_Bulk::FUN_101a6f70(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_101a9bd0();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_101a70bc:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_101a70bc;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_101a70bc;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_101a70b6;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_101a70b6:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)((int)_Dst + uVar1 * 4));
  param_1[2] = (int)((int)(uVar7 + (int)_Dst));
  return (undefined4 *)(puVar2);
}


// Reference entry 101a7120; body size 342 bytes.
#line 1 "ENTRY_101a7120"

undefined4 * __thiscall Recovered_Bulk::FUN_101a7120(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_101a9be0();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_101a726c:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_101a726c;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_101a726c;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_101a7266;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_101a7266:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)((int)_Dst + uVar1 * 4));
  param_1[2] = (int)((int)(uVar7 + (int)_Dst));
  return (undefined4 *)(puVar2);
}


// Reference entry 101a7d50; body size 357 bytes.
#line 1 "ENTRY_101a7d50"

void FUN_101a7d50(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_8;
  int *local_4;
  
  piVar5 = (int *)(param_2 + ((int)param_3 - (int)param_2 >> 3));
  thunk_FUN_101a7560(param_2,piVar5,param_3 + -1,param_4);
  piVar4 = (int *)(piVar5 + 1);
  if (param_2 < piVar5) {
    iVar2 = (int)(*piVar5);
    do {
      iVar1 = (int)(piVar5[-1]);
      if ((iVar1 < iVar2) || (iVar2 < iVar1)) break;
      piVar5 = (int *)(piVar5 + -1);
      iVar2 = (int)(iVar1);
    } while (param_2 < piVar5);
  }
  piVar7 = (int *)(piVar4);
  local_4 = (int *)(piVar4);
  local_8 = (int *)(piVar5);
  piVar6 = (int *)(piVar5);
  if (piVar4 < param_3) {
    do {
      piVar7 = (int *)(piVar4);
      local_4 = (int *)(piVar4);
      if ((*piVar4 < *piVar5) || (*piVar5 < *piVar4)) break;
      piVar4 = (int *)(piVar4 + 1);
      piVar7 = (int *)(piVar4);
      local_4 = (int *)(piVar4);
    } while (piVar4 < param_3);
  }
joined_r0x101a7dc5:
  do {
    piVar3 = (int *)(piVar5);
    if (param_3 <= piVar4) {
joined_r0x101a7dfa:
      while (param_2 < piVar5) {
        piVar3 = (int *)(piVar3 + -1);
        iVar2 = (int)(*piVar3);
        piVar4 = (int *)(local_4);
        if (*piVar6 <= iVar2) {
          local_8 = (int *)(piVar5);
          if (*piVar6 < iVar2) break;
          piVar6 = (int *)(piVar6 + -1);
          if ((int *)(piVar6) != piVar3) {
            iVar1 = (int)(*piVar6);
            *piVar6 = (int)(iVar2);
            *piVar3 = (int)(iVar1);
          }
        }
        local_8 = (int *)(piVar5 + -1);
        piVar5 = (int *)(local_8);
      }
      if (piVar5 == (int *)(param_2)) {
        if (piVar4 == (int *)(param_3)) {
          param_1[1] = (undefined4)(piVar7);
          *param_1 = (undefined4)(piVar6);
          return;
        }
        if ((int *)(piVar7) != piVar4) {
          iVar2 = (int)(*piVar6);
          *piVar6 = (int)(*piVar7);
          *piVar7 = (int)(iVar2);
        }
        iVar2 = (int)(*piVar6);
        *piVar6 = (int)(*piVar4);
        *piVar4 = (int)(iVar2);
        piVar4 = (int *)(piVar4 + 1);
        piVar7 = (int *)(piVar7 + 1);
        local_4 = (int *)(piVar4);
        piVar6 = (int *)(piVar6 + 1);
      }
      else {
        piVar5 = (int *)(piVar5 + -1);
        local_8 = (int *)(piVar5);
        if (piVar4 == (int *)(param_3)) {
          piVar6 = (int *)(piVar6 + -1);
          if (piVar5 == (int *)(piVar6)) {
            iVar2 = (int)(*piVar6);
            piVar7 = (int *)(piVar7 + -1);
            *piVar6 = (int)(*piVar7);
            *piVar7 = (int)(iVar2);
          }
          else {
            piVar7 = (int *)(piVar7 + -1);
            iVar2 = (int)(*piVar5);
            *piVar5 = (int)(*piVar6);
            *piVar6 = (int)(iVar2);
            *piVar6 = (int)(*piVar7);
            *piVar7 = (int)(iVar2);
          }
        }
        else {
          iVar2 = (int)(*piVar4);
          *piVar4 = (int)(*piVar5);
          piVar4 = (int *)(piVar4 + 1);
          *piVar5 = (int)(iVar2);
          local_4 = (int *)(piVar4);
        }
      }
      goto joined_r0x101a7dc5;
    }
    iVar2 = (int)(*piVar4);
    piVar5 = (int *)(local_8);
    if (iVar2 <= *piVar6) {
      piVar3 = (int *)(local_8);
      local_4 = (int *)(piVar4);
      if (iVar2 < *piVar6) goto joined_r0x101a7dfa;
      if ((int *)(piVar7) != piVar4) {
        iVar1 = (int)(*piVar7);
        *piVar7 = (int)(iVar2);
        *piVar4 = (int)(iVar1);
      }
      piVar7 = (int *)(piVar7 + 1);
    }
    piVar4 = (int *)(piVar4 + 1);
    local_4 = (int *)(piVar4);
  } while( true );
}


// Reference entry 101a7f30; body size 193 bytes.
#line 1 "ENTRY_101a7f30"

void FUN_101a7f30(int param_1,int param_2,uint param_3,undefined4 *param_4,code *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)((int)(param_3 - 1) >> 1);
  iVar3 = (int)(param_2);
  while (iVar3 < iVar2) {
    iVar4 = (int)(iVar3 * 2 + 2);
    cVar1 = (char)((*param_5)(*(undefined4 *)(param_1 + iVar4 * 4),*(undefined4 *)(param_1 + 4 + iVar3 * 8)
                      ));
    if (cVar1 != '\0') {
      iVar4 = (int)(iVar3 * 2 + 1);
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
    iVar3 = (int)(iVar4);
  }
  if ((iVar3 == iVar2) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar3 = (int)(param_3 - 1);
  }
  if (iVar3 <= param_2) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *param_4;
    return;
  }
  do {
    iVar2 = (int)(iVar3 + -1 >> 1);
    cVar1 = (char)((*param_5)(*(undefined4 *)(param_1 + iVar2 * 4),*param_4));
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar3 = (int)(iVar2);
  } while (param_2 < iVar2);
  *(undefined4 *)(param_1 + iVar3 * 4) = *param_4;
  return;
}


// Reference entry 101a8030; body size 141 bytes.
#line 1 "ENTRY_101a8030"

void FUN_101a8030(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)((int)(param_3 - 1) >> 1);
  iVar1 = (int)(param_2);
  while (iVar1 < iVar3) {
    iVar2 = (int)(iVar1 * 2 + 2);
    if (*(int *)(param_1 + 8 + iVar1 * 8) < *(int *)(param_1 + -4 + iVar2 * 4)) {
      iVar2 = (int)(iVar1 * 2 + 1);
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar1 = (int)(iVar2);
  }
  if ((iVar1 == iVar3) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar1 = (int)(param_3 - 1);
  }
  if (iVar1 <= param_2) {
    *(int *)(param_1 + iVar1 * 4) = *param_4;
    return;
  }
  do {
    iVar2 = (int)(iVar1 + -1 >> 1);
    iVar3 = (int)(*(int *)(param_1 + iVar2 * 4));
    if (*param_4 <= iVar3) break;
    *(int *)(param_1 + iVar1 * 4) = iVar3;
    iVar1 = (int)(iVar2);
  } while (param_2 < iVar2);
  *(int *)(param_1 + iVar1 * 4) = *param_4;
  return;
}


// Reference entry 101a91a0; body size 81 bytes.
#line 1 "ENTRY_101a91a0"

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

void __fastcall FID_conflict__Tidy_101a91a0(int *param_1)

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


// Reference entry 101a9210; body size 81 bytes.
#line 1 "ENTRY_101a9210"

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

void __fastcall FID_conflict__Tidy_101a9210(int *param_1)

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


// Reference entry 101a9800; body size 89 bytes.
#line 1 "ENTRY_101a9800"

void __thiscall Recovered_Bulk::FUN_101a9800(int param_2,int param_3,int param_4)
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


// Reference entry 101a9870; body size 89 bytes.
#line 1 "ENTRY_101a9870"

void __thiscall Recovered_Bulk::FUN_101a9870(int param_2,int param_3,int param_4)
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


// Reference entry 101a99b0; body size 81 bytes.
#line 1 "ENTRY_101a99b0"

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

void __fastcall FID_conflict__Tidy_101a99b0(int *param_1)

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


// Reference entry 101a9a20; body size 81 bytes.
#line 1 "ENTRY_101a9a20"

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

void __fastcall FID_conflict__Tidy_101a9a20(int *param_1)

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


// Reference entry 101a9c10; body size 87 bytes.
#line 1 "ENTRY_101a9c10"

void * FUN_101a9c10(uint param_1)

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


// Reference entry 101a9c80; body size 87 bytes.
#line 1 "ENTRY_101a9c80"

void * FUN_101a9c80(uint param_1)

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


// Reference entry 101a9dc0; body size 66 bytes.
#line 1 "ENTRY_101a9dc0"

undefined4 __thiscall Recovered_Bulk::FUN_101a9dc0(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(0);
  if (param_1[3] - param_1[2] >> 2 != 0) {
    do {
      iVar1 = (int)((**(code **)(*param_1 + 0x18))(uVar2));
      if (param_2 == iVar1) {
        return (undefined4)(1);
      }
      uVar2 = (uint)(uVar2 + 1);
    } while (uVar2 < (uint)(param_1[3] - param_1[2] >> 2));
  }
  return (undefined4)(0);
}


// Reference entry 101a9e20; body size 133 bytes.
#line 1 "ENTRY_101a9e20"

void FUN_101a9e20(undefined4 *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x14));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIntArray);
    piVar2[2] = (int)(0);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    (**(code **)(*piVar2 + 4))(uVar1);
  }
  *param_1 = (undefined4)(piVar2);

  return;

 } catch (...) { }
}


// Reference entry 101aa470; body size 116 bytes.
#line 1 "ENTRY_101aa470"

void __fastcall FUN_101aa470(int param_1)

{
  int *_Src;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  size_t _Size;
  
  _Src = (int *)(*(int **)(param_1 + 0xc));
  piVar3 = (int *)(*(int **)(param_1 + 8));
  if (((int *)(piVar3) != _Src) && (piVar3 + 1 != _Src)) {
    piVar1 = (int *)(piVar3 + 1);
    iVar4 = (int)(*piVar3);
    while( true ) {
      piVar2 = (int *)(piVar1);
      piVar1 = (int *)(piVar2 + 1);
      if (iVar4 == *piVar2) break;
      piVar3 = (int *)(piVar2);
      iVar4 = (int)(*piVar2);
      if ((int *)(piVar1) == _Src) {
        return;
      }
    }
    for (; (int *)(piVar1) != _Src; piVar1 = piVar1 + 1) {
      if (*piVar3 != *piVar1) {
        piVar3 = (int *)(piVar3 + 1);
        *piVar3 = (int)(*piVar1);
      }
    }
    piVar3 = (int *)(piVar3 + 1);
    if ((int *)(piVar3) != _Src) {
      _Size = (size_t)(*(int *)(param_1 + 0xc) - (int)_Src);
      memmove(piVar3,_Src,_Size);
      *(size_t *)(param_1 + 0xc) = (int)piVar3 + _Size;
    }
  }
  return;
}


// Reference entry 101aa5c0; body size 139 bytes.
#line 1 "ENTRY_101aa5c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101aa5c0(undefined4 param_2,SCStr *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
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
  ((SCStr *)((SCStr *)((int)pvVar3 + 8)))->op_ctor(param_3);
  *(undefined4 *)((int)pvVar3 + 0xc) = *(undefined4 *)(param_3 + 4);
  piVar1 = (int *)(*(int **)(param_3 + 8));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)((int)pvVar3 + 0x10) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101aa720; body size 189 bytes.
#line 1 "ENTRY_101aa720"

undefined8 * __thiscall Recovered_Bulk::FUN_101aa720(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined8)(*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)param_2 + 0x24);

  thunk_FUN_101b1ce0(*(int *)(param_2 + 3) - *(int *)((int)param_2 + 0x14) >> 2,
                     *(undefined4 *)((int)param_1 + 0xc));
  thunk_FUN_101abf90(**(undefined4 **)((int)param_2 + 0xc),*(undefined4 **)((int)param_2 + 0xc));

  return (undefined8 *)(param_1);

 } catch (...) { }
}


// Reference entry 101aab50; body size 242 bytes.
#line 1 "ENTRY_101aab50"

int * __thiscall Recovered_Bulk::FUN_101aab50(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIAbilityDelegate");
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

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101aac80; body size 188 bytes.
#line 1 "ENTRY_101aac80"

int * __thiscall Recovered_Bulk::FUN_101aac80(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIAbilityDelegate");

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

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101ab4a0; body size 342 bytes.
#line 1 "ENTRY_101ab4a0"

undefined4 * __thiscall Recovered_Bulk::FUN_101ab4a0(void *param_2,undefined4 *param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  
  iVar3 = (int)(*param_1);
  iVar4 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar4 == 0x3fffffff) {
                    
    thunk_FUN_101b2900();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_101ab5ec:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_101ab5ec;
  uVar7 = (uint)(uVar7 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      _Dst = (void *)((void *)0x0);
    }
    else {
      _Dst = (void *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_101ab5ec;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_101ab5e6;
    _Dst = (void *)((void *)((int)pvVar5 + 0x23U & 0xffffffe0));
    *(void **)((int)_Dst - 4) = pvVar5;
  }
  puVar2 = (undefined4 *)((undefined4 *)((int)_Dst + ((int)param_2 - iVar3 >> 2) * 4));
  *puVar2 = (undefined4)(*param_3);
  pvVar5 = (void *)((void *)*param_1);
  if (param_2 == (void *)param_1[1]) {
    memmove(_Dst,pvVar5,param_1[1] - (int)pvVar5);
  }
  else {
    memmove(_Dst,pvVar5,(int)param_2 - (int)pvVar5);
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
LAB_101ab5e6:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)((int)_Dst + uVar1 * 4));
  param_1[2] = (int)((int)(uVar7 + (int)_Dst));
  return (undefined4 *)(puVar2);
}


// Reference entry 101ab650; body size 132 bytes.
#line 1 "ENTRY_101ab650"

void __thiscall Recovered_Bulk::FUN_101ab650(int *param_2,undefined4 param_3,uint param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  
  param_4 = (uint)(*(uint *)(param_1 + 0x20) & param_4);
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x14) + 4 + param_4 * 8));
  if (piVar1 == *(int **)(param_1 + 0xc)) {
    *param_2 = (int)((int)*(int **)(param_1 + 0xc));
    param_2[1] = (int)(0);
    return;
  }
  piVar2 = (int *)(*(int **)(*(int *)(param_1 + 0x14) + param_4 * 8));
  cVar4 = (char)(thunk_FUN_101a31e0(param_3,piVar1 + 2));
  while( true ) {
    if (cVar4 != '\0') {
      iVar3 = (int)(*piVar1);
      param_2[1] = (int)((int)piVar1);
      *param_2 = (int)(iVar3);
      return;
    }
    if (piVar1 == (int *)(piVar2)) break;
    piVar1 = (int *)((int *)piVar1[1]);
    cVar4 = (char)(thunk_FUN_101a31e0(param_3,piVar1 + 2));
  }
  *param_2 = (int)((int)piVar1);
  param_2[1] = (int)(0);
  return;
}


// Reference entry 101ab800; body size 122 bytes.
#line 1 "ENTRY_101ab800"

void FUN_101ab800(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_2 + 8)))->int_release();
  *(undefined4 *)(param_2 + 8) = 0;
  thunk_FUN_1148a50e(param_2,0x14);

  return;

 } catch (...) { }
}


// Reference entry 101aba20; body size 98 bytes.
#line 1 "ENTRY_101aba20"

void FUN_101aba20(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(param_2))->op_ctor(param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  piVar1 = (int *)(*(int **)(param_3 + 8));

  *(int **)(param_2 + 8) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 101abde0; body size 95 bytes.
#line 1 "ENTRY_101abde0"

void FUN_101abde0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 101ac230; body size 189 bytes.
#line 1 "ENTRY_101ac230"

undefined8 * __thiscall Recovered_Bulk::FUN_101ac230(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined8)(*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)param_2 + 0x24);

  thunk_FUN_101b1ce0(*(int *)(param_2 + 3) - *(int *)((int)param_2 + 0x14) >> 2,
                     *(undefined4 *)((int)param_1 + 0xc));
  thunk_FUN_101abf90(**(undefined4 **)((int)param_2 + 0xc),*(undefined4 **)((int)param_2 + 0xc));

  return (undefined8 *)(param_1);

 } catch (...) { }
}


// Reference entry 101acb00; body size 100 bytes.
#line 1 "ENTRY_101acb00"

SCStr * __thiscall Recovered_Bulk::FUN_101acb00(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  piVar1 = (int *)(*(int **)(param_2 + 8));

  *(int **)(param_1 + 8) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 101acb80; body size 189 bytes.
#line 1 "ENTRY_101acb80"

undefined8 * __thiscall Recovered_Bulk::FUN_101acb80(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
 try {
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (undefined8)(*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)param_1 + 0xc) = pvVar1;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)param_2 + 0x24);

  thunk_FUN_101b1ce0(*(int *)(param_2 + 3) - *(int *)((int)param_2 + 0x14) >> 2,
                     *(undefined4 *)((int)param_1 + 0xc));
  thunk_FUN_101abf90(**(undefined4 **)((int)param_2 + 0xc),*(undefined4 **)((int)param_2 + 0xc));

  return (undefined8 *)(param_1);

 } catch (...) { }
}


// Reference entry 101ace30; body size 128 bytes.
#line 1 "ENTRY_101ace30"

undefined4 * __thiscall Recovered_Bulk::FUN_101ace30(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCCountryList);
  param_1[2] = (undefined4)(*(undefined4 *)(param_2 + 8));
  param_1[3] = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  param_1[4] = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  param_1[5] = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  piVar1 = (int *)(*(int **)(param_2 + 0x18));

  param_1[6] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101ae880; body size 68 bytes.
#line 1 "ENTRY_101ae880"

void __fastcall FUN_101ae880(int *param_1)

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


// Reference entry 101ae960; body size 99 bytes.
#line 1 "ENTRY_101ae960"

void __fastcall FUN_101ae960(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  uVar3 = (uint)(*(int *)(param_1 + 0x18) - iVar1 & 0xfffffffc);
  iVar2 = (int)(iVar1);
  if (0xfff < uVar3) {
    iVar2 = (int)(*(int *)(iVar1 + -4));
    uVar3 = (uint)(uVar3 + 0x23);
    if (0x1f < (iVar1 - iVar2) - 4U) {
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1148a50e(iVar2,uVar3);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar4 = (undefined4 *)((undefined4 *)(param_1 + 0xc));
  thunk_FUN_101ab700(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 101ae9e0; body size 77 bytes.
#line 1 "ENTRY_101ae9e0"

void __fastcall FUN_101ae9e0(int *param_1)

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


// Reference entry 101aea50; body size 135 bytes.
#line 1 "ENTRY_101aea50"

void __fastcall FUN_101aea50(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar1 = (int)(*(int *)(param_1 + 4));
  if (iVar1 != 0) {
    piVar2 = (int *)(*(int **)(iVar1 + 0x10));

    if (piVar2 != (int *)0x0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      (**(code **)(*piVar2 + 8))(uVar3);
    }

    ((SCStr *)((SCStr *)(iVar1 + 8)))->int_release();
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }

  return;

 } catch (...) { }
}


// Reference entry 101aecb0; body size 81 bytes.
#line 1 "ENTRY_101aecb0"

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

void __fastcall FID_conflict__Tidy_101aecb0(int *param_1)

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


// Reference entry 101af0b0; body size 72 bytes.
#line 1 "ENTRY_101af0b0"

void __fastcall FUN_101af0b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    local_4 = (int *)(param_1);
    thunk_FUN_101ab700(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    local_4 = (int *)((int *)*piVar1);
    thunk_FUN_101abde0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&local_4);
  }
  return;
}


// Reference entry 101af110; body size 120 bytes.
#line 1 "ENTRY_101af110"

undefined8 * __thiscall Recovered_Bulk::FUN_101af110(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_1 != (undefined8 *)(param_2)) {
    *param_1 = (undefined8)(*param_2);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);

    thunk_FUN_101aaf60(**(undefined4 **)((int)param_2 + 0xc),*(undefined4 **)((int)param_2 + 0xc));
    uVar1 = (undefined4)(thunk_FUN_101b1fc0(*(undefined4 *)(param_1 + 2)));
    thunk_FUN_101b2090(uVar1);
  }

  return (undefined8 *)(param_1);

 } catch (...) { }
}


// Reference entry 101afeb0; body size 120 bytes.
#line 1 "ENTRY_101afeb0"

undefined8 * __thiscall Recovered_Bulk::FUN_101afeb0(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_1 != (undefined8 *)(param_2)) {
    *param_1 = (undefined8)(*param_2);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);

    thunk_FUN_101aaf60(**(undefined4 **)((int)param_2 + 0xc),*(undefined4 **)((int)param_2 + 0xc));
    uVar1 = (undefined4)(thunk_FUN_101b1fc0(*(undefined4 *)(param_1 + 2)));
    thunk_FUN_101b2090(uVar1);
  }

  return (undefined8 *)(param_1);

 } catch (...) { }
}


// Reference entry 101aff50; body size 120 bytes.
#line 1 "ENTRY_101aff50"

undefined8 * __thiscall Recovered_Bulk::FUN_101aff50(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  if (param_1 != (undefined8 *)(param_2)) {
    *param_1 = (undefined8)(*param_2);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);

    thunk_FUN_101aaf60(**(undefined4 **)((int)param_2 + 0xc),*(undefined4 **)((int)param_2 + 0xc));
    uVar1 = (undefined4)(thunk_FUN_101b1fc0(*(undefined4 *)(param_1 + 2)));
    thunk_FUN_101b2090(uVar1);
  }

  return (undefined8 *)(param_1);

 } catch (...) { }
}


// Reference entry 101b0190; body size 3004 bytes.
#line 1 "ENTRY_101b0190"

int __thiscall Recovered_Bulk::FUN_101b0190(int param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  iVar4 = (int)(*(int *)(param_2 + 0x18));
  if (iVar4 != *(int *)(param_1 + 0x18)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x1c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
      iVar4 = (int)(*(int *)(param_2 + 0x18));
    }
    *(int *)(param_1 + 0x18) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x1c));
    *(int **)(param_1 + 0x1c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x24));
  if (iVar4 != *(int *)(param_1 + 0x24)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x28));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x24));
    }
    *(int *)(param_1 + 0x24) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x28));
    *(int **)(param_1 + 0x28) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x2c));
  if (iVar4 != *(int *)(param_1 + 0x2c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x30));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x2c));
    }
    *(int *)(param_1 + 0x2c) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x30));
    *(int **)(param_1 + 0x30) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x34));
  if (iVar4 != *(int *)(param_1 + 0x34)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x38));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x34));
    }
    *(int *)(param_1 + 0x34) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x38));
    *(int **)(param_1 + 0x38) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x3c));
  if (iVar4 != *(int *)(param_1 + 0x3c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x40));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x3c));
    }
    *(int *)(param_1 + 0x3c) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x40));
    *(int **)(param_1 + 0x40) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x44));
  if (iVar4 != *(int *)(param_1 + 0x44)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x48));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x44));
    }
    *(int *)(param_1 + 0x44) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x48));
    *(int **)(param_1 + 0x48) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  if ((undefined8 *)(param_1 + 100) != (undefined8 *)(param_2 + 100)) {
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);

    thunk_FUN_101aaf60(**(undefined4 **)(param_2 + 0x70),*(undefined4 **)(param_2 + 0x70));
    uVar3 = (undefined4)(thunk_FUN_101b1fc0(*(undefined4 *)(param_1 + 0x74)));
    thunk_FUN_101b2090(uVar3);

  }
  iVar4 = (int)(*(int *)(param_2 + 0x8c));
  if (iVar4 != *(int *)(param_1 + 0x8c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x90));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x8c));
    }
    *(int *)(param_1 + 0x8c) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x90));
    *(int **)(param_1 + 0x90) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x94));
  if (iVar4 != *(int *)(param_1 + 0x94)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x98));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x94));
    }
    *(int *)(param_1 + 0x94) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x98));
    *(int **)(param_1 + 0x98) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x9c));
  if (iVar4 != *(int *)(param_1 + 0x9c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xa0));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x9c));
    }
    *(int *)(param_1 + 0x9c) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xa0));
    *(int **)(param_1 + 0xa0) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0xa4));
  if (iVar4 != *(int *)(param_1 + 0xa4)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xa8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0xa4));
    }
    *(int *)(param_1 + 0xa4) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xa8));
    *(int **)(param_1 + 0xa8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0xac));
  if (iVar4 != *(int *)(param_1 + 0xac)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xb0));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0xac));
    }
    *(int *)(param_1 + 0xac) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xb0));
    *(int **)(param_1 + 0xb0) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0xb4));
  if (iVar4 != *(int *)(param_1 + 0xb4)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xb8));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0xb4));
    }
    *(int *)(param_1 + 0xb4) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xb8));
    *(int **)(param_1 + 0xb8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0xbc));
  if (iVar4 != *(int *)(param_1 + 0xbc)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc0));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0xbc));
    }
    *(int *)(param_1 + 0xbc) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xc0));
    *(int **)(param_1 + 0xc0) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  iVar4 = (int)(*(int *)(param_2 + 200));
  if (iVar4 != *(int *)(param_1 + 200)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xcc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 200));
    }
    *(int *)(param_1 + 200) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xcc));
    *(int **)(param_1 + 0xcc) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  iVar4 = (int)(*(int *)(param_2 + 0xe0));
  if (iVar4 != *(int *)(param_1 + 0xe0)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xe4));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0xe0));
    }
    *(int *)(param_1 + 0xe0) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xe4));
    *(int **)(param_1 + 0xe4) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0xe8));
  if (iVar4 != *(int *)(param_1 + 0xe8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xec));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0xe8));
    }
    *(int *)(param_1 + 0xe8) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xec));
    *(int **)(param_1 + 0xec) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0xf0));
  if (iVar4 != *(int *)(param_1 + 0xf0)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xf4));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0xf0));
    }
    *(int *)(param_1 + 0xf0) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xf4));
    *(int **)(param_1 + 0xf4) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0xf8));
  if (iVar4 != *(int *)(param_1 + 0xf8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xfc));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0xf8));
    }
    *(int *)(param_1 + 0xf8) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0xfc));
    *(int **)(param_1 + 0xfc) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x100));
  if (iVar4 != *(int *)(param_1 + 0x100)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x104));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x100));
    }
    *(int *)(param_1 + 0x100) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x104));
    *(int **)(param_1 + 0x104) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x108));
  if (iVar4 != *(int *)(param_1 + 0x108)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x108));
    }
    *(int *)(param_1 + 0x108) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x10c));
    *(int **)(param_1 + 0x10c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x110));
  if (iVar4 != *(int *)(param_1 + 0x110)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x114));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x110));
    }
    *(int *)(param_1 + 0x110) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x114));
    *(int **)(param_1 + 0x114) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x118));
  if (iVar4 != *(int *)(param_1 + 0x118)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x11c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x118));
    }
    *(int *)(param_1 + 0x118) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x11c));
    *(int **)(param_1 + 0x11c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x120));
  if (iVar4 != *(int *)(param_1 + 0x120)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x124));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x120));
    }
    *(int *)(param_1 + 0x120) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x124));
    *(int **)(param_1 + 0x124) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x128));
  if (iVar4 != *(int *)(param_1 + 0x128)) {
    piVar1 = (int *)(*(int **)(param_1 + 300));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 300) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x128));
    }
    *(int *)(param_1 + 0x128) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 300));
    *(int **)(param_1 + 300) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x130));
  if (iVar4 != *(int *)(param_1 + 0x130)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x134));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x134) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x130));
    }
    *(int *)(param_1 + 0x130) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x134));
    *(int **)(param_1 + 0x134) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  iVar4 = (int)(*(int *)(param_2 + 0x14c));
  if (iVar4 != *(int *)(param_1 + 0x14c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x150));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
      *(undefined4 *)(param_1 + 0x150) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x14c));
    }
    *(int *)(param_1 + 0x14c) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x150));
    *(int **)(param_1 + 0x150) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  iVar4 = (int)(*(int *)(param_2 + 0x158));
  if (iVar4 != *(int *)(param_1 + 0x158)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x15c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x158));
    }
    *(int *)(param_1 + 0x158) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x15c));
    *(int **)(param_1 + 0x15c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x160));
  if (iVar4 != *(int *)(param_1 + 0x160)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x164));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x160));
    }
    *(int *)(param_1 + 0x160) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x164));
    *(int **)(param_1 + 0x164) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x168));
  if (iVar4 != *(int *)(param_1 + 0x168)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x16c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0x16c) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x168));
    }
    *(int *)(param_1 + 0x168) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x16c));
    *(int **)(param_1 + 0x16c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x170));
  if (iVar4 != *(int *)(param_1 + 0x170)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x174));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(undefined4 *)(param_1 + 0x174) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x170));
    }
    *(int *)(param_1 + 0x170) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x174));
    *(int **)(param_1 + 0x174) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x179) = *(undefined1 *)(param_2 + 0x179);
  *(undefined1 *)(param_1 + 0x17a) = *(undefined1 *)(param_2 + 0x17a);
  *(undefined1 *)(param_1 + 0x17b) = *(undefined1 *)(param_2 + 0x17b);
  *(undefined1 *)(param_1 + 0x17c) = *(undefined1 *)(param_2 + 0x17c);
  iVar4 = (int)(*(int *)(param_2 + 0x180));
  if (iVar4 != *(int *)(param_1 + 0x180)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x184));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x180));
    }
    *(int *)(param_1 + 0x180) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x184));
    *(int **)(param_1 + 0x184) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined1 *)(param_1 + 0x18c) = *(undefined1 *)(param_2 + 0x18c);
  iVar4 = (int)(*(int *)(param_2 + 400));
  if (iVar4 != *(int *)(param_1 + 400)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x194));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 400) = 0;
      *(undefined4 *)(param_1 + 0x194) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 400));
    }
    *(int *)(param_1 + 400) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x194));
    *(int **)(param_1 + 0x194) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  iVar4 = (int)(*(int *)(param_2 + 0x198));
  if (iVar4 != *(int *)(param_1 + 0x198)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x19c));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(undefined4 *)(param_1 + 0x19c) = 0;
      (**(code **)(*piVar1 + 8))();
      iVar4 = (int)(*(int *)(param_2 + 0x198));
    }
    *(int *)(param_1 + 0x198) = iVar4;
    piVar1 = (int *)(*(int **)(param_2 + 0x19c));
    *(int **)(param_1 + 0x19c) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 101b1ce0; body size 228 bytes.
#line 1 "ENTRY_101b1ce0"

void __thiscall Recovered_Bulk::FUN_101b1ce0(uint param_2,undefined4 param_3)
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
    thunk_FUN_101abde0(*param_1,param_1[1],&param_3);
    return;
  }
  if (0x3fffffff < param_2) {
LAB_101b1dbf:
                    
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_101b1dbf;
    pvVar3 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar3 == (void *)0x0) goto LAB_101b1da4;
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
LAB_101b1da4:
                    
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


// Reference entry 101b1e40; body size 89 bytes.
#line 1 "ENTRY_101b1e40"

void __thiscall Recovered_Bulk::FUN_101b1e40(int param_2,int param_3,int param_4)
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


// Reference entry 101b1f30; body size 115 bytes.
#line 1 "ENTRY_101b1f30"

void __thiscall Recovered_Bulk::FUN_101b1f30(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
 try {
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined8)(*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  thunk_FUN_101aaf60(**(undefined4 **)((int)param_2 + 0xc),*(undefined4 **)((int)param_2 + 0xc));
  uVar1 = (undefined4)(thunk_FUN_101b1fc0(*(undefined4 *)(param_1 + 2)));
  thunk_FUN_101b2090(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 101b1fc0; body size 137 bytes.
#line 1 "ENTRY_101b1fc0"

uint __thiscall Recovered_Bulk::FUN_101b1fc0(int param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x24));
  ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
               *(float *)(param_1 + 8)));
  uVar2 = (uint)(thunk_FUN_1148ac80());
  uVar3 = (uint)(8);
  if (8 < uVar2) {
    uVar3 = (uint)(uVar2);
  }
  if (uVar3 <= uVar1) {
    return (uint)(uVar1);
  }
  if ((0x1ff < uVar1) || (uVar2 = uVar1 * 8, uVar1 * 8 < uVar3)) {
    uVar2 = (uint)(uVar3);
  }
  return (uint)(uVar2);
}


// Reference entry 101b2480; body size 88 bytes.
#line 1 "ENTRY_101b2480"

void __thiscall Recovered_Bulk::FUN_101b2480(int param_2)
{
  int param_1 = (int )this;
  double dVar1;
  
  dVar1 = (double)(ceil((double)((float)((double)param_2 + (double)(&DAT_11880fb0)[-(param_2 >> 0x1f)]) /
                       *(float *)(param_1 + 8))));
  thunk_FUN_1148ac80(dVar1);
  return;
}


// Reference entry 101b2580; body size 77 bytes.
#line 1 "ENTRY_101b2580"

void __fastcall FUN_101b2580(int *param_1)

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


// Reference entry 101b2610; body size 81 bytes.
#line 1 "ENTRY_101b2610"

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

void __fastcall FID_conflict__Tidy_101b2610(int *param_1)

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


// Reference entry 101b2eb0; body size 173 bytes.
#line 1 "ENTRY_101b2eb0"

SCIAction * __thiscall Recovered_Bulk::FUN_101b2eb0(SCIAction *param_2,undefined4 param_3,int *param_4)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x34))
                            (&param_4,param_3,param_4,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b2f90; body size 173 bytes.
#line 1 "ENTRY_101b2f90"

SCIAction * __thiscall Recovered_Bulk::FUN_101b2f90(SCIAction *param_2,undefined4 param_3,int *param_4)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 100))
                            (&param_4,param_3,param_4,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3070; body size 170 bytes.
#line 1 "ENTRY_101b3070"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3070(SCIAction *param_2,int *param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x30))
                            (&param_3,param_3,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3150; body size 170 bytes.
#line 1 "ENTRY_101b3150"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3150(SCIAction *param_2,int *param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x58))
                            (&param_3,param_3,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3230; body size 176 bytes.
#line 1 "ENTRY_101b3230"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3230(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x5c))
                            (&param_5,param_3,param_4,param_5,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3310; body size 191 bytes.
#line 1 "ENTRY_101b3310"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3310(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,int *param_10)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x4c))
                            (&param_10,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             param_10,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_10 != (int *)0x0) {
    (**(code **)(*param_10 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3400; body size 173 bytes.
#line 1 "ENTRY_101b3400"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3400(SCIAction *param_2,undefined4 param_3,int *param_4)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x2c))
                            (&param_4,param_3,param_4,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b34e0; body size 185 bytes.
#line 1 "ENTRY_101b34e0"

SCIAction * __thiscall Recovered_Bulk::FUN_101b34e0(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int *param_8)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x50))
                            (&param_8,param_3,param_4,param_5,param_6,param_7,param_8,
                             DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_8 != (int *)0x0) {
    (**(code **)(*param_8 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b35d0; body size 188 bytes.
#line 1 "ENTRY_101b35d0"

SCIAction * __thiscall Recovered_Bulk::FUN_101b35d0(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int *param_9)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x40))
                            (&param_9,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_9 != (int *)0x0) {
    (**(code **)(*param_9 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b36c0; body size 194 bytes.
#line 1 "ENTRY_101b36c0"

SCIAction * __thiscall Recovered_Bulk::FUN_101b36c0(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,int *param_11)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x44))
                            (&param_11,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             param_10,param_11,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_11 != (int *)0x0) {
    (**(code **)(*param_11 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b37c0; body size 151 bytes.
#line 1 "ENTRY_101b37c0"

undefined4 * __thiscall Recovered_Bulk::FUN_101b37c0(undefined4 *param_2,int param_3,bool param_4,SCStr *param_5,
            undefined4 param_6)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(local_14))->int_allocRep("");

  puVar3 = (undefined4 *)((undefined4 *)
           ((SCLibrary *)(param_1))->createSCDisplayMessagePopupAction((SCStr *)&local_18,local_14,param_3,param_4,param_5));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(param_6,uVar2);
  }

  ((SCStr *)(local_14))->int_release();

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3880; body size 179 bytes.
#line 1 "ENTRY_101b3880"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3880(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x48))
                            (&param_6,param_3,param_4,param_5,param_6,
                             DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_6 != (int *)0x0) {
    (**(code **)(*param_6 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3960; body size 176 bytes.
#line 1 "ENTRY_101b3960"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3960(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x54))
                            (&param_5,param_3,param_4,param_5,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3a40; body size 176 bytes.
#line 1 "ENTRY_101b3a40"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3a40(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x60))
                            (&param_5,param_3,param_4,param_5,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3b20; body size 170 bytes.
#line 1 "ENTRY_101b3b20"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3b20(SCIAction *param_2,int *param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x3c))
                            (&param_3,param_3,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3c00; body size 173 bytes.
#line 1 "ENTRY_101b3c00"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3c00(SCIAction *param_2,undefined4 param_3,int *param_4)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x78))
                            (&param_4,param_3,param_4,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3ce0; body size 173 bytes.
#line 1 "ENTRY_101b3ce0"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3ce0(SCIAction *param_2,int *param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x80))
                            (&param_3,param_3,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3dc0; body size 173 bytes.
#line 1 "ENTRY_101b3dc0"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3dc0(SCIAction *param_2,undefined4 param_3,int *param_4)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x14))
                            (&param_4,param_3,param_4,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3ea0; body size 173 bytes.
#line 1 "ENTRY_101b3ea0"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3ea0(SCIAction *param_2,undefined4 param_3,int *param_4)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x74))
                            (&param_4,param_3,param_4,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b3f80; body size 170 bytes.
#line 1 "ENTRY_101b3f80"

SCIAction * __thiscall Recovered_Bulk::FUN_101b3f80(SCIAction *param_2,int *param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x70))
                            (&param_3,param_3,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b4180; body size 176 bytes.
#line 1 "ENTRY_101b4180"

SCIAction * __thiscall Recovered_Bulk::FUN_101b4180(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x28))
                            (&param_5,param_3,param_4,param_5,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b4260; body size 99 bytes.
#line 1 "ENTRY_101b4260"

undefined4 * __thiscall Recovered_Bulk::FUN_101b4260(undefined4 *param_2,int *param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)(param_3);
  puVar3 = (undefined4 *)((undefined4 *)((SCLibrary *)(param_1))->createSCRunAsyncIOOperationAction((SCIOp *)&param_3));
  uVar1 = (undefined4)(*puVar3);
  *puVar3 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(piVar4,uVar2);
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101b42f0; body size 135 bytes.
#line 1 "ENTRY_101b42f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101b42f0(undefined4 *param_2,undefined4 param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  SCLibrary *pSStack_20;
  uint uStack_1c;
  SCLibrary *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uStack_1c = (uint)(DAT_12126b84);

  pSStack_20 = (SCLibrary *)(param_1);
  local_14 = (SCLibrary *)(param_1);
  ((SCStr *)((SCStr *)&pSStack_20))->op_ctor((SCStr *)&stack0x0000000c);
  puVar2 = (undefined4 *)((undefined4 *)
           ((SCLibrary *)(param_1))->createSCRunAsyncIOOperationActionWithMessage(&local_14,param_3));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  if (local_14 != (SCLibrary *)0x0) {
    (**(code **)(*(int *)local_14 + 8))();
  }

  ((SCStr *)((SCStr *)&stack0x0000000c))->int_release();

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 101b43a0; body size 191 bytes.
#line 1 "ENTRY_101b43a0"

SCIAction * __thiscall Recovered_Bulk::FUN_101b43a0(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,int *param_10)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x20))
                            (&param_10,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             param_10,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_10 != (int *)0x0) {
    (**(code **)(*param_10 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b4490; body size 170 bytes.
#line 1 "ENTRY_101b4490"

SCIAction * __thiscall Recovered_Bulk::FUN_101b4490(SCIAction *param_2,int *param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x18))
                            (&param_3,param_3,DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b4570; body size 200 bytes.
#line 1 "ENTRY_101b4570"

SCIAction * __thiscall Recovered_Bulk::FUN_101b4570(SCIAction *param_2,undefined4 param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  SCLibrary *pSStack_30;
  uint uStack_2c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uStack_2c = (uint)(DAT_12126b84);

  piVar2 = (int *)(*(int **)(param_1 + 0x108));

  pSStack_30 = (SCLibrary *)(param_1);
  ((SCStr *)((SCStr *)&pSStack_30))->op_ctor((SCStr *)&stack0x0000000c);
  piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0x1c))(&local_14,param_3));
  piVar2 = (int *)((int *)*piVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  ((SCStr *)((SCStr *)&stack0x0000000c))->int_release();

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b4670; body size 179 bytes.
#line 1 "ENTRY_101b4670"

SCIAction * __thiscall Recovered_Bulk::FUN_101b4670(SCIAction *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x68))
                            (&param_6,param_3,param_4,param_5,param_6,
                             DAT_12126b84 ));
  piVar2 = (int *)((int *)*piVar1);

  *piVar1 = (int)(0);
  if (piVar2 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_6 != (int *)0x0) {
    (**(code **)(*param_6 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCLibrary *)(param_1))->createActionContextForAction(param_2);

  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar2);
  }

  return (SCIAction *)(param_2);

 } catch (...) { }
}


// Reference entry 101b4750; body size 257 bytes.
#line 1 "ENTRY_101b4750"

int * __thiscall Recovered_Bulk::FUN_101b4750(int *param_2,int *param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0x108) + 0x38))
                            (&param_3,param_3,DAT_12126b84 ));
  piVar4 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  piVar3 = (int *)((int *)((SCLibrary *)(param_1))->createActionContextForAction((SCIAction *)&local_14));
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  *piVar3 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(piVar4));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (int *)(param_2);

 } catch (...) { }
}


// Reference entry 101b49f0; body size 675 bytes.
#line 1 "ENTRY_101b49f0"

void __thiscall Recovered_Bulk::FUN_101b49f0(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->beginsWith("SCIHousehold"));
  if (!bVar1) {
    return;
  }
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onCurrentZoneGroupChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onActiveStreamsChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onAreasChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onSearchablesListChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x14))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onAssociatedDeviceChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onSoftwareUpdateAvailableChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x1c))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onFinishedConnectingToZPs"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onNetworkChanged"));
      if (bVar1) {
        (**(code **)(**(int **)(param_1 + 8) + 0x38))(param_2);
        return;
      }
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onSettingsChanged"));
      if (bVar1) {
        (**(code **)(**(int **)(param_1 + 8) + 0x20))(param_2);
        return;
      }
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onSecureSettingsChanged"));
      if (bVar1) {
        (**(code **)(**(int **)(param_1 + 8) + 0x24))(param_2);
        return;
      }
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onNetSettingsChanged"));
      if (bVar1) {
        (**(code **)(**(int **)(param_1 + 8) + 0x30))(param_2);
        return;
      }
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onVoiceAccountInfoChanged"));
      if (bVar1) {
        (**(code **)(**(int **)(param_1 + 8) + 0x34))(param_2);
        return;
      }
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onLifecycleStateChanged"));
      if (bVar1) {
        (**(code **)(**(int **)(param_1 + 8) + 0x40))(param_2);
        return;
      }
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onLifecycleTargetChanged"));
      if (bVar1) {
        (**(code **)(**(int **)(param_1 + 8) + 0x44))(param_2);
        return;
      }
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onLifecycleFetchedDevices"));
      if (!bVar1) {
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onUpdateManifestParsed"));
        if (bVar1) {
          (**(code **)(**(int **)(param_1 + 8) + 0x4c))(param_2);
          return;
        }
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onSystemNameChanged"));
        if (bVar1) {
          (**(code **)(**(int **)(param_1 + 8) + 0x54))(param_2);
          return;
        }
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onContentAccessChanged"));
        if (bVar1) {
          (**(code **)(**(int **)(param_1 + 8) + 0x58))(param_2);
          return;
        }
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIHousehold:onZPUpdateComplete"));
        if (!bVar1) {
          return;
        }
        (**(code **)(**(int **)(param_1 + 8) + 0x3c))(param_2);
        return;
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x48))(param_2);
      return;
    }
  }
  (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
  return;
}


// Reference entry 101b4dd0; body size 117 bytes.
#line 1 "ENTRY_101b4dd0"

SCStr * FUN_101b4dd0(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("unsupported");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("disallowed");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("unavailable");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("available");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("invalid");
    return (SCStr *)(param_1);
  }
}


// Reference entry 101b4e80; body size 241 bytes.
#line 1 "ENTRY_101b4e80"

SCStr * FUN_101b4e80(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("ble");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("wifiScan");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("accessSSID");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("lanScan");
    return (SCStr *)(param_1);
  case 4:
    ((SCStr *)(param_1))->int_allocRep("accessLocation");
    return (SCStr *)(param_1);
  case 5:
    ((SCStr *)(param_1))->int_allocRep("nfcScan");
    return (SCStr *)(param_1);
  case 6:
    ((SCStr *)(param_1))->int_allocRep("accessMicrophone");
    return (SCStr *)(param_1);
  case 7:
    ((SCStr *)(param_1))->int_allocRep("combinedBtPairing");
    return (SCStr *)(param_1);
  case 8:
    ((SCStr *)(param_1))->int_allocRep("scheduleExactAlarms");
    return (SCStr *)(param_1);
  case 9:
    ((SCStr *)(param_1))->int_allocRep("postNotifications");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("unknown");
    return (SCStr *)(param_1);
  }
}


// Reference entry 101b5070; body size 406 bytes.
#line 1 "ENTRY_101b5070"

SCStr * __thiscall Recovered_Bulk::FUN_101b5070(SCStr *param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  SCStr *pSVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(param_2))->int_allocRep("");
  uVar9 = (uint)(0);

  puVar8 = (undefined4 *)((undefined4 *)(param_1 + 8));
  do {
    ((SCStr *)((SCStr *)&local_14))->int_allocRep(": ");

    uVar3 = (undefined4)(thunk_FUN_101b4e80(&local_1c,uVar9,uVar2));
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    pSVar4 = (SCStr *)((SCStr *)thunk_FUN_101a2e90(&local_18,uVar3,&local_14));
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    pcVar7 = (char *)("");
    if (*(char **)pSVar4 != (char *)0x0) {
      pcVar7 = (char *)(*(char **)pSVar4);
    }
    uVar5 = (uint)(((SCStr *)(pSVar4))->length());
    ((SCStr *)(param_2))->append(pcVar7,uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    ((SCStr *)((SCStr *)&local_18))->int_release();

    local_8 = (uint)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();


    ((SCStr *)((SCStr *)&local_14))->int_release();

    local_8 = (uint)(local_8 & 0xffffff00);
    pSVar4 = (SCStr *)((SCStr *)thunk_FUN_101b4dd0(&local_20,*puVar8));

    pcVar7 = (char *)("");
    if (*(char **)pSVar4 != (char *)0x0) {
      pcVar7 = (char *)(*(char **)pSVar4);
    }
    uVar5 = (uint)(((SCStr *)(pSVar4))->length());
    ((SCStr *)(param_2))->append(pcVar7,uVar5);

    ((SCStr *)((SCStr *)&local_20))->int_release();

    local_8 = (uint)(local_8 & 0xffffff00);
    pcVar7 = (char *)("\n");
    if (8 < uVar9) {
      pcVar7 = (char *)("");
    }
    pcVar6 = (char *)(pcVar7);
    do {
      cVar1 = (char)(*pcVar6);
      pcVar6 = (char *)(pcVar6 + 1);
    } while (cVar1 != '\0');
    ((SCStr *)(param_2))->append(pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
    uVar9 = (uint)(uVar9 + 1);
    puVar8 = (undefined4 *)(puVar8 + 1);
  } while ((int)uVar9 < 10);

  return (SCStr *)(param_2);

 } catch (...) { }
}


// Reference entry 101b52e0; body size 117 bytes.
#line 1 "ENTRY_101b52e0"

SCStr * FUN_101b52e0(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("unknown");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("unsupported");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("disabled");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("enabled");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("invalid");
    return (SCStr *)(param_1);
  }
}


// Reference entry 101b5390; body size 221 bytes.
#line 1 "ENTRY_101b5390"

SCStr * FUN_101b5390(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("bluetooth");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("bluetoothPermissions");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("unknown");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("locationServices");
    return (SCStr *)(param_1);
  case 4:
    ((SCStr *)(param_1))->int_allocRep("locationPermissions");
    return (SCStr *)(param_1);
  case 5:
    ((SCStr *)(param_1))->int_allocRep("wifi");
    return (SCStr *)(param_1);
  case 6:
    ((SCStr *)(param_1))->int_allocRep("nfcService");
    return (SCStr *)(param_1);
  case 7:
    ((SCStr *)(param_1))->int_allocRep("nfcPermissions");
    return (SCStr *)(param_1);
  case 8:
    ((SCStr *)(param_1))->int_allocRep("microphonePermissions");
    return (SCStr *)(param_1);
  case 9:
    ((SCStr *)(param_1))->int_allocRep("alarmPermissions");
    return (SCStr *)(param_1);
  }
}


// Reference entry 101b5580; body size 511 bytes.
#line 1 "ENTRY_101b5580"

void __fastcall FUN_101b5580(int param_1)

{
 try {
  char cVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  local_18 = (int *)((int *)0x0);

  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar6 = (int *)((int *)0x0);
  if (*(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(**(int **)(*(int *)(pSVar3 + 0x4c) + 0xe8) + 4))(&local_24,0,uVar2));
    piVar6 = (int *)((int *)*piVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    *piVar4 = (int)(0);
    if (piVar6 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (piVar6 == (int *)0x0) {
      piVar8 = (int *)((int *)0x0);
      local_1c = (int *)((int *)0x0);
      local_18 = (int *)((int *)0x0);
    }
    else {
      ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCIAbilityDelegate");
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      puVar5 = (undefined4 *)((undefined4 *)(**(code **)*piVar6)(&local_20,&local_14));
      piVar8 = (int *)((int *)*puVar5);
      *puVar5 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      local_1c = (int *)(piVar8);
      local_18 = (int *)(piVar8);
      if (local_20 != (int *)0x0) {
        (**(code **)(*local_20 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      ((SCStr *)((SCStr *)&local_14))->int_release();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0;
    piVar6 = (int *)((int *)0x0);
    if (piVar8 != (int *)0x0) {
      if (piVar8 != *(int **)(param_1 + 0x70)) {
        piVar6 = (int *)(*(int **)(param_1 + 0x74));
        if (piVar6 != (int *)0x0) {
          *(undefined4 *)(param_1 + 0x70) = 0;
          *(undefined4 *)(param_1 + 0x74) = 0;
          (**(code **)(*piVar6 + 8))();
        }
        *(int **)(param_1 + 0x70) = piVar8;
        piVar6 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
        *(int **)(param_1 + 0x74) = piVar6;
        (**(code **)(*piVar6 + 4))();
      }
      iVar9 = (int)(0);
      puVar5 = (undefined4 *)((undefined4 *)(param_1 + 0x10));
      do {
        thunk_FUN_101b4e80(&local_14,iVar9);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
        cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x14))(iVar9));
        if (cVar1 == '\0') {
          cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x18))(iVar9));
          if (cVar1 != '\0') {
            puVar7 = (undefined1 *)(&DAT_1186d2ee);
            if (local_14 != (undefined1 *)0x0) {
              puVar7 = (undefined1 *)(local_14);
            }
            thunk_FUN_10302280(param_1 + 8,"Ability \"%s\" always available on this_ device",puVar7);
            *puVar5 = (undefined4)(3);
          }
        }
        else {
          puVar7 = (undefined1 *)(&DAT_1186d2ee);
          if (local_14 != (undefined1 *)0x0) {
            puVar7 = (undefined1 *)(local_14);
          }
          thunk_FUN_10302280(param_1 + 8,"Ability \"%s\" disallowed on this_ device",puVar7);
          *puVar5 = (undefined4)(1);
        }
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        ((SCStr *)((SCStr *)&local_14))->int_release();
        iVar9 = (int)(iVar9 + 1);
        local_14 = (undefined1 *)((undefined1 *)0x0);
        puVar5 = (undefined4 *)(puVar5 + 1);
        *(unsigned char *)((char *)&local_8 + 0) = 0;
      } while (iVar9 < 10);
      (**(code **)(**(int **)(param_1 + 0x70) + 0x40))(param_1);
      piVar6 = (int *)(local_1c);
    }
  }

  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101b5900; body size 315 bytes.
#line 1 "ENTRY_101b5900"

void __thiscall Recovered_Bulk::FUN_101b5900(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  iVar6 = (int)(0);
  piVar5 = (int *)((int *)(param_1 + 0x10));
  do {
    if (*(int **)(param_1 + 0x70) != (int *)0x0) {
      cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x70) + 0x1c))(param_2,iVar6,uVar2));
      if ((cVar1 != '\0') && (*piVar5 == 3)) {
        puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101b4e80(&local_14,iVar6));

        puVar4 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
          puVar4 = (undefined1 *)((undefined1 *)*puVar3);
        }
        thunk_FUN_10302280(param_1 + 8,"Ability \"%s\" lost",puVar4);

        ((SCStr *)((SCStr *)&local_14))->int_release();


        *piVar5 = (int)(2);
        puVar3 = (undefined4 *)(operator_new(0xc));
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)((undefined4 *)0x0);
        }
        else {
          *puVar3 = (undefined4)(1);
          puVar3[1] = (undefined4)(iVar6);
          puVar3[2] = (undefined4)(0xb);
        }
        thunk_FUN_1106b190(param_1 + 0xc,puVar3,0);
      }
    }
    iVar6 = (int)(iVar6 + 1);
    piVar5 = (int *)(piVar5 + 1);
  } while (iVar6 < 10);
  puVar3 = (undefined4 *)(operator_new(0xc));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    *puVar3 = (undefined4)(3);
    puVar3[1] = (undefined4)(10);
    puVar3[2] = (undefined4)(param_2);
  }
  thunk_FUN_1106b190(-(uint)(param_1 != 0) & param_1 + 0xcU,puVar3,0);

  return;

 } catch (...) { }
}


// Reference entry 101b6650; body size 367 bytes.
#line 1 "ENTRY_101b6650"

undefined4 __thiscall Recovered_Bulk::FUN_101b6650(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    switch(*param_2) {
    case 0:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x6c) + iVar1 * 4))(param_2[1]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
        thunk_FUN_1148a50e(param_2,0xc);
        return (undefined4)(0);
      }
      break;
    case 1:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 4))(param_2[1]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
        thunk_FUN_1148a50e(param_2,0xc);
        return (undefined4)(0);
      }
      break;
    case 2:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 8))(param_2[2]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
        thunk_FUN_1148a50e(param_2,0xc);
        return (undefined4)(0);
      }
      break;
    case 3:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 0xc))(param_2[2]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
        thunk_FUN_1148a50e(param_2,0xc);
        return (undefined4)(0);
      }
      break;
    case 4:
      iVar1 = (int)(0);
      if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
        do {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + iVar1 * 4) + 0x10))(param_2[2]);
          iVar1 = (int)(iVar1 + 1);
        } while (iVar1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
      }
    }
    thunk_FUN_1148a50e(param_2,0xc);
  }
  return (undefined4)(0);
}


// Reference entry 101b6a70; body size 295 bytes.
#line 1 "ENTRY_101b6a70"

undefined4 * __thiscall Recovered_Bulk::FUN_101b6a70(undefined4 *param_2,SCStr *param_3)
{
  SCLibrary *param_1 = (SCLibrary *)this;
  bool bVar1;
  SCLibrary *pSVar2;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCILibrary"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIDebug"));
    if (bVar1) {
      pSVar2 = (SCLibrary *)(param_1 + 8);
    }
    else {
      bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIActionDelegate"));
      if (!bVar1) {
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISystem"));
        if (bVar1) {
          ((SCLibrary *)(param_1))->int_queryInterfaceSCISystem();
          return (undefined4 *)(param_2);
        }
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIOpFactory"));
        if (bVar1) {
          ((SCLibrary *)(param_1))->int_queryInterfaceSCIOpFactory();
          return (undefined4 *)(param_2);
        }
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCINetworkManagement"));
        if (bVar1) {
          ((SCLibrary *)(param_1))->int_queryInterfaceSCINetworkManagement();
          return (undefined4 *)(param_2);
        }
        bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCILibraryTests"));
        if (!bVar1) {
          bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
          if (!bVar1) {
            *param_2 = (undefined4)(0);
            return (undefined4 *)(param_2);
          }
          *param_2 = (undefined4)(param_1);
          if (param_1 == (SCLibrary *)0x0) {
            return (undefined4 *)(param_2);
          }
          (**(code **)(*(int *)param_1 + 4))();
          return (undefined4 *)(param_2);
        }
        ((SCLibrary *)(param_1))->int_queryInterfaceSCILibraryTests();
        return (undefined4 *)(param_2);
      }
      pSVar2 = (SCLibrary *)(param_1 + 0x10);
    }
    param_1 = (SCLibrary *)((SCLibrary *)(-(uint)(param_1 != (SCLibrary *)0x0) & (uint)pSVar2));
  }
  *param_2 = (undefined4)(param_1);
  if (param_1 == (SCLibrary *)0x0) {
    return (undefined4 *)(param_2);
  }
  (**(code **)(*(int *)param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 101b75d0; body size 670 bytes.
#line 1 "ENTRY_101b75d0"

void __thiscall Recovered_Bulk::FUN_101b75d0(int param_2,char *param_3,int *param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *local_28;
  int *local_24;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  local_14 = (int)(param_1);
  piVar4 = (int *)((int *)createPropertyBag());
  piVar1 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    local_28 = (int *)((int *)0x0);
  }
  else {
    local_28 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 0x88))(piVar1);
  }
  ((SCStr *)((SCStr *)&param_3))->int_allocRep(param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((SCStr *)((SCStr *)&param_4))->int_allocRep("context");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar1 + 0x1c))(&param_4,&param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&param_4))->int_release();
  param_4 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&param_3))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&param_3))->int_allocRep("ability");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  uVar5 = (undefined4)(thunk_FUN_101b4e80(&param_4,param_2));
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  (**(code **)(*piVar1 + 0x1c))(&param_3,uVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((SCStr *)((SCStr *)&param_4))->int_release();
  param_4 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&param_3))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((SCStr *)((SCStr *)&param_3))->int_allocRep("state");
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  uVar5 = (undefined4)(thunk_FUN_101b4dd0(&param_4,*(undefined4 *)(param_1 + 0x10 + param_2 * 4)));
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  (**(code **)(*piVar1 + 0x1c))(&param_3,uVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  ((SCStr *)((SCStr *)&param_4))->int_release();
  param_4 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  ((SCStr *)((SCStr *)&param_3))->int_release();
  iVar8 = (int)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar9 = (undefined4 *)((undefined4 *)(local_14 + 0x38));
  iVar7 = (int)(local_14);
  do {
    if ((*(int **)(iVar7 + 0x70) != (int *)0x0) &&
       (cVar2 = (**(code **)(**(int **)(iVar7 + 0x70) + 0x1c))(iVar8,param_2), iVar7 = local_14,
       cVar2 != '\0')) {
      ((SCStr *)((SCStr *)&param_4))->int_allocRep("State");
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      uVar5 = (undefined4)(thunk_FUN_101b52e0(&local_1c,*puVar9));
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      uVar6 = (undefined4)(thunk_FUN_101b5390(&local_18,iVar8));
      *(unsigned char *)((char *)&local_8 + 0) = 0x12;
      uVar6 = (undefined4)(thunk_FUN_101a2e90(&param_3,uVar6,&param_4));
      *(unsigned char *)((char *)&local_8 + 0) = 0x13;
      (**(code **)(*piVar1 + 0x1c))(uVar6,uVar5);
      *(unsigned char *)((char *)&local_8 + 0) = 0x14;
      ((SCStr *)((SCStr *)&param_3))->int_release();
      param_3 = (char *)((char *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x15;
      ((SCStr *)((SCStr *)&local_18))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x16;
      ((SCStr *)((SCStr *)&local_1c))->int_release();

      *(unsigned char *)((char *)&local_8 + 0) = 0x17;
      ((SCStr *)((SCStr *)&param_4))->int_release();
      param_4 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      iVar7 = (int)(local_14);
    }
    iVar8 = (int)(iVar8 + 1);
    puVar9 = (undefined4 *)(puVar9 + 1);
  } while (iVar8 < 0xb);
  thunk_FUN_1030a0d0("device","abilityReport",piVar1,0);

  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101b7920; body size 748 bytes.
#line 1 "ENTRY_101b7920"

void __thiscall Recovered_Bulk::FUN_101b7920(char *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar3 = (uint)(DAT_12126b84);

  puVar9 = (undefined4 *)((undefined4 *)(param_1 + 0x10));

  local_28 = (int)(param_1);
  do {
    iVar7 = (int)(local_2c);

    piVar4 = (int *)((int *)createPropertyBag());
    piVar1 = (int *)((int *)*piVar4);

    *piVar4 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar3));
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_4c != (int *)0x0) {
      (**(code **)(*local_4c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0x88))(piVar1);
    }
    ((SCStr *)((SCStr *)&local_18))->int_allocRep(param_2);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    ((SCStr *)((SCStr *)&local_14))->int_allocRep("context");
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    (**(code **)(*piVar1 + 0x1c))(&local_14,&local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((SCStr *)((SCStr *)&local_18))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 2;
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("ability");
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    uVar5 = (undefined4)(thunk_FUN_101b4e80(&local_30,iVar7));
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    (**(code **)(*piVar1 + 0x1c))(&local_1c,uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    ((SCStr *)((SCStr *)&local_30))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 2;
    ((SCStr *)((SCStr *)&local_20))->int_allocRep("state");
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    uVar5 = (undefined4)(thunk_FUN_101b4dd0(&local_34,*puVar9));
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    (**(code **)(*piVar1 + 0x1c))(&local_20,uVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((SCStr *)((SCStr *)&local_34))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((SCStr *)((SCStr *)&local_20))->int_release();
    iVar8 = (int)(0);

    *(unsigned char *)((char *)&local_8 + 0) = 2;
    iVar7 = (int)(local_28);
    puVar10 = (undefined4 *)((undefined4 *)(param_1 + 0x38));
    do {
      if ((*(int **)(iVar7 + 0x70) != (int *)0x0) &&
         (cVar2 = (**(code **)(**(int **)(iVar7 + 0x70) + 0x1c))(iVar8,local_2c), iVar7 = local_28,
         cVar2 != '\0')) {
        ((SCStr *)((SCStr *)&local_24))->int_allocRep("State");
        *(unsigned char *)((char *)&local_8 + 0) = 0x10;
        uVar5 = (undefined4)(thunk_FUN_101b52e0(&local_40,*puVar10));
        *(unsigned char *)((char *)&local_8 + 0) = 0x11;
        uVar6 = (undefined4)(thunk_FUN_101b5390(&local_3c,iVar8));
        *(unsigned char *)((char *)&local_8 + 0) = 0x12;
        uVar6 = (undefined4)(thunk_FUN_101a2e90(&local_38,uVar6,&local_24));
        *(unsigned char *)((char *)&local_8 + 0) = 0x13;
        (**(code **)(*piVar1 + 0x1c))(uVar6,uVar5);
        *(unsigned char *)((char *)&local_8 + 0) = 0x14;
        ((SCStr *)((SCStr *)&local_38))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x15;
        ((SCStr *)((SCStr *)&local_3c))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x16;
        ((SCStr *)((SCStr *)&local_40))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x17;
        ((SCStr *)((SCStr *)&local_24))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 2;
        iVar7 = (int)(local_28);
      }
      iVar8 = (int)(iVar8 + 1);
      puVar10 = (undefined4 *)(puVar10 + 1);
    } while (iVar8 < 0xb);
    thunk_FUN_1030a0d0("device","abilityReport",piVar1,0);

    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    local_2c = (int)(local_2c + 1);
    puVar9 = (undefined4 *)(puVar9 + 1);
  } while (local_2c < 10);

  return;

 } catch (...) { }
}


// Reference entry 101b7ef0; body size 83 bytes.
#line 1 "ENTRY_101b7ef0"

void __fastcall FUN_101b7ef0(int param_1)

{
  int *piVar1;
  
  thunk_FUN_1106b1c0(-(uint)(param_1 != 0) & param_1 + 0xcU);
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x70) + 0x44))();
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x74));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}


// Reference entry 101b8020; body size 67 bytes.
#line 1 "ENTRY_101b8020"

uint __thiscall Recovered_Bulk::FUN_101b8020(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(0);
  iVar1 = (int)(*(int *)(param_1 + 0x78));
  iVar3 = (int)(*(int *)(param_1 + 0x7c) - iVar1 >> 2);
  if (0 < iVar3) {
    do {
      if (*(int *)(iVar1 + uVar2 * 4) == param_2) {
        *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)(iVar1 + -4 + iVar3 * 4);
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -4;
        return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
      }
      uVar2 = (uint)(uVar2 + 1);
    } while ((int)uVar2 < iVar3);
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 101b8150; body size 134 bytes.
#line 1 "ENTRY_101b8150"

undefined4 * __thiscall Recovered_Bulk::FUN_101b8150(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVersion);
  ((SCStr *)((SCStr *)(param_1 + 6)))->int_allocRep("");
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(param_3);
  param_1[4] = (undefined4)(param_4);
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101b8290; body size 95 bytes.
#line 1 "ENTRY_101b8290"

void __fastcall FUN_101b8290(undefined4 *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 101b8460; body size 116 bytes.
#line 1 "ENTRY_101b8460"

undefined4 * __thiscall Recovered_Bulk::FUN_101b8460(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c,uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101b8570; body size 105 bytes.
#line 1 "ENTRY_101b8570"

undefined4 __thiscall Recovered_Bulk::FUN_101b8570(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_2 + 0x14))());
  if (iVar1 < *(int *)(param_1 + 8)) {
    return (undefined4)(1);
  }
  iVar1 = (int)((**(code **)(*param_2 + 0x14))());
  if (*(int *)(param_1 + 8) == iVar1) {
    iVar1 = (int)((**(code **)(*param_2 + 0x18))());
    if (iVar1 < *(int *)(param_1 + 0xc)) {
      return (undefined4)(1);
    }
    iVar1 = (int)((**(code **)(*param_2 + 0x18))());
    if (*(int *)(param_1 + 0xc) == iVar1) {
      iVar1 = (int)((**(code **)(*param_2 + 0x1c))());
      if (iVar1 < *(int *)(param_1 + 0x10)) {
        return (undefined4)(1);
      }
      iVar1 = (int)((**(code **)(*param_2 + 0x1c))());
      if (*(int *)(param_1 + 0x10) == iVar1) {
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 101b8640; body size 179 bytes.
#line 1 "ENTRY_101b8640"

undefined4 * FUN_101b8640(undefined4 *param_1,int param_2,int param_3,int param_4)

{
 try {
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x1c));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);

    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCVersion);
    ((SCStr *)((SCStr *)(piVar2 + 6)))->int_allocRep("");
    piVar2[2] = (int)(param_2);
    piVar2[3] = (int)(param_3);
    piVar2[4] = (int)(param_4);
    *(undefined2 *)(piVar2 + 5) = 0;
    *(undefined1 *)((int)piVar2 + 0x16) = 0;
  }

  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101b87f0; body size 199 bytes.
#line 1 "ENTRY_101b87f0"

bool __thiscall Recovered_Bulk::FUN_101b87f0(char *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)(param_2);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  pcVar2 = (char *)((char *)thunk_FUN_1148b586((int)pcVar2 - (int)(param_2 + 1)));
  pcVar3 = (char *)(strstr(param_2,"-diag"));
  *(bool *)(param_1 + 0x14) = pcVar3 != (char *)0x0;
  pcVar3 = (char *)(strstr(param_2,"-beta"));
  *(bool *)(param_1 + 0x15) = pcVar3 != (char *)0x0;
  pcVar3 = (char *)(strstr(param_2,"-dev"));
  *(bool *)(param_1 + 0x16) = pcVar3 != (char *)0x0;
  iVar4 = (int)(thunk_FUN_101b9160(param_2,"%d.%d-%d%s",param_1 + 8,param_1 + 0xc,param_1 + 0x10,pcVar2));
  if (iVar4 == 4) {
    ((SCStr *)((SCStr *)(param_1 + 0x18)))->int_release();
    ((SCStr *)((SCStr *)(param_1 + 0x18)))->int_allocRep(pcVar2,4);
    free(pcVar2);
    return (bool)(true);
  }
  free(pcVar2);
  return (bool)(iVar4 == 3);
}


// Reference entry 101b88f0; body size 209 bytes.
#line 1 "ENTRY_101b88f0"

bool __thiscall Recovered_Bulk::FUN_101b88f0(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *_Str;
  
  _Str = (char *)("");
  if ((char *)*param_2 != (char *)0x0) {
    _Str = (char *)((char *)*param_2);
  }
  pcVar2 = (char *)(_Str);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  pcVar2 = (char *)((char *)thunk_FUN_1148b586((int)pcVar2 - (int)(_Str + 1)));
  pcVar3 = (char *)(strstr(_Str,"-diag"));
  *(bool *)(param_1 + 0x14) = pcVar3 != (char *)0x0;
  pcVar3 = (char *)(strstr(_Str,"-beta"));
  *(bool *)(param_1 + 0x15) = pcVar3 != (char *)0x0;
  pcVar3 = (char *)(strstr(_Str,"-dev"));
  *(bool *)(param_1 + 0x16) = pcVar3 != (char *)0x0;
  iVar4 = (int)(thunk_FUN_101b9160(_Str,"%d.%d-%d%s",param_1 + 8,param_1 + 0xc,param_1 + 0x10,pcVar2));
  if (iVar4 == 4) {
    ((SCStr *)((SCStr *)(param_1 + 0x18)))->int_release();
    ((SCStr *)((SCStr *)(param_1 + 0x18)))->int_allocRep(pcVar2,4);
    free(pcVar2);
    return (bool)(true);
  }
  free(pcVar2);
  return (bool)(iVar4 == 3);
}


// Reference entry 101b8a00; body size 590 bytes.
#line 1 "ENTRY_101b8a00"

bool __stdcall FUN_101b8a00(char *param_1,char *param_2)

{
 try {
  bool bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *local_24;
  int *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  piVar4 = (int *)(operator_new(0x1c));
  local_1c = (int *)(piVar4);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
    piVar5 = (int *)((int *)0x0);
  }
  else {
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar4[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar4 = (int)((int)(uint)&ghidra_vftable_SCVersion);
    piVar4[2] = (int)(0);
    piVar4[3] = (int)(0);
    piVar4[4] = (int)(0);
    *(undefined2 *)(piVar4 + 5) = 0;
    *(undefined1 *)((int)piVar4 + 0x16) = 0;
    piVar4[6] = (int)(0);
    piVar5 = (int *)((int *)0x0);
    if (piVar4 != (int *)0x0) {
      if (*(code **)(*piVar4 + 0xc) == thunk_FUN_101b87c0) {
        (**(code **)(*piVar4 + 4))();
        piVar5 = (int *)(piVar4);
      }
      else {
        piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar3));
        (**(code **)(*piVar5 + 4))();
      }
    }
  }

  piVar6 = (int *)(operator_new(0x1c));
  local_1c = (int *)(piVar6);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
    local_24 = (int *)((int *)0x0);
  }
  else {
    *piVar6 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar6[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar6 = (int)((int)(uint)&ghidra_vftable_SCVersion);
    piVar6[2] = (int)(0);
    piVar6[3] = (int)(0);
    piVar6[4] = (int)(0);
    *(undefined2 *)(piVar6 + 5) = 0;
    *(undefined1 *)((int)piVar6 + 0x16) = 0;
    piVar6[6] = (int)(0);
    local_24 = (int *)((int *)0x0);
    if (piVar6 != (int *)0x0) {
      if (*(code **)(*piVar6 + 0xc) == thunk_FUN_101b87c0) {
        (**(code **)(*piVar6 + 4))();
        local_24 = (int *)(piVar6);
      }
      else {
        local_24 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
        (**(code **)(*local_24 + 4))();
      }
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((SCStr *)((SCStr *)&local_1c))->int_allocRep(param_1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));

  cVar2 = (char)(thunk_FUN_101b88f0(&local_1c));
  if (cVar2 != '\0') {
    ((SCStr *)((SCStr *)&local_18))->int_allocRep(param_2);


    cVar2 = (char)(thunk_FUN_101b88f0(&local_18));
    bVar1 = (bool)(true);
    if (cVar2 != '\0') goto LAB_101b8bba;
  }
  bVar1 = (bool)(false);
LAB_101b8bba:
  if ((local_14 & 2) != 0) {
    local_14 = (uint)(local_14 & 0xfffffffd);

    ((SCStr *)((SCStr *)&local_18))->int_release();

  }

  if ((local_14 & 1) != 0) {
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)((SCStr *)&local_1c))->int_release();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  }
  if (bVar1) {
    thunk_FUN_101b8fc0(piVar4,piVar6);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }

  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }

  return (bool)(bVar1);

 } catch (...) { }
}


// Reference entry 101b8d30; body size 230 bytes.
#line 1 "ENTRY_101b8d30"

undefined1 __thiscall Recovered_Bulk::FUN_101b8d30(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)(*(int **)(param_1 + 0x10));
  local_18 = (int)(param_1);
  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_2 + 0x1c))(&local_20,DAT_12126b84 ));
  uVar4 = (uint)(1);


  iVar3 = (int)((**(code **)(*piVar1 + 0x38))(*puVar2));
  if (-1 < iVar3) {
    piVar1 = (int *)(*(int **)(local_18 + 8));
    puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_2 + 0x20))(&local_1c));

    uVar4 = (uint)(3);

    iVar3 = (int)((**(code **)(*piVar1 + 0x38))(*puVar2));
    *(uint *)((char *)&param_2 + 3) = 1;
    if (iVar3 < 1) goto LAB_101b8dc2;
  }
  *(uint *)((char *)&param_2 + 3) = 0;
LAB_101b8dc2:
  if ((uVar4 & 2) != 0) {
    uVar4 = (uint)(uVar4 & 0xfffffffd);

    local_14 = (uint)(uVar4);
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }
  if ((uVar4 & 1) != 0) {

    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
  }

  return (undefined1)(*(uint *)((char *)&param_2 + 3));

 } catch (...) { }
}


// Reference entry 101b8fc0; body size 279 bytes.
#line 1 "ENTRY_101b8fc0"

void __thiscall Recovered_Bulk::FUN_101b8fc0(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)((**(code **)(*param_2 + 0x38))(param_3));
  if (iVar1 < 1) {
    if (param_2 != *(int **)(param_1 + 8)) {
      piVar2 = (int *)(*(int **)(param_1 + 0xc));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 8) = param_2;
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0xc) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
    if (param_3 != *(int **)(param_1 + 0x10)) {
      piVar2 = (int *)(*(int **)(param_1 + 0x14));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 0x10) = param_3;
      if (param_3 != (int *)0x0) {
        piVar2 = (int *)((int *)(**(code **)(*param_3 + 0xc))());
        *(int **)(param_1 + 0x14) = piVar2;
        (**(code **)(*piVar2 + 4))();
        return;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
  }
  else {
    if (param_3 != *(int **)(param_1 + 8)) {
      piVar2 = (int *)(*(int **)(param_1 + 0xc));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 8) = param_3;
      if (param_3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        piVar2 = (int *)((int *)(**(code **)(*param_3 + 0xc))());
        *(int **)(param_1 + 0xc) = piVar2;
        (**(code **)(*piVar2 + 4))();
      }
    }
    if (param_2 != *(int **)(param_1 + 0x10)) {
      piVar2 = (int *)(*(int **)(param_1 + 0x14));
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        (**(code **)(*piVar2 + 8))();
      }
      *(int **)(param_1 + 0x10) = param_2;
      piVar2 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int **)(param_1 + 0x14) = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
  }
  return;
}


// Reference entry 101b91d0; body size 83 bytes.
#line 1 "ENTRY_101b91d0"

void __fastcall FUN_101b91d0(undefined4 *param_1)

{
 try {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if (*(char *)(param_1 + 1) != '\0') {
    iVar1 = (int)(thunk_FUN_103134f0(DAT_12126b84 ));
    if (iVar1 != 0) {
      thunk_FUN_10313b00(*param_1,param_1 + 1);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101b9390; body size 114 bytes.
#line 1 "ENTRY_101b9390"

undefined4 * __thiscall Recovered_Bulk::FUN_101b9390(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101b9420; body size 89 bytes.
#line 1 "ENTRY_101b9420"

int * __thiscall Recovered_Bulk::FUN_101b9420(int param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101b94f0; body size 278 bytes.
#line 1 "ENTRY_101b94f0"

undefined4 * __thiscall Recovered_Bulk::FUN_101b94f0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);

  thunk_FUN_11240650(uVar1);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[0xd] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCElapsedTimeMeasurement);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = (undefined4)(0);
  param_1[0x10] = (undefined4)(0);
  param_1[0x11] = (undefined4)(0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101b9770; body size 108 bytes.
#line 1 "ENTRY_101b9770"

undefined4 * __thiscall Recovered_Bulk::FUN_101b9770(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  param_1[1] = (undefined4)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = (undefined4)(0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101b9a40; body size 109 bytes.
#line 1 "ENTRY_101b9a40"

undefined4 * __thiscall Recovered_Bulk::FUN_101b9a40(char *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *_Dst;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar3 = (char *)(param_2);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(param_2 + 1));
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    _Dst = (undefined4 *)(puVar2 + 4);
    *puVar2 = (undefined4)(1);
    puVar2[3] = (undefined4)(_Size);
    puVar2[2] = (undefined4)(0);
    puVar2[1] = (undefined4)(0);
    memcpy(_Dst,param_2,_Size);
    *(undefined1 *)((int)_Dst + _Size) = 0;
    *param_1 = (undefined4)(_Dst);
    return (undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101b9ae0; body size 88 bytes.
#line 1 "ENTRY_101b9ae0"

void __fastcall FUN_101b9ae0(int *param_1)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puVar1 = (undefined4 *)((undefined4 *)*param_1);

  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101ba1b0; body size 81 bytes.
#line 1 "ENTRY_101ba1b0"

void __fastcall FUN_101ba1b0(int *param_1)

{
 try {
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101ba300; body size 108 bytes.
#line 1 "ENTRY_101ba300"

void __fastcall FUN_101ba300(int *param_1)

{
 try {
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


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


// Reference entry 101ba530; body size 107 bytes.
#line 1 "ENTRY_101ba530"

int * __thiscall Recovered_Bulk::FUN_101ba530(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  
  if ((int *)(param_2) != param_1) {
    iVar1 = (int)(*param_1);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *param_1 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(param_1);
}


// Reference entry 101baa90; body size 76 bytes.
#line 1 "ENTRY_101baa90"

void __fastcall FUN_101baa90(int param_1)

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


// Reference entry 101baaf0; body size 149 bytes.
#line 1 "ENTRY_101baaf0"

void __thiscall Recovered_Bulk::FUN_101baaf0(int *param_2,undefined4 param_3)
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


// Reference entry 101badc0; body size 70 bytes.
#line 1 "ENTRY_101badc0"

void __fastcall FUN_101badc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 101bae20; body size 361 bytes.
#line 1 "ENTRY_101bae20"

undefined4 * FUN_101bae20(undefined4 *param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  piVar2 = (int *)(operator_new(0x48));

  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    pvVar3 = (void *)(operator_new(0x6c));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar3 == (void *)0x0) {
      iVar4 = (int)(0);
    }
    else {
      iVar4 = (int)(thunk_FUN_111c06e0(param_2));
    }
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    thunk_FUN_11240650(uVar1);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
    piVar2[2] = (int)((int)(uint)&ghidra_vftable_SCOpImpl);
    piVar2[3] = (int)(0);
    piVar2[4] = (int)(0);
    piVar2[5] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpRefBase);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    piVar2[6] = (int)(iVar4);
    if (iVar4 != 0) {
      thunk_FUN_1123fce0(iVar4 + 4);
    }
    piVar2[7] = (int)(0);
    piVar2[5] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpRef);
    piVar2[8] = (int)(0);
    *(undefined2 *)(piVar2 + 9) = 1000;
    piVar2[10] = (int)(0);
    piVar2[0xb] = (int)(0);
    piVar2[0xc] = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[0xd] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    piVar2[0xc] = (int)((int)(uint)&ghidra_vftable_SCElapsedTimeMeasurement);
    piVar2[0xe] = (int)(0);
    piVar2[0xf] = (int)(0);
    piVar2[0xf] = (int)(0);
    piVar2[0x10] = (int)(0);
    piVar2[0x11] = (int)(0);
  }

  *param_1 = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101bb010; body size 156 bytes.
#line 1 "ENTRY_101bb010"

void __thiscall Recovered_Bulk::FUN_101bb010(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->beginsWith("SCISystem"));
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISystem:onOpRunningCountChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISystem:globalFactoryReset"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISystem:globalNotificationStateChanged"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
      return;
    }
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISystem:globalForgetHousehold"));
    if (bVar1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2);
    }
  }
  return;
}


// Reference entry 101bb1c0; body size 360 bytes.
#line 1 "ENTRY_101bb1c0"

SCStr * FUN_101bb1c0(SCStr *param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  SCStr local_24 [4];
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_1037a2b0(&local_1c,DAT_12126b84 );

  piVar2 = (int *)((int *)thunk_FUN_103798e0(&local_18));
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
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar1 == (int *)0x0) {
    ((SCStr *)(param_1))->int_allocRep("");

  }
  else {
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0xdc))(local_24));

    puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_10320a30(&local_14));
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)((undefined1 *)*puVar3);
    }
    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)((undefined1 *)*puVar4);
    }
    uVar5 = (undefined4)(thunk_FUN_101bb3b0(puVar7));
    uVar6 = (uint)(thunk_FUN_10323890(uVar5));
    ((SCStr *)((char *)param_1))->stringWithFormat("https://%s:%hu/api/v%d/",puVar8,uVar6 & 0xffff);

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
    ((SCStr *)((SCStr *)&local_14))->int_release();


    ((SCStr *)(local_24))->int_release();

  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 101bb3b0; body size 209 bytes.
#line 1 "ENTRY_101bb3b0"

undefined4 FUN_101bb3b0(char *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&local_14))->int_allocRep(param_1);

  piVar3 = (int *)((int *)thunk_FUN_1033cdf0(&local_18,&local_14,0));
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
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar1 == (int *)0x0) {
    uVar4 = (undefined4)(1);
  }
  else {
    uVar4 = (undefined4)(thunk_FUN_1034d980());
  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4)(uVar4);

 } catch (...) { }
}


// Reference entry 101bb4f0; body size 191 bytes.
#line 1 "ENTRY_101bb4f0"

char * FUN_101bb4f0(char *param_1,int *param_2)

{
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_2 + 0xdc))(local_14,DAT_12126b84 ));

  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_10320a30(&param_2));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((undefined1 *)*puVar1);
  }
  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)((undefined1 *)*puVar2);
  }
  uVar3 = (undefined4)(thunk_FUN_101bb3b0(puVar5));
  uVar4 = (uint)(thunk_FUN_10323890(uVar3));
  ((SCStr *)(param_1))->stringWithFormat("https://%s:%hu/api/v%d/",puVar6,uVar4 & 0xffff);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (int *)((int *)0x0);

  ((SCStr *)(local_14))->int_release();

  return (char *)(param_1);

 } catch (...) { }
}


// Reference entry 101bb5e0; body size 141 bytes.
#line 1 "ENTRY_101bb5e0"

char * FUN_101bb5e0(char *param_1)

{
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1034d440(local_14));

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)((undefined1 *)*puVar2);
  }
  uVar3 = (undefined4)(thunk_FUN_1034d980(uVar1));
  uVar1 = (uint)(thunk_FUN_1034e0e0(uVar3));
  ((SCStr *)(param_1))->stringWithFormat("https://%s:%hu/api/v%d/",puVar4,uVar1 & 0xffff);

  ((SCStr *)(local_14))->int_release();

  return (char *)(param_1);

 } catch (...) { }
}


// Reference entry 101bb690; body size 376 bytes.
#line 1 "ENTRY_101bb690"

char * FUN_101bb690(char *param_1,int param_2)

{
 try {
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int *_Memory;
  undefined1 *puVar10;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = (int)(param_2);


  uVar4 = (uint)(DAT_12126b84);

  if ((*(char **)(param_2 + 0x60) == (char *)0x0) || (**(char **)(param_2 + 0x60) == '\0')) {
    if ((*(int *)(param_2 + 0x1c) == 0) || (*(char *)(param_2 + 0xa71) != '\0')) {
      param_2 = (int)(0);
      puVar5 = (undefined4 *)(&param_2);

      bVar2 = (bool)(false);
      bVar1 = (bool)(true);
    }
    else {
      puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_101b9a40(*(int *)(param_2 + 0x1c) + 0x489));
      bVar2 = (bool)(true);
      bVar1 = (bool)(false);

    }
    iVar7 = (int)(param_2);
    thunk_FUN_101ba530(puVar5);
    if ((((bVar1) && (local_8 = 2, iVar7 != 0)) &&
        (_Memory = (int *)(iVar7 + -0x10), *_Memory < 0xffff)) &&
       (iVar6 = thunk_FUN_1123fcd0(_Memory), iVar6 == 0)) {
      *(undefined4 *)(iVar7 + -8) = 0;
      *(undefined4 *)(iVar7 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar7,*(undefined4 *)(iVar7 + -4));
      free(_Memory);
    }
    if (((bVar2) && (local_8 = 3, local_18 != 0)) &&
       ((*(int *)(local_18 + -0x10) < 0xffff &&
        (iVar7 = thunk_FUN_1123fcd0((void *)(local_18 + -0x10)), iVar7 == 0)))) {
      *(undefined4 *)(local_18 + -8) = 0;
      *(undefined4 *)(local_18 + -0xc) = 0;
      thunk_FUN_113cfb70(local_18,*(undefined4 *)(local_18 + -4));
      free((void *)(local_18 + -0x10));
    }
  }

  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(iVar3 + 0x60) != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)(*(undefined1 **)(iVar3 + 0x60));
  }
  puVar10 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(iVar3 + 0x6c) != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)(*(undefined1 **)(iVar3 + 0x6c));
  }
  uVar8 = (undefined4)(thunk_FUN_101bb3b0(puVar9,uVar4));
  ((SCStr *)(param_1))->stringWithFormat("https://%s:%hu/api/v%d/",puVar10,(uint)*(ushort *)(iVar3 + 0x72),uVar8);

  return (char *)(param_1);

 } catch (...) { }
}


// Reference entry 101bb8c0; body size 324 bytes.
#line 1 "ENTRY_101bb8c0"

undefined1 * __fastcall FUN_101bb8c0(int param_1)

{
 try {
  char *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  pcVar1 = (char *)(*(char **)(param_1 + 0x60));
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    if ((*(int *)(param_1 + 0x1c) == 0) || (*(char *)(param_1 + 0xa71) != '\0')) {

      piVar4 = (int *)(&local_18);

      uVar8 = (uint)(2);
    }
    else {
      piVar4 = (int *)((int *)thunk_FUN_101b9a40(*(int *)(param_1 + 0x1c) + 0x489));
      uVar8 = (uint)(1);

    }
    iVar6 = (int)(local_18);
    local_14 = (uint)(uVar8);
    thunk_FUN_101ba530(piVar4);
    if ((uVar8 & 2) != 0) {
      uVar8 = (uint)(uVar8 & 0xfffffffd);

      local_14 = (uint)(uVar8);
      if ((iVar6 != 0) && (piVar4 = (int *)(iVar6 + -0x10), *piVar4 < 0xffff)) {
        iVar5 = (int)(thunk_FUN_1123fcd0(piVar4,uVar3));
        if (iVar5 == 0) {
          *(undefined4 *)(iVar6 + -8) = 0;
          *(undefined4 *)(iVar6 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
          free(piVar4);
        }
      }
    }
    if ((uVar8 & 1) != 0) {

      if ((local_1c != 0) && (*(int *)(local_1c + -0x10) < 0xffff)) {
        iVar6 = (int)(thunk_FUN_1123fcd0((void *)(local_1c + -0x10),uVar3));
        if (iVar6 == 0) {
          *(undefined4 *)(local_1c + -8) = 0;
          *(undefined4 *)(local_1c + -0xc) = 0;
          thunk_FUN_113cfb70(local_1c,*(undefined4 *)(local_1c + -4));
          free((void *)(local_1c + -0x10));
        }
      }
    }
  }
  puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x60));
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (puVar2 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(puVar2);
  }

  return (undefined1 *)(puVar7);

 } catch (...) { }
}


// Reference entry 101bba70; body size 70 bytes.
#line 1 "ENTRY_101bba70"

void __fastcall FUN_101bba70(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


// Reference entry 101bbb40; body size 128 bytes.
#line 1 "ENTRY_101bbb40"

void __fastcall FUN_101bbb40(int param_1)

{
 try {
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101f6530(&local_18,DAT_12126b84 );

  (**(code **)(*local_18 + 0x28))(param_1 + 0x30,param_1 + 0x28,param_1 + 0x2c);
  piVar1 = (int *)(local_14);

  if (local_14 != (int *)0x0) {
    local_18 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101bbc60; body size 232 bytes.
#line 1 "ENTRY_101bbc60"

void __thiscall Recovered_Bulk::FUN_101bbc60(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(DAT_12126b84 ));
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101bbd90; body size 250 bytes.
#line 1 "ENTRY_101bbd90"

void __thiscall Recovered_Bulk::FUN_101bbd90(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 4))
              (param_2,param_3,DAT_12126b84 );
  }
  piVar1 = (int *)((int *)(param_1 + -8));
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    (**(code **)(*piVar2 + 4))();
  }
  *(short *)(param_1 + 0x1c) = (short)param_3;

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

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 101bcc60; body size 232 bytes.
#line 1 "ENTRY_101bcc60"

void FUN_101bcc60(SCStr *param_1,SCStr *param_2,SCStr *param_3,code *param_4)

{
 try {
  char cVar1;
  SCStr *pSStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uStack_28 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&pSStack_2c))->op_ctor(param_1);

  ((SCStr *)((SCStr *)&stack0xffffffd0))->op_ctor(param_2);

  cVar1 = (char)((*param_4)());
  if (cVar1 != '\0') {
    pSStack_2c = (SCStr *)(param_1);
    thunk_FUN_101bdde0();
  }
  ((SCStr *)((SCStr *)&pSStack_2c))->op_ctor(param_2);

  ((SCStr *)((SCStr *)&stack0xffffffd0))->op_ctor(param_3);

  cVar1 = (char)((*param_4)());
  if (cVar1 != '\0') {
    pSStack_2c = (SCStr *)(param_2);
    thunk_FUN_101bdde0();
    ((SCStr *)((SCStr *)&pSStack_2c))->op_ctor(param_1);

    ((SCStr *)((SCStr *)&stack0xffffffd0))->op_ctor(param_2);

    cVar1 = (char)((*param_4)());
    if (cVar1 != '\0') {
      pSStack_2c = (SCStr *)(param_1);
      thunk_FUN_101bdde0();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101be130; body size 74 bytes.
#line 1 "ENTRY_101be130"

void __fastcall FUN_101be130(int param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ((SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  *(undefined4 *)(param_1 + 4) = 0;

  return;

 } catch (...) { }
}


// Reference entry 101be320; body size 69 bytes.
#line 1 "ENTRY_101be320"

undefined4 * __thiscall Recovered_Bulk::FUN_101be320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStringArray);
  thunk_FUN_101be460();
  thunk_FUN_101a2bf0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be520; body size 128 bytes.
#line 1 "ENTRY_101be520"

bool FUN_101be520(undefined1 *param_1,undefined1 *param_2)

{
 try {
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(param_2);
  }
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (param_1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(param_1);
  }
  iVar1 = (int)(thunk_FUN_113b9ec0(puVar3,puVar2,DAT_12126b84 ));

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (undefined1 *)((undefined1 *)0x0);

  ((SCStr *)((SCStr *)&param_2))->int_release();

  return (bool)(iVar1 < 0);

 } catch (...) { }
}


// Reference entry 101be5d0; body size 155 bytes.
#line 1 "ENTRY_101be5d0"

undefined1 __fastcall FUN_101be5d0(int *param_1)

{
 try {
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  cVar1 = (char)((**(code **)(*param_1 + 0x18))(DAT_12126b84 ));
  if (cVar1 == '\0') {
    uVar5 = (uint)(0);
    iVar3 = (int)(param_1[2]);
    if (param_1[3] - iVar3 >> 2 != 0) {
      do {
        bVar2 = (bool)(((SCStr *)((SCStr *)(iVar3 + uVar5 * 4)))->op_eq((SCStr *)&stack0x00000004));
        if (bVar2) {
          uVar4 = (undefined1)(1);
          goto LAB_101be642;
        }
        uVar5 = (uint)(uVar5 + 1);
        iVar3 = (int)(param_1[2]);
      } while (uVar5 < (uint)(param_1[3] - iVar3 >> 2));
    }
  }
  uVar4 = (undefined1)(0);
LAB_101be642:

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (undefined1)(uVar4);

 } catch (...) { }
}


// Reference entry 101be6a0; body size 173 bytes.
#line 1 "ENTRY_101be6a0"

void __thiscall Recovered_Bulk::FUN_101be6a0(int *param_2)
{
  int param_1 = (int )this;
 try {
  SCStr *this_;
  int *piVar1;
  uint uVar2;
  SCStr *pSVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_101be460(DAT_12126b84 );
  piVar1 = (int *)(param_2);
  if (param_2 != (int *)0x0) {
    uVar2 = (uint)((**(code **)(*param_2 + 0x14))());
    uVar4 = (uint)(0);
    if (uVar2 != 0) {
      do {
        pSVar3 = (SCStr *)((SCStr *)(**(code **)(*piVar1 + 0x1c))(&param_2,uVar4));
        this_ = (SCStr *)(*(SCStr **)(param_1 + 0xc));

        if (this_ == *(SCStr **)(param_1 + 0x10)) {
          thunk_FUN_101bc5e0(this_,pSVar3);
        }
        else {
          ((SCStr *)(this_))->op_ctor(pSVar3);
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
        }

        ((SCStr *)((SCStr *)&param_2))->int_release();
        uVar4 = (uint)(uVar4 + 1);
        param_2 = (int *)((int *)0x0);

      } while (uVar4 < uVar2);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 101be780; body size 96 bytes.
#line 1 "ENTRY_101be780"

undefined4 * FUN_101be780(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(operator_new(0x14));
  if (piVar1 == (int *)0x0) {
    *param_1 = (undefined4)(0);
  }
  else {
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar1[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar1 = (int)((int)(uint)&ghidra_vftable_SCStringArray);
    piVar1[2] = (int)(0);
    piVar1[3] = (int)(0);
    piVar1[4] = (int)(0);
    *param_1 = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      return (undefined4 *)(param_1);
    }
  }
  return (undefined4 *)(param_1);
}


// Reference entry 101be800; body size 98 bytes.
#line 1 "ENTRY_101be800"

undefined4 * FUN_101be800(undefined4 *param_1)

{
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101be780(&local_14,DAT_12126b84 ));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);

  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101be8b0; body size 105 bytes.
#line 1 "ENTRY_101be8b0"

uint __thiscall Recovered_Bulk::FUN_101be8b0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iStack_10;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  iVar2 = (int)(*(int *)(param_1 + 8));
  iStack_10 = (int)(0x101be8c9);
  uVar3 = (uint)((**(code **)(*param_2 + 0x14))());
  if (iVar1 - iVar2 >> 2 == uVar3) {
    uVar4 = (uint)(0);
    iStack_10 = (int)(*(int *)(param_1 + 8));
    uVar3 = (uint)(0);
    if (*(int *)(param_1 + 0xc) - iStack_10 >> 2 != 0) {
      do {
        ((SCStr *)((SCStr *)&iStack_10))->op_ctor((SCStr *)(iStack_10 + uVar4 * 4));
        uVar3 = (uint)((**(code **)(*param_2 + 0x2c))());
        if ((char)uVar3 == '\0') goto LAB_101be911;
        uVar4 = (uint)(uVar4 + 1);
        iStack_10 = (int)(*(int *)(param_1 + 8));
        uVar3 = (uint)(*(int *)(param_1 + 0xc) - iStack_10 >> 2);
      } while (uVar4 < uVar3);
    }
    return (uint)(((uint)((int3)(uVar3 >> 8)) << 8 | (uint)(1)));
  }
LAB_101be911:
  return (uint)(uVar3 & 0xffffff00);
}


// Reference entry 101bea30; body size 108 bytes.
#line 1 "ENTRY_101bea30"

undefined4 __thiscall Recovered_Bulk::FUN_101bea30(undefined4 param_2)
{
  int *param_1 = (int *)this;
 try {
  uint uVar1;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  local_14 = (int *)(param_1);
  ((SCStr *)((SCStr *)&local_14))->int_allocRep(", ");

  (**(code **)(*param_1 + 0x48))(param_2,&local_14,uVar1);

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 101bead0; body size 150 bytes.
#line 1 "ENTRY_101bead0"

uint __fastcall FUN_101bead0(int *param_1)

{
 try {
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar5 = (uint)(0xffffffff);

  cVar1 = (char)((**(code **)(*param_1 + 0x18))(DAT_12126b84 ));
  if (cVar1 == '\0') {
    uVar4 = (uint)(0);
    iVar3 = (int)(param_1[2]);
    if (param_1[3] - iVar3 >> 2 != 0) {
      do {
        bVar2 = (bool)(((SCStr *)((SCStr *)(iVar3 + uVar4 * 4)))->op_eq((SCStr *)&stack0x00000004));
        iVar3 = (int)(param_1[2]);
        if (bVar2) {
          uVar5 = (uint)(uVar4);
        }
        uVar4 = (uint)(uVar4 + 1);
      } while (uVar4 < (uint)(param_1[3] - iVar3 >> 2));
    }
  }

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (uint)(uVar5);

 } catch (...) { }
}


// Reference entry 101bf1f0; body size 296 bytes.
#line 1 "ENTRY_101bf1f0"

int * FUN_101bf1f0(int *param_1,int *param_2,undefined4 param_3)

{
 try {
  int *piVar1;
  int *piVar2;
  char *_Str;
  char *pcVar3;
  int *local_18;
  SCStr local_14;
  undefined1 local_13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  piVar2 = (int *)((int *)thunk_FUN_101be780(&local_18,DAT_12126b84 ));
  piVar1 = (int *)((int *)*piVar2);

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
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  pcVar3 = (char *)((char *)*param_2);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)("");
  }
  _Str = (char *)(_strdup(pcVar3));

  local_14 = (SCStr)(*(unsigned char *)((char *)&param_3 + 0));
  pcVar3 = (char *)(strtok(_Str,(char *)&local_14));
  while (pcVar3 != (char *)0x0) {
    ((SCStr *)((SCStr *)&param_3))->int_allocRep(pcVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    (**(code **)(*piVar1 + 0x24))(&param_3);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((SCStr *)((SCStr *)&param_3))->int_release();
    param_3 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    pcVar3 = (char *)(strtok((char *)0x0,(char *)&local_14));
  }
  free(_Str);
  *param_1 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101bf480; body size 2794 bytes.
#line 1 "ENTRY_101bf480"

undefined1 FUN_101bf480(undefined4 param_1,int param_2)

{
 try {
  undefined4 *puVar1;
  void *pvVar2;
  int *_Dst;
  int *piVar3;
  char *pcVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *_Memory;
  undefined1 uVar9;
  char *pcVar10;
  size_t sVar11;
  int *local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_40 = (char *)((char *)0x0);
  local_3c = (char *)((char *)0x0);
  local_38 = (char *)((char *)0x0);
  local_34 = (char *)((char *)0x0);
  local_30 = (char *)((char *)0x0);
  local_2c = (char *)((char *)0x0);
  local_28 = (char *)((char *)0x0);
  local_24 = (char *)((char *)0x0);
  local_20 = (char *)((char *)0x0);
  local_1c = (char *)((char *)0x0);
  local_18 = (char *)((char *)0x0);

  local_14 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  cVar5 = (char)(thunk_FUN_103ba670(param_1,&local_80,&local_40,&local_3c,&local_38,&local_34,&local_30,
                             &local_2c,&local_28,&local_24,&local_20,&local_1c,&local_18,&local_70,
                             &local_14,0,0,DAT_12126b84 ));
  pcVar4 = (char *)(local_14);
  if (cVar5 == '\0') {
    uVar9 = (undefined1)(0);
  }
  else {
    if ((local_14 == (char *)0x0) || (*local_14 == '\0')) {
      local_6c = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_14);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_14 + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_6c = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_28);



    *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
    if ((local_28 == (char *)0x0) || (*local_28 == '\0')) {
      local_68 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_28);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_28 + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_68 = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_2c);
    *(unsigned char *)((char *)&local_8 + 0) = 0x20;
    if ((local_2c == (char *)0x0) || (*local_2c == '\0')) {
      local_64 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_2c);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_2c + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_64 = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 0x21;
    if ((local_18 == (char *)0x0) || (*local_18 == '\0')) {
      local_60 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_18);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_18 + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_60 = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_1c);
    *(unsigned char *)((char *)&local_8 + 0) = 0x22;
    if ((local_1c == (char *)0x0) || (*local_1c == '\0')) {
      local_5c = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_1c);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_1c + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_5c = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_34);
    *(unsigned char *)((char *)&local_8 + 0) = 0x23;
    if ((local_34 == (char *)0x0) || (*local_34 == '\0')) {
      local_58 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_34);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_34 + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_58 = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 0x24;
    if ((local_20 == (char *)0x0) || (*local_20 == '\0')) {
      local_54 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_20);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_20 + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_54 = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_3c);
    *(unsigned char *)((char *)&local_8 + 0) = 0x25;
    if ((local_3c == (char *)0x0) || (*local_3c == '\0')) {
      local_50 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_3c);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_3c + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_50 = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_38);
    *(unsigned char *)((char *)&local_8 + 0) = 0x26;
    if ((local_38 == (char *)0x0) || (*local_38 == '\0')) {
      local_4c = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_38);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_38 + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_4c = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_40);
    *(unsigned char *)((char *)&local_8 + 0) = 0x27;
    if ((local_40 == (char *)0x0) || (*local_40 == '\0')) {
      local_48 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_40);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_40 + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_48 = (undefined4 *)(puVar1);
    }
    pcVar4 = (char *)(local_30);
    *(unsigned char *)((char *)&local_8 + 0) = 0x28;
    if ((local_30 == (char *)0x0) || (*local_30 == '\0')) {
      local_44 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      pcVar10 = (char *)(local_30);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_30 + 1));
      puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(sVar11 + 0x11));
      puVar1 = (undefined4 *)(puVar6 + 4);
      *puVar6 = (undefined4)(1);
      puVar6[3] = (undefined4)(sVar11);
      puVar6[2] = (undefined4)(0);
      puVar6[1] = (undefined4)(0);
      memcpy(puVar1,pcVar4,sVar11);
      *(undefined1 *)((int)puVar1 + sVar11) = 0;
      local_44 = (undefined4 *)(puVar1);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x29;
    thunk_FUN_1106d3a0(&local_44,&local_48,&local_4c,&local_50,&local_54,&local_58,&local_5c,
                       &local_60,&local_64,&local_68,&local_74,&local_78,&local_7c,&local_6c);
    puVar1 = (undefined4 *)(local_44);
    *(unsigned char *)((char *)&local_8 + 0) = 0x2a;
    if ((local_44 != (undefined4 *)0x0) && (puVar6 = local_44 + -4, (int)local_44[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    puVar1 = (undefined4 *)(local_48);
    *(unsigned char *)((char *)&local_8 + 0) = 0x2b;
    if ((local_48 != (undefined4 *)0x0) && (puVar6 = local_48 + -4, (int)local_48[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    puVar1 = (undefined4 *)(local_4c);
    *(unsigned char *)((char *)&local_8 + 0) = 0x2c;
    if ((local_4c != (undefined4 *)0x0) && (puVar6 = local_4c + -4, (int)local_4c[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    puVar1 = (undefined4 *)(local_50);
    *(unsigned char *)((char *)&local_8 + 0) = 0x2d;
    if ((local_50 != (undefined4 *)0x0) && (puVar6 = local_50 + -4, (int)local_50[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    puVar1 = (undefined4 *)(local_54);
    *(unsigned char *)((char *)&local_8 + 0) = 0x2e;
    if ((local_54 != (undefined4 *)0x0) && (puVar6 = local_54 + -4, (int)local_54[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    puVar1 = (undefined4 *)(local_58);
    *(unsigned char *)((char *)&local_8 + 0) = 0x2f;
    if ((local_58 != (undefined4 *)0x0) && (puVar6 = local_58 + -4, (int)local_58[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    puVar1 = (undefined4 *)(local_5c);
    *(unsigned char *)((char *)&local_8 + 0) = 0x30;
    if ((local_5c != (undefined4 *)0x0) && (puVar6 = local_5c + -4, (int)local_5c[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    puVar1 = (undefined4 *)(local_60);
    *(unsigned char *)((char *)&local_8 + 0) = 0x31;
    if ((local_60 != (undefined4 *)0x0) && (puVar6 = local_60 + -4, (int)local_60[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    puVar1 = (undefined4 *)(local_64);
    *(unsigned char *)((char *)&local_8 + 0) = 0x32;
    if ((local_64 != (undefined4 *)0x0) && (puVar6 = local_64 + -4, (int)local_64[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    puVar1 = (undefined4 *)(local_68);
    *(unsigned char *)((char *)&local_8 + 0) = 0x33;
    if ((local_68 != (undefined4 *)0x0) && (puVar6 = local_68 + -4, (int)local_68[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    iVar7 = (int)(local_74);
    *(unsigned char *)((char *)&local_8 + 0) = 0x34;
    if ((local_74 != 0) &&
       (pvVar2 = (void *)(local_74 + -0x10), *(int *)(local_74 + -0x10) < 0xffff)) {
      iVar8 = (int)(thunk_FUN_1123fcd0(pvVar2));
      if (iVar8 == 0) {
        *(undefined4 *)(iVar7 + -8) = 0;
        *(undefined4 *)(iVar7 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar7,*(undefined4 *)(iVar7 + -4));
        free(pvVar2);
      }
    }
    iVar7 = (int)(local_78);
    *(unsigned char *)((char *)&local_8 + 0) = 0x35;
    if ((local_78 != 0) &&
       (pvVar2 = (void *)(local_78 + -0x10), *(int *)(local_78 + -0x10) < 0xffff)) {
      iVar8 = (int)(thunk_FUN_1123fcd0(pvVar2));
      if (iVar8 == 0) {
        *(undefined4 *)(iVar7 + -8) = 0;
        *(undefined4 *)(iVar7 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar7,*(undefined4 *)(iVar7 + -4));
        free(pvVar2);
      }
    }
    iVar7 = (int)(local_7c);
    *(unsigned char *)((char *)&local_8 + 0) = 0x36;
    if ((local_7c != 0) &&
       (pvVar2 = (void *)(local_7c + -0x10), *(int *)(local_7c + -0x10) < 0xffff)) {
      iVar8 = (int)(thunk_FUN_1123fcd0(pvVar2));
      if (iVar8 == 0) {
        *(undefined4 *)(iVar7 + -8) = 0;
        *(undefined4 *)(iVar7 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar7,*(undefined4 *)(iVar7 + -4));
        free(pvVar2);
      }
    }
    puVar1 = (undefined4 *)(local_6c);
    *(unsigned char *)((char *)&local_8 + 0) = 0x37;
    if ((local_6c != (undefined4 *)0x0) && (puVar6 = local_6c + -4, (int)local_6c[-4] < 0xffff)) {
      iVar7 = (int)(thunk_FUN_1123fcd0(puVar6));
      if (iVar7 == 0) {
        puVar1[-2] = (undefined4)(0);
        puVar1[-3] = (undefined4)(0);
        thunk_FUN_113cfb70(puVar1,puVar1[-1]);
        free(puVar6);
      }
    }
    pcVar4 = (char *)(local_24);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if ((local_24 != (char *)0x0) && (*local_24 != '\0')) {
      pcVar10 = (char *)(local_24);
      do {
        cVar5 = (char)(*pcVar10);
        pcVar10 = (char *)(pcVar10 + 1);
      } while (cVar5 != '\0');
      sVar11 = (size_t)((int)pcVar10 - (int)(local_24 + 1));
      _Memory = (int *)((int *)thunk_FUN_1148b586(sVar11 + 0x11));
      _Dst = (int *)(_Memory + 4);
      *_Memory = (int)(1);
      _Memory[3] = (int)(sVar11);
      _Memory[2] = (int)(0);
      _Memory[1] = (int)(0);
      memcpy(_Dst,pcVar4,sVar11);
      *(undefined1 *)((int)_Dst + sVar11) = 0;
      *(unsigned char *)((char *)&local_8 + 0) = 0x38;
      local_84 = (int *)(_Dst);
      if (&local_84 != (int **)(param_2 + 0x28)) {
        piVar3 = (int *)(*(int **)(param_2 + 0x28));
        if ((piVar3 != (int *)0x0) && (piVar3[-4] < 0xffff)) {
          iVar7 = (int)(thunk_FUN_1123fcd0(piVar3 + -4));
          if (iVar7 == 0) {
            piVar3[-2] = (int)(0);
            piVar3[-3] = (int)(0);
            thunk_FUN_113cfb70(piVar3,piVar3[-1]);
            free(piVar3 + -4);
          }
        }
        *(int **)(param_2 + 0x28) = _Dst;
        if ((_Dst != (int *)0x0) && (*_Memory < 0xffff)) {
          thunk_FUN_1123fce0(_Memory);
        }
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x39;
      if ((_Dst != (int *)0x0) && (*_Memory < 0xffff)) {
        iVar7 = (int)(thunk_FUN_1123fcd0(_Memory));
        if (iVar7 == 0) {
          _Memory[2] = (int)(0);
          _Memory[1] = (int)(0);
          thunk_FUN_113cfb70(_Dst,_Memory[3]);
          free(_Memory);
        }
      }
    }
    uVar9 = (undefined1)(1);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x3a;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x3b;
  ((SCStr *)((SCStr *)&local_70))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 0x3c;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x3d;
  ((SCStr *)((SCStr *)&local_1c))->int_release();
  local_1c = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x3e;
  ((SCStr *)((SCStr *)&local_20))->int_release();
  local_20 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x3f;
  ((SCStr *)((SCStr *)&local_24))->int_release();
  local_24 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x40;
  ((SCStr *)((SCStr *)&local_28))->int_release();
  local_28 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x41;
  ((SCStr *)((SCStr *)&local_2c))->int_release();
  local_2c = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x42;
  ((SCStr *)((SCStr *)&local_30))->int_release();
  local_30 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x43;
  ((SCStr *)((SCStr *)&local_34))->int_release();
  local_34 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x44;
  ((SCStr *)((SCStr *)&local_38))->int_release();
  local_38 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x45;
  ((SCStr *)((SCStr *)&local_3c))->int_release();
  local_3c = (char *)((char *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x46)));
  ((SCStr *)((SCStr *)&local_40))->int_release();
  local_40 = (char *)((char *)0x0);

  ((SCStr *)((SCStr *)&local_80))->int_release();

  return (undefined1)(uVar9);

 } catch (...) { }
}


// Reference entry 101c0230; body size 1274 bytes.
#line 1 "ENTRY_101c0230"

SCStr * FUN_101c0230(SCStr *param_1,undefined4 param_2)

{
 try {
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  local_14 = (undefined1 *)((undefined1 *)0x0);











  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  cVar1 = (char)(thunk_FUN_103ba670(param_2,&local_48,&local_44,&local_14,&local_40,&local_3c,&local_38,
                             &local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                             &local_18,0,0,DAT_12126b84 ));
  if (cVar1 == '\0') {
    ((SCStr *)(param_1))->int_allocRep((char *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((SCStr *)((SCStr *)&local_18))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    ((SCStr *)((SCStr *)&local_20))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    ((SCStr *)((SCStr *)&local_24))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    ((SCStr *)((SCStr *)&local_28))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    ((SCStr *)((SCStr *)&local_2c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x14;
    ((SCStr *)((SCStr *)&local_30))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    ((SCStr *)((SCStr *)&local_34))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x16;
    ((SCStr *)((SCStr *)&local_38))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x17;
    ((SCStr *)((SCStr *)&local_3c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x18;
    ((SCStr *)((SCStr *)&local_40))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x19;
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)((undefined1 *)0x0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1a)));
    ((SCStr *)((SCStr *)&local_44))->int_release();

  }
  else {
    iVar2 = (int)(thunk_FUN_110828b0());
    if (iVar2 != 0) {
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if (local_14 != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(local_14);
      }
      iVar2 = (int)(thunk_FUN_110935f0(puVar3,0));
      if (iVar2 != 0) {
        ((SCStr *)((SCStr *)&local_50))->int_allocRep((char *)(iVar2 + 0x18));
        *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
        ((SCStr *)((SCStr *)&local_14))->int_release();
        local_14 = (undefined1 *)((undefined1 *)local_50);
        ((SCStr *)((SCStr *)&local_14))->int_addref();
        *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
        ((SCStr *)((SCStr *)&local_50))->int_release();
        *(unsigned char *)((char *)&local_8 + 0) = 0xd;
        ((SCStr *)((SCStr *)&local_4c))->int_allocRep("");
        *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
        thunk_FUN_103aca40(param_1,&local_48,&local_44,&local_14,&local_40,&local_3c,&local_38,
                           &local_34,&local_30,&local_2c,&local_28,&local_24,&local_20,&local_1c,
                           &local_18,0,&local_4c);
        *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
        ((SCStr *)((SCStr *)&local_4c))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x20;
        ((SCStr *)((SCStr *)&local_18))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x21;
        ((SCStr *)((SCStr *)&local_1c))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x22;
        ((SCStr *)((SCStr *)&local_20))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x23;
        ((SCStr *)((SCStr *)&local_24))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x24;
        ((SCStr *)((SCStr *)&local_28))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x25;
        ((SCStr *)((SCStr *)&local_2c))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x26;
        ((SCStr *)((SCStr *)&local_30))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x27;
        ((SCStr *)((SCStr *)&local_34))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x28;
        ((SCStr *)((SCStr *)&local_38))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x29;
        ((SCStr *)((SCStr *)&local_3c))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x2a;
        ((SCStr *)((SCStr *)&local_40))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 0x2b;
        ((SCStr *)((SCStr *)&local_14))->int_release();
        local_14 = (undefined1 *)((undefined1 *)0x0);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x2c)));
        ((SCStr *)((SCStr *)&local_44))->int_release();


        ((SCStr *)((SCStr *)&local_48))->int_release();

        return (SCStr *)(param_1);
      }
    }
    ((SCStr *)(param_1))->int_allocRep((char *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x2e;
    ((SCStr *)((SCStr *)&local_18))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x2f;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x30;
    ((SCStr *)((SCStr *)&local_20))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x31;
    ((SCStr *)((SCStr *)&local_24))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x32;
    ((SCStr *)((SCStr *)&local_28))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x33;
    ((SCStr *)((SCStr *)&local_2c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x34;
    ((SCStr *)((SCStr *)&local_30))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x35;
    ((SCStr *)((SCStr *)&local_34))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x36;
    ((SCStr *)((SCStr *)&local_38))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x37;
    ((SCStr *)((SCStr *)&local_3c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x38;
    ((SCStr *)((SCStr *)&local_40))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x39;
    ((SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined1 *)((undefined1 *)0x0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x3a)));
    ((SCStr *)((SCStr *)&local_44))->int_release();

  }

  ((SCStr *)((SCStr *)&local_48))->int_release();

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 101c0870; body size 822 bytes.
#line 1 "ENTRY_101c0870"

SCStr * FUN_101c0870(SCStr *param_1)

{
 try {
  bool bVar1;
  uint uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000008))->op_eq("x-sonos-scuri://musiclibrary"));
  if (bVar1) {
    ((SCStr *)(param_1))->int_allocRep("RINCON_AssociatedZPUDN");

  }
  else {





    *(unsigned char *)((char *)&local_8 + 0) = 6;
    thunk_FUN_103bbe00(&stack0x00000008,&local_14,&local_1c,&local_18,&local_24,&local_20,uVar2);
    bVar1 = (bool)(((SCStr *)((SCStr *)&local_18))->op_eq("RINCON_AssociatedZPUDN"));
    if (bVar1) {
      bVar1 = (bool)(((SCStr *)((SCStr *)&local_1c))->beginsWith("SQ:"));
      if (bVar1) {
        ((SCStr *)(param_1))->int_allocRep("RINCON_AssociatedZPUDN:playlists");
        *(unsigned char *)((char *)&local_8 + 0) = 7;
        ((SCStr *)((SCStr *)&local_20))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 8;
        ((SCStr *)((SCStr *)&local_24))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 9;
        ((SCStr *)((SCStr *)&local_18))->int_release();

        *(unsigned char *)((char *)&local_8 + 0) = 10;
        ((SCStr *)((SCStr *)&local_1c))->int_release();

        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb)));
        ((SCStr *)((SCStr *)&local_14))->int_release();


        goto LAB_101c0b8b;
      }
    }
    bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("musiclibrary"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("asyncbrowse"));
      if (!bVar1) {
        bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("lastfm"));
        if (!bVar1) {
          bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("radio"));
          if (!bVar1) {
            bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("radiopickcity"));
            if (!bVar1) {
              bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("radiosetlocation"));
              if (!bVar1) {
                bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("searchtypes"));
                if (!bVar1) {
                  bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("searchresults"));
                  if (!bVar1) {
                    bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("infoview"));
                    if (!bVar1) {
                      bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("searchaggregate"));
                      if (!bVar1) {
                        bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("searchcomposite"));
                        if (!bVar1) {
                          bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("localmediabrowse"));
                          if (!bVar1) {
                            ((SCStr *)(param_1))->int_allocRep("");
                            *(unsigned char *)((char *)&local_8 + 0) = 0x13;
                            ((SCStr *)((SCStr *)&local_20))->int_release();

                            *(unsigned char *)((char *)&local_8 + 0) = 0x14;
                            ((SCStr *)((SCStr *)&local_24))->int_release();

                            *(unsigned char *)((char *)&local_8 + 0) = 0x15;
                            ((SCStr *)((SCStr *)&local_18))->int_release();

                            *(unsigned char *)((char *)&local_8 + 0) = 0x16;
                            ((SCStr *)((SCStr *)&local_1c))->int_release();

                            local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x17)));
                            ((SCStr *)((SCStr *)&local_14))->int_release();


                            goto LAB_101c0b8b;
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
    ((SCStr *)(param_1))->op_ctor((SCStr *)&local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    ((SCStr *)((SCStr *)&local_20))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((SCStr *)((SCStr *)&local_24))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((SCStr *)((SCStr *)&local_18))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x11)));
    ((SCStr *)((SCStr *)&local_14))->int_release();


  }
LAB_101c0b8b:
  ((SCStr *)((SCStr *)&stack0x00000008))->int_release();

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 101c0dd0; body size 1341 bytes.
#line 1 "ENTRY_101c0dd0"

SCStr * FUN_101c0dd0(SCStr *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://rootmenu");
    return (SCStr *)(param_1);
  case 1:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://x-sonos-scuri://rootmenu/music");
    return (SCStr *)(param_1);
  case 2:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://x-sonos-scuri://rootmenu/more");
    return (SCStr *)(param_1);
  case 3:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://musiclibrary");
    return (SCStr *)(param_1);
  case 4:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://localmediabrowse");
    return (SCStr *)(param_1);
  case 5:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://favorites");
    return (SCStr *)(param_1);
  case 6:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://notifications");
    return (SCStr *)(param_1);
  case 7:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://messagecenter");
    return (SCStr *)(param_1);
  case 8:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://homepage");
    return (SCStr *)(param_1);
  case 9:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://playlists");
    return (SCStr *)(param_1);
  case 10:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://myplaylists");
    return (SCStr *)(param_1);
  case 0xb:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://htsources");
    return (SCStr *)(param_1);
  case 0xc:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://linein");
    return (SCStr *)(param_1);
  case 0xd:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://UniversalSearch");
    return (SCStr *)(param_1);
  case 0xe:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://history");
    return (SCStr *)(param_1);
  case 0xf:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://searchhome");
    return (SCStr *)(param_1);
  case 0x10:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://searchhistory");
    return (SCStr *)(param_1);
  case 0x11:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://services");
    return (SCStr *)(param_1);
  case 0x12:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://services/music/availservices");
    return (SCStr *)(param_1);
  case 0x13:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://services/music/musicservices");
    return (SCStr *)(param_1);
  case 0x14:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://services/music/catalog");
    return (SCStr *)(param_1);
  case 0x15:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings");
    return (SCStr *)(param_1);
  case 0x16:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/musiclibrary");
    return (SCStr *)(param_1);
  case 0x17:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/addplayerorsub");
    return (SCStr *)(param_1);
  case 0x18:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/addboost");
    return (SCStr *)(param_1);
  case 0x19:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/zoneplayers");
    return (SCStr *)(param_1);
  case 0x1a:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/zonebridges");
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  case 0x1c:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/airplay");
    return (SCStr *)(param_1);
  case 0x1d:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/controller");
    return (SCStr *)(param_1);
  case 0x1e:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/parentalcontrols");
    return (SCStr *)(param_1);
  case 0x1f:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/parentalcontrols/explicitfilter");
    return (SCStr *)(param_1);
  case 0x20:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/dateandtime");
    return (SCStr *)(param_1);
  case 0x21:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced");
    return (SCStr *)(param_1);
  case 0x22:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/usagedata");
    return (SCStr *)(param_1);
  case 0x23:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/onlineupdate");
    return (SCStr *)(param_1);
  case 0x24:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/mysonos");
    return (SCStr *)(param_1);
  case 0x25:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/about");
    return (SCStr *)(param_1);
  case 0x26:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://alarms");
    return (SCStr *)(param_1);
  case 0x27:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://alarmmusic");
    return (SCStr *)(param_1);
  case 0x28:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/musiclibrary/shares");
    return (SCStr *)(param_1);
  case 0x29:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/account");
    return (SCStr *)(param_1);
  case 0x2a:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/connectedpartners");
    return (SCStr *)(param_1);
  case 0x2b:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://limitedconnectivity/snf/gethelp/emailus");
    return (SCStr *)(param_1);
  case 0x2c:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://limitedconnectivity/snf/gethelp/faq");
    return (SCStr *)(param_1);
  case 0x2d:
  case 0x3f:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/musiclibrary/updateidx");
    return (SCStr *)(param_1);
  case 0x2e:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/musiclibrary/schedupdateidx");
    return (SCStr *)(param_1);
  case 0x2f:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/musiclibrary/schedupdateidxtime");
    return (SCStr *)(param_1);
  case 0x30:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/musiclibrary/compalbums");
    return (SCStr *)(param_1);
  case 0x31:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/musiclibrary/sortfolderby");
    return (SCStr *)(param_1);
  case 0x32:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/dateandtime/timezone");
    return (SCStr *)(param_1);
  case 0x33:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/dateandtime/settimefrominternet");
    return (SCStr *)(param_1);
  case 0x34:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/dateandtime/date");
    return (SCStr *)(param_1);
  case 0x35:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/dateandtime/time");
    return (SCStr *)(param_1);
  case 0x36:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://debugmenu");
    return (SCStr *)(param_1);
  case 0x37:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/registration");
    return (SCStr *)(param_1);
  case 0x38:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/submitdiags");
    return (SCStr *)(param_1);
  case 0x39:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/resetcontroller");
    return (SCStr *)(param_1);
  case 0x3a:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/showmediaservers");
    return (SCStr *)(param_1);
  case 0x3b:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/showupnp");
    return (SCStr *)(param_1);
  case 0x3c:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/autocheck4updates");
    return (SCStr *)(param_1);
  case 0x3d:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/wirelesschannel");
    return (SCStr *)(param_1);
  case 0x3e:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/audiocompression");
    return (SCStr *)(param_1);
  case 0x40:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/beta");
    return (SCStr *)(param_1);
  case 0x41:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/secureplayerreg");
    return (SCStr *)(param_1);
  case 0x42:
    ((SCStr *)(param_1))->int_allocRep("x-sonos-scuri://settings/advanced/usagedata");
    return (SCStr *)(param_1);
  }
}


// Reference entry 101c15b0; body size 1122 bytes.
#line 1 "ENTRY_101c15b0"

SCStr * FUN_101c15b0(SCStr *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(8000,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  default:
    ((SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  case 3:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2a1,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 4:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2a2,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 5:
  case 9:
  case 0x26:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2a0,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 8:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2482,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 10:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f42,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0xb:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f4f,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0xc:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f4a,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0xe:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x251f,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x11:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f62,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x13:
  case 0x14:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2a3,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x15:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f51,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x16:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f61,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x17:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f67,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x18:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f68,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x19:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f6c,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x1a:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f6d,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x1c:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f6f,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x1d:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f70,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x1e:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f71,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x20:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f7b,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x21:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f7c,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x22:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2014,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x23:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f7d,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x24:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f77,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x25:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f7e,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x27:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x20cd,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x29:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f78,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x2a:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f79,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x2b:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x22b6,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x2c:
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x22b7,&DAT_11882ff0));
    ((SCStr *)(param_1))->int_allocRep(pcVar1);
    return (SCStr *)(param_1);
  case 0x36:
    ((SCStr *)(param_1))->int_allocRep("DebugMenu");
    return (SCStr *)(param_1);
  }
}


// Reference entry 101c1c20; body size 388 bytes.
#line 1 "ENTRY_101c1c20"

SCStr * FUN_101c1c20(SCStr *param_1)

{
 try {
  bool bVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;





  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_103bbe00(&stack0x00000008,&local_24,&local_18,&local_14,&local_20,&local_1c,
                     DAT_12126b84 );
  bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("LOCALMUSICBROWSE_CPUDN"));
  if (bVar1) {
    ((SCStr *)(param_1))->op_ctor((SCStr *)&local_18);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((SCStr *)((SCStr *)&local_20))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((SCStr *)((SCStr *)&local_18))->int_release();

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
    ((SCStr *)((SCStr *)&local_24))->int_release();

  }
  else {
    ((SCStr *)(param_1))->int_allocRep("");
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    ((SCStr *)((SCStr *)&local_20))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((SCStr *)((SCStr *)&local_14))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((SCStr *)((SCStr *)&local_18))->int_release();

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x10)));
    ((SCStr *)((SCStr *)&local_24))->int_release();

  }

  ((SCStr *)((SCStr *)&stack0x00000008))->int_release();

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 101c1e10; body size 773 bytes.
#line 1 "ENTRY_101c1e10"

SCStr * FUN_101c1e10(SCStr *param_1)

{
 try {
  bool bVar1;
  SCLibrary *this_;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  SCStr *pSVar5;
  uint uVar6;
  char *pcVar7;
  int **ppiVar8;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;



  local_18 = (char *)((char *)0x0);


  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_103bbe00(&stack0x00000008,&local_14,&local_24,&local_18,&local_20,&local_1c,
                     DAT_12126b84 );
  ppiVar8 = (int **)(&local_34);
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar2 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piVar3 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  *piVar2 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar3 + 0xc))(ppiVar8));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  if (((piVar3 == (int *)0x0) || (local_18 == (char *)0x0)) || (*local_18 == '\0')) {
LAB_101c2075:
    ((SCStr *)(param_1))->int_allocRep("");
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x16;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x17;
    ((SCStr *)((SCStr *)&local_20))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x18;
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (char *)((char *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x19;
    ((SCStr *)((SCStr *)&local_24))->int_release();

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1a)));
    ((SCStr *)((SCStr *)&local_14))->int_release();

  }
  else {
    bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("asyncbrowse"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("lastfm"));
      if (!bVar1) {
        bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("searchtypes"));
        if (!bVar1) {
          bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("searchresults"));
          if (!bVar1) {
            bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("infoview"));
            if (!bVar1) goto LAB_101c2075;
          }
        }
      }
    }
    pcVar7 = (char *)("");
    if (local_18 != (char *)0x0) {
      pcVar7 = (char *)(local_18);
    }
    (**(code **)(*(int *)piVar3[0x32] + 100))();
    piVar3 = (int *)((int *)thunk_FUN_110935f0(pcVar7,0));
    if (piVar3 == (int *)0x0) {
      ((SCStr *)((SCStr *)&local_2c))->int_allocRep("");
      pSVar5 = (SCStr *)((SCStr *)&local_2c);

      uVar6 = (uint)(2);
    }
    else {
      uVar4 = (undefined4)((**(code **)(*piVar3 + 0x58))());
      pSVar5 = (SCStr *)((SCStr *)thunk_FUN_103a3e50(&local_30,uVar4));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
      uVar6 = (uint)(1);
    }
    local_28 = (uint)(uVar6);
    ((SCStr *)(param_1))->op_ctor(pSVar5);
    if ((uVar6 & 2) != 0) {
      uVar6 = (uint)(uVar6 & 0xfffffffd | 4);

      local_28 = (uint)(uVar6);
      ((SCStr *)((SCStr *)&local_2c))->int_release();

    }

    if ((uVar6 & 1) != 0) {

      ((SCStr *)((SCStr *)&local_30))->int_release();

    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    ((SCStr *)((SCStr *)&local_20))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    ((SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (char *)((char *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    ((SCStr *)((SCStr *)&local_24))->int_release();

    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x13)));
    ((SCStr *)((SCStr *)&local_14))->int_release();

  }

  ((SCStr *)((SCStr *)&stack0x00000008))->int_release();

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 101c21e0; body size 333 bytes.
#line 1 "ENTRY_101c21e0"

SCStr * FUN_101c21e0(SCStr *param_1,int param_2)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  if (param_2 == 0) {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("settings/zoneplayers");
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_103ac5f0(param_1,&param_2,&stack0x0000000c,uVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    ((SCStr *)((SCStr *)&param_2))->int_release();

  }
  else if (param_2 == 1) {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("settings/zoneplayers/eq");
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_103ac5f0(param_1,&param_2,&stack0x0000000c,uVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    ((SCStr *)((SCStr *)&param_2))->int_release();

  }
  else {
    if (param_2 != 0xf) {
      ((SCStr *)(param_1))->int_allocRep("");

      ((SCStr *)((SCStr *)&stack0x0000000c))->int_release();

      return (SCStr *)(param_1);
    }
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("settings/zoneplayers/createstereopair");
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    thunk_FUN_103ac5f0(param_1,&param_2,&stack0x0000000c,uVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
    ((SCStr *)((SCStr *)&param_2))->int_release();

  }
  param_2 = (int)(0);
  ((SCStr *)((SCStr *)&stack0x0000000c))->int_release();

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 101c2380; body size 259 bytes.
#line 1 "ENTRY_101c2380"

bool FUN_101c2380(void)

{
 try {
  bool bVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;





  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_103bbe00(&stack0x00000004,&local_14,&local_24,&local_20,&local_1c,&local_18,
                     DAT_12126b84 );
  bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("asyncbrowse"));
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_24))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (bool)(bVar1);

 } catch (...) { }
}


// Reference entry 101c24d0; body size 259 bytes.
#line 1 "ENTRY_101c24d0"

bool FUN_101c24d0(void)

{
 try {
  bool bVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;





  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_103bbe00(&stack0x00000004,&local_14,&local_24,&local_20,&local_1c,&local_18,
                     DAT_12126b84 );
  bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("infoview"));
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_24))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (bool)(bVar1);

 } catch (...) { }
}


// Reference entry 101c2620; body size 296 bytes.
#line 1 "ENTRY_101c2620"

undefined1 FUN_101c2620(void)

{
 try {
  bool bVar1;
  undefined1 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;




  local_14 = (char *)((char *)0x0);

  thunk_FUN_103bbe00(&stack0x00000004,&local_24,&local_1c,&local_18,&local_20,&local_14,
                     DAT_12126b84 );
  bVar1 = (bool)(((SCStr *)((SCStr *)&local_18))->op_eq("LOCALMUSICBROWSE_CPUDN"));
  if (bVar1) {
    bVar1 = (bool)(((SCStr *)((SCStr *)&local_1c))->op_eq("root"));
    if ((bVar1) && ((local_14 == (char *)0x0 || (*local_14 == '\0')))) {
      uVar2 = (undefined1)(1);
      goto LAB_101c26c8;
    }
  }
  uVar2 = (undefined1)(0);
LAB_101c26c8:
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&local_24))->int_release();


  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 101c27a0; body size 259 bytes.
#line 1 "ENTRY_101c27a0"

bool FUN_101c27a0(void)

{
 try {
  bool bVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;





  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_103bbe00(&stack0x00000004,&local_24,&local_20,&local_14,&local_1c,&local_18,
                     DAT_12126b84 );
  bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("LOCALMUSICBROWSE_CPUDN"));
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&local_24))->int_release();


  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (bool)(bVar1);

 } catch (...) { }
}


// Reference entry 101c28f0; body size 259 bytes.
#line 1 "ENTRY_101c28f0"

bool FUN_101c28f0(void)

{
 try {
  bool bVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;





  *(unsigned char *)((char *)&local_8 + 0) = 5;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  thunk_FUN_103bbe00(&stack0x00000004,&local_14,&local_24,&local_20,&local_1c,&local_18,
                     DAT_12126b84 );
  bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("radio"));
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_24))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (bool)(bVar1);

 } catch (...) { }
}


// Reference entry 101c2a40; body size 301 bytes.
#line 1 "ENTRY_101c2a40"

undefined1 FUN_101c2a40(void)

{
 try {
  bool bVar1;
  undefined1 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;






  thunk_FUN_103bbe00(&stack0x00000004,&local_14,&local_24,&local_20,&local_1c,&local_18,
                     DAT_12126b84 );
  bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("searchresults"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("searchaggregate"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("searchcomposite"));
      if (!bVar1) {
        uVar2 = (undefined1)(0);
        goto LAB_101c2aed;
      }
    }
  }
  uVar2 = (undefined1)(1);
LAB_101c2aed:
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_24))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&local_14))->int_release();


  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 101c2bc0; body size 284 bytes.
#line 1 "ENTRY_101c2bc0"

undefined1 FUN_101c2bc0(void)

{
 try {
  bool bVar1;
  undefined1 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;






  thunk_FUN_103bbe00(&stack0x00000004,&local_24,&local_20,&local_14,&local_1c,&local_18,
                     DAT_12126b84 );
  bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("X-Sonos-Universal-Search-Service"));
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("X-Sonos-Universal-Search-Resource"));
    if (!bVar1) {
      uVar2 = (undefined1)(0);
      goto LAB_101c2c5c;
    }
  }
  uVar2 = (undefined1)(1);
LAB_101c2c5c:
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)((SCStr *)&local_18))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((SCStr *)((SCStr *)&local_1c))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 9;
  ((SCStr *)((SCStr *)&local_20))->int_release();

  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(10)));
  ((SCStr *)((SCStr *)&local_24))->int_release();


  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (undefined1)(uVar2);

 } catch (...) { }
}


// Reference entry 101c33b0; body size 419 bytes.
#line 1 "ENTRY_101c33b0"

SCStr * FUN_101c33b0(SCStr *param_1,SCStr *param_2)

{
 try {
  bool bVar1;
  SCLibrary *pSVar2;
  uint uVar3;
  SCStr *pSVar4;
  char *pcVar5;
  SCStr local_20 [4];
  undefined4 local_1c;
  SCStr *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  ((SCStr *)((SCStr *)&local_14))->op_ctor((SCStr *)(*(int *)(pSVar2 + 0x4c) + 0x10));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  uVar3 = (uint)(((SCStr *)((SCStr *)&local_14))->length());
  if (2 < uVar3) {
    ((SCStr *)((SCStr *)&local_18))->op_ctor((SCStr *)&local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    pSVar4 = (SCStr *)((SCStr *)&DAT_1186d2ee);
    if (local_18 != (SCStr *)0x0) {
      pSVar4 = (SCStr *)(local_18);
    }
    ((SCStr *)(pSVar4))->format((char *)&local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    ((SCStr *)((SCStr *)&local_18))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 1;
  }
  ((SCStr *)(param_1))->op_ctor(param_2);
  if ((*(char **)param_1 != (char *)0x0) && (**(char **)param_1 != '\0')) {
    bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("en"));
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)((SCStr *)&local_14))->op_eq("nb"));
      if (bVar1) {
        ((SCStr *)((SCStr *)&local_1c))->int_allocRep("no");
        *(unsigned char *)((char *)&local_8 + 0) = 4;
        ((SCStr *)((SCStr *)&local_14))->int_release();
        local_14 = (undefined4)(local_1c);
        ((SCStr *)((SCStr *)&local_14))->int_addref();
        *(unsigned char *)((char *)&local_8 + 0) = 5;
        ((SCStr *)((SCStr *)&local_1c))->int_release();
        *(unsigned char *)((char *)&local_8 + 0) = 1;
      }
      ((SCStr *)(local_20))->int_allocRep("?faqlang=");
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      pSVar4 = (SCStr *)((SCStr *)thunk_FUN_101a2e90(&local_18,local_20,&local_14));
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      pcVar5 = (char *)("");
      if (*(char **)pSVar4 != (char *)0x0) {
        pcVar5 = (char *)(*(char **)pSVar4);
      }
      uVar3 = (uint)(((SCStr *)(pSVar4))->length());
      ((SCStr *)(param_1))->append(pcVar5,uVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      ((SCStr *)((SCStr *)&local_18))->int_release();
      local_18 = (SCStr *)((SCStr *)0x0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
      ((SCStr *)(local_20))->int_release();
    }
  }

  ((SCStr *)((SCStr *)&local_14))->int_release();

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 101c3740; body size 152 bytes.
#line 1 "ENTRY_101c3740"

undefined4 * __thiscall Recovered_Bulk::FUN_101c3740(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
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
  pvVar3 = (void *)(operator_new(0x18));
  param_1[1] = (undefined4)(pvVar3);
  iVar1 = (int)(*(int *)*param_4);
  *(int *)((int)pvVar3 + 8) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),uVar2);
  }
  *(undefined4 *)((int)pvVar3 + 0xc) = 0;
  *(undefined4 *)((int)pvVar3 + 0x10) = 0;
  *(undefined4 *)((int)pvVar3 + 0x14) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 101c3c40; body size 248 bytes.
#line 1 "ENTRY_101c3c40"

int * __thiscall Recovered_Bulk::FUN_101c3c40(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIActionDescriptor");
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

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101c3da0; body size 242 bytes.
#line 1 "ENTRY_101c3da0"

int * __thiscall Recovered_Bulk::FUN_101c3da0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar4 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar2));
  }

  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)((int *)*param_1);
    if (piVar4 != (int *)0x0) {
      *param_1 = (int)(0);
      (**(code **)(*piVar4 + 8))();
    }
    *param_1 = (int)(0);
  }
  else {
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIActionDescriptor");
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

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101c3ed0; body size 188 bytes.
#line 1 "ENTRY_101c3ed0"

int * __thiscall Recovered_Bulk::FUN_101c3ed0(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)(param_2);


  uVar3 = (uint)(DAT_12126b84);

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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIActionDescriptor");

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

    ((SCStr *)((SCStr *)&param_2))->int_release();
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 101c3fc0; body size 207 bytes.
#line 1 "ENTRY_101c3fc0"

void __stdcall FUN_101c3fc0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint local_1c [4];
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_1c);
  pcVar4 = (char *)("");
  if ((char *)*param_1 != (char *)0x0) {
    pcVar4 = (char *)((char *)*param_1);
  }
  local_c = (uint)(0);
  local_8 = (uint)(0xf);
  local_1c[0] = (uint)(local_1c[0] & 0xffffff00);
  pcVar2 = (char *)(pcVar4);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(pcVar4,(int)pcVar2 - (int)(pcVar4 + 1));
  uVar3 = (uint)(0);
  if (local_c != 0) {
    do {
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < local_c);
  }
  if (0xf < local_8) {
    uVar3 = (uint)(local_8 + 1);
    uVar5 = (uint)(local_1c[0]);
    if (0xfff < uVar3) {
      uVar5 = (uint)(*(uint *)(local_1c[0] - 4));
      uVar3 = (uint)(local_8 + 0x24);
      if (0x1f < (local_1c[0] - uVar5) - 4) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(uVar5,uVar3);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 101c4140; body size 261 bytes.
#line 1 "ENTRY_101c4140"

int * FUN_101c4140(int *param_1,int *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(local_14))->int_allocRep("SCIActionDescriptor");

  piVar3 = (int *)((int *)(**(code **)(*param_2 + 0x20))(&local_18,local_14,uVar2));
  piVar1 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((SCStr *)(local_14))->int_release();
  local_18 = (int *)((int *)0x0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *param_1 = (int)((int)piVar1);
  local_18 = (int *)(piVar3);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
  if (piVar3 == (int *)0x0) {

    return (int *)(param_1);
  }
  (**(code **)(*piVar3 + 8))();

  return (int *)(param_1);

 } catch (...) { }
}


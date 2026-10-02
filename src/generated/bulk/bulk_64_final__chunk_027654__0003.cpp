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
extern int _invalid_parameter_noinfo_noreturn(...);
extern int atoi(...);
extern int beginsWith(...);
extern int contains(...);
extern int createPropertyBag(...);
extern int createSCDisplayMessagePopupAction(...);
extern int format(...);
extern int getHTSourceTypeText(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int length(...);
extern int memmove(...);
extern int op_eq(...);
extern int operator_new(...);
extern int stringWithFormat(...);
extern int strncmp(...);
extern int strtok(...);
extern int subscribeToEQ(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101bbd90(...);
extern int thunk_FUN_101bf370(...);
extern int thunk_FUN_101cd150(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101f6530(...);
extern int thunk_FUN_101fd3a0(...);
extern int thunk_FUN_101fda20(...);
extern int thunk_FUN_10207220(...);
extern int thunk_FUN_102178d0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_10292cf0(...);
extern int thunk_FUN_102aab80(...);
extern int thunk_FUN_102d5690(...);
extern int thunk_FUN_102e4c30(...);
extern int thunk_FUN_10309500(...);
extern int thunk_FUN_1030a0d0(...);
extern int thunk_FUN_104cbc30(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_1050f710(...);
extern int thunk_FUN_105106c0(...);
extern int thunk_FUN_105142b0(...);
extern int thunk_FUN_105142d0(...);
extern int thunk_FUN_10516cd0(...);
extern int thunk_FUN_10560940(...);
extern int thunk_FUN_105638c0(...);
extern int thunk_FUN_105b6490(...);
extern int thunk_FUN_10655080(...);
extern int thunk_FUN_10e460f0(...);
extern int thunk_FUN_10e47640(...);
extern int thunk_FUN_10f421e0(...);
extern int thunk_FUN_1101ba80(...);
extern int thunk_FUN_1101c7e0(...);
extern int thunk_FUN_11022490(...);
extern int thunk_FUN_1102f130(...);
extern int thunk_FUN_11039dd0(...);
extern int thunk_FUN_11042830(...);
extern int thunk_FUN_11044510(...);
extern int thunk_FUN_110471e0(...);
extern int thunk_FUN_11048570(...);
extern int thunk_FUN_11049940(...);
extern int thunk_FUN_1104af00(...);
extern int thunk_FUN_1104da60(...);
extern int thunk_FUN_1104e2c0(...);
extern int thunk_FUN_1104f490(...);
extern int thunk_FUN_1104f960(...);
extern int thunk_FUN_11052090(...);
extern int thunk_FUN_11053400(...);
extern int thunk_FUN_11053490(...);
extern int thunk_FUN_11055e60(...);
extern int thunk_FUN_11056de0(...);
extern int thunk_FUN_11056ec0(...);
extern int thunk_FUN_11057030(...);
extern int thunk_FUN_1105a9a0(...);
extern int thunk_FUN_1105bf70(...);
extern int thunk_FUN_1105ca20(...);
extern int thunk_FUN_1105ced0(...);
extern int thunk_FUN_1105d690(...);
extern int thunk_FUN_1105e660(...);
extern int thunk_FUN_11064e60(...);
extern int thunk_FUN_11065370(...);
extern int thunk_FUN_11065a60(...);
extern int thunk_FUN_11066c80(...);
extern int thunk_FUN_110670b0(...);
extern int thunk_FUN_110671e0(...);
extern int thunk_FUN_110676d0(...);
extern int thunk_FUN_110688f0(...);
extern int thunk_FUN_11068e40(...);
extern int thunk_FUN_11069050(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106b2c0(...);
extern int thunk_FUN_1106d3a0(...);
extern int thunk_FUN_1106e0b0(...);
extern int thunk_FUN_1106e590(...);
extern int thunk_FUN_1106e910(...);
extern int thunk_FUN_1106eda0(...);
extern int thunk_FUN_1106f6e0(...);
extern int thunk_FUN_110709e0(...);
extern int thunk_FUN_11070a80(...);
extern int thunk_FUN_110718c0(...);
extern int thunk_FUN_11071ba0(...);
extern int thunk_FUN_11071d50(...);
extern int thunk_FUN_11072020(...);
extern int thunk_FUN_11072070(...);
extern int thunk_FUN_110720c0(...);
extern int thunk_FUN_110721b0(...);
extern int thunk_FUN_110723c0(...);
extern int thunk_FUN_11072420(...);
extern int thunk_FUN_11072480(...);
extern int thunk_FUN_110724f0(...);
extern int thunk_FUN_11076390(...);
extern int thunk_FUN_11079340(...);
extern int thunk_FUN_110793c0(...);
extern int thunk_FUN_11079440(...);
extern int thunk_FUN_1107c630(...);
extern int thunk_FUN_1107c8c0(...);
extern int thunk_FUN_1107cb50(...);
extern int thunk_FUN_1107cde0(...);
extern int thunk_FUN_1107d830(...);
extern int thunk_FUN_1107d900(...);
extern int thunk_FUN_1107df30(...);
extern int thunk_FUN_1107df40(...);
extern int thunk_FUN_1107df50(...);
extern int thunk_FUN_1107df60(...);
extern int thunk_FUN_1107f4b0(...);
extern int thunk_FUN_1107f540(...);
extern int thunk_FUN_1107f6a0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110844a0(...);
extern int thunk_FUN_11084b50(...);
extern int thunk_FUN_1108a9a0(...);
extern int thunk_FUN_11090320(...);
extern int thunk_FUN_11091630(...);
extern int thunk_FUN_11092b50(...);
extern int thunk_FUN_11092f00(...);
extern int thunk_FUN_110935f0(...);
extern int thunk_FUN_11095840(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f100(...);
extern int thunk_FUN_1109f140(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a2890(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110b7610(...);
extern int thunk_FUN_110b78b0(...);
extern int thunk_FUN_110b7cd0(...);
extern int thunk_FUN_110b7de0(...);
extern int thunk_FUN_110b8100(...);
extern int thunk_FUN_110b8180(...);
extern int thunk_FUN_110b8290(...);
extern int thunk_FUN_110b8c20(...);
extern int thunk_FUN_110b9980(...);
extern int thunk_FUN_110b9d00(...);
extern int thunk_FUN_110ba2a0(...);
extern int thunk_FUN_110ba400(...);
extern int thunk_FUN_110ba560(...);
extern int thunk_FUN_110baed0(...);
extern int thunk_FUN_110bb050(...);
extern int thunk_FUN_110bb230(...);
extern int thunk_FUN_110bb5f0(...);
extern int thunk_FUN_110bb700(...);
extern int thunk_FUN_110bc160(...);
extern int thunk_FUN_110bc830(...);
extern int thunk_FUN_110bc8b0(...);
extern int thunk_FUN_110bd9f0(...);
extern int thunk_FUN_110ca2e0(...);
extern int thunk_FUN_110cb9c0(...);
extern int thunk_FUN_110d84a0(...);
extern int thunk_FUN_110db5f0(...);
extern int thunk_FUN_110f1830(...);
extern int thunk_FUN_110f19f0(...);
extern int thunk_FUN_110f1c00(...);
extern int thunk_FUN_110f2980(...);
extern int thunk_FUN_1112a9c0(...);
extern int thunk_FUN_1112c280(...);
extern int thunk_FUN_1113eb00(...);
extern int thunk_FUN_1113ecc0(...);
extern int thunk_FUN_1113eda0(...);
extern int thunk_FUN_1116b2f0(...);
extern int thunk_FUN_111a06b0(...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a0e70(...);
extern int thunk_FUN_111a10b0(...);
extern int thunk_FUN_111a4f00(...);
extern int thunk_FUN_111a5a30(...);
extern int thunk_FUN_111a6f10(...);
extern int thunk_FUN_111a7100(...);
extern int thunk_FUN_111a7300(...);
extern int thunk_FUN_111c05a0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_111cb020(...);
extern int thunk_FUN_111cfd00(...);
extern int thunk_FUN_111d2980(...);
extern int thunk_FUN_111df3d0(...);
extern int thunk_FUN_111e04f0(...);
extern int thunk_FUN_111e05f0(...);
extern int thunk_FUN_111f1980(...);
extern int thunk_FUN_11200910(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11245310(...);
extern int thunk_FUN_11245a50(...);
extern int thunk_FUN_11245c20(...);
extern int thunk_FUN_1124a200(...);
extern int thunk_FUN_1124a3e0(...);
extern int thunk_FUN_1124f350(...);
extern int thunk_FUN_1124f3c0(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_11255220(...);
extern int thunk_FUN_11255560(...);
extern int thunk_FUN_112580d0(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_11261f10(...);
extern int thunk_FUN_1127e5b0(...);
extern int thunk_FUN_1128f340(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112afbd0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_114568d0(...);
extern int thunk_FUN_11458eb0(...);
extern int thunk_FUN_114591a0(...);
extern int thunk_FUN_1145a2e0(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c460(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int thunk_FUN_1148b596(...);
extern int toupper(...);
extern int unsubscribeFromEQ(...);
extern int DAT_1186d2ee;
extern int DAT_1187b440;
extern int DAT_11881128;
extern int DAT_11882ff0;
extern int DAT_1188465c;
extern int DAT_1188feac;
extern int DAT_1196536c;
extern int DAT_11965808;
extern int DAT_119669a0;
extern int DAT_11966c00;
extern int DAT_1211c0f0;
extern int DAT_12126b84;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int DAT_121a7ba0;
extern int DAT_122e8d30;
extern int Ext_RControlAIOOpCB_vftable;
extern int Ext_RControlAIOOpRefBase_vftable;
extern int Ext_RControlAIOOpRef_vftable;
extern int Ext_RGetAvailableServicesCB_vftable;
extern int Ext_RHTTPDataIO_vftable;
extern int Ext_RHttpPostNoRedirectAIOOp_vftable;
extern int Ext_RITQHandler_vftable;
extern int Ext_RMuseRateItemAIOOp_vftable;
extern int Ext_RMuseRateItemPostRequest_vftable;
extern int Ext_ROAuthCB_vftable;
extern int Ext_RPrevTrackOrRewindToStart_vftable;
extern int Ext_RSonosCPFaultHandler_vftable;
extern int Ext_RSvcAccountsCB_vftable;
extern int Ext_RUpnpAVTSetPlayModeAIOOp_vftable;
extern int Ext_RUpnpAVTSnoozeAlarmAIOOp_vftable;
extern int Ext_RUpnpMultipleAVTOp_vftable;
extern int Ext_RUpnpPauseHouseOp_vftable;
extern int Ext_RUpnpSPRefreshAccountCredentialsXAIOOp_vftable;
extern int Ext_RUpnpStopHouseOp_vftable;
extern int Ext_RZPSortOrderManager_vftable;
extern int Ext_SCArray_vftable;
extern int Ext_SCBadgeResource_vftable;
extern int Ext_SCElapsedTimeMeasurement_vftable;
extern int Ext_SCIObjImpl_vftable;
extern int Ext_SCIObj_vftable;
extern int Ext_SCNowPlayingSource_vftable;
extern int Ext_SCOpAddTracksToQueue_vftable;
extern int Ext_SCOpGetTrackPositionInfo_vftable;
extern int Ext_SCOpImpl_vftable;
extern int Ext_SCOpenUrlActionDescriptor_vftable;
extern int Ext_SCSwfObjHHListener_vftable;
extern int Ext_SwfObjHouseholdOAuthCB_vftable;
extern int Ext_SwfObjHousehold_vftable;
extern int Ext_SwfObjZonePlayerCollection_vftable;
extern int Ext_SwfWrappedObj_vftable;
extern int g_lSCObjCount;
extern undefined1 LAB_11055979[];
extern undefined1 LAB_1105c9a3[];
extern undefined1 LAB_1105e33f[];
extern undefined1 LAB_1106354c[];
extern undefined1 LAB_110713c6[];
extern undefined1 LAB_110713cc[];
extern undefined1 LAB_11071576[];
extern undefined1 LAB_1107157c[];
extern undefined1 LAB_110717f5[];
extern undefined1 LAB_110717fb[];
extern undefined1 LAB_11071ad5[];
extern undefined1 LAB_11071adb[];
extern undefined1 LAB_11079734[];
extern undefined1 LAB_11080488[];
extern undefined1 LAB_1179d5f0[];
extern undefined1 LAB_1179d65d[];
extern undefined1 LAB_1179d6ae[];
extern undefined1 LAB_1179d6fd[];
extern undefined1 LAB_1179d7df[];
extern undefined1 LAB_1179d8fe[];
extern undefined1 LAB_1179da9d[];
extern undefined1 LAB_1179db0d[];
extern undefined1 LAB_1179db6d[];
extern undefined1 LAB_1179dbf7[];
extern undefined1 LAB_1179e09f[];
extern undefined1 LAB_1179e1bd[];
extern undefined1 LAB_1179e20e[];
extern undefined1 LAB_1179e2b5[];
extern undefined1 LAB_1179e316[];
extern undefined1 LAB_1179e3f6[];
extern undefined1 LAB_1179e8b5[];
extern undefined1 LAB_1179e8e0[];
extern undefined1 LAB_1179ee3d[];
extern undefined1 LAB_1179f17d[];
extern undefined1 LAB_1179f2e6[];
extern undefined1 LAB_1179f39d[];
extern undefined1 LAB_1179f45d[];
extern undefined1 LAB_1179f49d[];
extern undefined1 LAB_1179f4f6[];
extern undefined1 LAB_1179f53d[];
extern undefined1 LAB_1179f9ad[];
extern undefined1 LAB_1179f9fd[];
extern undefined1 LAB_1179fa45[];
extern undefined1 LAB_1179fb2d[];
extern undefined1 LAB_1179fb8d[];
extern undefined1 LAB_1179fe0d[];
extern undefined1 LAB_117a00bd[];
extern undefined1 LAB_117a0115[];
extern undefined1 LAB_117a03fd[];
extern undefined1 LAB_117a05f0[];
extern undefined1 LAB_117a0620[];
extern undefined1 LAB_117a08fd[];
extern undefined1 LAB_117a093d[];
extern undefined1 LAB_117a097d[];
extern undefined1 LAB_117a09dd[];
extern undefined1 LAB_117a0a6c[];
extern undefined1 LAB_117a0b9c[];
extern undefined1 LAB_117a0c3c[];
extern undefined1 LAB_117a0cdc[];
extern undefined1 LAB_117a0e2c[];
extern undefined1 LAB_117a0f6c[];
extern undefined1 LAB_117a0fc5[];
extern undefined1 LAB_117a1126[];
extern undefined1 LAB_117a1254[];
extern undefined1 LAB_117a12c6[];
extern undefined1 LAB_117a135c[];
extern undefined1 LAB_117a153d[];
extern undefined1 LAB_117a16ad[];
extern undefined1 LAB_117a175d[];
extern undefined1 LAB_117a1893[];
extern undefined1 LAB_117a197d[];
extern undefined1 LAB_117a1a40[];
extern undefined1 LAB_117a1a7d[];
extern undefined1 LAB_117a1d8d[];
extern undefined1 LAB_117a1eb0[];
extern undefined1 LAB_117a2166[];
extern undefined1 LAB_117a21c6[];
extern undefined1 LAB_117a2276[];
extern undefined1 LAB_117a22bd[];
extern undefined1 LAB_117a22fd[];
extern undefined1 LAB_117a233d[];
extern undefined1 LAB_117a242d[];
extern undefined1 LAB_117a248b[];
extern undefined1 LAB_117a24eb[];
extern undefined1 LAB_117a2520[];
extern undefined1 LAB_117a2550[];
extern undefined1 LAB_117a25bd[];
extern undefined1 LAB_117a25fd[];
extern undefined1 LAB_117a269b[];
extern undefined1 LAB_117a26d0[];
extern undefined1 LAB_117a2700[];
extern undefined1 LAB_117a27c5[];
extern undefined1 LAB_117a281d[];
extern undefined1 LAB_117a285d[];
extern undefined1 LAB_117a28dd[];
extern undefined1 LAB_117a293b[];
extern undefined1 LAB_117a2996[];
extern undefined1 LAB_117a2a70[];
extern undefined1 LAB_117a2aa0[];
extern undefined1 LAB_117a2ad0[];
extern undefined1 LAB_117a2b00[];
extern undefined1 LAB_117a2c8d[];
extern undefined1 LAB_117a2ccd[];
extern undefined1 LAB_117a2d17[];
extern undefined1 LAB_117a2f35[];
extern undefined1 LAB_117a3003[];
extern undefined1 LAB_117a3030[];
extern undefined1 LAB_117a3060[];
extern undefined1 LAB_117a30cd[];
extern undefined1 LAB_117a311c[];
extern undefined1 LAB_117a31dd[];
extern undefined1 LAB_117a323b[];
extern undefined1 LAB_117a329b[];
extern undefined1 LAB_117a32d0[];
extern undefined1 LAB_117a3300[];
extern undefined1 LAB_117a336d[];
extern undefined1 LAB_117a33ad[];
extern undefined1 LAB_117a36e5[];
extern undefined1 LAB_117a374d[];
extern undefined1 LAB_117a38dd[];
extern undefined1 LAB_117a3d10[];
extern undefined1 LAB_117a3d40[];
extern undefined1 LAB_117a3d7d[];
extern undefined1 LAB_117a3dbd[];
extern undefined1 LAB_117a3e05[];
extern undefined1 LAB_117a3e45[];
extern undefined1 LAB_117a3e7d[];
extern undefined1 LAB_117a3ebd[];
extern undefined1 LAB_117a3f50[];
extern undefined1 LAB_117a3f80[];
extern undefined1 LAB_117a3fb0[];
extern undefined1 LAB_117a3fe0[];
extern undefined1 LAB_117a41d5[];
extern undefined1 LAB_117a4215[];
extern undefined1 LAB_117a424d[];
extern undefined1 LAB_117a428d[];
extern undefined1 LAB_117a42cd[];
extern undefined1 LAB_117a430d[];
extern undefined1 LAB_117a434d[];
extern undefined1 LAB_117a4380[];
extern undefined1 LAB_117a43b0[];
extern undefined1 LAB_117a43e0[];
extern undefined1 LAB_117a4410[];
extern undefined1 LAB_117a453d[];
extern undefined1 LAB_117a457d[];
extern undefined1 LAB_117a46bd[];
extern undefined1 LAB_117a46fd[];
extern undefined1 LAB_117a473d[];
extern undefined1 LAB_117a477d[];
extern undefined1 LAB_117a47bd[];
extern undefined1 LAB_117a47fd[];
extern undefined1 LAB_117a4ded[];
extern undefined1 LAB_117a4e20[];
extern undefined1 LAB_117a4e50[];
extern undefined1 LAB_117a4e80[];
extern undefined1 LAB_117a4eb0[];
extern undefined1 LAB_117a4ee0[];
extern undefined1 LAB_117a4f10[];
extern undefined1 LAB_117a4f40[];
extern undefined1 LAB_117a4f70[];
extern undefined1 LAB_117a4fa0[];
extern undefined1 LAB_117a4fd0[];
extern undefined1 LAB_117a5000[];
extern undefined1 LAB_117a5030[];
extern undefined1 LAB_117a5060[];
extern undefined1 LAB_117a5090[];
extern undefined1 LAB_117a50c0[];
extern undefined1 LAB_117a50f0[];
extern undefined1 LAB_117a5120[];
extern undefined1 LAB_117a5150[];
extern undefined1 LAB_117a5180[];
extern undefined1 LAB_117a51b0[];
extern undefined1 LAB_117a5260[];
extern undefined1 LAB_117a5290[];
extern undefined1 LAB_117a52c0[];
extern undefined1 LAB_117a52f0[];
extern undefined1 LAB_117a5320[];
extern undefined1 LAB_117a5350[];
extern undefined1 LAB_117a5380[];
extern undefined1 LAB_117a53b0[];
extern undefined1 LAB_117a53e0[];
extern undefined1 LAB_117a54bd[];
extern undefined1 LAB_117a54fd[];
extern undefined1 LAB_117a553d[];
extern undefined1 LAB_117a557d[];
extern undefined1 LAB_117a55bd[];
extern undefined1 LAB_117a55fd[];
extern undefined1 LAB_117a563d[];
extern undefined1 LAB_117a56cd[];
extern undefined1 LAB_117a5790[];
extern undefined1 LAB_117a57dd[];
extern undefined1 LAB_117a5874[];
extern undefined1 LAB_117a58b4[];
extern undefined1 LAB_117a58f7[];
extern undefined1 LAB_117a5930[];
extern undefined1 LAB_117a5960[];
extern undefined1 LAB_117a5990[];
extern undefined1 LAB_117a59c0[];
extern int *PTR_DAT_11966d78;
extern int *PTR_DAT_11966d84;
extern int *PTR_DAT_11966d90;
extern int *PTR_DAT_11966d9c;
extern int *PTR_DAT_11966da8;
extern int *PTR_DAT_1211a5d0;
extern int *PTR_DAT_1211a5d8;
extern int *PTR_DAT_12126b6c;
extern int *stack0x00000004;
extern int *stack0x00000008;
extern int *stack0x00000010;
extern int *stack0xffffffc0;
extern int *stack0xfffffffc;
extern char s_Local_Music_118b4880[];
extern char s_Music_Library_119331b4[];
extern void *ExceptionList;
namespace std {}
namespace std { template<class...> struct _Parallelism_allocator { char _pad; _Parallelism_allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct allocator { char _pad; allocator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct greater { char _pad; greater(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct priority_queue { char _pad; priority_queue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
namespace std { template<class...> struct vector { char _pad; vector(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); }; }
typedef void *ARTIST;
typedef void *CHN;
typedef void *LOCALMUSICBROWSE_CPUDN;
typedef void *LOCK;
typedef void *NORMAL;
typedef void *REL_TIME;
typedef void *REPEAT_ALL;
typedef void *REPEAT_ONE;
typedef void *SHUFFLE;
typedef void *SHUFFLE_NOREPEAT;
typedef void *SHUFFLE_REPEAT_ONE;
typedef void *TYPE;
typedef void *UNLOCK;
typedef void *WARNING;
typedef void *ZONEGROUP_ID;
typedef void *ZP;
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct AVTransportURI { char _pad; AVTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Base { char _pad; Base(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CrossfadeMode { char _pad; CrossfadeMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentPlayMode { char _pad; CurrentPlayMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTrack { char _pad; CurrentTrack(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTrackDuration { char _pad; CurrentTrackDuration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTrackMetaData { char _pad; CurrentTrackMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTrackURI { char _pad; CurrentTrackURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTransportActions { char _pad; CurrentTransportActions(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentValidPlayModes { char _pad; CurrentValidPlayModes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Different { char _pad; Different(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DirectControlAccountID { char _pad; DirectControlAccountID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DirectControlClientID { char _pad; DirectControlClientID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DirectControlIsSuspended { char _pad; DirectControlIsSuspended(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Duration { char _pad; Duration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct EnqueuedTransportURIMetaData { char _pad; EnqueuedTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FID_conflict__Tidy { char _pad; FID_conflict__Tidy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GroupSettings { char _pad; GroupSettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct InstanceID { char _pad; InstanceID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Library { char _pad; Library(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Matches { char _pad; Matches(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Multiple { char _pad; Multiple(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NP_CTA_BubbleIsUpsell { char _pad; NP_CTA_BubbleIsUpsell(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Names { char _pad; Names(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NewPlayMode { char _pad; NewPlayMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct NumberOfTracks { char _pad; NumberOfTracks(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct OnStopSearchForZonePlayers { char _pad; OnStopSearchForZonePlayers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RateItem { char _pad; RateItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RefreshAccountCredentialsX { char _pad; RefreshAccountCredentialsX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Release { char _pad; Release(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RestartPending { char _pad; RestartPending(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCDeviceMusicEqualizationEventSink { char _pad; SCDeviceMusicEqualizationEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBadgeResource { char _pad; SCIBadgeResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIDeviceMusicEqualization { char _pad; SCIDeviceMusicEqualization(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingRatings { char _pad; SCINowPlayingRatings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingSleepTimer { char _pad; SCINowPlayingSleepTimer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOp { char _pad; SCIOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpAVTransportGetRemainingSleepTimerDuration { char _pad; SCIOpAVTransportGetRemainingSleepTimerDuration(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpAddTracksToQueue { char _pad; SCIOpAddTracksToQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpGenericUpdateQueue { char _pad; SCIOpGenericUpdateQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpGetTrackPositionInfo { char _pad; SCIOpGetTrackPositionInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCImageResource { char _pad; SCImageResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_Soundbar_NightSoundOff { char _pad; SCLIB_STR_Soundbar_NightSoundOff(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_Soundbar_NightSoundOn { char _pad; SCLIB_STR_Soundbar_NightSoundOn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_Soundbar_SpeechEnhancementOff { char _pad; SCLIB_STR_Soundbar_SpeechEnhancementOff(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLIB_STR_Soundbar_SpeechEnhancementOn { char _pad; SCLIB_STR_Soundbar_SpeechEnhancementOn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCNowPlayingTransport { char _pad; SCNowPlayingTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SaveHousehold { char _pad; SaveHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SetPlayMode { char _pad; SetPlayMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ShortMessage { char _pad; ShortMessage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SnoozeAlarm { char _pad; SnoozeAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Studio { char _pad; Studio(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct TransportState { char _pad; TransportState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Visual { char _pad; Visual(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct With { char _pad; With(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Stub_SCDeviceMusicEqualizationEventSink { Stub_SCDeviceMusicEqualizationEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int subscribeToEQ(...); int unsubscribeFromEQ(...); };
struct Stub_SCImageResource { Stub_SCImageResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int SCImageResource(...); };
struct Stub_SCLibrary { Stub_SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int createSCDisplayMessagePopupAction(...); int getHTSourceTypeText(...); int getSCHousehold(...); int getSingleton(...); };
struct Stub_SCStr { Stub_SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int SCStr(...); int beginsWith(...); int contains(...); int format(...); int int_addref(...); int int_allocRep(...); int int_release(...); int length(...); int op_eq(...); int stringWithFormat(...); };
using namespace std;
undefined4 * __thiscall FUN_11042b50(undefined4 *param_1,byte param_2);
void __thiscall FUN_11042f50(int param_1,undefined4 *param_2);
undefined4 FUN_11043100(void);
undefined4 * FUN_11043370(undefined4 *param_1);
void __thiscall FUN_11043490(int param_1,undefined4 param_2,SCStr *param_3);
SCStr * __thiscall FUN_11043840(int *param_1,SCStr *param_2,undefined4 param_3);
undefined4 * __thiscall FUN_11044470(int *param_1,undefined4 *param_2);
bool __fastcall FUN_11044e00(int *param_1);
SCStr * __thiscall FUN_11044e60(int *param_1,SCStr *param_2);
void __thiscall FUN_11045080(int *param_1,undefined4 *param_2);
void __thiscall FUN_110452d0(int *param_1,int *param_2);
SCStr * __thiscall FUN_11045490(int *param_1,SCStr *param_2,undefined4 param_3);
undefined4 __fastcall FUN_110459a0(int *param_1);
undefined4 * __thiscall FUN_11047370(int *param_1,undefined4 *param_2);
undefined4 __thiscall FUN_11047d20(int *param_1,undefined4 param_2);
undefined4 * __stdcall FUN_11047de0(undefined4 *param_1);
SCStr * __thiscall FUN_110481b0(int *param_1,SCStr *param_2);
int * FUN_110483f0(int *param_1);
int * __thiscall FUN_11048710(int *param_1,int *param_2);
char * __stdcall FUN_1104a890(char *param_1,char *param_2);
undefined4 FUN_1104aad0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4);
void __fastcall FUN_1104d4c0(int *param_1);
bool FUN_1104ea20(void);
undefined4 __fastcall FUN_1104ed00(int *param_1);
void FUN_1104ee20(void);
void __thiscall FUN_1104f490(int *param_1,undefined4 param_2);
void __fastcall FUN_1104f960(int *param_1);
void __fastcall FUN_1104fa20(int param_1);
undefined4 __fastcall FUN_1104fb70(int *param_1);
undefined1 __stdcall FUN_1104fd20(undefined4 param_1);
void __thiscall FUN_11050dc0(int param_1,undefined4 *param_2);
int * __thiscall FUN_11051b60(int *param_1,int *param_2);
int * __thiscall FUN_11051ca0(int *param_1,int *param_2);
int * __thiscall FUN_11051dd0(int *param_1,undefined4 *param_2);
void __thiscall FUN_11051f40(int param_1,undefined4 *param_2);
void __thiscall
FUN_11052090(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
            undefined4 param_6);
SCStr * __thiscall FUN_11052480(int *param_1,SCStr *param_2);
SCStr * FUN_11053180(SCStr *param_1);
undefined4 __stdcall FUN_11053200(undefined4 param_1);
undefined4 * __thiscall FUN_11053400(int *param_1,undefined4 *param_2);
void __fastcall FUN_11054290(int *param_1);
void __fastcall FUN_110545f0(int param_1);
undefined4 __fastcall FUN_11054650(int *param_1);
void __fastcall FUN_11054800(int param_1);
void __fastcall FUN_110548b0(int param_1);
undefined4 __thiscall FUN_110557a0(int *param_1,char *param_2);
void __fastcall FUN_110564f0(undefined4 *param_1);
/* WARNING: Removing unreachable block (ram,0x1105662b) */ void __fastcall FUN_11056560(undefined4 *param_1);
int * __thiscall FUN_11056980(int *param_1,int *param_2);
undefined4 * __thiscall FUN_11056b20(undefined4 *param_1,byte param_2);
void __stdcall FUN_11056de0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_11056ec0(void);
undefined4 FUN_11057030(void);
void __thiscall FUN_11057140(int param_1,int param_2,uint param_3);
void __fastcall FUN_11057510(int param_1);
undefined4 * __thiscall FUN_11057590(int *param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_11057a90(int *param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_11057df0(int *param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_11058150(int *param_1,undefined4 *param_2);
undefined4 * __thiscall FUN_11058930(int *param_1,undefined4 *param_2);
undefined4 * __thiscall
FUN_11059030(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 __thiscall FUN_110593b0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __thiscall FUN_11059910(int *param_1,undefined4 *param_2,undefined4 param_3);
undefined4 * __thiscall
FUN_1105a230(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 * __thiscall FUN_1105a3b0(int *param_1,undefined4 *param_2,undefined4 param_3);
undefined4 * __thiscall FUN_1105a640(int *param_1,undefined4 *param_2);
void __thiscall FUN_1105b5a0(int *param_1,SCStr *param_2);
undefined4 __fastcall FUN_1105b750(int *param_1);
uint __thiscall FUN_1105be80(int *param_1,int param_2);
int __fastcall FUN_1105bf20(int *param_1);
undefined4 __fastcall FUN_1105bf70(int *param_1);
uint __fastcall FUN_1105c2f0(int *param_1);
uint __fastcall FUN_1105c350(int *param_1);
undefined4 * __thiscall FUN_1105c400(int *param_1,undefined4 *param_2);
undefined4 __thiscall FUN_1105c980(int param_1,int param_2,short *param_3);
void __thiscall FUN_1105ca20(int *param_1,int *param_2,int *param_3);
char * FUN_1105ced0(undefined4 param_1,char param_2);
undefined4 FUN_1105cf60(uint param_1,undefined4 param_2);
uint FUN_1105cfc0(uint param_1,undefined4 param_2);
uint __fastcall FUN_1105d150(int *param_1);
bool __fastcall FUN_1105d1b0(int *param_1);
uint __thiscall FUN_1105d210(int *param_1,int param_2);
uint __fastcall FUN_1105d2c0(int *param_1);
undefined4 __fastcall FUN_1105d310(int *param_1);
void __thiscall FUN_1105d540(int param_1,undefined4 param_2,int *param_3);
undefined4 * __thiscall FUN_1105d8e0(int *param_1,undefined4 *param_2,SCStr *param_3);
void FUN_1105dae0(undefined4 param_1,int *param_2);
void __thiscall FUN_1105db50(int *param_1,char param_2);
undefined4 __thiscall FUN_1105dc20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 __thiscall FUN_1105dc80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 __fastcall FUN_1105dd50(int *param_1);
undefined4 __thiscall FUN_1105e210(int *param_1,int param_2);
uint __fastcall FUN_1105e290(int *param_1);
uint __fastcall FUN_1105e2f0(int *param_1);
uint __fastcall FUN_1105e360(int *param_1);
undefined4 __fastcall FUN_1105e3f0(int *param_1);
undefined4 __thiscall FUN_1105e910(int *param_1,int param_2);
uint __fastcall FUN_1105e9a0(int *param_1);
undefined4 __fastcall FUN_1105ea10(int *param_1);
uint __fastcall FUN_1105eaa0(int *param_1);
undefined4 __fastcall FUN_1105eb40(int *param_1);
uint __fastcall FUN_1105f050(int *param_1);
uint __fastcall FUN_1105f0b0(int *param_1);
undefined4 __fastcall FUN_1105f110(int *param_1);
undefined4 * __thiscall FUN_1105f190(undefined4 *param_1,int param_2);
void __fastcall FUN_1105f750(undefined4 *param_1);
void __fastcall FUN_1105f990(int param_1);
void __thiscall FUN_1105f9f0(int param_1,int *param_2,undefined4 param_3);
undefined4 __thiscall
FUN_110604e0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);
char * __stdcall FUN_11060570(char *param_1,undefined1 *param_2);
char * __thiscall FUN_11060660(int *param_1,char *param_2,undefined4 param_3);
char * __thiscall FUN_11060890(int *param_1,char *param_2,undefined4 param_3);
void __fastcall FUN_110609b0(int param_1);
void __thiscall FUN_11060a50(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __thiscall FUN_11060b80(int *param_1,undefined4 *param_2,SCStr *param_3);
undefined4 * __thiscall FUN_11060c00(int *param_1,undefined4 *param_2,SCStr *param_3);
undefined4 * __thiscall FUN_11060d30(int *param_1,undefined4 *param_2,SCStr *param_3);
undefined4 * __thiscall FUN_11061520(undefined4 *param_1,int param_2);
undefined4 * __thiscall FUN_110615e0(undefined4 *param_1,int param_2);
undefined4 * __thiscall FUN_11061790(undefined4 *param_1,int param_2);
void __fastcall FUN_11061920(undefined4 *param_1);
void __fastcall FUN_11061a70(undefined4 *param_1);
void __fastcall FUN_11061c00(int param_1);
void __thiscall FUN_11061c60(int param_1,int *param_2,undefined4 param_3);
void __fastcall FUN_11061df0(int param_1);
void __thiscall FUN_11061e90(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __thiscall FUN_11061fc0(int *param_1,undefined4 *param_2,SCStr *param_3);
undefined4 * __thiscall FUN_110621c0(undefined4 *param_1,int param_2);
void __fastcall FUN_11062550(undefined4 *param_1);
void __fastcall FUN_110626a0(undefined4 *param_1);
void __fastcall FUN_11062830(int param_1);
void __thiscall FUN_11062890(int param_1,int *param_2,undefined4 param_3);
undefined4 __thiscall FUN_11062970(int *param_1,undefined4 param_2);
void __fastcall FUN_11062d80(int param_1);
void __thiscall FUN_11062e20(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __thiscall FUN_11062f50(int *param_1,undefined4 *param_2,SCStr *param_3);
undefined4 FUN_110634e0(undefined4 *param_1,int param_2,void *param_3,size_t param_4);
void FUN_11063570(undefined4 *param_1);
void FUN_11063760(void *param_1);
undefined4 * __thiscall FUN_11064630(undefined4 *param_1,int param_2);
undefined4 * __thiscall FUN_110646c0(undefined4 *param_1,int param_2);
undefined4 * __thiscall
FUN_11064820(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __fastcall FUN_11064c80(undefined4 *param_1);
void __fastcall FUN_11064dd0(undefined4 *param_1);
void __fastcall FUN_11064e60(undefined4 *param_1);
undefined4 * __thiscall FUN_11065010(undefined4 *param_1,byte param_2);
void __fastcall FUN_11065130(int param_1);
void __thiscall FUN_11065190(int param_1,int *param_2,undefined4 param_3);
undefined4 __thiscall FUN_110659e0(int param_1,undefined4 param_2,short *param_3);
void __fastcall FUN_11065a60(int param_1);
void __fastcall FUN_11065ae0(int param_1);
void __thiscall FUN_11065b80(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __thiscall FUN_11065cb0(int *param_1,undefined4 *param_2,SCStr *param_3);
undefined4 __thiscall FUN_11065d90(int param_1,void *param_2,uint param_3,size_t *param_4);
void __fastcall FUN_11065e30(int param_1);
undefined4 FUN_110667a0(undefined4 param_1);
undefined4 * __thiscall
FUN_11066c80(undefined4 *param_1,SCStr *param_2,SCStr *param_3,SCStr *param_4,undefined4 param_5);
void __fastcall FUN_11066d80(undefined4 *param_1);
undefined4 * __thiscall FUN_11066e90(undefined4 *param_1,byte param_2);
undefined4 * FUN_110670b0(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_110671e0(undefined4 *param_1);
undefined4 * __thiscall FUN_11067290(int *param_1,undefined4 *param_2,SCStr *param_3);
undefined4 * __thiscall FUN_11067460(undefined4 *param_1,int param_2);
undefined4 * __thiscall FUN_11067520(undefined4 *param_1,int param_2);
undefined4 * __thiscall FUN_110676d0(undefined4 *param_1,int param_2);
void __fastcall FUN_11067870(undefined4 *param_1);
void __fastcall FUN_110679c0(undefined4 *param_1);
void __fastcall FUN_11067b90(int param_1);
void __thiscall FUN_11067bf0(int param_1,int *param_2,undefined4 param_3);
void __fastcall FUN_11067e50(int param_1);
void __thiscall FUN_11067ef0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 * __thiscall FUN_11068020(int *param_1,undefined4 *param_2,SCStr *param_3);
undefined4 * __thiscall FUN_110680a0(int *param_1,undefined4 *param_2,SCStr *param_3);
byte * FUN_11068e40(byte *param_1,byte *param_2);
undefined4 FUN_11069050(uint param_1);
uint FUN_11069340(byte *param_1,int param_2);
char * FUN_1106a8d0(char *param_1,char *param_2,int param_3);
void FUN_1106b0f0(int *param_1,int *param_2,int param_3,uint param_4,uint param_5);
void __thiscall FUN_1106b4a0(int param_1,int *param_2);
void __thiscall
FUN_1106d3a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15);
void __stdcall FUN_1106d600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7);
void __fastcall FUN_1106d920(int *param_1);
undefined4 FUN_1106df60(int param_1);
void __fastcall FUN_1106e590(int param_1);
void __thiscall FUN_1106e690(int param_1,uint *param_2,undefined4 *param_3);
undefined4 __fastcall FUN_1106e770(int param_1);
undefined4 __thiscall FUN_1106e850(int param_1,undefined4 param_2);
undefined4 __fastcall FUN_1106eda0(int param_1);
void FUN_1106f2d0(void);
void __thiscall FUN_1106f380(int param_1,int *param_2);
void FUN_110709e0(int *param_1,int *param_2);
void FUN_11070a80(int *param_1,int *param_2);
int * __thiscall FUN_11070b20(undefined4 *param_1,int *param_2,uint *param_3);
int * __thiscall FUN_11070c30(undefined4 *param_1,int *param_2,uint *param_3);
int * __thiscall FUN_11070d40(undefined4 *param_1,int *param_2,int *param_3);
int * __thiscall FUN_11070ea0(undefined4 *param_1,int *param_2,int *param_3);
undefined4 * __thiscall FUN_11071280(int *param_1,void *param_2,undefined4 *param_3);
undefined4 * __thiscall FUN_11071430(int *param_1,void *param_2,undefined4 *param_3);
int * __thiscall FUN_110715e0(int *param_1,int *param_2,int *param_3);
int * __thiscall FUN_110718c0(int *param_1,int *param_2,int *param_3);
void __thiscall FUN_11071f00(int *param_1,undefined4 param_2);
void __thiscall FUN_11071f60(int *param_1,undefined4 param_2);
undefined4 __thiscall FUN_110720c0(undefined4 param_1,undefined4 param_2,int *param_3);
undefined4 __thiscall FUN_110721b0(undefined4 param_1,undefined4 param_2,int *param_3);
int * __thiscall FUN_110723c0(int *param_1,int *param_2,uint *param_3);
int * __thiscall FUN_11072420(int *param_1,int *param_2,uint *param_3);
int * __thiscall FUN_11072480(int *param_1,int *param_2,undefined4 param_3);
int * __thiscall FUN_110724f0(int *param_1,int *param_2,undefined4 param_3);
void FUN_11072620(undefined4 param_1,int param_2);
void FUN_110726d0(undefined4 param_1,int param_2);
void FUN_110727d0(int param_1,int param_2,int param_3,code *param_4);
int * FUN_11072fb0(int *param_1,int *param_2,int *param_3);
void FUN_11073c00(int param_1,int param_2,uint param_3,int *param_4,code *param_5);
void FUN_11073fd0(int param_1,int param_2,int param_3,int *param_4,code *param_5);
int * __thiscall FUN_11074530(undefined4 *param_1,int *param_2,int *param_3);
int * __thiscall FUN_11074680(undefined4 *param_1,int *param_2,int *param_3);
int * FUN_11074810(int *param_1,int *param_2,int *param_3,undefined4 param_4);
int * FUN_110748e0(int *param_1,int *param_2,int *param_3,undefined4 param_4);
int * FUN_11074a10(int *param_1,int *param_2,int *param_3,undefined4 param_4);
int * FUN_11074ae0(int *param_1,int *param_2,int *param_3,undefined4 param_4);
int * FUN_11074bb0(int *param_1,int *param_2,int *param_3,undefined4 param_4);
void FUN_11075100(undefined4 param_1,int *param_2);
void FUN_110751a0(undefined4 param_1,int *param_2);
void FUN_11075220(undefined4 param_1,int *param_2);
void FUN_110752a0(undefined4 param_1,int *param_2);
void __thiscall FUN_11075a00(int param_1,int *param_2);
void __thiscall FUN_11075a60(int param_1,int *param_2);
void __thiscall FUN_11075ac0(int param_1,int *param_2);
void __thiscall FUN_11075f10(undefined4 *param_1,int *param_2,uint *param_3);
void __thiscall FUN_11076010(undefined4 *param_1,int *param_2,uint *param_3);
int * __thiscall FUN_11076770(int *param_1,int param_2);
int * __thiscall FUN_110767e0(int *param_1,int param_2);
int * __thiscall FUN_110768e0(int *param_1,int param_2);
int * __thiscall FUN_11076970(int *param_1,int param_2);
int * __thiscall FUN_11076a20(int *param_1,int param_2);
int * __thiscall FUN_11076ab0(int *param_1,int param_2);
undefined4 * __fastcall FUN_110784a0(undefined4 *param_1);
void __fastcall FUN_11078700(undefined4 *param_1);
void __fastcall FUN_110787a0(undefined4 *param_1);
void __fastcall FUN_11078840(int *param_1);
void __fastcall FUN_110788c0(int *param_1);
void __fastcall FUN_11078940(int *param_1);
void __fastcall FUN_110789c0(int *param_1);
void __fastcall FUN_11078a40(int *param_1);
void __fastcall FUN_11078ac0(int *param_1);
void __fastcall FUN_11078b40(undefined4 *param_1);
void __fastcall FUN_11078c40(int param_1);
void __fastcall FUN_11078cc0(int param_1);
void __fastcall FUN_11078d40(int param_1);
void __fastcall FUN_11078f00(int param_1);
void __fastcall FUN_11078fc0(int param_1);
void __fastcall FUN_11079170(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_11079260(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_110792d0(int *param_1);
void __fastcall FUN_11079340(int *param_1);
void __fastcall FUN_110793c0(int *param_1);
void __fastcall FUN_11079440(int *param_1);
void __fastcall FUN_110794c0(int *param_1);
void __fastcall FUN_110795d0(int *param_1);
void __fastcall FUN_11079800(undefined4 *param_1);
void __fastcall FUN_110798d0(undefined4 *param_1);
void __fastcall FUN_110799a0(undefined4 *param_1);
undefined4 * __thiscall FUN_1107ad10(undefined4 *param_1,byte param_2);
undefined4 * __thiscall FUN_1107add0(undefined4 *param_1,byte param_2);
int * __thiscall FUN_1107ae90(int *param_1,byte param_2);
int * __thiscall FUN_1107af30(int *param_1,byte param_2);
undefined4 * __thiscall FUN_1107afd0(undefined4 *param_1,byte param_2);
int * __thiscall FUN_1107b070(int *param_1,byte param_2);
int * __thiscall FUN_1107b130(int *param_1,byte param_2);
undefined4 * __thiscall FUN_1107b380(undefined4 *param_1,byte param_2);
undefined4 * __thiscall FUN_1107b490(undefined4 *param_1,byte param_2);
undefined4 * FUN_1107b6c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,char param_4);
void __thiscall FUN_1107bb30(int *param_1,int param_2,int param_3,int param_4);
void __thiscall FUN_1107bba0(int *param_1,int param_2,int param_3,int param_4);
void __thiscall FUN_1107bc10(int *param_1,int param_2,int param_3,int param_4);
void __thiscall FUN_1107bca0(int *param_1,int param_2,int param_3,int param_4);
void __thiscall FUN_1107bd30(int *param_1,int param_2,int param_3,int param_4);
void __thiscall FUN_1107d180(int *param_1,int param_2);
void __thiscall FUN_1107d490(int *param_1,int *param_2);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_1107d570(int *param_1);
/* Library Function - Multiple Matches With Different Base Names public: __thiscall std::priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >::~priority_queue<unsigned int,class std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >,struct std::greater<void> >(void_) public: __thiscall std::vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >::~vector<unsigned int,struct std::_Parallelism_allocator<unsigned int> >(void_) public: __thiscall std::vector<unsigned int,class std::allocator<unsigned int> >::~vector<unsigned int,class std::allocator<unsigned int> >(void_) public: __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *> >::~vector<struct CHN *,class std::allocator<struct CHN *> >(void_) 7 names - too many to list Library: Visual Studio 2019 Release */ void __fastcall FID_conflict__Tidy_1107d5e0(int *param_1);
void __fastcall FUN_1107d650(int *param_1);
void __fastcall FUN_1107d6d0(int *param_1);
void __fastcall FUN_1107d750(int *param_1);
int * __thiscall FUN_1107d830(undefined4 param_1,int *param_2,int *param_3,int *param_4);
int * __thiscall FUN_1107d900(undefined4 param_1,int *param_2,int *param_3,int *param_4);
int * __thiscall FUN_1107d9d0(undefined4 param_1,int *param_2,int *param_3,int *param_4);
void __thiscall FUN_1107db00(undefined4 param_1,int *param_2,int *param_3,int *param_4);
void __thiscall FUN_1107dbd0(undefined4 param_1,int *param_2,int *param_3,int *param_4);
void __thiscall FUN_1107dd20(undefined4 param_1,int *param_2,int *param_3,int *param_4);
void __thiscall FUN_1107ddf0(undefined4 param_1,int *param_2,int *param_3,int *param_4);
undefined4 __thiscall FUN_1107e280(int param_1,int *param_2);
undefined4 FUN_1107e350(int *param_1);
void FUN_1107e780(void);
void __fastcall FUN_1107ece0(int param_1);
undefined4 FUN_1107f1e0(int param_1,undefined1 *param_2);
void __fastcall FUN_1107f4b0(int param_1);
void __fastcall FUN_1107f540(int param_1);
byte __fastcall FUN_1107f630(int param_1);
void __fastcall FUN_1107f6a0(int param_1);
undefined4 __fastcall FUN_1107f880(int param_1);
void FUN_1107f920(void);
void __stdcall FUN_1107fa80(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
undefined4 * __fastcall FUN_1107fc60(undefined4 param_1);
undefined4 * __fastcall FUN_1107fd10(undefined4 param_1);
undefined4 * __fastcall FUN_1107fdd0(int param_1);
undefined4 __fastcall FUN_1107ff20(int param_1);
void __stdcall FUN_11080360(undefined4 param_1,undefined1 *param_2);
void __thiscall FUN_110806d0(int param_1,undefined4 *param_2,int *param_3);
void __thiscall FUN_110807e0(int param_1,undefined4 *param_2,int *param_3);
void __thiscall FUN_110808f0(int param_1,undefined4 *param_2,int *param_3);
void __thiscall FUN_11080a00(int param_1,undefined4 *param_2,int *param_3);
void __thiscall FUN_11080b60(int *param_1,int *param_2,undefined4 param_3);
void __thiscall FUN_11080bd0(int *param_1,int *param_2,uint *param_3);
void __thiscall FUN_11080c30(int *param_1,int *param_2,uint *param_3);
void __thiscall FUN_11080c90(int *param_1,int *param_2,undefined4 param_3);
// Reference entry 11042b50; body size 323 bytes.
#line 1 "ENTRY_11042b50"

undefined4 * __thiscall FUN_11042b50(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1179d5f0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_SCNowPlayingSource_vftable);
  param_1[3] = (uint)&Ext_SCNowPlayingSource_vftable;
  param_1[4] = (uint)&Ext_SCNowPlayingSource_vftable;
  thunk_FUN_104dec20(uVar3);
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
  }
  iVar1 = (int)(param_1[0x10]);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar4 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  piVar2 = (int *)((int *)param_1[0xf]);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar2 != (int *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)(param_1 + 9)))->int_release();
  param_1[9] = 0;
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((Stub_SCStr *)((SCStr *)(param_1 + 8)))->int_release();
  param_1[8] = 0;
  piVar2 = (int *)((int *)param_1[7]);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  if (piVar2 != (int *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[4] = (uint)&Ext_SCSwfObjHHListener_vftable;
  param_1[3] = (uint)&Ext_SCIObj_vftable;
  param_1[2] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11042f50; body size 169 bytes.
#line 1 "ENTRY_11042f50"

void __thiscall FUN_11042f50(int param_1,undefined4 *param_2)

{
  undefined4 *_Dst;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  undefined4 *local_108;
  char local_104 [256];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_108);
  local_108 = (undefined4 *)(param_2);
  thunk_FUN_110bb700(*(undefined4 *)(param_1 + 4),local_104,0x100);
  if (local_104[0] == '\0') {
    *param_2 = (undefined4)(0);
  }
  else {
    pcVar3 = (char *)(local_104);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(local_104 + 1));
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    _Dst = (undefined4 *)(puVar2 + 4);
    *puVar2 = (undefined4)(1);
    puVar2[3] = _Size;
    puVar2[2] = 0;
    puVar2[1] = 0;
    memcpy(_Dst,local_104,_Size);
    *(undefined1 *)((int)_Dst + _Size) = 0;
    *param_2 = (undefined4)(_Dst);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11043100; body size 168 bytes.
#line 1 "ENTRY_11043100"

undefined4 FUN_11043100(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179d65d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1113eda0(&local_14,"TransportState");
  local_8 = (undefined4)(0);
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (undefined4)(thunk_FUN_110b8100(puVar4));
  local_8 = (undefined4)(1);
  if ((local_14 != (undefined1 *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0(local_14 + -0x10,uVar1));
    if (iVar3 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free(local_14 + -0x10);
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar2);
}


// Reference entry 11043370; body size 222 bytes.
#line 1 "ENTRY_11043370"

undefined4 * FUN_11043370(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1179d6ae);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)(0);
  param_1[1] = 0;
  pvVar1 = (void *)(operator_new(0x18));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  local_8 = (undefined4)(0);
  local_14 = (undefined4)(1);
  local_18 = (undefined4)(0xc);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("spotify.connect.adapter");
  local_18 = (undefined4)(9);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("spotify.connect.adapter");
  local_18 = (undefined4)(0xef);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("com.audible.mobile.sonos");
  local_18 = (undefined4)(0xec);
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102aab80(&local_18));
  *puVar2 = (undefined4)("com.pandora.dc");
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11043490; body size 231 bytes.
#line 1 "ENTRY_11043490"

void __thiscall FUN_11043490(int param_1,undefined4 param_2,SCStr *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179d6fd);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBrowseDataSource:onBrowseChanged"));
  if (bVar1) {
    puVar3 = (undefined4 *)((undefined4 *)(**(code **)(*(int *)(param_1 + -0xc) + 0xe8))(uVar2));
    piVar5 = (int *)((int *)0x0);
    local_14 = (int *)((int *)0x0);
    if (puVar3 != (undefined4 *)0x0) {
      ((Stub_SCStr *)((SCStr *)&param_3))->int_allocRep("SCINowPlayingRatings");
      local_8 = (undefined4)(0);
      puVar3 = (undefined4 *)((undefined4 *)(**(code **)*puVar3)(&local_18,&param_3));
      piVar5 = (int *)((int *)*puVar3);
      *puVar3 = (undefined4)(0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
      local_14 = (int *)(piVar5);
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
      local_8 = (undefined4)(3);
      ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
      param_3 = (SCStr *)((SCStr *)0x0);
    }
    local_8 = (undefined4)(4);
    if (piVar5 != (int *)0x0) {
      iVar4 = (int)(thunk_FUN_1101ba80());
      if (iVar4 == 1) {
        thunk_FUN_1101c7e0();
      }
    }
    local_8 = (undefined4)(5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11043840; body size 329 bytes.
#line 1 "ENTRY_11043840"

SCStr * __thiscall FUN_11043840(int *param_1,SCStr *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  SCStr *pSVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179d7df);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(0);
  (**(code **)(*param_1 + 0x78))(&local_24,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  uVar1 = (uint)(((Stub_SCStr *)((SCStr *)&local_24))->length());
  if (uVar1 == 0) {
    uVar2 = (undefined4)((**(code **)(*param_1 + 0x74))());
    switch(uVar2) {
    default:
      ((Stub_SCStr *)((SCStr *)&local_2c))->SCStr((SCStr *)&DAT_121a07b0);
      local_28 = (undefined4)(DAT_121a07b4);
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
      ((Stub_SCStr *)((SCStr *)&uStack_18))->int_allocRep("linein");
      local_2c = (undefined4)(0);
      local_8 = (undefined4)(4);
      ((Stub_SCStr *)((SCStr *)&local_2c))->int_release();
      local_2c = (undefined4)(uStack_18);
      ((Stub_SCStr *)((SCStr *)&local_2c))->int_addref();
      local_28 = (undefined4)(5);
      local_14 = (uint)(8);
      local_8 = (undefined4)(5);
      ((Stub_SCStr *)((SCStr *)&uStack_18))->int_release();
      uStack_18 = (undefined4)(0);
      break;
    case 9:
      ((Stub_SCStr *)((SCStr *)&param_3))->int_allocRep("bluetooth");
      local_8 = (undefined4)(6);
      ((Stub_SCImageResource *)((SCImageResource *)&local_2c))->SCImageResource((SCStr *)&param_3,5);
      local_14 = (uint)(8);
      local_8 = (undefined4)(7);
      ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
      param_3 = (undefined4)(0);
      break;
    case 0xb:
      ((Stub_SCStr *)((SCStr *)&uStack_1c))->int_allocRep("alarms");
      local_8 = (undefined4)(8);
      ((Stub_SCImageResource *)((SCImageResource *)&local_2c))->SCImageResource((SCStr *)&uStack_1c,5);
      local_14 = (uint)(8);
      local_8 = (undefined4)(9);
      ((Stub_SCStr *)((SCStr *)&uStack_1c))->int_release();
      uStack_1c = (undefined4)(0);
      break;
    case 0xc:
      ((Stub_SCStr *)((SCStr *)&uStack_20))->int_allocRep("tvaudio");
      local_8 = (undefined4)(10);
      ((Stub_SCImageResource *)((SCImageResource *)&local_2c))->SCImageResource((SCStr *)&uStack_20,5);
      local_14 = (uint)(8);
      local_8 = (undefined4)(0xb);
      ((Stub_SCStr *)((SCStr *)&uStack_20))->int_release();
      uStack_20 = (undefined4)(0);
    }
    pSVar3 = (SCStr *)((SCStr *)&local_2c);
    local_8 = (undefined4)(0xc);
    uVar1 = (uint)(10);
  }
  else {
    local_34 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    ((Stub_SCStr *)((SCStr *)&local_34))->int_release();
    local_34 = (undefined4)(local_24);
    ((Stub_SCStr *)((SCStr *)&local_34))->int_addref();
    local_30 = (undefined4)(1);
    pSVar3 = (SCStr *)((SCStr *)&local_34);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar1 = (uint)(1);
  }
  local_14 = (uint)(uVar1);
  ((Stub_SCStr *)(param_2))->SCStr(pSVar3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pSVar3 + 4);
  if ((uVar1 & 2) != 0) {
    uVar1 = (uint)(uVar1 & 0xfffffffd | 4);
    local_8 = (undefined4)(0xd);
    local_14 = (uint)(uVar1);
    ((Stub_SCStr *)((SCStr *)&local_2c))->int_release();
    local_2c = (undefined4)(0);
  }
  if ((uVar1 & 1) != 0) {
    local_8 = (undefined4)(0xe);
    ((Stub_SCStr *)((SCStr *)&local_34))->int_release();
    local_34 = (undefined4)(0);
  }
  local_8 = (undefined4)(0xf);
  ((Stub_SCStr *)((SCStr *)&local_24))->int_release();
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_2);
}


// Reference entry 11044470; body size 94 bytes.
#line 1 "ENTRY_11044470"

undefined4 * __thiscall FUN_11044470(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1179d8fe);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0);
  (**(code **)(*param_1 + 0x4c))(0x13,param_2,uVar1);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 11044e00; body size 77 bytes.
#line 1 "ENTRY_11044e00"

bool __fastcall FUN_11044e00(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xf0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xf4))();
    iVar1 = (int)(thunk_FUN_1113eb00("r:DirectControlIsSuspended"));
    return (bool)(iVar1 != 0);
  }
  return (bool)(false);
}


// Reference entry 11044e60; body size 269 bytes.
#line 1 "ENTRY_11044e60"

SCStr * __thiscall FUN_11044e60(int *param_1,SCStr *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179da9d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_1c = (int)((**(code **)(*param_1 + 0xf0))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (local_1c == 0) {
    ((Stub_SCStr *)(param_2))->int_allocRep("");
    ExceptionList = (void *)(local_10);
    return (SCStr *)(param_2);
  }
  local_18 = (undefined4)((**(code **)(*param_1 + 0xf4))());
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(local_2c,"r:EnqueuedTransportURIMetaData"));
  local_20 = (undefined4)(puVar2[1]);
  local_24 = (undefined4)(*puVar2);
  thunk_FUN_1113eda0(&local_14,&DAT_1187b440);
  local_8 = (undefined4)(0);
  pcVar4 = (char *)("");
  if (local_14 != (char *)0x0) {
    pcVar4 = (char *)(local_14);
  }
  ((Stub_SCStr *)(param_2))->int_allocRep(pcVar4);
  local_8 = (undefined4)(1);
  if ((local_14 != (char *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0(local_14 + -0x10));
    if (iVar3 == 0) {
      uVar1 = (undefined4)(*(undefined4 *)(local_14 + -4));
      local_14[-0xffffffff00000008] = '\0';
      local_14[-0xffffffff00000007] = '\0';
      local_14[-0xffffffff00000006] = '\0';
      local_14[-0xffffffff00000005] = '\0';
      local_14[-0xffffffff0000000c] = '\0';
      local_14[-0xffffffff0000000b] = '\0';
      local_14[-0xffffffff0000000a] = '\0';
      local_14[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(local_14,uVar1);
      free(local_14 + -0x10);
    }
  }
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_2);
}


// Reference entry 11045080; body size 405 bytes.
#line 1 "ENTRY_11045080"

void __thiscall FUN_11045080(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *local_160;
  uint local_15c;
  void *local_158;
  void *local_154;
  undefined1 *puStack_150;
  undefined4 local_14c;
  undefined1 local_148 [320];
  uint local_8;
  
  puStack_150 = (undefined1 *)(LAB_1179db0d);
  local_154 = (void *)(ExceptionList);
  local_8 = (uint)(DAT_12126b84 ^ (uint)local_148);
  ExceptionList = (void *)(&local_154);
  piVar6 = (int *)((int *)0x0);
  local_160 = (undefined4 *)(param_2);
  piVar5 = (int *)((int *)0x0);
  local_15c = (uint)(0);
  local_14c = (undefined4)(0);
  local_158 = (void *)((void *)(**(code **)(*param_1 + 0xf0))(local_8));
  if (local_158 == (void *)0x0) {
    local_158 = (void *)((void *)0x0);
  }
  else {
    uVar2 = (undefined4)((**(code **)(*param_1 + 0xf4))());
    local_158 = (void *)((void *)thunk_FUN_110bc160(uVar2));
  }
  uVar8 = (undefined4)(0);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0xf4))(0));
  pvVar7 = (void *)(local_158);
  uVar3 = (undefined4)((**(code **)(*param_1 + 0xf0))(local_158,uVar2));
  thunk_FUN_1050f710(uVar3,pvVar7,uVar2,uVar8);
  *(unsigned char *)((char *)&local_14c + 0) = 1;
  cVar1 = (char)(thunk_FUN_10516cd0());
  if (cVar1 != '\0') {
    local_158 = (void *)(operator_new(0x10));
    *(unsigned char *)((char *)&local_14c + 0) = 2;
    if (local_158 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      uVar2 = (undefined4)(thunk_FUN_105142d0(&local_160));
      local_14c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_14c + 1)) << 8 | (uint)(3)));
      local_15c = (uint)(1);
      uVar3 = (undefined4)(thunk_FUN_105142b0());
      piVar4 = (int *)((int *)thunk_FUN_105638c0(uVar2,uVar3));
    }
    local_14c = (undefined4)(4);
    if (piVar4 != (int *)0x0) {
      piVar5 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      (**(code **)(*piVar5 + 4))();
      piVar6 = (int *)(piVar4);
    }
    *(unsigned char *)((char *)&local_14c + 0) = 1;
    *(unsigned short *)((char *)&local_14c + 1) = 0;
    if ((local_15c & 1) != 0) {
      local_14c = (undefined4)(5);
      ((Stub_SCStr *)((SCStr *)&local_160))->int_release();
      *(unsigned char *)((char *)&local_14c + 0) = 1;
    }
  }
  *param_2 = (undefined4)(piVar6);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }
  thunk_FUN_105106c0();
  local_14c = (undefined4)(6);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = (void *)(local_154);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 110452d0; body size 353 bytes.
#line 1 "ENTRY_110452d0"

void __thiscall FUN_110452d0(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piStack_170;
  uint uStack_16c;
  int *local_15c;
  int local_158;
  void *local_154;
  undefined1 *puStack_150;
  undefined4 local_14c;
  undefined1 local_148 [320];
  uint local_8;
  
  local_14c = (undefined4)(0xffffffff);
  puStack_150 = (undefined1 *)(LAB_1179db6d);
  local_154 = (void *)(ExceptionList);
  uStack_16c = (uint)(DAT_12126b84 ^ (uint)local_148);
  ExceptionList = (void *)(&local_154);
  local_15c = (int *)(param_2);
  local_8 = (uint)(uStack_16c);
  if (param_1[6] == 0) {
    piStack_170 = (int *)((int *)0x11045326);
    local_158 = (int)((**(code **)(*param_1 + 0xf0))());
    if (local_158 == 0) {
      local_158 = (int)(0);
    }
    else {
      piStack_170 = (int *)((int *)0x11045337);
      piStack_170 = (int *)((int *)(**(code **)(*param_1 + 0xf4))());
      local_158 = (int)(thunk_FUN_110bc160());
    }
    piStack_170 = (int *)((int *)0x1);
    uVar3 = (undefined4)((**(code **)(*param_1 + 0xf4))());
    iVar5 = (int)(local_158);
    uVar4 = (undefined4)((**(code **)(*param_1 + 0xf0))(local_158,uVar3));
    thunk_FUN_1050f710(uVar4,iVar5,uVar3);
    local_14c = (undefined4)(0);
    piStack_170 = (int *)((int *)0x1104537e);
    cVar2 = (char)(thunk_FUN_10516cd0());
    if (cVar2 != '\0') {
      piStack_170 = (int *)(&local_158);
      thunk_FUN_105142d0();
      *(unsigned char *)((char *)&local_14c + 0) = 1;
      ((Stub_SCStr *)((SCStr *)&piStack_170))->SCStr((SCStr *)&local_158);
      piStack_170 = (int *)((int *)thunk_FUN_11049940(&local_15c));
      *(unsigned char *)((char *)&local_14c + 0) = 2;
      thunk_FUN_101fd3a0();
      *(unsigned char *)((char *)&local_14c + 0) = 3;
      if (local_15c != (int *)0x0) {
        piStack_170 = (int *)((int *)0x110453c6);
        (**(code **)(*local_15c + 8))();
      }
      *(unsigned char *)((char *)&local_14c + 0) = 1;
      if ((int *)param_1[6] != (int *)0x0) {
        piStack_170 = (int *)(param_1 + 3);
        (**(code **)(*(int *)param_1[6] + 0x14))();
      }
      local_14c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_14c + 1)) << 8 | (uint)(4)));
      piStack_170 = (int *)((int *)0x110453e6);
      ((Stub_SCStr *)((SCStr *)&local_158))->int_release();
      local_158 = (int)(0);
    }
    local_14c = (undefined4)(0xffffffff);
    piStack_170 = (int *)((int *)0x110453fc);
    thunk_FUN_105106c0();
  }
  piVar1 = (int *)((int *)param_1[6]);
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    piStack_170 = (int *)((int *)0x1104540a);
    (**(code **)(*piVar1 + 4))();
  }
  ExceptionList = (void *)(local_154);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11045490; body size 295 bytes.
#line 1 "ENTRY_11045490"

SCStr * __thiscall FUN_11045490(int *param_1,SCStr *param_2,undefined4 param_3)

{
  uint uVar1;
  SCStr *pSVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179dbf7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (uint)(0);
  (**(code **)(*param_1 + 0x80))(&local_18,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  uVar1 = (uint)(((Stub_SCStr *)((SCStr *)&local_18))->length());
  if (uVar1 == 0) {
    ((Stub_SCStr *)((SCStr *)&local_28))->SCStr((SCStr *)&DAT_121a07b0);
    local_24 = (undefined4)(DAT_121a07b4);
    pSVar2 = (SCStr *)((SCStr *)&local_28);
    local_8 = (undefined4)(3);
    uVar1 = (uint)(2);
  }
  else {
    local_20 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    ((Stub_SCStr *)((SCStr *)&local_20))->int_release();
    local_20 = (undefined4)(local_18);
    ((Stub_SCStr *)((SCStr *)&local_20))->int_addref();
    local_1c = (undefined4)(1);
    pSVar2 = (SCStr *)((SCStr *)&local_20);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    uVar1 = (uint)(1);
  }
  local_14 = (uint)(uVar1);
  ((Stub_SCStr *)(param_2))->SCStr(pSVar2);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pSVar2 + 4);
  if ((uVar1 & 2) != 0) {
    uVar1 = (uint)(uVar1 & 0xfffffffd | 4);
    local_8 = (undefined4)(4);
    local_14 = (uint)(uVar1);
    ((Stub_SCStr *)((SCStr *)&local_28))->int_release();
    local_28 = (undefined4)(0);
  }
  if ((uVar1 & 1) != 0) {
    local_8 = (undefined4)(5);
    ((Stub_SCStr *)((SCStr *)&local_20))->int_release();
    local_20 = (undefined4)(0);
  }
  local_8 = (undefined4)(6);
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_2);
}


// Reference entry 110459a0; body size 75 bytes.
#line 1 "ENTRY_110459a0"

undefined4 __fastcall FUN_110459a0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)((**(code **)(*param_1 + 0xf0))());
  if (iVar2 != 0) {
    uVar3 = (undefined4)((**(code **)(*param_1 + 0xf4))());
    cVar1 = (char)(thunk_FUN_110bb5f0(uVar3));
    if (cVar1 != '\0') {
      uVar3 = (undefined4)((**(code **)(*param_1 + 0x14))());
      switch(uVar3) {
      case 3:
        return (undefined4)(2);
      default:
        return (undefined4)(0);
      case 6:
        return (undefined4)(0xb);
      case 9:
      case 10:
        return (undefined4)(3);
      }
    }
  }
  return (undefined4)(1);
}


// Reference entry 11047370; body size 996 bytes.
#line 1 "ENTRY_11047370"

undefined4 * __thiscall FUN_11047370(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  SCStr *this_;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int *local_34;
  int *local_30;
  int *local_24;
  SCStr local_1c [4];
  void *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_1179e09f);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar5 = (int *)((int *)0x0);
  piVar6 = (int *)((int *)0x0);
  local_8 = (int)(0);
  iVar1 = (int)((**(code **)(*param_1 + 0x14))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (((char)param_1[0x11] != '\0') && ((iVar1 == 3 || (iVar1 == 8)))) {
    if ((*(char *)((int)param_1 + 0x45) == '\0') || (iVar1 != 8)) {
      local_14 = (char *)((char *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
      (**(code **)(*param_1 + 0x4c))(0x36,&local_14);
      if ((local_14 != (char *)0x0) && (*local_14 != '\0')) {
        piVar4 = (int *)(operator_new(0x10));
        local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1c)));
        bVar7 = (bool)(piVar4 == (int *)0x0);
        if (bVar7) {
          piVar4 = (int *)((int *)0x0);
        }
        else {
          pcVar3 = (char *)((char *)thunk_FUN_1109aba0(0x2109,&DAT_11882ff0));
          ((Stub_SCStr *)(local_1c))->int_allocRep(pcVar3);
          *piVar4 = (int)((int)(uint)&Ext_SCIObjImpl_vftable);
          piVar4[1] = 0;
          g_lSCObjCount = (int)(g_lSCObjCount + 1);
          local_8 = (int)(0x1e);
          *piVar4 = (int)((int)(uint)&Ext_SCOpenUrlActionDescriptor_vftable);
          ((Stub_SCStr *)((SCStr *)(piVar4 + 2)))->SCStr(local_1c);
          local_8 = (int)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1f)));
          ((Stub_SCStr *)((SCStr *)(piVar4 + 3)))->SCStr((SCStr *)&local_14);
        }
        local_8 = (int)(0x20);
        if (piVar4 != (int *)0x0) {
          piVar6 = (int *)(piVar4);
          if (*(code **)(*piVar4 + 0xc) != thunk_FUN_101da390) {
            piVar6 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
          }
          (**(code **)(*piVar6 + 4))();
          piVar5 = (int *)(piVar4);
        }
        *(unsigned short *)((char *)&local_8 + 1) = 0;
        if (!bVar7) {
          *(unsigned char *)((char *)&local_8 + 0) = 0x21;
          *(unsigned short *)((char *)&local_8 + 1) = 0;
          ((Stub_SCStr *)(local_1c))->int_release();
        }
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x22;
      this_ = (SCStr *)((SCStr *)&local_14);
    }
    else {
      ((Stub_SCStr *)((char *)local_1c))->stringWithFormat("sonos-2://x-callback-url/navigate/landingpage?id=%s&referer=%s",
                 "sonosRadioHD","nowPlaying");
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      uVar2 = (undefined4)(createPropertyBag());
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      thunk_FUN_101aa9f0(uVar2);
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      pcVar3 = (char *)((char *)thunk_FUN_1109aba0(0x2108,&DAT_11882ff0));
      ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep(pcVar3);
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("customLabel");
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      (**(code **)(*local_34 + 0x1c))(&local_14,&local_18);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (char *)((char *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 9;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("url");
      *(unsigned char *)((char *)&local_8 + 0) = 10;
      (**(code **)(*local_34 + 0x1c))(&local_18,local_1c);
      *(unsigned char *)((char *)&local_8 + 0) = 0xb;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("sonosRadioHD");
      *(unsigned char *)((char *)&local_8 + 0) = 0xc;
      ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("id");
      *(unsigned char *)((char *)&local_8 + 0) = 0xd;
      (**(code **)(*local_34 + 0x1c))(&local_14,&local_18);
      *(unsigned char *)((char *)&local_8 + 0) = 0xe;
      ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (char *)((char *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0xf;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("nowPlaying");
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("referer");
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      (**(code **)(*local_34 + 0x1c))(&local_14,&local_18);
      *(unsigned char *)((char *)&local_8 + 0) = 0x12;
      ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (char *)((char *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x13;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("useDelay");
      *(unsigned char *)((char *)&local_8 + 0) = 0x14;
      (**(code **)(*local_34 + 0x40))(&local_18,1);
      *(unsigned char *)((char *)&local_8 + 0) = 0x15;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("dismissViews");
      *(unsigned char *)((char *)&local_8 + 0) = 0x16;
      (**(code **)(*local_34 + 0x40))(&local_18,0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x17;
      ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      local_18 = (void *)(operator_new(0x14));
      *(unsigned char *)((char *)&local_8 + 0) = 0x18;
      if (local_18 == (void *)0x0) {
        piVar4 = (int *)((int *)0x0);
      }
      else {
        piVar4 = (int *)((int *)thunk_FUN_104cbc30(8,local_34));
      }
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if (piVar4 != (int *)0x0) {
        piVar6 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
        (**(code **)(*piVar6 + 4))();
        piVar5 = (int *)(piVar4);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x19;
      if (local_30 != (int *)0x0) {
        (**(code **)(*local_30 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
      this_ = (SCStr *)(local_1c);
    }
    ((Stub_SCStr *)(this_))->int_release();
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  }
  *param_2 = (undefined4)(piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (int)(0x23);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 11047d20; body size 116 bytes.
#line 1 "ENTRY_11047d20"

undefined4 __thiscall FUN_11047d20(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179e1bd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (int *)(param_1);
  uVar1 = (undefined4)((**(code **)(*param_1 + 0x20))(&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x24))());
  thunk_FUN_102178d0(param_2,uVar1,uVar2);
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_2);
}


// Reference entry 11047de0; body size 94 bytes.
#line 1 "ENTRY_11047de0"

undefined4 * __stdcall FUN_11047de0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1179e20e);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)(0);
  local_8 = (undefined4)(0);
  thunk_FUN_1104da60(param_1,0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 110481b0; body size 453 bytes.
#line 1 "ENTRY_110481b0"

SCStr * __thiscall FUN_110481b0(int *param_1,SCStr *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  size_t _Size;
  undefined4 *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_1179e2b5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (char *)((char *)0x0);
  local_8 = (int)(0);
  (**(code **)(*param_1 + 0x4c))(0x33,&local_14,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  iVar3 = (int)(thunk_FUN_11044510(param_1[5]));
  if (iVar3 == 3) {
    pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x22f3,&DAT_11882ff0));
    ((Stub_SCStr *)(param_2))->int_allocRep(pcVar4);
    local_8 = (int)(1);
  }
  else {
    iVar3 = (int)((**(code **)(*param_1 + 0x14))());
    pcVar4 = (char *)(local_14);
    if (iVar3 == 0xd) {
      pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x22f4,&DAT_11882ff0));
      ((Stub_SCStr *)(param_2))->int_allocRep(pcVar4);
      local_8 = (int)(2);
    }
    else {
      if ((local_14 == (char *)0x0) || (*local_14 == '\0')) {
        local_18 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        pcVar6 = (char *)(local_14);
        do {
          cVar2 = (char)(*pcVar6);
          pcVar6 = (char *)(pcVar6 + 1);
        } while (cVar2 != '\0');
        _Size = (size_t)((int)pcVar6 - (int)(local_14 + 1));
        puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
        puVar1 = (undefined4 *)(puVar5 + 4);
        *puVar5 = (undefined4)(1);
        puVar5[3] = _Size;
        puVar5[2] = 0;
        puVar5[1] = 0;
        memcpy(puVar1,pcVar4,_Size);
        *(undefined1 *)((int)puVar1 + _Size) = 0;
        local_18 = (undefined4 *)(puVar1);
      }
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      cVar2 = (char)(thunk_FUN_110a5ba0(&local_18,"object.item.audioItem.podcast"));
      puVar1 = (undefined4 *)(local_18);
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      if ((local_18 != (undefined4 *)0x0) && (puVar5 = local_18 + -4, (int)local_18[-4] < 0xffff)) {
        iVar3 = (int)(thunk_FUN_1123fcd0(puVar5));
        if (iVar3 == 0) {
          puVar1[-2] = 0;
          puVar1[-3] = 0;
          thunk_FUN_113cfb70(puVar1,puVar1[-1]);
          free(puVar5);
        }
      }
      local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
      if (cVar2 == '\0') {
        pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x22f2,&DAT_11882ff0));
        ((Stub_SCStr *)(param_2))->int_allocRep(pcVar4);
        local_8 = (int)(6);
      }
      else {
        pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x22f5,&DAT_11882ff0));
        ((Stub_SCStr *)(param_2))->int_allocRep(pcVar4);
        local_8 = (int)(5);
      }
    }
  }
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_2);
}


// Reference entry 110483f0; body size 296 bytes.
#line 1 "ENTRY_110483f0"

int * FUN_110483f0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *local_1c;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = (undefined1 *)(LAB_1179e316);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (uint)(0);
  piVar3 = (int *)((int *)createPropertyBag());
  local_8 = (uint)(1);
  param_1[1] = 0;
  *param_1 = (int)(0);
  piVar1 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  piVar3 = (int *)((int *)param_1[1]);
  if (piVar3 != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = 0;
    (**(code **)(*piVar3 + 8))(uVar2);
  }
  *param_1 = (int)((int)piVar1);
  if (piVar1 == (int *)0x0) {
    iVar4 = (int)(0);
  }
  else {
    iVar4 = (int)((**(code **)(*piVar1 + 0xc))());
  }
  param_1[1] = iVar4;
  local_8 = (uint)(2);
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  local_8 = (uint)(local_8 & 0xffffff00);
  ((Stub_SCStr *)(local_14))->int_allocRep("ihr");
  local_8 = (uint)(3);
  (**(code **)(*(int *)*param_1 + 0x28))(local_14,0x607);
  local_8 = (uint)(4);
  ((Stub_SCStr *)(local_14))->int_release();
  local_8 = (uint)(local_8 & 0xffffff00);
  ((Stub_SCStr *)(local_14))->int_allocRep("tunein");
  local_8 = (uint)(5);
  (**(code **)(*(int *)*param_1 + 0x28))(local_14,0xfe07);
  local_8 = (uint)(6);
  ((Stub_SCStr *)(local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 11048710; body size 625 bytes.
#line 1 "ENTRY_11048710"

int * __thiscall FUN_11048710(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179e3f6);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_24 = (undefined4)(0);
  local_2c = (int)((**(code **)(*param_1 + 0xf0))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (local_2c == 0) {
    *param_2 = (int)(0);
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  local_28 = (undefined4)((**(code **)(*param_1 + 0xf4))());
  puVar4 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x28))(&local_14));
  local_8 = (undefined4)(0);
  local_24 = (undefined4)(2);
  if ((((char *)*puVar4 == (char *)0x0) || (*(char *)*puVar4 == '\0')) ||
     (cVar3 = (**(code **)(*param_1 + 0x2c))(), cVar3 == '\0')) {
    bVar2 = (bool)(false);
  }
  else {
    bVar2 = (bool)(true);
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  cVar3 = (char)((**(code **)(*param_1 + 0xcc))());
  if ((cVar3 != '\0') && (!bVar2)) {
    thunk_FUN_1113eda0(&local_18,"TransportState");
    local_8 = (undefined4)(2);
    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if (local_18 != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)(local_18);
    }
    uVar5 = (undefined4)(thunk_FUN_110b8100(puVar8));
    local_8 = (undefined4)(3);
    if (((local_18 != (undefined1 *)0x0) && (*(int *)(local_18 + -0x10) < 0xffff)) &&
       (iVar6 = thunk_FUN_1123fcd0(local_18 + -0x10), iVar6 == 0)) {
      *(undefined4 *)(local_18 + -8) = 0;
      *(undefined4 *)(local_18 + -0xc) = 0;
      thunk_FUN_113cfb70(local_18,*(undefined4 *)(local_18 + -4));
      free(local_18 + -0x10);
    }
    local_8 = (undefined4)(0xffffffff);
    switch(uVar5) {
    case 1:
    case 2:
    case 3:
      piVar1 = (int *)((int *)param_1[0xe]);
      *param_2 = (int)((int)piVar1);
      if (piVar1 == (int *)0x0) {
        ExceptionList = (void *)(local_10);
        return (int *)(param_2);
      }
      (**(code **)(*piVar1 + 4))();
      ExceptionList = (void *)(local_10);
      return (int *)(param_2);
    }
  }
  puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(&local_1c,"CurrentTrackMetaData"));
  local_30 = (undefined4)(puVar4[1]);
  local_34 = (undefined4)(*puVar4);
  thunk_FUN_110b7cd0(local_44);
  local_8 = (undefined4)(4);
  thunk_FUN_11048570(&local_1c);
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  if (local_1c == (int *)0x0) {
    *param_2 = (int)(0);
  }
  else {
    piVar7 = (int *)((int *)(**(code **)(*local_1c + 4))(&local_20,local_44));
    piVar1 = (int *)((int *)*piVar7);
    *piVar7 = (int)(0);
    piVar7 = (int *)((int *)param_1[0xf]);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
    if (piVar7 != (int *)0x0) {
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      (**(code **)(*piVar7 + 8))();
    }
    param_1[0xe] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar6 = (int)(0);
    }
    else {
      iVar6 = (int)((**(code **)(*piVar1 + 0xc))());
    }
    param_1[0xf] = iVar6;
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_1113eda0(&local_20,"CurrentTrackURI");
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    thunk_FUN_101ba530(&local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_101ba300();
    piVar1 = (int *)((int *)param_1[0xe]);
    *param_2 = (int)((int)piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  thunk_FUN_11042830();
  thunk_FUN_1128f340();
  ExceptionList = (void *)(local_10);
  return (int *)(param_2);
}


// Reference entry 1104a890; body size 458 bytes.
#line 1 "ENTRY_1104a890"

char * __stdcall FUN_1104a890(char *param_1,char *param_2)

{
  char *_Memory;
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar6 = (char *)(param_1);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179e8b5);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  cVar2 = (char)((char)param_2);
  local_14 = (char *)((char *)0x0);
  if ((char)param_2 != '\0') {
    thunk_FUN_1113eda0(&param_2,"r:DirectControlAccountID");
    local_8 = (undefined4)(0);
    if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
       (cVar3 = thunk_FUN_111a0e70(&DAT_1188feac), cVar3 != '\0')) {
      param_1 = (char *)((char *)0x0);
      pcVar7 = (char *)("");
      if (param_2 != (char *)0x0) {
        pcVar7 = (char *)(param_2);
      }
      cVar3 = (char)(thunk_FUN_1145c460(pcVar7 + 3,&param_1));
      if (cVar3 != '\0') {
        local_14 = (char *)(param_1);
      }
    }
    pcVar7 = (char *)(param_2);
    local_8 = (undefined4)(1);
    if (((param_2 != (char *)0x0) && (_Memory = param_2 + -0x10, *(int *)(param_2 + -0x10) < 0xffff)
        ) && (iVar5 = thunk_FUN_1123fcd0(_Memory), iVar5 == 0)) {
      uVar1 = (undefined4)(*(undefined4 *)(pcVar7 + -4));
      pcVar7[-0xffffffff00000008] = '\0';
      pcVar7[-0xffffffff00000007] = '\0';
      pcVar7[-0xffffffff00000006] = '\0';
      pcVar7[-0xffffffff00000005] = '\0';
      pcVar7[-0xffffffff0000000c] = '\0';
      pcVar7[-0xffffffff0000000b] = '\0';
      pcVar7[-0xffffffff0000000a] = '\0';
      pcVar7[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(pcVar7,uVar1);
      free(_Memory);
    }
    if (local_14 != (char *)0x0) {
      ExceptionList = (void *)(local_10);
      return (char *)(local_14);
    }
  }
  local_8 = (undefined4)(0xffffffff);
  cVar3 = (char)(thunk_FUN_110bb5f0(*(undefined4 *)(pcVar6 + 4)));
  if (cVar3 != '\0') {
    thunk_FUN_1113eda0(&local_18,"CurrentTrackURI");
    param_2 = (char *)((char *)(((uint)(*(unsigned short *)((char *)&param_2 + 1)) << 8 | (uint)(cVar2)) ^ 1));
    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if (local_18 != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)(local_18);
    }
    local_8 = (undefined4)(2);
    pcVar6 = (char *)((char *)thunk_FUN_110b8c20(puVar8,&local_14,param_2,uVar4));
    ((Stub_SCStr *)((SCStr *)&param_1))->int_allocRep(pcVar6);
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      local_14 = (char *)((char *)0x0);
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    ((Stub_SCStr *)((SCStr *)&param_1))->int_release();
    param_1 = (char *)((char *)0x0);
    local_8 = (undefined4)(4);
    if (((local_18 != (undefined1 *)0x0) && (*(int *)(local_18 + -0x10) < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0(local_18 + -0x10), iVar5 == 0)) {
      *(undefined4 *)(local_18 + -8) = 0;
      *(undefined4 *)(local_18 + -0xc) = 0;
      thunk_FUN_113cfb70(local_18,*(undefined4 *)(local_18 + -4));
      free(local_18 + -0x10);
    }
  }
  ExceptionList = (void *)(local_10);
  return (char *)(local_14);
}


// Reference entry 1104aad0; body size 286 bytes.
#line 1 "ENTRY_1104aad0"

undefined4 FUN_1104aad0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179e8e0);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1113eda0(&local_14,"r:DirectControlClientID");
  if ((local_14 == (char *)0x0) || (*local_14 == '\0')) {
    bVar2 = (bool)(false);
  }
  else {
    bVar2 = (bool)(true);
  }
  local_8 = (undefined4)(0);
  if ((local_14 != (char *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar4 = (int)(thunk_FUN_1123fcd0(local_14 + -0x10,uVar3));
    if (iVar4 == 0) {
      uVar1 = (undefined4)(*(undefined4 *)(local_14 + -4));
      local_14[-0xffffffff00000008] = '\0';
      local_14[-0xffffffff00000007] = '\0';
      local_14[-0xffffffff00000006] = '\0';
      local_14[-0xffffffff00000005] = '\0';
      local_14[-0xffffffff0000000c] = '\0';
      local_14[-0xffffffff0000000b] = '\0';
      local_14[-0xffffffff0000000a] = '\0';
      local_14[-0xffffffff00000009] = '\0';
      thunk_FUN_113cfb70(local_14,uVar1);
      free(local_14 + -0x10);
    }
  }
  local_8 = (undefined4)(0xffffffff);
  iVar5 = (int)(thunk_FUN_1113eb00("r:chapterNum"));
  iVar4 = (int)(thunk_FUN_1113eb00("r:chapterCount"));
  if (((iVar5 < 1) && (iVar4 < 1)) && (!bVar2)) {
    iVar5 = (int)(thunk_FUN_1113eb00("CurrentTrack"));
    iVar4 = (int)(thunk_FUN_1113eb00("NumberOfTracks"));
  }
  *param_3 = (int)(iVar5);
  *param_4 = (int)(iVar4);
  if ((0 < *param_3) && (0 < iVar4)) {
    ExceptionList = (void *)(local_10);
    return (undefined4)(1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 1104d4c0; body size 304 bytes.
#line 1 "ENTRY_1104d4c0"

void __fastcall FUN_1104d4c0(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *local_1c;
  SCStr local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179ee3d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)((**(code **)(*param_1 + 0x14))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if ((iVar3 == 3) || (iVar3 == 8)) {
    piVar4 = (int *)((int *)thunk_FUN_102518f0(&local_1c));
    piVar1 = (int *)((int *)*piVar4);
    local_8 = (undefined4)(0);
    *piVar4 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("now_playing_ad_cta_button");
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    uVar2 = (undefined1)((**(code **)(*piVar1 + 0x18))(&local_14));
    *(undefined1 *)(param_1 + 0x11) = uVar2;
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 2;
    ((Stub_SCStr *)(local_18))->int_allocRep("NP_CTA_BubbleIsUpsell");
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("now_playing_ad_cta_button");
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    iVar3 = (int)((**(code **)(*piVar1 + 0x20))(&local_14,local_18));
    *(bool *)((int)param_1 + 0x45) = iVar3 != 0;
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
    ((Stub_SCStr *)(local_18))->int_release();
    local_8 = (undefined4)(10);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1104ea20; body size 90 bytes.
#line 1 "ENTRY_1104ea20"

bool FUN_1104ea20(void)

{
  bool bVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1179f17d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  bVar1 = (bool)(((Stub_SCStr *)((SCStr *)&stack0x00000004))->beginsWith("x-file-cifs://"));
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)&stack0x00000004))->int_release();
  ExceptionList = (void *)(local_10);
  return (bool)(bVar1);
}


// Reference entry 1104ed00; body size 76 bytes.
#line 1 "ENTRY_1104ed00"

undefined4 __fastcall FUN_1104ed00(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)((**(code **)(*param_1 + 0xf0))());
  if (iVar2 != 0) {
    uVar3 = (undefined4)((**(code **)(*param_1 + 0xf4))());
    cVar1 = (char)(thunk_FUN_110bb5f0(uVar3));
    if (cVar1 != '\0') {
      uVar3 = (undefined4)((**(code **)(*param_1 + 0x14))());
      switch(uVar3) {
      case 0:
      case 1:
      case 4:
      case 6:
      case 9:
      case 10:
      case 0xb:
        break;
      default:
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1104ee20; body size 863 bytes.
#line 1 "ENTRY_1104ee20"

void FUN_1104ee20(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_534;
  int local_528;
  uint local_524;
  int *local_520;
  void *local_51c;
  undefined1 *puStack_518;
  undefined4 local_514;
  undefined1 local_510 [1028];
  char local_10c [260];
  uint local_8;
  
  puStack_518 = (undefined1 *)(LAB_1179f2e6);
  local_51c = (void *)(ExceptionList);
  local_8 = (uint)(DAT_12126b84 ^ (uint)local_510);
  ExceptionList = (void *)(&local_51c);
  local_524 = (uint)(0);
  piVar6 = (int *)((int *)0x0);
  local_514 = (undefined4)(0);
  iVar2 = (int)(thunk_FUN_1104e2c0(local_8));
  local_528 = (int)((**(code **)(*local_520 + 0xf0))());
  if ((iVar2 != 0) && (local_528 != 0)) {
    (**(code **)(*local_520 + 0xf4))();
    thunk_FUN_1113eda0(&local_520,"CurrentTrackURI");
    piVar6 = (int *)(local_520);
    local_524 = (uint)(1);
    *(unsigned char *)((char *)&local_514 + 0) = 1;
    if ((local_520 != (int *)0x0) && (local_520[-4] < 0xffff)) {
      thunk_FUN_1123fce0(local_520 + -4);
    }
    piVar3 = (int *)(local_520);
    *(unsigned char *)((char *)&local_514 + 0) = 2;
    if (((local_520 != (int *)0x0) && (piVar5 = local_520 + -4, local_520[-4] < 0xffff)) &&
       (iVar2 = thunk_FUN_1123fcd0(piVar5), iVar2 == 0)) {
      piVar3[-2] = 0;
      piVar3[-3] = 0;
      thunk_FUN_113cfb70(piVar3,piVar3[-1]);
      free(piVar5);
    }
    *(unsigned char *)((char *)&local_514 + 0) = 0;
    piVar3 = (int *)((int *)&DAT_1186d2ee);
    if (piVar6 != (int *)0x0) {
      piVar3 = (int *)(piVar6);
    }
    cVar1 = (char)(thunk_FUN_110b9980(piVar3));
    if (cVar1 == '\0') {
      thunk_FUN_1113eda0(&local_520,"AVTransportURI");
      local_524 = (uint)(3);
      local_514 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_514 + 1)) << 8 | (uint)(3)));
      if (((piVar6 != (int *)0x0) && (piVar3 = piVar6 + -4, *piVar3 < 0xffff)) &&
         (iVar2 = thunk_FUN_1123fcd0(piVar3), iVar2 == 0)) {
        piVar6[-2] = 0;
        piVar6[-3] = 0;
        thunk_FUN_113cfb70(piVar6,piVar6[-1]);
        free(piVar3);
      }
      if ((local_520 != (int *)0x0) && (local_520[-4] < 0xffff)) {
        thunk_FUN_1123fce0(local_520 + -4);
      }
      *(unsigned char *)((char *)&local_514 + 0) = 0;
      thunk_FUN_101ba300();
      piVar6 = (int *)(local_520);
    }
    piVar3 = (int *)((int *)&DAT_1186d2ee);
    if (piVar6 != (int *)0x0) {
      piVar3 = (int *)(piVar6);
    }
    thunk_FUN_111d2980(piVar3);
    thunk_FUN_111e04f0(local_10c,0x101);
    pcVar4 = (char *)(strtok(local_10c,":"));
    *(unsigned char *)((char *)&local_514 + 0) = 4;
    piVar5 = (int *)((int *)createPropertyBag());
    piVar3 = (int *)((int *)*piVar5);
    *(unsigned char *)((char *)&local_514 + 0) = 5;
    *piVar5 = (int)(0);
    if (piVar3 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    }
    local_524 = (uint)(local_524 | 4);
    *(unsigned char *)((char *)&local_514 + 0) = 6;
    if (local_534 != (int *)0x0) {
      (**(code **)(*local_534 + 8))();
    }
    *(unsigned char *)((char *)&local_514 + 0) = 4;
    ((Stub_SCStr *)((SCStr *)&local_520))->int_allocRep("ihr");
    *(unsigned char *)((char *)&local_514 + 0) = 7;
    (**(code **)(*piVar3 + 0x28))(&local_520,0x607);
    *(unsigned char *)((char *)&local_514 + 0) = 8;
    ((Stub_SCStr *)((SCStr *)&local_520))->int_release();
    local_520 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_514 + 0) = 4;
    ((Stub_SCStr *)((SCStr *)&local_528))->int_allocRep("tunein");
    *(unsigned char *)((char *)&local_514 + 0) = 9;
    (**(code **)(*piVar3 + 0x28))(&local_528,0xfe07);
    *(unsigned char *)((char *)&local_514 + 0) = 10;
    ((Stub_SCStr *)((SCStr *)&local_528))->int_release();
    *(unsigned char *)((char *)&local_514 + 0) = 4;
    if (pcVar4 != (char *)0x0) {
      ((Stub_SCStr *)((SCStr *)&local_520))->int_allocRep(pcVar4);
      *(unsigned char *)((char *)&local_514 + 0) = 0xb;
      if (((local_520 != (int *)0x0) && ((char)*local_520 != '\0')) &&
         (cVar1 = (**(code **)(*piVar3 + 0x74))(&local_520), cVar1 != '\0')) {
        (**(code **)(*piVar3 + 0x24))(&local_520);
      }
      *(unsigned char *)((char *)&local_514 + 0) = 0xc;
      ((Stub_SCStr *)((SCStr *)&local_520))->int_release();
    }
    local_514 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_514 + 1)) << 8 | (uint)(0xd)));
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
  }
  local_514 = (undefined4)(0xe);
  if (((piVar6 != (int *)0x0) && (piVar3 = piVar6 + -4, *piVar3 < 0xffff)) &&
     (iVar2 = thunk_FUN_1123fcd0(piVar3), iVar2 == 0)) {
    piVar6[-2] = 0;
    piVar6[-3] = 0;
    thunk_FUN_113cfb70(piVar6,piVar6[-1]);
    free(piVar3);
  }
  ExceptionList = (void *)(local_51c);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1104f490; body size 151 bytes.
#line 1 "ENTRY_1104f490"

void __thiscall FUN_1104f490(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  SCStr aSStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179f39d);
  local_10 = (void *)(ExceptionList);
  uStack_24 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uStack_28 = (undefined4)(0x1104f4bf);
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0xe8))());
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    uStack_28 = (undefined4)(0x1104f4d4);
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    uStack_28 = (undefined4)(0x1104f4e0);
    (**(code **)(*piVar2 + 4))();
  }
  uStack_28 = (undefined4)(0);
  uStack_2c = (undefined4)(param_2);
  local_8 = (undefined4)(0);
  uStack_30 = (undefined4)(0);
  ((Stub_SCStr *)(aSStack_34))->int_allocRep("SCINowPlaying:onTVEqualizationChanged");
  thunk_FUN_10f421e0();
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    uStack_28 = (undefined4)(0x1104f514);
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1104f960; body size 148 bytes.
#line 1 "ENTRY_1104f960"

void __fastcall FUN_1104f960(int *param_1)

{
  int *piVar1;
  int *piVar2;
  SCStr aSStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179f45d);
  local_10 = (void *)(ExceptionList);
  uStack_28 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uStack_2c = (undefined4)(0x1104f98f);
  piVar1 = (int *)((int *)(**(code **)(*param_1 + 0xe8))());
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    uStack_2c = (undefined4)(0x1104f9a4);
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    uStack_2c = (undefined4)(0x1104f9b0);
    (**(code **)(*piVar2 + 4))();
  }
  uStack_2c = (undefined4)(0);
  uStack_30 = (undefined4)(0);
  uStack_34 = (undefined4)(0);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)(aSStack_38))->int_allocRep("SCINowPlaying:onTVEqualizationChanged");
  thunk_FUN_10f421e0();
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    uStack_2c = (undefined4)(0x1104f9e3);
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1104fa20; body size 156 bytes.
#line 1 "ENTRY_1104fa20"

void __fastcall FUN_1104fa20(int param_1)

{
  int *piVar1;
  int *piVar2;
  SCStr aSStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179f49d);
  local_10 = (void *)(ExceptionList);
  uStack_28 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uStack_2c = (undefined4)(0x1104fa53);
  piVar1 = (int *)((int *)(**(code **)(*(int *)(param_1 + -0x10) + 0xe8))());
  piVar2 = (int *)((int *)0x0);
  if (piVar1 != (int *)0x0) {
    uStack_2c = (undefined4)(0x1104fa68);
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    uStack_2c = (undefined4)(0x1104fa74);
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = (undefined4)(0);
  if (piVar1 != (int *)0x0) {
    uStack_2c = (undefined4)(0);
    uStack_30 = (undefined4)(1);
    uStack_34 = (undefined4)(0);
    ((Stub_SCStr *)(aSStack_38))->int_allocRep("SCINowPlaying:onMusicChanged");
    thunk_FUN_10f421e0();
  }
  local_8 = (undefined4)(1);
  if (piVar2 != (int *)0x0) {
    uStack_2c = (undefined4)(0x1104faab);
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1104fb70; body size 302 bytes.
#line 1 "ENTRY_1104fb70"

undefined4 __fastcall FUN_1104fb70(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  SCStr local_1c [4];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179f4f6);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_18 = (undefined4)(0);
  puVar3 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x28))(local_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  local_8 = (undefined4)(0);
  local_18 = (undefined4)(1);
  if ((((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) ||
     (cVar2 = (**(code **)(*param_1 + 0x2c))(), cVar2 == '\0')) {
    bVar1 = (bool)(false);
  }
  else {
    bVar1 = (bool)(true);
  }
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)(local_1c))->int_release();
  local_8 = (undefined4)(0xffffffff);
  cVar2 = (char)((**(code **)(*param_1 + 0xcc))());
  if ((cVar2 != '\0') && (!bVar1)) {
    thunk_FUN_1113eda0(&local_14,"TransportState");
    local_8 = (undefined4)(2);
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if (local_14 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(local_14);
    }
    uVar4 = (undefined4)(thunk_FUN_110b8100(puVar6));
    local_8 = (undefined4)(3);
    if (((local_14 != (undefined1 *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) &&
       (iVar5 = thunk_FUN_1123fcd0(local_14 + -0x10), iVar5 == 0)) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free(local_14 + -0x10);
    }
    switch(uVar4) {
    case 1:
    case 2:
    case 3:
      ExceptionList = (void *)(local_10);
      return (undefined4)(1);
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 1104fd20; body size 120 bytes.
#line 1 "ENTRY_1104fd20"

undefined1 __stdcall FUN_1104fd20(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1179f53d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_11 = (undefined1)(0);
  local_18 = (undefined4)(0);
  local_8 = (undefined4)(0);
  iVar1 = (int)(thunk_FUN_1104af00(param_1,&local_18,&local_11,0,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar2 = (undefined1)(0);
  if (iVar1 == 0) {
    uVar2 = (undefined1)(local_11);
  }
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined1)(uVar2);
}


// Reference entry 11050dc0; body size 169 bytes.
#line 1 "ENTRY_11050dc0"

void __thiscall FUN_11050dc0(int param_1,undefined4 *param_2)

{
  undefined4 *_Dst;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  undefined4 *local_108;
  char local_104 [256];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_108);
  local_108 = (undefined4 *)(param_2);
  thunk_FUN_110bd9f0(*(undefined4 *)(param_1 + 4),local_104,0x100);
  if (local_104[0] == '\0') {
    *param_2 = (undefined4)(0);
  }
  else {
    pcVar3 = (char *)(local_104);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(local_104 + 1));
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    _Dst = (undefined4 *)(puVar2 + 4);
    *puVar2 = (undefined4)(1);
    puVar2[3] = _Size;
    puVar2[2] = 0;
    puVar2[1] = 0;
    memcpy(_Dst,local_104,_Size);
    *(undefined1 *)((int)_Dst + _Size) = 0;
    *param_2 = (undefined4)(_Dst);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11051b60; body size 248 bytes.
#line 1 "ENTRY_11051b60"

int * __thiscall FUN_11051b60(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179f9ad);
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
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCIDeviceMusicEqualization");
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
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 11051ca0; body size 242 bytes.
#line 1 "ENTRY_11051ca0"

int * __thiscall FUN_11051ca0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179f9fd);
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
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCIDeviceMusicEqualization");
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
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  }
  local_8 = (undefined4)(5);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 11051dd0; body size 188 bytes.
#line 1 "ENTRY_11051dd0"

int * __thiscall FUN_11051dd0(int *param_1,undefined4 *param_2)

{
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
  puStack_c = (undefined1 *)(LAB_1179fa45);
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
    ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep("SCIDeviceMusicEqualization");
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
    ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 11051f40; body size 169 bytes.
#line 1 "ENTRY_11051f40"

void __thiscall FUN_11051f40(int param_1,undefined4 *param_2)

{
  undefined4 *_Dst;
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  undefined4 *local_108;
  char local_104 [256];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_108);
  local_108 = (undefined4 *)(param_2);
  thunk_FUN_110bc8b0(*(undefined4 *)(param_1 + 4),local_104,0x100);
  if (local_104[0] == '\0') {
    *param_2 = (undefined4)(0);
  }
  else {
    pcVar3 = (char *)(local_104);
    do {
      cVar1 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar1 != '\0');
    _Size = (size_t)((int)pcVar3 - (int)(local_104 + 1));
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
    _Dst = (undefined4 *)(puVar2 + 4);
    *puVar2 = (undefined4)(1);
    puVar2[3] = _Size;
    puVar2[2] = 0;
    puVar2[1] = 0;
    memcpy(_Dst,local_104,_Size);
    *(undefined1 *)((int)_Dst + _Size) = 0;
    *param_2 = (undefined4)(_Dst);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 11052090; body size 802 bytes.
#line 1 "ENTRY_11052090"

void __thiscall
FUN_11052090(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
            undefined4 param_6)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  SCLibrary *pSVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  SCStr *pSVar11;
  SCStr *pSVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  SCStr *pSVar15;
  int *local_38;
  int *local_30;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_1179fb2d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("playingHTSourceMessage");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  pcVar3 = (char *)((char *)thunk_FUN_1109aba0(param_3,param_4,uVar2));
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep(pcVar3);
  puVar9 = (undefined4 *)(&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  pSVar15 = (SCStr *)((SCStr *)0x0);
  uVar14 = (undefined1)(0xa0);
  puVar13 = (undefined4 *)(&local_14);
  pSVar12 = (SCStr *)((SCStr *)&param_2);
  pSVar11 = (SCStr *)((SCStr *)&local_1c);
  pSVar4 = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)((Stub_SCLibrary *)(pSVar4))->createSCDisplayMessagePopupAction(pSVar11,pSVar12,(int)puVar13,(bool)uVar14,pSVar15));
  piVar1 = (int *)((int *)*piVar5);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  *piVar5 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(puVar9));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
  piVar6 = (int *)((int *)(**(code **)(*param_1 + 0xe8))());
  piVar10 = (int *)((int *)0x0);
  if (piVar6 != (int *)0x0) {
    piVar10 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
    (**(code **)(*piVar10 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  pSVar4 = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
  piVar7 = (int *)((int *)(**(code **)(*(int *)pSVar4 + 0x18))(&param_4));
  local_1c = (int *)((int *)*piVar7);
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  *piVar7 = (int)(0);
  if (local_1c == (int *)0x0) {
    local_38 = (int *)((int *)0x0);
  }
  else {
    local_38 = (int *)((int *)(**(code **)(*local_1c + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  uVar8 = (undefined4)((**(code **)(*piVar6 + 0x14))(&param_3));
  *(unsigned char *)((char *)&local_8 + 0) = 0x10;
  piVar6 = (int *)((int *)(**(code **)(*local_1c + 0x70))(&local_20,uVar8));
  param_4 = (int *)((int *)*piVar6);
  *(unsigned char *)((char *)&local_8 + 0) = 0x11;
  *piVar6 = (int)(0);
  if (param_4 == (int *)0x0) {
    local_30 = (int *)((int *)0x0);
  }
  else {
    local_30 = (int *)((int *)(**(code **)(*param_4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x14;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  param_3 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x15;
  if (param_4 != (int *)0x0) {
    ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("ZONEGROUP_ID");
    *(unsigned char *)((char *)&local_8 + 0) = 0x17;
    puVar9 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0x20))(&local_1c));
    piVar6 = (int *)((int *)*puVar9);
    *(unsigned char *)((char *)&local_8 + 0) = 0x18;
    uVar8 = (undefined4)((**(code **)(*param_4 + 0x14))(&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 0x19;
    (**(code **)(*piVar6 + 0x1c))(&local_14,uVar8);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
    ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x15;
  pcVar3 = (char *)((char *)thunk_FUN_1109aba0(param_5,param_6));
  ((Stub_SCStr *)((SCStr *)&param_6))->int_allocRep(pcVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 0x1d;
  ((Stub_SCStr *)((SCStr *)&param_4))->int_allocRep("ShortMessage");
  *(unsigned char *)((char *)&local_8 + 0) = 0x1e;
  puVar9 = (undefined4 *)((undefined4 *)(**(code **)(*piVar1 + 0x20))(&param_5));
  *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
  (**(code **)(*(int *)*puVar9 + 0x1c))(&param_4,&param_6);
  *(unsigned char *)((char *)&local_8 + 0) = 0x20;
  if (param_5 != (int *)0x0) {
    (**(code **)(*param_5 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x21;
  ((Stub_SCStr *)((SCStr *)&param_4))->int_release();
  param_4 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0x22;
  ((Stub_SCStr *)((SCStr *)&param_6))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 0x15;
  (**(code **)(*piVar1 + 0x14))();
  *(unsigned char *)((char *)&local_8 + 0) = 0x23;
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x24;
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0x25;
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x26)));
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  local_8 = (undefined4)(0x27);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11052480; body size 235 bytes.
#line 1 "ENTRY_11052480"

SCStr * __thiscall FUN_11052480(int *param_1,SCStr *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179fb8d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)((**(code **)(*param_1 + 0xf0))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (iVar1 == 0) {
    ((Stub_SCStr *)(param_2))->int_allocRep("");
    ExceptionList = (void *)(local_10);
    return (SCStr *)(param_2);
  }
  (**(code **)(*param_1 + 0xf4))();
  piVar2 = (int *)((int *)thunk_FUN_110b78b0(&local_14));
  local_8 = (undefined4)(0);
  pcVar3 = (char *)("");
  if ((char *)*piVar2 != (char *)0x0) {
    pcVar3 = (char *)((char *)*piVar2);
  }
  ((Stub_SCStr *)(param_2))->int_allocRep(pcVar3);
  local_8 = (undefined4)(1);
  if ((local_14 != 0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0((void *)(local_14 + -0x10)));
    if (iVar1 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free((void *)(local_14 + -0x10));
    }
  }
  ExceptionList = (void *)(local_10);
  return (SCStr *)(param_2);
}


// Reference entry 11053180; body size 92 bytes.
#line 1 "ENTRY_11053180"

SCStr * FUN_11053180(SCStr *param_1)

{
  char *pcVar1;
  uint local_4;
  
  thunk_FUN_11053400(&local_4);
  local_4 = (uint)(local_4 & 0xffff);
  if (((local_4 != 0x3b) && (local_4 != 0x3d)) && (local_4 != 0x3f)) {
    ((Stub_SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2274,&DAT_11882ff0));
  ((Stub_SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 11053200; body size 376 bytes.
#line 1 "ENTRY_11053200"

undefined4 __stdcall FUN_11053200(undefined4 param_1)

{
  int *piVar1;
  SCLibrary *pSVar2;
  SCStr *this_;
  char *pcVar3;
  undefined4 uStack_3c;
  undefined1 **ppuStack_34;
  uint uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  short local_18 [2];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_1179fe0d);
  local_10 = (void *)(ExceptionList);
  uStack_30 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  ppuStack_34 = (undefined1 **)((undefined1 **)local_18);
  thunk_FUN_11053400();
  if (((local_18[0] == 0x3b) || (local_18[0] == 0x3d)) || (local_18[0] == 0x3f)) {
    local_20 = (undefined1 *)((undefined1 *)&ppuStack_34);
    uStack_3c = (undefined4)(0x11053294);
    thunk_FUN_11053400();
    local_8 = (undefined4)(0);
    uStack_3c = (undefined4)(0x110532a4);
    pSVar2 = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
    local_8 = (undefined4)(0xffffffff);
    uStack_3c = (undefined4)(0x110532b2);
    ((Stub_SCLibrary *)(pSVar2))->getHTSourceTypeText();
    local_8 = (undefined4)(1);
    ppuStack_34 = (undefined1 **)((undefined1 **)0x6d);
    uStack_3c = (undefined4)(0x110532c4);
    thunk_FUN_102e4c30();
    local_28 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    ppuStack_34 = (undefined1 **)((undefined1 **)0x110532da);
    ((Stub_SCStr *)((SCStr *)&local_28))->int_release();
    local_28 = (undefined4)(local_14);
    ppuStack_34 = (undefined1 **)((undefined1 **)0x110532e8);
    ((Stub_SCStr *)((SCStr *)&local_28))->int_addref();
    local_24 = (undefined4)(6);
    local_20 = (undefined1 *)((undefined1 *)&ppuStack_34);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    uStack_3c = (undefined4)(0x11053302);
    ((Stub_SCStr *)((SCStr *)&ppuStack_34))->SCStr((SCStr *)local_18);
    local_1c = (undefined1 *)((undefined1 *)&uStack_3c);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((Stub_SCStr *)((SCStr *)&uStack_3c))->SCStr((SCStr *)&local_28);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_110670b0(param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ppuStack_34 = (undefined1 **)((undefined1 **)0x1105333b);
    ((Stub_SCStr *)((SCStr *)&local_28))->int_release();
    local_28 = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(7)));
    ppuStack_34 = (undefined1 **)((undefined1 **)0x1105334e);
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
    local_8 = (undefined4)(8);
    this_ = (SCStr *)((SCStr *)local_18);
  }
  else {
    ppuStack_34 = (undefined1 **)(&local_1c);
    piVar1 = (int *)((int *)thunk_FUN_11053490());
    local_8 = (undefined4)(9);
    pcVar3 = (char *)("");
    if ((char *)*piVar1 != (char *)0x0) {
      pcVar3 = (char *)((char *)*piVar1);
    }
    uStack_3c = (undefined4)(0x1105326b);
    ((Stub_SCStr *)((SCStr *)&ppuStack_34))->int_allocRep(pcVar3);
    uStack_3c = (undefined4)(0x11053274);
    thunk_FUN_110671e0();
    local_8 = (undefined4)(10);
    this_ = (SCStr *)((SCStr *)&local_1c);
  }
  ppuStack_34 = (undefined1 **)((undefined1 **)0x11053364);
  ((Stub_SCStr *)(this_))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 11053400; body size 113 bytes.
#line 1 "ENTRY_11053400"

undefined4 * __thiscall FUN_11053400(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_8 [8];
  
  iVar1 = (int)((**(code **)(*param_1 + 0xf0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xf4))();
    thunk_FUN_1113ecc0(auStack_8,"CurrentTrackMetaData");
    thunk_FUN_110b7de0(param_2);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 11054290; body size 685 bytes.
#line 1 "ENTRY_11054290"

void __fastcall FUN_11054290(int *param_1)

{
  uint uVar1;
  int *piVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  SCIDeviceMusicEqualization *pSVar8;
  int *local_3c;
  int *local_34;
  int *local_2c;
  int *local_28;
  SCIDeviceMusicEqualization *local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a00bd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  if ((SCIDeviceMusicEqualization *)param_1[0x15] != (SCIDeviceMusicEqualization *)0x0) {
    *(undefined2 *)(param_1 + 0x17) = 0;
    ((Stub_SCDeviceMusicEqualizationEventSink *)((SCDeviceMusicEqualizationEventSink *)(param_1 + 0x12)))->unsubscribeFromEQ((SCIDeviceMusicEqualization *)param_1[0x15]);
    piVar2 = (int *)((int *)param_1[0x16]);
    if (piVar2 != (int *)0x0) {
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      (**(code **)(*piVar2 + 8))();
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  *(undefined2 *)(param_1 + 0x17) = 0;
  piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xe8))(uVar1));
  piVar7 = (int *)((int *)0x0);
  if (piVar2 != (int *)0x0) {
    piVar7 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    (**(code **)(*piVar7 + 4))();
  }
  local_8 = (undefined4)(0);
  pSVar3 = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&local_14));
  local_1c = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar4 = (int)(0);
  if (local_1c == (int *)0x0) {
    local_3c = (int *)((int *)0x0);
  }
  else {
    local_3c = (int *)((int *)(**(code **)(*local_1c + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  uVar5 = (undefined4)((**(code **)(*piVar2 + 0x14))(&local_18));
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  piVar4 = (int *)((int *)(**(code **)(*local_1c + 0x70))(&local_20,uVar5));
  piVar2 = (int *)((int *)*piVar4);
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  *piVar4 = (int)(0);
  if (piVar2 == (int *)0x0) {
    local_34 = (int *)((int *)0x0);
  }
  else {
    local_34 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  if (piVar2 != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar2 + 0x18))(&local_28));
    piVar2 = (int *)((int *)*piVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    *piVar4 = (int)(0);
    if (piVar2 == (int *)0x0) {
      local_2c = (int *)((int *)0x0);
    }
    else {
      local_2c = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if (piVar2 == (int *)0x0) {
      pSVar8 = (SCIDeviceMusicEqualization *)((SCIDeviceMusicEqualization *)0x0);
      local_24 = (SCIDeviceMusicEqualization *)((SCIDeviceMusicEqualization *)0x0);
    }
    else {
      ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("SCIDeviceMusicEqualization");
      *(unsigned char *)((char *)&local_8 + 0) = 0xe;
      puVar6 = (undefined4 *)((undefined4 *)(**(code **)*piVar2)(&local_1c,&local_14));
      pSVar8 = (SCIDeviceMusicEqualization *)((SCIDeviceMusicEqualization *)*puVar6);
      *puVar6 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      local_24 = (SCIDeviceMusicEqualization *)(pSVar8);
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
      local_14 = (int *)((int *)0x0);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x14;
    if ((pSVar8 != (SCIDeviceMusicEqualization *)0x0) &&
       (((Stub_SCDeviceMusicEqualizationEventSink *)((SCDeviceMusicEqualizationEventSink *)(param_1 + 0x12)))->subscribeToEQ(pSVar8),
       pSVar8 != (SCIDeviceMusicEqualization *)param_1[0x15])) {
      piVar2 = (int *)((int *)param_1[0x16]);
      if (piVar2 != (int *)0x0) {
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        (**(code **)(*piVar2 + 8))();
      }
      param_1[0x15] = (int)pSVar8;
      piVar2 = (int *)((int *)(**(code **)(*(int *)pSVar8 + 0xc))());
      param_1[0x16] = (int)piVar2;
      (**(code **)(*piVar2 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x16;
    if (pSVar8 != (SCIDeviceMusicEqualization *)0x0) {
      (**(code **)(*(int *)pSVar8 + 8))();
    }
  }
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  thunk_FUN_1104f490(1);
  *(unsigned char *)((char *)&local_8 + 0) = 0x17;
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 8))();
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x18)));
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 8))();
  }
  local_8 = (undefined4)(0x19);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110545f0; body size 67 bytes.
#line 1 "ENTRY_110545f0"

void __fastcall FUN_110545f0(int param_1)

{
  int *piVar1;
  
  *(undefined2 *)(param_1 + 0x5c) = 0;
  if (*(SCIDeviceMusicEqualization **)(param_1 + 0x54) != (SCIDeviceMusicEqualization *)0x0) {
    ((Stub_SCDeviceMusicEqualizationEventSink *)((SCDeviceMusicEqualizationEventSink *)(param_1 + 0x48)))->unsubscribeFromEQ(*(SCIDeviceMusicEqualization **)(param_1 + 0x54));
    piVar1 = (int *)(*(int **)(param_1 + 0x58));
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


// Reference entry 11054650; body size 293 bytes.
#line 1 "ENTRY_11054650"

undefined4 __fastcall FUN_11054650(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_48 [16];
  char *local_38;
  int local_20;
  undefined4 local_1c;
  SCStr local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a0115);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_20 = (int)((**(code **)(*param_1 + 0xf0))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (local_20 != 0) {
    local_1c = (undefined4)((**(code **)(*param_1 + 0xf4))());
    thunk_FUN_1113eda0(&local_14,"CurrentTrackURI");
    local_8 = (undefined4)(0);
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (local_14 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(local_14);
    }
    thunk_FUN_11245a50(puVar3,local_48);
    local_8 = (undefined4)(1);
    if ((local_14 != (undefined1 *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
      iVar2 = (int)(thunk_FUN_1123fcd0(local_14 + -0x10));
      if (iVar2 == 0) {
        *(undefined4 *)(local_14 + -8) = 0;
        *(undefined4 *)(local_14 + -0xc) = 0;
        thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
        free(local_14 + -0x10);
      }
    }
    local_8 = (undefined4)(0xffffffff);
    ((Stub_SCStr *)(local_18))->int_allocRep(local_38);
    local_8 = (undefined4)(2);
    bVar1 = (bool)(((Stub_SCStr *)(local_18))->contains("bluetooth",false));
    local_8 = (undefined4)(3);
    ((Stub_SCStr *)(local_18))->int_release();
    if (bVar1) {
      ExceptionList = (void *)(local_10);
      return (undefined4)(1);
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 11054800; body size 130 bytes.
#line 1 "ENTRY_11054800"

void __fastcall FUN_11054800(int param_1)

{
  char cVar1;
  SCStr aSStack_20 [4];
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  puStack_10 = (undefined4 *)((undefined4 *)0x1105480d);
  thunk_FUN_1104f960();
  if (*(char *)(param_1 + 0x15) != '\0') {
    *(undefined1 *)(param_1 + 0x15) = 0;
    puStack_10 = (undefined4 *)((undefined4 *)0x11054825);
    cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x48) + 0xa0))());
    puStack_10 = (undefined4 *)(&DAT_11882ff0);
    if (cVar1 != '\0') {
      uStack_14 = (undefined4)(0x2284);
      puStack_18 = (undefined4 *)(&DAT_11882ff0);
      uStack_1c = (undefined4)(0x2283);
      ((Stub_SCStr *)(aSStack_20))->int_allocRep("SCLIB_STR_Soundbar_NightSoundOn");
      thunk_FUN_11052090();
      return;
    }
    uStack_14 = (undefined4)(0x2285);
    puStack_18 = (undefined4 *)(&DAT_11882ff0);
    uStack_1c = (undefined4)(0x2285);
    ((Stub_SCStr *)(aSStack_20))->int_allocRep("SCLIB_STR_Soundbar_NightSoundOff");
    thunk_FUN_11052090();
  }
  return;
}


// Reference entry 110548b0; body size 130 bytes.
#line 1 "ENTRY_110548b0"

void __fastcall FUN_110548b0(int param_1)

{
  char cVar1;
  SCStr aSStack_20 [4];
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  puStack_10 = (undefined4 *)((undefined4 *)0x110548bd);
  thunk_FUN_1104f960();
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    puStack_10 = (undefined4 *)((undefined4 *)0x110548d5);
    cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x48) + 0x98))());
    puStack_10 = (undefined4 *)(&DAT_11882ff0);
    if (cVar1 != '\0') {
      uStack_14 = (undefined4)(0x2286);
      puStack_18 = (undefined4 *)(&DAT_11882ff0);
      uStack_1c = (undefined4)(0x2286);
      ((Stub_SCStr *)(aSStack_20))->int_allocRep("SCLIB_STR_Soundbar_SpeechEnhancementOn");
      thunk_FUN_11052090();
      return;
    }
    uStack_14 = (undefined4)(0x2287);
    puStack_18 = (undefined4 *)(&DAT_11882ff0);
    uStack_1c = (undefined4)(0x2287);
    ((Stub_SCStr *)(aSStack_20))->int_allocRep("SCLIB_STR_Soundbar_SpeechEnhancementOff");
    thunk_FUN_11052090();
  }
  return;
}


// Reference entry 110557a0; body size 547 bytes.
#line 1 "ENTRY_110557a0"

undefined4 __thiscall FUN_110557a0(int *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_24 [4];
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a03fd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (param_2 != (char *)0x1) {
    uVar1 = (undefined4)(thunk_FUN_110471e0(param_2));
    ExceptionList = (void *)(local_10);
    return (undefined4)(uVar1);
  }
  iVar2 = (int)((**(code **)(*param_1 + 0xf0))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0xf4))();
    iVar2 = (int)(thunk_FUN_1113eb00("r:RestartPending"));
    if (iVar2 == 0) {
      thunk_FUN_1113ecc0(local_24,"CurrentTrackMetaData");
      thunk_FUN_1113eda0(&local_20,"r:streamContent");
      local_8 = (undefined4)(0);
      pcVar3 = (char *)("");
      if (local_20 != (char *)0x0) {
        pcVar3 = (char *)(local_20);
      }
      ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep(pcVar3);
      thunk_FUN_101ba300();
      if ((local_14 != (char *)0x0) && (*local_14 != '\0')) {
        local_18 = (char *)((char *)0x0);
        param_2 = (char *)((char *)0x0);
        *(unsigned char *)((char *)&local_8 + 0) = 4;
        thunk_FUN_11055e60(&local_14,&DAT_11965808,&local_18);
        thunk_FUN_11055e60(&local_14,"TYPE=",&param_2);
        if (((local_18 == (char *)0x0) || (*local_18 == '\0')) &&
           ((param_2 == (char *)0x0 || (*param_2 == '\0')))) {
          uVar1 = (undefined4)(9);
LAB_11055979:
          *(unsigned char *)((char *)&local_8 + 0) = 0xb;
          ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
          param_2 = (char *)((char *)0x0);
          local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc)));
          ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
          local_18 = (char *)((char *)0x0);
          local_8 = (undefined4)(0xd);
          ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
          ExceptionList = (void *)(local_10);
          return (undefined4)(uVar1);
        }
        local_1c = (char *)((char *)0x0);
        *(unsigned char *)((char *)&local_8 + 0) = 5;
        thunk_FUN_11055e60(&local_14,"ARTIST ",&local_1c);
        if ((local_1c != (char *)0x0) && (*local_1c != '\0')) {
          *(unsigned char *)((char *)&local_8 + 0) = 6;
          ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
          uVar1 = (undefined4)(4);
          goto LAB_11055979;
        }
        *(unsigned char *)((char *)&local_8 + 0) = 10;
        ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
        *(unsigned char *)((char *)&local_8 + 0) = 0xe;
        ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
        param_2 = (char *)((char *)0x0);
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
        ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
      }
      local_8 = (undefined4)(0x10);
      ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 110564f0; body size 76 bytes.
#line 1 "ENTRY_110564f0"

void __fastcall FUN_110564f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a05f0);
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


// Reference entry 11056560; body size 255 bytes.
#line 1 "ENTRY_11056560"

/* WARNING: Removing unreachable block (ram,0x1105662b) */
/* WARNING: Removing unreachable block (ram,0x1105663b) */
/* WARNING: Removing unreachable block (ram,0x1105663f) */

void __fastcall FUN_11056560(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a0620);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_RPrevTrackOrRewindToStart_vftable);
  param_1[2] = (uint)&Ext_RPrevTrackOrRewindToStart_vftable;
  if ((param_1[10] != 0) && ((int *)param_1[9] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[9] + 0x10))(uVar2);
    puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[9] = 0;
    param_1[10] = 0;
  }
  local_8 = (undefined4)(0);
  param_1[8] = (uint)&Ext_RControlAIOOpRefBase_vftable;
  if ((int *)param_1[9] != (int *)0x0) {
    if (param_1[10] != 0) {
      (**(code **)(*(int *)param_1[9] + 0x10))();
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
    if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[9] = 0;
    param_1[10] = 0;
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11056980; body size 81 bytes.
#line 1 "ENTRY_11056980"

int * __thiscall FUN_11056980(int *param_1,int *param_2)

{
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


// Reference entry 11056b20; body size 82 bytes.
#line 1 "ENTRY_11056b20"

undefined4 * __thiscall FUN_11056b20(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&Ext_SCArray_vftable);
  thunk_FUN_105b6490(*puVar1,param_1[3],puVar1);
  param_1[3] = *puVar1;
  thunk_FUN_10655080();
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 11056de0; body size 170 bytes.
#line 1 "ENTRY_11056de0"

void __stdcall FUN_11056de0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a08fd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1113eda0(&local_14,"CurrentPlayMode");
  local_8 = (undefined4)(0);
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)(local_14);
  }
  thunk_FUN_110b7610(puVar3,param_1,param_2);
  local_8 = (undefined4)(1);
  if ((local_14 != (undefined1 *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(local_14 + -0x10,uVar1));
    if (iVar2 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free(local_14 + -0x10);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11056ec0; body size 168 bytes.
#line 1 "ENTRY_11056ec0"

undefined4 FUN_11056ec0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a093d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1113eda0(&local_14,"CurrentTransportActions");
  local_8 = (undefined4)(0);
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (undefined4)(thunk_FUN_110b8180(puVar4));
  local_8 = (undefined4)(1);
  if ((local_14 != (undefined1 *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0(local_14 + -0x10,uVar1));
    if (iVar3 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free(local_14 + -0x10);
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar2);
}


// Reference entry 11057030; body size 168 bytes.
#line 1 "ENTRY_11057030"

undefined4 FUN_11057030(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a097d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1113eda0(&local_14,"r:CurrentValidPlayModes");
  local_8 = (undefined4)(0);
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(local_14);
  }
  uVar2 = (undefined4)(thunk_FUN_110b8290(puVar4));
  local_8 = (undefined4)(1);
  if ((local_14 != (undefined1 *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0(local_14 + -0x10,uVar1));
    if (iVar3 == 0) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free(local_14 + -0x10);
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar2);
}


// Reference entry 11057140; body size 355 bytes.
#line 1 "ENTRY_11057140"

void __thiscall FUN_11057140(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *local_20;
  int *local_1c;
  int *local_18;
  SCStr local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a09dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int **)(param_1 + 0x84) == (int *)0x0) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x84) + 0x20))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  }
  if (iVar1 == param_2) {
    if ((short)param_3 == 0) {
      uVar2 = (undefined4)(thunk_FUN_10292cf0(&local_18));
      local_8 = (undefined4)(0);
      thunk_FUN_101cd150(uVar2);
      *(unsigned char *)((char *)&local_8 + 0) = 3;
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))();
      }
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      ((Stub_SCStr *)(local_14))->int_allocRep("");
      *(unsigned char *)((char *)&local_8 + 0) = 4;
      ((Stub_SCStr *)((SCStr *)&param_2))->int_allocRep((char *)0x0);
      *(unsigned char *)((char *)&local_8 + 0) = 5;
      ((Stub_SCStr *)((SCStr *)&param_3))->int_allocRep("");
      *(unsigned char *)((char *)&local_8 + 0) = 6;
      uVar2 = (undefined4)((**(code **)(*local_20 + 0x38))
                        (param_1 + 0x44,1,0,1,0,&param_3,&param_2,1,1,0x3c,0,0,local_14));
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
      *(unsigned char *)((char *)&local_8 + 0) = 7;
      ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
      param_3 = (uint)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 8;
      ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
      param_2 = (int)(0);
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));
      ((Stub_SCStr *)(local_14))->int_release();
      *(undefined1 *)(param_1 + 0x69) = 1;
      local_8 = (undefined4)(10);
      if (local_1c != (int *)0x0) {
        (**(code **)(*local_1c + 8))();
        ExceptionList = (void *)(local_10);
        return;
      }
    }
    else {
      thunk_FUN_112af4e0("SCNowPlayingTransport",1,"Error stopping playback: %d",param_3 & 0xffff);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11057510; body size 70 bytes.
#line 1 "ENTRY_11057510"

void __fastcall FUN_11057510(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int **)(param_1 + 0x24) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x24));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


// Reference entry 11057590; body size 199 bytes.
#line 1 "ENTRY_11057590"

undefined4 * __thiscall FUN_11057590(int *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a0a6c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  piVar6 = (int *)((int *)0x0);
  local_8 = (int)(0);
  piVar5 = (int *)((int *)0x0);
  if (iVar1 != 0) {
    pvVar2 = (void *)(operator_new(0x48));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)((int *)0x0);
    }
    else {
      uVar3 = (undefined4)(thunk_FUN_110b9d00());
      piVar4 = (int *)((int *)thunk_FUN_110676d0(uVar3));
    }
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    if (piVar4 != (int *)0x0) {
      piVar6 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
      (**(code **)(*piVar6 + 4))();
      piVar5 = (int *)(piVar4);
    }
  }
  *param_2 = (undefined4)(piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (int)(2);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 11057a90; body size 683 bytes.
#line 1 "ENTRY_11057a90"

undefined4 * __thiscall FUN_11057a90(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piStack_60;
  int *piStack_5c;
  int *local_24;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a0b9c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)createPropertyBag());
  piVar3 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("pause");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("eventType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar3 + 0x1c))();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  thunk_FUN_1105ca20();
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("nowPlayingEvent");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("nowplaying");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101f6530());
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*(int *)*puVar2 + 0x18))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xd8))());
  piVar6 = (int *)((int *)0x0);
  if (piVar3 != (int *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar6 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  iVar4 = (int)((**(code **)(*param_1 + 0xe0))());
  piVar3 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  if (iVar4 != 0) {
    piStack_5c = (int *)((int *)0x11057c53);
    local_18 = (void *)(operator_new(0x58));
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (local_18 == (void *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      local_14 = (undefined1 *)((undefined1 *)&piStack_60);
      piStack_5c = (int *)((int *)0x0);
      piStack_60 = (int *)(param_1);
      piStack_5c = (int *)((int *)(**(code **)(*param_1 + 0xc))());
      (**(code **)(*piStack_5c + 4))();
      uVar8 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      uVar5 = (undefined4)(thunk_FUN_110ba2a0(0));
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      piVar6 = (int *)((int *)thunk_FUN_1102f130(uVar5,uVar8));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    piVar7 = (int *)((int *)0x0);
    if (piVar6 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      (**(code **)(*piVar3 + 4))();
      piVar7 = (int *)(piVar6);
    }
    *param_2 = (undefined4)(piVar7);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    local_8 = (undefined4)(0x13);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0x15);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 11057df0; body size 688 bytes.
#line 1 "ENTRY_11057df0"

undefined4 * __thiscall FUN_11057df0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piStack_60;
  int *piStack_5c;
  int *local_24;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a0c3c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)createPropertyBag());
  piVar3 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("play");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("eventType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar3 + 0x1c))();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  thunk_FUN_1105ca20();
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("nowPlayingEvent");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("nowplaying");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101f6530());
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*(int *)*puVar2 + 0x18))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xd8))());
  piVar6 = (int *)((int *)0x0);
  if (piVar3 != (int *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar6 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  iVar4 = (int)((**(code **)(*param_1 + 0xe0))());
  piVar3 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  if (iVar4 != 0) {
    piStack_5c = (int *)((int *)0x11057fb3);
    local_18 = (void *)(operator_new(0x58));
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (local_18 == (void *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      local_14 = (undefined1 *)((undefined1 *)&piStack_60);
      piStack_5c = (int *)((int *)0x0);
      piStack_60 = (int *)(param_1);
      piStack_5c = (int *)((int *)(**(code **)(*param_1 + 0xc))());
      (**(code **)(*piStack_5c + 4))();
      uVar8 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      uVar5 = (undefined4)(thunk_FUN_110ba400(&DAT_11881128));
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      piVar6 = (int *)((int *)thunk_FUN_1102f130(uVar5,uVar8));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    piVar7 = (int *)((int *)0x0);
    if (piVar6 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      (**(code **)(*piVar3 + 4))();
      piVar7 = (int *)(piVar6);
    }
    *param_2 = (undefined4)(piVar7);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    local_8 = (undefined4)(0x13);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0x15);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 11058150; body size 682 bytes.
#line 1 "ENTRY_11058150"

undefined4 * __thiscall FUN_11058150(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piStack_60;
  int *piStack_5c;
  int *local_24;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a0cdc);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)createPropertyBag());
  piVar3 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("previousTrack");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("eventType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar3 + 0x1c))();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  thunk_FUN_1105ca20();
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("nowPlayingEvent");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("nowplaying");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101f6530());
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*(int *)*puVar2 + 0x18))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xd8))());
  piVar6 = (int *)((int *)0x0);
  if (piVar3 != (int *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar6 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  iVar4 = (int)((**(code **)(*param_1 + 0xe0))());
  piVar3 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  if (iVar4 != 0) {
    piStack_5c = (int *)((int *)0x11058313);
    local_18 = (void *)(operator_new(0x58));
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (local_18 == (void *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      local_14 = (undefined1 *)((undefined1 *)&piStack_60);
      piStack_5c = (int *)((int *)0x0);
      piStack_60 = (int *)(param_1);
      piStack_5c = (int *)((int *)(**(code **)(*param_1 + 0xc))());
      (**(code **)(*piStack_5c + 4))();
      uVar8 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      uVar5 = (undefined4)(thunk_FUN_110ba560(0));
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      piVar6 = (int *)((int *)thunk_FUN_1102f130(uVar5,uVar8));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    piVar7 = (int *)((int *)0x0);
    if (piVar6 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      (**(code **)(*piVar3 + 4))();
      piVar7 = (int *)(piVar6);
    }
    *param_2 = (undefined4)(piVar7);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    local_8 = (undefined4)(0x13);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0x15);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 11058930; body size 692 bytes.
#line 1 "ENTRY_11058930"

undefined4 * __thiscall FUN_11058930(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piStack_60;
  int *piStack_5c;
  int *local_24;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a0e2c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)createPropertyBag());
  piVar3 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("rewindToStart");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("eventType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar3 + 0x1c))();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  thunk_FUN_1105ca20();
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("nowPlayingEvent");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("nowplaying");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101f6530());
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*(int *)*puVar2 + 0x18))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xd8))());
  piVar6 = (int *)((int *)0x0);
  if (piVar3 != (int *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar6 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  iVar4 = (int)((**(code **)(*param_1 + 0xe0))());
  piVar3 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  if (iVar4 != 0) {
    piStack_5c = (int *)((int *)0x11058af3);
    local_18 = (void *)(operator_new(0x58));
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (local_18 == (void *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      local_14 = (undefined1 *)((undefined1 *)&piStack_60);
      piStack_5c = (int *)((int *)0x0);
      piStack_60 = (int *)(param_1);
      piStack_5c = (int *)((int *)(**(code **)(*param_1 + 0xc))());
      (**(code **)(*piStack_5c + 4))();
      uVar8 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      uVar5 = (undefined4)(thunk_FUN_110baed0("REL_TIME","00:00:00"));
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      piVar6 = (int *)((int *)thunk_FUN_1102f130(uVar5,uVar8));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    piVar7 = (int *)((int *)0x0);
    if (piVar6 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      (**(code **)(*piVar3 + 4))();
      piVar7 = (int *)(piVar6);
    }
    *param_2 = (undefined4)(piVar7);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    local_8 = (undefined4)(0x13);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0x15);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 11059030; body size 711 bytes.
#line 1 "ENTRY_11059030"

undefined4 * __thiscall
FUN_11059030(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piStack_60;
  int *piStack_5c;
  int *local_24;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a0f6c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)createPropertyBag());
  piVar3 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("seek");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("eventType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar3 + 0x1c))();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  thunk_FUN_1105ca20();
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("nowPlayingEvent");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("nowplaying");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101f6530());
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*(int *)*puVar2 + 0x18))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  local_14 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xd8))());
  piVar8 = (int *)((int *)0x0);
  if (piVar3 != (int *)0x0) {
    piVar8 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar8 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  iVar4 = (int)((**(code **)(*param_1 + 0xe0))());
  piVar3 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  if (iVar4 != 0) {
    piStack_5c = (int *)((int *)0x110591f3);
    local_18 = (void *)(operator_new(0x58));
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (local_18 == (void *)0x0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      local_14 = (undefined1 *)((undefined1 *)&piStack_60);
      piStack_5c = (int *)((int *)0x0);
      piStack_60 = (int *)(param_1);
      piStack_5c = (int *)((int *)(**(code **)(*param_1 + 0xc))());
      (**(code **)(*piStack_5c + 4))();
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      uVar10 = (undefined4)(0);
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)((undefined1 *)*param_4);
      }
      puVar7 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
        puVar7 = (undefined1 *)((undefined1 *)*param_3);
      }
      uVar5 = (undefined4)(thunk_FUN_110baed0(puVar7,puVar6));
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      piVar8 = (int *)((int *)thunk_FUN_1102f130(uVar5,uVar10));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    piVar9 = (int *)((int *)0x0);
    if (piVar8 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
      (**(code **)(*piVar3 + 4))();
      piVar9 = (int *)(piVar8);
    }
    *param_2 = (undefined4)(piVar9);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    local_8 = (undefined4)(0x13);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0x15);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 110593b0; body size 212 bytes.
#line 1 "ENTRY_110593b0"

undefined4 __thiscall FUN_110593b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a0fc5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)0x3c))->format((char *)&local_14);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_allocRep("REL_TIME");
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  (**(code **)(*param_1 + 0x28))(param_2,&param_3,&local_14);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  param_3 = (undefined4)(0);
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_2);
}


// Reference entry 11059910; body size 913 bytes.
#line 1 "ENTRY_11059910"

undefined4 * __thiscall FUN_11059910(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *local_34;
  int *local_30;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a1126);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_1c = (int *)(param_1);
  iVar2 = (int)((**(code **)(*param_1 + 0xe0))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)(operator_new(0xd7d0));
    local_8 = (undefined4)(0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)((undefined4 *)0x0);
    }
    else {
      iVar2 = (int)(*(int *)(iVar2 + 0x2c));
      uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x48))());
      uVar14 = (undefined4)(0);
      uVar13 = (undefined4)(0);
      uVar12 = (undefined4)(2000);
      uVar11 = (undefined4)(2000);
      uVar5 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + iVar2 + 4) + 0x50))
                        (2000,2000,0,0));
      thunk_FUN_111c0760(uVar4,"urn:schemas-upnp-org:service:AVTransport:1","SetPlayMode",uVar5,
                         uVar11,uVar12,uVar13,uVar14);
      *puVar3 = (undefined4)((uint)&Ext_RUpnpAVTSetPlayModeAIOOp_vftable);
      puVar3[0x18] = (uint)&Ext_RUpnpAVTSetPlayModeAIOOp_vftable;
      puVar3[0x11b] = (uint)&Ext_RUpnpAVTSetPlayModeAIOOp_vftable;
      param_1 = (int *)(local_1c);
    }
    local_8 = (undefined4)(0xffffffff);
    uVar1 = (undefined1)((**(code **)(*param_1 + 0x94))());
    local_20 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_20 + 1)) << 8 | (uint)(uVar1)));
    uVar4 = (undefined4)(thunk_FUN_1105ced0(param_3,local_20));
    thunk_FUN_1124ffa0("InstanceID",0);
    thunk_FUN_1124f350(0);
    piVar6 = (int *)((int *)thunk_FUN_1124ffa0("NewPlayMode",0));
    (**(code **)(*piVar6 + 0xc))(uVar4);
    piVar6 = (int *)(operator_new(0x58));
    local_8 = (undefined4)(1);
    if (piVar6 == (int *)0x0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      uVar4 = (undefined4)(0);
      piVar8 = (int *)(local_1c);
      piVar7 = (int *)((int *)(**(code **)(*local_1c + 0xc))(local_1c,0,0));
      (**(code **)(*piVar7 + 4))(piVar8,piVar7);
      piVar8 = (int *)((int *)thunk_FUN_1102f130(puVar3,0,piVar8,piVar7,uVar4));
    }
    piVar7 = (int *)((int *)0x0);
    local_8 = (undefined4)(0xffffffff);
    if (piVar8 != (int *)0x0) {
      piVar7 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
      (**(code **)(*piVar7 + 4))();
    }
    local_8 = (undefined4)(2);
    uVar4 = (undefined4)(createPropertyBag());
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    thunk_FUN_101aa9f0(uVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((Stub_SCStr *)((SCStr *)&local_20))->int_allocRep("repeat");
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("eventType");
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    (**(code **)(*local_34 + 0x1c))(&local_14,&local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (int *)((int *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    ((Stub_SCStr *)((SCStr *)&local_20))->int_release();
    pcVar9 = (char *)("NORMAL");
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    switch(param_3) {
    case 1:
      pcVar9 = (char *)("REPEAT_ALL");
      break;
    case 2:
      pcVar9 = (char *)("REPEAT_ONE");
      break;
    case 0xffffffff:
    case 0:
      pcVar9 = (char *)("NORMAL");
    }
    ((Stub_SCStr *)((SCStr *)&local_20))->int_allocRep(pcVar9);
    *(unsigned char *)((char *)&local_8 + 0) = 0xb;
    ((Stub_SCStr *)((SCStr *)&param_3))->int_allocRep("mode");
    *(unsigned char *)((char *)&local_8 + 0) = 0xc;
    (**(code **)(*local_34 + 0x1c))(&param_3,&local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
    param_3 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    ((Stub_SCStr *)((SCStr *)&local_20))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    ((Stub_SCStr *)((SCStr *)&local_20))->int_allocRep("nowPlayingEvent");
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((Stub_SCStr *)((SCStr *)&param_3))->int_allocRep("nowplaying");
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_101f6530(&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    (**(code **)(*(int *)*puVar3 + 0x18))(&param_3,&local_20,local_34);
    piVar6 = (int *)(local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    if (local_14 != (int *)0x0) {
      local_18 = (undefined4)(0);
      local_14 = (int *)((int *)0x0);
      (**(code **)(*piVar6 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
    param_3 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x14;
    ((Stub_SCStr *)((SCStr *)&local_20))->int_release();
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    piVar6 = (int *)((int *)(**(code **)(*local_1c + 0xd8))());
    piVar10 = (int *)((int *)0x0);
    if (piVar6 != (int *)0x0) {
      piVar10 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      (**(code **)(*piVar10 + 4))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *param_2 = (undefined4)(piVar8);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x16)));
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    local_8 = (undefined4)(0x17);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1105a230; body size 304 bytes.
#line 1 "ENTRY_1105a230"

undefined4 * __thiscall
FUN_1105a230(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = (int)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a1254);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  piVar8 = (int *)((int *)0x0);
  local_8 = (int)(0);
  if (iVar1 != 0) {
    pvVar2 = (void *)(operator_new(0x58));
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)((int *)0x0);
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xc))());
      (**(code **)(*piVar3 + 4))();
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      uVar9 = (undefined4)(0);
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)((undefined1 *)*param_4);
      }
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*param_3 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)((undefined1 *)*param_3);
      }
      uVar4 = (undefined4)(thunk_FUN_110bb050(puVar6,puVar5));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      piVar3 = (int *)((int *)thunk_FUN_1102f130(uVar4,uVar9));
    }
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
    piVar7 = (int *)((int *)0x0);
    if (piVar3 != (int *)0x0) {
      piVar8 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
      (**(code **)(*piVar8 + 4))();
      piVar7 = (int *)(piVar3);
    }
    *param_2 = (undefined4)(piVar7);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    local_8 = (int)(3);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1105a3b0; body size 513 bytes.
#line 1 "ENTRY_1105a3b0"

undefined4 * __thiscall FUN_1105a3b0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *pvVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a12c6);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (iVar1 == 0) {
    *param_2 = (undefined4)(0);
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  puVar2 = (undefined4 *)(operator_new(0xd7d0));
  local_8 = (undefined4)(0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    iVar1 = (int)(*(int *)(iVar1 + 0x2c));
    uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x48))());
    uVar13 = (undefined4)(0);
    uVar12 = (undefined4)(0);
    uVar11 = (undefined4)(2000);
    uVar10 = (undefined4)(2000);
    uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x50))
                      (2000,2000,0,0));
    thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:AVTransport:1","SnoozeAlarm",uVar4,uVar10
                       ,uVar11,uVar12,uVar13);
    *puVar2 = (undefined4)((uint)&Ext_RUpnpAVTSnoozeAlarmAIOOp_vftable);
    puVar2[0x18] = (uint)&Ext_RUpnpAVTSnoozeAlarmAIOOp_vftable;
    puVar2[0x11b] = (uint)&Ext_RUpnpAVTSnoozeAlarmAIOOp_vftable;
  }
  local_8 = (undefined4)(0xffffffff);
  puVar5 = (undefined4 *)((undefined4 *)((Stub_SCStr *)((char *)&param_3))->stringWithFormat("00:%02d:00",param_3));
  local_8 = (undefined4)(1);
  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)((undefined1 *)*puVar5);
  }
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(0);
  piVar6 = (int *)((int *)thunk_FUN_1124ffa0("Duration",0));
  (**(code **)(*piVar6 + 0xc))(puVar8);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  param_3 = (undefined4)(0);
  local_8 = (undefined4)(0xffffffff);
  pvVar7 = (void *)(operator_new(0x58));
  local_8 = (undefined4)(3);
  if (pvVar7 == (void *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    uVar3 = (undefined4)(0);
    piVar6 = (int *)((int *)(**(code **)(*param_1 + 0xc))(param_1,0,0));
    (**(code **)(*piVar6 + 4))(param_1,piVar6);
    piVar6 = (int *)((int *)thunk_FUN_1102f130(puVar2,0,param_1,piVar6,uVar3));
  }
  piVar9 = (int *)((int *)0x0);
  local_8 = (undefined4)(0xffffffff);
  if (piVar6 != (int *)0x0) {
    piVar9 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
    (**(code **)(*piVar9 + 4))();
  }
  local_8 = (undefined4)(4);
  *param_2 = (undefined4)(piVar6);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }
  local_8 = (undefined4)(5);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1105a640; body size 687 bytes.
#line 1 "ENTRY_1105a640"

undefined4 * __thiscall FUN_1105a640(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piStack_64;
  int *piStack_60;
  int *local_28;
  int *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a135c);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar1 = (int *)((int *)createPropertyBag());
  piVar3 = (int *)((int *)*piVar1);
  local_8 = (undefined4)(0);
  *piVar1 = (int)(0);
  if (piVar3 == (int *)0x0) {
    piVar1 = (int *)((int *)0x0);
  }
  else {
    piVar1 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_allocRep("togglePlayPause");
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("eventType");
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  (**(code **)(*piVar3 + 0x1c))();
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  thunk_FUN_1105ca20();
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_allocRep("nowPlayingEvent");
  *(unsigned char *)((char *)&local_8 + 0) = 8;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("nowplaying");
  *(unsigned char *)((char *)&local_8 + 0) = 9;
  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101f6530());
  *(unsigned char *)((char *)&local_8 + 0) = 10;
  (**(code **)(*(int *)*puVar2 + 0x18))();
  *(unsigned char *)((char *)&local_8 + 0) = 0xb;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xc;
  ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
  local_18 = (undefined1 *)((undefined1 *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  piVar3 = (int *)((int *)(**(code **)(*param_1 + 0xd8))());
  piVar6 = (int *)((int *)0x0);
  if (piVar3 != (int *)0x0) {
    piVar6 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar6 + 4))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 0xe;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  iVar4 = (int)((**(code **)(*param_1 + 0xe0))());
  piVar3 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 0xf;
  if (iVar4 != 0) {
    piStack_60 = (int *)((int *)0x1105a803);
    local_1c = (void *)(operator_new(0x58));
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    if (local_1c == (void *)0x0) {
      piVar6 = (int *)((int *)0x0);
    }
    else {
      local_18 = (undefined1 *)((undefined1 *)&piStack_64);
      piStack_60 = (int *)((int *)0x0);
      piStack_64 = (int *)(param_1);
      piStack_60 = (int *)((int *)(**(code **)(*param_1 + 0xc))());
      (**(code **)(*piStack_60 + 4))();
      uVar8 = (undefined4)(0);
      *(unsigned char *)((char *)&local_8 + 0) = 0x11;
      uVar5 = (undefined4)(thunk_FUN_110bb230(&local_11));
      *(unsigned char *)((char *)&local_8 + 0) = 0x10;
      piVar6 = (int *)((int *)thunk_FUN_1102f130(uVar5,uVar8));
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf)));
    piVar7 = (int *)((int *)0x0);
    if (piVar6 != (int *)0x0) {
      piVar3 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      (**(code **)(*piVar3 + 4))();
      piVar7 = (int *)(piVar6);
    }
    *param_2 = (undefined4)(piVar7);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x12)));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    local_8 = (undefined4)(0x13);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  local_8 = (undefined4)(0x15);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1105b5a0; body size 341 bytes.
#line 1 "ENTRY_1105b5a0"

void __thiscall FUN_1105b5a0(int *param_1,SCStr *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  SCStr *pSVar5;
  char *pcVar6;
  size_t _Size;
  SCStr *_Dst;
  SCStr *pSVar7;
  void *local_114;
  undefined1 *puStack_110;
  undefined4 local_10c;
  char local_108 [256];
  uint local_8;
  
  local_10c = (undefined4)(0xffffffff);
  puStack_110 = (undefined1 *)(LAB_117a153d);
  local_114 = (void *)(ExceptionList);
  local_8 = (uint)(DAT_12126b84 ^ (uint)local_108);
  ExceptionList = (void *)(&local_114);
  pSVar7 = (SCStr *)(param_2);
  iVar2 = (int)((**(code **)(*param_1 + 0xe0))(local_8));
  if (iVar2 == 0) {
    ((Stub_SCStr *)(param_2))->int_allocRep("");
  }
  else {
    uVar3 = (undefined4)((**(code **)(*param_1 + 0xe4))());
    thunk_FUN_110bc830(uVar3,local_108,0x100);
    if (local_108[0] == '\0') {
      _Dst = (SCStr *)((SCStr *)0x0);
    }
    else {
      pcVar6 = (char *)(local_108);
      do {
        cVar1 = (char)(*pcVar6);
        pcVar6 = (char *)(pcVar6 + 1);
      } while (cVar1 != '\0');
      _Size = (size_t)((int)pcVar6 - (int)(local_108 + 1));
      puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
      _Dst = (SCStr *)((SCStr *)(puVar4 + 4));
      *puVar4 = (undefined4)(1);
      puVar4[3] = _Size;
      puVar4[2] = 0;
      puVar4[1] = 0;
      memcpy(_Dst,local_108,_Size);
      _Dst[_Size] = (SCStr)0x0;
    }
    local_10c = (undefined4)(0);
    pSVar5 = (SCStr *)((SCStr *)&DAT_1186d2ee);
    if (_Dst != (SCStr *)0x0) {
      pSVar5 = (SCStr *)(_Dst);
    }
    pSVar7 = (SCStr *)(_Dst);
    ((Stub_SCStr *)(param_2))->int_allocRep((char *)pSVar5);
    local_10c = (undefined4)(1);
    if ((_Dst != (SCStr *)0x0) && (pSVar5 = _Dst + -0x10, *(int *)pSVar5 < 0xffff)) {
      iVar2 = (int)(thunk_FUN_1123fcd0(pSVar5));
      if (iVar2 == 0) {
        *(undefined4 *)(_Dst + -8) = 0;
        *(undefined4 *)(_Dst + -0xc) = 0;
        thunk_FUN_113cfb70(_Dst,*(undefined4 *)(_Dst + -4));
        free(pSVar5);
      }
    }
  }
  ExceptionList = (void *)(local_114);
  thunk_FUN_1148ac28(pSVar7);
  return;
}


// Reference entry 1105b750; body size 68 bytes.
#line 1 "ENTRY_1105b750"

undefined4 __fastcall FUN_1105b750(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    uVar2 = (undefined4)(thunk_FUN_1113eb00("CurrentTrackDuration"));
    return (undefined4)(uVar2);
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 1105be80; body size 123 bytes.
#line 1 "ENTRY_1105be80"

uint __thiscall FUN_1105be80(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 == 0) {
    return (uint)(0);
  }
  (**(code **)(*param_1 + 0xe4))();
  uVar2 = (uint)(thunk_FUN_11057030());
  uVar3 = (uint)(0);
  if (param_2 == 0) {
    if ((uVar2 & 2) != 0) {
      return (uint)(1);
    }
    if ((uVar2 & 4) != 0) {
      return (uint)(2);
    }
  }
  else if (param_2 == 1) {
    uVar3 = (uint)((uVar2 & 0xff) >> 1 & 2);
  }
  return (uint)(uVar3);
}


// Reference entry 1105bf20; body size 64 bytes.
#line 1 "ENTRY_1105bf20"

int __fastcall FUN_1105bf20(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1[0x14]);
  if (iVar1 == -1) {
    iVar1 = (int)((**(code **)(*param_1 + 0x84))());
    if (iVar1 != 0) {
      iVar1 = (int)((**(code **)(*param_1 + 0x84))());
      if (iVar1 != 3) {
        return (int)(0);
      }
    }
    iVar1 = (int)((**(code **)(*param_1 + 0xec))());
    iVar1 = (int)(2 - (uint)(iVar1 != 2));
  }
  return (int)(iVar1);
}


// Reference entry 1105bf70; body size 332 bytes.
#line 1 "ENTRY_1105bf70"

undefined4 __fastcall FUN_1105bf70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a16ad);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    thunk_FUN_1113eda0(&local_14,"TransportState");
    local_8 = (undefined4)(0);
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (local_14 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)(local_14);
    }
    uVar2 = (undefined4)(thunk_FUN_110b8100(puVar3));
    local_8 = (undefined4)(1);
    if (((local_14 != (undefined1 *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) &&
       (iVar1 = thunk_FUN_1123fcd0(local_14 + -0x10), iVar1 == 0)) {
      *(undefined4 *)(local_14 + -8) = 0;
      *(undefined4 *)(local_14 + -0xc) = 0;
      thunk_FUN_113cfb70(local_14,*(undefined4 *)(local_14 + -4));
      free(local_14 + -0x10);
    }
    local_8 = (undefined4)(0xffffffff);
    switch(uVar2) {
    case 0:
      ExceptionList = (void *)(local_10);
      return (undefined4)(0);
    case 1:
      uVar2 = (undefined4)((**(code **)(*param_1 + 0xec))());
      ExceptionList = (void *)(local_10);
      return (undefined4)(uVar2);
    case 2:
      uVar2 = (undefined4)((**(code **)(*param_1 + 0xf0))());
      ExceptionList = (void *)(local_10);
      return (undefined4)(uVar2);
    case 3:
      ExceptionList = (void *)(local_10);
      return (undefined4)(3);
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0xffffffff);
}


// Reference entry 1105c2f0; body size 67 bytes.
#line 1 "ENTRY_1105c2f0"

uint __fastcall FUN_1105c2f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    uVar2 = (uint)(thunk_FUN_11056ec0());
    return (uint)(((uint)((uint3)(uVar2 >> 10)) << 8 | (uint)((char)(uVar2 >> 2))) & 0xffffff01);
  }
  return (uint)(0);
}


// Reference entry 1105c350; body size 66 bytes.
#line 1 "ENTRY_1105c350"

uint __fastcall FUN_1105c350(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    uVar2 = (uint)(thunk_FUN_11056ec0());
    return (uint)(((uint)((uint3)(uVar2 >> 9)) << 8 | (uint)((char)(uVar2 >> 1))) & 0xffffff01);
  }
  return (uint)(0);
}


// Reference entry 1105c400; body size 412 bytes.
#line 1 "ENTRY_1105c400"

undefined4 * __thiscall FUN_1105c400(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int *local_1c;
  SCStr local_18 [4];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_117a175d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (int)(0);
  iVar1 = (int)((**(code **)(*param_1 + 0xe8))());
  if (*(int *)(iVar1 + 4) == 0) {
    puVar3 = (undefined4 *)((undefined4 *)createPropertyBag());
    piVar5 = (int *)((int *)*puVar3);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    *puVar3 = (undefined4)(0);
    if (piVar5 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }
  else {
    thunk_FUN_1113eda0(&local_14);
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    pcVar4 = (char *)("");
    if (local_14 != (char *)0x0) {
      pcVar4 = (char *)(local_14);
    }
    ((Stub_SCStr *)(local_18))->int_allocRep(pcVar4);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if ((local_14 != (char *)0x0) && (*(int *)(local_14 + -0x10) < 0xffff)) {
      iVar1 = (int)(thunk_FUN_1123fcd0());
      if (iVar1 == 0) {
        local_14[-0xffffffff00000008] = '\0';
        local_14[-0xffffffff00000007] = '\0';
        local_14[-0xffffffff00000006] = '\0';
        local_14[-0xffffffff00000005] = '\0';
        local_14[-0xffffffff0000000c] = '\0';
        local_14[-0xffffffff0000000b] = '\0';
        local_14[-0xffffffff0000000a] = '\0';
        local_14[-0xffffffff00000009] = '\0';
        thunk_FUN_113cfb70(local_14);
        free(local_14 + -0x10);
      }
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    ((Stub_SCStr *)((SCStr *)&stack0xffffffc0))->SCStr(local_18);
    piVar2 = (int *)((int *)thunk_FUN_1105d690(&local_1c));
    piVar5 = (int *)((int *)*piVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    *piVar2 = (int)(0);
    if (piVar5 == (int *)0x0) {
      piVar2 = (int *)((int *)0x0);
    }
    else {
      piVar2 = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    ((Stub_SCStr *)(local_18))->int_release();
  }
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  *param_2 = (undefined4)(piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  local_8 = (int)(10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_2);
}


// Reference entry 1105c980; body size 116 bytes.
#line 1 "ENTRY_1105c980"

undefined4 __thiscall FUN_1105c980(int param_1,int param_2,short *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 0xc))());
    if (cVar2 != '\0') {
      iVar3 = (int)((**(code **)(**(int **)(param_1 + 0x24) + 8))());
      goto LAB_1105c9a3;
    }
  }
  iVar3 = (int)(*(int *)(param_1 + 0x28));
LAB_1105c9a3:
  if (iVar3 == param_2) {
    if ((*(char *)(param_1 + 0x30) == '\0') || (*param_3 != 0x2c7)) {
      return (undefined4)(1);
    }
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x1c));
    uVar4 = (undefined4)(thunk_FUN_110baed0("REL_TIME","00:00:00"));
    thunk_FUN_102207b0(uVar4,param_1 + 8,uVar1);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return (undefined4)(0);
}


// Reference entry 1105ca20; body size 907 bytes.
#line 1 "ENTRY_1105ca20"

void __thiscall FUN_1105ca20(int *param_1,int *param_2,int *param_3)

{
  undefined1 *_Memory;
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  SCStr *pSVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_690;
  undefined4 local_68c;
  undefined1 local_688 [4];
  SCStr local_684 [4];
  undefined1 *local_680;
  int local_67c;
  undefined4 local_678;
  char *local_674;
  undefined1 *local_670;
  char *local_66c;
  void *local_668;
  undefined1 *puStack_664;
  undefined4 local_660;
  undefined1 local_65c [1032];
  uint local_254;
  uint local_8;
  
  puStack_664 = (undefined1 *)(LAB_117a1893);
  local_668 = (void *)(ExceptionList);
  local_8 = (uint)(DAT_12126b84 ^ (uint)local_65c);
  ExceptionList = (void *)(&local_668);
  local_660 = (undefined4)(0);
  iVar3 = (int)((**(code **)(*param_1 + 0xe0))(local_8));
  if (iVar3 != 0) {
    pcVar8 = (char *)((char *)0x0);
    local_678 = (undefined4)((**(code **)(*param_1 + 0xe4))());
    local_67c = (int)(iVar3);
    thunk_FUN_1113ecc0(&local_690,"r:EnqueuedTransportURIMetaData");
    thunk_FUN_1113eda0(&local_680,&DAT_1196536c);
    *(unsigned char *)((char *)&local_660 + 0) = 1;
    thunk_FUN_11255220();
    *(unsigned char *)((char *)&local_660 + 0) = 2;
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if (local_680 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(local_680);
    }
    cVar2 = (char)(thunk_FUN_112580d0(puVar6));
    if ((cVar2 == '\0') || (pcVar8 = (char *)(local_254 >> 8), pcVar8 == (char *)0x0)) {
      thunk_FUN_1113eda0(&local_670,"CurrentTrackURI");
      *(unsigned char *)((char *)&local_660 + 0) = 3;
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if (local_670 != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(local_670);
      }
      thunk_FUN_111d2980(puVar6);
      cVar2 = (char)(thunk_FUN_111e05f0(&local_66c,0,1));
      puVar6 = (undefined1 *)(local_670);
      if (cVar2 != '\0') {
        pcVar8 = (char *)(local_66c);
      }
      *(unsigned char *)((char *)&local_660 + 0) = 4;
      if ((local_670 != (undefined1 *)0x0) &&
         (_Memory = local_670 + -0x10, *(int *)(local_670 + -0x10) < 0xffff)) {
        iVar3 = (int)(thunk_FUN_1123fcd0(_Memory));
        if (iVar3 == 0) {
          *(undefined4 *)(puVar6 + -8) = 0;
          *(undefined4 *)(puVar6 + -0xc) = 0;
          thunk_FUN_113cfb70(puVar6,*(undefined4 *)(puVar6 + -4));
          free(_Memory);
        }
      }
      *(unsigned char *)((char *)&local_660 + 0) = 2;
    }
    ((Stub_SCStr *)((SCStr *)&local_674))->int_allocRep("other");
    *(unsigned char *)((char *)&local_660 + 0) = 5;
    cVar2 = (char)(thunk_FUN_110bb5f0(local_678));
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(local_688,"CurrentTrackMetaData"));
      local_68c = (undefined4)(puVar4[1]);
      local_690 = (undefined4)(*puVar4);
      thunk_FUN_1113eda0(&local_66c,"upnp:class");
      *(unsigned char *)((char *)&local_660 + 0) = 6;
      pcVar7 = (char *)("");
      if (local_66c != (char *)0x0) {
        pcVar7 = (char *)(local_66c);
      }
      ((Stub_SCStr *)(local_684))->int_allocRep(pcVar7);
      *(unsigned char *)((char *)&local_660 + 0) = 7;
      pSVar5 = (SCStr *)((SCStr *)thunk_FUN_10560940(&local_670,local_684));
      *(unsigned char *)((char *)&local_660 + 0) = 8;
      if (pSVar5 != (SCStr *)&local_674) {
        ((Stub_SCStr *)((SCStr *)&local_674))->int_release();
        local_674 = (char *)(*(char **)pSVar5);
        ((Stub_SCStr *)((SCStr *)&local_674))->int_addref();
      }
      *(unsigned char *)((char *)&local_660 + 0) = 9;
      ((Stub_SCStr *)((SCStr *)&local_670))->int_release();
      local_670 = (undefined1 *)((undefined1 *)0x0);
      *(unsigned char *)((char *)&local_660 + 0) = 10;
      ((Stub_SCStr *)(local_684))->int_release();
      *(unsigned char *)((char *)&local_660 + 0) = 0xb;
      if ((local_66c != (char *)0x0) && (*(int *)(local_66c + -0x10) < 0xffff)) {
        iVar3 = (int)(thunk_FUN_1123fcd0(local_66c + -0x10));
        if (iVar3 == 0) {
          uVar1 = (undefined4)(*(undefined4 *)(local_66c + -4));
          local_66c[-0xffffffff00000008] = '\0';
          local_66c[-0xffffffff00000007] = '\0';
          local_66c[-0xffffffff00000006] = '\0';
          local_66c[-0xffffffff00000005] = '\0';
          local_66c[-0xffffffff0000000c] = '\0';
          local_66c[-0xffffffff0000000b] = '\0';
          local_66c[-0xffffffff0000000a] = '\0';
          local_66c[-0xffffffff00000009] = '\0';
          thunk_FUN_113cfb70(local_66c,uVar1);
          free(local_66c + -0x10);
        }
      }
      *(unsigned char *)((char *)&local_660 + 0) = 5;
    }
    ((Stub_SCStr *)((SCStr *)&local_66c))->int_allocRep("serviceId");
    *(unsigned char *)((char *)&local_660 + 0) = 0xc;
    (**(code **)(*param_2 + 0x28))(&local_66c,pcVar8);
    *(unsigned char *)((char *)&local_660 + 0) = 0xd;
    ((Stub_SCStr *)((SCStr *)&local_66c))->int_release();
    *(unsigned char *)((char *)&local_660 + 0) = 5;
    pcVar8 = (char *)("");
    if (local_674 != (char *)0x0) {
      pcVar8 = (char *)(local_674);
    }
    ((Stub_SCStr *)((SCStr *)&local_66c))->int_allocRep(pcVar8);
    *(unsigned char *)((char *)&local_660 + 0) = 0xe;
    ((Stub_SCStr *)((SCStr *)&local_670))->int_allocRep("mediaCategory");
    *(unsigned char *)((char *)&local_660 + 0) = 0xf;
    (**(code **)(*param_2 + 0x1c))(&local_670,&local_66c);
    *(unsigned char *)((char *)&local_660 + 0) = 0x10;
    ((Stub_SCStr *)((SCStr *)&local_670))->int_release();
    local_670 = (undefined1 *)((undefined1 *)0x0);
    *(unsigned char *)((char *)&local_660 + 0) = 0x11;
    ((Stub_SCStr *)((SCStr *)&local_66c))->int_release();
    *(unsigned char *)((char *)&local_660 + 0) = 0x12;
    ((Stub_SCStr *)((SCStr *)&local_674))->int_release();
    local_674 = (char *)((char *)0x0);
    thunk_FUN_11255560();
    local_660 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_660 + 1)) << 8 | (uint)(0x13)));
    if ((local_680 != (undefined1 *)0x0) && (*(int *)(local_680 + -0x10) < 0xffff)) {
      iVar3 = (int)(thunk_FUN_1123fcd0(local_680 + -0x10));
      if (iVar3 == 0) {
        *(undefined4 *)(local_680 + -8) = 0;
        *(undefined4 *)(local_680 + -0xc) = 0;
        thunk_FUN_113cfb70(local_680,*(undefined4 *)(local_680 + -4));
        free(local_680 + -0x10);
      }
    }
  }
  local_660 = (undefined4)(0x14);
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }
  ExceptionList = (void *)(local_668);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1105ced0; body size 85 bytes.
#line 1 "ENTRY_1105ced0"

char * FUN_1105ced0(undefined4 param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)("NORMAL");
  switch(param_1) {
  case 1:
    pcVar1 = (char *)("SHUFFLE");
    if (param_2 == '\0') {
      pcVar1 = (char *)("REPEAT_ALL");
    }
    return (char *)(pcVar1);
  case 2:
    pcVar1 = (char *)("SHUFFLE_REPEAT_ONE");
    if (param_2 == '\0') {
      pcVar1 = (char *)("REPEAT_ONE");
    }
    break;
  case 0xffffffff:
  case 0:
    pcVar1 = (char *)("SHUFFLE_NOREPEAT");
    if (param_2 == '\0') {
      pcVar1 = (char *)("NORMAL");
    }
    return (char *)(pcVar1);
  }
  return (char *)(pcVar1);
}


// Reference entry 1105cf60; body size 68 bytes.
#line 1 "ENTRY_1105cf60"

undefined4 FUN_1105cf60(uint param_1,undefined4 param_2)

{
  undefined4 local_c;
  uint local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    local_8 = (uint)(param_1);
    local_4 = (undefined4)(param_2);
    param_1 = (uint)(param_1 & 0xffffff00);
    local_c = (undefined4)(0);
    thunk_FUN_11056de0(&param_1,&local_c);
    return (undefined4)(local_c);
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 1105cfc0; body size 68 bytes.
#line 1 "ENTRY_1105cfc0"

uint FUN_1105cfc0(uint param_1,undefined4 param_2)

{
  undefined4 local_c;
  uint local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    local_8 = (uint)(param_1);
    local_4 = (undefined4)(param_2);
    param_1 = (uint)(param_1 & 0xffffff00);
    local_c = (undefined4)(0);
    thunk_FUN_11056de0(&param_1,&local_c);
    return (uint)(param_1 & 0xff);
  }
  return (uint)(0);
}


// Reference entry 1105d150; body size 67 bytes.
#line 1 "ENTRY_1105d150"

uint __fastcall FUN_1105d150(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 == 0) {
    return (uint)(0);
  }
  (**(code **)(*param_1 + 0xe4))();
  uVar2 = (uint)(thunk_FUN_11057030());
  return (uint)(((uint)((uint3)(uVar2 >> 0xb)) << 8 | (uint)((char)(uVar2 >> 3))) & 0xffffff01);
}


// Reference entry 1105d1b0; body size 67 bytes.
#line 1 "ENTRY_1105d1b0"

bool __fastcall FUN_1105d1b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 == 0) {
    return (bool)(false);
  }
  (**(code **)(*param_1 + 0xe4))();
  uVar2 = (uint)(thunk_FUN_11057030());
  return (bool)((uVar2 & 6) != 0);
}


// Reference entry 1105d210; body size 129 bytes.
#line 1 "ENTRY_1105d210"

uint __thiscall FUN_1105d210(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (param_2 == -1)) {
    return (uint)(1);
  }
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    uVar2 = (uint)(thunk_FUN_11057030());
    if (param_2 == 1) {
      return (uint)(uVar2 >> 1 & 1);
    }
    if (param_2 == 2) {
      return (uint)(uVar2 >> 2 & 1);
    }
  }
  return (uint)(0);
}


// Reference entry 1105d2c0; body size 64 bytes.
#line 1 "ENTRY_1105d2c0"

uint __fastcall FUN_1105d2c0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 == 0) {
    return (uint)(0);
  }
  (**(code **)(*param_1 + 0xe4))();
  uVar2 = (uint)(thunk_FUN_11057030());
  return (uint)(uVar2 & 0xffffff01);
}


// Reference entry 1105d310; body size 64 bytes.
#line 1 "ENTRY_1105d310"

undefined4 __fastcall FUN_1105d310(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar2 != 0) {
    uVar3 = (undefined4)((**(code **)(*param_1 + 0xe4))());
    cVar1 = (char)(thunk_FUN_110bb5f0(uVar3));
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(*param_1 + 0xcc))());
      if (0 < iVar2) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1105d540; body size 262 bytes.
#line 1 "ENTRY_1105d540"

void __thiscall FUN_1105d540(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  SCLibrary *this_;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *local_20;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a197d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  piVar3 = (int *)((int *)0x0);
  if ((int *)(param_1 + -8) != (int *)0x0) {
    piVar3 = (int *)((int *)(**(code **)(*(int *)(param_1 + -8) + 0xc))
                              (DAT_12126b84 ^ (uint)&stack0xfffffffc));
    (**(code **)(*piVar3 + 4))();
  }
  piVar1 = (int *)(param_3);
  local_8 = (undefined4)(0);
  thunk_FUN_101bbd90(param_2,param_3);
  if ((short)piVar1 == 0) {
    puVar4 = (undefined4 *)(&param_3);
    this_ = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
    uVar2 = (undefined4)(((Stub_SCLibrary *)(this_))->getSCHousehold());
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    thunk_FUN_101bf370(uVar2);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))(puVar4);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    if (local_20 != (int *)0x0) {
      thunk_FUN_112af4e0("SaveHousehold",2,"saving household from transport op");
      (**(code **)(*local_20 + 0x60))();
    }
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))();
    }
  }
  else if ((*(char *)(param_1 + 0x4c) != '\0') && (*(int **)(param_1 + 0x44) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x88))(1);
  }
  local_8 = (undefined4)(6);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1105d8e0; body size 103 bytes.
#line 1 "ENTRY_1105d8e0"

undefined4 * __thiscall FUN_1105d8e0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 1105dae0; body size 82 bytes.
#line 1 "ENTRY_1105dae0"

void FUN_1105dae0(undefined4 param_1,int *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a1a40);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    param_1 = (undefined4)(0);
    (**(code **)(*param_2 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1105db50; body size 167 bytes.
#line 1 "ENTRY_1105db50"

void __thiscall FUN_1105db50(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  SCStr aSStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a1a7d);
  local_10 = (void *)(ExceptionList);
  uStack_24 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  param_1[0x14] = -1;
  if (param_2 != '\0') {
    uStack_28 = (undefined4)(0x1105db8c);
    piVar1 = (int *)((int *)(**(code **)(*param_1 + 0xd8))());
    piVar2 = (int *)((int *)0x0);
    if (piVar1 != (int *)0x0) {
      uStack_28 = (undefined4)(0x1105dba1);
      piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
      uStack_28 = (undefined4)(0x1105dbad);
      (**(code **)(*piVar2 + 4))();
    }
    local_8 = (undefined4)(0);
    if (piVar1 != (int *)0x0) {
      uStack_28 = (undefined4)(0);
      uStack_2c = (undefined4)(0);
      uStack_30 = (undefined4)(0);
      ((Stub_SCStr *)(aSStack_34))->int_allocRep("SCINowPlaying:onMusicChanged");
      thunk_FUN_10f421e0();
    }
    local_8 = (undefined4)(1);
    if (piVar2 != (int *)0x0) {
      uStack_28 = (undefined4)(0x1105dbe4);
      (**(code **)(*piVar2 + 8))();
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1105dc20; body size 69 bytes.
#line 1 "ENTRY_1105dc20"

undefined4 __thiscall FUN_1105dc20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  thunk_FUN_1124ffa0("CrossfadeMode",0);
  thunk_FUN_1124f3c0(param_3);
  return (undefined4)(param_1);
}


// Reference entry 1105dc80; body size 69 bytes.
#line 1 "ENTRY_1105dc80"

undefined4 __thiscall FUN_1105dc80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  thunk_FUN_1124ffa0("InstanceID",0);
  thunk_FUN_1124f350(param_2);
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("Duration",0));
  (**(code **)(*piVar1 + 0xc))(param_3);
  return (undefined4)(param_1);
}


// Reference entry 1105dd50; body size 134 bytes.
#line 1 "ENTRY_1105dd50"

undefined4 __fastcall FUN_1105dd50(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 auStack_18 [8];
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = (undefined4)(thunk_FUN_1105bf70());
  iStack_10 = (int)(thunk_FUN_1105a9a0());
  if (iStack_10 != 0) {
    uStack_c = (undefined4)((**(code **)(*param_1 + 0xe4))());
    puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1113ecc0(auStack_18,"CurrentTrackMetaData"));
    uStack_4 = (undefined4)(puVar2[1]);
    uStack_8 = (undefined4)(*puVar2);
    puVar3 = (uint *)((uint *)thunk_FUN_110b7de0(auStack_18));
    if (((*puVar3 & 0xffff) == 0x16) || ((*puVar3 & 0xffff) == 0)) {
      uVar1 = (undefined4)((**(code **)(*param_1 + 0xf0))());
      return (undefined4)(uVar1);
    }
  }
  return (undefined4)(uVar1);
}


// Reference entry 1105e210; body size 98 bytes.
#line 1 "ENTRY_1105e210"

undefined4 __thiscall FUN_1105e210(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    cVar1 = (char)((**(code **)(*param_1 + 0x30))());
    if (cVar1 != '\0') {
      iVar2 = (int)(thunk_FUN_1113eb00("CurrentTrackDuration"));
      if (param_2 * 1000 < iVar2) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1105e290; body size 67 bytes.
#line 1 "ENTRY_1105e290"

uint __fastcall FUN_1105e290(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    uVar2 = (uint)(thunk_FUN_11056ec0());
    return (uint)(((uint)((uint3)(uVar2 >> 0xd)) << 8 | (uint)((char)(uVar2 >> 5))) & 0xffffff01);
  }
  return (uint)(0);
}


// Reference entry 1105e2f0; body size 87 bytes.
#line 1 "ENTRY_1105e2f0"

uint __fastcall FUN_1105e2f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  uVar2 = (uint)(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    uVar2 = (uint)(thunk_FUN_11056ec0());
    uVar2 = (uint)(uVar2 >> 3);
    if ((uVar2 & 1) == 0) {
      uVar2 = (uint)(thunk_FUN_11056ec0());
      uVar2 = (uint)(uVar2 >> 2);
      if ((uVar2 & 1) == 0) goto LAB_1105e33f;
    }
    return (uint)(((uint)((int3)(uVar2 >> 8)) << 8 | (uint)(1)));
  }
LAB_1105e33f:
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 1105e360; body size 67 bytes.
#line 1 "ENTRY_1105e360"

uint __fastcall FUN_1105e360(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    uVar2 = (uint)(thunk_FUN_11056ec0());
    return (uint)(((uint)((uint3)(uVar2 >> 0xe)) << 8 | (uint)((char)(uVar2 >> 6))) & 0xffffff01);
  }
  return (uint)(0);
}


// Reference entry 1105e3f0; body size 89 bytes.
#line 1 "ENTRY_1105e3f0"

undefined4 __fastcall FUN_1105e3f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    uVar2 = (uint)(thunk_FUN_11056ec0());
    if ((uVar2 >> 4 & 1) != 0) {
      iVar1 = (int)(thunk_FUN_1113eb00("CurrentTrackDuration"));
      if (0 < iVar1) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1105e910; body size 114 bytes.
#line 1 "ENTRY_1105e910"

undefined4 __thiscall FUN_1105e910(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iStack_8;
  undefined4 uStack_4;
  
  iStack_8 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iStack_8 != 0) {
    uStack_4 = (undefined4)((**(code **)(*param_1 + 0xe4))());
    cVar1 = (char)(thunk_FUN_1105e660(&iStack_8));
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x30))());
      if (cVar1 != '\0') {
        iVar2 = (int)(thunk_FUN_1113eb00("CurrentTrackDuration"));
        if (param_2 * 1000 < iVar2) {
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1105e9a0; body size 83 bytes.
#line 1 "ENTRY_1105e9a0"

uint __fastcall FUN_1105e9a0(int *param_1)

{
  uint uVar1;
  int iStack_8;
  undefined4 uStack_4;
  
  iStack_8 = (int)((**(code **)(*param_1 + 0xe0))());
  uVar1 = (uint)(0);
  if (iStack_8 != 0) {
    uStack_4 = (undefined4)((**(code **)(*param_1 + 0xe4))());
    uVar1 = (uint)(thunk_FUN_1105e660(&iStack_8));
    if ((char)uVar1 == '\0') {
      uVar1 = (uint)(thunk_FUN_11056ec0());
      return (uint)(((uint)((uint3)(uVar1 >> 0xd)) << 8 | (uint)((char)(uVar1 >> 5))) & 0xffffff01);
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 1105ea10; body size 105 bytes.
#line 1 "ENTRY_1105ea10"

undefined4 __fastcall FUN_1105ea10(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  (**(code **)(*param_1 + 0xe4))();
  iVar1 = (int)(thunk_FUN_1113eb00("r:DirectControlIsSuspended"));
  if (((iVar1 == 0) && (uVar2 = thunk_FUN_11056ec0(), (uVar2 >> 3 & 1) == 0)) &&
     (uVar2 = thunk_FUN_11056ec0(), (uVar2 >> 2 & 1) == 0)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1105eaa0; body size 83 bytes.
#line 1 "ENTRY_1105eaa0"

uint __fastcall FUN_1105eaa0(int *param_1)

{
  uint uVar1;
  int iStack_8;
  undefined4 uStack_4;
  
  iStack_8 = (int)((**(code **)(*param_1 + 0xe0))());
  uVar1 = (uint)(0);
  if (iStack_8 != 0) {
    uStack_4 = (undefined4)((**(code **)(*param_1 + 0xe4))());
    uVar1 = (uint)(thunk_FUN_1105e660(&iStack_8));
    if ((char)uVar1 == '\0') {
      uVar1 = (uint)(thunk_FUN_11056ec0());
      return (uint)(((uint)((uint3)(uVar1 >> 0xe)) << 8 | (uint)((char)(uVar1 >> 6))) & 0xffffff01);
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 1105eb40; body size 105 bytes.
#line 1 "ENTRY_1105eb40"

undefined4 __fastcall FUN_1105eb40(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iStack_8;
  undefined4 uStack_4;
  
  iStack_8 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iStack_8 != 0) {
    uStack_4 = (undefined4)((**(code **)(*param_1 + 0xe4))());
    cVar1 = (char)(thunk_FUN_1105e660(&iStack_8));
    if (cVar1 == '\0') {
      uVar2 = (uint)(thunk_FUN_11056ec0());
      if ((uVar2 >> 4 & 1) != 0) {
        iVar3 = (int)(thunk_FUN_1113eb00("CurrentTrackDuration"));
        if (0 < iVar3) {
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1105f050; body size 67 bytes.
#line 1 "ENTRY_1105f050"

uint __fastcall FUN_1105f050(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe8))();
    uVar2 = (uint)(thunk_FUN_11056ec0());
    return (uint)(((uint)((uint3)(uVar2 >> 0xd)) << 8 | (uint)((char)(uVar2 >> 5))) & 0xffffff01);
  }
  return (uint)(0);
}


// Reference entry 1105f0b0; body size 67 bytes.
#line 1 "ENTRY_1105f0b0"

uint __fastcall FUN_1105f0b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe8))();
    uVar2 = (uint)(thunk_FUN_11056ec0());
    return (uint)(((uint)((uint3)(uVar2 >> 0xe)) << 8 | (uint)((char)(uVar2 >> 6))) & 0xffffff01);
  }
  return (uint)(0);
}


// Reference entry 1105f110; body size 89 bytes.
#line 1 "ENTRY_1105f110"

undefined4 __fastcall FUN_1105f110(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((**(code **)(*param_1 + 0xe0))());
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe4))();
    uVar2 = (uint)(thunk_FUN_11056ec0());
    if ((uVar2 >> 4 & 1) != 0) {
      iVar1 = (int)(thunk_FUN_1113eb00("CurrentTrackDuration"));
      if (0 < iVar1) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1105f190; body size 114 bytes.
#line 1 "ENTRY_1105f190"

undefined4 * __thiscall FUN_1105f190(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a1d8d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRefBase_vftable);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1105f750; body size 76 bytes.
#line 1 "ENTRY_1105f750"

void __fastcall FUN_1105f750(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a1eb0);
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


// Reference entry 1105f990; body size 76 bytes.
#line 1 "ENTRY_1105f990"

void __fastcall FUN_1105f990(int param_1)

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


// Reference entry 1105f9f0; body size 149 bytes.
#line 1 "ENTRY_1105f9f0"

void __thiscall FUN_1105f9f0(int param_1,int *param_2,undefined4 param_3)

{
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


// Reference entry 110604e0; body size 80 bytes.
#line 1 "ENTRY_110604e0"

undefined4 __thiscall
FUN_110604e0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  (**(code **)(*param_1 + 0x48))
            (param_2,param_3 / 0xe10,(param_3 % 0xe10) / 0x3c,(param_3 % 0xe10) % 0x3c,param_4,
             param_5);
  return (undefined4)(param_2);
}


// Reference entry 11060570; body size 143 bytes.
#line 1 "ENTRY_11060570"

char * __stdcall FUN_11060570(char *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a2166);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(param_2);
  }
  thunk_FUN_1109aba0(0x20c9,&DAT_1188465c,puVar2,uVar1);
  ((Stub_SCStr *)(this_))->format(param_1);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  ExceptionList = (void *)(local_10);
  return (char *)(param_1);
}


// Reference entry 11060660; body size 165 bytes.
#line 1 "ENTRY_11060660"

char * __thiscall FUN_11060660(int *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a21c6);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  local_8 = (undefined4)(0);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x38))(&param_3,param_3,1,0,uVar1));
  local_8 = (undefined4)(1);
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)*puVar2);
  }
  thunk_FUN_1109aba0(0x23e8,&DAT_1188465c,puVar3);
  ((Stub_SCStr *)(this_))->format(param_2);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (char *)(param_2);
}


// Reference entry 11060890; body size 165 bytes.
#line 1 "ENTRY_11060890"

char * __thiscall FUN_11060890(int *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a2276);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  local_8 = (undefined4)(0);
  puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*param_1 + 0x38))(&param_3,param_3,2,0,uVar1));
  local_8 = (undefined4)(1);
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)((undefined1 *)*puVar2);
  }
  thunk_FUN_1109aba0(0x23e9,&DAT_1188465c,puVar3);
  ((Stub_SCStr *)(this_))->format(param_2);
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)&param_3))->int_release();
  ExceptionList = (void *)(local_10);
  return (char *)(param_2);
}


// Reference entry 110609b0; body size 128 bytes.
#line 1 "ENTRY_110609b0"

void __fastcall FUN_110609b0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a22bd);
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


// Reference entry 11060a50; body size 232 bytes.
#line 1 "ENTRY_11060a50"

void __thiscall FUN_11060a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a22fd);
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
    (**(code **)(*piVar1 + 0x3c))();
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


// Reference entry 11060b80; body size 103 bytes.
#line 1 "ENTRY_11060b80"

undefined4 * __thiscall FUN_11060b80(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIOpAVTransportGetRemainingSleepTimerDuration"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 11060c00; body size 233 bytes.
#line 1 "ENTRY_11060c00"

undefined4 * __thiscall FUN_11060c00(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  SCStr *this_;
  bool bVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_ = (SCStr *)(param_3);
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a233d);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCINowPlayingSleepTimer"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  else {
    thunk_FUN_11022490(&param_3,this_);
    local_8 = (undefined4)(0);
    if (param_3 != (SCStr *)0x0) {
      *param_2 = (undefined4)(param_3);
      ExceptionList = (void *)(local_10);
      return (undefined4 *)(param_2);
    }
    bVar1 = (bool)(((Stub_SCStr *)(this_))->op_eq("SCIObj"));
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


// Reference entry 11060d30; body size 103 bytes.
#line 1 "ENTRY_11060d30"

undefined4 * __thiscall FUN_11060d30(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIOpAVTransportGetRemainingSleepTimerDuration"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 11061520; body size 114 bytes.
#line 1 "ENTRY_11061520"

undefined4 * __thiscall FUN_11061520(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a242d);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRefBase_vftable);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 110615e0; body size 278 bytes.
#line 1 "ENTRY_110615e0"

undefined4 * __thiscall FUN_110615e0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a248b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRefBase_vftable;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&Ext_SCElapsedTimeMeasurement_vftable;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11061790; body size 292 bytes.
#line 1 "ENTRY_11061790"

undefined4 * __thiscall FUN_11061790(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a24eb);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&Ext_RControlAIOOpCB_vftable);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  *puVar1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRefBase_vftable;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&Ext_SCElapsedTimeMeasurement_vftable;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCOpAddTracksToQueue_vftable);
  *puVar1 = (undefined4)((uint)&Ext_SCOpAddTracksToQueue_vftable);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11061920; body size 260 bytes.
#line 1 "ENTRY_11061920"

void __fastcall FUN_11061920(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2520);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&Ext_SCIObj_vftable;
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11061a70; body size 76 bytes.
#line 1 "ENTRY_11061a70"

void __fastcall FUN_11061a70(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2550);
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


// Reference entry 11061c00; body size 76 bytes.
#line 1 "ENTRY_11061c00"

void __fastcall FUN_11061c00(int param_1)

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


// Reference entry 11061c60; body size 149 bytes.
#line 1 "ENTRY_11061c60"

void __thiscall FUN_11061c60(int param_1,int *param_2,undefined4 param_3)

{
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


// Reference entry 11061df0; body size 128 bytes.
#line 1 "ENTRY_11061df0"

void __fastcall FUN_11061df0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a25bd);
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


// Reference entry 11061e90; body size 232 bytes.
#line 1 "ENTRY_11061e90"

void __thiscall FUN_11061e90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a25fd);
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
    (**(code **)(*piVar1 + 0x40))();
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


// Reference entry 11061fc0; body size 103 bytes.
#line 1 "ENTRY_11061fc0"

undefined4 * __thiscall FUN_11061fc0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIOpAddTracksToQueue"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 110621c0; body size 278 bytes.
#line 1 "ENTRY_110621c0"

undefined4 * __thiscall FUN_110621c0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a269b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRefBase_vftable;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&Ext_SCElapsedTimeMeasurement_vftable;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11062550; body size 260 bytes.
#line 1 "ENTRY_11062550"

void __fastcall FUN_11062550(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a26d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&Ext_SCIObj_vftable;
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110626a0; body size 76 bytes.
#line 1 "ENTRY_110626a0"

void __fastcall FUN_110626a0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2700);
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


// Reference entry 11062830; body size 76 bytes.
#line 1 "ENTRY_11062830"

void __fastcall FUN_11062830(int param_1)

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


// Reference entry 11062890; body size 149 bytes.
#line 1 "ENTRY_11062890"

void __thiscall FUN_11062890(int param_1,int *param_2,undefined4 param_3)

{
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


// Reference entry 11062970; body size 640 bytes.
#line 1 "ENTRY_11062970"

undefined4 __thiscall FUN_11062970(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *local_2c;
  int *local_28;
  int *local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a27c5);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  pSVar3 = (SCLibrary *)(((Stub_SCLibrary *)(0))->getSingleton());
  piVar4 = (int *)((int *)(**(code **)(*(int *)pSVar3 + 0x18))(&local_28,uVar2));
  piVar1 = (int *)((int *)*piVar4);
  local_8 = (undefined4)(0);
  *piVar4 = (int)(0);
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x60))();
  }
  if ((param_1[0x12] == 0) || (param_1[0x12] == 3)) {
    piVar5 = (int *)((int *)createPropertyBag());
    piVar1 = (int *)((int *)*piVar5);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    *piVar5 = (int)(0);
    if (piVar1 == (int *)0x0) {
      piVar5 = (int *)((int *)0x0);
    }
    else {
      piVar5 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
    }
    *(unsigned char *)((char *)&local_8 + 0) = 7;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 6;
    ((Stub_SCStr *)((SCStr *)&local_18))->int_allocRep("");
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("universalSearchDefault");
    *(unsigned char *)((char *)&local_8 + 0) = 9;
    puVar6 = (undefined4 *)((undefined4 *)thunk_FUN_102d5690(&local_2c,&local_14,2,&local_18));
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    (**(code **)(*(int *)*puVar6 + 0x44))(&local_20);
    *(unsigned char *)((char *)&local_8 + 0) = 0xd;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 0xf;
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x11;
    ((Stub_SCStr *)((SCStr *)&local_18))->int_release();
    local_18 = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    pcVar8 = (char *)("");
    if (local_20 != (char *)0x0) {
      pcVar8 = (char *)(local_20);
    }
    ((Stub_SCStr *)((SCStr *)&local_24))->int_allocRep(pcVar8);
    *(unsigned char *)((char *)&local_8 + 0) = 0x12;
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_allocRep("searchDefault");
    *(unsigned char *)((char *)&local_8 + 0) = 0x13;
    (**(code **)(*piVar1 + 0x1c))(&local_1c,&local_24);
    *(unsigned char *)((char *)&local_8 + 0) = 0x14;
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    ((Stub_SCStr *)((SCStr *)&local_24))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    ((Stub_SCStr *)((SCStr *)&local_24))->int_allocRep("clear queue");
    *(unsigned char *)((char *)&local_8 + 0) = 0x16;
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_allocRep("eventType");
    *(unsigned char *)((char *)&local_8 + 0) = 0x17;
    (**(code **)(*piVar1 + 0x1c))(&local_1c,&local_24);
    *(unsigned char *)((char *)&local_8 + 0) = 0x18;
    ((Stub_SCStr *)((SCStr *)&local_1c))->int_release();
    local_1c = (undefined4)(0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x19;
    ((Stub_SCStr *)((SCStr *)&local_24))->int_release();
    *(unsigned char *)((char *)&local_8 + 0) = 0x10;
    thunk_FUN_10309500();
    thunk_FUN_1030a0d0("playmodel","playmodelEvent",piVar1,0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
    ((Stub_SCStr *)((SCStr *)&local_20))->int_release();
    local_20 = (char *)((char *)0x0);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1b;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
    *(unsigned char *)((char *)&local_8 + 0) = 2;
  }
  uVar7 = (undefined4)((**(code **)(*param_1 + 0x34))(param_2,0));
  local_8 = (undefined4)(0x1c);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(uVar7);
}


// Reference entry 11062d80; body size 128 bytes.
#line 1 "ENTRY_11062d80"

void __fastcall FUN_11062d80(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a281d);
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


// Reference entry 11062e20; body size 232 bytes.
#line 1 "ENTRY_11062e20"

void __thiscall FUN_11062e20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a285d);
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
    (**(code **)(*piVar1 + 0x38))();
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


// Reference entry 11062f50; body size 103 bytes.
#line 1 "ENTRY_11062f50"

undefined4 * __thiscall FUN_11062f50(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIOpGenericUpdateQueue"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 110634e0; body size 115 bytes.
#line 1 "ENTRY_110634e0"

undefined4 FUN_110634e0(undefined4 *param_1,int param_2,void *param_3,size_t param_4)

{
  void *pvVar1;
  
  if (param_3 == (void *)0x0) {
LAB_1106354c:
    return (undefined4)(*param_1);
  }
  if ((void *)*param_1 == (void *)0x0) {
    pvVar1 = (void *)(malloc(param_4));
    *param_1 = (undefined4)(pvVar1);
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,param_3,param_4);
      goto LAB_1106354c;
    }
  }
  else {
    pvVar1 = (void *)(realloc((void *)*param_1,param_2 + param_4));
    *param_1 = (undefined4)(pvVar1);
    if (pvVar1 != (void *)0x0) {
      memmove((void *)((int)pvVar1 + param_2),param_3,param_4);
      return (undefined4)(*param_1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 11063570; body size 380 bytes.
#line 1 "ENTRY_11063570"

void FUN_11063570(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_4;
  
  uVar5 = (uint)(param_1[0x18]);
  uVar3 = (uint)(uVar5);
  local_4 = (uint)(uVar5);
  if (((param_1[0x30] != 0) && (param_1[0x20] != 0)) && (iVar4 = param_1[0x16], iVar4 < 4)) {
    iVar2 = (int)(0);
    uVar6 = (uint)(0);
    if (iVar4 == 1) {
      iVar2 = (int)(7);
      uVar6 = (uint)(3);
    }
    else if (iVar4 == 2) {
      iVar2 = (int)(3);
      uVar6 = (uint)(1);
    }
    else if (iVar4 == 3) {
      iVar2 = (int)(1);
    }
    uVar1 = (uint)(param_1[0x1e]);
    uVar5 = (uint)(uVar5 - uVar6);
    uVar3 = (uint)(uVar1 - 1);
    if (uVar6 < (uVar1 - (iVar2 + uVar5)) - 1) {
      uVar3 = (uint)(iVar2 + uVar5);
    }
    local_4 = (uint)(0);
    if (-1 < (int)uVar5) {
      local_4 = (uint)(uVar5);
    }
    if (uVar1 <= uVar3) {
      uVar3 = (uint)(uVar1 - 1);
    }
    uVar5 = (uint)(param_1[0x18]);
  }
  if (local_4 < (uint)param_1[0x1e]) {
    if (param_1[0x1d] + uVar5 < (uint)param_1[0x2c]) {
      iVar4 = (int)(param_1[0x1f]);
      if ((uint)param_1[0x2b] < (uint)(param_1[0x1c] + param_1[0x1f])) {
        iVar4 = (int)(param_1[0x2b] - param_1[0x1c]);
      }
      if (0 < iVar4) {
        thunk_FUN_11039dd0(*param_1,param_1[0x19],local_4,(uVar3 - local_4) + 1,param_1[0x16]);
      }
    }
    uVar3 = (uint)(param_1[0x18]);
    param_1[0x1b] = param_1[0x19];
    if (param_1[0x20] == 0) {
      param_1[0x18] = uVar3 + 1;
      return;
    }
    uVar5 = (uint)(param_1[0x1e]);
    iVar4 = (int)(param_1[0x16]);
    do {
      switch(iVar4) {
      case 1:
        uVar3 = (uint)(uVar3 + 8);
        if (uVar5 <= uVar3) {
          uVar3 = (uint)(4);
          iVar4 = (int)(iVar4 + 1);
        }
        break;
      case 2:
        uVar3 = (uint)(uVar3 + 8);
        if (uVar5 <= uVar3) {
          uVar3 = (uint)(2);
          iVar4 = (int)(iVar4 + 1);
        }
        break;
      case 3:
        uVar3 = (uint)(uVar3 + 4);
        if (uVar5 <= uVar3) {
          uVar3 = (uint)(1);
          iVar4 = (int)(iVar4 + 1);
        }
        break;
      case 4:
        uVar3 = (uint)(uVar3 + 2);
        if (uVar5 <= uVar3) {
          uVar3 = (uint)(0);
          iVar4 = (int)(iVar4 + 1);
        }
      }
    } while (uVar5 - 1 < uVar3);
    param_1[0x18] = uVar3;
    param_1[0x16] = iVar4;
  }
  return;
}


// Reference entry 11063760; body size 179 bytes.
#line 1 "ENTRY_11063760"

void FUN_11063760(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0xa0) != 0) {
      *(undefined4 *)((int)param_1 + 0xa0) = 0;
    }
    if (*(void **)((int)param_1 + 100) != (void *)0x0) {
      free(*(void **)((int)param_1 + 100));
      *(undefined4 *)((int)param_1 + 100) = 0;
    }
    if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x28));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x20) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x20));
    }
    if (*(void **)((int)param_1 + 8) != (void *)0x0) {
      free(*(void **)((int)param_1 + 8));
      *(undefined4 *)((int)param_1 + 8) = 0;
    }
    if (*(void **)((int)param_1 + 0x98) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x98));
      *(undefined4 *)((int)param_1 + 0x98) = 0;
    }
    if (*(void **)((int)param_1 + 0xb4) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0xb4));
      *(undefined4 *)((int)param_1 + 0xb4) = 0;
    }
    free(param_1);
  }
  return;
}


// Reference entry 11064630; body size 114 bytes.
#line 1 "ENTRY_11064630"

undefined4 * __thiscall FUN_11064630(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a28dd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRefBase_vftable);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 110646c0; body size 278 bytes.
#line 1 "ENTRY_110646c0"

undefined4 * __thiscall FUN_110646c0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a293b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRefBase_vftable;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&Ext_SCElapsedTimeMeasurement_vftable;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11064820; body size 246 bytes.
#line 1 "ENTRY_11064820"

undefined4 * __thiscall
FUN_11064820(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2996);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_11261e50(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_RMuseRateItemAIOOp_vftable);
  param_1[2] = (uint)&Ext_RMuseRateItemAIOOp_vftable;
  thunk_FUN_1124a200("application/json",0);
  param_1[0x188a] = (uint)&Ext_RHTTPDataIO_vftable;
  param_1[7] = (uint)&Ext_RMuseRateItemPostRequest_vftable;
  param_1[0x188a] = (uint)&Ext_RMuseRateItemPostRequest_vftable;
  param_1[0x188b] = 0;
  param_1[0x188c] = 0;
  param_1[0x188d] = 0;
  param_1[0x188e] = 0;
  param_1[0x188f] = 0;
  param_1[0x1890] = 0;
  param_1[0x1892] = 0;
  param_1[0x1893] = 0;
  param_1[0x1891] = (uint)&Ext_RControlAIOOpRef_vftable;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_11065370(param_2,param_3,param_4);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11064c80; body size 260 bytes.
#line 1 "ENTRY_11064c80"

void __fastcall FUN_11064c80(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2a70);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&Ext_SCIObj_vftable;
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11064dd0; body size 103 bytes.
#line 1 "ENTRY_11064dd0"

void __fastcall FUN_11064dd0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2aa0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_RMuseRateItemAIOOp_vftable);
  param_1[2] = (uint)&Ext_RMuseRateItemAIOOp_vftable;
  thunk_FUN_11065a60(uVar1);
  param_1[0x1891] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  thunk_FUN_11064e60();
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11064e60; body size 190 bytes.
#line 1 "ENTRY_11064e60"

void __fastcall FUN_11064e60(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a2ad0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_RMuseRateItemPostRequest_vftable);
  param_1[0x1883] = (uint)&Ext_RMuseRateItemPostRequest_vftable;
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x1887)))->int_release();
  param_1[0x1887] = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x1886)))->int_release();
  param_1[0x1886] = 0;
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x1885)))->int_release();
  param_1[0x1885] = 0;
  local_8 = (undefined4)(3);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0x1884)))->int_release();
  param_1[0x1884] = 0;
  thunk_FUN_1124a3e0(uVar1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11065010; body size 134 bytes.
#line 1 "ENTRY_11065010"

undefined4 * __thiscall FUN_11065010(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a2b00);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_RMuseRateItemAIOOp_vftable);
  param_1[2] = (uint)&Ext_RMuseRateItemAIOOp_vftable;
  thunk_FUN_11065a60(uVar1);
  param_1[0x1891] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  thunk_FUN_11064e60();
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6250);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11065130; body size 76 bytes.
#line 1 "ENTRY_11065130"

void __fastcall FUN_11065130(int param_1)

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


// Reference entry 11065190; body size 149 bytes.
#line 1 "ENTRY_11065190"

void __thiscall FUN_11065190(int param_1,int *param_2,undefined4 param_3)

{
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


// Reference entry 110659e0; body size 93 bytes.
#line 1 "ENTRY_110659e0"

undefined4 __thiscall FUN_110659e0(int param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x624c) = 0;
  if (*param_3 == 0) {
    iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x6248) + 0x448c));
    if (iVar1 != 200) {
      thunk_FUN_112af4e0("RateItem",2,"Failed to rate an item, response %d",iVar1);
      return (undefined4)(1);
    }
  }
  else {
    thunk_FUN_112af4e0("RateItem",2,"Failed to rate an item, op result %u",*param_3);
  }
  return (undefined4)(1);
}


// Reference entry 11065a60; body size 85 bytes.
#line 1 "ENTRY_11065a60"

void __fastcall FUN_11065a60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x624c) != 0) && (*(int **)(param_1 + 0x6248) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x6248) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6248));
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6248) = 0;
    *(undefined4 *)(param_1 + 0x624c) = 0;
  }
  return;
}


// Reference entry 11065ae0; body size 128 bytes.
#line 1 "ENTRY_11065ae0"

void __fastcall FUN_11065ae0(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2c8d);
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


// Reference entry 11065b80; body size 232 bytes.
#line 1 "ENTRY_11065b80"

void __thiscall FUN_11065b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2ccd);
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


// Reference entry 11065cb0; body size 103 bytes.
#line 1 "ENTRY_11065cb0"

undefined4 * __thiscall FUN_11065cb0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIOp"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 11065d90; body size 101 bytes.
#line 1 "ENTRY_11065d90"

undefined4 __thiscall FUN_11065d90(int param_1,void *param_2,uint param_3,size_t *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint _Size;
  
  uVar1 = (uint)(*(uint *)(param_1 + 0x14));
  if (uVar1 != 0) {
    uVar2 = (uint)(*(uint *)(param_1 + 0x18));
    if (param_2 == (void *)0x0) {
      if (uVar2 == 0) {
        return (undefined4)(1);
      }
    }
    else if (uVar2 <= uVar1) {
      _Size = (uint)(uVar1 - uVar2);
      if (param_3 < uVar1 - uVar2) {
        _Size = (uint)(param_3);
      }
      puVar3 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(param_1 + 0xc) != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0xc));
      }
      memmove(param_2,puVar3 + uVar2,_Size);
      *param_4 = (size_t)(_Size);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + _Size;
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14)) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 11065e30; body size 312 bytes.
#line 1 "ENTRY_11065e30"

void __fastcall FUN_11065e30(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2d17);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x4490));
  local_8 = (undefined4)(0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x622c) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x622c));
    }
    thunk_FUN_111c05a0(-(uint)(param_1 + 0x1c != 0) & param_1 + 0x6228U,param_1 + 0x1c,puVar5,10000,
                       2000,0,0);
    *puVar2 = (undefined4)((uint)&Ext_RHttpPostNoRedirectAIOOp_vftable);
    puVar2[0x18] = (uint)&Ext_RHttpPostNoRedirectAIOOp_vftable;
  }
  piVar6 = (int *)(*(int **)(param_1 + 0x6248));
  local_8 = (undefined4)(0xffffffff);
  if (piVar6 != (int *)0x0) {
    if (*(int *)(param_1 + 0x624c) != 0) {
      (**(code **)(*piVar6 + 0x10))(uVar1);
      piVar6 = (int *)(*(int **)(param_1 + 0x6248));
    }
    if (piVar6 != (int *)0x0) {
      iVar3 = (int)(thunk_FUN_1123fcd0(piVar6 + 1));
      if (iVar3 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x624c) = 0;
  }
  *(undefined4 **)(param_1 + 0x6248) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_1123fce0(puVar2 + 1);
    if (*(int **)(param_1 + 0x6248) != (int *)0x0) {
      uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0x6248) + 4))
                        (-(uint)(param_1 != 0) & param_1 + 8U,0));
      *(undefined4 *)(param_1 + 0x624c) = uVar4;
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110667a0; body size 229 bytes.
#line 1 "ENTRY_110667a0"

undefined4 FUN_110667a0(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_38;
  undefined4 *puStack_30;
  uint uStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a2f35);
  local_10 = (void *)(ExceptionList);
  uStack_2c = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puStack_30 = (undefined4 *)((undefined4 *)0x6d);
  uStack_38 = (undefined4)(0x110667d1);
  thunk_FUN_102e4c30();
  local_24 = (undefined4)(0);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *(unsigned short *)((char *)&local_8 + 1) = 0;
  puStack_30 = (undefined4 *)((undefined4 *)0x110667ee);
  ((Stub_SCStr *)((SCStr *)&local_24))->int_release();
  local_24 = (undefined4)(local_14);
  puStack_30 = (undefined4 *)((undefined4 *)0x110667fc);
  ((Stub_SCStr *)((SCStr *)&local_24))->int_addref();
  local_20 = (undefined4)(6);
  puStack_30 = (undefined4 *)(&DAT_11882ff0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  uStack_38 = (undefined4)(0x11066816);
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0());
  local_18 = (undefined1 *)((undefined1 *)&puStack_30);
  uStack_38 = (undefined4)(0x11066824);
  ((Stub_SCStr *)((SCStr *)&puStack_30))->int_allocRep(pcVar1);
  local_1c = (undefined1 *)((undefined1 *)&uStack_38);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((Stub_SCStr *)((SCStr *)&uStack_38))->SCStr((SCStr *)&local_24);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_110670b0(param_1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  puStack_30 = (undefined4 *)((undefined4 *)0x1106685d);
  ((Stub_SCStr *)((SCStr *)&local_24))->int_release();
  local_24 = (undefined4)(0);
  local_8 = (undefined4)(5);
  puStack_30 = (undefined4 *)((undefined4 *)0x11066873);
  ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 11066c80; body size 156 bytes.
#line 1 "ENTRY_11066c80"

undefined4 * __thiscall
FUN_11066c80(undefined4 *param_1,SCStr *param_2,SCStr *param_3,SCStr *param_4,undefined4 param_5)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a3003);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_SCBadgeResource_vftable);
  ((Stub_SCStr *)((SCStr *)(param_1 + 2)))->SCStr(param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  ((Stub_SCStr *)((SCStr *)(param_1 + 3)))->SCStr(param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  ((Stub_SCStr *)((SCStr *)(param_1 + 4)))->SCStr(param_4);
  param_1[5] = *(undefined4 *)(param_4 + 4);
  param_1[6] = param_5;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11066d80; body size 145 bytes.
#line 1 "ENTRY_11066d80"

void __fastcall FUN_11066d80(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a3030);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCBadgeResource_vftable);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11066e90; body size 166 bytes.
#line 1 "ENTRY_11066e90"

undefined4 * __thiscall FUN_11066e90(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a3060);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCBadgeResource_vftable);
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 4)))->int_release();
  param_1[4] = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 3)))->int_release();
  param_1[3] = 0;
  local_8 = (undefined4)(2);
  ((Stub_SCStr *)((SCStr *)(param_1 + 2)))->int_release();
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c,uVar1);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 110670b0; body size 234 bytes.
#line 1 "ENTRY_110670b0"

undefined4 * FUN_110670b0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a30cd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(1);
  pvVar2 = (void *)(operator_new(0x1c));
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    ((Stub_SCStr *)((SCStr *)&local_14))->int_allocRep("");
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    piVar3 = (int *)((int *)thunk_FUN_11066c80(&local_14,&stack0x00000010,&param_2,2));
  }
  local_8 = (undefined4)(4);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  local_8 = (undefined4)(0);
  if (pvVar2 != (void *)0x0) {
    local_8 = (undefined4)(5);
    ((Stub_SCStr *)((SCStr *)&local_14))->int_release();
    local_14 = (undefined4)(0);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((Stub_SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (undefined4)(0);
  local_8 = (undefined4)(7);
  ((Stub_SCStr *)((SCStr *)&stack0x00000010))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 110671e0; body size 140 bytes.
#line 1 "ENTRY_110671e0"

undefined4 * FUN_110671e0(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)(LAB_117a311c);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (int)(0);
  pvVar2 = (void *)(operator_new(0x1c));
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)thunk_FUN_11066c80(&stack0x00000008,&stack0x00000008,&DAT_121a07b0,1));
  }
  local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);
  *param_1 = (undefined4)(piVar3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(uVar1);
  }
  local_8 = (int)(2);
  ((Stub_SCStr *)((SCStr *)&stack0x00000008))->int_release();
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11067290; body size 103 bytes.
#line 1 "ENTRY_11067290"

undefined4 * __thiscall FUN_11067290(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIBadgeResource"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 11067460; body size 114 bytes.
#line 1 "ENTRY_11067460"

undefined4 * __thiscall FUN_11067460(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a31dd);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRefBase_vftable);
  local_8 = (undefined4)(0);
  param_1[1] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4,uVar1);
  }
  param_1[2] = 0;
  *param_1 = (undefined4)((uint)&Ext_RControlAIOOpRef_vftable);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11067520; body size 278 bytes.
#line 1 "ENTRY_11067520"

undefined4 * __thiscall FUN_11067520(undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a323b);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRefBase_vftable;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&Ext_SCElapsedTimeMeasurement_vftable;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 110676d0; body size 292 bytes.
#line 1 "ENTRY_110676d0"

undefined4 * __thiscall FUN_110676d0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a329b);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  param_1[1] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  puVar1 = (undefined4 *)(param_1 + 2);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar2);
  *puVar1 = (undefined4)((uint)&Ext_RControlAIOOpCB_vftable);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  *puVar1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRefBase_vftable;
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  param_1[6] = param_2;
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  param_1[7] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  *(undefined2 *)(param_1 + 9) = 1000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  param_1[0xd] = 0;
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[0xc] = (uint)&Ext_SCElapsedTimeMeasurement_vftable;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)((uint)&Ext_SCOpGetTrackPositionInfo_vftable);
  *puVar1 = (undefined4)((uint)&Ext_SCOpGetTrackPositionInfo_vftable);
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11067870; body size 260 bytes.
#line 1 "ENTRY_11067870"

void __fastcall FUN_11067870(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a32d0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SCOpImpl_vftable);
  param_1[2] = (uint)&Ext_SCOpImpl_vftable;
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if (piVar1 != (int *)0x0) {
      param_1[3] = 0;
      param_1[4] = 0;
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  param_1[0xc] = (uint)&Ext_SCIObjImpl_vftable;
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (uint)&Ext_SCIObj_vftable;
  local_8 = (undefined4)(0);
  ((Stub_SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = 0;
  local_8 = (undefined4)(1);
  ((Stub_SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = 0;
  param_1[5] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);
  local_8 = (undefined4)(2);
  if (piVar1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&Ext_SCIObjImpl_vftable);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&Ext_SCIObj_vftable);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110679c0; body size 76 bytes.
#line 1 "ENTRY_110679c0"

void __fastcall FUN_110679c0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a3300);
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


// Reference entry 11067b90; body size 76 bytes.
#line 1 "ENTRY_11067b90"

void __fastcall FUN_11067b90(int param_1)

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


// Reference entry 11067bf0; body size 149 bytes.
#line 1 "ENTRY_11067bf0"

void __thiscall FUN_11067bf0(int param_1,int *param_2,undefined4 param_3)

{
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


// Reference entry 11067e50; body size 128 bytes.
#line 1 "ENTRY_11067e50"

void __fastcall FUN_11067e50(int param_1)

{
  int *piVar1;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a336d);
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


// Reference entry 11067ef0; body size 232 bytes.
#line 1 "ENTRY_11067ef0"

void __thiscall FUN_11067ef0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a33ad);
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
    (**(code **)(*piVar1 + 0x44))();
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


// Reference entry 11068020; body size 103 bytes.
#line 1 "ENTRY_11068020"

undefined4 * __thiscall FUN_11068020(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIOpGetTrackPositionInfo"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 110680a0; body size 103 bytes.
#line 1 "ENTRY_110680a0"

undefined4 * __thiscall FUN_110680a0(int *param_1,undefined4 *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIOpGetTrackPositionInfo"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((Stub_SCStr *)(param_3))->op_eq("SCIObj"));
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


// Reference entry 11068e40; body size 92 bytes.
#line 1 "ENTRY_11068e40"

byte * FUN_11068e40(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  bVar1 = (byte)(param_2[-1]);
  pbVar3 = (byte *)(param_2);
  while ((pbVar2 = pbVar3 + -1, (bVar1 & 0xc0) == 0x80 && (param_1 < pbVar2))) {
    bVar1 = (byte)(pbVar3[-2]);
    pbVar3 = (byte *)(pbVar2);
  }
  if ((*pbVar2 & 0xc0) != 0x80) {
    if (pbVar2 + (char)((&DAT_119669a0)[*pbVar2] + '\x01') == param_2) {
      *param_2 = (byte)(0);
      return (byte *)(param_1);
    }
    *pbVar2 = (byte)(0);
    return (byte *)(param_1);
  }
  *param_1 = (byte)(0);
  return (byte *)(param_1);
}


// Reference entry 11069050; body size 150 bytes.
#line 1 "ENTRY_11069050"

undefined4 FUN_11069050(uint param_1)

{
  if (0x33ff < param_1) {
    if (param_1 < 0xa000) {
      return (undefined4)(((uint)((short)((uint)PTR_DAT_11966d78 >> 0x10)) << 16 | (uint)(*(undefined2 *)(PTR_DAT_11966d78 + param_1 * 2 + -0x6800))));
    }
    if (param_1 - 0xf900 < 0x200) {
      return (undefined4)(((uint)((short)((uint)PTR_DAT_11966d84 >> 0x10)) << 16 | (uint)(*(undefined2 *)(PTR_DAT_11966d84 + param_1 * 2 + -0x1f200))));
    }
    if (0x1ffff < param_1) {
      if (param_1 < 0x2a700) {
        return (undefined4)(((uint)((short)((uint)PTR_DAT_11966d90 >> 0x10)) << 16 | (uint)(*(undefined2 *)(PTR_DAT_11966d90 + param_1 * 2 + -0x40000))));
      }
      if (param_1 < 0x2b700) {
        return (undefined4)(((uint)((short)((uint)PTR_DAT_11966d9c >> 0x10)) << 16 | (uint)(*(undefined2 *)(PTR_DAT_11966d9c + param_1 * 2 + -0x54e00))));
      }
    }
    if (param_1 - 0x2f800 < 0x300) {
      return (undefined4)(((uint)((short)((uint)PTR_DAT_11966da8 >> 0x10)) << 16 | (uint)(*(undefined2 *)(PTR_DAT_11966da8 + param_1 * 2 + -0x5f000))));
    }
  }
  return (undefined4)(0xffff);
}


// Reference entry 11069340; body size 170 bytes.
#line 1 "ENTRY_11069340"

uint FUN_11069340(byte *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  uint local_4;
  
  if (*param_1 < 0x80) {
    local_4 = (uint)((uint)*param_1);
    param_1 = (byte *)(param_1 + 1);
  }
  else {
    thunk_FUN_110688f0(&param_1,&local_4);
  }
  uVar3 = (uint)(local_4 & 0xffffff00);
  if ((uVar3 == 0xff00) && (local_4 < 0xff5f)) {
    local_4 = (uint)((local_4 & 0xff) + 0x20);
  }
  if (local_4 < 0x100) {
    uVar1 = (uint)(0x41);
    do {
      uVar3 = (uint)(uVar1);
      if ((byte)(&DAT_11966c00)[local_4] <= (byte)(&DAT_11966c00)[uVar3]) {
        return (uint)(uVar3);
      }
      bVar4 = (byte)((char)uVar3 + 1);
      uVar1 = (uint)((uint)bVar4);
    } while (bVar4 < 0x5a);
  }
  else if (param_2 == 1) {
    uVar2 = (ushort)(thunk_FUN_11069050(local_4));
    uVar3 = (uint)((uint)uVar2);
    if (uVar2 != 0xffff) {
      uVar3 = (uint)(toupper((int)(char)*(&PTR_DAT_1211a5d8)[uVar3]));
      return (uint)(uVar3);
    }
  }
  return (uint)(((uint)((int3)(uVar3 >> 8)) << 8 | (uint)(0x5a)));
}


// Reference entry 1106a8d0; body size 99 bytes.
#line 1 "ENTRY_1106a8d0"

char * FUN_1106a8d0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_1 == (char *)0x0) || (param_3 == 0)) {
    return (char *)((char *)0x0);
  }
  if ((param_2 != (char *)0x0) && (param_3 != 1)) {
    pcVar3 = (char *)(param_1 + param_3 + -1);
    for (pcVar2 = (char *)(param_1); pcVar2 < pcVar3; pcVar2 = pcVar2 + 1) {
      cVar1 = (char)(*param_2);
      *pcVar2 = (char)(cVar1);
      if (cVar1 == '\0') {
        return (char *)(param_1);
      }
      param_2 = (char *)(param_2 + 1);
    }
    if (pcVar2 == (char *)(pcVar3)) {
      if (*param_2 == '\0') {
        *pcVar2 = (char)('\0');
        return (char *)(param_1);
      }
      thunk_FUN_11068e40(param_1,pcVar3);
    }
    return (char *)(param_1);
  }
  *param_1 = (char)('\0');
  return (char *)(param_1);
}


// Reference entry 1106b0f0; body size 119 bytes.
#line 1 "ENTRY_1106b0f0"

void FUN_1106b0f0(int *param_1,int *param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (int)(0);
  uVar2 = (uint)(0);
  if (param_4 != 0) {
    do {
      if (*(byte *)(iVar1 + param_3) == 0) break;
      uVar2 = (uint)(uVar2 + 1);
      iVar1 = (int)(iVar1 + 1 + (int)(char)PTR_DAT_1211a5d0[*(byte *)(iVar1 + param_3)]);
    } while (uVar2 < param_4);
  }
  uVar2 = (uint)(0);
  iVar3 = (int)(iVar1);
  if (param_5 != 0) {
    do {
      if (*(byte *)(iVar3 + param_3) == 0) break;
      uVar2 = (uint)(uVar2 + 1);
      iVar3 = (int)(iVar3 + 1 + (int)(char)PTR_DAT_1211a5d0[*(byte *)(iVar3 + param_3)]);
    } while (uVar2 < param_5);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = (int)(iVar1 + param_3);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(iVar3 + param_3);
  }
  return;
}


// Reference entry 1106b4a0; body size 67 bytes.
#line 1 "ENTRY_1106b4a0"

void __thiscall FUN_1106b4a0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 != *(int **)(param_1 + 8)) {
    iVar2 = (int)(*param_2);
    *piVar1 = (int)(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_1106b2c0(piVar1,param_2);
  return;
}


// Reference entry 1106d3a0; body size 477 bytes.
#line 1 "ENTRY_1106d3a0"

void __thiscall
FUN_1106d3a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a36e5);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_101ba530(param_2);
  thunk_FUN_101ba530(param_11);
  thunk_FUN_101ba530(param_3);
  thunk_FUN_101ba530(param_4);
  thunk_FUN_101ba530(param_5);
  local_18[1] = 0;
  local_8 = (undefined4)(0);
  if (local_18 + 1 != (int *)(param_1 + 0x14)) {
    iVar2 = (int)(*(int *)(param_1 + 0x14));
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
      if (iVar3 == 0) {
        *(undefined4 *)(iVar2 + -8) = 0;
        *(undefined4 *)(iVar2 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
        free((void *)(iVar2 + -0x10));
      }
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  piVar1 = (int *)((int *)(param_1 + 0x60));
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_101fda20(*piVar1,*(undefined4 *)(param_1 + 100),piVar1);
  piVar1 = (int *)((int *)*piVar1);
  *(int **)(param_1 + 100) = piVar1;
  if (piVar1 == *(int **)(param_1 + 0x68)) {
    thunk_FUN_1106b2c0(piVar1,param_6);
  }
  else {
    iVar2 = (int)(*param_6);
    *piVar1 = (int)(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 4;
  }
  thunk_FUN_101ba530(param_7);
  thunk_FUN_101ba530(param_9);
  thunk_FUN_101ba530(param_8);
  local_18[0] = 0;
  local_8 = (undefined4)(2);
  if (local_18 != (int *)(param_1 + 0x20)) {
    iVar2 = (int)(*(int *)(param_1 + 0x20));
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar2 + -0x10)));
      if (iVar3 == 0) {
        *(undefined4 *)(iVar2 + -8) = 0;
        *(undefined4 *)(iVar2 + -0xc) = 0;
        thunk_FUN_113cfb70(iVar2,*(undefined4 *)(iVar2 + -4));
        free((void *)(iVar2 + -0x10));
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_101ba530(param_10);
  thunk_FUN_101ba530(param_12);
  thunk_FUN_101ba530(param_13);
  thunk_FUN_101ba530(param_14);
  thunk_FUN_101ba530(param_15);
  thunk_FUN_1106f6e0();
  thunk_FUN_1106e590();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1106d600; body size 168 bytes.
#line 1 "ENTRY_1106d600"

void __stdcall FUN_1106d600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a374d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined4)(0);
  local_18 = (undefined4)(0);
  local_1c = (undefined4)(0);
  local_20 = (undefined4)(0);
  local_24 = (undefined4)(0);
  local_28 = (undefined4)(0);
  local_2c = (undefined4)(0);
  local_8 = (undefined4)(6);
  thunk_FUN_1106d3a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_2c,&local_28,
                     &local_24,&local_20,&local_1c,&local_18,&local_14);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1106d920; body size 1262 bytes.
#line 1 "ENTRY_1106d920"

void __fastcall FUN_1106d920(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = (int)(*param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  *param_1 = (int)(0);
  iVar1 = (int)(param_1[1]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[1] = 0;
  iVar1 = (int)(param_1[2]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[2] = 0;
  iVar1 = (int)(param_1[3]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[3] = 0;
  param_1[0x1b] = 0;
  iVar1 = (int)(param_1[4]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[4] = 0;
  iVar1 = (int)(param_1[5]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[5] = 0;
  iVar1 = (int)(param_1[6]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[6] = 0;
  iVar1 = (int)(param_1[7]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[7] = 0;
  iVar1 = (int)(param_1[8]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[8] = 0;
  iVar1 = (int)(param_1[9]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[9] = 0;
  iVar1 = (int)(param_1[10]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[10] = 0;
  iVar1 = (int)(param_1[0xb]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0xb] = 0;
  iVar1 = (int)(param_1[0xc]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0xc] = 0;
  iVar1 = (int)(param_1[0xd]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0xd] = 0;
  iVar1 = (int)(param_1[0xe]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0xe] = 0;
  iVar1 = (int)(param_1[0x11]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0x11] = 0;
  iVar1 = (int)(param_1[0x12]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0x12] = 0;
  iVar1 = (int)(param_1[0x13]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar1 = (int)(param_1[0xf]);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  param_1[0xf] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  piVar3 = (int *)(param_1 + 0x18);
  thunk_FUN_101fda20(*piVar3,param_1[0x19],piVar3);
  param_1[0x19] = *piVar3;
  return;
}


// Reference entry 1106df60; body size 260 bytes.
#line 1 "ENTRY_1106df60"

undefined4 FUN_1106df60(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_111a06b0(param_1));
  if (cVar1 != '\0') {
    cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0xc));
    if (cVar1 != '\0') {
      cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 8));
      if (cVar1 != '\0') {
        cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0x10));
        if (cVar1 != '\0') {
          cVar1 = (char)(thunk_FUN_1106e0b0(param_1));
          if (cVar1 != '\0') {
            cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0x18));
            if (cVar1 != '\0') {
              cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0x1c));
              if (cVar1 != '\0') {
                cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0x3c));
                if (cVar1 != '\0') {
                  cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0x24));
                  if (cVar1 != '\0') {
                    cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 4));
                    if (cVar1 != '\0') {
                      cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0x2c));
                      if (cVar1 != '\0') {
                        cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0x30));
                        if (cVar1 != '\0') {
                          cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0x34));
                          if (cVar1 != '\0') {
                            cVar1 = (char)(thunk_FUN_111a06b0(param_1 + 0x50));
                            if (cVar1 != '\0') {
                              return (undefined4)(1);
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
  }
  return (undefined4)(0);
}


// Reference entry 1106e590; body size 161 bytes.
#line 1 "ENTRY_1106e590"

void __fastcall FUN_1106e590(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 local_2ac [166];
  char local_14 [16];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_2ac);
  if (*(int *)(param_1 + 0x6c) == 0) {
    pcVar1 = (char *)(*(char **)(param_1 + 0x1c));
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      cVar2 = (char)(thunk_FUN_11245310(pcVar1,"flags",local_14,0x10));
      if (cVar2 != '\0') {
        iVar3 = (int)(atoi(local_14));
        *(int *)(param_1 + 0x6c) = iVar3;
      }
    }
    if (((*(int *)(param_1 + 0x6c) == 0) && (*(char **)(param_1 + 0xc) != (char *)0x0)) &&
       (**(char **)(param_1 + 0xc) != '\0')) {
      thunk_FUN_111cfd00();
      cVar2 = (char)(thunk_FUN_1106eda0(local_2ac));
      if (cVar2 != '\0') {
        *(undefined4 *)(param_1 + 0x6c) = local_2ac[0];
      }
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1106e690; body size 171 bytes.
#line 1 "ENTRY_1106e690"

void __thiscall FUN_1106e690(int param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_410 [3];
  undefined1 local_40d;
  int local_40c [258];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)auStack_410);
  *param_2 = (uint)(0);
  *param_3 = (undefined4)(0);
  uVar6 = (undefined4)(1);
  local_40d = (undefined1)(1);
  uVar5 = (undefined4)(0);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
  }
  piVar4 = (int *)(local_40c);
  thunk_FUN_111d2980(puVar2);
  cVar1 = (char)(thunk_FUN_111e05f0(piVar4,uVar5,uVar6));
  if (cVar1 != '\0') {
    uVar3 = (uint)(local_40c[0] << 8 | 7);
    *param_2 = (uint)(uVar3);
    puVar2 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c));
    }
    thunk_FUN_11200910(uVar3,puVar2,param_3,0);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1106e770; body size 175 bytes.
#line 1 "ENTRY_1106e770"

undefined4 __fastcall FUN_1106e770(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iStack_4;
  
  iStack_4 = (int)(param_1);
  thunk_FUN_110828b0();
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x10));
  }
  piVar3 = (int *)((int *)thunk_FUN_110935f0(puVar5,0));
  if (piVar3 != (int *)0x0) {
    iVar4 = (int)((**(code **)(*piVar3 + 0x54))());
    if (iVar4 == 1) {
      iVar4 = (int)((**(code **)(*piVar3 + 0x5c))());
      if (((*(ushort *)(iVar4 + 4) & 0x7f) - 1 & 0xfffffffe) == 6) {
        puVar5 = (undefined1 *)(&DAT_1186d2ee);
        if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
          puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x18));
        }
        uVar1 = (undefined1)(thunk_FUN_110db5f0());
        cVar2 = (char)(thunk_FUN_111f1980(puVar5,uVar1));
        if (cVar2 != '\0') {
          puVar5 = (undefined1 *)(&DAT_1186d2ee);
          if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
            puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x18));
          }
          uVar1 = (undefined1)(thunk_FUN_110db5f0());
          thunk_FUN_111cb020(puVar5,uVar1);
          thunk_FUN_111df3d0(&iStack_4);
          return (undefined4)(1);
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1106e850; body size 153 bytes.
#line 1 "ENTRY_1106e850"

undefined4 __thiscall FUN_1106e850(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a38dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if ((*(int *)(param_1 + 0x1c) != 0) &&
     (piVar2 = (int *)(*(int *)(param_1 + 0x1c) + -0x10), *piVar2 < 0xffff)) {
    thunk_FUN_1123fce0(piVar2);
  }
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  local_8 = (undefined4)(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10),iVar1);
  }
  local_8 = (undefined4)(0xffffffff);
  thunk_FUN_1106e910(param_2);
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_2);
}


// Reference entry 1106eda0; body size 183 bytes.
#line 1 "ENTRY_1106eda0"

undefined4 __fastcall FUN_1106eda0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iStack_4;
  
  iStack_4 = (int)(param_1);
  iVar3 = (int)(thunk_FUN_110828b0());
  if (iVar3 != 0) {
    puVar5 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0x10));
    }
    piVar4 = (int *)((int *)thunk_FUN_110935f0(puVar5,0));
    if (piVar4 != (int *)0x0) {
      iVar3 = (int)((**(code **)(*piVar4 + 0x54))());
      if (iVar3 == 1) {
        iVar3 = (int)((**(code **)(*piVar4 + 0x5c))());
        if (((*(ushort *)(iVar3 + 4) & 0x7f) - 1 & 0xfffffffe) == 6) {
          puVar5 = (undefined1 *)(&DAT_1186d2ee);
          if (*(undefined1 **)(param_1 + 0xc) != (undefined1 *)0x0) {
            puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0xc));
          }
          uVar1 = (undefined1)(thunk_FUN_110db5f0());
          cVar2 = (char)(thunk_FUN_111f1980(puVar5,uVar1));
          if (cVar2 != '\0') {
            puVar5 = (undefined1 *)(&DAT_1186d2ee);
            if (*(undefined1 **)(param_1 + 0xc) != (undefined1 *)0x0) {
              puVar5 = (undefined1 *)(*(undefined1 **)(param_1 + 0xc));
            }
            uVar1 = (undefined1)(thunk_FUN_110db5f0());
            thunk_FUN_111cb020(puVar5,uVar1);
            thunk_FUN_111df3d0(&iStack_4);
            return (undefined4)(1);
          }
        }
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 1106f2d0; body size 82 bytes.
#line 1 "ENTRY_1106f2d0"

void FUN_1106f2d0(void)

{
  undefined1 local_29c [664];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_29c);
  thunk_FUN_111cfd00();
  thunk_FUN_1106eda0(local_29c);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1106f380; body size 67 bytes.
#line 1 "ENTRY_1106f380"

void __thiscall FUN_1106f380(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 != *(int **)(param_1 + 8)) {
    iVar2 = (int)(*param_2);
    *piVar1 = (int)(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar2 + -0x10));
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_1106b2c0(piVar1,param_2);
  return;
}


// Reference entry 110709e0; body size 117 bytes.
#line 1 "ENTRY_110709e0"

void FUN_110709e0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a3d10);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
    local_8 = (undefined4)(0);
    if ((puVar1 != (undefined4 *)0x0) && (iVar4 = thunk_FUN_1123fcd0(puVar1 + 1,uVar3), iVar4 == 0))
    {
      (**(code **)*puVar1)(1);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11070a80; body size 117 bytes.
#line 1 "ENTRY_11070a80"

void FUN_11070a80(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a3d40);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
    local_8 = (undefined4)(0);
    if ((puVar1 != (undefined4 *)0x0) && (iVar4 = thunk_FUN_1123fcd0(puVar1 + 1,uVar3), iVar4 == 0))
    {
      (**(code **)*puVar1)(1);
    }
    ppvVar2 = (void **)(ExceptionList);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11070b20; body size 216 bytes.
#line 1 "ENTRY_11070b20"

int * __thiscall FUN_11070b20(undefined4 *param_1,int *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a3d7d);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_110723c0(local_1c,param_3));
  iVar6 = (int)(*(int *)(puVar4 + 1));
  uVar1 = (undefined8)(*puVar4);
  if ((*(char *)(iVar6 + 0xd) == '\0') && (*(uint *)(iVar6 + 0x10) <= *param_3)) {
    *param_2 = (int)(iVar6);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0xccccccc) {
    uVar2 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar5 = (undefined4 *)(operator_new(0x14));
    puVar5[4] = *param_3;
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar5 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    *(undefined2 *)(puVar5 + 3) = 0;
    iVar6 = (int)(thunk_FUN_1107c630(local_28,uStack_24,puVar5));
    *param_2 = (int)(iVar6);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar3);
}


// Reference entry 11070c30; body size 216 bytes.
#line 1 "ENTRY_11070c30"

int * __thiscall FUN_11070c30(undefined4 *param_1,int *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a3dbd);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_11072420(local_1c,param_3));
  iVar6 = (int)(*(int *)(puVar4 + 1));
  uVar1 = (undefined8)(*puVar4);
  if ((*(char *)(iVar6 + 0xd) == '\0') && (*(uint *)(iVar6 + 0x10) <= *param_3)) {
    *param_2 = (int)(iVar6);
    *(undefined1 *)(param_2 + 1) = 0;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
  if (param_1[1] != 0xccccccc) {
    uVar2 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar5 = (undefined4 *)(operator_new(0x14));
    puVar5[4] = *param_3;
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar5 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    *(undefined2 *)(puVar5 + 3) = 0;
    iVar6 = (int)(thunk_FUN_1107c8c0(local_28,uStack_24,puVar5));
    *param_2 = (int)(iVar6);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar3);
}


// Reference entry 11070d40; body size 270 bytes.
#line 1 "ENTRY_11070d40"

int * __thiscall FUN_11070d40(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a3e05);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar5 = (undefined8 *)((undefined8 *)thunk_FUN_110724f0(local_1c,param_3));
  iVar7 = (int)(*(int *)(puVar5 + 1));
  uVar1 = (undefined8)(*puVar5);
  if (*(char *)(iVar7 + 0xd) == '\0') {
    cVar3 = (char)(thunk_FUN_111a0940(iVar7 + 0x10));
    if (cVar3 == '\0') {
      *param_2 = (int)(iVar7);
      *(undefined1 *)(param_2 + 1) = 0;
      ExceptionList = (void *)(local_10);
      return (int *)(param_2);
    }
  }
  if (param_1[1] != 0xccccccc) {
    uVar2 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)(param_1);
    puVar6 = (undefined4 *)(operator_new(0x14));
    iVar7 = (int)(*param_3);
    local_8 = (undefined4)(1);
    puVar6[4] = iVar7;
    local_14 = (undefined4 *)(puVar6);
    if ((iVar7 != 0) && (*(int *)(iVar7 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar7 + -0x10));
    }
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar6 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar6[1] = uVar2;
    puVar6[2] = uVar2;
    *(undefined2 *)(puVar6 + 3) = 0;
    iVar7 = (int)(thunk_FUN_1107cde0(local_28,uStack_24,puVar6));
    *param_2 = (int)(iVar7);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar4);
}


// Reference entry 11070ea0; body size 270 bytes.
#line 1 "ENTRY_11070ea0"

int * __thiscall FUN_11070ea0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a3e45);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar5 = (undefined8 *)((undefined8 *)thunk_FUN_110724f0(local_1c,param_3));
  iVar7 = (int)(*(int *)(puVar5 + 1));
  uVar1 = (undefined8)(*puVar5);
  if (*(char *)(iVar7 + 0xd) == '\0') {
    cVar3 = (char)(thunk_FUN_111a0940(iVar7 + 0x10));
    if (cVar3 == '\0') {
      *param_2 = (int)(iVar7);
      *(undefined1 *)(param_2 + 1) = 0;
      ExceptionList = (void *)(local_10);
      return (int *)(param_2);
    }
  }
  if (param_1[1] != 0xccccccc) {
    uVar2 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)(param_1);
    puVar6 = (undefined4 *)(operator_new(0x14));
    iVar7 = (int)(*param_3);
    local_8 = (undefined4)(1);
    puVar6[4] = iVar7;
    local_14 = (undefined4 *)(puVar6);
    if ((iVar7 != 0) && (*(int *)(iVar7 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar7 + -0x10));
    }
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar6 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar6[1] = uVar2;
    puVar6[2] = uVar2;
    *(undefined2 *)(puVar6 + 3) = 0;
    iVar7 = (int)(thunk_FUN_1107cde0(local_28,uStack_24,puVar6));
    *param_2 = (int)(iVar7);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar4);
}


// Reference entry 11071280; body size 342 bytes.
#line 1 "ENTRY_11071280"

undefined4 * __thiscall FUN_11071280(int *param_1,void *param_2,undefined4 *param_3)

{
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
                    
    thunk_FUN_1107df30();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_110713cc:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_110713cc;
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_110713cc;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_110713c6;
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
LAB_110713c6:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 11071430; body size 342 bytes.
#line 1 "ENTRY_11071430"

undefined4 * __thiscall FUN_11071430(int *param_1,void *param_2,undefined4 *param_3)

{
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
                    
    thunk_FUN_1107df40();
  }
  uVar6 = (uint)(param_1[2] - iVar3 >> 2);
  uVar1 = (uint)(iVar4 + 1);
  if (0x3fffffff - (uVar6 >> 1) < uVar6) {
LAB_1107157c:
                    
    thunk_FUN_1012a2a0();
  }
  uVar6 = (uint)((uVar6 >> 1) + uVar6);
  uVar7 = (uint)(uVar1);
  if (uVar1 <= uVar6) {
    uVar7 = (uint)(uVar6);
  }
  if (0x3fffffff < uVar7) goto LAB_1107157c;
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
    if (uVar7 + 0x23 <= uVar7) goto LAB_1107157c;
    pvVar5 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar5 == (void *)0x0) goto LAB_11071576;
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
LAB_11071576:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar6);
  }
  *param_1 = (int)((int)_Dst);
  param_1[1] = (int)((int)_Dst + uVar1 * 4);
  param_1[2] = (int)(uVar7 + (int)_Dst);
  return (undefined4 *)(puVar2);
}


// Reference entry 110715e0; body size 549 bytes.
#line 1 "ENTRY_110715e0"

int * __thiscall FUN_110715e0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a3e7d);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(*param_1);
  iVar5 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar5 == 0x3fffffff) {
                    
    thunk_FUN_1107df50();
  }
  uVar1 = (uint)(iVar5 + 1);
  uVar7 = (uint)(param_1[2] - iVar3 >> 2);
  if (0x3fffffff - (uVar7 >> 1) < uVar7) {
LAB_110717fb:
                    
    thunk_FUN_1012a2a0();
  }
  uVar7 = (uint)((uVar7 >> 1) + uVar7);
  uVar10 = (uint)(uVar1);
  if (uVar1 <= uVar7) {
    uVar10 = (uint)(uVar7);
  }
  if (0x3fffffff < uVar10) goto LAB_110717fb;
  uVar7 = (uint)(uVar10 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      piVar8 = (int *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_110717fb;
    pvVar6 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar6 == (void *)0x0) goto LAB_110717f5;
    piVar8 = (int *)((int *)((int)pvVar6 + 0x23U & 0xffffffe0));
    piVar8[-1] = (int)pvVar6;
  }
  piVar2 = (int *)(piVar8 + ((int)param_2 - iVar3 >> 2));
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar2 != (int *)(param_3)) {
    iVar3 = (int)(*param_3);
    *piVar2 = (int)(iVar3);
    if (iVar3 != 0) {
      thunk_FUN_1123fce0(iVar3 + 4);
    }
  }
  piVar4 = (int *)((int *)param_1[1]);
  piVar11 = (int *)((int *)*param_1);
  if ((int *)(param_2) == piVar4) {
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar9 = (int *)(piVar8);
    for (; (int *)(piVar11) != piVar4; piVar11 = piVar11 + 1) {
      *piVar9 = (int)(0);
      if (piVar9 != (int *)(piVar11)) {
        iVar3 = (int)(*piVar11);
        *piVar9 = (int)(iVar3);
        if (iVar3 != 0) {
          thunk_FUN_1123fce0(iVar3 + 4);
        }
      }
      piVar9 = (int *)(piVar9 + 1);
    }
    thunk_FUN_110709e0(piVar9,piVar9,param_1);
  }
  else {
    thunk_FUN_1107d830(piVar11,param_2,piVar8);
    thunk_FUN_1107d830(param_2,param_1[1],piVar2 + 1);
  }
  if (*param_1 != 0) {
    thunk_FUN_110709e0(*param_1,param_1[1],param_1);
    iVar3 = (int)(*param_1);
    uVar7 = (uint)(param_1[2] - iVar3 & 0xfffffffc);
    iVar5 = (int)(iVar3);
    if (0xfff < uVar7) {
      iVar5 = (int)(*(int *)(iVar3 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iVar3 - iVar5) - 4U) {
LAB_110717f5:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar7);
  }
  *param_1 = (int)((int)piVar8);
  param_1[1] = (int)(piVar8 + uVar1);
  param_1[2] = (int)(piVar8 + uVar10);
  ExceptionList = (void *)(local_10);
  return (int *)(piVar2);
}


// Reference entry 110718c0; body size 549 bytes.
#line 1 "ENTRY_110718c0"

int * __thiscall FUN_110718c0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a3ebd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar3 = (int)(*param_1);
  iVar5 = (int)(param_1[1] - iVar3 >> 2);
  if (iVar5 == 0x3fffffff) {
                    
    thunk_FUN_1107df60();
  }
  uVar1 = (uint)(iVar5 + 1);
  uVar7 = (uint)(param_1[2] - iVar3 >> 2);
  if (0x3fffffff - (uVar7 >> 1) < uVar7) {
LAB_11071adb:
                    
    thunk_FUN_1012a2a0();
  }
  uVar7 = (uint)((uVar7 >> 1) + uVar7);
  uVar10 = (uint)(uVar1);
  if (uVar1 <= uVar7) {
    uVar10 = (uint)(uVar7);
  }
  if (0x3fffffff < uVar10) goto LAB_11071adb;
  uVar7 = (uint)(uVar10 * 4);
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      piVar8 = (int *)((int *)0x0);
    }
    else {
      piVar8 = (int *)(operator_new(uVar7));
    }
  }
  else {
    if (uVar7 + 0x23 <= uVar7) goto LAB_11071adb;
    pvVar6 = (void *)(operator_new(uVar7 + 0x23));
    if (pvVar6 == (void *)0x0) goto LAB_11071ad5;
    piVar8 = (int *)((int *)((int)pvVar6 + 0x23U & 0xffffffe0));
    piVar8[-1] = (int)pvVar6;
  }
  piVar2 = (int *)(piVar8 + ((int)param_2 - iVar3 >> 2));
  local_8 = (undefined4)(0);
  *piVar2 = (int)(0);
  if (piVar2 != (int *)(param_3)) {
    iVar3 = (int)(*param_3);
    *piVar2 = (int)(iVar3);
    if (iVar3 != 0) {
      thunk_FUN_1123fce0(iVar3 + 4);
    }
  }
  piVar4 = (int *)((int *)param_1[1]);
  piVar11 = (int *)((int *)*param_1);
  if ((int *)(param_2) == piVar4) {
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    piVar9 = (int *)(piVar8);
    for (; (int *)(piVar11) != piVar4; piVar11 = piVar11 + 1) {
      *piVar9 = (int)(0);
      if (piVar9 != (int *)(piVar11)) {
        iVar3 = (int)(*piVar11);
        *piVar9 = (int)(iVar3);
        if (iVar3 != 0) {
          thunk_FUN_1123fce0(iVar3 + 4);
        }
      }
      piVar9 = (int *)(piVar9 + 1);
    }
    thunk_FUN_11070a80(piVar9,piVar9,param_1);
  }
  else {
    thunk_FUN_1107d900(piVar11,param_2,piVar8);
    thunk_FUN_1107d900(param_2,param_1[1],piVar2 + 1);
  }
  if (*param_1 != 0) {
    thunk_FUN_11070a80(*param_1,param_1[1],param_1);
    iVar3 = (int)(*param_1);
    uVar7 = (uint)(param_1[2] - iVar3 & 0xfffffffc);
    iVar5 = (int)(iVar3);
    if (0xfff < uVar7) {
      iVar5 = (int)(*(int *)(iVar3 + -4));
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (iVar3 - iVar5) - 4U) {
LAB_11071ad5:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar7);
  }
  *param_1 = (int)((int)piVar8);
  param_1[1] = (int)(piVar8 + uVar1);
  param_1[2] = (int)(piVar8 + uVar10);
  ExceptionList = (void *)(local_10);
  return (int *)(piVar2);
}


// Reference entry 11071f00; body size 71 bytes.
#line 1 "ENTRY_11071f00"

void __thiscall FUN_11071f00(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_11072020(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x14);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x14);
  return;
}


// Reference entry 11071f60; body size 71 bytes.
#line 1 "ENTRY_11071f60"

void __thiscall FUN_11071f60(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4));
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      thunk_FUN_11072070(param_2,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x14);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x14);
  return;
}


// Reference entry 110720c0; body size 184 bytes.
#line 1 "ENTRY_110720c0"

undefined4 __thiscall FUN_110720c0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a3f50);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_110720c0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    iVar3 = (int)(param_3[4]);
    local_8 = (undefined4)(0);
    if (((iVar3 != 0) && (*(int *)(iVar3 + -0x10) < 0xffff)) &&
       (iVar6 = thunk_FUN_1123fcd0((void *)(iVar3 + -0x10),uVar5), iVar6 == 0)) {
      *(undefined4 *)(iVar3 + -8) = 0;
      *(undefined4 *)(iVar3 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar3,*(undefined4 *)(iVar3 + -4));
      free((void *)(iVar3 + -0x10));
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


// Reference entry 110721b0; body size 184 bytes.
#line 1 "ENTRY_110721b0"

undefined4 __thiscall FUN_110721b0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a3f80);
  uVar5 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  cVar1 = (char)(*(char *)((int)param_3 + 0xd));
  ppvVar4 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  while (ExceptionList = ppvVar4, cVar1 == '\0') {
    thunk_FUN_110721b0(param_2,param_3[2]);
    piVar2 = (int *)((int *)*param_3);
    iVar3 = (int)(param_3[4]);
    local_8 = (undefined4)(0);
    if (((iVar3 != 0) && (*(int *)(iVar3 + -0x10) < 0xffff)) &&
       (iVar6 = thunk_FUN_1123fcd0((void *)(iVar3 + -0x10),uVar5), iVar6 == 0)) {
      *(undefined4 *)(iVar3 + -8) = 0;
      *(undefined4 *)(iVar3 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar3,*(undefined4 *)(iVar3 + -4));
      free((void *)(iVar3 + -0x10));
    }
    local_8 = (undefined4)(0xffffffff);
    thunk_FUN_1148a50e(param_3,0x14);
    ppvVar4 = (void **)(ExceptionList);
    param_3 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(param_1);
}


// Reference entry 110723c0; body size 73 bytes.
#line 1 "ENTRY_110723c0"

int * __thiscall FUN_110723c0(int *param_1,int *param_2,uint *param_3)

{
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


// Reference entry 11072420; body size 73 bytes.
#line 1 "ENTRY_11072420"

int * __thiscall FUN_11072420(int *param_1,int *param_2,uint *param_3)

{
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


// Reference entry 11072480; body size 83 bytes.
#line 1 "ENTRY_11072480"

int * __thiscall FUN_11072480(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)(*param_1);
  puVar3 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
  *param_2 = (int)((int)puVar3);
  cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  param_2[1] = 0;
  param_2[2] = iVar1;
  while (cVar2 == '\0') {
    *param_2 = (int)((int)puVar3);
    cVar2 = (char)(thunk_FUN_111a0940(param_3));
    if (cVar2 == '\0') {
      param_2[2] = (int)puVar3;
      puVar3 = (undefined4 *)((undefined4 *)*puVar3);
    }
    else {
      puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
    }
    param_2[1] = (uint)(cVar2 == '\0');
    cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  }
  return (int *)(param_2);
}


// Reference entry 110724f0; body size 83 bytes.
#line 1 "ENTRY_110724f0"

int * __thiscall FUN_110724f0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)(*param_1);
  puVar3 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
  *param_2 = (int)((int)puVar3);
  cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  param_2[1] = 0;
  param_2[2] = iVar1;
  while (cVar2 == '\0') {
    *param_2 = (int)((int)puVar3);
    cVar2 = (char)(thunk_FUN_111a0940(param_3));
    if (cVar2 == '\0') {
      param_2[2] = (int)puVar3;
      puVar3 = (undefined4 *)((undefined4 *)*puVar3);
    }
    else {
      puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
    }
    param_2[1] = (uint)(cVar2 == '\0');
    cVar2 = (char)(*(char *)((int)puVar3 + 0xd));
  }
  return (int *)(param_2);
}


// Reference entry 11072620; body size 132 bytes.
#line 1 "ENTRY_11072620"

void FUN_11072620(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a3fb0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*(int *)(param_2 + 0x10));
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
  thunk_FUN_1148a50e(param_2,0x18);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110726d0; body size 132 bytes.
#line 1 "ENTRY_110726d0"

void FUN_110726d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a3fe0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(*(int *)(param_2 + 0x10));
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
  thunk_FUN_1148a50e(param_2,0x14);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110727d0; body size 461 bytes.
#line 1 "ENTRY_110727d0"

void FUN_110727d0(int param_1,int param_2,int param_3,code *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (int)(param_3 - param_1 >> 2);
  if (iVar2 < 0x29) {
    cVar1 = (char)((*param_4)(param_2,param_1));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(param_2,param_1);
    }
    cVar1 = (char)((*param_4)(param_3,param_2));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(param_3,param_2);
      cVar1 = (char)((*param_4)(param_2,param_1));
      if (cVar1 != '\0') {
        thunk_FUN_11076390(param_2,param_1);
      }
    }
  }
  else {
    iVar3 = (int)(iVar2 + 1 >> 3);
    iVar4 = (int)(iVar3 * 4);
    iVar2 = (int)(iVar4 + param_1);
    cVar1 = (char)((*param_4)(iVar2));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(iVar2,param_1);
    }
    cVar1 = (char)((*param_4)(iVar3 * 8 + param_1,iVar2));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(iVar3 * 8 + param_1,iVar2);
      cVar1 = (char)((*param_4)(iVar2,param_1));
      if (cVar1 != '\0') {
        thunk_FUN_11076390(iVar2,param_1);
      }
    }
    iVar5 = (int)(param_2 + iVar3 * -4);
    cVar1 = (char)((*param_4)(param_2,iVar5));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(param_2,iVar5);
    }
    cVar1 = (char)((*param_4)(iVar4 + param_2,param_2));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(iVar4 + param_2,param_2);
      cVar1 = (char)((*param_4)(param_2,iVar5));
      if (cVar1 != '\0') {
        thunk_FUN_11076390(param_2,iVar5);
      }
    }
    iVar4 = (int)(param_3 + iVar3 * -8);
    iVar3 = (int)(param_3 + iVar3 * -4);
    cVar1 = (char)((*param_4)(iVar3,iVar4));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(iVar3,iVar4);
    }
    cVar1 = (char)((*param_4)(param_3,iVar3));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(param_3,iVar3);
      cVar1 = (char)((*param_4)(iVar3,iVar4));
      if (cVar1 != '\0') {
        thunk_FUN_11076390(iVar3,iVar4);
      }
    }
    cVar1 = (char)((*param_4)(param_2,iVar2));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(param_2,iVar2);
    }
    cVar1 = (char)((*param_4)(iVar3,param_2));
    if (cVar1 != '\0') {
      thunk_FUN_11076390(iVar3,param_2);
      cVar1 = (char)((*param_4)(param_2,iVar2));
      if (cVar1 != '\0') {
        thunk_FUN_11076390(param_2,iVar2);
        return;
      }
    }
  }
  return;
}


// Reference entry 11072fb0; body size 98 bytes.
#line 1 "ENTRY_11072fb0"

int * FUN_11072fb0(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int *)(param_2) == param_1) {
    return (int *)(param_3);
  }
  do {
    param_3 = (int *)(param_3 + -1);
    param_2 = (int *)(param_2 + -1);
    if ((int *)(param_3) != param_2) {
      puVar1 = (undefined4 *)((undefined4 *)*param_3);
      if ((puVar1 != (undefined4 *)0x0) && (iVar2 = thunk_FUN_1123fcd0(puVar1 + 1), iVar2 == 0)) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = (int)(*param_2);
      *param_3 = (int)(iVar2);
      if (iVar2 != 0) {
        thunk_FUN_1123fce0(iVar2 + 4);
      }
    }
  } while ((int *)(param_2) != param_1);
  return (int *)(param_3);
}


// Reference entry 11073c00; body size 413 bytes.
#line 1 "ENTRY_11073c00"

void FUN_11073c00(int param_1,int param_2,uint param_3,int *param_4,code *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar3 = (int)((int)(param_3 - 1) >> 1);
  iVar5 = (int)(param_2);
  while (iVar5 < iVar3) {
    iVar8 = (int)(iVar5 * 2 + 2);
    iVar6 = (int)(iVar8 * 4 + param_1);
    cVar2 = (char)((*param_5)(iVar6,iVar6 + -4));
    if (cVar2 != '\0') {
      iVar8 = (int)(iVar5 * 2 + 1);
    }
    piVar4 = (int *)((int *)(iVar8 * 4 + param_1));
    piVar7 = (int *)((int *)(iVar5 * 4 + param_1));
    iVar5 = (int)(iVar8);
    if ((int *)(piVar7) != piVar4) {
      puVar1 = (undefined4 *)((undefined4 *)*piVar7);
      if (puVar1 != (undefined4 *)0x0) {
        iVar6 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
        if (iVar6 == 0) {
          (**(code **)*puVar1)(1);
        }
        piVar4 = (int *)((int *)(iVar8 * 4 + param_1));
      }
      iVar8 = (int)(*piVar4);
      *piVar7 = (int)(iVar8);
      if (iVar8 != 0) {
        thunk_FUN_1123fce0(iVar8 + 4);
      }
    }
  }
  if ((iVar5 == iVar3) && ((param_3 & 1) == 0)) {
    thunk_FUN_10e47640(param_3 * 4 + -4 + param_1);
    iVar5 = (int)(param_3 - 1);
  }
  while (param_2 < iVar5) {
    iVar3 = (int)(iVar5 + -1 >> 1);
    piVar4 = (int *)((int *)(param_1 + iVar3 * 4));
    cVar2 = (char)((*param_5)(piVar4,param_4));
    if (cVar2 == '\0') break;
    piVar7 = (int *)((int *)(param_1 + iVar5 * 4));
    iVar5 = (int)(iVar3);
    if ((int *)(piVar7) != piVar4) {
      puVar1 = (undefined4 *)((undefined4 *)*piVar7);
      if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = (int)(*piVar4);
      *piVar7 = (int)(iVar3);
      if (iVar3 != 0) {
        thunk_FUN_1123fce0(iVar3 + 4);
      }
    }
  }
  piVar4 = (int *)((int *)(param_1 + iVar5 * 4));
  if (piVar4 != (int *)(param_4)) {
    puVar1 = (undefined4 *)((undefined4 *)*piVar4);
    if ((puVar1 != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar1 + 1), iVar5 == 0)) {
      (**(code **)*puVar1)(1);
    }
    iVar5 = (int)(*param_4);
    *piVar4 = (int)(iVar5);
    if (iVar5 != 0) {
      thunk_FUN_1123fce0(iVar5 + 4);
    }
  }
  return;
}


// Reference entry 11073fd0; body size 180 bytes.
#line 1 "ENTRY_11073fd0"

void FUN_11073fd0(int param_1,int param_2,int param_3,int *param_4,code *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  
  while (param_3 < param_2) {
    iVar5 = (int)(param_2 + -1 >> 1);
    piVar1 = (int *)((int *)(param_1 + iVar5 * 4));
    cVar4 = (char)((*param_5)(piVar1,param_4));
    if (cVar4 == '\0') break;
    piVar2 = (int *)((int *)(param_1 + param_2 * 4));
    param_2 = (int)(iVar5);
    if ((int *)(piVar2) != piVar1) {
      puVar3 = (undefined4 *)((undefined4 *)*piVar2);
      if ((puVar3 != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar3 + 1), iVar5 == 0)) {
        (**(code **)*puVar3)(1);
      }
      iVar5 = (int)(*piVar1);
      *piVar2 = (int)(iVar5);
      if (iVar5 != 0) {
        thunk_FUN_1123fce0(iVar5 + 4);
      }
    }
  }
  piVar1 = (int *)((int *)(param_1 + param_2 * 4));
  if (piVar1 != (int *)(param_4)) {
    puVar3 = (undefined4 *)((undefined4 *)*piVar1);
    if ((puVar3 != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar3 + 1), iVar5 == 0)) {
      (**(code **)*puVar3)(1);
    }
    iVar5 = (int)(*param_4);
    *piVar1 = (int)(iVar5);
    if (iVar5 != 0) {
      thunk_FUN_1123fce0(iVar5 + 4);
    }
  }
  return;
}


// Reference entry 11074530; body size 268 bytes.
#line 1 "ENTRY_11074530"

int * __thiscall FUN_11074530(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a41d5);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_11072480(&local_24,param_3);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar2 = (char)(thunk_FUN_111a0940(local_1c + 0x10));
    if (cVar2 == '\0') {
      *param_2 = (int)(local_1c);
      *(undefined1 *)(param_2 + 1) = 0;
      ExceptionList = (void *)(local_10);
      return (int *)(param_2);
    }
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)(param_1);
    puVar4 = (undefined4 *)(operator_new(0x18));
    iVar5 = (int)(*param_3);
    local_8 = (undefined4)(1);
    puVar4[4] = iVar5;
    local_14 = (undefined4 *)(puVar4);
    if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
    }
    puVar4[5] = 0;
    *puVar4 = (undefined4)(uVar1);
    puVar4[1] = uVar1;
    puVar4[2] = uVar1;
    *(undefined2 *)(puVar4 + 3) = 0;
    iVar5 = (int)(thunk_FUN_1107cb50(local_24,local_20,puVar4));
    *param_2 = (int)(iVar5);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar3);
}


// Reference entry 11074680; body size 268 bytes.
#line 1 "ENTRY_11074680"

int * __thiscall FUN_11074680(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a4215);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_11072480(&local_24,param_3);
  if (*(char *)(local_1c + 0xd) == '\0') {
    cVar2 = (char)(thunk_FUN_111a0940(local_1c + 0x10));
    if (cVar2 == '\0') {
      *param_2 = (int)(local_1c);
      *(undefined1 *)(param_2 + 1) = 0;
      ExceptionList = (void *)(local_10);
      return (int *)(param_2);
    }
  }
  if (param_1[1] != 0xaaaaaaa) {
    uVar1 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)(param_1);
    puVar4 = (undefined4 *)(operator_new(0x18));
    iVar5 = (int)(*param_3);
    local_8 = (undefined4)(1);
    puVar4[4] = iVar5;
    local_14 = (undefined4 *)(puVar4);
    if ((iVar5 != 0) && (*(int *)(iVar5 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar5 + -0x10));
    }
    puVar4[5] = 0;
    *puVar4 = (undefined4)(uVar1);
    puVar4[1] = uVar1;
    puVar4[2] = uVar1;
    *(undefined2 *)(puVar4 + 3) = 0;
    iVar5 = (int)(thunk_FUN_1107cb50(local_24,local_20,puVar4));
    *param_2 = (int)(iVar5);
    *(undefined1 *)(param_2 + 1) = 1;
    ExceptionList = (void *)(local_10);
    return (int *)(param_2);
  }
                    
  thunk_FUN_101d7220(uVar3);
}


// Reference entry 11074810; body size 157 bytes.
#line 1 "ENTRY_11074810"

int * FUN_11074810(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a424d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    *param_3 = (int)(0);
    if ((int *)(param_3) != param_1) {
      iVar1 = (int)(*param_1);
      *param_3 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_3 = (int *)(param_3 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_110709e0(param_3,param_3,param_4);
  ExceptionList = (void *)(local_10);
  return (int *)(param_3);
}


// Reference entry 110748e0; body size 157 bytes.
#line 1 "ENTRY_110748e0"

int * FUN_110748e0(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a428d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    *param_3 = (int)(0);
    if ((int *)(param_3) != param_1) {
      iVar1 = (int)(*param_1);
      *param_3 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_3 = (int *)(param_3 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_11070a80(param_3,param_3,param_4);
  ExceptionList = (void *)(local_10);
  return (int *)(param_3);
}


// Reference entry 11074a10; body size 157 bytes.
#line 1 "ENTRY_11074a10"

int * FUN_11074a10(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a42cd);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    *param_3 = (int)(0);
    if ((int *)(param_3) != param_1) {
      iVar1 = (int)(*param_1);
      *param_3 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_3 = (int *)(param_3 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_110709e0(param_3,param_3,param_4);
  ExceptionList = (void *)(local_10);
  return (int *)(param_3);
}


// Reference entry 11074ae0; body size 157 bytes.
#line 1 "ENTRY_11074ae0"

int * FUN_11074ae0(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a430d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    *param_3 = (int)(0);
    if ((int *)(param_3) != param_1) {
      iVar1 = (int)(*param_1);
      *param_3 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_3 = (int *)(param_3 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_11070a80(param_3,param_3,param_4);
  ExceptionList = (void *)(local_10);
  return (int *)(param_3);
}


// Reference entry 11074bb0; body size 157 bytes.
#line 1 "ENTRY_11074bb0"

int * FUN_11074bb0(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a434d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_1 != (int *)(param_2)); param_1 = param_1 + 1) {
    *param_3 = (int)(0);
    if ((int *)(param_3) != param_1) {
      iVar1 = (int)(*param_1);
      *param_3 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_3 = (int *)(param_3 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_10e460f0(param_3,param_3,param_4);
  ExceptionList = (void *)(local_10);
  return (int *)(param_3);
}


// Reference entry 11075100; body size 118 bytes.
#line 1 "ENTRY_11075100"

void FUN_11075100(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4380);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  iVar1 = (int)(*param_2);
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


// Reference entry 110751a0; body size 91 bytes.
#line 1 "ENTRY_110751a0"

void FUN_110751a0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a43b0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11075220; body size 91 bytes.
#line 1 "ENTRY_11075220"

void FUN_11075220(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a43e0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110752a0; body size 118 bytes.
#line 1 "ENTRY_110752a0"

void FUN_110752a0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4410);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  iVar1 = (int)(*param_2);
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


// Reference entry 11075a00; body size 67 bytes.
#line 1 "ENTRY_11075a00"

void __thiscall FUN_11075a00(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 != *(int **)(param_1 + 8)) {
    *piVar1 = (int)(0);
    if (piVar1 != (int *)(param_2)) {
      iVar2 = (int)(*param_2);
      *piVar1 = (int)(iVar2);
      if (iVar2 != 0) {
        thunk_FUN_1123fce0(iVar2 + 4);
      }
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_110718c0(piVar1,param_2);
  return;
}


// Reference entry 11075a60; body size 67 bytes.
#line 1 "ENTRY_11075a60"

void __thiscall FUN_11075a60(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 != *(int **)(param_1 + 8)) {
    *piVar1 = (int)(0);
    if (piVar1 != (int *)(param_2)) {
      iVar2 = (int)(*param_2);
      *piVar1 = (int)(iVar2);
      if (iVar2 != 0) {
        thunk_FUN_1123fce0(iVar2 + 4);
      }
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_11071ba0(piVar1,param_2);
  return;
}


// Reference entry 11075ac0; body size 67 bytes.
#line 1 "ENTRY_11075ac0"

void __thiscall FUN_11075ac0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if (piVar1 != *(int **)(param_1 + 8)) {
    *piVar1 = (int)(0);
    if (piVar1 != (int *)(param_2)) {
      iVar2 = (int)(*param_2);
      *piVar1 = (int)(iVar2);
      if (iVar2 != 0) {
        thunk_FUN_1123fce0(iVar2 + 4);
      }
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_11071d50(piVar1,param_2);
  return;
}


// Reference entry 11075f10; body size 192 bytes.
#line 1 "ENTRY_11075f10"

void __thiscall FUN_11075f10(undefined4 *param_1,int *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a453d);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_110723c0(local_1c,param_3));
  iVar6 = (int)(*(int *)(puVar4 + 1));
  uVar1 = (undefined8)(*puVar4);
  if ((*(char *)(iVar6 + 0xd) == '\0') && (*(uint *)(iVar6 + 0x10) <= *param_3)) {
    uVar7 = (undefined1)(0);
  }
  else {
    if (param_1[1] == 0xccccccc) {
                    
      thunk_FUN_101d7220(uVar3);
    }
    uVar2 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar5 = (undefined4 *)(operator_new(0x14));
    puVar5[4] = *param_3;
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar5 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    *(undefined2 *)(puVar5 + 3) = 0;
    iVar6 = (int)(thunk_FUN_1107c630(local_28,uStack_24,puVar5));
    uVar7 = (undefined1)(1);
  }
  *param_2 = (int)(iVar6);
  *(undefined1 *)(param_2 + 1) = uVar7;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11076010; body size 192 bytes.
#line 1 "ENTRY_11076010"

void __thiscall FUN_11076010(undefined4 *param_1,int *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a457d);
  local_10 = (void *)(ExceptionList);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar4 = (undefined8 *)((undefined8 *)thunk_FUN_11072420(local_1c,param_3));
  iVar6 = (int)(*(int *)(puVar4 + 1));
  uVar1 = (undefined8)(*puVar4);
  if ((*(char *)(iVar6 + 0xd) == '\0') && (*(uint *)(iVar6 + 0x10) <= *param_3)) {
    uVar7 = (undefined1)(0);
  }
  else {
    if (param_1[1] == 0xccccccc) {
                    
      thunk_FUN_101d7220(uVar3);
    }
    uVar2 = (undefined4)(*param_1);
    local_8 = (undefined4)(0);
    local_14 = (undefined4)(0);
    local_18 = (undefined4 *)(param_1);
    puVar5 = (undefined4 *)(operator_new(0x14));
    puVar5[4] = *param_3;
    uStack_24 = (undefined4)((undefined4)((ulonglong)uVar1 >> 0x20));
    *puVar5 = (undefined4)(uVar2);
    local_28 = (undefined4)((undefined4)uVar1);
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    *(undefined2 *)(puVar5 + 3) = 0;
    iVar6 = (int)(thunk_FUN_1107c8c0(local_28,uStack_24,puVar5));
    uVar7 = (undefined1)(1);
  }
  *param_2 = (int)(iVar6);
  *(undefined1 *)(param_2 + 1) = uVar7;
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11076770; body size 89 bytes.
#line 1 "ENTRY_11076770"

int * __thiscall FUN_11076770(int *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a46bd);
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


// Reference entry 110767e0; body size 89 bytes.
#line 1 "ENTRY_110767e0"

int * __thiscall FUN_110767e0(int *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a46fd);
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


// Reference entry 110768e0; body size 89 bytes.
#line 1 "ENTRY_110768e0"

int * __thiscall FUN_110768e0(int *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a473d);
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


// Reference entry 11076970; body size 89 bytes.
#line 1 "ENTRY_11076970"

int * __thiscall FUN_11076970(int *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a477d);
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


// Reference entry 11076a20; body size 89 bytes.
#line 1 "ENTRY_11076a20"

int * __thiscall FUN_11076a20(int *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a47bd);
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


// Reference entry 11076ab0; body size 89 bytes.
#line 1 "ENTRY_11076ab0"

int * __thiscall FUN_11076ab0(int *param_1,int param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a47fd);
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


// Reference entry 110784a0; body size 167 bytes.
#line 1 "ENTRY_110784a0"

undefined4 * __fastcall FUN_110784a0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4ded);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_ROAuthCB_vftable);
  local_8 = (undefined4)(0);
  thunk_FUN_11240650(uVar1);
  param_1[1] = (uint)&Ext_RControlAIOOpCB_vftable;
  *param_1 = (undefined4)((uint)&Ext_SwfObjHouseholdOAuthCB_vftable);
  param_1[1] = (uint)&Ext_SwfObjHouseholdOAuthCB_vftable;
  param_1[2] = (uint)&Ext_RSonosCPFaultHandler_vftable;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x831) = 0;
  *(undefined1 *)(param_1 + 0x40d) = 0;
  *(undefined1 *)((int)param_1 + 0x104d) = 0;
  param_1[0x424] = 0;
  *(undefined1 *)(param_1 + 0x425) = 0;
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 11078700; body size 113 bytes.
#line 1 "ENTRY_11078700"

void __fastcall FUN_11078700(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a4e20);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_RUpnpMultipleAVTOp_vftable);
  param_1[2] = (uint)&Ext_RUpnpMultipleAVTOp_vftable;
  thunk_FUN_1107f4b0(uVar2);
  puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_1148b596(puVar1 + -1,4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110787a0; body size 113 bytes.
#line 1 "ENTRY_110787a0"

void __fastcall FUN_110787a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a4e50);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_RUpnpMultipleAVTOp_vftable);
  param_1[2] = (uint)&Ext_RUpnpMultipleAVTOp_vftable;
  thunk_FUN_1107f540(uVar2);
  puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_1148b596(puVar1 + -1,4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11078840; body size 88 bytes.
#line 1 "ENTRY_11078840"

void __fastcall FUN_11078840(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4e80);
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


// Reference entry 110788c0; body size 88 bytes.
#line 1 "ENTRY_110788c0"

void __fastcall FUN_110788c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4eb0);
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


// Reference entry 11078940; body size 88 bytes.
#line 1 "ENTRY_11078940"

void __fastcall FUN_11078940(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4ee0);
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


// Reference entry 110789c0; body size 88 bytes.
#line 1 "ENTRY_110789c0"

void __fastcall FUN_110789c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4f10);
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


// Reference entry 11078a40; body size 88 bytes.
#line 1 "ENTRY_11078a40"

void __fastcall FUN_11078a40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4f40);
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


// Reference entry 11078ac0; body size 88 bytes.
#line 1 "ENTRY_11078ac0"

void __fastcall FUN_11078ac0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4f70);
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


// Reference entry 11078b40; body size 91 bytes.
#line 1 "ENTRY_11078b40"

void __fastcall FUN_11078b40(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a4fa0);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SwfWrappedObj_vftable);
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))(uVar1);
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
    }
    param_1[1] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11078c40; body size 89 bytes.
#line 1 "ENTRY_11078c40"

void __fastcall FUN_11078c40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a4fd0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
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


// Reference entry 11078cc0; body size 89 bytes.
#line 1 "ENTRY_11078cc0"

void __fastcall FUN_11078cc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a5000);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
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


// Reference entry 11078d40; body size 89 bytes.
#line 1 "ENTRY_11078d40"

void __fastcall FUN_11078d40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a5030);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
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


// Reference entry 11078f00; body size 145 bytes.
#line 1 "ENTRY_11078f00"

void __fastcall FUN_11078f00(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a5060);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + 0x10));
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
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11078fc0; body size 145 bytes.
#line 1 "ENTRY_11078fc0"

void __fastcall FUN_11078fc0(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a5090);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + 0x10));
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
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11079170; body size 115 bytes.
#line 1 "ENTRY_11079170"

void __fastcall FUN_11079170(int *param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a50c0);
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


// Reference entry 11079260; body size 81 bytes.
#line 1 "ENTRY_11079260"

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

void __fastcall FID_conflict__Tidy_11079260(int *param_1)

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


// Reference entry 110792d0; body size 81 bytes.
#line 1 "ENTRY_110792d0"

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

void __fastcall FID_conflict__Tidy_110792d0(int *param_1)

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


// Reference entry 11079340; body size 96 bytes.
#line 1 "ENTRY_11079340"

void __fastcall FUN_11079340(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_110709e0(*param_1,param_1[1],param_1);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 110793c0; body size 96 bytes.
#line 1 "ENTRY_110793c0"

void __fastcall FUN_110793c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_11070a80(*param_1,param_1[1],param_1);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 11079440; body size 96 bytes.
#line 1 "ENTRY_11079440"

void __fastcall FUN_11079440(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10e460f0(*param_1,param_1[1],param_1);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 110794c0; body size 202 bytes.
#line 1 "ENTRY_110794c0"

void __fastcall FUN_110794c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a50f0);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[2]);
  if (iVar1 != 0) {
    uVar3 = (uint)((param_1[4] - iVar1 >> 2) * 4);
    iVar2 = (int)(iVar1);
    if (0xfff < uVar3) {
      iVar2 = (int)(*(int *)(iVar1 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar1 - iVar2) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar2,uVar3,DAT_12126b84 ^ (uint)&stack0xfffffffc);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  iVar1 = (int)(*param_1);
  local_8 = (undefined4)(0);
  if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
     (iVar2 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar2 == 0)) {
    *(undefined4 *)(iVar1 + -8) = 0;
    *(undefined4 *)(iVar1 + -0xc) = 0;
    thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
    free((void *)(iVar1 + -0x10));
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110795d0; body size 362 bytes.
#line 1 "ENTRY_110795d0"

void __fastcall FUN_110795d0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a5120);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  uVar7 = (uint)(0);
  iVar4 = (int)(*param_1);
  uVar5 = (uint)(param_1[1] - iVar4 >> 2);
  if (uVar5 != 0) {
    do {
      piVar1 = (int *)(*(int **)(*param_1 + uVar7 * 4));
      if (piVar1 != (int *)0x0) {
        iVar4 = (int)(piVar1[2]);
        if (iVar4 != 0) {
          uVar6 = (uint)((piVar1[4] - iVar4 >> 2) * 4);
          iVar3 = (int)(iVar4);
          if (0xfff < uVar6) {
            iVar3 = (int)(*(int *)(iVar4 + -4));
            uVar6 = (uint)(uVar6 + 0x23);
            if (0x1f < (iVar4 - iVar3) - 4U) goto LAB_11079734;
          }
          thunk_FUN_1148a50e(iVar3,uVar6,uVar2);
          piVar1[2] = 0;
          piVar1[3] = 0;
          piVar1[4] = 0;
        }
        iVar4 = (int)(*piVar1);
        local_8 = (undefined4)(0);
        if (((iVar4 != 0) && (*(int *)(iVar4 + -0x10) < 0xffff)) &&
           (iVar3 = thunk_FUN_1123fcd0((void *)(iVar4 + -0x10)), iVar3 == 0)) {
          *(undefined4 *)(iVar4 + -8) = 0;
          *(undefined4 *)(iVar4 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar4,*(undefined4 *)(iVar4 + -4));
          free((void *)(iVar4 + -0x10));
        }
        local_8 = (undefined4)(0xffffffff);
        thunk_FUN_1148a50e(piVar1,0x14,uVar2);
      }
      uVar7 = (uint)(uVar7 + 1);
    } while (uVar7 < uVar5);
    iVar4 = (int)(*param_1);
  }
  if (iVar4 != 0) {
    uVar5 = (uint)(param_1[2] - iVar4 & 0xfffffffc);
    iVar3 = (int)(iVar4);
    if (0xfff < uVar5) {
      iVar3 = (int)(*(int *)(iVar4 + -4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (iVar4 - iVar3) - 4U) {
LAB_11079734:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar5,uVar2);
    *param_1 = (int)(0);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11079800; body size 120 bytes.
#line 1 "ENTRY_11079800"

void __fastcall FUN_11079800(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a5150);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_RUpnpMultipleAVTOp_vftable);
  param_1[2] = (uint)&Ext_RUpnpMultipleAVTOp_vftable;
  thunk_FUN_1107f4b0(uVar2);
  puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_1148b596(puVar1 + -1,4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110798d0; body size 120 bytes.
#line 1 "ENTRY_110798d0"

void __fastcall FUN_110798d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a5180);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_RUpnpMultipleAVTOp_vftable);
  param_1[2] = (uint)&Ext_RUpnpMultipleAVTOp_vftable;
  thunk_FUN_1107f540(uVar2);
  puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_1148b596(puVar1 + -1,4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  thunk_FUN_11261f10();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110799a0; body size 1426 bytes.
#line 1 "ENTRY_110799a0"

void __fastcall FUN_110799a0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a51b0);
  local_10 = (void *)(ExceptionList);
  uVar4 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  *param_1 = (undefined4)((uint)&Ext_SwfObjHousehold_vftable);
  param_1[5] = (uint)&Ext_SwfObjHousehold_vftable;
  param_1[7] = (uint)&Ext_SwfObjHousehold_vftable;
  param_1[8] = (uint)&Ext_SwfObjHousehold_vftable;
  param_1[9] = (uint)&Ext_SwfObjHousehold_vftable;
  param_1[10] = (uint)&Ext_SwfObjHousehold_vftable;
  param_1[0xb] = (uint)&Ext_SwfObjHousehold_vftable;
  thunk_FUN_1107f6a0(uVar4);
  piVar2 = (int *)((int *)param_1[0xb738]);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar6 = (int)(piVar2[1] + -1);
    piVar2[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = (int *)(piVar2 + 2);
      iVar6 = (int)(*piVar1);
      *piVar1 = (int)(*piVar1 + -1);
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  iVar6 = (int)(param_1[0xb50f]);
  local_8 = (undefined4)(0);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  iVar6 = (int)(param_1[0xb50e]);
  local_8 = (undefined4)(1);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  iVar6 = (int)(param_1[0xb50d]);
  local_8 = (undefined4)(2);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  iVar6 = (int)(param_1[0xb50c]);
  local_8 = (undefined4)(3);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  iVar6 = (int)(param_1[0xb509]);
  local_8 = (undefined4)(4);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  puVar3 = (undefined4 *)((undefined4 *)param_1[0xb504]);
  local_8 = (undefined4)(5);
  if (puVar3 != (undefined4 *)0x0) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar3 + 1));
    if (iVar6 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  param_1[0xb501] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  thunk_FUN_1127e5b0();
  param_1[0x1ac] = (uint)&Ext_RZPSortOrderManager_vftable;
  param_1[0x1af] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  param_1[0x1ac] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  iVar6 = (int)(param_1[0x1aa]);
  local_8 = (undefined4)(6);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  iVar6 = (int)(param_1[0x1a8]);
  local_8 = (undefined4)(7);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  iVar6 = (int)(param_1[0x1a7]);
  local_8 = (undefined4)(8);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  thunk_FUN_1116b2f0();
  param_1[0x76] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  iVar6 = (int)(param_1[0x72]);
  local_8 = (undefined4)(9);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  param_1[0x47] = (uint)&Ext_RControlAIOOpRef_vftable;
  thunk_FUN_101ba0d0();
  thunk_FUN_11079340();
  thunk_FUN_110793c0();
  puVar3 = (undefined4 *)((undefined4 *)param_1[0x3f]);
  local_8 = (undefined4)(10);
  if (puVar3 != (undefined4 *)0x0) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar3 + 1));
    if (iVar6 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  iVar6 = (int)(param_1[0x3e]);
  local_8 = (undefined4)(0xb);
  if ((iVar6 != 0) && (*(int *)(iVar6 + -0x10) < 0xffff)) {
    iVar5 = (int)(thunk_FUN_1123fcd0((void *)(iVar6 + -0x10)));
    if (iVar5 == 0) {
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar6,*(undefined4 *)(iVar6 + -4));
      free((void *)(iVar6 + -0x10));
    }
  }
  thunk_FUN_110720c0(param_1 + 0x3b,*(undefined4 *)(param_1[0x3b] + 4));
  thunk_FUN_1148a50e(param_1[0x3b],0x18);
  thunk_FUN_11079440();
  thunk_FUN_10207220();
  thunk_FUN_10207220();
  thunk_FUN_110793c0();
  thunk_FUN_11079440();
  thunk_FUN_11079440();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  thunk_FUN_111a6f10();
  puVar3 = (undefined4 *)((undefined4 *)param_1[0xd]);
  local_8 = (undefined4)(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar3 + 1));
    if (iVar6 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)((undefined4 *)param_1[0xc]);
  local_8 = (undefined4)(0xd);
  if (puVar3 != (undefined4 *)0x0) {
    iVar6 = (int)(thunk_FUN_1123fcd0(puVar3 + 1));
    if (iVar6 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  param_1[0xb] = (uint)&Ext_RITQHandler_vftable;
  param_1[10] = (uint)&Ext_RSvcAccountsCB_vftable;
  param_1[9] = (uint)&Ext_RGetAvailableServicesCB_vftable;
  param_1[8] = (uint)&Ext_RControlAIOOpCB_vftable;
  thunk_FUN_11240850();
  param_1[7] = (uint)&Ext_SwfObjZonePlayerCollection_vftable;
  local_8 = (undefined4)(0xe);
  param_1[5] = (uint)&Ext_SwfWrappedObj_vftable;
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 8))();
    if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[6])(1);
    }
    param_1[6] = 0;
  }
  thunk_FUN_111a4f00();
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1107ad10; body size 141 bytes.
#line 1 "ENTRY_1107ad10"

undefined4 * __thiscall FUN_1107ad10(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a5260);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_RUpnpMultipleAVTOp_vftable);
  param_1[2] = (uint)&Ext_RUpnpMultipleAVTOp_vftable;
  thunk_FUN_1107f4b0(uVar2);
  puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_1148b596(puVar1 + -1,4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1107add0; body size 141 bytes.
#line 1 "ENTRY_1107add0"

undefined4 * __thiscall FUN_1107add0(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a5290);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_RUpnpMultipleAVTOp_vftable);
  param_1[2] = (uint)&Ext_RUpnpMultipleAVTOp_vftable;
  thunk_FUN_1107f540(uVar2);
  puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_1148b596(puVar1 + -1,4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1107ae90; body size 113 bytes.
#line 1 "ENTRY_1107ae90"

int * __thiscall FUN_1107ae90(int *param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a52c0);
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 1107af30; body size 113 bytes.
#line 1 "ENTRY_1107af30"

int * __thiscall FUN_1107af30(int *param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a52f0);
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 1107afd0; body size 119 bytes.
#line 1 "ENTRY_1107afd0"

undefined4 * __thiscall FUN_1107afd0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a5320);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_SwfWrappedObj_vftable);
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))(uVar1);
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
    }
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1107b070; body size 140 bytes.
#line 1 "ENTRY_1107b070"

int * __thiscall FUN_1107b070(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a5350);
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
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 1107b130; body size 229 bytes.
#line 1 "ENTRY_1107b130"

int * __thiscall FUN_1107b130(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a5380);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  iVar1 = (int)(param_1[2]);
  if (iVar1 != 0) {
    uVar4 = (uint)((param_1[4] - iVar1 >> 2) * 4);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4,uVar2);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  iVar1 = (int)(*param_1);
  local_8 = (undefined4)(0);
  if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
     (iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)), iVar3 == 0)) {
    *(undefined4 *)(iVar1 + -8) = 0;
    *(undefined4 *)(iVar1 + -0xc) = 0;
    thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
    free((void *)(iVar1 + -0x10));
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14,uVar2);
  }
  ExceptionList = (void *)(local_10);
  return (int *)(param_1);
}


// Reference entry 1107b380; body size 141 bytes.
#line 1 "ENTRY_1107b380"

undefined4 * __thiscall FUN_1107b380(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a53b0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_RUpnpMultipleAVTOp_vftable);
  param_1[2] = (uint)&Ext_RUpnpMultipleAVTOp_vftable;
  thunk_FUN_1107f4b0(uVar2);
  puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_1148b596(puVar1 + -1,4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1107b490; body size 141 bytes.
#line 1 "ENTRY_1107b490"

undefined4 * __thiscall FUN_1107b490(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a53e0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  local_8 = (undefined4)(0);
  *param_1 = (undefined4)((uint)&Ext_RUpnpMultipleAVTOp_vftable);
  param_1[2] = (uint)&Ext_RUpnpMultipleAVTOp_vftable;
  thunk_FUN_1107f540(uVar2);
  puVar1 = (undefined4 *)((undefined4 *)param_1[9]);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      thunk_FUN_1148b596(puVar1 + -1,4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  thunk_FUN_11261f10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)(param_1);
}


// Reference entry 1107b6c0; body size 353 bytes.
#line 1 "ENTRY_1107b6c0"

undefined4 * FUN_1107b6c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  cVar1 = (char)(thunk_FUN_111a0720("RINCON_AssociatedZPUDN"));
  if (cVar1 != '\0') {
    if (param_4 != '\0') {
      uVar2 = (undefined4)(thunk_FUN_1109aba0(0x2a1,&DAT_11882ff0));
      thunk_FUN_101b9a40(uVar2);
      return (undefined4 *)(param_1);
    }
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x1e));
    *puVar3 = (undefined4)(1);
    puVar3[3] = 0xd;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *(undefined8 *)(puVar3 + 4) = *(unsigned long long *)((char *)&s_Music_Library_119331b4 + 0);
    puVar3[6] = *(uint *)((char *)&s_Music_Library_119331b4 + 8);
    *(char *)(puVar3 + 7) = s_Music_Library_119331b4[0xc];
    *(undefined1 *)((int)puVar3 + 0x1d) = 0;
    *param_1 = (undefined4)(puVar3 + 4);
    return (undefined4 *)(param_1);
  }
  cVar1 = (char)(thunk_FUN_111a0720("LOCALMUSICBROWSE_CPUDN"));
  if (cVar1 != '\0') {
    if (param_4 != '\0') {
      uVar2 = (undefined4)(thunk_FUN_1109aba0(0x2a2,&DAT_11882ff0));
      thunk_FUN_101b9a40(uVar2);
      return (undefined4 *)(param_1);
    }
    puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(0x1c));
    *puVar3 = (undefined4)(1);
    puVar3[3] = 0xb;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *(undefined8 *)(puVar3 + 4) = *(unsigned long long *)((char *)&s_Local_Music_118b4880 + 0);
    *(undefined2 *)(puVar3 + 6) = *(uint *)((char *)&s_Local_Music_118b4880 + 8);
    *(char *)((int)puVar3 + 0x1a) = s_Local_Music_118b4880[10];
    *(undefined1 *)((int)puVar3 + 0x1b) = 0;
    *param_1 = (undefined4)(puVar3 + 4);
    return (undefined4 *)(param_1);
  }
  puVar5 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((undefined1 *)*param_2);
  }
  piVar4 = (int *)((int *)thunk_FUN_110935f0(puVar5,0));
  if (piVar4 != (int *)0x0) {
    uVar2 = (undefined4)((**(code **)(*piVar4 + 0x3c))());
    thunk_FUN_101b9a40(uVar2);
    return (undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1107bb30; body size 89 bytes.
#line 1 "ENTRY_1107bb30"

void __thiscall FUN_1107bb30(int *param_1,int param_2,int param_3,int param_4)

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
  }
  *param_1 = (int)(param_2);
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 1107bba0; body size 89 bytes.
#line 1 "ENTRY_1107bba0"

void __thiscall FUN_1107bba0(int *param_1,int param_2,int param_3,int param_4)

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
  }
  *param_1 = (int)(param_2);
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 1107bc10; body size 104 bytes.
#line 1 "ENTRY_1107bc10"

void __thiscall FUN_1107bc10(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_110709e0(*param_1,param_1[1],param_1);
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
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 1107bca0; body size 104 bytes.
#line 1 "ENTRY_1107bca0"

void __thiscall FUN_1107bca0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_11070a80(*param_1,param_1[1],param_1);
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
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 1107bd30; body size 104 bytes.
#line 1 "ENTRY_1107bd30"

void __thiscall FUN_1107bd30(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10e460f0(*param_1,param_1[1],param_1);
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
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}


// Reference entry 1107d180; body size 79 bytes.
#line 1 "ENTRY_1107d180"

void __thiscall FUN_1107d180(int *param_1,int param_2)

{
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


// Reference entry 1107d490; body size 83 bytes.
#line 1 "ENTRY_1107d490"

void __thiscall FUN_1107d490(int *param_1,int *param_2)

{
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


// Reference entry 1107d570; body size 81 bytes.
#line 1 "ENTRY_1107d570"

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

void __fastcall FID_conflict__Tidy_1107d570(int *param_1)

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


// Reference entry 1107d5e0; body size 81 bytes.
#line 1 "ENTRY_1107d5e0"

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

void __fastcall FID_conflict__Tidy_1107d5e0(int *param_1)

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


// Reference entry 1107d650; body size 96 bytes.
#line 1 "ENTRY_1107d650"

void __fastcall FUN_1107d650(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_110709e0(*param_1,param_1[1],param_1);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 1107d6d0; body size 96 bytes.
#line 1 "ENTRY_1107d6d0"

void __fastcall FUN_1107d6d0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_11070a80(*param_1,param_1[1],param_1);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 1107d750; body size 96 bytes.
#line 1 "ENTRY_1107d750"

void __fastcall FUN_1107d750(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10e460f0(*param_1,param_1[1],param_1);
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
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// Reference entry 1107d830; body size 159 bytes.
#line 1 "ENTRY_1107d830"

int * __thiscall FUN_1107d830(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a54bd);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    *param_4 = (int)(0);
    if ((int *)(param_4) != param_2) {
      iVar1 = (int)(*param_2);
      *param_4 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_4 = (int *)(param_4 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_110709e0(param_4,param_4,param_1);
  ExceptionList = (void *)(local_10);
  return (int *)(param_4);
}


// Reference entry 1107d900; body size 159 bytes.
#line 1 "ENTRY_1107d900"

int * __thiscall FUN_1107d900(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a54fd);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    *param_4 = (int)(0);
    if ((int *)(param_4) != param_2) {
      iVar1 = (int)(*param_2);
      *param_4 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_4 = (int *)(param_4 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_11070a80(param_4,param_4,param_1);
  ExceptionList = (void *)(local_10);
  return (int *)(param_4);
}


// Reference entry 1107d9d0; body size 159 bytes.
#line 1 "ENTRY_1107d9d0"

int * __thiscall FUN_1107d9d0(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a553d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    *param_4 = (int)(0);
    if ((int *)(param_4) != param_2) {
      iVar1 = (int)(*param_2);
      *param_4 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_4 = (int *)(param_4 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_10e460f0(param_4,param_4,param_1);
  ExceptionList = (void *)(local_10);
  return (int *)(param_4);
}


// Reference entry 1107db00; body size 157 bytes.
#line 1 "ENTRY_1107db00"

void __thiscall FUN_1107db00(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a557d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    *param_4 = (int)(0);
    if ((int *)(param_4) != param_2) {
      iVar1 = (int)(*param_2);
      *param_4 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_4 = (int *)(param_4 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_110709e0(param_4,param_4,param_1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1107dbd0; body size 157 bytes.
#line 1 "ENTRY_1107dbd0"

void __thiscall FUN_1107dbd0(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a55bd);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    *param_4 = (int)(0);
    if ((int *)(param_4) != param_2) {
      iVar1 = (int)(*param_2);
      *param_4 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_4 = (int *)(param_4 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_11070a80(param_4,param_4,param_1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1107dd20; body size 157 bytes.
#line 1 "ENTRY_1107dd20"

void __thiscall FUN_1107dd20(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a55fd);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    *param_4 = (int)(0);
    if ((int *)(param_4) != param_2) {
      iVar1 = (int)(*param_2);
      *param_4 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_4 = (int *)(param_4 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_110709e0(param_4,param_4,param_1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1107ddf0; body size 157 bytes.
#line 1 "ENTRY_1107ddf0"

void __thiscall FUN_1107ddf0(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a563d);
  uVar3 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  local_8 = (undefined4)(0);
  ppvVar2 = (void **)(&local_10);
  local_10 = (void *)(ExceptionList);
  for (; ExceptionList = (void *)(ppvVar2, param_2 != (int *)(param_3)); param_2 = param_2 + 1) {
    *param_4 = (int)(0);
    if ((int *)(param_4) != param_2) {
      iVar1 = (int)(*param_2);
      *param_4 = (int)(iVar1);
      if (iVar1 != 0) {
        thunk_FUN_1123fce0(iVar1 + 4,uVar3);
      }
    }
    param_4 = (int *)(param_4 + 1);
    ppvVar2 = (void **)(ExceptionList);
  }
  thunk_FUN_11070a80(param_4,param_4,param_1);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1107e280; body size 102 bytes.
#line 1 "ENTRY_1107e280"

undefined4 __thiscall FUN_1107e280(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = (char)(thunk_FUN_11092b50(param_2));
  if (cVar3 != '\0') {
    return (undefined4)(0);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xcc));
  if (piVar1 != *(int **)(param_1 + 0xd0)) {
    iVar2 = (int)(*param_2);
    *piVar1 = (int)(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0(iVar2 + -0x10);
    }
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 4;
    return (undefined4)(1);
  }
  thunk_FUN_1106b2c0(piVar1,param_2);
  return (undefined4)(1);
}


// Reference entry 1107e350; body size 375 bytes.
#line 1 "ENTRY_1107e350"

undefined4 FUN_1107e350(int *param_1)

{
  char *_Src;
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  size_t _Size;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a56cd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (*param_1 != 0) {
    _Src = (char *)(*(char **)(*param_1 + 0x5c));
    if ((_Src == (char *)0x0) || (*_Src == '\0')) {
      pcVar5 = (char *)((char *)0x0);
    }
    else {
      pcVar5 = (char *)(_Src);
      do {
        cVar1 = (char)(*pcVar5);
        pcVar5 = (char *)(pcVar5 + 1);
      } while (cVar1 != '\0');
      _Size = (size_t)((int)pcVar5 - (int)(_Src + 1));
      puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11,DAT_12126b84 ^ (uint)&stack0xfffffffc));
      pcVar5 = (char *)((char *)(puVar2 + 4));
      *puVar2 = (undefined4)(1);
      puVar2[3] = _Size;
      puVar2[2] = 0;
      puVar2[1] = 0;
      memcpy(pcVar5,_Src,_Size);
      pcVar5[_Size] = '\0';
    }
    local_8 = (undefined4)(0);
    local_14 = (char *)(pcVar5);
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      cVar1 = (char)(thunk_FUN_11092f00(&local_14));
      if (cVar1 == '\0') {
        thunk_FUN_110d84a0(1);
        thunk_FUN_11095840(param_1);
        piVar4 = (int *)((int *)(pcVar5 + -0x10));
        local_8 = (undefined4)(1);
        if (*piVar4 < 0xffff) {
          iVar3 = (int)(thunk_FUN_1123fcd0(piVar4));
          if (iVar3 == 0) {
            pcVar5[-0xffffffff00000008] = '\0';
            pcVar5[-0xffffffff00000007] = '\0';
            pcVar5[-0xffffffff00000006] = '\0';
            pcVar5[-0xffffffff00000005] = '\0';
            pcVar5[-0xffffffff0000000c] = '\0';
            pcVar5[-0xffffffff0000000b] = '\0';
            pcVar5[-0xffffffff0000000a] = '\0';
            pcVar5[-0xffffffff00000009] = '\0';
            thunk_FUN_113cfb70(pcVar5,*(undefined4 *)(pcVar5 + -4));
            free(piVar4);
          }
        }
        ExceptionList = (void *)(local_10);
        return (undefined4)(1);
      }
    }
    local_8 = (undefined4)(2);
    if ((pcVar5 != (char *)0x0) && (piVar4 = (int *)(pcVar5 + -0x10), *piVar4 < 0xffff)) {
      iVar3 = (int)(thunk_FUN_1123fcd0(piVar4));
      if (iVar3 == 0) {
        pcVar5[-0xffffffff00000008] = '\0';
        pcVar5[-0xffffffff00000007] = '\0';
        pcVar5[-0xffffffff00000006] = '\0';
        pcVar5[-0xffffffff00000005] = '\0';
        pcVar5[-0xffffffff0000000c] = '\0';
        pcVar5[-0xffffffff0000000b] = '\0';
        pcVar5[-0xffffffff0000000a] = '\0';
        pcVar5[-0xffffffff00000009] = '\0';
        thunk_FUN_113cfb70(pcVar5,*(undefined4 *)(pcVar5 + -4));
        free(piVar4);
      }
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4)(0);
}


// Reference entry 1107e780; body size 140 bytes.
#line 1 "ENTRY_1107e780"

void FUN_1107e780(void)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint local_cec;
  undefined1 local_ce8 [3300];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)&local_cec);
  thunk_FUN_1109f7f0();
  thunk_FUN_110f2980();
  thunk_FUN_1109f140(local_ce8,&local_cec);
  uVar2 = (uint)(0);
  if (local_cec != 0) {
    puVar3 = (undefined1 *)(local_ce8);
    do {
      cVar1 = (char)(thunk_FUN_110f19f0(puVar3));
      if (cVar1 == '\0') {
        thunk_FUN_1148ac28();
        return;
      }
      uVar2 = (uint)(uVar2 + 1);
      puVar3 = (undefined1 *)(puVar3 + 0x21);
    } while (uVar2 < local_cec);
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1107ece0; body size 221 bytes.
#line 1 "ENTRY_1107ece0"

void __fastcall FUN_1107ece0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iStack_4;
  
  iStack_4 = (int)(param_1);
  iVar1 = (int)((*(code *)**(undefined4 **)(param_1 + 0x1c))());
  if ((iVar1 == 0) || (uVar2 = thunk_FUN_114568d0(), uVar2 < 0x21)) {
    uVar2 = (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2);
    uVar6 = (uint)(0);
    if (uVar2 != 0) {
      while ((((iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + uVar6 * 4), iVar1 == 0 ||
               (*(char *)(iVar1 + 0x521) != '\0')) || (iVar3 = thunk_FUN_110cb9c0(), iVar3 == 0)) ||
             (uVar4 = thunk_FUN_114568d0(), uVar4 < 0x21))) {
        uVar6 = (uint)(uVar6 + 1);
        if (uVar2 <= uVar6) {
          return;
        }
      }
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(iVar1 + 0x5c) != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)(*(undefined1 **)(iVar1 + 0x5c));
      }
      thunk_FUN_112af4e0("household",3,"trying to associate with high memory ZP %s",puVar5);
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(iVar1 + 0x68) != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)(*(undefined1 **)(iVar1 + 0x68));
      }
      puVar7 = (undefined1 *)(&DAT_1186d2ee);
      if (*(undefined1 **)(iVar1 + 0x5c) != (undefined1 *)0x0) {
        puVar7 = (undefined1 *)(*(undefined1 **)(iVar1 + 0x5c));
      }
      thunk_FUN_110844a0(puVar7,puVar5,*(undefined2 *)(iVar1 + 0x70),*(undefined2 *)(iVar1 + 0x72),
                         *(undefined2 *)(iVar1 + 0x74),0,&iStack_4);
    }
  }
  return;
}


// Reference entry 1107f1e0; body size 94 bytes.
#line 1 "ENTRY_1107f1e0"

undefined4 FUN_1107f1e0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)(thunk_FUN_111a5a30(param_1,&DAT_1211c0f0,6));
  uVar1 = (uint)(*(uint *)(param_1 + 0xc));
  if (((iVar2 != 0) && (*param_2 = 1, *(uint *)(iVar2 + 0xc) <= uVar1)) &&
     (uVar1 <= *(uint *)(iVar2 + 0x10))) {
    uVar3 = (undefined4)((**(code **)(iVar2 + 0x14))
                      (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 8)));
    return (undefined4)(uVar3);
  }
  return (undefined4)(0);
}


// Reference entry 1107f4b0; body size 107 bytes.
#line 1 "ENTRY_1107f4b0"

void __fastcall FUN_1107f4b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(0);
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = (int)(0);
    do {
      iVar4 = (int)(*(int *)(param_1 + 0x24) + iVar3);
      if (*(int **)(iVar4 + 4) != (int *)0x0) {
        if (*(int *)(iVar4 + 8) != 0) {
          (**(code **)(**(int **)(iVar4 + 4) + 0x10))();
        }
        puVar1 = (undefined4 *)(*(undefined4 **)(iVar4 + 4));
        if ((puVar1 != (undefined4 *)0x0) && (iVar2 = thunk_FUN_1123fcd0(puVar1 + 1), iVar2 == 0)) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined4 *)(iVar4 + 8) = 0;
      }
      iVar5 = (int)(iVar5 + 1);
      iVar3 = (int)(iVar3 + 0xc);
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}


// Reference entry 1107f540; body size 107 bytes.
#line 1 "ENTRY_1107f540"

void __fastcall FUN_1107f540(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(0);
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = (int)(0);
    do {
      iVar4 = (int)(*(int *)(param_1 + 0x24) + iVar3);
      if (*(int **)(iVar4 + 4) != (int *)0x0) {
        if (*(int *)(iVar4 + 8) != 0) {
          (**(code **)(**(int **)(iVar4 + 4) + 0x10))();
        }
        puVar1 = (undefined4 *)(*(undefined4 **)(iVar4 + 4));
        if ((puVar1 != (undefined4 *)0x0) && (iVar2 = thunk_FUN_1123fcd0(puVar1 + 1), iVar2 == 0)) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined4 *)(iVar4 + 8) = 0;
      }
      iVar5 = (int)(iVar5 + 1);
      iVar3 = (int)(iVar3 + 0xc);
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}


// Reference entry 1107f630; body size 83 bytes.
#line 1 "ENTRY_1107f630"

byte __fastcall FUN_1107f630(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(0);
  bVar2 = (byte)(1);
  uVar3 = (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2);
  if (uVar3 != 0) {
    do {
      cVar1 = (char)(thunk_FUN_110ca2e0());
      uVar4 = (uint)(uVar4 + 1);
      bVar2 = (byte)(bVar2 & -(cVar1 != '\0'));
    } while (uVar4 < uVar3);
  }
  return (byte)(bVar2);
}


// Reference entry 1107f6a0; body size 191 bytes.
#line 1 "ENTRY_1107f6a0"

void __fastcall FUN_1107f6a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_4;
  
  local_4 = (int)(param_1);
  thunk_FUN_11084b50();
  thunk_FUN_110844a0(0,0,0,0,0,1,&local_4);
  thunk_FUN_1109f7f0();
  thunk_FUN_110a2890(param_1);
  thunk_FUN_1112c280(param_1);
  if (DAT_121a7ba0 != 0) {
    thunk_FUN_111a7100("OnStopSearchForZonePlayers",0,0);
  }
  if (*(int **)(param_1 + 300) != (int *)0x0) {
    uVar2 = (undefined4)(0);
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 300) + 0x24))(0));
    thunk_FUN_1112a9c0(uVar1,uVar2);
    if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 300))(1);
    }
    *(undefined4 *)(param_1 + 300) = 0;
  }
  thunk_FUN_11091630();
  thunk_FUN_111a7300();
  thunk_FUN_111a7300();
  *(undefined4 *)(param_1 + 0x128) = 0;
  DAT_122e8d30 = (int)(0);
  thunk_FUN_11090320(1);
  return;
}


// Reference entry 1107f880; body size 104 bytes.
#line 1 "ENTRY_1107f880"

undefined4 __fastcall FUN_1107f880(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = (bool)(*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 2 != 0);
  if (bVar3) {
    thunk_FUN_10e460f0(*(int *)(param_1 + 0xb0),*(int *)(param_1 + 0xb4),
                       (undefined4 *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb0);
  }
  piVar1 = (int *)((int *)(param_1 + 0xbc));
  iVar2 = (int)(*(int *)(param_1 + 0xc0) - *piVar1);
  if (iVar2 >> 2 != 0) {
    thunk_FUN_11070a80(*piVar1,*(int *)(param_1 + 0xc0),piVar1);
    *(int *)(param_1 + 0xc0) = *piVar1;
    return (undefined4)(((uint)((int3)((uint)*piVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (undefined4)(((uint)((int3)(iVar2 >> 10)) << 8 | (uint)(bVar3)));
}


// Reference entry 1107f920; body size 192 bytes.
#line 1 "ENTRY_1107f920"

void FUN_1107f920(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 local_444 [1024];
  undefined1 local_44 [13];
  undefined1 local_37 [35];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a5790);
  local_10 = (void *)(ExceptionList);
  local_14 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  thunk_FUN_1145c720(local_444,0x400,"%s/groupsettings.txt",PTR_DAT_12126b6c,local_14);
  thunk_FUN_11458eb0(local_444,thunk_FUN_112afbd0);
  local_8 = (undefined4)(0);
  thunk_FUN_1145c250(local_44,"GroupSettings",0x2e);
  puVar1 = (undefined1 *)(local_37);
  uVar2 = (undefined4)(0x21);
  thunk_FUN_1109f7f0(puVar1,0x21);
  thunk_FUN_1109f100(puVar1,uVar2);
  thunk_FUN_1145a2e0(local_44);
  thunk_FUN_114591a0();
  ExceptionList = (void *)(local_10);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1107fa80; body size 203 bytes.
#line 1 "ENTRY_1107fa80"

void __stdcall FUN_1107fa80(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 *_Memory;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = (undefined1 *)(LAB_117a57dd);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  local_14 = (undefined1 *)((undefined1 *)0x0);
  local_8 = (undefined4)(0);
  thunk_FUN_111a10b0(&local_14,"http://%s:%hu/xml/device_description.xml",param_2,param_3 & 0xffff,
                     DAT_12126b84 ^ (uint)&stack0xfffffffc);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (local_14 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(local_14);
  }
  thunk_FUN_1108a9a0(param_1,puVar2,param_3,param_4,0,param_5,param_6,1);
  puVar2 = (undefined1 *)(local_14);
  local_8 = (undefined4)(1);
  if ((local_14 != (undefined1 *)0x0) &&
     (_Memory = local_14 + -0x10, *(int *)(local_14 + -0x10) < 0xffff)) {
    iVar1 = (int)(thunk_FUN_1123fcd0(_Memory));
    if (iVar1 == 0) {
      *(undefined4 *)(puVar2 + -8) = 0;
      *(undefined4 *)(puVar2 + -0xc) = 0;
      thunk_FUN_113cfb70(puVar2,*(undefined4 *)(puVar2 + -4));
      free(_Memory);
    }
  }
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 1107fc60; body size 140 bytes.
#line 1 "ENTRY_1107fc60"

undefined4 * __fastcall FUN_1107fc60(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a5874);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x2c));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_11261e50(uVar1);
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[10] = param_1;
    *puVar2 = (undefined4)((uint)&Ext_RUpnpPauseHouseOp_vftable);
    puVar2[2] = (uint)&Ext_RUpnpPauseHouseOp_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1107fd10; body size 140 bytes.
#line 1 "ENTRY_1107fd10"

undefined4 * __fastcall FUN_1107fd10(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a58b4);
  local_10 = (void *)(ExceptionList);
  uVar1 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  puVar2 = (undefined4 *)(operator_new(0x2c));
  local_8 = (undefined4)(0);
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_11261e50(uVar1);
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[10] = param_1;
    *puVar2 = (undefined4)((uint)&Ext_RUpnpStopHouseOp_vftable);
    puVar2[2] = (uint)&Ext_RUpnpStopHouseOp_vftable;
    ExceptionList = (void *)(local_10);
    return (undefined4 *)(puVar2);
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1107fdd0; body size 266 bytes.
#line 1 "ENTRY_1107fdd0"

undefined4 * __fastcall FUN_1107fdd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a58f7);
  local_10 = (void *)(ExceptionList);
  ExceptionList = (void *)(&local_10);
  if (DAT_121a7ba0 != 0) {
    iVar1 = (int)((*(code *)**(undefined4 **)(DAT_121a7ba0 + 0x1c))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
    if (iVar1 != 0) {
      iVar1 = (int)(*(int *)(iVar1 + 0x1c));
      puVar2 = (undefined4 *)(operator_new(0xd7d0));
      local_8 = (undefined4)(0);
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 0xda8) + 4) + 4 + iVar1 + 0xda4) +
                            0x48))());
        param_1 = (int)(param_1 + 8);
        uVar7 = (undefined4)(0);
        uVar6 = (undefined4)(2000);
        uVar5 = (undefined4)(2000);
        uVar4 = (undefined4)((**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 0xda8) + 4) + 4 + iVar1 + 0xda4) +
                            0x50))(2000,2000,0,param_1));
        thunk_FUN_111c0760(uVar3,"urn:schemas-upnp-org:service:SystemProperties:1",
                           "RefreshAccountCredentialsX",uVar4,uVar5,uVar6,uVar7,param_1);
        *puVar2 = (undefined4)((uint)&Ext_RUpnpSPRefreshAccountCredentialsXAIOOp_vftable);
        puVar2[0x18] = (uint)&Ext_RUpnpSPRefreshAccountCredentialsXAIOOp_vftable;
        puVar2[0x11b] = (uint)&Ext_RUpnpSPRefreshAccountCredentialsXAIOOp_vftable;
        ExceptionList = (void *)(local_10);
        return (undefined4 *)(puVar2);
      }
      ExceptionList = (void *)(local_10);
      return (undefined4 *)((undefined4 *)0x0);
    }
  }
  ExceptionList = (void *)(local_10);
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 1107ff20; body size 91 bytes.
#line 1 "ENTRY_1107ff20"

undefined4 __fastcall FUN_1107ff20(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  
  thunk_FUN_110f2980();
  cVar3 = (char)(thunk_FUN_111a0720("Unknown"));
  if (((cVar3 == '\0') && (pcVar1 = *(char **)(param_1 + 0x2d434), pcVar1 != (char *)0x0)) &&
     (*pcVar1 != '\0')) {
    pcVar2 = (char *)(*(char **)(param_1 + 0x2d43c));
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      uVar4 = (undefined4)(thunk_FUN_110f1830(pcVar2));
      return (undefined4)(uVar4);
    }
    uVar4 = (undefined4)(thunk_FUN_110f1c00(pcVar1));
    return (undefined4)(uVar4);
  }
  return (undefined4)(1);
}


// Reference entry 11080360; body size 322 bytes.
#line 1 "ENTRY_11080360"

void __stdcall FUN_11080360(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  uint _Size;
  size_t _Size_00;
  void *local_834 [2];
  int local_82c;
  uint local_828;
  int local_824;
  undefined1 local_80c [1028];
  undefined1 local_408 [1028];
  uint local_4;
  
  local_4 = (uint)(DAT_12126b84 ^ (uint)local_834);
  thunk_FUN_11245a50(param_1,local_834);
  if ((((local_834[0] != (void *)0x0) && (local_82c != 0)) && (local_824 != 0)) && (5 < local_828))
  {
    iVar1 = (int)(strncmp((char *)(local_82c + (local_828 - 6)),".x-udn",6));
    if (iVar1 == 0) {
      _Size_00 = (size_t)(local_82c - (int)local_834[0]);
      thunk_FUN_11245c20(&local_82c,local_80c,0x401,0x2e);
      memcpy(param_2,local_834[0],_Size_00);
      piVar2 = (int *)((int *)thunk_FUN_110935f0(local_80c,0));
      if (piVar2 != (int *)0x0) {
        _Size = (uint)((**(code **)(*piVar2 + 0x2c))(local_408,0x401));
        if (_Size != 0) {
          if (0x2000 - _Size_00 < _Size) {
            _Size = (uint)(0x2000 - _Size_00);
          }
          memcpy(param_2 + _Size_00,local_408,_Size);
          thunk_FUN_1106a8d0(param_2 + _Size_00 + _Size,local_824,0x2001 - (_Size_00 + _Size));
          goto LAB_11080488;
        }
      }
      *param_2 = (undefined1)(0);
      goto LAB_11080488;
    }
  }
  thunk_FUN_1106a8d0(param_2,param_1,0x2001);
LAB_11080488:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 110806d0; body size 212 bytes.
#line 1 "ENTRY_110806d0"

void __thiscall FUN_110806d0(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a5930);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)(*(int **)(param_1 + 4));
  piVar5 = (int *)(param_3 + 1);
  piVar6 = (int *)(param_3);
  if ((int *)(piVar5) != piVar4) {
    do {
      if ((int *)(piVar6) != piVar5) {
        puVar1 = (undefined4 *)((undefined4 *)*piVar6);
        if ((puVar1 != (undefined4 *)0x0) &&
           (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1,uVar2), iVar3 == 0)) {
          (**(code **)*puVar1)(1);
        }
        iVar3 = (int)(*piVar5);
        *piVar6 = (int)(iVar3);
        if (iVar3 != 0) {
          thunk_FUN_1123fce0(iVar3 + 4);
        }
      }
      piVar5 = (int *)(piVar5 + 1);
      piVar6 = (int *)(piVar6 + 1);
    } while ((int *)(piVar5) != piVar4);
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  puVar1 = (undefined4 *)((undefined4 *)piVar4[-1]);
  local_8 = (undefined4)(0);
  if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1,uVar2), iVar3 == 0)) {
    (**(code **)*puVar1)(1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110807e0; body size 212 bytes.
#line 1 "ENTRY_110807e0"

void __thiscall FUN_110807e0(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a5960);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)(*(int **)(param_1 + 4));
  piVar5 = (int *)(param_3 + 1);
  piVar6 = (int *)(param_3);
  if ((int *)(piVar5) != piVar4) {
    do {
      if ((int *)(piVar6) != piVar5) {
        puVar1 = (undefined4 *)((undefined4 *)*piVar6);
        if ((puVar1 != (undefined4 *)0x0) &&
           (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1,uVar2), iVar3 == 0)) {
          (**(code **)*puVar1)(1);
        }
        iVar3 = (int)(*piVar5);
        *piVar6 = (int)(iVar3);
        if (iVar3 != 0) {
          thunk_FUN_1123fce0(iVar3 + 4);
        }
      }
      piVar5 = (int *)(piVar5 + 1);
      piVar6 = (int *)(piVar6 + 1);
    } while ((int *)(piVar5) != piVar4);
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  puVar1 = (undefined4 *)((undefined4 *)piVar4[-1]);
  local_8 = (undefined4)(0);
  if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1,uVar2), iVar3 == 0)) {
    (**(code **)*puVar1)(1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 110808f0; body size 212 bytes.
#line 1 "ENTRY_110808f0"

void __thiscall FUN_110808f0(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a5990);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar4 = (int *)(*(int **)(param_1 + 4));
  piVar5 = (int *)(param_3 + 1);
  piVar6 = (int *)(param_3);
  if ((int *)(piVar5) != piVar4) {
    do {
      if ((int *)(piVar6) != piVar5) {
        puVar1 = (undefined4 *)((undefined4 *)*piVar6);
        if ((puVar1 != (undefined4 *)0x0) &&
           (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1,uVar2), iVar3 == 0)) {
          (**(code **)*puVar1)(1);
        }
        iVar3 = (int)(*piVar5);
        *piVar6 = (int)(iVar3);
        if (iVar3 != 0) {
          thunk_FUN_1123fce0(iVar3 + 4);
        }
      }
      piVar5 = (int *)(piVar5 + 1);
      piVar6 = (int *)(piVar6 + 1);
    } while ((int *)(piVar5) != piVar4);
    piVar4 = (int *)(*(int **)(param_1 + 4));
  }
  puVar1 = (undefined4 *)((undefined4 *)piVar4[-1]);
  local_8 = (undefined4)(0);
  if ((puVar1 != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1,uVar2), iVar3 == 0)) {
    (**(code **)*puVar1)(1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11080a00; body size 276 bytes.
#line 1 "ENTRY_11080a00"

void __thiscall FUN_11080a00(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = (undefined4)(0xffffffff);
  puStack_c = (undefined1 *)(LAB_117a59c0);
  local_10 = (void *)(ExceptionList);
  uVar2 = (uint)(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  ExceptionList = (void *)(&local_10);
  piVar5 = (int *)(*(int **)(param_1 + 4));
  piVar6 = (int *)(param_3 + 1);
  piVar4 = (int *)(param_3);
  if ((int *)(piVar6) != piVar5) {
    do {
      if ((int *)(piVar6) != piVar4) {
        iVar1 = (int)(*piVar4);
        if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
           (iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2), iVar3 == 0)) {
          *(undefined4 *)(iVar1 + -8) = 0;
          *(undefined4 *)(iVar1 + -0xc) = 0;
          thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
          free((void *)(iVar1 + -0x10));
        }
        iVar1 = (int)(*piVar6);
        *piVar4 = (int)(iVar1);
        if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
          thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
        }
      }
      piVar6 = (int *)(piVar6 + 1);
      piVar4 = (int *)(piVar4 + 1);
    } while ((int *)(piVar6) != piVar5);
    piVar5 = (int *)(*(int **)(param_1 + 4));
  }
  iVar1 = (int)(piVar5[-1]);
  local_8 = (undefined4)(0);
  if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
     (iVar3 = thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2), iVar3 == 0)) {
    *(undefined4 *)(iVar1 + -8) = 0;
    *(undefined4 *)(iVar1 + -0xc) = 0;
    thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
    free((void *)(iVar1 + -0x10));
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  *param_2 = (undefined4)(param_3);
  ExceptionList = (void *)(local_10);
  return;
}


// Reference entry 11080b60; body size 78 bytes.
#line 1 "ENTRY_11080b60"

void __thiscall FUN_11080b60(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11072480(local_c,param_3);
  if (*(char *)(local_4 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_111a0940(local_4 + 0x10));
    if (cVar1 == '\0') {
      *param_2 = (int)(local_4);
      return;
    }
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 11080bd0; body size 69 bytes.
#line 1 "ENTRY_11080bd0"

void __thiscall FUN_11080bd0(int *param_1,int *param_2,uint *param_3)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110723c0(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 11080c30; body size 69 bytes.
#line 1 "ENTRY_11080c30"

void __thiscall FUN_11080c30(int *param_1,int *param_2,uint *param_3)

{
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_11072420(local_c,param_3);
  if ((*(char *)(local_4 + 0xd) == '\0') && (*(uint *)(local_4 + 0x10) <= *param_3)) {
    *param_2 = (int)(local_4);
    return;
  }
  *param_2 = (int)(*param_1);
  return;
}


// Reference entry 11080c90; body size 78 bytes.
#line 1 "ENTRY_11080c90"

void __thiscall FUN_11080c90(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_110724f0(local_c,param_3);
  if (*(char *)(local_4 + 0xd) == '\0') {
    cVar1 = (char)(thunk_FUN_111a0940(local_4 + 0x10));
    if (cVar1 == '\0') {
      *param_2 = (int)(local_4);
      return;
    }
  }
  *param_2 = (int)(*param_1);
  return;
}


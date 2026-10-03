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
extern int FUN_10f4e610(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern int __alldiv(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int terminate(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012cdb0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2e20(...);
extern int thunk_FUN_101a3700(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_107558b0(...);
extern int thunk_FUN_107af2b0(...);
extern int thunk_FUN_10a0bf70(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10ec0860(...);
extern int thunk_FUN_10ef4470(...);
extern int thunk_FUN_10ef6280(...);
extern int thunk_FUN_10f01e70(...);
extern int thunk_FUN_10f23350(...);
extern int thunk_FUN_10f234a0(...);
extern int thunk_FUN_10f238a0(...);
extern int thunk_FUN_10f27b60(...);
extern int thunk_FUN_10f4dd60(...);
extern int thunk_FUN_10f4e610(...);
extern int thunk_FUN_10f4e790(...);
extern int thunk_FUN_110bc160(...);
extern int thunk_FUN_1113eb00(...);
extern int thunk_FUN_111a2140(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a74d0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a200(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145afb0(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c460(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11d330dc;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RInitiateDiagnosticsRequest;
extern int ghidra_vftable_RNSSendBeginSetupOp;
extern int ghidra_vftable_RReportDiagnosticsStatusRequest;
extern int ghidra_vftable_RServiceAuthHeaderBuilderFactory;
extern int ghidra_vftable_RSubmitDiagnosticsAIOOp;
extern int ghidra_vftable_RTempDisableNetworkRequest;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp;
extern int ghidra_vftable_RUpnpDPAddBondedZonesAIOOp;
extern int ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp;
extern int ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp;
extern int ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
extern int ghidra_vftable_RefCountBase;
extern int ghidra_vftable_SCBitmapResizer;
extern int ghidra_vftable_SCIArea;
extern int ghidra_vftable_SCIDeviceVolume;
extern int ghidra_vftable_SCIGroupVolume;
extern int ghidra_vftable_SCINowPlaying;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpContentDirectoryGetAlbumArtistDisplayOption;
extern int ghidra_vftable_SCIOpHTControlGetIRRepeaterState;
extern int ghidra_vftable_SCIOpHTControlSetIRRepeaterState;
extern int ghidra_vftable_SCIOpHTControlSetLEDFeedbackState;
extern int ghidra_vftable_SCIOpJoinHousehold;
extern int ghidra_vftable_SCIOpRenderingControlGetRoomCalibrationStatus;
extern int ghidra_vftable_SCIOpSubmitDiagnostics;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCIPlayQueue;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCImprovedBitmapEnlarger;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCServiceAuthHeaderBuilderFactory;
extern int ghidra_vftable_SCSettingsReplicatorEqualizerSink;
extern int ghidra_vftable_SCSettingsReplicatorMusicLibrary_EventSink;
extern int ghidra_vftable_SCSwfListenerGroupVolume;
extern int ghidra_vftable_SCSwfObjJHHListener;
extern int ghidra_vftable_SwfObj;
extern int in_EAX;
extern undefined1 LAB_117c1080[];
extern undefined1 LAB_117c174c[];
extern undefined1 LAB_117c17f0[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
typedef void *BLAHBLAHBLAH;
typedef void *BLE;
typedef void *BTCLASSIC;
typedef void *CLOUD;
typedef void *E9;
typedef void *LAN;
typedef void *SONOSMULTIPARTBOUNDARY;
typedef void *WARNING;
typedef void *WIFISCAN;
struct AddBondedZones { char _pad; AddBondedZones(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct CurrentTrack { char _pad; CurrentTrack(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Exceeded { char _pad; Exceeded(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct FlashDebugObjects { char _pad; FlashDebugObjects(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetAlbumArtistDisplayOption { char _pad; GetAlbumArtistDisplayOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetIRRepeaterState { char _pad; GetIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct GetRoomCalibrationStatus { char _pad; GetRoomCalibrationStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct HTControl { char _pad; HTControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Incomplete { char _pad; Incomplete(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Memory { char _pad; Memory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Missing { char _pad; Missing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Of { char _pad; Of(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Out { char _pad; Out(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct RenderingControl { char _pad; RenderingControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIDeviceVolume { char _pad; SCIDeviceVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingRatings { char _pad; SCINowPlayingRatings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCINowPlayingSleepTimer { char _pad; SCINowPlayingSleepTimer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpContentDirectoryGetAlbumArtistDisplayOption { char _pad; SCIOpContentDirectoryGetAlbumArtistDisplayOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpHTControlGetIRRepeaterState { char _pad; SCIOpHTControlGetIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpHTControlSetIRRepeaterState { char _pad; SCIOpHTControlSetIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpHTControlSetLEDFeedbackState { char _pad; SCIOpHTControlSetLEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpRenderingControlGetRoomCalibrationStatus { char _pad; SCIOpRenderingControlGetRoomCalibrationStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIOpSubmitDiagnostics { char _pad; SCIOpSubmitDiagnostics(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCSwfListenerGroupVolume { char _pad; SCSwfListenerGroupVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Sequence { char _pad; Sequence(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SubmitDiagnostics { char _pad; SubmitDiagnostics(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Unexpected { char _pad; Unexpected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct ZoneGroupTopology { char _pad; ZoneGroupTopology(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef5750(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ef5780(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10ef57c0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef5c40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef5d50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef5d60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef62f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef6300(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef7020(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef7030(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef7040(undefined4 *param_2,void *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef7080(undefined4 *param_2,void *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ef8250(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9560(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9590(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9730(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9760(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9770(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9780(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef97a0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef97b0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef97c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef97f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9820(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9830(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9cf0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9d10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9d20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9db0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9dc0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10ef9dd0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10ef9ee0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10efa250(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10efa5b0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10efa900(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10efa910(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10efabc0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10efabd0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10efabe0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f01580(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f015a0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f016b0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f016d0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f01890(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f018b0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f02130(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f02230(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f02240(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f02350(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f03810(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f03880(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f03a10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f06520(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f0e8e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f11c50(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f14300(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f15970(undefined4 *param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f159a0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f15b40(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f16ea0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f16ec0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f16ee0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f16f70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f16f80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f17010(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f17020(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f17050(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10f17d60(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10f17d80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10f18360(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10f189e0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10f189f0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f192d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f195f0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f19600(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f1a120(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1ac40(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1ac90(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1acd0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1acf0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1ad10(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1b010(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1b030(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1b050(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1b070(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1b0c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1bee0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1bf00(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f1bf20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f1db60(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f1dbd0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f1dc40(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f217f0(undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f22970(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f22a10(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f22b10(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f22b90(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f22e40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f22e70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f22e80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f231d0(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f23260(int *param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f23880(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f23c70(int *param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f243a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24890(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f248b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24900(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24940(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24990(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f249d0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f249f0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24a80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24b10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24ba0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24f40(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24fb0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f24fc0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f255c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f25980(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f26280(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10f262c0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10f262e0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10f26320(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10f26340(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10f26360(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10f264c0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f26c00(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f26c70(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10f26ca0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10f26ea0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10f26ec0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f27390(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f275c0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f275d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f27850(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f27870(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f27bd0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f27be0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f27bf0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f29d20(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f29d30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f2bf10(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f33f50(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f33f80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f33fb0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f33fe0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f34010(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f34040(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f37330(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f37370(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f37390(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f37590(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f375b0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f375d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f37e20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f37e40(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f39050(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f390c0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f40a80(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f40aa0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f40ac0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f40ae0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f40b20(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f40e50(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f40e90(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f43930(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f43ce0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f43d20(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f49360(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f49420(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f49450(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f49480(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f49ad0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f49b10(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f49b50(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f49be0(undefined4 param_2,undefined4 param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4a650(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10f4ab50(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10f4b0b0(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10f4b470(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall FUN_10f4d0b0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f4d4c0(undefined4 param_2,int *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4d510(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4d650(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f4d690(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f4d760(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f4d780(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f4d870(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4df30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4dfa0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4e090(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4e0a0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4e0d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4e0e0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4e4c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f4e500(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10f4ec70(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f4f680(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f4f6a0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f4f6b0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f4f6c0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10f4f820(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f52810(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f52830(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f552a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f552c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f552e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f55300(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f55320(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f55340(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f55360(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f55380(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f553a0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f553c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f553e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f562e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f56390(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f64be0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f65180(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f651c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f666e0(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f66700(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f692e0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6b180(undefined4 param_2,undefined4 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6b1b0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6b2b0(undefined4 *param_2,undefined1 *param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6b2d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6b910(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6b960(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6b9c0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6b9d0(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6ba60(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6ba70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10f6c0c0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f6cc60(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f6d0d0(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f6d300(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f6fd30(undefined4 *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f71550(uint param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f71a70(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f71a90(int param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f71b70(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10f71b80(undefined4 param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f725e0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f72610(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10f741b0(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10f74650(int *param_2); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10f75910(int param_2,int param_3); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10f76300(int param_2,int param_3); };
using namespace std;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef5900(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef5910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef59a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef5cb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef5cc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5cd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ef5d70(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ef5da0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef5dd0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef5e00(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5e30(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5e60(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ef6210(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ef6310(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ef6320(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef6330(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef6450(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7c70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7c80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7c90(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7ca0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7cb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7cc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef86b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ef86c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9840(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef98f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10ef9900(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9b70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9b80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9b90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9ba0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9bb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9bc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9bf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c20(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9ca0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9cb0(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9cc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9cd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9ce0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef9ea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10efa0e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10efa0f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10efa270(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa2d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa2e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa2f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa300(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa310(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10efa620(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa650(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10efab60(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f00ab0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f00ac0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f00ad0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f010d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f01540(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f01560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f015c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f015e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f018d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f018f0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01900(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01910(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01cf0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01d10(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f01d40(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01d60(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01d80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01d90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01da0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01db0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01e60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f20(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f40(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01fa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01fb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01fc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01fd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f020e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f020f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f02100(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f02110(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f02360(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f02380(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f02390(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f023a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f02450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f02e60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f02ea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f02fd0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f02fe0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f02ff0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f03000(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f031a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f03200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f03290(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f038f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f03a20(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f03f30(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f03fa0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f03ff0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f047f0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04810(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04820(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04830(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04840(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04d20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04db0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f05dd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f06420(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f06450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f06470(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f064a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f064c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f064f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f06540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10f0b980(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f0d4c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f0d4d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0d570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0d6c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0d6f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0e4a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0e560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0e610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0e990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f0fa00(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f0fa10(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f0fa20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f0fd90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f0fdc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f0fe30(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fe60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fe70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fe80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fe90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f0feb0(char *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f10f40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11510(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f11570(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11590(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f11710(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11f10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11f20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f12050(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f12070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f12090(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f120b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f120d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f13630(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f13860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f141b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f141d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f15900(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f15920(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f15950(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f159c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f15c80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f15c90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d40(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d60(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d70(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f15d80(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15db0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15dc0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15dd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15de0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16460(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16550(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f16580(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16610(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16650(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16660(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16880(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16890(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f168f0(void *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f16930(void *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f169a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f169b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16bc0(undefined4 param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f16be0(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16ca0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16cc0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16dc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16e30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16e40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16e50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f16e60(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f16f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f17030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f17070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f17090(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f170a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f170b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f17110(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f17120(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f17200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f17da0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f17ee0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f17f00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f17f20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f17f30(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f18310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f18460(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f188c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f188d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f188f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18910(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18920(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18930(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18960(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18970(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18980(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18990(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f189a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f189b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f189c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f189d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18a00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f18f10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f18f20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f18f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f19010(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f19020(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f19030(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f19040(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f19050(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f19060(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f19070(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f19080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f19620(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f19630(undefined1 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f19640(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f19670(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f196e0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f19760(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f197e0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f19c70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f19f70(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f19fc0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1a010(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1a060(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1a0b0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1a100(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1a110(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1a5c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1a5e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1a6e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a6f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a700(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a710(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a720(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a730(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a740(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1ac00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1ac20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1ad30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1ad50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b130(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b150(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b170(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b180(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b190(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b1a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b1b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b1c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b1d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b550(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b570(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1b6e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1b6f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1b700(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10f1b710(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10f1b740(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bba0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bbb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bbc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bbd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bbe0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1bbf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1bc30(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bdc0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bde0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be00(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be20(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be40(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bea0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1beb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bec0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bed0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1c180(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1c190(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c1a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c1f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c2d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c300(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1c730(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1c750(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1d140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1d170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d260(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d270(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d280(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d290(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d300(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d310(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d320(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d330(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d340(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d350(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d360(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d370(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d380(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d390(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d3a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1dcb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1dcc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1dcd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f1de30(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f1dea0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1fb70(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1fbc0(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1fc10(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1fc60(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1fcc0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1fd10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1fd20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f20a40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f20af0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f214e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f214f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f21500(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f21510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f21520(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f21530(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f21740(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f217d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f217e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f219e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f21ef0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f229a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f229c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f229f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22a30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22b30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22b50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f22b70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f22b80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22ce0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22e20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f22eb0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f22ec0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f22ed0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f231b0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f231c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f232f0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f23320(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23740(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23750(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23760(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23770(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23cd0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23d70(undefined4 *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23da0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23dc0(undefined4 *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23df0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f23e00(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23e20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10f23e30(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23e60(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23e70(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23fe0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10f23ff0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24020(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24030(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f24040(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f24070(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f240a0(void *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f240d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f240e0(void *param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24110(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24130(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24140(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24150(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f24160(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f24180(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f241d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f24200(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f242a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f243d0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f24400(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24410(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24430(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24500(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24510(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24520(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24530(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24540(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24550(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24560(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24570(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24580(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24590(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24600(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f24610(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24620(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24630(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24640(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24650(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f24660(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f24a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f24bb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f24bd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f24bf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f24c00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f24c10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f24d90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f25040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f259c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f25b60(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f25b70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f25b80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f25cb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f26180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f26270(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10f26380(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f264d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f264e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f264f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26520(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26550(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26560(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26570(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26580(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26590(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10f26780(int *param_1,int *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f26c20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f26d70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f26d80(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26d90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26da0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26db0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26dc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26dd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26de0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26df0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26ee0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26ef0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f27400(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f27410(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f27420(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f27450(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10f27480(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f274b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f274c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f274d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f274e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f274f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f27500(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f27510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f27520(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f27530(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f27540(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10f277c0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f277f0(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f27820(void *param_1,int param_2,void *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f27a00(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f27a70(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f27af0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f27e70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f29b70(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f29bc0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f29c10(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f29c70(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f29cc0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f29d10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f29d60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f2b810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f2b820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b830(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b840(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b850(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b860(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b870(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b880(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2bc70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2ce10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2ce20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2ce30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f2ce90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f2cea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f2ceb0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f30bd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f32820(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f32830(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f32840(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f32850(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f33ea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f34130(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f34150(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f34170(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f34190(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f35920(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f35930(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f35940(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f35950(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f35990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f365a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f365b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f37310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f373b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37640(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37660(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37670(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37680(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37690(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37880(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37940(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37950(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10f37960(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c50(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37c80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37d70(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37d90(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37db0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37dd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37de0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37df0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37e00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37e10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f37fa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f37fc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f37fd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f38020(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38040(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f38320(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f389b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38a60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38a70(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38a80(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38a90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38aa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38ab0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38ac0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38ad0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38ae0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38af0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38b00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38b10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38b20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f39130(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f39140(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f39230(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f39c00(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f39c50(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f39cb0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f39d00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f3bd30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f3be00(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f3c750(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f3c760(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f3c770(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f3c780(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f3c990(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f3ca20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f3ca30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f3ca60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f3ce10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f3ce40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f3f0e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f40170(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10f40570(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f40580(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f40de0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f40df0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40e20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40ed0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40ef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40f10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40f30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40fd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f41270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f41290(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f41610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f419c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f419d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f419e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f419f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f41a00(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f41a10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f41b70(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f41b80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f428a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f428b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f428c0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d50(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d80(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d90(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f43c30(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f43c70(undefined4 *param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f43cb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f43d60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f43dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f43e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f44640(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f44660(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f44990(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f44e60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f44e70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f44e80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f44e90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f44ea0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45870(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45890(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f458a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f45de0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f45f70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45fe0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45ff0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f460d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f46be0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f46c10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f46c20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f46c50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10f46c60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f47890(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f478a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f47f60(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f48130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f483d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f484b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49340(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49770(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49780(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f498d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f49900(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f49930(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49a20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49a30(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49a40(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f49a50(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49a60(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49a70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49aa0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49c00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f49c20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49c30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4a560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4a570(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4a6b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4a6d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4aa20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4aa30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4aad0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ab60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4ab70(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ab80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ab90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4b1a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4b1b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4b1c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4b1d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4b1e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4b1f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f4b520(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4b9b0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4be40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4be80(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f4be90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f4bea0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4c1c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f4c220(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4c810(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4c820(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4c960(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4d280(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4d5f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4d610(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4d630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4d670(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4d680(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d810(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d820(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d830(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d840(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d850(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d860(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d960(undefined4 param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d9a0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d9c0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4d9e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4d9f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dc90(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dca0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dcb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dcc0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dcd0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4dce0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dd40(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dde0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4ddf0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4de00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4de10(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4de20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4de30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4df60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4e0b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4e100(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4e120(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4e510(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4e720(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4e860(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4ea60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4ecc0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ecd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4ece0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ecf0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ed00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4ed10(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4ed20(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4ed30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4ed40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10f4ed50(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4ee10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4ef90(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f360(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f370(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f380(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f390(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f3a0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f3b0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f440(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f450(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4f4d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f590(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4f5a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4f6d0(int param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f4f730(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f4f7b0(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f850(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4f860(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4f950(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f4f9a0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f4f9f0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4fa40(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10f513c0(float *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f513d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f513e0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f513f0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f51400(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f514f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f51500(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f51de0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f51ea0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f51eb0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f51f50(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f51f60(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f525a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f527e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f527f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f52800(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f53110(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f55920(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f55930(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f55940(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f55950(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f55ba0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f55bd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f55c00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f55c30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f56440(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f56450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f56460(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f56470(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f577c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f577f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57830(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57850(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58020(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58040(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58060(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58080(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f580a0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f580b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f580c0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f580d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f580e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f580f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58100(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58110(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58120(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58130(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58140(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58150(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58160(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58170(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58180(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58190(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581a0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58210(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58220(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58230(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58240(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58250(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58260(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f5e690(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f5e800(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f61560(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f61580(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f61880(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f61890(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f618a0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f618b0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62040(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62050(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62070(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62080(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62090(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620c0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f64d20(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f64d30(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f64dd0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f64f60(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f650e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f650f0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f65280(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f65f30(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f65f50(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f65f80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f661f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f66200(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f66210(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f66220(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f66230(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f666b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f666c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f666d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f66d70(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f66f40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f675b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f676d0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f678e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f69c80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f69ca0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6b160(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6b1d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b300(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b320(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b330(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b340(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b4f0(undefined4 param_1,undefined4 param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b590(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10f6b5a0(int param_1,uint *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b6f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b700(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b710(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b720(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b730(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b740(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b750(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b8a0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b8c0(undefined4 *param_1,undefined4 *param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b8e0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b8f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b900(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6b940(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6ba80(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6baa0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6bab0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f6bd70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c1d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6c1e0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6c1f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f6c370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c7f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c800(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c810(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c840(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c860(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f6cb70(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6cbd0(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6cbe0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f6d050(uint param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6d250(undefined4 param_1,int param_2,int param_3);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f6d2a0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f6d810(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f6d820(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6d830(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6d840(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6d850(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6e500(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6e560(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6ee90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10f6f380(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f4c0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f6f7c0(int param_1,int param_2);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f7d0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f7f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f800(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f820(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f830(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f9f0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6fa00(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6fc90(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6fda0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6fdb0(undefined4 param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6fdc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6fdd0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6fed0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f70ca0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f710f0(int *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71140(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f71150(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f71160(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71170(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71180(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f719d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f719e0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71a10(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71a20(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f71a30(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f71a40(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f72480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f72560(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f72580(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f725b0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f725c0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f725d0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f72680(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f73630(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f741a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f749a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f74f00(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f75900(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76bb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76bc0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f76be0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f76bf0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f76d20(void);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76f90(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76fa0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76fb0(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f77120(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f77130(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f77280(int param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f77290(int param_1);
// Reference entry 10ef5750; body size 30 bytes.
#line 1 "ENTRY_10ef5750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef5750(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10ef6280(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 10ef5780; body size 49 bytes.
#line 1 "ENTRY_10ef5780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ef5780(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10ef57c0; body size 49 bytes.
#line 1 "ENTRY_10ef57c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10ef57c0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10ef5900; body size 3 bytes.
#line 1 "ENTRY_10ef5900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef5900(void)

{
  return;
}


// Reference entry 10ef5910; body size 3 bytes.
#line 1 "ENTRY_10ef5910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef5910(void)

{
  return;
}


// Reference entry 10ef5920; body size 3 bytes.
#line 1 "ENTRY_10ef5920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef5930; body size 3 bytes.
#line 1 "ENTRY_10ef5930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef5940; body size 3 bytes.
#line 1 "ENTRY_10ef5940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef5950; body size 3 bytes.
#line 1 "ENTRY_10ef5950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef5960; body size 3 bytes.
#line 1 "ENTRY_10ef5960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef5970; body size 3 bytes.
#line 1 "ENTRY_10ef5970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef5980; body size 3 bytes.
#line 1 "ENTRY_10ef5980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef5990; body size 3 bytes.
#line 1 "ENTRY_10ef5990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef59a0; body size 3 bytes.
#line 1 "ENTRY_10ef59a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef59a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef5c40; body size 79 bytes.
#line 1 "ENTRY_10ef5c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef5c40(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10ef5cb0; body size 3 bytes.
#line 1 "ENTRY_10ef5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef5cb0(void)

{
  return;
}


// Reference entry 10ef5cc0; body size 3 bytes.
#line 1 "ENTRY_10ef5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef5cc0(void)

{
  return;
}


// Reference entry 10ef5cd0; body size 11 bytes.
#line 1 "ENTRY_10ef5cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5cd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ef5d50; body size 9 bytes.
#line 1 "ENTRY_10ef5d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef5d50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef5d60; body size 9 bytes.
#line 1 "ENTRY_10ef5d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef5d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef5d70; body size 38 bytes.
#line 1 "ENTRY_10ef5d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10ef5d70(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ef5da0; body size 38 bytes.
#line 1 "ENTRY_10ef5da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10ef5da0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ef5dd0; body size 27 bytes.
#line 1 "ENTRY_10ef5dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef5dd0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ef5e00; body size 27 bytes.
#line 1 "ENTRY_10ef5e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef5e00(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ef5e30; body size 27 bytes.
#line 1 "ENTRY_10ef5e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef5e30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ef5e60; body size 27 bytes.
#line 1 "ENTRY_10ef5e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef5e60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ef5e90; body size 3 bytes.
#line 1 "ENTRY_10ef5e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5e90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef5ea0; body size 3 bytes.
#line 1 "ENTRY_10ef5ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5ea0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef6210; body size 87 bytes.
#line 1 "ENTRY_10ef6210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ef6210(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10ef62f0; body size 11 bytes.
#line 1 "ENTRY_10ef62f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef62f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ef6300; body size 11 bytes.
#line 1 "ENTRY_10ef6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef6300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ef6310; body size 9 bytes.
#line 1 "ENTRY_10ef6310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ef6310(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ef6320; body size 9 bytes.
#line 1 "ENTRY_10ef6320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ef6320(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ef6330; body size 6 bytes.
#line 1 "ENTRY_10ef6330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef6330(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10ef6450; body size 66 bytes.
#line 1 "ENTRY_10ef6450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef6450(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x1c);
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


// Reference entry 10ef7020; body size 12 bytes.
#line 1 "ENTRY_10ef7020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef7020(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ef7030; body size 12 bytes.
#line 1 "ENTRY_10ef7030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef7030(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ef7040; body size 42 bytes.
#line 1 "ENTRY_10ef7040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef7040(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(void *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10ef7080; body size 42 bytes.
#line 1 "ENTRY_10ef7080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef7080(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(void *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10ef7c70; body size 6 bytes.
#line 1 "ENTRY_10ef7c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7c70(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10ef7c80; body size 6 bytes.
#line 1 "ENTRY_10ef7c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7c80(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10ef7c90; body size 6 bytes.
#line 1 "ENTRY_10ef7c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7c90(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10ef7ca0; body size 6 bytes.
#line 1 "ENTRY_10ef7ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7ca0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10ef7cb0; body size 6 bytes.
#line 1 "ENTRY_10ef7cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7cb0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10ef7cc0; body size 6 bytes.
#line 1 "ENTRY_10ef7cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7cc0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10ef8250; body size 36 bytes.
#line 1 "ENTRY_10ef8250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ef8250(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10ef4470(puVar1,param_2);
  return;
}


// Reference entry 10ef86b0; body size 5 bytes.
#line 1 "ENTRY_10ef86b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef86b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef86c0; body size 9 bytes.
#line 1 "ENTRY_10ef86c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ef86c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10ef9560; body size 32 bytes.
#line 1 "ENTRY_10ef9560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9560(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9590; body size 22 bytes.
#line 1 "ENTRY_10ef9590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9590(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9730; body size 32 bytes.
#line 1 "ENTRY_10ef9730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9730(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9760; body size 11 bytes.
#line 1 "ENTRY_10ef9760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9760(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9770; body size 11 bytes.
#line 1 "ENTRY_10ef9770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9780; body size 22 bytes.
#line 1 "ENTRY_10ef9780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9780(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef97a0; body size 11 bytes.
#line 1 "ENTRY_10ef97a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef97a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef97b0; body size 11 bytes.
#line 1 "ENTRY_10ef97b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef97b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef97c0; body size 34 bytes.
#line 1 "ENTRY_10ef97c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef97c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef97f0; body size 34 bytes.
#line 1 "ENTRY_10ef97f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef97f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9820; body size 11 bytes.
#line 1 "ENTRY_10ef9820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9820(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9830; body size 11 bytes.
#line 1 "ENTRY_10ef9830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9830(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9840; body size 13 bytes.
#line 1 "ENTRY_10ef9840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ef98f0; body size 5 bytes.
#line 1 "ENTRY_10ef98f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef98f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9900; body size 31 bytes.
#line 1 "ENTRY_10ef9900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10ef9900(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10ef9b70; body size 7 bytes.
#line 1 "ENTRY_10ef9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9b70(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef9b80; body size 7 bytes.
#line 1 "ENTRY_10ef9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9b80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10ef9b90; body size 5 bytes.
#line 1 "ENTRY_10ef9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9b90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9ba0; body size 5 bytes.
#line 1 "ENTRY_10ef9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9ba0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9bb0; body size 5 bytes.
#line 1 "ENTRY_10ef9bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9bb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9bc0; body size 29 bytes.
#line 1 "ENTRY_10ef9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9bc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10ef9bf0; body size 29 bytes.
#line 1 "ENTRY_10ef9bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9bf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10ef9c20; body size 15 bytes.
#line 1 "ENTRY_10ef9c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10ef9c40; body size 5 bytes.
#line 1 "ENTRY_10ef9c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9c50; body size 5 bytes.
#line 1 "ENTRY_10ef9c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9c60; body size 5 bytes.
#line 1 "ENTRY_10ef9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9c70; body size 5 bytes.
#line 1 "ENTRY_10ef9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9c80; body size 5 bytes.
#line 1 "ENTRY_10ef9c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9c90; body size 5 bytes.
#line 1 "ENTRY_10ef9c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9ca0; body size 11 bytes.
#line 1 "ENTRY_10ef9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9ca0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef9cb0; body size 11 bytes.
#line 1 "ENTRY_10ef9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9cb0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef9cc0; body size 5 bytes.
#line 1 "ENTRY_10ef9cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9cc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9cd0; body size 5 bytes.
#line 1 "ENTRY_10ef9cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9cd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9ce0; body size 5 bytes.
#line 1 "ENTRY_10ef9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9ce0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10ef9cf0; body size 18 bytes.
#line 1 "ENTRY_10ef9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9cf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9d10; body size 11 bytes.
#line 1 "ENTRY_10ef9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9d10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9d20; body size 11 bytes.
#line 1 "ENTRY_10ef9d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9d20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9db0; body size 11 bytes.
#line 1 "ENTRY_10ef9db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9db0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9dc0; body size 13 bytes.
#line 1 "ENTRY_10ef9dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9dc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9dd0; body size 13 bytes.
#line 1 "ENTRY_10ef9dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10ef9dd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10ef9ea0; body size 19 bytes.
#line 1 "ENTRY_10ef9ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef9ea0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10ef9ee0; body size 14 bytes.
#line 1 "ENTRY_10ef9ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10ef9ee0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10efa0e0; body size 6 bytes.
#line 1 "ENTRY_10efa0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10efa0e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10efa0f0; body size 6 bytes.
#line 1 "ENTRY_10efa0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10efa0f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10efa250; body size 16 bytes.
#line 1 "ENTRY_10efa250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10efa250(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  *param_1 = (int)(iVar1 + 8);
  return;
}


// Reference entry 10efa270; body size 18 bytes.
#line 1 "ENTRY_10efa270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10efa270(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 < *param_2);
}


// Reference entry 10efa2d0; body size 3 bytes.
#line 1 "ENTRY_10efa2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa2d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10efa2e0; body size 3 bytes.
#line 1 "ENTRY_10efa2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa2e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10efa2f0; body size 3 bytes.
#line 1 "ENTRY_10efa2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa2f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10efa300; body size 3 bytes.
#line 1 "ENTRY_10efa300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa300(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10efa310; body size 3 bytes.
#line 1 "ENTRY_10efa310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa310(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10efa5b0; body size 79 bytes.
#line 1 "ENTRY_10efa5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10efa5b0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10efa620; body size 31 bytes.
#line 1 "ENTRY_10efa620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10efa620(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10efa650; body size 11 bytes.
#line 1 "ENTRY_10efa650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa650(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10efa900; body size 13 bytes.
#line 1 "ENTRY_10efa900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10efa900(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10efa910; body size 11 bytes.
#line 1 "ENTRY_10efa910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10efa910(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10efab60; body size 66 bytes.
#line 1 "ENTRY_10efab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10efab60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x1c);
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


// Reference entry 10efabc0; body size 11 bytes.
#line 1 "ENTRY_10efabc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10efabc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10efabd0; body size 11 bytes.
#line 1 "ENTRY_10efabd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10efabd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10efabe0; body size 12 bytes.
#line 1 "ENTRY_10efabe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10efabe0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10f00ab0; body size 6 bytes.
#line 1 "ENTRY_10f00ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f00ab0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f00ac0; body size 6 bytes.
#line 1 "ENTRY_10f00ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f00ac0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f00ad0; body size 5 bytes.
#line 1 "ENTRY_10f00ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f00ad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f010d0; body size 4 bytes.
#line 1 "ENTRY_10f010d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f010d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f01540; body size 18 bytes.
#line 1 "ENTRY_10f01540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f01540(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f01560; body size 18 bytes.
#line 1 "ENTRY_10f01560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f01560(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f01580; body size 22 bytes.
#line 1 "ENTRY_10f01580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f01580(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f015a0; body size 22 bytes.
#line 1 "ENTRY_10f015a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f015a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f015c0; body size 18 bytes.
#line 1 "ENTRY_10f015c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f015c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f015e0; body size 18 bytes.
#line 1 "ENTRY_10f015e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f015e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f016b0; body size 22 bytes.
#line 1 "ENTRY_10f016b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f016b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f016d0; body size 22 bytes.
#line 1 "ENTRY_10f016d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f016d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f01890; body size 22 bytes.
#line 1 "ENTRY_10f01890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f01890(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f018b0; body size 22 bytes.
#line 1 "ENTRY_10f018b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f018b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f018d0; body size 25 bytes.
#line 1 "ENTRY_10f018d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f018d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x74));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10f018f0; body size 13 bytes.
#line 1 "ENTRY_10f018f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f018f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f01900; body size 13 bytes.
#line 1 "ENTRY_10f01900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01900(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f01910; body size 3 bytes.
#line 1 "ENTRY_10f01910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01910(void)

{
  return;
}


// Reference entry 10f01cf0; body size 15 bytes.
#line 1 "ENTRY_10f01cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01cf0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x74);
  return;
}


// Reference entry 10f01d10; body size 31 bytes.
#line 1 "ENTRY_10f01d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01d10(undefined4 param_1,int param_2)

{
  thunk_FUN_10f01e70(param_1,param_2 + 0x10);
  thunk_FUN_1148a50e(param_2,0x74);
  return;
}


// Reference entry 10f01d40; body size 19 bytes.
#line 1 "ENTRY_10f01d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f01d40(uint param_1)

{
  undefined1 auStack_c [12];
  
  if (param_1 < 0x234f72d) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 * 0x74);
  }
  thunk_FUN_1011bdc0();
                    
  _CxxThrowException(auStack_c,(ThrowInfo *)&DAT_11d330dc);
}


// Reference entry 10f01d60; body size 19 bytes.
#line 1 "ENTRY_10f01d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01d60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10f01d80; body size 5 bytes.
#line 1 "ENTRY_10f01d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01d80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01d90; body size 5 bytes.
#line 1 "ENTRY_10f01d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01d90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01da0; body size 5 bytes.
#line 1 "ENTRY_10f01da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01da0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01db0; body size 5 bytes.
#line 1 "ENTRY_10f01db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01db0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01e60; body size 13 bytes.
#line 1 "ENTRY_10f01e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01e60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10f01f20; body size 15 bytes.
#line 1 "ENTRY_10f01f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f01f40; body size 15 bytes.
#line 1 "ENTRY_10f01f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f01f60; body size 5 bytes.
#line 1 "ENTRY_10f01f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01f70; body size 5 bytes.
#line 1 "ENTRY_10f01f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01f80; body size 5 bytes.
#line 1 "ENTRY_10f01f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01f90; body size 5 bytes.
#line 1 "ENTRY_10f01f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01fa0; body size 5 bytes.
#line 1 "ENTRY_10f01fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01fa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01fb0; body size 5 bytes.
#line 1 "ENTRY_10f01fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01fb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01fc0; body size 5 bytes.
#line 1 "ENTRY_10f01fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01fc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f01fd0; body size 5 bytes.
#line 1 "ENTRY_10f01fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01fd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f020e0; body size 5 bytes.
#line 1 "ENTRY_10f020e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f020e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f020f0; body size 5 bytes.
#line 1 "ENTRY_10f020f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f020f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f02100; body size 5 bytes.
#line 1 "ENTRY_10f02100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f02100(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f02110; body size 19 bytes.
#line 1 "ENTRY_10f02110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f02110(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10f02130; body size 18 bytes.
#line 1 "ENTRY_10f02130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f02130(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f02230; body size 11 bytes.
#line 1 "ENTRY_10f02230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f02230(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f02240; body size 11 bytes.
#line 1 "ENTRY_10f02240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f02240(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f02350; body size 11 bytes.
#line 1 "ENTRY_10f02350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f02350(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f02360; body size 16 bytes.
#line 1 "ENTRY_10f02360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f02360(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f02380; body size 3 bytes.
#line 1 "ENTRY_10f02380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f02380(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f02390; body size 3 bytes.
#line 1 "ENTRY_10f02390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f02390(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f023a0; body size 52 bytes.
#line 1 "ENTRY_10f023a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f023a0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x74));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f02450; body size 52 bytes.
#line 1 "ENTRY_10f02450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f02450(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f02e60; body size 19 bytes.
#line 1 "ENTRY_10f02e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f02e60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10f02ea0; body size 19 bytes.
#line 1 "ENTRY_10f02ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f02ea0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10f02fd0; body size 12 bytes.
#line 1 "ENTRY_10f02fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f02fd0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 10f02fe0; body size 6 bytes.
#line 1 "ENTRY_10f02fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f02fe0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f02ff0; body size 6 bytes.
#line 1 "ENTRY_10f02ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f02ff0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f03000; body size 6 bytes.
#line 1 "ENTRY_10f03000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f03000(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f031a0; body size 22 bytes.
#line 1 "ENTRY_10f031a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f031a0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("LAN");
  case 1:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("BLE");
  case 2:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("WIFISCAN");
  case 3:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("BTCLASSIC");
  case 4:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("CLOUD");
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("?");
  }
}


// Reference entry 10f03200; body size 31 bytes.
#line 1 "ENTRY_10f03200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f03200(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x74));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f03290; body size 5 bytes.
#line 1 "ENTRY_10f03290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f03290(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f032a0; body size 3 bytes.
#line 1 "ENTRY_10f032a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f032b0; body size 3 bytes.
#line 1 "ENTRY_10f032b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f032c0; body size 3 bytes.
#line 1 "ENTRY_10f032c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f032d0; body size 3 bytes.
#line 1 "ENTRY_10f032d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f032e0; body size 3 bytes.
#line 1 "ENTRY_10f032e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f03810; body size 79 bytes.
#line 1 "ENTRY_10f03810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f03810(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10f03880; body size 79 bytes.
#line 1 "ENTRY_10f03880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f03880(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10f038f0; body size 11 bytes.
#line 1 "ENTRY_10f038f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f038f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f03a10; body size 13 bytes.
#line 1 "ENTRY_10f03a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f03a10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f03a20; body size 10 bytes.
#line 1 "ENTRY_10f03a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f03a20(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 10f03f30; body size 87 bytes.
#line 1 "ENTRY_10f03f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f03f30(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x234f72d) {
    param_1 = (uint)(param_1 * 0x74);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f03fa0; body size 52 bytes.
#line 1 "ENTRY_10f03fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f03fa0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x74);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10f03ff0; body size 55 bytes.
#line 1 "ENTRY_10f03ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f03ff0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x74);
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


// Reference entry 10f047f0; body size 21 bytes.
#line 1 "ENTRY_10f047f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f047f0(undefined4 param_1,undefined4 param_2)

{
  __alldiv(param_1,param_2,1000,0);
  return;
}


// Reference entry 10f04810; body size 6 bytes.
#line 1 "ENTRY_10f04810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04810(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x234f72c);
}


// Reference entry 10f04820; body size 6 bytes.
#line 1 "ENTRY_10f04820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04820(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10f04830; body size 6 bytes.
#line 1 "ENTRY_10f04830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04830(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x234f72c);
}


// Reference entry 10f04840; body size 6 bytes.
#line 1 "ENTRY_10f04840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04840(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10f04d20; body size 5 bytes.
#line 1 "ENTRY_10f04d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04d20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f04db0; body size 5 bytes.
#line 1 "ENTRY_10f04db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04db0(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10f05dd0; body size 15 bytes.
#line 1 "ENTRY_10f05dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f05dd0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_105ad900());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(*(int *)(iVar1 + 0x128) + 0x28));
}


// Reference entry 10f06420; body size 30 bytes.
#line 1 "ENTRY_10f06420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f06420(undefined4 param_1)

{
  thunk_FUN_105ad900();
  thunk_FUN_10cf34e0(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f06450; body size 26 bytes.
#line 1 "ENTRY_10f06450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f06450(undefined4 param_1)

{
  thunk_FUN_105ad900();
  thunk_FUN_107558b0(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f06470; body size 30 bytes.
#line 1 "ENTRY_10f06470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f06470(undefined4 param_1)

{
  thunk_FUN_105ad900();
  thunk_FUN_10cf34e0(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f064a0; body size 26 bytes.
#line 1 "ENTRY_10f064a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f064a0(undefined4 param_1)

{
  thunk_FUN_105ad900();
  thunk_FUN_107af2b0(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f064c0; body size 30 bytes.
#line 1 "ENTRY_10f064c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f064c0(undefined4 param_1)

{
  thunk_FUN_105ad900();
  thunk_FUN_10cf34e0(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f064f0; body size 30 bytes.
#line 1 "ENTRY_10f064f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f064f0(undefined4 param_1)

{
  thunk_FUN_105ad900();
  thunk_FUN_10cf34e0(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f06520; body size 25 bytes.
#line 1 "ENTRY_10f06520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f06520(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x18));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f06540; body size 26 bytes.
#line 1 "ENTRY_10f06540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f06540(undefined4 param_1)

{
  thunk_FUN_105ad900();
  thunk_FUN_10a0bf70(param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f0b980; body size 15 bytes.
#line 1 "ENTRY_10f0b980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10f0b980(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_105ad900());
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(iVar1 + 0x118));
}


// Reference entry 10f0d4c0; body size 6 bytes.
#line 1 "ENTRY_10f0d4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f0d4c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(2);
}


// Reference entry 10f0d4d0; body size 6 bytes.
#line 1 "ENTRY_10f0d4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f0d4d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpSubmitDiagnostics");
}


// Reference entry 10f0d570; body size 28 bytes.
#line 1 "ENTRY_10f0d570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f0d570(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f0d6c0; body size 28 bytes.
#line 1 "ENTRY_10f0d6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f0d6c0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f0d6f0; body size 27 bytes.
#line 1 "ENTRY_10f0d6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f0d6f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f0e4a0; body size 147 bytes.
#line 1 "ENTRY_10f0e4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f0e4a0(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json; charset=utf-8",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0x1887) = 1;
  *(undefined1 *)((int)param_1 + 0x621e) = 0;
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RInitiateDiagnosticsRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RInitiateDiagnosticsRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f0e560; body size 137 bytes.
#line 1 "ENTRY_10f0e560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f0e560(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/x-www-form-urlencoded",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2 *)(param_1 + 0x1887) = 1;
  *(undefined1 *)((int)param_1 + 0x621e) = 0;
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RReportDiagnosticsStatusRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RReportDiagnosticsStatusRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f0e610; body size 52 bytes.
#line 1 "ENTRY_10f0e610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f0e610(undefined4 *param_1)

{
  thunk_FUN_11261e50();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubmitDiagnosticsAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSubmitDiagnosticsAIOOp);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f0e8e0; body size 137 bytes.
#line 1 "ENTRY_10f0e8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f0e8e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:ZoneGroupTopology:1","SubmitDiagnostics",
                     uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  param_1[0x35f4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f0e990; body size 9 bytes.
#line 1 "ENTRY_10f0e990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f0e990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpSubmitDiagnostics);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f0fa00; body size 3 bytes.
#line 1 "ENTRY_10f0fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f0fa00(void)

{
  return;
}


// Reference entry 10f0fa10; body size 3 bytes.
#line 1 "ENTRY_10f0fa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f0fa10(void)

{
  return;
}


// Reference entry 10f0fa20; body size 3 bytes.
#line 1 "ENTRY_10f0fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f0fa20(void)

{
  return;
}


// Reference entry 10f0fd90; body size 28 bytes.
#line 1 "ENTRY_10f0fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f0fd90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10f0fdc0; body size 7 bytes.
#line 1 "ENTRY_10f0fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f0fdc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f0fe30; body size 39 bytes.
#line 1 "ENTRY_10f0fe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f0fe30(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012d130(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


// Reference entry 10f0fe60; body size 4 bytes.
#line 1 "ENTRY_10f0fe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fe60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0fe70; body size 4 bytes.
#line 1 "ENTRY_10f0fe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fe70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0fe80; body size 4 bytes.
#line 1 "ENTRY_10f0fe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fe80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0fe90; body size 4 bytes.
#line 1 "ENTRY_10f0fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fe90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0fea0; body size 4 bytes.
#line 1 "ENTRY_10f0fea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0feb0; body size 39 bytes.
#line 1 "ENTRY_10f0feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f0feb0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1);
  do {
    cVar1 = (char)(*pcVar2);
    pcVar2 = (char *)(pcVar2 + 1);
  } while (cVar1 != '\0');
  thunk_FUN_1012cdb0(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


// Reference entry 10f10f40; body size 19 bytes.
#line 1 "ENTRY_10f10f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f10f40(void)

{
  thunk_FUN_1012cdb0("--SONOSMULTIPARTBOUNDARY.BLAHBLAHBLAH\r\n",0x27);
  return;
}


// Reference entry 10f11510; body size 73 bytes.
#line 1 "ENTRY_10f11510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f11510(int param_1)

{
  char cVar1;
  int iStack_4;
  
  iStack_4 = (int)(param_1);
  cVar1 = (char)(thunk_FUN_1145c460(param_1 + 0x28,&iStack_4));
  if ((((cVar1 != '\0') && (*(int *)(param_1 + 0x6310) == 200)) &&
      (*(int *)(param_1 + 0xc448) == 200)) && (*(int *)(param_1 + 0x1269c) == 200)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iStack_4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 10f11570; body size 17 bytes.
#line 1 "ENTRY_10f11570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f11570(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xd7d0));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10f11590; body size 64 bytes.
#line 1 "ENTRY_10f11590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f11590(int param_1)

{
  char cVar1;
  int iStack_4;
  
  iStack_4 = (int)(param_1);
  cVar1 = (char)(thunk_FUN_1145c460(param_1 + 0x617c,&iStack_4));
  if (((cVar1 != '\0') && (*(int *)(param_1 + 0xc348) == 200)) &&
     (*(int *)(param_1 + 0x1259c) == 200)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iStack_4);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(0);
}


// Reference entry 10f11710; body size 7 bytes.
#line 1 "ENTRY_10f11710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f11710(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0xd7d0));
}


// Reference entry 10f11c50; body size 28 bytes.
#line 1 "ENTRY_10f11c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f11c50(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x613c));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f11f10; body size 7 bytes.
#line 1 "ENTRY_10f11f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f11f10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6220);
}


// Reference entry 10f11f20; body size 7 bytes.
#line 1 "ENTRY_10f11f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f11f20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6120);
}


// Reference entry 10f11f30; body size 7 bytes.
#line 1 "ENTRY_10f11f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f11f30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6220);
}


// Reference entry 10f12050; body size 17 bytes.
#line 1 "ENTRY_10f12050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f12050(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f12070; body size 17 bytes.
#line 1 "ENTRY_10f12070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f12070(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6138) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6138));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f12090; body size 17 bytes.
#line 1 "ENTRY_10f12090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f12090(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6124) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6124));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f120b0; body size 17 bytes.
#line 1 "ENTRY_10f120b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f120b0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6228) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6228));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f120d0; body size 17 bytes.
#line 1 "ENTRY_10f120d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f120d0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f13630; body size 6 bytes.
#line 1 "ENTRY_10f13630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f13630(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpSubmitDiagnostics");
}


// Reference entry 10f13860; body size 22 bytes.
#line 1 "ENTRY_10f13860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f13860(undefined4 param_1)

{
  switch(param_1) {
  default:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("");
  case 1:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Exceeded max depth");
  case 2:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Invalid unicode escape");
  case 3:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Invalid escape");
  case 4:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Invalid string character");
  case 5:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Invalid numeric character");
  case 6:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Unexpected token");
  case 7:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Sequence too long");
  case 8:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Missing required value");
  case 9:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Invalid value");
  case 10:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Incomplete");
  case 0xb:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Out Of Memory");
  case 0xc:
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("Unexpected error");
  }
}


// Reference entry 10f141b0; body size 24 bytes.
#line 1 "ENTRY_10f141b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f141b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f141d0; body size 24 bytes.
#line 1 "ENTRY_10f141d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f141d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f14300; body size 34 bytes.
#line 1 "ENTRY_10f14300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f14300(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_1145c250(param_1 + 0x7a,puVar1,0x21);
  return;
}


// Reference entry 10f15900; body size 18 bytes.
#line 1 "ENTRY_10f15900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f15900(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f15920; body size 39 bytes.
#line 1 "ENTRY_10f15920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f15920(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f15950; body size 25 bytes.
#line 1 "ENTRY_10f15950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f15950(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f15970; body size 22 bytes.
#line 1 "ENTRY_10f15970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f15970(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f159a0; body size 22 bytes.
#line 1 "ENTRY_10f159a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f159a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f159c0; body size 18 bytes.
#line 1 "ENTRY_10f159c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f159c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f15b40; body size 22 bytes.
#line 1 "ENTRY_10f15b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f15b40(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f15c80; body size 5 bytes.
#line 1 "ENTRY_10f15c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f15c80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f15c90; body size 5 bytes.
#line 1 "ENTRY_10f15c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f15c90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f15d20; body size 3 bytes.
#line 1 "ENTRY_10f15d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15d20(void)

{
  return;
}


// Reference entry 10f15d30; body size 3 bytes.
#line 1 "ENTRY_10f15d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15d30(void)

{
  return;
}


// Reference entry 10f15d40; body size 25 bytes.
#line 1 "ENTRY_10f15d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15d40(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10f15d60; body size 13 bytes.
#line 1 "ENTRY_10f15d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15d60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f15d70; body size 13 bytes.
#line 1 "ENTRY_10f15d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15d70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f15d80; body size 33 bytes.
#line 1 "ENTRY_10f15d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f15d80(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10f15db0; body size 3 bytes.
#line 1 "ENTRY_10f15db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15db0(void)

{
  return;
}


// Reference entry 10f15dc0; body size 3 bytes.
#line 1 "ENTRY_10f15dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15dc0(void)

{
  return;
}


// Reference entry 10f15dd0; body size 3 bytes.
#line 1 "ENTRY_10f15dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15dd0(void)

{
  return;
}


// Reference entry 10f15de0; body size 36 bytes.
#line 1 "ENTRY_10f15de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15de0(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (*(int *)(param_1 + 4) != 0) break;
    param_1 = (int)(param_1 + 8);
  }
                    
                    
                    
  terminate();
  return;
}


// Reference entry 10f16460; body size 15 bytes.
#line 1 "ENTRY_10f16460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f16460(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 10f16540; body size 5 bytes.
#line 1 "ENTRY_10f16540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16540(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16550; body size 7 bytes.
#line 1 "ENTRY_10f16550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16550(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f16560; body size 7 bytes.
#line 1 "ENTRY_10f16560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16560(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f16570; body size 7 bytes.
#line 1 "ENTRY_10f16570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16570(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f16580; body size 16 bytes.
#line 1 "ENTRY_10f16580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f16580(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_2 - *param_1 >> 2);
}


// Reference entry 10f16610; body size 5 bytes.
#line 1 "ENTRY_10f16610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16610(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16650; body size 3 bytes.
#line 1 "ENTRY_10f16650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f16650(void)

{
  return;
}


// Reference entry 10f16660; body size 13 bytes.
#line 1 "ENTRY_10f16660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f16660(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f16880; body size 5 bytes.
#line 1 "ENTRY_10f16880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16880(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16890; body size 5 bytes.
#line 1 "ENTRY_10f16890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16890(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f168f0; body size 35 bytes.
#line 1 "ENTRY_10f168f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f168f0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)(param_2 * 4 + (int)param_1));
}


// Reference entry 10f16920; body size 5 bytes.
#line 1 "ENTRY_10f16920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16930; body size 27 bytes.
#line 1 "ENTRY_10f16930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f16930(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2);
}


// Reference entry 10f16960; body size 5 bytes.
#line 1 "ENTRY_10f16960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16970; body size 5 bytes.
#line 1 "ENTRY_10f16970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16980; body size 5 bytes.
#line 1 "ENTRY_10f16980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16990; body size 5 bytes.
#line 1 "ENTRY_10f16990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f169a0; body size 5 bytes.
#line 1 "ENTRY_10f169a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f169a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f169b0; body size 5 bytes.
#line 1 "ENTRY_10f169b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f169b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16bc0; body size 17 bytes.
#line 1 "ENTRY_10f16bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f16bc0(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
                    
                    
                    
    terminate();
    return;
  }
  return;
}


// Reference entry 10f16be0; body size 86 bytes.
#line 1 "ENTRY_10f16be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f16be0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while (param_1 != (int *)(param_2)) {
    piVar2 = (int *)((int *)param_1[2]);
    iVar4 = (int)(iVar4 + 1);
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar2 + 0xd));
      param_1 = (int *)(piVar2);
      piVar2 = (int *)((int *)*piVar2);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        param_1 = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
      }
    }
    else {
      cVar1 = (char)(*(char *)(param_1[1] + 0xd));
      piVar3 = (int *)((int *)param_1[1]);
      piVar2 = (int *)(param_1);
      while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(iVar4);
}


// Reference entry 10f16ca0; body size 15 bytes.
#line 1 "ENTRY_10f16ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16ca0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f16cc0; body size 15 bytes.
#line 1 "ENTRY_10f16cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16cc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f16d30; body size 5 bytes.
#line 1 "ENTRY_10f16d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16d40; body size 5 bytes.
#line 1 "ENTRY_10f16d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16d60; body size 5 bytes.
#line 1 "ENTRY_10f16d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16d70; body size 5 bytes.
#line 1 "ENTRY_10f16d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16d80; body size 5 bytes.
#line 1 "ENTRY_10f16d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16dc0; body size 5 bytes.
#line 1 "ENTRY_10f16dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16dc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16e30; body size 5 bytes.
#line 1 "ENTRY_10f16e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16e30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16e40; body size 5 bytes.
#line 1 "ENTRY_10f16e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16e40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16e50; body size 5 bytes.
#line 1 "ENTRY_10f16e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16e50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f16e60; body size 33 bytes.
#line 1 "ENTRY_10f16e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f16e60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10f16ea0; body size 18 bytes.
#line 1 "ENTRY_10f16ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f16ea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f16ec0; body size 18 bytes.
#line 1 "ENTRY_10f16ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f16ec0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f16ee0; body size 18 bytes.
#line 1 "ENTRY_10f16ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f16ee0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f16f00; body size 37 bytes.
#line 1 "ENTRY_10f16f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f16f00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f16f70; body size 11 bytes.
#line 1 "ENTRY_10f16f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f16f70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f16f80; body size 11 bytes.
#line 1 "ENTRY_10f16f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f16f80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f17010; body size 11 bytes.
#line 1 "ENTRY_10f17010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f17010(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f17020; body size 11 bytes.
#line 1 "ENTRY_10f17020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f17020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f17030; body size 16 bytes.
#line 1 "ENTRY_10f17030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f17030(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f17050; body size 21 bytes.
#line 1 "ENTRY_10f17050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f17050(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f17070; body size 23 bytes.
#line 1 "ENTRY_10f17070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f17070(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f17090; body size 3 bytes.
#line 1 "ENTRY_10f17090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f17090(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f170a0; body size 3 bytes.
#line 1 "ENTRY_10f170a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f170a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f170b0; body size 3 bytes.
#line 1 "ENTRY_10f170b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f170b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f17110; body size 10 bytes.
#line 1 "ENTRY_10f17110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f17110(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f17120; body size 52 bytes.
#line 1 "ENTRY_10f17120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f17120(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x30));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f17200; body size 23 bytes.
#line 1 "ENTRY_10f17200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f17200(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f17d60; body size 14 bytes.
#line 1 "ENTRY_10f17d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10f17d60(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10f17d80; body size 14 bytes.
#line 1 "ENTRY_10f17d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10f17d80(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10f17da0; body size 12 bytes.
#line 1 "ENTRY_10f17da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f17da0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 10f17ee0; body size 16 bytes.
#line 1 "ENTRY_10f17ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f17ee0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & param_1[1]) * 4));
}


// Reference entry 10f17f00; body size 16 bytes.
#line 1 "ENTRY_10f17f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f17f00(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & param_1[1]) * 4));
}


// Reference entry 10f17f20; body size 6 bytes.
#line 1 "ENTRY_10f17f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f17f20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f17f30; body size 6 bytes.
#line 1 "ENTRY_10f17f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f17f30(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f18310; body size 31 bytes.
#line 1 "ENTRY_10f18310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f18310(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f18360; body size 49 bytes.
#line 1 "ENTRY_10f18360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10f18360(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10f18460; body size 39 bytes.
#line 1 "ENTRY_10f18460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f18460(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (*(int *)(param_1 + 4) != 0) break;
    param_1 = (int)(param_1 + 8);
  }
                    
  terminate();
}


// Reference entry 10f188c0; body size 3 bytes.
#line 1 "ENTRY_10f188c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f188c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f188d0; body size 3 bytes.
#line 1 "ENTRY_10f188d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f188d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f188f0; body size 3 bytes.
#line 1 "ENTRY_10f188f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f188f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18900; body size 3 bytes.
#line 1 "ENTRY_10f18900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18910; body size 3 bytes.
#line 1 "ENTRY_10f18910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18910(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18920; body size 3 bytes.
#line 1 "ENTRY_10f18920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18920(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18930; body size 3 bytes.
#line 1 "ENTRY_10f18930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18930(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18940; body size 3 bytes.
#line 1 "ENTRY_10f18940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18950; body size 3 bytes.
#line 1 "ENTRY_10f18950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18960; body size 3 bytes.
#line 1 "ENTRY_10f18960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18960(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18970; body size 3 bytes.
#line 1 "ENTRY_10f18970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18970(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18980; body size 3 bytes.
#line 1 "ENTRY_10f18980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18980(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18990; body size 3 bytes.
#line 1 "ENTRY_10f18990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18990(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f189a0; body size 3 bytes.
#line 1 "ENTRY_10f189a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f189a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f189b0; body size 3 bytes.
#line 1 "ENTRY_10f189b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f189b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f189c0; body size 3 bytes.
#line 1 "ENTRY_10f189c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f189c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f189d0; body size 3 bytes.
#line 1 "ENTRY_10f189d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f189d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f189e0; body size 11 bytes.
#line 1 "ENTRY_10f189e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10f189e0(uint param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(int *)(param_1 + 8) - 1U & param_2);
}


// Reference entry 10f189f0; body size 11 bytes.
#line 1 "ENTRY_10f189f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10f189f0(uint param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(int *)(param_1 + 8) - 1U & param_2);
}


// Reference entry 10f18a00; body size 3 bytes.
#line 1 "ENTRY_10f18a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18a00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f18f10; body size 4 bytes.
#line 1 "ENTRY_10f18f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f18f10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 10f18f20; body size 4 bytes.
#line 1 "ENTRY_10f18f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f18f20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 10f18f30; body size 30 bytes.
#line 1 "ENTRY_10f18f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f18f30(int param_1)

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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f19010; body size 4 bytes.
#line 1 "ENTRY_10f19010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f19010(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xc);
}


// Reference entry 10f19020; body size 4 bytes.
#line 1 "ENTRY_10f19020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f19020(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 10f19030; body size 4 bytes.
#line 1 "ENTRY_10f19030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f19030(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 10f19040; body size 3 bytes.
#line 1 "ENTRY_10f19040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f19040(void)

{
  return;
}


// Reference entry 10f19050; body size 3 bytes.
#line 1 "ENTRY_10f19050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f19050(void)

{
  return;
}


// Reference entry 10f19060; body size 3 bytes.
#line 1 "ENTRY_10f19060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f19060(void)

{
  return;
}


// Reference entry 10f19070; body size 11 bytes.
#line 1 "ENTRY_10f19070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f19070(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f19080; body size 6 bytes.
#line 1 "ENTRY_10f19080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f19080(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10f192d0; body size 33 bytes.
#line 1 "ENTRY_10f192d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f192d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(puVar1);
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    *(undefined4 *)*param_1 = (undefined4)(param_1);
    puVar1 = (undefined4 *)((undefined4 *)*param_2);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(param_2);
  }
  return;
}


// Reference entry 10f195f0; body size 13 bytes.
#line 1 "ENTRY_10f195f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f195f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f19600; body size 15 bytes.
#line 1 "ENTRY_10f19600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f19600(int *param_2)
{
  int param_1 = (int )this;
  *param_2 = (int)(param_1);
  param_2[1] = (int)(*(int *)(param_1 + 0xc));
  return;
}


// Reference entry 10f19620; body size 3 bytes.
#line 1 "ENTRY_10f19620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f19620(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f19630; body size 10 bytes.
#line 1 "ENTRY_10f19630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f19630(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 10f19640; body size 4 bytes.
#line 1 "ENTRY_10f19640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f19640(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f19670; body size 87 bytes.
#line 1 "ENTRY_10f19670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f19670(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f196e0; body size 90 bytes.
#line 1 "ENTRY_10f196e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f196e0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5555556) {
    param_1 = (uint)(param_1 * 0x30);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f19760; body size 90 bytes.
#line 1 "ENTRY_10f19760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f19760(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x6666667) {
    param_1 = (uint)(param_1 * 0x28);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f197e0; body size 87 bytes.
#line 1 "ENTRY_10f197e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f197e0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f19c70; body size 9 bytes.
#line 1 "ENTRY_10f19c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f19c70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10f19f70; body size 57 bytes.
#line 1 "ENTRY_10f19f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f19f70(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x30);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10f19fc0; body size 61 bytes.
#line 1 "ENTRY_10f19fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f19fc0(int param_1,int param_2)

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


// Reference entry 10f1a010; body size 60 bytes.
#line 1 "ENTRY_10f1a010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f1a010(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x30);
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


// Reference entry 10f1a060; body size 60 bytes.
#line 1 "ENTRY_10f1a060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f1a060(int param_1,int param_2)

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


// Reference entry 10f1a0b0; body size 61 bytes.
#line 1 "ENTRY_10f1a0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f1a0b0(int param_1,int param_2)

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


// Reference entry 10f1a100; body size 8 bytes.
#line 1 "ENTRY_10f1a100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1a100(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10f1a110; body size 8 bytes.
#line 1 "ENTRY_10f1a110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1a110(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10f1a120; body size 11 bytes.
#line 1 "ENTRY_10f1a120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f1a120(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f1a5c0; body size 14 bytes.
#line 1 "ENTRY_10f1a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1a5c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)
          (*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & *(uint *)(param_1 + 0xc)) * 4));
}


// Reference entry 10f1a5e0; body size 14 bytes.
#line 1 "ENTRY_10f1a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1a5e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)
          (*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & *(uint *)(param_1 + 0xc)) * 4));
}


// Reference entry 10f1a6e0; body size 8 bytes.
#line 1 "ENTRY_10f1a6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1a6e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) != 0);
}


// Reference entry 10f1a6f0; body size 6 bytes.
#line 1 "ENTRY_10f1a6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a6f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x5555555);
}


// Reference entry 10f1a700; body size 6 bytes.
#line 1 "ENTRY_10f1a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a700(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x6666666);
}


// Reference entry 10f1a710; body size 6 bytes.
#line 1 "ENTRY_10f1a710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a710(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10f1a720; body size 6 bytes.
#line 1 "ENTRY_10f1a720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a720(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x5555555);
}


// Reference entry 10f1a730; body size 6 bytes.
#line 1 "ENTRY_10f1a730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a730(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x6666666);
}


// Reference entry 10f1a740; body size 6 bytes.
#line 1 "ENTRY_10f1a740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a740(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10f1ac00; body size 18 bytes.
#line 1 "ENTRY_10f1ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1ac00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1ac20; body size 18 bytes.
#line 1 "ENTRY_10f1ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1ac20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1ac40; body size 54 bytes.
#line 1 "ENTRY_10f1ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1ac40(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1ac90; body size 40 bytes.
#line 1 "ENTRY_10f1ac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1ac90(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1acd0; body size 22 bytes.
#line 1 "ENTRY_10f1acd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1acd0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1acf0; body size 22 bytes.
#line 1 "ENTRY_10f1acf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1acf0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1ad10; body size 22 bytes.
#line 1 "ENTRY_10f1ad10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1ad10(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1ad30; body size 18 bytes.
#line 1 "ENTRY_10f1ad30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1ad30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1ad50; body size 18 bytes.
#line 1 "ENTRY_10f1ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1ad50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1b010; body size 22 bytes.
#line 1 "ENTRY_10f1b010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1b010(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1b030; body size 22 bytes.
#line 1 "ENTRY_10f1b030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1b030(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1b050; body size 22 bytes.
#line 1 "ENTRY_10f1b050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1b050(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1b070; body size 56 bytes.
#line 1 "ENTRY_10f1b070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1b070(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1b0c0; body size 42 bytes.
#line 1 "ENTRY_10f1b0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1b0c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1b130; body size 25 bytes.
#line 1 "ENTRY_10f1b130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b130(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10f1b150; body size 25 bytes.
#line 1 "ENTRY_10f1b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b150(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10f1b170; body size 13 bytes.
#line 1 "ENTRY_10f1b170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b170(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b180; body size 13 bytes.
#line 1 "ENTRY_10f1b180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b190; body size 13 bytes.
#line 1 "ENTRY_10f1b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b190(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b1a0; body size 13 bytes.
#line 1 "ENTRY_10f1b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b1a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b1b0; body size 13 bytes.
#line 1 "ENTRY_10f1b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b1b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b1c0; body size 3 bytes.
#line 1 "ENTRY_10f1b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b1c0(void)

{
  return;
}


// Reference entry 10f1b1d0; body size 3 bytes.
#line 1 "ENTRY_10f1b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b1d0(void)

{
  return;
}


// Reference entry 10f1b550; body size 15 bytes.
#line 1 "ENTRY_10f1b550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b550(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10f1b570; body size 15 bytes.
#line 1 "ENTRY_10f1b570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b570(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10f1b6e0; body size 5 bytes.
#line 1 "ENTRY_10f1b6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1b6e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1b6f0; body size 5 bytes.
#line 1 "ENTRY_10f1b6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1b6f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1b700; body size 5 bytes.
#line 1 "ENTRY_10f1b700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1b700(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1b710; body size 31 bytes.
#line 1 "ENTRY_10f1b710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10f1b710(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f1b740; body size 31 bytes.
#line 1 "ENTRY_10f1b740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10f1b740(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f1bb40; body size 5 bytes.
#line 1 "ENTRY_10f1bb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bb50; body size 5 bytes.
#line 1 "ENTRY_10f1bb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bb60; body size 5 bytes.
#line 1 "ENTRY_10f1bb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bb70; body size 5 bytes.
#line 1 "ENTRY_10f1bb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bb80; body size 5 bytes.
#line 1 "ENTRY_10f1bb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bb90; body size 5 bytes.
#line 1 "ENTRY_10f1bb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bba0; body size 5 bytes.
#line 1 "ENTRY_10f1bba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bba0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bbb0; body size 5 bytes.
#line 1 "ENTRY_10f1bbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bbb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bbc0; body size 5 bytes.
#line 1 "ENTRY_10f1bbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bbc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bbd0; body size 5 bytes.
#line 1 "ENTRY_10f1bbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bbd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bbe0; body size 5 bytes.
#line 1 "ENTRY_10f1bbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bbe0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bbf0; body size 50 bytes.
#line 1 "ENTRY_10f1bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1bbf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  return;
}


// Reference entry 10f1bc30; body size 30 bytes.
#line 1 "ENTRY_10f1bc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1bc30(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  *(undefined8 *)(param_2 + 1) = 0;
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10f1bdc0; body size 15 bytes.
#line 1 "ENTRY_10f1bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bdc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f1bde0; body size 15 bytes.
#line 1 "ENTRY_10f1bde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bde0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f1be00; body size 15 bytes.
#line 1 "ENTRY_10f1be00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f1be20; body size 15 bytes.
#line 1 "ENTRY_10f1be20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f1be40; body size 15 bytes.
#line 1 "ENTRY_10f1be40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f1be60; body size 5 bytes.
#line 1 "ENTRY_10f1be60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1be70; body size 5 bytes.
#line 1 "ENTRY_10f1be70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1be80; body size 5 bytes.
#line 1 "ENTRY_10f1be80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1be90; body size 5 bytes.
#line 1 "ENTRY_10f1be90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bea0; body size 5 bytes.
#line 1 "ENTRY_10f1bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bea0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1beb0; body size 5 bytes.
#line 1 "ENTRY_10f1beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1beb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bec0; body size 5 bytes.
#line 1 "ENTRY_10f1bec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bec0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bed0; body size 5 bytes.
#line 1 "ENTRY_10f1bed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bed0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1bee0; body size 18 bytes.
#line 1 "ENTRY_10f1bee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1bee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1bf00; body size 18 bytes.
#line 1 "ENTRY_10f1bf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1bf00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1bf20; body size 18 bytes.
#line 1 "ENTRY_10f1bf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f1bf20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1c140; body size 16 bytes.
#line 1 "ENTRY_10f1c140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1c140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1c160; body size 16 bytes.
#line 1 "ENTRY_10f1c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1c160(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1c180; body size 3 bytes.
#line 1 "ENTRY_10f1c180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1c180(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1c190; body size 3 bytes.
#line 1 "ENTRY_10f1c190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1c190(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1c1a0; body size 52 bytes.
#line 1 "ENTRY_10f1c1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1c1a0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1c1f0; body size 52 bytes.
#line 1 "ENTRY_10f1c1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1c1f0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1c2d0; body size 28 bytes.
#line 1 "ENTRY_10f1c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1c2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1c300; body size 21 bytes.
#line 1 "ENTRY_10f1c300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1c300(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f1c730; body size 19 bytes.
#line 1 "ENTRY_10f1c730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f1c730(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10f1c750; body size 19 bytes.
#line 1 "ENTRY_10f1c750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f1c750(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f1d140; body size 31 bytes.
#line 1 "ENTRY_10f1d140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f1d140(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f1d170; body size 31 bytes.
#line 1 "ENTRY_10f1d170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f1d170(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f1d260; body size 3 bytes.
#line 1 "ENTRY_10f1d260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d260(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d270; body size 3 bytes.
#line 1 "ENTRY_10f1d270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d270(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d280; body size 3 bytes.
#line 1 "ENTRY_10f1d280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d280(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d290; body size 3 bytes.
#line 1 "ENTRY_10f1d290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d290(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d2a0; body size 3 bytes.
#line 1 "ENTRY_10f1d2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d2b0; body size 3 bytes.
#line 1 "ENTRY_10f1d2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d2c0; body size 3 bytes.
#line 1 "ENTRY_10f1d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d2d0; body size 3 bytes.
#line 1 "ENTRY_10f1d2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d2e0; body size 3 bytes.
#line 1 "ENTRY_10f1d2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d2f0; body size 3 bytes.
#line 1 "ENTRY_10f1d2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d300; body size 3 bytes.
#line 1 "ENTRY_10f1d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d300(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d310; body size 3 bytes.
#line 1 "ENTRY_10f1d310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d310(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d320; body size 3 bytes.
#line 1 "ENTRY_10f1d320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d320(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d330; body size 3 bytes.
#line 1 "ENTRY_10f1d330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d330(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d340; body size 3 bytes.
#line 1 "ENTRY_10f1d340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d340(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d350; body size 3 bytes.
#line 1 "ENTRY_10f1d350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d350(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d360; body size 3 bytes.
#line 1 "ENTRY_10f1d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d360(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d370; body size 3 bytes.
#line 1 "ENTRY_10f1d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d370(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d380; body size 3 bytes.
#line 1 "ENTRY_10f1d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d380(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d390; body size 3 bytes.
#line 1 "ENTRY_10f1d390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d390(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1d3a0; body size 3 bytes.
#line 1 "ENTRY_10f1d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d3a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f1db60; body size 79 bytes.
#line 1 "ENTRY_10f1db60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f1db60(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10f1dbd0; body size 79 bytes.
#line 1 "ENTRY_10f1dbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f1dbd0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10f1dc40; body size 79 bytes.
#line 1 "ENTRY_10f1dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f1dc40(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10f1dcb0; body size 11 bytes.
#line 1 "ENTRY_10f1dcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1dcb0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f1dcc0; body size 11 bytes.
#line 1 "ENTRY_10f1dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1dcc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f1dcd0; body size 11 bytes.
#line 1 "ENTRY_10f1dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1dcd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f1de30; body size 87 bytes.
#line 1 "ENTRY_10f1de30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f1de30(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f1dea0; body size 97 bytes.
#line 1 "ENTRY_10f1dea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f1dea0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f1fb70; body size 54 bytes.
#line 1 "ENTRY_10f1fb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1fb70(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x20);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10f1fbc0; body size 63 bytes.
#line 1 "ENTRY_10f1fbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1fbc0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x1c);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10f1fc10; body size 57 bytes.
#line 1 "ENTRY_10f1fc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f1fc10(int param_1,int param_2)

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


// Reference entry 10f1fc60; body size 66 bytes.
#line 1 "ENTRY_10f1fc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f1fc60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x1c);
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


// Reference entry 10f1fcc0; body size 60 bytes.
#line 1 "ENTRY_10f1fcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f1fcc0(int param_1,int param_2)

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


// Reference entry 10f1fd10; body size 8 bytes.
#line 1 "ENTRY_10f1fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1fd10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10f1fd20; body size 8 bytes.
#line 1 "ENTRY_10f1fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1fd20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10f20a40; body size 4 bytes.
#line 1 "ENTRY_10f20a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f20a40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 10f20af0; body size 7 bytes.
#line 1 "ENTRY_10f20af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f20af0(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0x2c))();
  return;
}


// Reference entry 10f214e0; body size 6 bytes.
#line 1 "ENTRY_10f214e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f214e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10f214f0; body size 6 bytes.
#line 1 "ENTRY_10f214f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f214f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f21500; body size 6 bytes.
#line 1 "ENTRY_10f21500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f21500(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10f21510; body size 6 bytes.
#line 1 "ENTRY_10f21510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f21510(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x7ffffff);
}


// Reference entry 10f21520; body size 6 bytes.
#line 1 "ENTRY_10f21520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f21520(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f21530; body size 6 bytes.
#line 1 "ENTRY_10f21530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f21530(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10f21740; body size 5 bytes.
#line 1 "ENTRY_10f21740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f21740(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


// Reference entry 10f217d0; body size 4 bytes.
#line 1 "ENTRY_10f217d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f217d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f217e0; body size 4 bytes.
#line 1 "ENTRY_10f217e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f217e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f217f0; body size 106 bytes.
#line 1 "ENTRY_10f217f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f217f0(undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *(undefined2 *)(param_1 + 3) = 0x3eb;
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RNSSendBeginSetupOp);
  uVar1 = (undefined4)(*param_2);
  param_1[5] = (undefined4)(param_2[1]);
  *(undefined1 *)((int)param_1 + 0x52) = param_5;
  param_1[0x15] = (undefined4)(param_6);
  param_1[4] = (undefined4)(uVar1);
  thunk_FUN_1145c250((int)param_1 + 0x39,param_3,0x19);
  thunk_FUN_1145c250(param_1 + 6,param_4,0x21);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f219e0; body size 7 bytes.
#line 1 "ENTRY_10f219e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f219e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 10f21ef0; body size 43 bytes.
#line 1 "ENTRY_10f21ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f21ef0(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 4) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 4) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


// Reference entry 10f22970; body size 32 bytes.
#line 1 "ENTRY_10f22970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f22970(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f229a0; body size 18 bytes.
#line 1 "ENTRY_10f229a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f229a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f229c0; body size 39 bytes.
#line 1 "ENTRY_10f229c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f229c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f229f0; body size 25 bytes.
#line 1 "ENTRY_10f229f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f229f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22a10; body size 22 bytes.
#line 1 "ENTRY_10f22a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f22a10(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22a30; body size 18 bytes.
#line 1 "ENTRY_10f22a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22a30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22b10; body size 22 bytes.
#line 1 "ENTRY_10f22b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f22b10(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22b30; body size 18 bytes.
#line 1 "ENTRY_10f22b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22b50; body size 18 bytes.
#line 1 "ENTRY_10f22b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22b50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22b70; body size 5 bytes.
#line 1 "ENTRY_10f22b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f22b70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f22b80; body size 5 bytes.
#line 1 "ENTRY_10f22b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f22b80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f22b90; body size 11 bytes.
#line 1 "ENTRY_10f22b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f22b90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22ba0; body size 18 bytes.
#line 1 "ENTRY_10f22ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22ce0; body size 18 bytes.
#line 1 "ENTRY_10f22ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22e20; body size 25 bytes.
#line 1 "ENTRY_10f22e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22e20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22e40; body size 34 bytes.
#line 1 "ENTRY_10f22e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f22e40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22e70; body size 11 bytes.
#line 1 "ENTRY_10f22e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f22e70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22e80; body size 11 bytes.
#line 1 "ENTRY_10f22e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f22e80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22e90; body size 21 bytes.
#line 1 "ENTRY_10f22e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22e90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f22eb0; body size 3 bytes.
#line 1 "ENTRY_10f22eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f22eb0(void)

{
  return;
}


// Reference entry 10f22ec0; body size 3 bytes.
#line 1 "ENTRY_10f22ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f22ec0(void)

{
  return;
}


// Reference entry 10f22ed0; body size 25 bytes.
#line 1 "ENTRY_10f22ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f22ed0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10f231b0; body size 13 bytes.
#line 1 "ENTRY_10f231b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f231b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f231c0; body size 13 bytes.
#line 1 "ENTRY_10f231c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f231c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f231d0; body size 113 bytes.
#line 1 "ENTRY_10f231d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f231d0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_10f23350(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
  *(undefined4 *)(*param_1 + 4) = uVar7;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = (int)(param_2[1]);
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


// Reference entry 10f23260; body size 113 bytes.
#line 1 "ENTRY_10f23260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f23260(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_10f234a0(*(undefined4 *)(*param_2 + 4),*param_1,param_3));
  *(undefined4 *)(*param_1 + 4) = uVar7;
  piVar2 = (int *)((int *)*param_1);
  param_1[1] = (int)(param_2[1]);
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


// Reference entry 10f232f0; body size 33 bytes.
#line 1 "ENTRY_10f232f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f232f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10f23320; body size 33 bytes.
#line 1 "ENTRY_10f23320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f23320(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10f23740; body size 3 bytes.
#line 1 "ENTRY_10f23740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23740(void)

{
  return;
}


// Reference entry 10f23750; body size 3 bytes.
#line 1 "ENTRY_10f23750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23750(void)

{
  return;
}


// Reference entry 10f23760; body size 3 bytes.
#line 1 "ENTRY_10f23760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23760(void)

{
  return;
}


// Reference entry 10f23770; body size 3 bytes.
#line 1 "ENTRY_10f23770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23770(void)

{
  return;
}


// Reference entry 10f23880; body size 18 bytes.
#line 1 "ENTRY_10f23880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f23880(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10f23c70; body size 73 bytes.
#line 1 "ENTRY_10f23c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f23c70(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)(*param_1);
  puVar3 = (undefined4 *)(*(undefined4 **)(iVar1 + 4));
  *param_2 = (int)((int)puVar3);
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  if (*(char *)((int)puVar3 + 0xd) == '\0') {
    iVar1 = (int)(*param_3);
    do {
      *param_2 = (int)((int)puVar3);
      iVar2 = (int)(puVar3[4]);
      if (iVar1 <= iVar2) {
        param_2[2] = (int)((int)puVar3);
        puVar3 = (undefined4 *)((undefined4 *)*puVar3);
      }
      else {
        puVar3 = (undefined4 *)((undefined4 *)puVar3[2]);
      }
      param_2[1] = (int)((uint)(iVar1 <= iVar2));
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f23cd0; body size 15 bytes.
#line 1 "ENTRY_10f23cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23cd0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10f23d70; body size 37 bytes.
#line 1 "ENTRY_10f23d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23d70(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2[2]);
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(*(undefined4 *)*param_2);
    param_1[1] = (undefined4)(iVar1);
    return;
  }
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(iVar1);
  return;
}


// Reference entry 10f23da0; body size 7 bytes.
#line 1 "ENTRY_10f23da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23da0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f23db0; body size 7 bytes.
#line 1 "ENTRY_10f23db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23db0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f23dc0; body size 37 bytes.
#line 1 "ENTRY_10f23dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23dc0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2[2]);
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(*(undefined4 *)*param_2);
    param_1[1] = (undefined4)(iVar1);
    return;
  }
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(iVar1);
  return;
}


// Reference entry 10f23df0; body size 7 bytes.
#line 1 "ENTRY_10f23df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23df0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f23e00; body size 16 bytes.
#line 1 "ENTRY_10f23e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f23e00(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_2 - *param_1 >> 2);
}


// Reference entry 10f23e20; body size 5 bytes.
#line 1 "ENTRY_10f23e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23e20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f23e30; body size 31 bytes.
#line 1 "ENTRY_10f23e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10f23e30(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f23e60; body size 13 bytes.
#line 1 "ENTRY_10f23e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23e60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f23e70; body size 15 bytes.
#line 1 "ENTRY_10f23e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23e70(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  return;
}


// Reference entry 10f23fe0; body size 7 bytes.
#line 1 "ENTRY_10f23fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23fe0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f23ff0; body size 38 bytes.
#line 1 "ENTRY_10f23ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10f23ff0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10f24020; body size 5 bytes.
#line 1 "ENTRY_10f24020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24020(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24030; body size 5 bytes.
#line 1 "ENTRY_10f24030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24030(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24040; body size 36 bytes.
#line 1 "ENTRY_10f24040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f24040(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10f24070; body size 36 bytes.
#line 1 "ENTRY_10f24070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f24070(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10f240a0; body size 35 bytes.
#line 1 "ENTRY_10f240a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f240a0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)(param_2 * 4 + (int)param_1));
}


// Reference entry 10f240d0; body size 5 bytes.
#line 1 "ENTRY_10f240d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f240d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f240e0; body size 27 bytes.
#line 1 "ENTRY_10f240e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f240e0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2);
}


// Reference entry 10f24110; body size 5 bytes.
#line 1 "ENTRY_10f24110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24110(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24120; body size 5 bytes.
#line 1 "ENTRY_10f24120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24120(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24130; body size 5 bytes.
#line 1 "ENTRY_10f24130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24130(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24140; body size 5 bytes.
#line 1 "ENTRY_10f24140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24140(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24150; body size 5 bytes.
#line 1 "ENTRY_10f24150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24150(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24160; body size 26 bytes.
#line 1 "ENTRY_10f24160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f24160(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(param_2[3]);
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f24180; body size 15 bytes.
#line 1 "ENTRY_10f24180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f24180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  return;
}


// Reference entry 10f241d0; body size 29 bytes.
#line 1 "ENTRY_10f241d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f241d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10f24200; body size 34 bytes.
#line 1 "ENTRY_10f24200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f24200(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  piVar1 = (int *)((int *)param_3[2]);
  param_2[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10f242a0; body size 13 bytes.
#line 1 "ENTRY_10f242a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f242a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10f243a0; body size 36 bytes.
#line 1 "ENTRY_10f243a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f243a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10f238a0(puVar1,param_2);
  return;
}


// Reference entry 10f243d0; body size 29 bytes.
#line 1 "ENTRY_10f243d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f243d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  param_1[2] = (undefined4)(param_2[4] + param_2[3]);
  uVar1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return;
}


// Reference entry 10f24400; body size 13 bytes.
#line 1 "ENTRY_10f24400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f24400(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f24410; body size 15 bytes.
#line 1 "ENTRY_10f24410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24410(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f24430; body size 15 bytes.
#line 1 "ENTRY_10f24430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24430(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f24500; body size 5 bytes.
#line 1 "ENTRY_10f24500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24500(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24510; body size 5 bytes.
#line 1 "ENTRY_10f24510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24510(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24520; body size 5 bytes.
#line 1 "ENTRY_10f24520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24520(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24530; body size 5 bytes.
#line 1 "ENTRY_10f24530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24530(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24540; body size 5 bytes.
#line 1 "ENTRY_10f24540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24540(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24550; body size 5 bytes.
#line 1 "ENTRY_10f24550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24550(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24560; body size 5 bytes.
#line 1 "ENTRY_10f24560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24560(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24570; body size 5 bytes.
#line 1 "ENTRY_10f24570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24570(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24580; body size 5 bytes.
#line 1 "ENTRY_10f24580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24580(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24590; body size 5 bytes.
#line 1 "ENTRY_10f24590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24590(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f245a0; body size 5 bytes.
#line 1 "ENTRY_10f245a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f245b0; body size 5 bytes.
#line 1 "ENTRY_10f245b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f245c0; body size 5 bytes.
#line 1 "ENTRY_10f245c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f245d0; body size 5 bytes.
#line 1 "ENTRY_10f245d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f245e0; body size 5 bytes.
#line 1 "ENTRY_10f245e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f245f0; body size 5 bytes.
#line 1 "ENTRY_10f245f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24600; body size 5 bytes.
#line 1 "ENTRY_10f24600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24600(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24610; body size 11 bytes.
#line 1 "ENTRY_10f24610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f24610(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10f24620; body size 5 bytes.
#line 1 "ENTRY_10f24620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24620(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24630; body size 5 bytes.
#line 1 "ENTRY_10f24630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24630(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24640; body size 5 bytes.
#line 1 "ENTRY_10f24640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24640(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24650; body size 5 bytes.
#line 1 "ENTRY_10f24650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24650(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24660; body size 33 bytes.
#line 1 "ENTRY_10f24660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f24660(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10f24890; body size 18 bytes.
#line 1 "ENTRY_10f24890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24890(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f248b0; body size 59 bytes.
#line 1 "ENTRY_10f248b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f248b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)*param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)(*(undefined4 **)*param_2);
    if (puVar1 != (undefined4 *)0x0) {
      *param_1 = (undefined4)(*puVar1);
      param_1[2] = (undefined4)(param_2[2]);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
    }
    *param_1 = (undefined4)(0);
  }
  param_1[2] = (undefined4)(param_2[2]);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24900; body size 48 bytes.
#line 1 "ENTRY_10f24900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24900(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if (param_3 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(*param_3);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24940; body size 59 bytes.
#line 1 "ENTRY_10f24940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24940(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)*param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)(*(undefined4 **)*param_2);
    if (puVar1 != (undefined4 *)0x0) {
      *param_1 = (undefined4)(*puVar1);
      param_1[2] = (undefined4)(param_2[2]);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
    }
    *param_1 = (undefined4)(0);
  }
  param_1[2] = (undefined4)(param_2[2]);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24990; body size 48 bytes.
#line 1 "ENTRY_10f24990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24990(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if (param_3 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(*param_3);
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
  }
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f249d0; body size 18 bytes.
#line 1 "ENTRY_10f249d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f249d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f249f0; body size 18 bytes.
#line 1 "ENTRY_10f249f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f249f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24a10; body size 37 bytes.
#line 1 "ENTRY_10f24a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f24a10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24a80; body size 11 bytes.
#line 1 "ENTRY_10f24a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24a80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24b10; body size 11 bytes.
#line 1 "ENTRY_10f24b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24b10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24ba0; body size 11 bytes.
#line 1 "ENTRY_10f24ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24ba0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24bb0; body size 16 bytes.
#line 1 "ENTRY_10f24bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f24bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24bd0; body size 23 bytes.
#line 1 "ENTRY_10f24bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f24bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24bf0; body size 3 bytes.
#line 1 "ENTRY_10f24bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f24bf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24c00; body size 3 bytes.
#line 1 "ENTRY_10f24c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f24c00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24c10; body size 3 bytes.
#line 1 "ENTRY_10f24c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f24c10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f24d90; body size 52 bytes.
#line 1 "ENTRY_10f24d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f24d90(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24f40; body size 44 bytes.
#line 1 "ENTRY_10f24f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24f40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  piVar1 = (int *)((int *)param_2[2]);
  param_1[2] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24fb0; body size 13 bytes.
#line 1 "ENTRY_10f24fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24fb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f24fc0; body size 100 bytes.
#line 1 "ENTRY_10f24fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f24fc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  _Src = (void *)((void *)*param_2);
  if (_Src != (void *)param_2[1]) {
    _Size = (size_t)((int)param_2[1] - (int)_Src);
    iVar1 = (int)((int)_Size >> 2);
    _Dst = (void *)((void *)thunk_FUN_10f27b60(iVar1));
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)((void *)((int)_Dst + iVar1 * 4));
    memmove(_Dst,_Src,_Size);
    param_1[1] = (undefined4)((void *)((int)_Dst + iVar1 * 4));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f25040; body size 23 bytes.
#line 1 "ENTRY_10f25040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f25040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f255c0; body size 127 bytes.
#line 1 "ENTRY_10f255c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f255c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","AddBondedZones",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f25980; body size 47 bytes.
#line 1 "ENTRY_10f25980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f25980(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)*param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)(*(undefined4 **)*param_2);
    if (puVar1 != (undefined4 *)0x0) {
      *param_1 = (undefined4)(*puVar1);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
    }
    *param_1 = (undefined4)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f259c0; body size 16 bytes.
#line 1 "ENTRY_10f259c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f259c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f25b60; body size 3 bytes.
#line 1 "ENTRY_10f25b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f25b60(void)

{
  return;
}


// Reference entry 10f25b70; body size 3 bytes.
#line 1 "ENTRY_10f25b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f25b70(void)

{
  return;
}


// Reference entry 10f25b80; body size 16 bytes.
#line 1 "ENTRY_10f25b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f25b80(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar2 = (int)(*piVar1);
  if (iVar2 != 0) {
    uVar4 = (uint)(piVar1[2] - iVar2 & 0xfffffffc);
    iVar3 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
    *piVar1 = (int)(0);
    piVar1[1] = (int)(0);
    piVar1[2] = (int)(0);
  }
  return;
}


// Reference entry 10f25cb0; body size 19 bytes.
#line 1 "ENTRY_10f25cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f25cb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f26180; body size 28 bytes.
#line 1 "ENTRY_10f26180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f26180(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10f26270; body size 3 bytes.
#line 1 "ENTRY_10f26270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f26270(void)

{
  return;
}


// Reference entry 10f26280; body size 49 bytes.
#line 1 "ENTRY_10f26280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f26280(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_2);
  if ((undefined4 *)*(undefined4 *)(param_1) != puVar1) {
    if (puVar1 != (undefined4 *)0x0) {
      if ((int *)*puVar1 != (int *)0x0) {
        *param_1 = (int)(*(int *)*puVar1);
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
      }
      *param_1 = (int)(0);
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
    }
    *param_1 = (int)(0);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f262c0; body size 16 bytes.
#line 1 "ENTRY_10f262c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10f262c0(int param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) == *(int *)(param_2 + 8));
}


// Reference entry 10f262e0; body size 16 bytes.
#line 1 "ENTRY_10f262e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10f262e0(int param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) == *(int *)(param_2 + 4));
}


// Reference entry 10f26320; body size 16 bytes.
#line 1 "ENTRY_10f26320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10f26320(int param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) != *(int *)(param_2 + 8));
}


// Reference entry 10f26340; body size 16 bytes.
#line 1 "ENTRY_10f26340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10f26340(int param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) != *(int *)(param_2 + 4));
}


// Reference entry 10f26360; body size 14 bytes.
#line 1 "ENTRY_10f26360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10f26360(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10f26380; body size 17 bytes.
#line 1 "ENTRY_10f26380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10f26380(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_101a2e20(param_1));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(cVar1 == '\0');
}


// Reference entry 10f264c0; body size 12 bytes.
#line 1 "ENTRY_10f264c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10f264c0(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 4);
}


// Reference entry 10f264d0; body size 4 bytes.
#line 1 "ENTRY_10f264d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f264d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f264e0; body size 6 bytes.
#line 1 "ENTRY_10f264e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f264e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f264f0; body size 30 bytes.
#line 1 "ENTRY_10f264f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f264f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 1) * 4
                 ) + (param_1[1] & 1U) * 8);
}


// Reference entry 10f26520; body size 30 bytes.
#line 1 "ENTRY_10f26520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26520(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 1) * 4
                 ) + (param_1[1] & 1U) * 8);
}


// Reference entry 10f26550; body size 6 bytes.
#line 1 "ENTRY_10f26550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26550(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f26560; body size 6 bytes.
#line 1 "ENTRY_10f26560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26560(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f26570; body size 6 bytes.
#line 1 "ENTRY_10f26570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26570(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f26580; body size 6 bytes.
#line 1 "ENTRY_10f26580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26580(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f26590; body size 6 bytes.
#line 1 "ENTRY_10f26590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26590(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f26780; body size 18 bytes.
#line 1 "ENTRY_10f26780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10f26780(int *param_1,int *param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 < *param_2);
}


// Reference entry 10f26c00; body size 24 bytes.
#line 1 "ENTRY_10f26c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f26c00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(*param_2);
    return;
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10f26c20; body size 31 bytes.
#line 1 "ENTRY_10f26c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f26c20(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f26c70; body size 30 bytes.
#line 1 "ENTRY_10f26c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f26c70(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10f27b60(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 10f26ca0; body size 49 bytes.
#line 1 "ENTRY_10f26ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10f26ca0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 2);
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x3fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10f26d70; body size 3 bytes.
#line 1 "ENTRY_10f26d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f26d70(void)

{
  return;
}


// Reference entry 10f26d80; body size 3 bytes.
#line 1 "ENTRY_10f26d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f26d80(void)

{
  return;
}


// Reference entry 10f26d90; body size 3 bytes.
#line 1 "ENTRY_10f26d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26d90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26da0; body size 3 bytes.
#line 1 "ENTRY_10f26da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26da0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26db0; body size 3 bytes.
#line 1 "ENTRY_10f26db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26db0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26dc0; body size 3 bytes.
#line 1 "ENTRY_10f26dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26dc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26dd0; body size 3 bytes.
#line 1 "ENTRY_10f26dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26dd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26de0; body size 3 bytes.
#line 1 "ENTRY_10f26de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26de0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26df0; body size 3 bytes.
#line 1 "ENTRY_10f26df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26df0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26e00; body size 3 bytes.
#line 1 "ENTRY_10f26e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26e10; body size 3 bytes.
#line 1 "ENTRY_10f26e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26e20; body size 3 bytes.
#line 1 "ENTRY_10f26e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26e30; body size 3 bytes.
#line 1 "ENTRY_10f26e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26e50; body size 3 bytes.
#line 1 "ENTRY_10f26e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26e60; body size 3 bytes.
#line 1 "ENTRY_10f26e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26e70; body size 3 bytes.
#line 1 "ENTRY_10f26e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26e80; body size 3 bytes.
#line 1 "ENTRY_10f26e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26e90; body size 3 bytes.
#line 1 "ENTRY_10f26e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26ea0; body size 15 bytes.
#line 1 "ENTRY_10f26ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10f26ea0(uint param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 10f26ec0; body size 15 bytes.
#line 1 "ENTRY_10f26ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10f26ec0(uint param_2)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 10f26ee0; body size 3 bytes.
#line 1 "ENTRY_10f26ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26ee0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f26ef0; body size 12 bytes.
#line 1 "ENTRY_10f26ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26ef0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)*param_1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10f27390; body size 79 bytes.
#line 1 "ENTRY_10f27390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f27390(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10f27400; body size 4 bytes.
#line 1 "ENTRY_10f27400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f27400(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 4);
}


// Reference entry 10f27410; body size 4 bytes.
#line 1 "ENTRY_10f27410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f27410(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 10f27420; body size 30 bytes.
#line 1 "ENTRY_10f27420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f27420(int param_1)

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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f27450; body size 30 bytes.
#line 1 "ENTRY_10f27450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f27450(int param_1)

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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f27480; body size 31 bytes.
#line 1 "ENTRY_10f27480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10f27480(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f274b0; body size 4 bytes.
#line 1 "ENTRY_10f274b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f274b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xc);
}


// Reference entry 10f274c0; body size 4 bytes.
#line 1 "ENTRY_10f274c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f274c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 10f274d0; body size 4 bytes.
#line 1 "ENTRY_10f274d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f274d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 10f274e0; body size 3 bytes.
#line 1 "ENTRY_10f274e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f274e0(void)

{
  return;
}


// Reference entry 10f274f0; body size 3 bytes.
#line 1 "ENTRY_10f274f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f274f0(void)

{
  return;
}


// Reference entry 10f27500; body size 3 bytes.
#line 1 "ENTRY_10f27500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f27500(void)

{
  return;
}


// Reference entry 10f27510; body size 3 bytes.
#line 1 "ENTRY_10f27510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f27510(void)

{
  return;
}


// Reference entry 10f27520; body size 11 bytes.
#line 1 "ENTRY_10f27520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f27520(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f27530; body size 8 bytes.
#line 1 "ENTRY_10f27530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f27530(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// Reference entry 10f27540; body size 8 bytes.
#line 1 "ENTRY_10f27540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f27540(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// Reference entry 10f275c0; body size 13 bytes.
#line 1 "ENTRY_10f275c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f275c0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  return;
}


// Reference entry 10f275d0; body size 24 bytes.
#line 1 "ENTRY_10f275d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f275d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = (undefined4)(*param_2);
    return;
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10f277c0; body size 38 bytes.
#line 1 "ENTRY_10f277c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10f277c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10f277f0; body size 27 bytes.
#line 1 "ENTRY_10f277f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f277f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10f27820; body size 27 bytes.
#line 1 "ENTRY_10f27820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f27820(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10f27850; body size 15 bytes.
#line 1 "ENTRY_10f27850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f27850(int *param_2)
{
  int param_1 = (int )this;
  *param_2 = (int)(param_1);
  param_2[1] = (int)(*(int *)(param_1 + 0xc));
  return;
}


// Reference entry 10f27870; body size 37 bytes.
#line 1 "ENTRY_10f27870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f27870(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(param_1[2]);
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    *param_2 = (undefined4)(*(undefined4 *)*param_1);
    param_2[1] = (undefined4)(iVar1);
    return;
  }
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(iVar1);
  return;
}


// Reference entry 10f27a00; body size 87 bytes.
#line 1 "ENTRY_10f27a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f27a00(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f27a70; body size 97 bytes.
#line 1 "ENTRY_10f27a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f27a70(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f27af0; body size 87 bytes.
#line 1 "ENTRY_10f27af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f27af0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f27bd0; body size 13 bytes.
#line 1 "ENTRY_10f27bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f27bd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f27be0; body size 13 bytes.
#line 1 "ENTRY_10f27be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f27be0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f27bf0; body size 24 bytes.
#line 1 "ENTRY_10f27bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f27bf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(param_1[3]);
  uVar2 = (undefined4)(*param_1);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(uVar1);
  *param_2 = (undefined4)(uVar2);
  return;
}


// Reference entry 10f27e70; body size 9 bytes.
#line 1 "ENTRY_10f27e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f27e70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10f29b70; body size 63 bytes.
#line 1 "ENTRY_10f29b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f29b70(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x1c);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10f29bc0; body size 61 bytes.
#line 1 "ENTRY_10f29bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f29bc0(int param_1,int param_2)

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


// Reference entry 10f29c10; body size 66 bytes.
#line 1 "ENTRY_10f29c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f29c10(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x1c);
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


// Reference entry 10f29c70; body size 61 bytes.
#line 1 "ENTRY_10f29c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f29c70(int param_1,int param_2)

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


// Reference entry 10f29cc0; body size 61 bytes.
#line 1 "ENTRY_10f29cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f29cc0(int param_1,int param_2)

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


// Reference entry 10f29d10; body size 8 bytes.
#line 1 "ENTRY_10f29d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f29d10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10f29d20; body size 11 bytes.
#line 1 "ENTRY_10f29d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f29d20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f29d30; body size 27 bytes.
#line 1 "ENTRY_10f29d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f29d30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(param_1[4]);
  iVar2 = (int)(param_1[3]);
  uVar3 = (undefined4)(*param_1);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(iVar1 + iVar2);
  *param_2 = (undefined4)(uVar3);
  return;
}


// Reference entry 10f29d60; body size 28 bytes.
#line 1 "ENTRY_10f29d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f29d60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(*(int *)(param_1 + 4) +
                 (*(uint *)(param_1 + 0xc) >> 1 & *(int *)(param_1 + 8) - 1U) * 4) +
         (*(uint *)(param_1 + 0xc) & 1) * 8);
}


// Reference entry 10f2b810; body size 7 bytes.
#line 1 "ENTRY_10f2b810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f2b810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f2b820; body size 7 bytes.
#line 1 "ENTRY_10f2b820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f2b820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f2b830; body size 6 bytes.
#line 1 "ENTRY_10f2b830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b830(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f2b840; body size 6 bytes.
#line 1 "ENTRY_10f2b840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b840(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10f2b850; body size 6 bytes.
#line 1 "ENTRY_10f2b850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b850(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10f2b860; body size 6 bytes.
#line 1 "ENTRY_10f2b860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b860(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f2b870; body size 6 bytes.
#line 1 "ENTRY_10f2b870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b870(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10f2b880; body size 6 bytes.
#line 1 "ENTRY_10f2b880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b880(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10f2bc70; body size 5 bytes.
#line 1 "ENTRY_10f2bc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2bc70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f2bf10; body size 36 bytes.
#line 1 "ENTRY_10f2bf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f2bf10(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    return;
  }
  thunk_FUN_10f238a0(puVar1,param_2);
  return;
}


// Reference entry 10f2ce10; body size 5 bytes.
#line 1 "ENTRY_10f2ce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2ce10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f2ce20; body size 5 bytes.
#line 1 "ENTRY_10f2ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2ce20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f2ce30; body size 5 bytes.
#line 1 "ENTRY_10f2ce30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2ce30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f2ce90; body size 4 bytes.
#line 1 "ENTRY_10f2ce90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f2ce90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f2cea0; body size 4 bytes.
#line 1 "ENTRY_10f2cea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f2cea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10f2ceb0; body size 9 bytes.
#line 1 "ENTRY_10f2ceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f2ceb0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10f30bd0; body size 151 bytes.
#line 1 "ENTRY_10f30bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f30bd0(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPDataIO);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RTempDisableNetworkRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RTempDisableNetworkRequest);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  param_1[0x1887] = (undefined4)(0);
  param_1[0x1888] = (undefined4)(0);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f32820; body size 4 bytes.
#line 1 "ENTRY_10f32820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f32820(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f32830; body size 4 bytes.
#line 1 "ENTRY_10f32830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f32830(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f32840; body size 4 bytes.
#line 1 "ENTRY_10f32840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f32840(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f32850; body size 4 bytes.
#line 1 "ENTRY_10f32850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f32850(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f33ea0; body size 7 bytes.
#line 1 "ENTRY_10f33ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f33ea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x6178));
}


// Reference entry 10f33f00; body size 7 bytes.
#line 1 "ENTRY_10f33f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6144);
}


// Reference entry 10f33f10; body size 7 bytes.
#line 1 "ENTRY_10f33f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6120);
}


// Reference entry 10f33f20; body size 7 bytes.
#line 1 "ENTRY_10f33f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6144);
}


// Reference entry 10f33f30; body size 7 bytes.
#line 1 "ENTRY_10f33f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6120);
}


// Reference entry 10f33f40; body size 7 bytes.
#line 1 "ENTRY_10f33f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x6220);
}


// Reference entry 10f33f50; body size 28 bytes.
#line 1 "ENTRY_10f33f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f33f50(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6160));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f33f80; body size 28 bytes.
#line 1 "ENTRY_10f33f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f33f80(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x613c));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f33fb0; body size 28 bytes.
#line 1 "ENTRY_10f33fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f33fb0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6160));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f33fe0; body size 28 bytes.
#line 1 "ENTRY_10f33fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f33fe0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x613c));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f34010; body size 28 bytes.
#line 1 "ENTRY_10f34010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f34010(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6274));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f34040; body size 28 bytes.
#line 1 "ENTRY_10f34040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f34040(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6250));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f34130; body size 17 bytes.
#line 1 "ENTRY_10f34130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f34130(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6138) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6138));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f34150; body size 17 bytes.
#line 1 "ENTRY_10f34150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f34150(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6138) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6138));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f34170; body size 17 bytes.
#line 1 "ENTRY_10f34170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f34170(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6238) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6238));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f34190; body size 17 bytes.
#line 1 "ENTRY_10f34190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f34190(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f35920; body size 7 bytes.
#line 1 "ENTRY_10f35920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f35920(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x6174));
}


// Reference entry 10f35930; body size 7 bytes.
#line 1 "ENTRY_10f35930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f35930(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x6174));
}


// Reference entry 10f35940; body size 7 bytes.
#line 1 "ENTRY_10f35940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f35940(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x6288));
}


// Reference entry 10f35950; body size 7 bytes.
#line 1 "ENTRY_10f35950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f35950(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x6268));
}


// Reference entry 10f35990; body size 10 bytes.
#line 1 "ENTRY_10f35990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f35990(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x6268))));
}


// Reference entry 10f365a0; body size 7 bytes.
#line 1 "ENTRY_10f365a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f365a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x622c);
}


// Reference entry 10f365b0; body size 4 bytes.
#line 1 "ENTRY_10f365b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f365b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x14);
}


// Reference entry 10f37310; body size 18 bytes.
#line 1 "ENTRY_10f37310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f37310(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f37330; body size 40 bytes.
#line 1 "ENTRY_10f37330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f37330(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f37370; body size 22 bytes.
#line 1 "ENTRY_10f37370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f37370(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f37390; body size 22 bytes.
#line 1 "ENTRY_10f37390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f37390(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f373b0; body size 18 bytes.
#line 1 "ENTRY_10f373b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f373b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f37590; body size 22 bytes.
#line 1 "ENTRY_10f37590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f37590(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f375b0; body size 22 bytes.
#line 1 "ENTRY_10f375b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f375b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f375d0; body size 42 bytes.
#line 1 "ENTRY_10f375d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f375d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f37640; body size 25 bytes.
#line 1 "ENTRY_10f37640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37640(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10f37660; body size 13 bytes.
#line 1 "ENTRY_10f37660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37660(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f37670; body size 13 bytes.
#line 1 "ENTRY_10f37670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37670(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f37680; body size 13 bytes.
#line 1 "ENTRY_10f37680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37680(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f37690; body size 3 bytes.
#line 1 "ENTRY_10f37690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37690(void)

{
  return;
}


// Reference entry 10f37880; body size 15 bytes.
#line 1 "ENTRY_10f37880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37880(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10f37940; body size 5 bytes.
#line 1 "ENTRY_10f37940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37940(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37950; body size 5 bytes.
#line 1 "ENTRY_10f37950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37950(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37960; body size 31 bytes.
#line 1 "ENTRY_10f37960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10f37960(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = *param_2, *(int *)(param_1 + 0x10) <= (int)in_EAX)) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f37c20; body size 5 bytes.
#line 1 "ENTRY_10f37c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37c30; body size 5 bytes.
#line 1 "ENTRY_10f37c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37c40; body size 5 bytes.
#line 1 "ENTRY_10f37c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37c50; body size 5 bytes.
#line 1 "ENTRY_10f37c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c50(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37c60; body size 5 bytes.
#line 1 "ENTRY_10f37c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37c70; body size 5 bytes.
#line 1 "ENTRY_10f37c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37c80; body size 30 bytes.
#line 1 "ENTRY_10f37c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37c80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  *(undefined8 *)(param_2 + 1) = 0;
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10f37d70; body size 15 bytes.
#line 1 "ENTRY_10f37d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37d70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f37d90; body size 15 bytes.
#line 1 "ENTRY_10f37d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37d90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f37db0; body size 15 bytes.
#line 1 "ENTRY_10f37db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37db0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f37dd0; body size 5 bytes.
#line 1 "ENTRY_10f37dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37dd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37de0; body size 5 bytes.
#line 1 "ENTRY_10f37de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37de0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37df0; body size 5 bytes.
#line 1 "ENTRY_10f37df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37df0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37e00; body size 5 bytes.
#line 1 "ENTRY_10f37e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37e00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37e10; body size 5 bytes.
#line 1 "ENTRY_10f37e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37e10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37e20; body size 18 bytes.
#line 1 "ENTRY_10f37e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f37e20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f37e40; body size 18 bytes.
#line 1 "ENTRY_10f37e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f37e40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f37fa0; body size 16 bytes.
#line 1 "ENTRY_10f37fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f37fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f37fc0; body size 3 bytes.
#line 1 "ENTRY_10f37fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f37fc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f37fd0; body size 52 bytes.
#line 1 "ENTRY_10f37fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f37fd0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f38020; body size 21 bytes.
#line 1 "ENTRY_10f38020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f38020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f38040; body size 18 bytes.
#line 1 "ENTRY_10f38040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38040(undefined4 param_1)

{
  thunk_FUN_10ec0860();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38320; body size 19 bytes.
#line 1 "ENTRY_10f38320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f38320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f389b0; body size 31 bytes.
#line 1 "ENTRY_10f389b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f389b0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f38a60; body size 3 bytes.
#line 1 "ENTRY_10f38a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38a60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38a70; body size 3 bytes.
#line 1 "ENTRY_10f38a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38a70(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38a80; body size 3 bytes.
#line 1 "ENTRY_10f38a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38a80(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38a90; body size 3 bytes.
#line 1 "ENTRY_10f38a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38a90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38aa0; body size 3 bytes.
#line 1 "ENTRY_10f38aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38aa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38ab0; body size 3 bytes.
#line 1 "ENTRY_10f38ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38ab0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38ac0; body size 3 bytes.
#line 1 "ENTRY_10f38ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38ac0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38ad0; body size 3 bytes.
#line 1 "ENTRY_10f38ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38ad0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38ae0; body size 3 bytes.
#line 1 "ENTRY_10f38ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38ae0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38af0; body size 3 bytes.
#line 1 "ENTRY_10f38af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38af0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38b00; body size 3 bytes.
#line 1 "ENTRY_10f38b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38b00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38b10; body size 3 bytes.
#line 1 "ENTRY_10f38b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38b10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f38b20; body size 3 bytes.
#line 1 "ENTRY_10f38b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38b20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f39050; body size 79 bytes.
#line 1 "ENTRY_10f39050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f39050(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10f390c0; body size 79 bytes.
#line 1 "ENTRY_10f390c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f390c0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
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
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int **)(param_2 + 4) = piVar1;
  return;
}


// Reference entry 10f39130; body size 11 bytes.
#line 1 "ENTRY_10f39130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f39130(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f39140; body size 11 bytes.
#line 1 "ENTRY_10f39140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f39140(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f39230; body size 97 bytes.
#line 1 "ENTRY_10f39230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f39230(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f39c00; body size 63 bytes.
#line 1 "ENTRY_10f39c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f39c00(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x1c);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10f39c50; body size 66 bytes.
#line 1 "ENTRY_10f39c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f39c50(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x1c);
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


// Reference entry 10f39cb0; body size 60 bytes.
#line 1 "ENTRY_10f39cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f39cb0(int param_1,int param_2)

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


// Reference entry 10f39d00; body size 8 bytes.
#line 1 "ENTRY_10f39d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f39d00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10f3bd30; body size 22 bytes.
#line 1 "ENTRY_10f3bd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f3bd30(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x2c));
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((uint)uVar2 << 8);
}


// Reference entry 10f3be00; body size 4 bytes.
#line 1 "ENTRY_10f3be00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f3be00(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 10f3c750; body size 6 bytes.
#line 1 "ENTRY_10f3c750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f3c750(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f3c760; body size 6 bytes.
#line 1 "ENTRY_10f3c760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f3c760(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10f3c770; body size 6 bytes.
#line 1 "ENTRY_10f3c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f3c770(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f3c780; body size 6 bytes.
#line 1 "ENTRY_10f3c780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f3c780(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xaaaaaaa);
}


// Reference entry 10f3c990; body size 5 bytes.
#line 1 "ENTRY_10f3c990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f3c990(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


// Reference entry 10f3ca20; body size 4 bytes.
#line 1 "ENTRY_10f3ca20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f3ca20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f3ca30; body size 27 bytes.
#line 1 "ENTRY_10f3ca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f3ca30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f3ca60; body size 9 bytes.
#line 1 "ENTRY_10f3ca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f3ca60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpJoinHousehold);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f3ce10; body size 9 bytes.
#line 1 "ENTRY_10f3ce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f3ce10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjJHHListener);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f3ce40; body size 7 bytes.
#line 1 "ENTRY_10f3ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f3ce40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f3f0e0; body size 28 bytes.
#line 1 "ENTRY_10f3f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f3f0e0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f40170; body size 3 bytes.
#line 1 "ENTRY_10f40170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f40170(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f40570; body size 3 bytes.
#line 1 "ENTRY_10f40570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10f40570(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(1);
}


// Reference entry 10f40580; body size 6 bytes.
#line 1 "ENTRY_10f40580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f40580(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(300000);
}


// Reference entry 10f40a80; body size 26 bytes.
#line 1 "ENTRY_10f40a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f40a80(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f40aa0; body size 26 bytes.
#line 1 "ENTRY_10f40aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f40aa0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f40ac0; body size 26 bytes.
#line 1 "ENTRY_10f40ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f40ac0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f40ae0; body size 43 bytes.
#line 1 "ENTRY_10f40ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f40ae0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f40b20; body size 26 bytes.
#line 1 "ENTRY_10f40b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f40b20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f40de0; body size 6 bytes.
#line 1 "ENTRY_10f40de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f40de0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINowPlayingRatings");
}


// Reference entry 10f40df0; body size 6 bytes.
#line 1 "ENTRY_10f40df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f40df0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINowPlayingSleepTimer");
}


// Reference entry 10f40e00; body size 14 bytes.
#line 1 "ENTRY_10f40e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40e00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f40e20; body size 27 bytes.
#line 1 "ENTRY_10f40e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f40e50; body size 42 bytes.
#line 1 "ENTRY_10f40e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f40e50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f40e90; body size 42 bytes.
#line 1 "ENTRY_10f40e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f40e90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f40ed0; body size 16 bytes.
#line 1 "ENTRY_10f40ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f40ef0; body size 16 bytes.
#line 1 "ENTRY_10f40ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f40f10; body size 16 bytes.
#line 1 "ENTRY_10f40f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40f10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f40f30; body size 16 bytes.
#line 1 "ENTRY_10f40f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40f30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f40fd0; body size 9 bytes.
#line 1 "ENTRY_10f40fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINowPlaying);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f41270; body size 19 bytes.
#line 1 "ENTRY_10f41270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f41270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f41290; body size 26 bytes.
#line 1 "ENTRY_10f41290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f41290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f41610; body size 7 bytes.
#line 1 "ENTRY_10f41610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f41610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f419c0; body size 3 bytes.
#line 1 "ENTRY_10f419c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f419c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f419d0; body size 3 bytes.
#line 1 "ENTRY_10f419d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f419d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f419e0; body size 3 bytes.
#line 1 "ENTRY_10f419e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f419e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f419f0; body size 3 bytes.
#line 1 "ENTRY_10f419f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f419f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f41a00; body size 7 bytes.
#line 1 "ENTRY_10f41a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f41a00(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f41a10; body size 3 bytes.
#line 1 "ENTRY_10f41a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f41a10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f41b70; body size 11 bytes.
#line 1 "ENTRY_10f41b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f41b70(void)

{
  thunk_FUN_1113eb00("CurrentTrack");
  return;
}


// Reference entry 10f41b80; body size 11 bytes.
#line 1 "ENTRY_10f41b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f41b80(int param_1)

{
  thunk_FUN_110bc160(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10f42040; body size 16 bytes.
#line 1 "ENTRY_10f42040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42040(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f42060; body size 9 bytes.
#line 1 "ENTRY_10f42060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42060(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f42070; body size 9 bytes.
#line 1 "ENTRY_10f42070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42070(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f42080; body size 9 bytes.
#line 1 "ENTRY_10f42080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42080(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f42090; body size 9 bytes.
#line 1 "ENTRY_10f42090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42090(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f428a0; body size 8 bytes.
#line 1 "ENTRY_10f428a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f428a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10f428b0; body size 6 bytes.
#line 1 "ENTRY_10f428b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f428b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINowPlayingRatings");
}


// Reference entry 10f428c0; body size 6 bytes.
#line 1 "ENTRY_10f428c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f428c0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCINowPlayingSleepTimer");
}


// Reference entry 10f42d50; body size 7 bytes.
#line 1 "ENTRY_10f42d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d50(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f42d60; body size 7 bytes.
#line 1 "ENTRY_10f42d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d60(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f42d70; body size 7 bytes.
#line 1 "ENTRY_10f42d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f42d80; body size 7 bytes.
#line 1 "ENTRY_10f42d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d80(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f42d90; body size 7 bytes.
#line 1 "ENTRY_10f42d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d90(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f42e00; body size 3 bytes.
#line 1 "ENTRY_10f42e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e00(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f42e10; body size 3 bytes.
#line 1 "ENTRY_10f42e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e10(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f42e20; body size 3 bytes.
#line 1 "ENTRY_10f42e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e20(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f42e30; body size 3 bytes.
#line 1 "ENTRY_10f42e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e30(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f42e40; body size 3 bytes.
#line 1 "ENTRY_10f42e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e40(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f43930; body size 26 bytes.
#line 1 "ENTRY_10f43930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f43930(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f43c30; body size 40 bytes.
#line 1 "ENTRY_10f43c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f43c30(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10f43c70; body size 40 bytes.
#line 1 "ENTRY_10f43c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f43c70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10f43cb0; body size 27 bytes.
#line 1 "ENTRY_10f43cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f43cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f43ce0; body size 42 bytes.
#line 1 "ENTRY_10f43ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f43ce0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f43d20; body size 42 bytes.
#line 1 "ENTRY_10f43d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f43d20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f43d60; body size 16 bytes.
#line 1 "ENTRY_10f43d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f43d60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f43dc0; body size 16 bytes.
#line 1 "ENTRY_10f43dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f43dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f43e80; body size 9 bytes.
#line 1 "ENTRY_10f43e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f43e80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPlayQueue);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f44640; body size 19 bytes.
#line 1 "ENTRY_10f44640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f44640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f44660; body size 26 bytes.
#line 1 "ENTRY_10f44660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f44660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f44990; body size 7 bytes.
#line 1 "ENTRY_10f44990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f44990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f44e60; body size 3 bytes.
#line 1 "ENTRY_10f44e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f44e60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f44e70; body size 7 bytes.
#line 1 "ENTRY_10f44e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f44e70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f44e80; body size 3 bytes.
#line 1 "ENTRY_10f44e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f44e80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f44e90; body size 3 bytes.
#line 1 "ENTRY_10f44e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f44e90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f44ea0; body size 3 bytes.
#line 1 "ENTRY_10f44ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f44ea0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f45850; body size 16 bytes.
#line 1 "ENTRY_10f45850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45850(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f45870; body size 16 bytes.
#line 1 "ENTRY_10f45870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45870(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f45890; body size 9 bytes.
#line 1 "ENTRY_10f45890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45890(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f458a0; body size 9 bytes.
#line 1 "ENTRY_10f458a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f458a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f45de0; body size 7 bytes.
#line 1 "ENTRY_10f45de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f45de0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x10c));
}


// Reference entry 10f45f70; body size 4 bytes.
#line 1 "ENTRY_10f45f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f45f70(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xc);
}


// Reference entry 10f45fe0; body size 7 bytes.
#line 1 "ENTRY_10f45fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45fe0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x148));
}


// Reference entry 10f45ff0; body size 4 bytes.
#line 1 "ENTRY_10f45ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45ff0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10f460d0; body size 8 bytes.
#line 1 "ENTRY_10f460d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f460d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10f46be0; body size 4 bytes.
#line 1 "ENTRY_10f46be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f46be0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x30));
}


// Reference entry 10f46c10; body size 7 bytes.
#line 1 "ENTRY_10f46c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f46c10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f46c20; body size 8 bytes.
#line 1 "ENTRY_10f46c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f46c20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x38) != 0);
}


// Reference entry 10f46c50; body size 8 bytes.
#line 1 "ENTRY_10f46c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f46c50(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x38) == 0);
}


// Reference entry 10f46c60; body size 9 bytes.
#line 1 "ENTRY_10f46c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10f46c60(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(param_1 == 0);
}


// Reference entry 10f47890; body size 3 bytes.
#line 1 "ENTRY_10f47890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f47890(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f478a0; body size 3 bytes.
#line 1 "ENTRY_10f478a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f478a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f47f60; body size 20 bytes.
#line 1 "ENTRY_10f47f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f47f60(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if (piVar1 != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10f48130; body size 27 bytes.
#line 1 "ENTRY_10f48130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f48130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f483d0; body size 9 bytes.
#line 1 "ENTRY_10f483d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f483d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArea);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f484b0; body size 7 bytes.
#line 1 "ENTRY_10f484b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f484b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f49340; body size 25 bytes.
#line 1 "ENTRY_10f49340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f49340(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f49360; body size 26 bytes.
#line 1 "ENTRY_10f49360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f49360(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f49420; body size 39 bytes.
#line 1 "ENTRY_10f49420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f49420(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  return;
}


// Reference entry 10f49450; body size 39 bytes.
#line 1 "ENTRY_10f49450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f49450(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  return;
}


// Reference entry 10f49480; body size 39 bytes.
#line 1 "ENTRY_10f49480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f49480(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  return;
}


// Reference entry 10f49770; body size 7 bytes.
#line 1 "ENTRY_10f49770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49770(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f49780; body size 5 bytes.
#line 1 "ENTRY_10f49780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49780(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f498d0; body size 28 bytes.
#line 1 "ENTRY_10f498d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f498d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10f49900; body size 28 bytes.
#line 1 "ENTRY_10f49900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f49900(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10f49930; body size 28 bytes.
#line 1 "ENTRY_10f49930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f49930(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10f49a20; body size 5 bytes.
#line 1 "ENTRY_10f49a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49a20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f49a30; body size 5 bytes.
#line 1 "ENTRY_10f49a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49a30(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f49a40; body size 5 bytes.
#line 1 "ENTRY_10f49a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49a40(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f49a50; body size 6 bytes.
#line 1 "ENTRY_10f49a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f49a50(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIDeviceVolume");
}


// Reference entry 10f49a60; body size 5 bytes.
#line 1 "ENTRY_10f49a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49a60(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f49a70; body size 27 bytes.
#line 1 "ENTRY_10f49a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f49a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f49aa0; body size 27 bytes.
#line 1 "ENTRY_10f49aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f49aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f49ad0; body size 42 bytes.
#line 1 "ENTRY_10f49ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f49ad0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOwnedObjImpl);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f49b10; body size 42 bytes.
#line 1 "ENTRY_10f49b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f49b10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITearOffObjImpl);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f49b50; body size 32 bytes.
#line 1 "ENTRY_10f49b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f49b50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f49be0; body size 21 bytes.
#line 1 "ENTRY_10f49be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f49be0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f49c00; body size 23 bytes.
#line 1 "ENTRY_10f49c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f49c00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f49c20; body size 3 bytes.
#line 1 "ENTRY_10f49c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f49c20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f49c30; body size 23 bytes.
#line 1 "ENTRY_10f49c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f49c30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4a560; body size 9 bytes.
#line 1 "ENTRY_10f4a560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4a560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDeviceVolume);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4a570; body size 9 bytes.
#line 1 "ENTRY_10f4a570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4a570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIGroupVolume);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4a650; body size 40 bytes.
#line 1 "ENTRY_10f4a650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4a650(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfListenerGroupVolume");
  param_1[5] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfListenerGroupVolume);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4a6b0; body size 19 bytes.
#line 1 "ENTRY_10f4a6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4a6b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4a6d0; body size 26 bytes.
#line 1 "ENTRY_10f4a6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4a6d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4aa20; body size 7 bytes.
#line 1 "ENTRY_10f4aa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4aa20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4aa30; body size 7 bytes.
#line 1 "ENTRY_10f4aa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4aa30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4aad0; body size 11 bytes.
#line 1 "ENTRY_10f4aad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4aad0(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfListenerGroupVolume);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObj);
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)param_1[2] != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)((undefined1 *)param_1[2]);
  }
  thunk_FUN_111a74d0("FlashDebugObjects",10,"destroy instance 0x%p of class %s",param_1,puVar4,uVar2
                    );
  thunk_FUN_111a2140();
  iVar1 = (int)(param_1[2]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + -8) = 0;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_RefCountBase);

  return;

 } catch (...) { }
}


// Reference entry 10f4ab50; body size 12 bytes.
#line 1 "ENTRY_10f4ab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10f4ab50(int param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + param_2 * 8);
}


// Reference entry 10f4ab60; body size 3 bytes.
#line 1 "ENTRY_10f4ab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ab60(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f4ab70; body size 7 bytes.
#line 1 "ENTRY_10f4ab70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f4ab70(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f4ab80; body size 3 bytes.
#line 1 "ENTRY_10f4ab80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ab80(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f4ab90; body size 3 bytes.
#line 1 "ENTRY_10f4ab90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ab90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f4b0b0; body size 49 bytes.
#line 1 "ENTRY_10f4b0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10f4b0b0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 3);
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(0x1fffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1);
}


// Reference entry 10f4b1a0; body size 3 bytes.
#line 1 "ENTRY_10f4b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4b1a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4b1b0; body size 3 bytes.
#line 1 "ENTRY_10f4b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4b1b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4b1c0; body size 3 bytes.
#line 1 "ENTRY_10f4b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4b1c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4b1d0; body size 3 bytes.
#line 1 "ENTRY_10f4b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4b1d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4b1e0; body size 3 bytes.
#line 1 "ENTRY_10f4b1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4b1e0(void)

{
  return;
}


// Reference entry 10f4b1f0; body size 6 bytes.
#line 1 "ENTRY_10f4b1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4b1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10f4b470; body size 8 bytes.
#line 1 "ENTRY_10f4b470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10f4b470(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x40));
  puVar2 = (undefined4 *)((undefined4 *)0x0);
  while( true ) {
    puVar1 = (undefined4 *)(puVar4);
    if (puVar1 == (undefined4 *)0x0) {

      puVar4 = (undefined4 *)(operator_new(8));
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        *puVar4 = (undefined4)(0);

        puVar4[1] = (undefined4)(param_2);
        if (param_2 != 0) {
          thunk_FUN_1123fce0(param_2 + 4,uVar3);
        }
      }
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 **)(param_1 + 0x40) = puVar4;
      }
      else {
        *puVar2 = (undefined4)(puVar4);
      }

      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);
    }
    if (puVar1[1] == param_2) break;
    puVar4 = (undefined4 *)((undefined4 *)*puVar1);
    puVar2 = (undefined4 *)(puVar1);
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);

 } catch (...) { }
}


// Reference entry 10f4b520; body size 87 bytes.
#line 1 "ENTRY_10f4b520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f4b520(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x20000000) {
    param_1 = (uint)(param_1 * 8);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f4b9b0; body size 9 bytes.
#line 1 "ENTRY_10f4b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4b9b0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10f4be40; body size 4 bytes.
#line 1 "ENTRY_10f4be40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4be40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x17);
}


// Reference entry 10f4be80; body size 4 bytes.
#line 1 "ENTRY_10f4be80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4be80(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x3c));
}


// Reference entry 10f4be90; body size 4 bytes.
#line 1 "ENTRY_10f4be90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f4be90(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x16));
}


// Reference entry 10f4bea0; body size 4 bytes.
#line 1 "ENTRY_10f4bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f4bea0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0x15));
}


// Reference entry 10f4c1c0; body size 8 bytes.
#line 1 "ENTRY_10f4c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f4c1c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10f4c220; body size 6 bytes.
#line 1 "ENTRY_10f4c220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f4c220(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIDeviceVolume");
}


// Reference entry 10f4c810; body size 6 bytes.
#line 1 "ENTRY_10f4c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4c810(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10f4c820; body size 6 bytes.
#line 1 "ENTRY_10f4c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4c820(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x1fffffff);
}


// Reference entry 10f4c960; body size 3 bytes.
#line 1 "ENTRY_10f4c960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4c960(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f4d0b0; body size 8 bytes.
#line 1 "ENTRY_10f4d0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::FUN_10f4d0b0(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x40));
  puVar3 = (undefined4 *)((undefined4 *)0x0);
  do {
    puVar2 = (undefined4 *)(puVar3);
    puVar3 = (undefined4 *)(puVar1);
    if (puVar3 == (undefined4 *)0x0) {
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
    }
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
  } while (puVar3[1] != param_2);

  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x40) = puVar1;
  }
  else {
    *puVar2 = (undefined4)(puVar1);
  }
  if (puVar3 == *(undefined4 **)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = **(undefined4 **)(param_1 + 0x44);
  }
  puVar1 = (undefined4 *)((undefined4 *)puVar3[1]);

  if ((puVar1 != (undefined4 *)0x0) && (iVar5 = thunk_FUN_1123fcd0(puVar1 + 1,uVar4), iVar5 == 0)) {
    (**(code **)*puVar1)(1);
  }
  thunk_FUN_1148a50e(puVar3,8);

  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(1);

 } catch (...) { }
}


// Reference entry 10f4d280; body size 9 bytes.
#line 1 "ENTRY_10f4d280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4d280(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10f4d4c0; body size 61 bytes.
#line 1 "ENTRY_10f4d4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f4d4c0(undefined4 param_2,int *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_3);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f4d510; body size 22 bytes.
#line 1 "ENTRY_10f4d510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4d510(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4d5f0; body size 18 bytes.
#line 1 "ENTRY_10f4d5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4d5f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4d610; body size 25 bytes.
#line 1 "ENTRY_10f4d610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4d610(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4d630; body size 25 bytes.
#line 1 "ENTRY_10f4d630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4d630(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4d650; body size 22 bytes.
#line 1 "ENTRY_10f4d650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4d650(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4d670; body size 5 bytes.
#line 1 "ENTRY_10f4d670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4d670(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4d680; body size 5 bytes.
#line 1 "ENTRY_10f4d680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4d680(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4d690; body size 63 bytes.
#line 1 "ENTRY_10f4d690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f4d690(undefined4 *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_2);
  *param_1 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f4d760; body size 26 bytes.
#line 1 "ENTRY_10f4d760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f4d760(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f4d780; body size 26 bytes.
#line 1 "ENTRY_10f4d780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f4d780(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f4d810; body size 3 bytes.
#line 1 "ENTRY_10f4d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d810(void)

{
  return;
}


// Reference entry 10f4d820; body size 13 bytes.
#line 1 "ENTRY_10f4d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f4d830; body size 13 bytes.
#line 1 "ENTRY_10f4d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f4d840; body size 13 bytes.
#line 1 "ENTRY_10f4d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f4d850; body size 3 bytes.
#line 1 "ENTRY_10f4d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d850(void)

{
  return;
}


// Reference entry 10f4d860; body size 3 bytes.
#line 1 "ENTRY_10f4d860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d860(void)

{
  return;
}


// Reference entry 10f4d870; body size 18 bytes.
#line 1 "ENTRY_10f4d870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f4d870(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4 **)(param_1 + 4) = *param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  return;
}


// Reference entry 10f4d960; body size 51 bytes.
#line 1 "ENTRY_10f4d960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d960(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)param_2[1] = (undefined4)(0);
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_10f4e790();
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10f4d9a0; body size 15 bytes.
#line 1 "ENTRY_10f4d9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d9a0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10f4d9c0; body size 26 bytes.
#line 1 "ENTRY_10f4d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d9c0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10f4e790();
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10f4d9e0; body size 7 bytes.
#line 1 "ENTRY_10f4d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4d9e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f4d9f0; body size 5 bytes.
#line 1 "ENTRY_10f4d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4d9f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4dc90; body size 5 bytes.
#line 1 "ENTRY_10f4dc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dc90(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4dca0; body size 5 bytes.
#line 1 "ENTRY_10f4dca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dca0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4dcb0; body size 5 bytes.
#line 1 "ENTRY_10f4dcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dcb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4dcc0; body size 5 bytes.
#line 1 "ENTRY_10f4dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dcc0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4dcd0; body size 5 bytes.
#line 1 "ENTRY_10f4dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dcd0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4dce0; body size 55 bytes.
#line 1 "ENTRY_10f4dce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4dce0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)*param_4);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  param_2[1] = (int)(0);
  param_2[2] = (int)(0);
  return;
}


// Reference entry 10f4dd40; body size 15 bytes.
#line 1 "ENTRY_10f4dd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dd40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f4dde0; body size 5 bytes.
#line 1 "ENTRY_10f4dde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dde0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4ddf0; body size 5 bytes.
#line 1 "ENTRY_10f4ddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4ddf0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4de00; body size 5 bytes.
#line 1 "ENTRY_10f4de00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4de00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4de10; body size 5 bytes.
#line 1 "ENTRY_10f4de10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4de10(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4de20; body size 5 bytes.
#line 1 "ENTRY_10f4de20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4de20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4de30; body size 30 bytes.
#line 1 "ENTRY_10f4de30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4de30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10f4df30; body size 32 bytes.
#line 1 "ENTRY_10f4df30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4df30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4df60; body size 16 bytes.
#line 1 "ENTRY_10f4df60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4df60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4dfa0; body size 18 bytes.
#line 1 "ENTRY_10f4dfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4dfa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4e090; body size 11 bytes.
#line 1 "ENTRY_10f4e090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4e090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4e0a0; body size 11 bytes.
#line 1 "ENTRY_10f4e0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4e0a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4e0b0; body size 16 bytes.
#line 1 "ENTRY_10f4e0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4e0b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4e0d0; body size 13 bytes.
#line 1 "ENTRY_10f4e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4e0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4e0e0; body size 14 bytes.
#line 1 "ENTRY_10f4e0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4e0e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4e100; body size 23 bytes.
#line 1 "ENTRY_10f4e100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4e100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4e120; body size 3 bytes.
#line 1 "ENTRY_10f4e120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4e120(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4e4c0; body size 42 bytes.
#line 1 "ENTRY_10f4e4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4e4c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorEqualizerSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4e500; body size 11 bytes.
#line 1 "ENTRY_10f4e500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f4e500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4e510; body size 5 bytes.
#line 1 "ENTRY_10f4e510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4e510(void)

{
  FUN_10f4e610();
  return;
}


// Reference entry 10f4e720; body size 3 bytes.
#line 1 "ENTRY_10f4e720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4e720(void)

{
  return;
}


// Reference entry 10f4e860; body size 5 bytes.
#line 1 "ENTRY_10f4e860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4e860(void)

{
  FUN_10f4e610();
  return;
}


// Reference entry 10f4ea60; body size 19 bytes.
#line 1 "ENTRY_10f4ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4ea60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4ec70; body size 14 bytes.
#line 1 "ENTRY_10f4ec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10f4ec70(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10f4ecc0; body size 7 bytes.
#line 1 "ENTRY_10f4ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f4ecc0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f4ecd0; body size 3 bytes.
#line 1 "ENTRY_10f4ecd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ecd0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f4ece0; body size 7 bytes.
#line 1 "ENTRY_10f4ece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f4ece0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f4ecf0; body size 3 bytes.
#line 1 "ENTRY_10f4ecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ecf0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f4ed00; body size 3 bytes.
#line 1 "ENTRY_10f4ed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ed00(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f4ed10; body size 6 bytes.
#line 1 "ENTRY_10f4ed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4ed10(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10f4ed20; body size 6 bytes.
#line 1 "ENTRY_10f4ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4ed20(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 8);
}


// Reference entry 10f4ed30; body size 9 bytes.
#line 1 "ENTRY_10f4ed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4ed30(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4ed40; body size 9 bytes.
#line 1 "ENTRY_10f4ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4ed40(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f4ed50; body size 10 bytes.
#line 1 "ENTRY_10f4ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10f4ed50(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f4ee10; body size 22 bytes.
#line 1 "ENTRY_10f4ee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4ee10(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f4ef90; body size 66 bytes.
#line 1 "ENTRY_10f4ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f4ef90(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) +
                 (double)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 <= fVar1 && fVar1 != *param_1);
}


// Reference entry 10f4f360; body size 3 bytes.
#line 1 "ENTRY_10f4f360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f360(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4f370; body size 3 bytes.
#line 1 "ENTRY_10f4f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f370(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4f380; body size 3 bytes.
#line 1 "ENTRY_10f4f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f380(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4f390; body size 3 bytes.
#line 1 "ENTRY_10f4f390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f390(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4f3a0; body size 3 bytes.
#line 1 "ENTRY_10f4f3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f3a0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4f3b0; body size 3 bytes.
#line 1 "ENTRY_10f4f3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f3b0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4f440; body size 3 bytes.
#line 1 "ENTRY_10f4f440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f440(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4f450; body size 3 bytes.
#line 1 "ENTRY_10f4f450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f450(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f4f4d0; body size 3 bytes.
#line 1 "ENTRY_10f4f4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4f4d0(void)

{
  return;
}


// Reference entry 10f4f590; body size 11 bytes.
#line 1 "ENTRY_10f4f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f590(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f4f5a0; body size 6 bytes.
#line 1 "ENTRY_10f4f5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4f5a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10f4f680; body size 14 bytes.
#line 1 "ENTRY_10f4f680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f4f680(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 10f4f6a0; body size 13 bytes.
#line 1 "ENTRY_10f4f6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f4f6a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f4f6b0; body size 12 bytes.
#line 1 "ENTRY_10f4f6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f4f6b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10f4f6c0; body size 11 bytes.
#line 1 "ENTRY_10f4f6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f4f6c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f4f6d0; body size 43 bytes.
#line 1 "ENTRY_10f4f6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4f6d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)(*(int **)(param_2 + 4));
  *piVar1 = (int)(param_3);
  piVar2 = (int *)(*(int **)(param_3 + 4));
  *piVar2 = (int)(param_1);
  piVar3 = (int *)(*(int **)(param_1 + 4));
  *piVar3 = (int)(param_2);
  *(int **)(param_1 + 4) = piVar2;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)(param_2 + 4) = piVar3;
  return;
}


// Reference entry 10f4f730; body size 90 bytes.
#line 1 "ENTRY_10f4f730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f4f730(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xccccccd) {
    param_1 = (uint)(param_1 * 0x14);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f4f7b0; body size 87 bytes.
#line 1 "ENTRY_10f4f7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f4f7b0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x40000000) {
    param_1 = (uint)(param_1 * 4);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f4f820; body size 35 bytes.
#line 1 "ENTRY_10f4f820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10f4f820(undefined4 *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  uVar1 = (uint)(thunk_FUN_101c82e0(puVar2));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 10f4f850; body size 4 bytes.
#line 1 "ENTRY_10f4f850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f850(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10f4f860; body size 108 bytes.
#line 1 "ENTRY_10f4f860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4f860(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
    *(undefined4 *)puVar1[1] = (undefined4)(0);
    puVar1 = (undefined4 *)((undefined4 *)*puVar1);
    iStack_4 = (int)(param_1);
    while (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((undefined4 *)*puVar1);
      thunk_FUN_10f4e790();
      thunk_FUN_1148a50e(puVar1,0x14);
      puVar1 = (undefined4 *)(puVar2);
    }
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    iStack_4 = (int)(*(int *)(param_1 + 4));
    thunk_FUN_10f4dd60(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10f4f950; body size 57 bytes.
#line 1 "ENTRY_10f4f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4f950(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x14);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10f4f9a0; body size 60 bytes.
#line 1 "ENTRY_10f4f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f4f9a0(int param_1,int param_2)

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


// Reference entry 10f4f9f0; body size 61 bytes.
#line 1 "ENTRY_10f4f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f4f9f0(int param_1,int param_2)

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


// Reference entry 10f4fa40; body size 9 bytes.
#line 1 "ENTRY_10f4fa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4fa40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f513c0; body size 3 bytes.
#line 1 "ENTRY_10f513c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10f513c0(float *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10)((float10)*param_1);
}


// Reference entry 10f513d0; body size 6 bytes.
#line 1 "ENTRY_10f513d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f513d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10f513e0; body size 6 bytes.
#line 1 "ENTRY_10f513e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f513e0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10f513f0; body size 6 bytes.
#line 1 "ENTRY_10f513f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f513f0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x3fffffff);
}


// Reference entry 10f51400; body size 6 bytes.
#line 1 "ENTRY_10f51400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f51400(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xccccccc);
}


// Reference entry 10f514f0; body size 3 bytes.
#line 1 "ENTRY_10f514f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f514f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f51500; body size 3 bytes.
#line 1 "ENTRY_10f51500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f51500(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f51de0; body size 9 bytes.
#line 1 "ENTRY_10f51de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f51de0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10f51ea0; body size 5 bytes.
#line 1 "ENTRY_10f51ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f51ea0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f51eb0; body size 70 bytes.
#line 1 "ENTRY_10f51eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f51eb0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xf] = (undefined4)(0);
  param_1[0x19] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f51f50; body size 10 bytes.
#line 1 "ENTRY_10f51f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f51f50(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f51f60; body size 12 bytes.
#line 1 "ENTRY_10f51f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f51f60(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f525a0; body size 8 bytes.
#line 1 "ENTRY_10f525a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f525a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f527e0; body size 8 bytes.
#line 1 "ENTRY_10f527e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f527e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10f527f0; body size 4 bytes.
#line 1 "ENTRY_10f527f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f527f0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10f52800; body size 7 bytes.
#line 1 "ENTRY_10f52800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f52800(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10f52810; body size 26 bytes.
#line 1 "ENTRY_10f52810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f52810(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10f52830; body size 10 bytes.
#line 1 "ENTRY_10f52830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f52830(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10f53110; body size 4 bytes.
#line 1 "ENTRY_10f53110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f53110(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f552a0; body size 26 bytes.
#line 1 "ENTRY_10f552a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f552a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f552c0; body size 26 bytes.
#line 1 "ENTRY_10f552c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f552c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f552e0; body size 26 bytes.
#line 1 "ENTRY_10f552e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f552e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f55300; body size 26 bytes.
#line 1 "ENTRY_10f55300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f55300(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f55320; body size 26 bytes.
#line 1 "ENTRY_10f55320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f55320(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f55340; body size 26 bytes.
#line 1 "ENTRY_10f55340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f55340(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f55360; body size 26 bytes.
#line 1 "ENTRY_10f55360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f55360(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f55380; body size 26 bytes.
#line 1 "ENTRY_10f55380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f55380(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f553a0; body size 26 bytes.
#line 1 "ENTRY_10f553a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f553a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f553c0; body size 26 bytes.
#line 1 "ENTRY_10f553c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f553c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f553e0; body size 26 bytes.
#line 1 "ENTRY_10f553e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f553e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f55920; body size 6 bytes.
#line 1 "ENTRY_10f55920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f55920(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlGetIRRepeaterState");
}


// Reference entry 10f55930; body size 6 bytes.
#line 1 "ENTRY_10f55930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f55930(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlSetIRRepeaterState");
}


// Reference entry 10f55940; body size 6 bytes.
#line 1 "ENTRY_10f55940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f55940(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlSetLEDFeedbackState");
}


// Reference entry 10f55950; body size 6 bytes.
#line 1 "ENTRY_10f55950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f55950(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpRenderingControlGetRoomCalibrationStatus");
}


// Reference entry 10f55ba0; body size 27 bytes.
#line 1 "ENTRY_10f55ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f55ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f55bd0; body size 27 bytes.
#line 1 "ENTRY_10f55bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f55bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f55c00; body size 27 bytes.
#line 1 "ENTRY_10f55c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f55c00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f55c30; body size 27 bytes.
#line 1 "ENTRY_10f55c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f55c30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f562e0; body size 134 bytes.
#line 1 "ENTRY_10f562e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f562e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:HTControl:1","GetIRRepeaterState",uVar3,
                     param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f56390; body size 136 bytes.
#line 1 "ENTRY_10f56390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f56390(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  thunk_FUN_111c0760(uVar2,"urn:schemas-upnp-org:service:RenderingControl:1",
                     "GetRoomCalibrationStatus",uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  *(undefined2 *)(param_1 + 0x35f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f56440; body size 9 bytes.
#line 1 "ENTRY_10f56440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f56440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlGetIRRepeaterState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f56450; body size 9 bytes.
#line 1 "ENTRY_10f56450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f56450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlSetIRRepeaterState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f56460; body size 9 bytes.
#line 1 "ENTRY_10f56460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f56460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlSetLEDFeedbackState);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f56470; body size 9 bytes.
#line 1 "ENTRY_10f56470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f56470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpRenderingControlGetRoomCalibrationStatus);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f577c0; body size 28 bytes.
#line 1 "ENTRY_10f577c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f577c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10f577f0; body size 28 bytes.
#line 1 "ENTRY_10f577f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f577f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10f57820; body size 7 bytes.
#line 1 "ENTRY_10f57820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f57830; body size 7 bytes.
#line 1 "ENTRY_10f57830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f57840; body size 7 bytes.
#line 1 "ENTRY_10f57840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f57850; body size 7 bytes.
#line 1 "ENTRY_10f57850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f58020; body size 4 bytes.
#line 1 "ENTRY_10f58020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58020(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f58030; body size 3 bytes.
#line 1 "ENTRY_10f58030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58030(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58040; body size 7 bytes.
#line 1 "ENTRY_10f58040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58040(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f58050; body size 3 bytes.
#line 1 "ENTRY_10f58050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58050(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58060; body size 7 bytes.
#line 1 "ENTRY_10f58060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58060(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f58070; body size 3 bytes.
#line 1 "ENTRY_10f58070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58070(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58080; body size 7 bytes.
#line 1 "ENTRY_10f58080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58080(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f58090; body size 3 bytes.
#line 1 "ENTRY_10f58090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58090(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f580a0; body size 7 bytes.
#line 1 "ENTRY_10f580a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f580a0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f580b0; body size 3 bytes.
#line 1 "ENTRY_10f580b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f580b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f580c0; body size 7 bytes.
#line 1 "ENTRY_10f580c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f580c0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f580d0; body size 3 bytes.
#line 1 "ENTRY_10f580d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f580d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f580e0; body size 7 bytes.
#line 1 "ENTRY_10f580e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f580e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f580f0; body size 3 bytes.
#line 1 "ENTRY_10f580f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f580f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58100; body size 7 bytes.
#line 1 "ENTRY_10f58100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58100(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f58110; body size 3 bytes.
#line 1 "ENTRY_10f58110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58110(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58120; body size 7 bytes.
#line 1 "ENTRY_10f58120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58120(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f58130; body size 3 bytes.
#line 1 "ENTRY_10f58130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58130(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58140; body size 7 bytes.
#line 1 "ENTRY_10f58140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58140(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f58150; body size 3 bytes.
#line 1 "ENTRY_10f58150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58150(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58160; body size 7 bytes.
#line 1 "ENTRY_10f58160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58160(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f58170; body size 3 bytes.
#line 1 "ENTRY_10f58170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58170(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58180; body size 7 bytes.
#line 1 "ENTRY_10f58180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58180(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f58190; body size 7 bytes.
#line 1 "ENTRY_10f58190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58190(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f581a0; body size 4 bytes.
#line 1 "ENTRY_10f581a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581a0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f581b0; body size 4 bytes.
#line 1 "ENTRY_10f581b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f581c0; body size 3 bytes.
#line 1 "ENTRY_10f581c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f581d0; body size 3 bytes.
#line 1 "ENTRY_10f581d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f581e0; body size 3 bytes.
#line 1 "ENTRY_10f581e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f581f0; body size 3 bytes.
#line 1 "ENTRY_10f581f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58200; body size 3 bytes.
#line 1 "ENTRY_10f58200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58200(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58210; body size 3 bytes.
#line 1 "ENTRY_10f58210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58210(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58220; body size 3 bytes.
#line 1 "ENTRY_10f58220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58220(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58230; body size 3 bytes.
#line 1 "ENTRY_10f58230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58230(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58240; body size 3 bytes.
#line 1 "ENTRY_10f58240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58240(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58250; body size 3 bytes.
#line 1 "ENTRY_10f58250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58250(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f58260; body size 3 bytes.
#line 1 "ENTRY_10f58260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58260(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f5e690; body size 8 bytes.
#line 1 "ENTRY_10f5e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f5e690(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10f5e800; body size 7 bytes.
#line 1 "ENTRY_10f5e800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f5e800(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xd7d0);
}


// Reference entry 10f61560; body size 7 bytes.
#line 1 "ENTRY_10f61560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f61560(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xd7d1));
}


// Reference entry 10f61580; body size 7 bytes.
#line 1 "ENTRY_10f61580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f61580(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1)(*(undefined1 *)(param_1 + 0xd7d0));
}


// Reference entry 10f61880; body size 6 bytes.
#line 1 "ENTRY_10f61880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f61880(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlGetIRRepeaterState");
}


// Reference entry 10f61890; body size 6 bytes.
#line 1 "ENTRY_10f61890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f61890(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlSetIRRepeaterState");
}


// Reference entry 10f618a0; body size 6 bytes.
#line 1 "ENTRY_10f618a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f618a0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpHTControlSetLEDFeedbackState");
}


// Reference entry 10f618b0; body size 6 bytes.
#line 1 "ENTRY_10f618b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f618b0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpRenderingControlGetRoomCalibrationStatus");
}


// Reference entry 10f62040; body size 3 bytes.
#line 1 "ENTRY_10f62040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62040(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f62050; body size 3 bytes.
#line 1 "ENTRY_10f62050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62050(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f62060; body size 3 bytes.
#line 1 "ENTRY_10f62060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62060(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f62070; body size 3 bytes.
#line 1 "ENTRY_10f62070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62070(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f62080; body size 3 bytes.
#line 1 "ENTRY_10f62080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62080(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f62090; body size 3 bytes.
#line 1 "ENTRY_10f62090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62090(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f620a0; body size 3 bytes.
#line 1 "ENTRY_10f620a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620a0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f620b0; body size 3 bytes.
#line 1 "ENTRY_10f620b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620b0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f620c0; body size 3 bytes.
#line 1 "ENTRY_10f620c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620c0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f620d0; body size 3 bytes.
#line 1 "ENTRY_10f620d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f620e0; body size 3 bytes.
#line 1 "ENTRY_10f620e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f64be0; body size 26 bytes.
#line 1 "ENTRY_10f64be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f64be0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f64d20; body size 5 bytes.
#line 1 "ENTRY_10f64d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f64d20(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f64d30; body size 6 bytes.
#line 1 "ENTRY_10f64d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f64d30(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpContentDirectoryGetAlbumArtistDisplayOption");
}


// Reference entry 10f64dd0; body size 27 bytes.
#line 1 "ENTRY_10f64dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f64dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f64f60; body size 70 bytes.
#line 1 "ENTRY_10f64f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f64f60(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xf] = (undefined4)(0);
  param_1[0x19] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f650e0; body size 10 bytes.
#line 1 "ENTRY_10f650e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f650e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f650f0; body size 12 bytes.
#line 1 "ENTRY_10f650f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f650f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f65180; body size 42 bytes.
#line 1 "ENTRY_10f65180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f65180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsReplicatorMusicLibrary_EventSink);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f651c0; body size 147 bytes.
#line 1 "ENTRY_10f651c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f651c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))());
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))());
  }
  iVar1 = (int)(*(int *)(*(int *)(param_2 + 4) + 4));
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50))
                    (param_3,param_4,param_5,param_6));
  pcVar5 = (char *)("GetAlbumArtistDisplayOption");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("GetAlbumArtistDisplayOption",uVar3));
  thunk_FUN_111c0760(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  *(undefined1 *)(param_1 + 0x35f4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f65280; body size 9 bytes.
#line 1 "ENTRY_10f65280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f65280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpContentDirectoryGetAlbumArtistDisplayOption);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f65f30; body size 19 bytes.
#line 1 "ENTRY_10f65f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f65f30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f65f50; body size 28 bytes.
#line 1 "ENTRY_10f65f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f65f50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAsyncIOOperation);
  if ((undefined4 *)param_1[0x2a5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2a5e])(1);
  }
  thunk_FUN_11249110();
  thunk_FUN_1124d790();
  thunk_FUN_1124ef40();
  thunk_FUN_1124f060();
  thunk_FUN_1125acd0();
  thunk_FUN_1124a3f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10f65f80; body size 7 bytes.
#line 1 "ENTRY_10f65f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f65f80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f661f0; body size 3 bytes.
#line 1 "ENTRY_10f661f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f661f0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f66200; body size 7 bytes.
#line 1 "ENTRY_10f66200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f66200(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f66210; body size 8 bytes.
#line 1 "ENTRY_10f66210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f66210(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f66220; body size 4 bytes.
#line 1 "ENTRY_10f66220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f66220(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f66230; body size 4 bytes.
#line 1 "ENTRY_10f66230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f66230(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f666b0; body size 8 bytes.
#line 1 "ENTRY_10f666b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f666b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10f666c0; body size 4 bytes.
#line 1 "ENTRY_10f666c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f666c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10f666d0; body size 7 bytes.
#line 1 "ENTRY_10f666d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f666d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10f666e0; body size 26 bytes.
#line 1 "ENTRY_10f666e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f666e0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10f66700; body size 10 bytes.
#line 1 "ENTRY_10f66700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f66700(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10f66d70; body size 16 bytes.
#line 1 "ENTRY_10f66d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f66d70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f66f40; body size 7 bytes.
#line 1 "ENTRY_10f66f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f66f40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0xd7d0);
}


// Reference entry 10f675b0; body size 4 bytes.
#line 1 "ENTRY_10f675b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f675b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f676d0; body size 6 bytes.
#line 1 "ENTRY_10f676d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f676d0(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char *)("SCIOpContentDirectoryGetAlbumArtistDisplayOption");
}


// Reference entry 10f678e0; body size 3 bytes.
#line 1 "ENTRY_10f678e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f678e0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f692e0; body size 25 bytes.
#line 1 "ENTRY_10f692e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f692e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f69c80; body size 16 bytes.
#line 1 "ENTRY_10f69c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f69c80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f69ca0; body size 16 bytes.
#line 1 "ENTRY_10f69ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f69ca0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f6b160; body size 18 bytes.
#line 1 "ENTRY_10f6b160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6b160(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b180; body size 32 bytes.
#line 1 "ENTRY_10f6b180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6b180(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b1b0; body size 22 bytes.
#line 1 "ENTRY_10f6b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6b1b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b1d0; body size 18 bytes.
#line 1 "ENTRY_10f6b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6b1d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b2b0; body size 22 bytes.
#line 1 "ENTRY_10f6b2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6b2b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1 *)(param_1 + 1) = *param_3;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b2d0; body size 34 bytes.
#line 1 "ENTRY_10f6b2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6b2d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b300; body size 25 bytes.
#line 1 "ENTRY_10f6b300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b300(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


// Reference entry 10f6b320; body size 13 bytes.
#line 1 "ENTRY_10f6b320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b320(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f6b330; body size 13 bytes.
#line 1 "ENTRY_10f6b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b330(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f6b340; body size 3 bytes.
#line 1 "ENTRY_10f6b340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b340(void)

{
  return;
}


// Reference entry 10f6b4f0; body size 15 bytes.
#line 1 "ENTRY_10f6b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b4f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10f6b590; body size 5 bytes.
#line 1 "ENTRY_10f6b590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b590(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b5a0; body size 31 bytes.
#line 1 "ENTRY_10f6b5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10f6b5a0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= in_EAX)
     ) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f6b6f0; body size 5 bytes.
#line 1 "ENTRY_10f6b6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b6f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b700; body size 5 bytes.
#line 1 "ENTRY_10f6b700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b700(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b710; body size 5 bytes.
#line 1 "ENTRY_10f6b710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b710(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b720; body size 5 bytes.
#line 1 "ENTRY_10f6b720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b720(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b730; body size 5 bytes.
#line 1 "ENTRY_10f6b730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b730(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b740; body size 5 bytes.
#line 1 "ENTRY_10f6b740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b740(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b750; body size 29 bytes.
#line 1 "ENTRY_10f6b750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b750(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10f6b8a0; body size 15 bytes.
#line 1 "ENTRY_10f6b8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b8a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f6b8c0; body size 15 bytes.
#line 1 "ENTRY_10f6b8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b8c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f6b8e0; body size 5 bytes.
#line 1 "ENTRY_10f6b8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b8e0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b8f0; body size 5 bytes.
#line 1 "ENTRY_10f6b8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b8f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b900; body size 5 bytes.
#line 1 "ENTRY_10f6b900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b900(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6b910; body size 32 bytes.
#line 1 "ENTRY_10f6b910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6b910(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b940; body size 16 bytes.
#line 1 "ENTRY_10f6b940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6b940(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b960; body size 18 bytes.
#line 1 "ENTRY_10f6b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6b960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b9c0; body size 11 bytes.
#line 1 "ENTRY_10f6b9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6b9c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6b9d0; body size 11 bytes.
#line 1 "ENTRY_10f6b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6b9d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6ba60; body size 11 bytes.
#line 1 "ENTRY_10f6ba60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6ba60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6ba70; body size 11 bytes.
#line 1 "ENTRY_10f6ba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6ba70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6ba80; body size 16 bytes.
#line 1 "ENTRY_10f6ba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6ba80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6baa0; body size 3 bytes.
#line 1 "ENTRY_10f6baa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6baa0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6bab0; body size 52 bytes.
#line 1 "ENTRY_10f6bab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6bab0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6bd70; body size 19 bytes.
#line 1 "ENTRY_10f6bd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f6bd70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f6c0c0; body size 14 bytes.
#line 1 "ENTRY_10f6c0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10f6c0c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != *param_2);
}


// Reference entry 10f6c1d0; body size 3 bytes.
#line 1 "ENTRY_10f6c1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c1d0(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f6c1e0; body size 6 bytes.
#line 1 "ENTRY_10f6c1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6c1e0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f6c1f0; body size 6 bytes.
#line 1 "ENTRY_10f6c1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6c1f0(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*param_1 + 0x10);
}


// Reference entry 10f6c370; body size 31 bytes.
#line 1 "ENTRY_10f6c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f6c370(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c));
  *(void **)pvVar1 = (void *)(pvVar1);
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f6c7f0; body size 3 bytes.
#line 1 "ENTRY_10f6c7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c7f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6c800; body size 3 bytes.
#line 1 "ENTRY_10f6c800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c800(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6c810; body size 3 bytes.
#line 1 "ENTRY_10f6c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c810(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6c820; body size 3 bytes.
#line 1 "ENTRY_10f6c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6c830; body size 3 bytes.
#line 1 "ENTRY_10f6c830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6c840; body size 3 bytes.
#line 1 "ENTRY_10f6c840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c840(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6c850; body size 3 bytes.
#line 1 "ENTRY_10f6c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6c860; body size 3 bytes.
#line 1 "ENTRY_10f6c860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c860(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6cb70; body size 30 bytes.
#line 1 "ENTRY_10f6cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f6cb70(int param_1)

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
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f6cbd0; body size 3 bytes.
#line 1 "ENTRY_10f6cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6cbd0(void)

{
  return;
}


// Reference entry 10f6cbe0; body size 11 bytes.
#line 1 "ENTRY_10f6cbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6cbe0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f6cc60; body size 11 bytes.
#line 1 "ENTRY_10f6cc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f6cc60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f6d050; body size 97 bytes.
#line 1 "ENTRY_10f6d050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f6d050(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x924924a) {
    param_1 = (uint)(param_1 * 0x1c);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar1);
      }
      return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void **)((int)pvVar2 - 4) = pvVar1;
        return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10f6d0d0; body size 13 bytes.
#line 1 "ENTRY_10f6d0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f6d0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f6d250; body size 63 bytes.
#line 1 "ENTRY_10f6d250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6d250(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x1c);
  iVar1 = (int)(param_2);
  if (0xfff < uVar2) {
    iVar1 = (int)(*(int *)(param_2 + -4));
    uVar2 = (uint)(uVar2 + 0x23);
    if (0x1f < (param_2 - iVar1) - 4U) {
                    
                    
                    
      _invalid_parameter_noinfo_noreturn();
      return;
    }
  }
  thunk_FUN_1148a50e(iVar1,uVar2);
  return;
}


// Reference entry 10f6d2a0; body size 66 bytes.
#line 1 "ENTRY_10f6d2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f6d2a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x1c);
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


// Reference entry 10f6d300; body size 11 bytes.
#line 1 "ENTRY_10f6d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f6d300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f6d810; body size 7 bytes.
#line 1 "ENTRY_10f6d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f6d810(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f6d820; body size 7 bytes.
#line 1 "ENTRY_10f6d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f6d820(int *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*param_1 != 0);
}


// Reference entry 10f6d830; body size 6 bytes.
#line 1 "ENTRY_10f6d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6d830(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f6d840; body size 6 bytes.
#line 1 "ENTRY_10f6d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6d840(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0x9249249);
}


// Reference entry 10f6d850; body size 5 bytes.
#line 1 "ENTRY_10f6d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6d850(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6e500; body size 4 bytes.
#line 1 "ENTRY_10f6e500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6e500(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f6e560; body size 25 bytes.
#line 1 "ENTRY_10f6e560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6e560(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6ee90; body size 7 bytes.
#line 1 "ENTRY_10f6ee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6ee90(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f6f380; body size 12 bytes.
#line 1 "ENTRY_10f6f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10f6f380(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f6f4c0; body size 5 bytes.
#line 1 "ENTRY_10f6f4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f4c0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6f7c0; body size 12 bytes.
#line 1 "ENTRY_10f6f7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f6f7c0(int param_1,int param_2)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_2 - param_1 >> 2);
}


// Reference entry 10f6f7d0; body size 5 bytes.
#line 1 "ENTRY_10f6f7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f7d0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6f7f0; body size 5 bytes.
#line 1 "ENTRY_10f6f7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f7f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6f800; body size 5 bytes.
#line 1 "ENTRY_10f6f800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f800(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6f820; body size 5 bytes.
#line 1 "ENTRY_10f6f820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f820(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6f830; body size 5 bytes.
#line 1 "ENTRY_10f6f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f830(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6f9f0; body size 5 bytes.
#line 1 "ENTRY_10f6f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f9f0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6fa00; body size 5 bytes.
#line 1 "ENTRY_10f6fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6fa00(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6fc90; body size 70 bytes.
#line 1 "ENTRY_10f6fc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6fc90(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xf] = (undefined4)(0);
  param_1[0x19] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6fd30; body size 32 bytes.
#line 1 "ENTRY_10f6fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f6fd30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f6fda0; body size 3 bytes.
#line 1 "ENTRY_10f6fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6fda0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6fdb0; body size 3 bytes.
#line 1 "ENTRY_10f6fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6fdb0(undefined4 param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(param_1);
}


// Reference entry 10f6fdc0; body size 10 bytes.
#line 1 "ENTRY_10f6fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6fdc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f6fdd0; body size 10 bytes.
#line 1 "ENTRY_10f6fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6fdd0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f6fed0; body size 12 bytes.
#line 1 "ENTRY_10f6fed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6fed0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1);
}


// Reference entry 10f70ca0; body size 34 bytes.
#line 1 "ENTRY_10f70ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f70ca0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


// Reference entry 10f710f0; body size 18 bytes.
#line 1 "ENTRY_10f710f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f710f0(int *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10f71140; body size 3 bytes.
#line 1 "ENTRY_10f71140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71140(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f71150; body size 8 bytes.
#line 1 "ENTRY_10f71150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f71150(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f71160; body size 8 bytes.
#line 1 "ENTRY_10f71160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f71160(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f71170; body size 4 bytes.
#line 1 "ENTRY_10f71170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71170(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f71180; body size 3 bytes.
#line 1 "ENTRY_10f71180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71180(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f71550; body size 134 bytes.
#line 1 "ENTRY_10f71550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f71550(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_101a3700();
  }
  param_2 = (uint)(param_2 * 4);
  if (param_2 < 0x1000) {
    if (param_2 != 0) {
      pvVar1 = (void *)(operator_new(param_2));
      *param_1 = (uint)((uint)pvVar1);
      param_1[1] = (uint)((uint)pvVar1);
      param_1[2] = (uint)((uint)((int)pvVar1 + param_2));
      return;
    }
    *param_1 = (uint)(0);
    param_1[1] = (uint)(0);
    param_1[2] = (uint)(0);
    return;
  }
  if (param_2 + 0x23 <= param_2) {
                    
    thunk_FUN_1012a2a0();
  }
  pvVar1 = (void *)(operator_new(param_2 + 0x23));
  if (pvVar1 != (void *)0x0) {
    uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
    *(void **)(uVar2 - 4) = pvVar1;
    *param_1 = (uint)(uVar2);
    param_1[1] = (uint)(uVar2);
    param_1[2] = (uint)(uVar2 + param_2);
    return;
  }
                    
  _invalid_parameter_noinfo_noreturn();
}


// Reference entry 10f719d0; body size 8 bytes.
#line 1 "ENTRY_10f719d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f719d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10f719e0; body size 8 bytes.
#line 1 "ENTRY_10f719e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f719e0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10f71a10; body size 4 bytes.
#line 1 "ENTRY_10f71a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71a10(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10f71a20; body size 4 bytes.
#line 1 "ENTRY_10f71a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71a20(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10f71a30; body size 7 bytes.
#line 1 "ENTRY_10f71a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f71a30(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10f71a40; body size 7 bytes.
#line 1 "ENTRY_10f71a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f71a40(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool)(*(int *)(param_1 + 0x24) == param_1);
}


// Reference entry 10f71a70; body size 26 bytes.
#line 1 "ENTRY_10f71a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f71a70(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10f71a90; body size 26 bytes.
#line 1 "ENTRY_10f71a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f71a90(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)0x0) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return;
}


// Reference entry 10f71b70; body size 10 bytes.
#line 1 "ENTRY_10f71b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f71b70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10f71b80; body size 10 bytes.
#line 1 "ENTRY_10f71b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10f71b80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// Reference entry 10f72480; body size 16 bytes.
#line 1 "ENTRY_10f72480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f72480(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(uVar1);
}


// Reference entry 10f72560; body size 21 bytes.
#line 1 "ENTRY_10f72560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f72560(int param_1)

{
  if (*(int *)(param_1 + 0x6160) != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6160) + 0x448c));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffff);
}


// Reference entry 10f72580; body size 24 bytes.
#line 1 "ENTRY_10f72580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f72580(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x18) + 0x6160));
  if (iVar1 != 0) {
    return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(iVar1 + 0x448c));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xffffffff);
}


// Reference entry 10f725b0; body size 4 bytes.
#line 1 "ENTRY_10f725b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f725b0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f725c0; body size 4 bytes.
#line 1 "ENTRY_10f725c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f725c0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x30);
}


// Reference entry 10f725d0; body size 4 bytes.
#line 1 "ENTRY_10f725d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f725d0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x14);
}


// Reference entry 10f725e0; body size 28 bytes.
#line 1 "ENTRY_10f725e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f725e0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6154));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f72610; body size 28 bytes.
#line 1 "ENTRY_10f72610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f72610(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6138));
  *param_2 = (int)((int)piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_2);
}


// Reference entry 10f72680; body size 17 bytes.
#line 1 "ENTRY_10f72680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f72680(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6134) != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6134));
  }
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 *)(puVar1);
}


// Reference entry 10f73630; body size 3 bytes.
#line 1 "ENTRY_10f73630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f73630(undefined4 *param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*param_1);
}


// Reference entry 10f741a0; body size 9 bytes.
#line 1 "ENTRY_10f741a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f741a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f741b0; body size 83 bytes.
#line 1 "ENTRY_10f741b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10f741b0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  param_1[2] = (int)(0);
  param_1[4] = (int)(0);
  param_1[5] = (int)(-1);
  param_1[6] = (int)(3);
  param_1[3] = (int)(*(int *)(*param_1 + 0x38));
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int *)(param_1);
}


// Reference entry 10f74650; body size 116 bytes.
#line 1 "ENTRY_10f74650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10f74650(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBitmapResizer);
  param_1[1] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(param_2);
  param_1[9] = (undefined4)(0);
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[9] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  param_1[3] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCImprovedBitmapEnlarger);
  param_1[10] = (undefined4)(0);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f749a0; body size 14 bytes.
#line 1 "ENTRY_10f749a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f749a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceAuthHeaderBuilderFactory);
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *)(param_1);
}


// Reference entry 10f74f00; body size 7 bytes.
#line 1 "ENTRY_10f74f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f74f00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory);
  return;
}


// Reference entry 10f75900; body size 4 bytes.
#line 1 "ENTRY_10f75900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f75900(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x38));
}


// Reference entry 10f75910; body size 21 bytes.
#line 1 "ENTRY_10f75910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10f75910(int param_2,int param_3)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)((*(int *)(param_1 + 0x10) * param_3 + param_2) * 0x10 + *(int *)(param_1 + 0x28));
}


// Reference entry 10f76300; body size 24 bytes.
#line 1 "ENTRY_10f76300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10f76300(int param_2,int param_3)
{
  int param_1 = (int )this;
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x1c) * param_3 + param_2) * 0xc);
}


// Reference entry 10f76bb0; body size 4 bytes.
#line 1 "ENTRY_10f76bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76bb0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10f76bc0; body size 4 bytes.
#line 1 "ENTRY_10f76bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76bc0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(*(undefined4 *)(param_1 + 0x18));
}


// Reference entry 10f76be0; body size 4 bytes.
#line 1 "ENTRY_10f76be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f76be0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 0x10);
}


// Reference entry 10f76bf0; body size 4 bytes.
#line 1 "ENTRY_10f76bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f76bf0(int param_1)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int)(param_1 + 8);
}


// Reference entry 10f76d20; body size 6 bytes.
#line 1 "ENTRY_10f76d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f76d20(void)

{
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0xb);
}


// Reference entry 10f76f90; body size 13 bytes.
#line 1 "ENTRY_10f76f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76f90(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10f76fa0; body size 13 bytes.
#line 1 "ENTRY_10f76fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76fa0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10f76fb0; body size 13 bytes.
#line 1 "ENTRY_10f76fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76fb0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10f77120; body size 13 bytes.
#line 1 "ENTRY_10f77120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f77120(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 8))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10f77130; body size 13 bytes.
#line 1 "ENTRY_10f77130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f77130(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10f77280; body size 13 bytes.
#line 1 "ENTRY_10f77280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f77280(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


// Reference entry 10f77290; body size 13 bytes.
#line 1 "ENTRY_10f77290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f77290(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  return (/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4)(0);
}


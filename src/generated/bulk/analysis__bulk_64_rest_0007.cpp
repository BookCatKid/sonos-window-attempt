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
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int endsWith(...);
extern int int_allocRep(...);
extern int int_release(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101da4a0(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105a1f40(...);
extern int thunk_FUN_105a26b0(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105f2b00(...);
extern int thunk_FUN_105f34e0(...);
extern int thunk_FUN_105f36d0(...);
extern int thunk_FUN_105f38c0(...);
extern int thunk_FUN_105f3ab0(...);
extern int thunk_FUN_105f4090(...);
extern int thunk_FUN_105f4340(...);
extern int thunk_FUN_105f5a00(...);
extern int thunk_FUN_105f5df0(...);
extern int thunk_FUN_105f60e0(...);
extern int thunk_FUN_105f6290(...);
extern int thunk_FUN_105f98d0(...);
extern int thunk_FUN_105f9a80(...);
extern int thunk_FUN_105f9e40(...);
extern int thunk_FUN_105fce60(...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_10604d60(...);
extern int thunk_FUN_10604dd0(...);
extern int thunk_FUN_10604e40(...);
extern int thunk_FUN_10604eb0(...);
extern int thunk_FUN_10604f20(...);
extern int thunk_FUN_106050a0(...);
extern int thunk_FUN_106052d0(...);
extern int thunk_FUN_10610c60(...);
extern int thunk_FUN_1061c630(...);
extern int thunk_FUN_106da030(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106de0c0(...);
extern int thunk_FUN_106de2c0(...);
extern int thunk_FUN_106dfa00(...);
extern int thunk_FUN_106dfb80(...);
extern int thunk_FUN_106dfcc0(...);
extern int thunk_FUN_106e1380(...);
extern int thunk_FUN_106e3e70(...);
extern int thunk_FUN_10758340(...);
extern int thunk_FUN_107593f0(...);
extern int thunk_FUN_107626d0(...);
extern int thunk_FUN_10762e20(...);
extern int thunk_FUN_10767860(...);
extern int thunk_FUN_10767d40(...);
extern int thunk_FUN_1077bcd0(...);
extern int thunk_FUN_1077bf70(...);
extern int thunk_FUN_10811c10(...);
extern int thunk_FUN_10812740(...);
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_10819ab0(...);
extern int thunk_FUN_10873290(...);
extern int thunk_FUN_10874b00(...);
extern int thunk_FUN_108fb850(...);
extern int thunk_FUN_108fc3e0(...);
extern int thunk_FUN_10905580(...);
extern int thunk_FUN_10907260(...);
extern int thunk_FUN_10916c20(...);
extern int thunk_FUN_10919b50(...);
extern int thunk_FUN_1092b700(...);
extern int thunk_FUN_10948f60(...);
extern int thunk_FUN_10949d90(...);
extern int thunk_FUN_109a6790(...);
extern int thunk_FUN_109a85f0(...);
extern int thunk_FUN_109edf50(...);
extern int thunk_FUN_109eeaf0(...);
extern int thunk_FUN_10c5f1d0(...);
extern int thunk_FUN_10c5f450(...);
extern int thunk_FUN_10c5f8a0(...);
extern int thunk_FUN_10c61010(...);
extern int thunk_FUN_10c61ec0(...);
extern int thunk_FUN_10c62d50(...);
extern int thunk_FUN_10c97610(...);
extern int thunk_FUN_10c98710(...);
extern int thunk_FUN_10cf2f30(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10cf3630(...);
extern int thunk_FUN_10cf41d0(...);
extern int thunk_FUN_10cf5250(...);
extern int thunk_FUN_10deea50(...);
extern int thunk_FUN_10df2df0(...);
extern int thunk_FUN_10e0f250(...);
extern int thunk_FUN_10e0f500(...);
extern int thunk_FUN_10eaafe0(...);
extern int thunk_FUN_10eab1c0(...);
extern int thunk_FUN_10eacce0(...);
extern int thunk_FUN_10eace90(...);
extern int thunk_FUN_10ead100(...);
extern int thunk_FUN_10ead150(...);
extern int thunk_FUN_10eae0a0(...);
extern int thunk_FUN_10eae0f0(...);
extern int thunk_FUN_10eae120(...);
extern int thunk_FUN_10eae150(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10ebc060(...);
extern int thunk_FUN_10ebc1d0(...);
extern int thunk_FUN_10ec0a20(...);
extern int thunk_FUN_10ec1250(...);
extern int thunk_FUN_10ec1a10(...);
extern int thunk_FUN_10ec1b40(...);
extern int thunk_FUN_10ec1c00(...);
extern int thunk_FUN_10ec1d40(...);
extern int thunk_FUN_10ec7940(...);
extern int thunk_FUN_10eca460(...);
extern int thunk_FUN_10ecb760(...);
extern int thunk_FUN_10ecb9f0(...);
extern int thunk_FUN_10ecbaa0(...);
extern int thunk_FUN_10ecbbd0(...);
extern int thunk_FUN_10ecbc60(...);
extern int thunk_FUN_10ecd540(...);
extern int thunk_FUN_10ecea60(...);
extern int thunk_FUN_10eced20(...);
extern int thunk_FUN_10eceeb0(...);
extern int thunk_FUN_10edf540(...);
extern int thunk_FUN_10ee0ce0(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_11883704;
extern int DAT_1188465c;
extern int DAT_118bd270;
extern int DAT_118bd5c0;
extern int DAT_12126b84;
extern int DAT_121a12a8;
extern int DAT_121a12b0;
extern int DAT_121a2128;
extern int DAT_121a212c;
extern int DAT_121a2130;
extern int DAT_121a2134;
extern int DAT_121a2138;
extern int DAT_121a213c;
extern int DAT_121a2140;
extern int DAT_121a2144;
extern int DAT_121a2148;
extern int DAT_121a214c;
extern int DAT_121a2150;
extern int DAT_121a2154;
extern int DAT_121a2158;
extern int DAT_121a215c;
extern int DAT_121a2160;
extern int DAT_121a2164;
extern int DAT_121a2168;
extern int DAT_121a216c;
extern int DAT_121a2170;
extern int DAT_121a2174;
extern int DAT_121a2178;
extern int DAT_121a217c;
extern int DAT_121a2180;
extern int DAT_121a2184;
extern int DAT_121a2188;
extern int DAT_121a218c;
extern int DAT_121a2190;
extern int DAT_121a2194;
extern int ghidra_vftable_SCConditionalElementTree;
extern int ghidra_vftable_SCConditionalVectorBuilderTree;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCWifiConfigAccountRequiredSubwiz;
extern int ghidra_vftable_SCWifiConfigAccountRequiredSubwizType;
extern int ghidra_vftable_SCWifiConfigApConnectSubwiz;
extern int ghidra_vftable_SCWifiConfigApConnectSubwizType;
extern int ghidra_vftable_SCWifiConfigApInstructionsSubwiz;
extern int ghidra_vftable_SCWifiConfigApInstructionsSubwizType;
extern int ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz;
extern int ghidra_vftable_SCWifiConfigAppVersionCheckSubwizType;
extern int ghidra_vftable_SCWifiConfigAskNetworkModifiedPage;
extern int ghidra_vftable_SCWifiConfigAskNetworkModifiedPageType;
extern int ghidra_vftable_SCWifiConfigAskUnplugEthernetPage;
extern int ghidra_vftable_SCWifiConfigAskUnplugEthernetPageType;
extern int ghidra_vftable_SCWifiConfigBleConnectSubwiz;
extern int ghidra_vftable_SCWifiConfigBleConnectSubwizType;
extern int ghidra_vftable_SCWifiConfigConnectRecoverySubwiz;
extern int ghidra_vftable_SCWifiConfigConnectRecoverySubwizType;
extern int ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz;
extern int ghidra_vftable_SCWifiConfigDevicePermissionsSubwizType;
extern int ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz;
extern int ghidra_vftable_SCWifiConfigHouseholdSelectionSubwizType;
extern int ghidra_vftable_SCWifiConfigInformWiredConnectionPage;
extern int ghidra_vftable_SCWifiConfigInformWiredConnectionPageType;
extern int ghidra_vftable_SCWifiConfigIntroPage;
extern int ghidra_vftable_SCWifiConfigIntroPageType;
extern int ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz;
extern int ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwizType;
extern int ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz;
extern int ghidra_vftable_SCWifiConfigNetworkCredentialsSubwizType;
extern int ghidra_vftable_SCWifiConfigPlayerOutOfDatePage;
extern int ghidra_vftable_SCWifiConfigPlayerOutOfDatePageType;
extern int ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz;
extern int ghidra_vftable_SCWifiConfigPlayerSelectionSubwizType;
extern int ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz;
extern int ghidra_vftable_SCWifiConfigSecureAuthenticationSubwizType;
extern int ghidra_vftable_SCWifiConfigSetupCardBleFoundPage;
extern int ghidra_vftable_SCWifiConfigSetupCardBleFoundPageType;
extern int ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage;
extern int ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPageType;
extern int ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage;
extern int ghidra_vftable_SCWifiConfigSetupCardNoNetworkPageType;
extern int ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage;
extern int ghidra_vftable_SCWifiConfigSetupCardNothingFoundPageType;
extern int ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage;
extern int ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPageType;
extern int ghidra_vftable_SCWifiConfigStartOpenApPage;
extern int ghidra_vftable_SCWifiConfigStartOpenApPageType;
extern int ghidra_vftable_SCWifiConfigSuccessPage;
extern int ghidra_vftable_SCWifiConfigSuccessPageType;
extern int ghidra_vftable_SCWifiConfigSystemIdSubwiz;
extern int ghidra_vftable_SCWifiConfigSystemIdSubwizType;
extern int ghidra_vftable_SCWifiConfigTroubleshootSubwiz;
extern int ghidra_vftable_SCWifiConfigTroubleshootSubwizType;
extern int ghidra_vftable_SCWifiConfigWizard;
extern int ghidra_vftable_SCWifiConfigWizardType;
extern int ghidra_vftable_SCWifiConfigWrongHHIDPage;
extern int ghidra_vftable_SCWifiConfigWrongHHIDPageType;
extern undefined1 LAB_105f99e9[];
extern undefined1 LAB_105f9bd5[];
extern undefined1 LAB_105f9fde[];
extern undefined1 LAB_105fa048[];
extern undefined1 LAB_10605515[];
extern undefined1 LAB_106057c5[];
extern undefined1 LAB_10605a65[];
extern undefined1 LAB_10608679[];
extern undefined1 LAB_10608d85[];
extern undefined1 LAB_106095d5[];
extern undefined1 LAB_1060bd55[];
extern undefined1 LAB_115b61cd[];
extern undefined1 LAB_115b621d[];
extern undefined1 LAB_115b626d[];
extern undefined1 LAB_115b62b5[];
extern undefined1 LAB_115b62e0[];
extern undefined1 LAB_115b6328[];
extern undefined1 LAB_115b636d[];
extern undefined1 LAB_115b63b0[];
extern undefined1 LAB_115b63f8[];
extern undefined1 LAB_115b643d[];
extern undefined1 LAB_115b647d[];
extern undefined1 LAB_115b65bd[];
extern undefined1 LAB_115b65fd[];
extern undefined1 LAB_115b663d[];
extern undefined1 LAB_115b6688[];
extern undefined1 LAB_115b66e0[];
extern undefined1 LAB_115b671d[];
extern undefined1 LAB_115b675d[];
extern undefined1 LAB_115b679d[];
extern undefined1 LAB_115b67e5[];
extern undefined1 LAB_115b6828[];
extern undefined1 LAB_115b68c5[];
extern undefined1 LAB_115b6908[];
extern undefined1 LAB_115b6958[];
extern undefined1 LAB_115b69a8[];
extern undefined1 LAB_115b69ed[];
extern undefined1 LAB_115b6a2d[];
extern undefined1 LAB_115b6a6d[];
extern undefined1 LAB_115b6ab0[];
extern undefined1 LAB_115b6b1d[];
extern undefined1 LAB_115b6bc8[];
extern undefined1 LAB_115b6c80[];
extern undefined1 LAB_115b6ce0[];
extern undefined1 LAB_115b6d9e[];
extern undefined1 LAB_115b6dfe[];
extern undefined1 LAB_115b6e5e[];
extern undefined1 LAB_115b6ebe[];
extern undefined1 LAB_115b6f1e[];
extern undefined1 LAB_115b6f7e[];
extern undefined1 LAB_115b6fde[];
extern undefined1 LAB_115b703e[];
extern undefined1 LAB_115b709e[];
extern undefined1 LAB_115b70fe[];
extern undefined1 LAB_115b715e[];
extern undefined1 LAB_115b71be[];
extern undefined1 LAB_115b721e[];
extern undefined1 LAB_115b727e[];
extern undefined1 LAB_115b72de[];
extern undefined1 LAB_115b733e[];
extern undefined1 LAB_115b739e[];
extern undefined1 LAB_115b73fe[];
extern undefined1 LAB_115b745e[];
extern undefined1 LAB_115b74be[];
extern undefined1 LAB_115b751e[];
extern undefined1 LAB_115b757e[];
extern undefined1 LAB_115b75de[];
extern undefined1 LAB_115b763e[];
extern undefined1 LAB_115b769e[];
extern undefined1 LAB_115b76fe[];
extern undefined1 LAB_115b775e[];
extern undefined1 LAB_115b77c0[];
extern undefined1 LAB_115b7820[];
extern undefined1 LAB_115b7880[];
extern undefined1 LAB_115b78e0[];
extern undefined1 LAB_115b7940[];
extern undefined1 LAB_115b79a0[];
extern undefined1 LAB_115b7a00[];
extern undefined1 LAB_115b7a60[];
extern undefined1 LAB_115b7ac0[];
extern undefined1 LAB_115b7b20[];
extern undefined1 LAB_115b7b80[];
extern undefined1 LAB_115b7be0[];
extern undefined1 LAB_115b7c40[];
extern undefined1 LAB_115b7ca0[];
extern undefined1 LAB_115b7ce8[];
extern undefined1 LAB_115b7d38[];
extern undefined1 LAB_115b7d7d[];
extern undefined1 LAB_115b7dc5[];
extern undefined1 LAB_115b7e05[];
extern undefined1 LAB_115b7e45[];
extern undefined1 LAB_115b7e7d[];
extern undefined1 LAB_115b7ec5[];
extern undefined1 LAB_115b7f10[];
extern undefined1 LAB_115b7f4d[];
extern undefined1 LAB_115b7f8d[];
extern undefined1 LAB_115b7ff0[];
extern undefined1 LAB_115b8030[];
extern undefined1 LAB_115b8070[];
extern undefined1 LAB_115b80d0[];
extern undefined1 LAB_115b812e[];
extern undefined1 LAB_115b8190[];
extern undefined1 LAB_115b81ee[];
extern undefined1 LAB_115b8250[];
extern undefined1 LAB_115b82ae[];
extern undefined1 LAB_115b8310[];
extern undefined1 LAB_115b836e[];
extern undefined1 LAB_115b83ce[];
extern undefined1 LAB_115b842e[];
extern undefined1 LAB_115b8490[];
extern undefined1 LAB_115b84ee[];
extern undefined1 LAB_115b8550[];
extern undefined1 LAB_115b85ae[];
extern undefined1 LAB_115b8610[];
extern undefined1 LAB_115b866e[];
extern undefined1 LAB_115b86d0[];
extern undefined1 LAB_115b872e[];
extern undefined1 LAB_115b878e[];
extern undefined1 LAB_115b87db[];
extern undefined1 LAB_115b883e[];
extern undefined1 LAB_115b88a0[];
extern undefined1 LAB_115b88fe[];
extern undefined1 LAB_115b8960[];
extern undefined1 LAB_115b89be[];
extern undefined1 LAB_115b8a1e[];
extern undefined1 LAB_115b8a80[];
extern undefined1 LAB_115b8ade[];
extern undefined1 LAB_115b8b40[];
extern undefined1 LAB_115b8b9e[];
extern undefined1 LAB_115b8bdd[];
extern undefined1 LAB_115b8c3e[];
extern undefined1 LAB_115b8c7d[];
extern undefined1 LAB_115b8cde[];
extern undefined1 LAB_115b8d3e[];
extern undefined1 LAB_115b8d9e[];
extern undefined1 LAB_115b8ddd[];
extern undefined1 LAB_115b8e3e[];
extern undefined1 LAB_115b8e9e[];
extern undefined1 LAB_115b8efe[];
extern undefined1 LAB_115b8f60[];
extern undefined1 LAB_115b8fbe[];
extern undefined1 LAB_115b9028[];
extern undefined1 LAB_115b908e[];
extern undefined1 LAB_115b90f7[];
extern undefined1 LAB_115b9791[];
extern undefined1 LAB_115b997e[];
extern undefined1 LAB_115b99b0[];
extern undefined1 LAB_115b99e0[];
extern undefined1 LAB_115b9a10[];
extern undefined1 LAB_115b9a40[];
extern undefined1 LAB_115b9a70[];
extern undefined1 LAB_115b9aa0[];
extern undefined1 LAB_115b9bc0[];
extern undefined1 LAB_115b9c50[];
extern undefined1 LAB_115b9cb0[];
extern undefined1 LAB_115b9d10[];
extern undefined1 LAB_115b9d40[];
extern undefined1 LAB_115b9e00[];
extern undefined1 LAB_115b9e30[];
extern undefined1 LAB_115b9e60[];
extern undefined1 LAB_115b9e90[];
extern undefined1 LAB_115b9ec0[];
extern undefined1 LAB_115b9f20[];
extern undefined1 LAB_115b9f50[];
extern undefined1 LAB_115b9f80[];
extern undefined1 LAB_115ba040[];
extern undefined1 LAB_115ba070[];
extern undefined1 LAB_115ba0a0[];
extern undefined1 LAB_115ba0d0[];
extern undefined1 LAB_115ba190[];
extern undefined1 LAB_115ba1c0[];
extern undefined1 LAB_115ba1f0[];
extern undefined1 LAB_115ba220[];
extern undefined1 LAB_115ba555[];
extern undefined1 LAB_115ba5af[];
extern undefined1 LAB_115ba68d[];
extern undefined1 LAB_115ba722[];
extern undefined1 LAB_115ba7a2[];
extern undefined1 LAB_115ba822[];
extern undefined1 LAB_115ba8a2[];
extern undefined1 LAB_115ba8f7[];
extern undefined1 LAB_115ba947[];
extern undefined1 LAB_115ba9c2[];
extern undefined1 LAB_115baa42[];
extern undefined1 LAB_115baac2[];
extern undefined1 LAB_115bab42[];
extern undefined1 LAB_115bab97[];
extern undefined1 LAB_115babfd[];
extern undefined1 LAB_115bac72[];
extern undefined1 LAB_115bacf2[];
extern undefined1 LAB_115bad47[];
extern undefined1 LAB_115badc2[];
extern undefined1 LAB_115bae42[];
extern undefined1 LAB_115bae9f[];
extern undefined1 LAB_115baeef[];
extern undefined1 LAB_115baf37[];
extern undefined1 LAB_115baf87[];
extern undefined1 LAB_115bafdf[];
extern undefined1 LAB_115bb027[];
extern undefined1 LAB_115bb077[];
extern undefined1 LAB_115bb0f2[];
extern undefined1 LAB_115bb147[];
extern undefined1 LAB_115bb197[];
extern undefined1 LAB_115bb231[];
extern undefined1 LAB_115bb2d2[];
extern undefined1 LAB_115bb383[];
extern undefined1 LAB_115bb49f[];
extern undefined1 LAB_115bb5c4[];
extern undefined1 LAB_115bba95[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class... A> int endsWith(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int op_ctor(A...); };
typedef void *WARNING;
struct Page { char _pad; Page(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCIHapticDelegate { char _pad; SCIHapticDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigAccountRequiredSubwiz { char _pad; SCWifiConfigAccountRequiredSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigApConnectSubwiz { char _pad; SCWifiConfigApConnectSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigApInstructionsSubwiz { char _pad; SCWifiConfigApInstructionsSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigAppVersionCheckSubwiz { char _pad; SCWifiConfigAppVersionCheckSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigAskNetworkModifiedPage { char _pad; SCWifiConfigAskNetworkModifiedPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigAskUnplugEthernetPage { char _pad; SCWifiConfigAskUnplugEthernetPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigBleConnectSubwiz { char _pad; SCWifiConfigBleConnectSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigConnectRecoverySubwiz { char _pad; SCWifiConfigConnectRecoverySubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigDevicePermissionsSubwiz { char _pad; SCWifiConfigDevicePermissionsSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigHouseholdSelectionSubwiz { char _pad; SCWifiConfigHouseholdSelectionSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigInformWiredConnectionPage { char _pad; SCWifiConfigInformWiredConnectionPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigIntroPage { char _pad; SCWifiConfigIntroPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigNetworkCredentialPropagationSubwiz { char _pad; SCWifiConfigNetworkCredentialPropagationSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigNetworkCredentialsSubwiz { char _pad; SCWifiConfigNetworkCredentialsSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigPlayerOutOfDatePage { char _pad; SCWifiConfigPlayerOutOfDatePage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigPlayerSelectionSubwiz { char _pad; SCWifiConfigPlayerSelectionSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSecureAuthenticationSubwiz { char _pad; SCWifiConfigSecureAuthenticationSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardBleFoundPage { char _pad; SCWifiConfigSetupCardBleFoundPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardJoinNearbySystemPage { char _pad; SCWifiConfigSetupCardJoinNearbySystemPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardNoNetworkPage { char _pad; SCWifiConfigSetupCardNoNetworkPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardNothingFoundPage { char _pad; SCWifiConfigSetupCardNothingFoundPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSetupCardUnrecognizedNetworkPage { char _pad; SCWifiConfigSetupCardUnrecognizedNetworkPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigStartOpenApPage { char _pad; SCWifiConfigStartOpenApPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSuccessPage { char _pad; SCWifiConfigSuccessPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigSystemIdSubwiz { char _pad; SCWifiConfigSystemIdSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigTroubleshootSubwiz { char _pad; SCWifiConfigTroubleshootSubwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigWizard { char _pad; SCWifiConfigWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct SCWifiConfigWrongHHIDPage { char _pad; SCWifiConfigWrongHHIDPage(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Subwiz { char _pad; Subwiz(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); };
struct Recovered_Bulk { char _pad; undefined4 __thiscall FUN_105f2380(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); int * __thiscall FUN_105f2670(int *param_2); int * __thiscall FUN_105f27b0(int *param_2); int * __thiscall FUN_105f28e0(undefined4 *param_2); void __thiscall FUN_105f2bd0(int param_2); void __thiscall FUN_105f2cf0(undefined4 *param_2); void __thiscall FUN_105f2d80(undefined1 *param_2); void __thiscall FUN_105f2e10(undefined1 *param_2); void __thiscall FUN_105f30e0(undefined4 *param_2); void __thiscall FUN_105f3200(undefined4 *param_2); void __thiscall FUN_105f51f0(undefined4 *param_2); undefined4 * __thiscall FUN_105f5a00(int param_2); undefined4 * __thiscall FUN_105f5df0(int param_2); undefined4 * __thiscall FUN_105f6050(int param_2); undefined4 * __thiscall FUN_105f60e0(int param_2); undefined4 * __thiscall FUN_105f6470(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6560(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6650(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6740(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6830(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6920(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6a10(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6b00(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6bf0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6ce0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6dd0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6ec0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f6fb0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f70a0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7190(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7280(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7370(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7460(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7550(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7640(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7730(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7820(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7910(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7a00(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7af0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7be0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7cd0(char *param_2,undefined4 param_3); undefined4 * __thiscall FUN_105f7e20(undefined4 param_2); undefined4 * __thiscall FUN_105f7f30(undefined4 param_2); undefined4 * __thiscall FUN_105f8040(undefined4 param_2); undefined4 * __thiscall FUN_105f8150(undefined4 param_2); undefined4 * __thiscall FUN_105f8260(undefined4 param_2); undefined4 * __thiscall FUN_105f8370(undefined4 param_2); undefined4 * __thiscall FUN_105f8480(undefined4 param_2); undefined4 * __thiscall FUN_105f8590(undefined4 param_2); undefined4 * __thiscall FUN_105f86a0(undefined4 param_2); undefined4 * __thiscall FUN_105f87b0(undefined4 param_2); undefined4 * __thiscall FUN_105f88c0(undefined4 param_2); undefined4 * __thiscall FUN_105f89d0(undefined4 param_2); undefined4 * __thiscall FUN_105f8ae0(undefined4 param_2); undefined4 * __thiscall FUN_105f8bf0(undefined4 param_2); undefined1 * __thiscall FUN_105f8ff0(undefined1 *param_2); int __thiscall FUN_105f9110(int param_2); int * __thiscall FUN_105f9250(int *param_2); int * __thiscall FUN_105f9380(int *param_2); int * __thiscall FUN_105f94e0(int *param_2); int * __thiscall FUN_105f9640(int *param_2); int * __thiscall FUN_105f97a0(int *param_2); undefined4 * __thiscall FUN_105f98d0(int *param_2); undefined4 * __thiscall FUN_105f9a80(undefined4 *param_2); undefined4 * __thiscall FUN_105f9c40(undefined4 *param_2); undefined4 * __thiscall FUN_105f9cd0(undefined4 *param_2); undefined1 * __thiscall FUN_105f9e40(undefined1 *param_2); undefined4 * __thiscall FUN_105fa0e0(undefined4 *param_2); undefined4 * __thiscall FUN_105fa180(undefined4 *param_2); undefined4 * __thiscall FUN_105fa220(undefined4 param_2); undefined4 * __thiscall FUN_105fa330(undefined4 param_2); undefined4 * __thiscall FUN_105fa430(undefined4 param_2); undefined4 * __thiscall FUN_105fa540(undefined4 param_2); undefined4 * __thiscall FUN_105fa640(undefined4 param_2); undefined4 * __thiscall FUN_105fa750(undefined4 param_2); undefined4 * __thiscall FUN_105fa850(undefined4 param_2); undefined4 * __thiscall FUN_105fa960(undefined4 param_2); undefined4 * __thiscall FUN_105faab0(undefined4 param_2); undefined4 * __thiscall FUN_105fac00(undefined4 param_2); undefined4 * __thiscall FUN_105fad00(undefined4 param_2); undefined4 * __thiscall FUN_105fae10(undefined4 param_2); undefined4 * __thiscall FUN_105faf10(undefined4 param_2); undefined4 * __thiscall FUN_105fb020(undefined4 param_2); undefined4 * __thiscall FUN_105fb120(undefined4 param_2); undefined4 * __thiscall FUN_105fb230(undefined4 param_2); undefined4 * __thiscall FUN_105fb330(undefined4 param_2); undefined4 * __thiscall FUN_105fb440(undefined4 param_2); undefined4 * __thiscall FUN_105fb590(undefined4 param_2); undefined4 * __thiscall FUN_105fb690(undefined4 param_2); undefined4 * __thiscall FUN_105fb770(undefined4 param_2); undefined4 * __thiscall FUN_105fb870(undefined4 param_2); undefined4 * __thiscall FUN_105fb980(undefined4 param_2); undefined4 * __thiscall FUN_105fba80(undefined4 param_2); undefined4 * __thiscall FUN_105fbb90(undefined4 param_2); undefined4 * __thiscall FUN_105fbce0(undefined4 param_2); undefined4 * __thiscall FUN_105fbde0(undefined4 param_2); undefined4 * __thiscall FUN_105fbef0(undefined4 param_2); undefined4 * __thiscall FUN_105fbff0(undefined4 param_2); undefined4 * __thiscall FUN_105fc100(undefined4 param_2); undefined4 * __thiscall FUN_105fc200(undefined4 param_2); undefined4 * __thiscall FUN_105fc2b0(undefined4 param_2); undefined4 * __thiscall FUN_105fc3b0(undefined4 param_2); undefined4 * __thiscall FUN_105fc460(undefined4 param_2); undefined4 * __thiscall FUN_105fc5b0(undefined4 param_2); undefined4 * __thiscall FUN_105fc700(undefined4 param_2); undefined4 * __thiscall FUN_105fc800(undefined4 param_2); undefined4 * __thiscall FUN_105fc8b0(undefined4 param_2); undefined4 * __thiscall FUN_105fca00(undefined4 param_2); undefined4 * __thiscall FUN_105fcb50(undefined4 param_2); undefined4 * __thiscall FUN_105fcc50(undefined4 param_2); undefined4 * __thiscall FUN_105fcd60(undefined4 param_2); undefined4 * __thiscall FUN_105fce60(undefined4 param_2); undefined4 * __thiscall FUN_105fd080(undefined4 param_2); undefined4 * __thiscall FUN_105fd180(undefined4 param_2); undefined4 * __thiscall FUN_105fea30(undefined4 param_2); undefined4 * __thiscall FUN_106033a0(byte param_2); undefined4 * __thiscall FUN_106034a0(byte param_2); undefined4 * __thiscall FUN_106036e0(byte param_2); int __thiscall FUN_10603a60(byte param_2); void __thiscall FUN_10604230(int param_2,int param_3,int param_4); undefined4 * __thiscall FUN_10604a80(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); undefined4 __thiscall FUN_106052d0(undefined4 param_2); undefined4 * __thiscall FUN_10605d60(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10605ec0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606020(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606180(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106062e0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106063c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106064a0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606600(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606760(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_106068c0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606a20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606b00(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606c30(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606d90(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606ef0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10606fd0(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607130(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607290(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607390(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607490(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607570(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607650(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607750(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607830(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607910(undefined4 param_2,undefined4 param_3); undefined4 __thiscall FUN_10607a70(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607b20(undefined4 param_2,undefined4 param_3); undefined4 * __thiscall FUN_10607df0(undefined4 param_2,undefined4 param_3,undefined4 param_4); int __thiscall FUN_10608200(char param_2,undefined4 param_3); int __thiscall FUN_10608280(char param_2,undefined4 param_3); int __thiscall FUN_10608300(char param_2,undefined4 param_3); };
using namespace std;
void FUN_105f2b00(int *param_1,int *param_2);
extern void FUN_105f2b00(...);
extern void FUN_105f2b00(...);
int __stdcall FUN_105f3db0(int param_1,int param_2,int param_3);
extern int __stdcall FUN_105f3db0(...);
extern int __stdcall FUN_105f3db0(...);
int __stdcall FUN_105f3e40(int param_1,int param_2,int param_3);
extern int __stdcall FUN_105f3e40(...);
extern int __stdcall FUN_105f3e40(...);
int __stdcall FUN_105f3ed0(int param_1,int param_2,int param_3);
extern int __stdcall FUN_105f3ed0(...);
extern int __stdcall FUN_105f3ed0(...);
undefined1 * __stdcall FUN_105f3f80(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
extern undefined1 * __stdcall FUN_105f3f80(...);
extern undefined1 * __stdcall FUN_105f3f80(...);
int FUN_105f4090(int *param_1,int *param_2,int param_3);
extern int FUN_105f4090(...);
extern int FUN_105f4090(...);
int FUN_105f4190(int param_1,int param_2,int param_3);
extern int FUN_105f4190(...);
extern int FUN_105f4190(...);
int FUN_105f4220(int param_1,int param_2,int param_3);
extern int FUN_105f4220(...);
extern int FUN_105f4220(...);
int FUN_105f42b0(int param_1,int param_2,int param_3);
extern int FUN_105f42b0(...);
extern int FUN_105f42b0(...);
undefined4 *
FUN_105f4340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4);
extern undefined4 * FUN_105f4340(...);
extern undefined4 * FUN_105f4340(...);
undefined1 * FUN_105f4410(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
extern undefined1 * FUN_105f4410(...);
extern undefined1 * FUN_105f4410(...);
undefined4 *
FUN_105f4870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4);
extern undefined4 * FUN_105f4870(...);
extern undefined4 * FUN_105f4870(...);
void FUN_105f4970(undefined4 param_1,int param_2,int param_3);
extern void FUN_105f4970(...);
extern void FUN_105f4970(...);
void FUN_105f4a20(undefined4 param_1,int param_2,int param_3);
extern void FUN_105f4a20(...);
extern void FUN_105f4a20(...);
void FUN_105f4ad0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3);
extern void FUN_105f4ad0(...);
extern void FUN_105f4ad0(...);
void FUN_105f4e20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern void FUN_105f4e20(...);
extern void FUN_105f4e20(...);
void FUN_105f4ea0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern void FUN_105f4ea0(...);
extern void FUN_105f4ea0(...);
void FUN_105f4f20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern void FUN_105f4f20(...);
extern void FUN_105f4f20(...);
void FUN_105f4fa0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3);
extern void FUN_105f4fa0(...);
extern void FUN_105f4fa0(...);
undefined4 * __fastcall FUN_105fd2c0(undefined4 *param_1);
extern undefined4 * __fastcall FUN_105fd2c0(...);
extern undefined4 * __fastcall FUN_105fd2c0(...);
void __fastcall FUN_105fec50(int param_1);
extern void __fastcall FUN_105fec50(...);
extern void __fastcall FUN_105fec50(...);
void __fastcall FUN_105fece0(int param_1);
extern void __fastcall FUN_105fece0(...);
extern void __fastcall FUN_105fece0(...);
void __fastcall FUN_105fed70(int param_1);
extern void __fastcall FUN_105fed70(...);
extern void __fastcall FUN_105fed70(...);
void __fastcall FUN_105fee00(int param_1);
extern void __fastcall FUN_105fee00(...);
extern void __fastcall FUN_105fee00(...);
void __fastcall FUN_105feec0(int param_1);
extern void __fastcall FUN_105feec0(...);
extern void __fastcall FUN_105feec0(...);
void __fastcall FUN_105fef60(int param_1);
extern void __fastcall FUN_105fef60(...);
extern void __fastcall FUN_105fef60(...);
void __fastcall FUN_105ff3e0(int *param_1);
extern void __fastcall FUN_105ff3e0(...);
extern void __fastcall FUN_105ff3e0(...);
void __fastcall FUN_105ff930(int param_1);
extern void __fastcall FUN_105ff930(...);
extern void __fastcall FUN_105ff930(...);
void __fastcall FUN_105ffaa0(int param_1);
extern void __fastcall FUN_105ffaa0(...);
extern void __fastcall FUN_105ffaa0(...);
void __fastcall FUN_105ffba0(int param_1);
extern void __fastcall FUN_105ffba0(...);
extern void __fastcall FUN_105ffba0(...);
void __fastcall FUN_105ffc30(int param_1);
extern void __fastcall FUN_105ffc30(...);
extern void __fastcall FUN_105ffc30(...);
void __fastcall FUN_105ffe50(int param_1);
extern void __fastcall FUN_105ffe50(...);
extern void __fastcall FUN_105ffe50(...);
void __fastcall FUN_105ffee0(int param_1);
extern void __fastcall FUN_105ffee0(...);
extern void __fastcall FUN_105ffee0(...);
void __fastcall FUN_105fff80(int param_1);
extern void __fastcall FUN_105fff80(...);
extern void __fastcall FUN_105fff80(...);
void __fastcall FUN_10600020(int param_1);
extern void __fastcall FUN_10600020(...);
extern void __fastcall FUN_10600020(...);
void __fastcall FUN_106000b0(int param_1);
extern void __fastcall FUN_106000b0(...);
extern void __fastcall FUN_106000b0(...);
void __fastcall FUN_106001b0(int param_1);
extern void __fastcall FUN_106001b0(...);
extern void __fastcall FUN_106001b0(...);
void __fastcall FUN_106002b0(int param_1);
extern void __fastcall FUN_106002b0(...);
extern void __fastcall FUN_106002b0(...);
void __fastcall FUN_10600350(int param_1);
extern void __fastcall FUN_10600350(...);
extern void __fastcall FUN_10600350(...);
void __fastcall FUN_10600ac0(undefined4 *param_1);
extern void __fastcall FUN_10600ac0(...);
extern void __fastcall FUN_10600ac0(...);
void __fastcall FUN_10600b80(undefined4 *param_1);
extern void __fastcall FUN_10600b80(...);
extern void __fastcall FUN_10600b80(...);
void __fastcall FUN_10600ce0(undefined4 *param_1);
extern void __fastcall FUN_10600ce0(...);
extern void __fastcall FUN_10600ce0(...);
void __fastcall FUN_10600ee0(int param_1);
extern void __fastcall FUN_10600ee0(...);
extern void __fastcall FUN_10600ee0(...);
void __fastcall FUN_10604820(int *param_1);
extern void __fastcall FUN_10604820(...);
extern void __fastcall FUN_10604820(...);
void * FUN_10604d60(uint param_1);
extern void * FUN_10604d60(...);
extern void * FUN_10604d60(...);
void * FUN_10604dd0(uint param_1);
extern void * FUN_10604dd0(...);
extern void * FUN_10604dd0(...);
void * FUN_10604e40(uint param_1);
extern void * FUN_10604e40(...);
extern void * FUN_10604e40(...);
void * FUN_10604eb0(uint param_1);
extern void * FUN_10604eb0(...);
extern void * FUN_10604eb0(...);
void * FUN_10604f20(uint param_1);
extern void * FUN_10604f20(...);
extern void * FUN_10604f20(...);
void * FUN_10604fa0(uint param_1);
extern void * FUN_10604fa0(...);
extern void * FUN_10604fa0(...);
undefined4 * __stdcall FUN_106051a0(undefined4 *param_1);
extern undefined4 * __stdcall FUN_106051a0(...);
extern undefined4 * __stdcall FUN_106051a0(...);
undefined4 * __stdcall FUN_10607c00(undefined4 *param_1);
extern undefined4 * __stdcall FUN_10607c00(...);
extern undefined4 * __stdcall FUN_10607c00(...);
undefined4 __stdcall FUN_106083b0(undefined4 param_1);
extern undefined4 __stdcall FUN_106083b0(...);
extern undefined4 __stdcall FUN_106083b0(...);
undefined4 __stdcall FUN_10608940(undefined4 param_1);
extern undefined4 __stdcall FUN_10608940(...);
extern undefined4 __stdcall FUN_10608940(...);
undefined4 __stdcall FUN_106091b0(undefined4 param_1);
extern undefined4 __stdcall FUN_106091b0(...);
extern undefined4 __stdcall FUN_106091b0(...);
undefined4 __stdcall FUN_1060b510(undefined4 param_1);
extern undefined4 __stdcall FUN_1060b510(...);
extern undefined4 __stdcall FUN_1060b510(...);
// Reference entry 105f2380; body size 113 bytes.
#line 1 "ENTRY_105f2380"

undefined4 __thiscall Recovered_Bulk::FUN_105f2380(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10c5f8a0(&DAT_1186d2ee);

  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_5 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)((undefined1 *)*param_5);
  }
  thunk_FUN_10c62d50(param_1,param_5,param_2,param_3,param_4,puVar2,uVar1);

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 105f2670; body size 248 bytes.
#line 1 "ENTRY_105f2670"

int * __thiscall Recovered_Bulk::FUN_105f2670(int *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIHapticDelegate");
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


// Reference entry 105f27b0; body size 242 bytes.
#line 1 "ENTRY_105f27b0"

int * __thiscall Recovered_Bulk::FUN_105f27b0(int *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIHapticDelegate");
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


// Reference entry 105f28e0; body size 188 bytes.
#line 1 "ENTRY_105f28e0"

int * __thiscall Recovered_Bulk::FUN_105f28e0(undefined4 *param_2)
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
    ((SCStr *)((SCStr *)&param_2))->int_allocRep("SCIHapticDelegate");

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


// Reference entry 105f2b00; body size 152 bytes.
#line 1 "ENTRY_105f2b00"

void FUN_105f2b00(int *param_1,int *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  if (param_1 != (int *)(param_2)) {
    piVar3 = (int *)(param_1 + 1);
    do {

      ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
      piVar3[1] = (int)(0);
      piVar1 = (int *)((int *)*piVar3);

      if (piVar1 != (int *)0x0) {
        piVar3[-1] = (int)(0);
        *piVar3 = (int)(0);
        (**(code **)(*piVar1 + 8))(uVar2);
      }
      piVar1 = (int *)(piVar3 + 2);
      piVar3 = (int *)(piVar3 + 3);
    } while (piVar1 != (int *)(param_2));
  }

  return;

 } catch (...) { }
}


// Reference entry 105f2bd0; body size 151 bytes.
#line 1 "ENTRY_105f2bd0"

void __thiscall Recovered_Bulk::FUN_105f2bd0(int param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar1 = (int)(*(int *)(param_1 + 4));
  thunk_FUN_105f9e40(param_2);

  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  piVar2 = (int *)(*(int **)(param_2 + 0x28));
  *(int **)(iVar1 + 0x28) = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar3);
  }
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  piVar2 = (int *)(*(int **)(param_2 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(iVar1 + 0x30) = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x34;

  return;

 } catch (...) { }
}


// Reference entry 105f2cf0; body size 111 bytes.
#line 1 "ENTRY_105f2cf0"

void __thiscall Recovered_Bulk::FUN_105f2cf0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar3);
  }

  ((SCStr *)((SCStr *)(puVar1 + 2)))->op_ctor((SCStr *)(param_2 + 2));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0xc;

  return;

 } catch (...) { }
}


// Reference entry 105f2d80; body size 108 bytes.
#line 1 "ENTRY_105f2d80"

void __thiscall Recovered_Bulk::FUN_105f2d80(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  **(undefined1 **)(param_1 + 4) = *param_2;
  thunk_FUN_105f98d0(param_2 + 4);

  thunk_FUN_105f9a80(param_2 + 0x10);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1c;

  return;

 } catch (...) { }
}


// Reference entry 105f2e10; body size 225 bytes.
#line 1 "ENTRY_105f2e10"

void __thiscall Recovered_Bulk::FUN_105f2e10(undefined1 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar6 = (uint)(DAT_12126b84);

  puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 4));
  *puVar1 = (undefined1)(*param_2);
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(puVar1 + 4) = uVar4;
  *(undefined4 *)(puVar1 + 8) = uVar3;
  *(undefined4 *)(puVar1 + 0xc) = uVar2;
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar4 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x10) = uVar4;
  *(undefined4 *)(puVar1 + 0x14) = uVar3;
  *(undefined4 *)(puVar1 + 0x18) = uVar2;

  *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(puVar1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  piVar5 = (int *)(*(int **)(param_2 + 0x28));
  *(int **)(puVar1 + 0x28) = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(uVar6);
  }
  *(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  piVar5 = (int *)(*(int **)(param_2 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(puVar1 + 0x30) = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x34;

  return;

 } catch (...) { }
}


// Reference entry 105f30e0; body size 111 bytes.
#line 1 "ENTRY_105f30e0"

void __thiscall Recovered_Bulk::FUN_105f30e0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar3);
  }

  ((SCStr *)((SCStr *)(puVar1 + 2)))->op_ctor((SCStr *)(param_2 + 2));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0xc;

  return;

 } catch (...) { }
}


// Reference entry 105f3200; body size 111 bytes.
#line 1 "ENTRY_105f3200"

void __thiscall Recovered_Bulk::FUN_105f3200(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(uVar3);
  }

  ((SCStr *)((SCStr *)(puVar1 + 2)))->op_ctor((SCStr *)(param_2 + 2));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0xc;

  return;

 } catch (...) { }
}


// Reference entry 105f3db0; body size 112 bytes.
#line 1 "ENTRY_105f3db0"

int __stdcall FUN_105f3db0(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f5a00(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f3e40; body size 112 bytes.
#line 1 "ENTRY_105f3e40"

int __stdcall FUN_105f3e40(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f5df0(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f3ed0; body size 112 bytes.
#line 1 "ENTRY_105f3ed0"

int __stdcall FUN_105f3ed0(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f60e0(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f3f80; body size 142 bytes.
#line 1 "ENTRY_105f3f80"

undefined1 * __stdcall FUN_105f3f80(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != (undefined1 *)(param_2)); param_1 = param_1 + 0x1c) {

    *param_3 = (undefined1)(*param_1);
    thunk_FUN_105f98d0(param_1 + 4);

    thunk_FUN_105f9a80(param_1 + 0x10);
    param_3 = (undefined1 *)(param_3 + 0x1c);

  }

  return (undefined1 *)(param_3);

 } catch (...) { }
}


// Reference entry 105f4090; body size 201 bytes.
#line 1 "ENTRY_105f4090"

int FUN_105f4090(int *param_1,int *param_2,int param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;

  uVar2 = (uint)(DAT_12126b84);

  if (param_1 != (int *)(param_2)) {
    piVar3 = (int *)(param_1 + 0xc);
    do {

      thunk_FUN_105f9e40(piVar3 + -0xc);

      *(int *)(param_3 + 0x1c) = piVar3[-5];
      *(int *)(param_3 + 0x20) = piVar3[-4];
      *(int *)(param_3 + 0x24) = piVar3[-3];
      piVar1 = (int *)((int *)piVar3[-2]);
      *(int **)(param_3 + 0x28) = piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar2);
      }
      *(int *)(param_3 + 0x2c) = piVar3[-1];
      piVar1 = (int *)((int *)*piVar3);

      *(int **)(param_3 + 0x30) = piVar1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      param_3 = (int)(param_3 + 0x34);
      piVar1 = (int *)(piVar3 + 1);
      piVar3 = (int *)(piVar3 + 0xd);
    } while (piVar1 != (int *)(param_2));
  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f4190; body size 113 bytes.
#line 1 "ENTRY_105f4190"

int FUN_105f4190(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f5a00(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f4220; body size 113 bytes.
#line 1 "ENTRY_105f4220"

int FUN_105f4220(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f5df0(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f42b0; body size 113 bytes.
#line 1 "ENTRY_105f42b0"

int FUN_105f42b0(int param_1,int param_2,int param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != param_2); param_1 = param_1 + 0x20) {
    thunk_FUN_105f60e0(param_1);
    param_3 = (int)(param_3 + 0x20);

  }

  return (int)(param_3);

 } catch (...) { }
}


// Reference entry 105f4340; body size 160 bytes.
#line 1 "ENTRY_105f4340"

undefined4 *
FUN_105f4340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
 try {
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 3) {
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    ((SCStr *)((SCStr *)(param_3 + 2)))->op_ctor((SCStr *)(param_1 + 2));
    param_3 = (undefined4 *)(param_3 + 3);
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);

  }
  thunk_FUN_105f2b00(param_3,param_3,param_4);

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 105f4410; body size 143 bytes.
#line 1 "ENTRY_105f4410"

undefined1 * FUN_105f4410(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
 try {
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;

  ppvVar1 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar1, param_1 != (undefined1 *)(param_2)); param_1 = param_1 + 0x1c) {

    *param_3 = (undefined1)(*param_1);
    thunk_FUN_105f98d0(param_1 + 4);

    thunk_FUN_105f9a80(param_1 + 0x10);
    param_3 = (undefined1 *)(param_3 + 0x1c);

  }

  return (undefined1 *)(param_3);

 } catch (...) { }
}


// Reference entry 105f4870; body size 160 bytes.
#line 1 "ENTRY_105f4870"

undefined4 *
FUN_105f4870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
 try {
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_1 != (undefined4 *)(param_2)); param_1 = param_1 + 3) {
    *param_3 = (undefined4)(*param_1);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    ((SCStr *)((SCStr *)(param_3 + 2)))->op_ctor((SCStr *)(param_1 + 2));
    param_3 = (undefined4 *)(param_3 + 3);
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);

  }
  thunk_FUN_105f2b00(param_3,param_3,param_4);

  return (undefined4 *)(param_3);

 } catch (...) { }
}


// Reference entry 105f4970; body size 140 bytes.
#line 1 "ENTRY_105f4970"

void FUN_105f4970(undefined4 param_1,int param_2,int param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105f9e40(param_3);

  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  piVar1 = (int *)(*(int **)(param_3 + 0x28));
  *(int **)(param_2 + 0x28) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  piVar1 = (int *)(*(int **)(param_3 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_2 + 0x30) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105f4a20; body size 140 bytes.
#line 1 "ENTRY_105f4a20"

void FUN_105f4a20(undefined4 param_1,int param_2,int param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105f9e40(param_3);

  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  piVar1 = (int *)(*(int **)(param_3 + 0x28));
  *(int **)(param_2 + 0x28) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  piVar1 = (int *)(*(int **)(param_3 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_2 + 0x30) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105f4ad0; body size 214 bytes.
#line 1 "ENTRY_105f4ad0"

void FUN_105f4ad0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar5 = (uint)(DAT_12126b84);

  *param_2 = (undefined1)(*param_3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 8));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 4));
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_2 + 4) = uVar3;
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x10) = uVar3;
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 0x18) = uVar1;

  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  piVar4 = (int *)(*(int **)(param_3 + 0x28));
  *(int **)(param_2 + 0x28) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar5);
  }
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  piVar4 = (int *)(*(int **)(param_3 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_2 + 0x30) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105f4e20; body size 100 bytes.
#line 1 "ENTRY_105f4e20"

void FUN_105f4e20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_2 + 2)))->op_ctor((SCStr *)(param_3 + 2));

  return;

 } catch (...) { }
}


// Reference entry 105f4ea0; body size 100 bytes.
#line 1 "ENTRY_105f4ea0"

void FUN_105f4ea0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_2 + 2)))->op_ctor((SCStr *)(param_3 + 2));

  return;

 } catch (...) { }
}


// Reference entry 105f4f20; body size 100 bytes.
#line 1 "ENTRY_105f4f20"

void FUN_105f4f20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_2 + 2)))->op_ctor((SCStr *)(param_3 + 2));

  return;

 } catch (...) { }
}


// Reference entry 105f4fa0; body size 97 bytes.
#line 1 "ENTRY_105f4fa0"

void FUN_105f4fa0(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_2 = (undefined1)(*param_3);
  thunk_FUN_105f98d0(param_3 + 4);

  thunk_FUN_105f9a80(param_3 + 0x10);

  return;

 } catch (...) { }
}


// Reference entry 105f51f0; body size 145 bytes.
#line 1 "ENTRY_105f51f0"

void __thiscall Recovered_Bulk::FUN_105f51f0(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  if (puVar1 != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(uVar3);
    }

    ((SCStr *)((SCStr *)(puVar1 + 2)))->op_ctor((SCStr *)(param_2 + 2));
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0xc;

    return;
  }
  thunk_FUN_105f3ab0(puVar1,param_2);

  return;

 } catch (...) { }
}


// Reference entry 105f5a00; body size 329 bytes.
#line 1 "ENTRY_105f5a00"

undefined4 * __thiscall Recovered_Bulk::FUN_105f5a00(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  void *_Src;
  void *_Dst;
  size_t _Size;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalElementTree);

  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *piVar1 = (int)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  _Src = (void *)(*(void **)(param_2 + 8));
  if (_Src != *(void **)(param_2 + 0xc)) {
    _Size = (size_t)((int)*(void **)(param_2 + 0xc) - (int)_Src);
    iVar4 = (int)((int)_Size >> 2);
    iVar2 = (int)(thunk_FUN_105a1f40(iVar4));
    *piVar1 = (int)(iVar2);
    iVar4 = (int)(iVar4 * 4);
    param_1[3] = (undefined4)(iVar2);
    param_1[4] = (undefined4)(iVar2 + iVar4);
    _Dst = (void *)((void *)*piVar1);
    memmove(_Dst,_Src,_Size);
    param_1[3] = (undefined4)((void *)(iVar4 + (int)_Dst));
  }
  piVar1 = (int *)(param_1 + 5);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar1 = (int)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  iVar4 = (int)(*(int *)(param_2 + 0x18));
  iVar2 = (int)(*(int *)(param_2 + 0x14));
  if (iVar2 != iVar4) {
    iVar5 = (int)(iVar4 - iVar2 >> 5);
    iVar3 = (int)(thunk_FUN_10604dd0(iVar5));
    *piVar1 = (int)(iVar3);
    param_1[6] = (undefined4)(iVar3);
    param_1[7] = (undefined4)(iVar5 * 0x20 + iVar3);
    iVar3 = (int)(*piVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
    do {
      thunk_FUN_105f5a00(iVar2);
      iVar3 = (int)(iVar3 + 0x20);
      iVar2 = (int)(iVar2 + 0x20);
    } while (iVar2 != iVar4);
    param_1[6] = (undefined4)(iVar3);

    return (undefined4 *)(param_1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f5df0; body size 344 bytes.
#line 1 "ENTRY_105f5df0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f5df0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *piVar1 = (int)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  iVar2 = (int)(*(int *)(param_2 + 8));
  iVar6 = (int)(*(int *)(param_2 + 0xc));
  if (iVar2 != iVar6) {
    iVar5 = (int)((iVar6 - iVar2) / 0x34);
    iVar3 = (int)(thunk_FUN_10604d60(iVar5));
    *piVar1 = (int)(iVar3);
    param_1[3] = (undefined4)(iVar3);
    param_1[4] = (undefined4)(iVar5 * 0x34 + iVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar4 = (undefined4)(thunk_FUN_105f4090(iVar2,iVar6,*piVar1,piVar1));
    param_1[3] = (undefined4)(uVar4);
  }
  piVar1 = (int *)(param_1 + 5);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar1 = (int)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  iVar2 = (int)(*(int *)(param_2 + 0x18));
  iVar6 = (int)(*(int *)(param_2 + 0x14));
  if (iVar6 != iVar2) {
    iVar3 = (int)(iVar2 - iVar6 >> 5);
    iVar5 = (int)(thunk_FUN_10604e40(iVar3));
    *piVar1 = (int)(iVar5);
    param_1[6] = (undefined4)(iVar5);
    param_1[7] = (undefined4)(iVar3 * 0x20 + iVar5);
    iVar5 = (int)(*piVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    do {
      thunk_FUN_105f5df0(iVar6);
      iVar5 = (int)(iVar5 + 0x20);
      iVar6 = (int)(iVar6 + 0x20);
    } while (iVar6 != iVar2);
    param_1[6] = (undefined4)(iVar5);

    return (undefined4 *)(param_1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6050; body size 105 bytes.
#line 1 "ENTRY_105f6050"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6050(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  param_1[2] = (undefined4)(uVar3);
  param_1[3] = (undefined4)(uVar2);
  param_1[4] = (undefined4)(uVar1);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_1[5] = (undefined4)(uVar1);
  param_1[6] = (undefined4)(uVar3);
  param_1[7] = (undefined4)(uVar2);
  return (undefined4 *)(param_1);
}


// Reference entry 105f60e0; body size 344 bytes.
#line 1 "ENTRY_105f60e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f60e0(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  piVar1 = (int *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  *piVar1 = (int)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  iVar2 = (int)(*(int *)(param_2 + 8));
  iVar6 = (int)(*(int *)(param_2 + 0xc));
  if (iVar2 != iVar6) {
    iVar5 = (int)((iVar6 - iVar2) / 0xc);
    iVar3 = (int)(thunk_FUN_10604f20(iVar5));
    *piVar1 = (int)(iVar3);
    param_1[3] = (undefined4)(iVar3);
    param_1[4] = (undefined4)(iVar3 + iVar5 * 0xc);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    uVar4 = (undefined4)(thunk_FUN_105f4340(iVar2,iVar6,*piVar1,piVar1));
    param_1[3] = (undefined4)(uVar4);
  }
  piVar1 = (int *)(param_1 + 5);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *piVar1 = (int)(0);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  iVar2 = (int)(*(int *)(param_2 + 0x18));
  iVar6 = (int)(*(int *)(param_2 + 0x14));
  if (iVar6 != iVar2) {
    iVar3 = (int)(iVar2 - iVar6 >> 5);
    iVar5 = (int)(thunk_FUN_10604eb0(iVar3));
    *piVar1 = (int)(iVar5);
    param_1[6] = (undefined4)(iVar5);
    param_1[7] = (undefined4)(iVar3 * 0x20 + iVar5);
    iVar5 = (int)(*piVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    do {
      thunk_FUN_105f60e0(iVar6);
      iVar5 = (int)(iVar5 + 0x20);
      iVar6 = (int)(iVar6 + 0x20);
    } while (iVar6 != iVar2);
    param_1[6] = (undefined4)(iVar5);

    return (undefined4 *)(param_1);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6470; body size 183 bytes.
#line 1 "ENTRY_105f6470"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6470(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6560; body size 183 bytes.
#line 1 "ENTRY_105f6560"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6560(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6650; body size 183 bytes.
#line 1 "ENTRY_105f6650"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6650(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6740; body size 183 bytes.
#line 1 "ENTRY_105f6740"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6740(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6830; body size 180 bytes.
#line 1 "ENTRY_105f6830"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6830(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6920; body size 180 bytes.
#line 1 "ENTRY_105f6920"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6920(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6a10; body size 183 bytes.
#line 1 "ENTRY_105f6a10"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6a10(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6b00; body size 183 bytes.
#line 1 "ENTRY_105f6b00"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6b00(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6bf0; body size 183 bytes.
#line 1 "ENTRY_105f6bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6bf0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6ce0; body size 183 bytes.
#line 1 "ENTRY_105f6ce0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6ce0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6dd0; body size 180 bytes.
#line 1 "ENTRY_105f6dd0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6dd0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6ec0; body size 180 bytes.
#line 1 "ENTRY_105f6ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6ec0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f6fb0; body size 183 bytes.
#line 1 "ENTRY_105f6fb0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f6fb0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f70a0; body size 183 bytes.
#line 1 "ENTRY_105f70a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f70a0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7190; body size 180 bytes.
#line 1 "ENTRY_105f7190"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7190(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7280; body size 183 bytes.
#line 1 "ENTRY_105f7280"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7280(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7370; body size 183 bytes.
#line 1 "ENTRY_105f7370"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7370(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7460; body size 180 bytes.
#line 1 "ENTRY_105f7460"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7460(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7550; body size 180 bytes.
#line 1 "ENTRY_105f7550"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7550(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7640; body size 180 bytes.
#line 1 "ENTRY_105f7640"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7640(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7730; body size 180 bytes.
#line 1 "ENTRY_105f7730"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7730(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7820; body size 180 bytes.
#line 1 "ENTRY_105f7820"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7820(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7910; body size 180 bytes.
#line 1 "ENTRY_105f7910"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7910(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7a00; body size 180 bytes.
#line 1 "ENTRY_105f7a00"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7a00(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7af0; body size 183 bytes.
#line 1 "ENTRY_105f7af0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7af0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7be0; body size 183 bytes.
#line 1 "ENTRY_105f7be0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7be0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7cd0; body size 180 bytes.
#line 1 "ENTRY_105f7cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7cd0(char *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&param_2))->int_allocRep(param_2);

  thunk_FUN_106de0c0(&param_2,param_3);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  param_2 = (char *)((char *)0x0);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_3));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_3))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7e20; body size 213 bytes.
#line 1 "ENTRY_105f7e20"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7e20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xfc));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_106e1380(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_106e3e70(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f7f30; body size 213 bytes.
#line 1 "ENTRY_105f7f30"

undefined4 * __thiscall Recovered_Bulk::FUN_105f7f30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_107626d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10762e20(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8040; body size 213 bytes.
#line 1 "ENTRY_105f8040"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10767860(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10767d40(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8150; body size 213 bytes.
#line 1 "ENTRY_105f8150"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10758340(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_107593f0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8260; body size 213 bytes.
#line 1 "ENTRY_105f8260"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8260(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1077bcd0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1077bf70(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8370; body size 213 bytes.
#line 1 "ENTRY_105f8370"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10811c10(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10812740(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8480; body size 213 bytes.
#line 1 "ENTRY_105f8480"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8480(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10818140(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10819ab0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8590; body size 213 bytes.
#line 1 "ENTRY_105f8590"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10873290(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10874b00(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f86a0; body size 213 bytes.
#line 1 "ENTRY_105f86a0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f86a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x124));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10905580(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10907260(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f87b0; body size 213 bytes.
#line 1 "ENTRY_105f87b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f87b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_108fb850(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108fc3e0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f88c0; body size 213 bytes.
#line 1 "ENTRY_105f88c0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f88c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10916c20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10919b50(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f89d0; body size 213 bytes.
#line 1 "ENTRY_105f89d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f89d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10948f60(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10949d90(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8ae0; body size 213 bytes.
#line 1 "ENTRY_105f8ae0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109a6790(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109a85f0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8bf0; body size 213 bytes.
#line 1 "ENTRY_105f8bf0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f8bf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109edf50(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109eeaf0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f8ff0; body size 220 bytes.
#line 1 "ENTRY_105f8ff0"

undefined1 * __thiscall Recovered_Bulk::FUN_105f8ff0(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
 try {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar5 = (uint)(DAT_12126b84);

  *param_1 = (undefined1)(*param_2);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 8));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar1;

  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  piVar4 = (int *)(*(int **)(param_2 + 0x28));
  *(int **)(param_1 + 0x28) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(uVar5);
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  piVar4 = (int *)(*(int **)(param_2 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_1 + 0x30) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  return (undefined1 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9110; body size 144 bytes.
#line 1 "ENTRY_105f9110"

int __thiscall Recovered_Bulk::FUN_105f9110(int param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_105f9e40(param_2);

  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  piVar1 = (int *)(*(int **)(param_2 + 0x28));
  *(int **)(param_1 + 0x28) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  piVar1 = (int *)(*(int **)(param_2 + 0x30));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
  *(int **)(param_1 + 0x30) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 105f9250; body size 166 bytes.
#line 1 "ENTRY_105f9250"

int * __thiscall Recovered_Bulk::FUN_105f9250(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar5 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar5 != iVar1) {
    iVar2 = (int)((iVar1 - iVar5) / 0x34);
    iVar4 = (int)(thunk_FUN_10604d60(iVar2));
    *param_1 = (int)(iVar4);
    param_1[1] = (int)(iVar4);
    param_1[2] = (int)(iVar2 * 0x34 + iVar4);

    iVar5 = (int)(thunk_FUN_105f4090(iVar5,iVar1,iVar4,param_1,uVar3));
    param_1[1] = (int)(iVar5);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9380; body size 204 bytes.
#line 1 "ENTRY_105f9380"

int * __thiscall Recovered_Bulk::FUN_105f9380(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 5);
    iVar3 = (int)(thunk_FUN_10604dd0(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar5 * 0x20 + iVar3);

    do {
      thunk_FUN_105f5a00(iVar4);
      iVar3 = (int)(iVar3 + 0x20);
      iVar4 = (int)(iVar4 + 0x20);
    } while (iVar4 != iVar1);
    param_1[1] = (int)(iVar3);

    return (int *)(param_1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f94e0; body size 204 bytes.
#line 1 "ENTRY_105f94e0"

int * __thiscall Recovered_Bulk::FUN_105f94e0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 5);
    iVar3 = (int)(thunk_FUN_10604e40(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar5 * 0x20 + iVar3);

    do {
      thunk_FUN_105f5df0(iVar4);
      iVar3 = (int)(iVar3 + 0x20);
      iVar4 = (int)(iVar4 + 0x20);
    } while (iVar4 != iVar1);
    param_1[1] = (int)(iVar3);

    return (int *)(param_1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9640; body size 204 bytes.
#line 1 "ENTRY_105f9640"

int * __thiscall Recovered_Bulk::FUN_105f9640(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar4 != iVar1) {
    iVar5 = (int)(iVar1 - iVar4 >> 5);
    iVar3 = (int)(thunk_FUN_10604eb0(iVar5));
    *param_1 = (int)(iVar3);
    param_1[1] = (int)(iVar3);
    param_1[2] = (int)(iVar5 * 0x20 + iVar3);

    do {
      thunk_FUN_105f60e0(iVar4);
      iVar3 = (int)(iVar3 + 0x20);
      iVar4 = (int)(iVar4 + 0x20);
    } while (iVar4 != iVar1);
    param_1[1] = (int)(iVar3);

    return (int *)(param_1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f97a0; body size 166 bytes.
#line 1 "ENTRY_105f97a0"

int * __thiscall Recovered_Bulk::FUN_105f97a0(int *param_2)
{
  int *param_1 = (int *)this;
 try {
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (int)(0);
  param_1[1] = (int)(0);
  param_1[2] = (int)(0);
  iVar5 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar5 != iVar1) {
    iVar2 = (int)((iVar1 - iVar5) / 0xc);
    iVar4 = (int)(thunk_FUN_10604f20(iVar2));
    *param_1 = (int)(iVar4);
    param_1[1] = (int)(iVar4);
    param_1[2] = (int)(iVar4 + iVar2 * 0xc);

    iVar5 = (int)(thunk_FUN_105f4340(iVar5,iVar1,iVar4,param_1,uVar3));
    param_1[1] = (int)(iVar5);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 105f98d0; body size 286 bytes.
#line 1 "ENTRY_105f98d0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f98d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  iVar6 = (int)(*param_2);
  iVar1 = (int)(param_2[1]);
  if (iVar6 != iVar1) {
    uVar4 = (uint)((iVar1 - iVar6) / 0x18);
    if (0xaaaaaaa < uVar4) {
LAB_105f99e9:
                    
      thunk_FUN_1012a2a0(uVar2);
    }
    uVar4 = (uint)(uVar4 * 0x18);
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        pvVar5 = (void *)((void *)0x0);
      }
      else {
        pvVar5 = (void *)(operator_new(uVar4));
      }
    }
    else {
      if (uVar4 + 0x23 <= uVar4) goto LAB_105f99e9;
      pvVar3 = (void *)(operator_new(uVar4 + 0x23));
      if (pvVar3 == (void *)0x0) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar5 = (void *)((void *)((int)pvVar3 + 0x23U & 0xffffffe0));
      *(void **)((int)pvVar5 + -4) = pvVar3;
    }
    *param_1 = (undefined4)(pvVar5);
    param_1[1] = (undefined4)(pvVar5);
    param_1[2] = (undefined4)((void *)(uVar4 + (int)pvVar5));

    do {
      thunk_FUN_10deea50(iVar6);
      pvVar5 = (void *)((void *)((int)pvVar5 + 0x18));
      iVar6 = (int)(iVar6 + 0x18);
    } while (iVar6 != iVar1);
    param_1[1] = (undefined4)(pvVar5);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9a80; body size 346 bytes.
#line 1 "ENTRY_105f9a80"

undefined4 * __thiscall Recovered_Bulk::FUN_105f9a80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined1 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  puVar4 = (undefined1 *)((undefined1 *)*param_2);
  puVar1 = (undefined1 *)((undefined1 *)param_2[1]);
  if ((undefined1 *)(puVar4) == puVar1) {

    return (undefined4 *)(param_1);
  }
  uVar5 = (uint)(((int)puVar1 - (int)puVar4) / 0x1c);
  if (uVar5 < 0x924924a) {
    uVar5 = (uint)(uVar5 * 0x1c);
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        puVar6 = (undefined1 *)((undefined1 *)0x0);
      }
      else {
        puVar6 = (undefined1 *)(operator_new(uVar5));
      }
    }
    else {
      if (uVar5 + 0x23 <= uVar5) goto LAB_105f9bd5;
      pvVar3 = (void *)(operator_new(uVar5 + 0x23));
      if (pvVar3 == (void *)0x0) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      puVar6 = (undefined1 *)((undefined1 *)((int)pvVar3 + 0x23U & 0xffffffe0));
      *(void **)(puVar6 + -4) = pvVar3;
    }
    *param_1 = (undefined4)(puVar6);
    param_1[1] = (undefined4)(puVar6);
    param_1[2] = (undefined4)(puVar6 + uVar5);
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    do {
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      *puVar6 = (undefined1)(*puVar4);
      thunk_FUN_105f98d0(puVar4 + 4);
      *(unsigned char *)((char *)&local_8 + 0) = 2;
      thunk_FUN_105f9a80(puVar4 + 0x10);
      puVar6 = (undefined1 *)(puVar6 + 0x1c);
      puVar4 = (undefined1 *)(puVar4 + 0x1c);
    } while ((undefined1 *)(puVar4) != puVar1);
    param_1[1] = (undefined4)(puVar6);

    return (undefined4 *)(param_1);
  }
LAB_105f9bd5:
                    
  thunk_FUN_1012a2a0(uVar2);

 } catch (...) { }
}


// Reference entry 105f9c40; body size 104 bytes.
#line 1 "ENTRY_105f9c40"

undefined4 * __thiscall Recovered_Bulk::FUN_105f9c40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->op_ctor((SCStr *)(param_2 + 2));

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9cd0; body size 104 bytes.
#line 1 "ENTRY_105f9cd0"

undefined4 * __thiscall Recovered_Bulk::FUN_105f9cd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 2)))->op_ctor((SCStr *)(param_2 + 2));

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105f9e40; body size 525 bytes.
#line 1 "ENTRY_105f9e40"

undefined1 * __thiscall Recovered_Bulk::FUN_105f9e40(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
 try {
  uint *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (uint *)((uint *)(param_1 + 4));
  *param_1 = (undefined1)(*param_2);
  *puVar1 = (uint)(0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = (int)(*(int *)(param_2 + 8));
  iVar7 = (int)(*(int *)(param_2 + 4));
  if (iVar7 != iVar2) {
    uVar6 = (uint)((iVar2 - iVar7) / 0x18);
    if (0xaaaaaaa < uVar6) goto LAB_105fa048;
    uVar6 = (uint)(uVar6 * 0x18);
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        pvVar5 = (void *)((void *)0x0);
      }
      else {
        pvVar5 = (void *)(operator_new(uVar6));
      }
    }
    else {
      if (uVar6 + 0x23 <= uVar6) goto LAB_105fa048;
      pvVar4 = (void *)(operator_new(uVar6 + 0x23));
      if (pvVar4 == (void *)0x0) goto LAB_105f9fde;
      pvVar5 = (void *)((void *)((int)pvVar4 + 0x23U & 0xffffffe0));
      *(void **)((int)pvVar5 - 4) = pvVar4;
    }
    *puVar1 = (uint)((uint)pvVar5);
    *(void **)(param_1 + 8) = pvVar5;
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar5 + uVar6);
    uVar6 = (uint)(*puVar1);

    do {
      thunk_FUN_10deea50(iVar7);
      uVar6 = (uint)(uVar6 + 0x18);
      iVar7 = (int)(iVar7 + 0x18);
    } while (iVar7 != iVar2);
    *(uint *)(param_1 + 8) = uVar6;
  }
  puVar1 = (uint *)((uint *)(param_1 + 0x10));

  *puVar1 = (uint)(0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar2 = (int)(*(int *)(param_2 + 0x14));
  iVar7 = (int)(*(int *)(param_2 + 0x10));
  if (iVar7 != iVar2) {
    uVar6 = (uint)((iVar2 - iVar7) / 0x1c);
    if (0x9249249 < uVar6) {
LAB_105fa048:
                    
      thunk_FUN_1012a2a0(uVar3);
    }
    uVar6 = (uint)(uVar6 * 0x1c);
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        pvVar5 = (void *)((void *)0x0);
      }
      else {
        pvVar5 = (void *)(operator_new(uVar6));
      }
    }
    else {
      if (uVar6 + 0x23 <= uVar6) goto LAB_105fa048;
      pvVar4 = (void *)(operator_new(uVar6 + 0x23));
      if (pvVar4 == (void *)0x0) {
LAB_105f9fde:
                    
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar5 = (void *)((void *)((int)pvVar4 + 0x23U & 0xffffffe0));
      *(void **)((int)pvVar5 - 4) = pvVar4;
    }
    *puVar1 = (uint)((uint)pvVar5);
    *(void **)(param_1 + 0x14) = pvVar5;
    *(void **)(param_1 + 0x18) = (void *)((int)pvVar5 + uVar6);
    uVar3 = (uint)(*puVar1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
    do {
      thunk_FUN_105f9e40(iVar7);
      uVar3 = (uint)(uVar3 + 0x1c);
      iVar7 = (int)(iVar7 + 0x1c);
    } while (iVar7 != iVar2);
    *(uint *)(param_1 + 0x14) = uVar3;
  }

  return (undefined1 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa0e0; body size 125 bytes.
#line 1 "ENTRY_105fa0e0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa0e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  piVar1 = (int *)((int *)param_2[3]);
  param_1[3] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  param_1[4] = (undefined4)(param_2[4]);
  piVar1 = (int *)((int *)param_2[5]);

  param_1[5] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa180; body size 125 bytes.
#line 1 "ENTRY_105fa180"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa180(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  piVar1 = (int *)((int *)param_2[3]);
  param_1[3] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
  }
  param_1[4] = (undefined4)(param_2[4]);
  piVar1 = (int *)((int *)param_2[5]);

  param_1[5] = (undefined4)(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa220; body size 213 bytes.
#line 1 "ENTRY_105fa220"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa220(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0xfc));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_106e1380(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_106e3e70(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa330; body size 197 bytes.
#line 1 "ENTRY_105fa330"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa330(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigAccountRequiredSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwizType);
  DAT_121a212c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa430; body size 213 bytes.
#line 1 "ENTRY_105fa430"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa430(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_107626d0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10762e20(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa540; body size 197 bytes.
#line 1 "ENTRY_105fa540"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa540(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigApConnectSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwizType);
  DAT_121a216c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa640; body size 213 bytes.
#line 1 "ENTRY_105fa640"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10767860(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10767d40(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa750; body size 197 bytes.
#line 1 "ENTRY_105fa750"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa750(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigApInstructionsSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwizType);
  DAT_121a2168 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa850; body size 213 bytes.
#line 1 "ENTRY_105fa850"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa850(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x108));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10758340(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_107593f0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fa960; body size 197 bytes.
#line 1 "ENTRY_105fa960"

undefined4 * __thiscall Recovered_Bulk::FUN_105fa960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigAppVersionCheckSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwizType);
  DAT_121a215c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105faab0; body size 194 bytes.
#line 1 "ENTRY_105faab0"

undefined4 * __thiscall Recovered_Bulk::FUN_105faab0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigAskNetworkModifiedPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPageType);
  DAT_121a2148 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fac00; body size 194 bytes.
#line 1 "ENTRY_105fac00"

undefined4 * __thiscall Recovered_Bulk::FUN_105fac00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigAskUnplugEthernetPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPageType);
  DAT_121a2180 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fad00; body size 213 bytes.
#line 1 "ENTRY_105fad00"

undefined4 * __thiscall Recovered_Bulk::FUN_105fad00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x10c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_1077bcd0(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_1077bf70(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fae10; body size 197 bytes.
#line 1 "ENTRY_105fae10"

undefined4 * __thiscall Recovered_Bulk::FUN_105fae10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigBleConnectSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwizType);
  DAT_121a2170 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105faf10; body size 213 bytes.
#line 1 "ENTRY_105faf10"

undefined4 * __thiscall Recovered_Bulk::FUN_105faf10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10811c10(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10812740(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb020; body size 197 bytes.
#line 1 "ENTRY_105fb020"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb020(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigConnectRecoverySubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwizType);
  DAT_121a218c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb120; body size 213 bytes.
#line 1 "ENTRY_105fb120"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb120(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10818140(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10819ab0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb230; body size 197 bytes.
#line 1 "ENTRY_105fb230"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb230(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigDevicePermissionsSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwizType);
  DAT_121a2158 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb330; body size 213 bytes.
#line 1 "ENTRY_105fb330"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb330(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10873290(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10874b00(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb440; body size 197 bytes.
#line 1 "ENTRY_105fb440"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigHouseholdSelectionSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwizType);
  DAT_121a2190 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb590; body size 194 bytes.
#line 1 "ENTRY_105fb590"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigInformWiredConnectionPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPageType);
  DAT_121a217c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb690; body size 173 bytes.
#line 1 "ENTRY_105fb690"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10eb64f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
  param_1[0x38] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);

  *(undefined2 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = (undefined4)(0);
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10610c60(param_1 + 0x3c);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb770; body size 194 bytes.
#line 1 "ENTRY_105fb770"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigIntroPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPageType);
  DAT_121a2128 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb870; body size 213 bytes.
#line 1 "ENTRY_105fb870"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x124));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10905580(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10907260(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fb980; body size 197 bytes.
#line 1 "ENTRY_105fb980"

undefined4 * __thiscall Recovered_Bulk::FUN_105fb980(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigNetworkCredentialPropagationSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwizType);
  DAT_121a2188 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fba80; body size 213 bytes.
#line 1 "ENTRY_105fba80"

undefined4 * __thiscall Recovered_Bulk::FUN_105fba80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_108fb850(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_108fc3e0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbb90; body size 197 bytes.
#line 1 "ENTRY_105fbb90"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbb90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigNetworkCredentialsSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwizType);
  DAT_121a2184 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbce0; body size 194 bytes.
#line 1 "ENTRY_105fbce0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbce0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigPlayerOutOfDatePage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePageType);
  DAT_121a214c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbde0; body size 213 bytes.
#line 1 "ENTRY_105fbde0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbde0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10948f60(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10949d90(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbef0; body size 197 bytes.
#line 1 "ENTRY_105fbef0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigPlayerSelectionSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwizType);
  DAT_121a2164 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fbff0; body size 213 bytes.
#line 1 "ENTRY_105fbff0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fbff0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x120));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109a6790(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109a85f0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc100; body size 197 bytes.
#line 1 "ENTRY_105fc100"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSecureAuthenticationSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwizType);
  DAT_121a2174 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc200; body size 130 bytes.
#line 1 "ENTRY_105fc200"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc200(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10eb64f0(param_2);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10610c60(param_1 + 0x38);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc2b0; body size 194 bytes.
#line 1 "ENTRY_105fc2b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc2b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardBleFoundPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPageType);
  DAT_121a2140 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc3b0; body size 130 bytes.
#line 1 "ENTRY_105fc3b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc3b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10eb64f0(param_2);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10610c60(param_1 + 0x38);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc460; body size 194 bytes.
#line 1 "ENTRY_105fc460"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc460(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardJoinNearbySystemPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPageType);
  DAT_121a213c = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc5b0; body size 194 bytes.
#line 1 "ENTRY_105fc5b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc5b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardNoNetworkPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPageType);
  DAT_121a2130 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc700; body size 194 bytes.
#line 1 "ENTRY_105fc700"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc700(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardNothingFoundPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPageType);
  DAT_121a2134 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc800; body size 130 bytes.
#line 1 "ENTRY_105fc800"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc800(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10eb64f0(param_2);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
  thunk_FUN_10eb41b0(uVar1);
  thunk_FUN_10610c60(param_1 + 0x38);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fc8b0; body size 194 bytes.
#line 1 "ENTRY_105fc8b0"

undefined4 * __thiscall Recovered_Bulk::FUN_105fc8b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSetupCardUnrecognizedNetworkPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPageType);
  DAT_121a2138 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fca00; body size 194 bytes.
#line 1 "ENTRY_105fca00"

undefined4 * __thiscall Recovered_Bulk::FUN_105fca00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigStartOpenApPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPageType);
  DAT_121a2178 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fcb50; body size 194 bytes.
#line 1 "ENTRY_105fcb50"

undefined4 * __thiscall Recovered_Bulk::FUN_105fcb50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSuccessPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPageType);
  DAT_121a2144 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fcc50; body size 213 bytes.
#line 1 "ENTRY_105fcc50"

undefined4 * __thiscall Recovered_Bulk::FUN_105fcc50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_109edf50(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_109eeaf0(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fcd60; body size 197 bytes.
#line 1 "ENTRY_105fcd60"

undefined4 * __thiscall Recovered_Bulk::FUN_105fcd60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigSystemIdSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwizType);
  DAT_121a2154 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fce60; body size 431 bytes.
#line 1 "ENTRY_105fce60"

undefined4 * __thiscall Recovered_Bulk::FUN_105fce60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  iVar2 = (int)(thunk_FUN_10eae150(uVar1));
  if (iVar2 == 0) {
    pvVar4 = (void *)(operator_new(0x11c));

    if (pvVar4 == (void *)0x0) {
      uVar3 = (undefined4)(0);
    }
    else {
      uVar3 = (undefined4)(param_2);
      uVar5 = (undefined4)(thunk_FUN_10916c20(param_2));
      uVar3 = (undefined4)(thunk_FUN_10eae0a0(uVar5,uVar3));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
      uVar3 = (undefined4)(thunk_FUN_10919b50(uVar3));
    }

  }
  else {
    uVar3 = (undefined4)(thunk_FUN_10eae150(uVar1));
  }
  thunk_FUN_10ebc060(param_2,uVar3);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwiz);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwiz);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwiz);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwiz);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xe8);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf3630(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0xf4);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10cf5250(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x100);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead100(iVar2);
  iVar2 = (int)(thunk_FUN_10eb41b0());
  if (iVar2 == 0) {
    iVar2 = (int)(0);
  }
  else {
    iVar2 = (int)(iVar2 + 0x10c);
  }
  thunk_FUN_10ebc1d0(iVar2);
  thunk_FUN_10ead150(iVar2);
  thunk_FUN_105a26b0();
  iVar2 = (int)(thunk_FUN_10df2df0());
  if (iVar2 == DAT_121a216c) {
    uVar3 = (undefined4)(1);
    thunk_FUN_10ebc1d0(1);
    thunk_FUN_1092b700(uVar3);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fd080; body size 197 bytes.
#line 1 "ENTRY_105fd080"

undefined4 * __thiscall Recovered_Bulk::FUN_105fd080(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigTroubleshootSubwiz");

  thunk_FUN_106de0c0(&local_14,param_2);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(6)));
  ((SCStr *)(this_))->endsWith("Subwiz");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwizType);
  DAT_121a2160 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fd180; body size 244 bytes.
#line 1 "ENTRY_105fd180"

undefined4 * __thiscall Recovered_Bulk::FUN_105fd180(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  thunk_FUN_106da030(param_2);

  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x23);
  }
  thunk_FUN_10cf2f30(puVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x23);
  }
  thunk_FUN_10cf41d0(puVar1);
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  puVar1 = (undefined4 *)((undefined4 *)0x0);
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x3a);
  }
  thunk_FUN_10eaafe0(puVar1);
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(3)));
  puVar1 = (undefined4 *)((undefined4 *)0x0);
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
  }
  thunk_FUN_10eab1c0(puVar1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
  param_1[0x46] = (undefined4)(0);
  param_1[0x47] = (undefined4)(0);
  *(undefined1 *)(param_1 + 0x48) = 0;

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fd2c0; body size 4730 bytes.
#line 1 "ENTRY_105fd2c0"

undefined4 * __fastcall FUN_105fd2c0(undefined4 *param_1)

{
 try {
  bool bVar1;
  undefined4 *puVar2;
  SCStr *pSVar3;
  SCStr local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_18))->int_allocRep("SCWifiConfigWizard");

  thunk_FUN_106de2c0(&local_18);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_18))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizardType);

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  DAT_121a2194 = (int)(param_1);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigIntroPage");
    *(unsigned char *)((char *)&local_8 + 0) = 5;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 8;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 7;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(9)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 10;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPageType);
    DAT_121a2128 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xd;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigAccountRequiredSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xe;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x11)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x14)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x15;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwizType);
    DAT_121a212c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x16;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardNoNetworkPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x17;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x1a;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x19;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x1b)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x1c;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPageType);
    DAT_121a2130 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x1f;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardNothingFoundPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x20;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x23;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x22;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x24)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x25;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPageType);
    DAT_121a2134 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x28;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardUnrecognizedNetworkPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x29;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x2c;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x2b;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x2d)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x2e;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPageType);
    DAT_121a2138 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x31;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardJoinNearbySystemPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x32;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x35;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x34;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x36)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x37;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPageType);
    DAT_121a213c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x3a;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSetupCardBleFoundPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x3b;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x3e;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x3d;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x3f)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x40;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPageType);
    DAT_121a2140 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x43;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSuccessPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x44;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x47;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x46;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x48)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x49;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPageType);
    DAT_121a2144 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x4c;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigAskNetworkModifiedPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x4d;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x50;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x4f;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x51)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x52;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPageType);
    DAT_121a2148 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x55;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigPlayerOutOfDatePage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x56;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x59;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x58;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x5a)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0x5b;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePageType);
    DAT_121a214c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x5e;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigWrongHHIDPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0x5f;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0x62;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0x61;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(99)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 100;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPageType);
    DAT_121a2150 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x67;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSystemIdSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x68;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x6b)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x6e)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x6f;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwizType);
    DAT_121a2154 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x70;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigDevicePermissionsSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x71;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x74)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x77)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x78;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwizType);
    DAT_121a2158 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x79;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigAppVersionCheckSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x7a;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x7d)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x80)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x81;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwizType);
    DAT_121a215c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x82;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigTroubleshootSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x83;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x86)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x89)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x8a;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigTroubleshootSubwizType);
    DAT_121a2160 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x8b;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigPlayerSelectionSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x8c;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x8f)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x92)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x93;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwizType);
    DAT_121a2164 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x94;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigApInstructionsSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x95;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x98)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0x9b)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x9c;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwizType);
    DAT_121a2168 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0x9d;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigApConnectSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0x9e;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xa1)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xa4)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xa5;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwizType);
    DAT_121a216c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xa6;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigBleConnectSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xa7;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xaa)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xad)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xae;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwizType);
    DAT_121a2170 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xaf;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigSecureAuthenticationSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb0;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb3)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xb6)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb7;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwizType);
    DAT_121a2174 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xb8;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigStartOpenApPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0xb9;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0xbc;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xbb;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xbd)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0xbe;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPageType);
    DAT_121a2178 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xc1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigInformWiredConnectionPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0xc2;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0xc5;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xc4;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xc6)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 199;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPageType);
    DAT_121a217c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xca;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigAskUnplugEthernetPage");
    *(unsigned char *)((char *)&local_8 + 0) = 0xcb;
    thunk_FUN_106de0c0(&local_1c,param_1);
    *(unsigned char *)((char *)&local_8 + 0) = 0xce;
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *(unsigned char *)((char *)&local_8 + 0) = 0xcd;
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xcf)));

    bVar1 = (bool)(((SCStr *)(pSVar3))->endsWith("Page"));
    *(unsigned char *)((char *)&local_8 + 0) = 0xd0;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    if (bVar1) {
      *(unsigned short *)((char *)&local_8 + 1) = 0;
    }
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPageType);
    DAT_121a2180 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xd3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigNetworkCredentialsSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xd4;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xd7)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xda)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xdb;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwizType);
    DAT_121a2184 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xdc;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigNetworkCredentialPropagationSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xdd;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe0)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe3)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xe4;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwizType);
    DAT_121a2188 = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xe5;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigConnectRecoverySubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xe6;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xe9)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xec)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xed;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwizType);
    DAT_121a218c = (int)(puVar2);
  }
  *(unsigned char *)((char *)&local_8 + 0) = 2;
  thunk_FUN_106dfb80(puVar2);
  puVar2 = (undefined4 *)(operator_new(0xc));
  *(unsigned char *)((char *)&local_8 + 0) = 0xee;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    ((SCStr *)((SCStr *)&local_1c))->int_allocRep("SCWifiConfigHouseholdSelectionSubwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xef;
    thunk_FUN_106de0c0(&local_1c,param_1);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf2)));
    ((SCStr *)((SCStr *)&local_1c))->int_release();

    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

    pSVar3 = (SCStr *)((SCStr *)thunk_FUN_106dfa00(local_20));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(0xf5)));

    ((SCStr *)(pSVar3))->endsWith("Subwiz");
    *(unsigned char *)((char *)&local_8 + 0) = 0xf6;
    *(unsigned short *)((char *)&local_8 + 1) = 0;
    ((SCStr *)(local_20))->int_release();
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwizType);
    DAT_121a2190 = (int)(puVar2);
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_106dfb80(puVar2);
  thunk_FUN_106dfcc0(&DAT_121a12a8,&DAT_121a12b0);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fea30; body size 194 bytes.
#line 1 "ENTRY_105fea30"

undefined4 * __thiscall Recovered_Bulk::FUN_105fea30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  ((SCStr *)((SCStr *)&local_14))->int_allocRep("SCWifiConfigWrongHHIDPage");

  thunk_FUN_106de0c0(&local_14,param_2);
  *(unsigned char *)((char *)&local_8 + 0) = 3;
  ((SCStr *)((SCStr *)&local_14))->int_release();

  *(unsigned char *)((char *)&local_8 + 0) = 2;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  this_ = (SCStr *)((SCStr *)thunk_FUN_106dfa00(&param_2));
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(4)));
  ((SCStr *)(this_))->endsWith("Page");

  ((SCStr *)((SCStr *)&param_2))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPageType);
  DAT_121a2150 = (int)(param_1);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 105fec50; body size 110 bytes.
#line 1 "ENTRY_105fec50"

void __fastcall FUN_105fec50(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105fece0; body size 110 bytes.
#line 1 "ENTRY_105fece0"

void __fastcall FUN_105fece0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105fed70; body size 110 bytes.
#line 1 "ENTRY_105fed70"

void __fastcall FUN_105fed70(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105fee00; body size 110 bytes.
#line 1 "ENTRY_105fee00"

void __fastcall FUN_105fee00(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105feec0; body size 119 bytes.
#line 1 "ENTRY_105feec0"

void __fastcall FUN_105feec0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105fef60; body size 119 bytes.
#line 1 "ENTRY_105fef60"

void __fastcall FUN_105fef60(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105ff3e0; body size 68 bytes.
#line 1 "ENTRY_105ff3e0"

void __fastcall FUN_105ff3e0(int *param_1)

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


// Reference entry 105ff930; body size 135 bytes.
#line 1 "ENTRY_105ff930"

void __fastcall FUN_105ff930(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x30));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x28));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();

  return;

 } catch (...) { }
}


// Reference entry 105ffaa0; body size 110 bytes.
#line 1 "ENTRY_105ffaa0"

void __fastcall FUN_105ffaa0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105ffba0; body size 110 bytes.
#line 1 "ENTRY_105ffba0"

void __fastcall FUN_105ffba0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105ffc30; body size 110 bytes.
#line 1 "ENTRY_105ffc30"

void __fastcall FUN_105ffc30(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105ffe50; body size 110 bytes.
#line 1 "ENTRY_105ffe50"

void __fastcall FUN_105ffe50(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 105ffee0; body size 119 bytes.
#line 1 "ENTRY_105ffee0"

void __fastcall FUN_105ffee0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 105fff80; body size 119 bytes.
#line 1 "ENTRY_105fff80"

void __fastcall FUN_105fff80(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x18));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x10));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10600020; body size 110 bytes.
#line 1 "ENTRY_10600020"

void __fastcall FUN_10600020(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 106000b0; body size 110 bytes.
#line 1 "ENTRY_106000b0"

void __fastcall FUN_106000b0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 106001b0; body size 110 bytes.
#line 1 "ENTRY_106001b0"

void __fastcall FUN_106001b0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 106002b0; body size 119 bytes.
#line 1 "ENTRY_106002b0"

void __fastcall FUN_106002b0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x14));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xc));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10600350; body size 110 bytes.
#line 1 "ENTRY_10600350"

void __fastcall FUN_10600350(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10600ac0; body size 123 bytes.
#line 1 "ENTRY_10600ac0"

void __fastcall FUN_10600ac0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10600b80; body size 123 bytes.
#line 1 "ENTRY_10600b80"

void __fastcall FUN_10600b80(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10600ce0; body size 123 bytes.
#line 1 "ENTRY_10600ce0"

void __fastcall FUN_10600ce0(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 10600ee0; body size 258 bytes.
#line 1 "ENTRY_10600ee0"

void __fastcall FUN_10600ee0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x118)))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 0x110));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x104));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();

  return;

 } catch (...) { }
}


// Reference entry 106033a0; body size 147 bytes.
#line 1 "ENTRY_106033a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106033a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 106034a0; body size 147 bytes.
#line 1 "ENTRY_106034a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106034a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 106036e0; body size 147 bytes.
#line 1 "ENTRY_106036e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106036e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x38)))->int_release();
  param_1[0x38] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe4);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10603a60; body size 282 bytes.
#line 1 "ENTRY_10603a60"

int __thiscall Recovered_Bulk::FUN_10603a60(byte param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)(param_1 + 0x118)))->int_release();
  *(undefined4 *)(param_1 + 0x118) = 0;
  piVar1 = (int *)(*(int **)(param_1 + 0x110));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x104));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xf8));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(*(int **)(param_1 + 0xec));

  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_106da680();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x124);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 10604230; body size 131 bytes.
#line 1 "ENTRY_10604230"

void __thiscall Recovered_Bulk::FUN_10604230(int param_2,int param_3,int param_4)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105f2b00(*param_1,param_1[1],param_1);
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


// Reference entry 10604820; body size 117 bytes.
#line 1 "ENTRY_10604820"

void __fastcall FUN_10604820(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_105f2b00(*param_1,param_1[1],param_1);
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


// Reference entry 10604a80; body size 164 bytes.
#line 1 "ENTRY_10604a80"

undefined4 * __thiscall Recovered_Bulk::FUN_10604a80(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  int *piVar1;
  void **ppvVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;

  uVar3 = (uint)(DAT_12126b84);

  ppvVar2 = (void **)(&local_10);

  for (; ExceptionList = (void *)(ppvVar2, param_2 != (undefined4 *)(param_3)); param_2 = param_2 + 3) {
    *param_4 = (undefined4)(*param_2);
    piVar1 = (int *)((int *)param_2[1]);
    param_4[1] = (undefined4)(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(uVar3);
    }
    *(unsigned char *)((char *)&local_8 + 0) = 1;
    ((SCStr *)((SCStr *)(param_4 + 2)))->op_ctor((SCStr *)(param_2 + 2));
    param_4 = (undefined4 *)(param_4 + 3);
    local_8 = (int)((uint)*(unsigned short *)((char *)&local_8 + 1) << 8);

  }
  thunk_FUN_105f2b00(param_4,param_4,param_1);

  return (undefined4 *)(param_4);

 } catch (...) { }
}


// Reference entry 10604d60; body size 87 bytes.
#line 1 "ENTRY_10604d60"

void * FUN_10604d60(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x4ec4ec5) {
    param_1 = (uint)(param_1 * 0x34);
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


// Reference entry 10604dd0; body size 87 bytes.
#line 1 "ENTRY_10604dd0"

void * FUN_10604dd0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
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


// Reference entry 10604e40; body size 87 bytes.
#line 1 "ENTRY_10604e40"

void * FUN_10604e40(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
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


// Reference entry 10604eb0; body size 87 bytes.
#line 1 "ENTRY_10604eb0"

void * FUN_10604eb0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x8000000) {
    param_1 = (uint)(param_1 * 0x20);
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


// Reference entry 10604f20; body size 90 bytes.
#line 1 "ENTRY_10604f20"

void * FUN_10604f20(uint param_1)

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


// Reference entry 10604fa0; body size 97 bytes.
#line 1 "ENTRY_10604fa0"

void * FUN_10604fa0(uint param_1)

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


// Reference entry 106051a0; body size 240 bytes.
#line 1 "ENTRY_106051a0"

undefined4 * __stdcall FUN_106051a0(undefined4 *param_1)

{
 try {
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_10cf34e0(&local_18);

  piVar2 = (int *)((int *)thunk_FUN_10c97610(&local_14));
  piVar4 = (int *)((int *)*piVar2);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar2 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    piVar2 = (int *)((int *)(**(code **)(*piVar4 + 0xc))(uVar1));
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  pvVar3 = (void *)(operator_new(0x110));
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)thunk_FUN_10ee0ce0(piVar4,2));
  }
  local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }

  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 106052d0; body size 2155 bytes.
#line 1 "ENTRY_106052d0"

undefined4 __thiscall Recovered_Bulk::FUN_106052d0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  SCStr *this_;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined **local_ec [8];
  SCStr local_cc [8];
  undefined **local_c4 [8];
  undefined4 local_a4 [2];
  undefined4 local_9c [2];
  undefined4 local_94 [2];
  undefined4 local_8c;
  int *local_88;
  undefined4 local_84;
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  SCStr local_74 [8];
  undefined **local_6c;
  undefined4 local_68;
  int *piStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 local_4c [2];
  undefined4 local_44 [2];
  undefined4 local_3c [2];
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 local_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  this_ = (SCStr *)(local_74);


  uVar4 = (uint)(DAT_12126b84 ^ (uint)this_);

  piVar5 = (int *)((int *)thunk_FUN_10cf34e0(&local_8));
  iVar1 = (int)(*piVar5);

  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(uVar4);
  }

  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x11c) == 1) || (*(int *)(param_1 + 0x11c) == 2)) {
      local_8 = (int *)((int *)thunk_FUN_10c5f450(this_,0x2099,&DAT_11882ff0));

      uVar6 = (undefined4)(thunk_FUN_10c5f450(local_3c,0x2bed,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x11;
      uVar7 = (undefined4)(thunk_FUN_10c5f450(local_44,0x2beb,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x12;
      uVar8 = (undefined4)(thunk_FUN_10c5f450(local_4c,0x2be9,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x13;
      thunk_FUN_10ec1250();
      uVar11 = (undefined4)(0);
      *(unsigned char *)((char *)&local_78 + 0) = 0x14;
      piVar5 = (int *)(local_8);
      thunk_FUN_10eceeb0(uVar8);
      thunk_FUN_10ecbaa0(uVar7);
      thunk_FUN_10ecbc60(uVar6);
      thunk_FUN_10ecb760(piVar5);
      uVar6 = (undefined4)(thunk_FUN_10eca460(uVar11));
      thunk_FUN_105f6290(uVar6);
      local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

      piStack_20 = (int *)((int *)0x0);
      piStack_1c = (int *)((int *)0x0);
      iStack_18 = (int)(0);
      local_14 = (undefined4 *)((undefined4 *)0x0);
      local_10 = (undefined4 *)((undefined4 *)0x0);

      *(unsigned char *)((char *)&local_78 + 0) = 0x16;
      uVar6 = (undefined4)(thunk_FUN_106050a0(local_c4));
      thunk_FUN_105f60e0(uVar6);
      puVar3 = (undefined4 *)(local_10);
      *(unsigned char *)((char *)&local_78 + 0) = 0x15;
      puVar9 = (undefined4 *)(local_14);
      if (local_14 != (undefined4 *)0x0) {
        for (; (undefined4 *)(puVar9) != puVar3; puVar9 = puVar9 + 8) {
          (**(code **)*puVar9)(0);
        }
        uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
        puVar9 = (undefined4 *)(local_14);
        if (0xfff < uVar4) {
          puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_10605a65;
        }
        thunk_FUN_1148a50e(puVar9,uVar4);
        local_14 = (undefined4 *)((undefined4 *)0x0);
        local_10 = (undefined4 *)((undefined4 *)0x0);

      }
      piVar5 = (int *)(piStack_1c);
      if (piStack_20 != (int *)0x0) {
        if (piStack_20 != (int *)(piStack_1c)) {
          piVar10 = (int *)(piStack_20 + 1);
          do {
            *(unsigned char *)((char *)&local_78 + 0) = 0x17;
            ((SCStr *)((SCStr *)(piVar10 + 1)))->int_release();
            piVar10[1] = (int)(0);
            piVar2 = (int *)((int *)*piVar10);
            *(unsigned char *)((char *)&local_78 + 0) = 0x18;
            if (piVar2 != (int *)0x0) {
              piVar10[-1] = (int)(0);
              *piVar10 = (int)(0);
              (**(code **)(*piVar2 + 8))();
            }
            *(unsigned char *)((char *)&local_78 + 0) = 0x15;
            piVar2 = (int *)(piVar10 + 2);
            piVar10 = (int *)(piVar10 + 3);
          } while (piVar2 != (int *)(piVar5));
        }
        uVar4 = (uint)(((iStack_18 - (int)piStack_20) / 0xc) * 0xc);
        piVar5 = (int *)(piStack_20);
        if (0xfff < uVar4) {
          piVar5 = (int *)((int *)piStack_20[-1]);
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (uint)((int)piStack_20 + (-4 - (int)piVar5))) {
LAB_10605a65:
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(piVar5,uVar4);
        piStack_20 = (int *)((int *)0x0);
        piStack_1c = (int *)((int *)0x0);
        iStack_18 = (int)(0);
      }
      local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
      thunk_FUN_10604790();
      thunk_FUN_10604820();
      local_c4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
      *(unsigned char *)((char *)&local_78 + 0) = 0x19;
      ((SCStr *)((SCStr *)&local_2c))->int_release();
      piVar5 = (int *)(local_30);

      *(unsigned char *)((char *)&local_78 + 0) = 0x1a;
      if (local_30 != (int *)0x0) {

        local_30 = (int *)((int *)0x0);
        (**(code **)(*piVar5 + 8))();
      }
      *(unsigned char *)((char *)&local_78 + 0) = 0x1b;
      ((SCStr *)((SCStr *)local_4c))->int_release();
      local_4c[0] = (undefined4)(0);
      *(unsigned char *)((char *)&local_78 + 0) = 0x1c;
      ((SCStr *)((SCStr *)local_44))->int_release();
      local_44[0] = (undefined4)(0);
      local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x1d)));
      ((SCStr *)((SCStr *)local_3c))->int_release();
      local_3c[0] = (undefined4)(0);

    }
    else {
      local_8 = (int *)((int *)thunk_FUN_10c5f450(local_cc,0x2099,&DAT_11882ff0));

      uVar6 = (undefined4)(thunk_FUN_10c5f450(local_a4,0x2bed,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x20;
      uVar7 = (undefined4)(thunk_FUN_10c5f450(local_9c,0x2bea,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x21;
      uVar8 = (undefined4)(thunk_FUN_10c5f450(local_94,0x2be9,&DAT_11882ff0));
      *(unsigned char *)((char *)&local_78 + 0) = 0x22;
      thunk_FUN_10ec1250();
      uVar11 = (undefined4)(0);
      *(unsigned char *)((char *)&local_78 + 0) = 0x23;
      piVar5 = (int *)(local_8);
      thunk_FUN_10eceeb0(uVar8);
      thunk_FUN_10ecbaa0(uVar7);
      thunk_FUN_10ecbc60(uVar6);
      thunk_FUN_10ecb760(piVar5);
      uVar6 = (undefined4)(thunk_FUN_10eca460(uVar11));
      thunk_FUN_105f6290(uVar6);
      local_6c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

      piStack_64 = (int *)((int *)0x0);
      piStack_60 = (int *)((int *)0x0);
      iStack_5c = (int)(0);
      local_58 = (undefined4 *)((undefined4 *)0x0);
      local_54 = (undefined4 *)((undefined4 *)0x0);

      *(unsigned char *)((char *)&local_78 + 0) = 0x25;
      uVar6 = (undefined4)(thunk_FUN_106050a0(local_ec));
      thunk_FUN_105f60e0(uVar6);
      puVar3 = (undefined4 *)(local_54);
      *(unsigned char *)((char *)&local_78 + 0) = 0x24;
      puVar9 = (undefined4 *)(local_58);
      if (local_58 != (undefined4 *)0x0) {
        for (; (undefined4 *)(puVar9) != puVar3; puVar9 = puVar9 + 8) {
          (**(code **)*puVar9)(0);
        }
        uVar4 = (uint)(local_50 - (int)local_58 & 0xffffffe0);
        puVar9 = (undefined4 *)(local_58);
        if (0xfff < uVar4) {
          puVar9 = (undefined4 *)((undefined4 *)local_58[-1]);
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (uint)((int)local_58 + (-4 - (int)puVar9))) goto LAB_106057c5;
        }
        thunk_FUN_1148a50e(puVar9,uVar4);
        local_58 = (undefined4 *)((undefined4 *)0x0);
        local_54 = (undefined4 *)((undefined4 *)0x0);

      }
      piVar5 = (int *)(piStack_60);
      if (piStack_64 != (int *)0x0) {
        if (piStack_64 != (int *)(piStack_60)) {
          piVar10 = (int *)(piStack_64 + 1);
          do {
            *(unsigned char *)((char *)&local_78 + 0) = 0x26;
            ((SCStr *)((SCStr *)(piVar10 + 1)))->int_release();
            piVar10[1] = (int)(0);
            piVar2 = (int *)((int *)*piVar10);
            *(unsigned char *)((char *)&local_78 + 0) = 0x27;
            if (piVar2 != (int *)0x0) {
              piVar10[-1] = (int)(0);
              *piVar10 = (int)(0);
              (**(code **)(*piVar2 + 8))();
            }
            *(unsigned char *)((char *)&local_78 + 0) = 0x24;
            piVar2 = (int *)(piVar10 + 2);
            piVar10 = (int *)(piVar10 + 3);
          } while (piVar2 != (int *)(piVar5));
        }
        uVar4 = (uint)(((iStack_5c - (int)piStack_64) / 0xc) * 0xc);
        piVar5 = (int *)(piStack_64);
        if (0xfff < uVar4) {
          piVar5 = (int *)((int *)piStack_64[-1]);
          uVar4 = (uint)(uVar4 + 0x23);
          if (0x1f < (uint)((int)piStack_64 + (-4 - (int)piVar5))) {
LAB_106057c5:
                    
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1148a50e(piVar5,uVar4);
        piStack_64 = (int *)((int *)0x0);
        piStack_60 = (int *)((int *)0x0);
        iStack_5c = (int)(0);
      }
      local_6c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
      thunk_FUN_10604790();
      thunk_FUN_10604820();
      local_ec[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
      *(unsigned char *)((char *)&local_78 + 0) = 0x28;
      ((SCStr *)((SCStr *)&local_84))->int_release();
      piVar5 = (int *)(local_88);

      *(unsigned char *)((char *)&local_78 + 0) = 0x29;
      if (local_88 != (int *)0x0) {

        local_88 = (int *)((int *)0x0);
        (**(code **)(*piVar5 + 8))();
      }
      *(unsigned char *)((char *)&local_78 + 0) = 0x2a;
      ((SCStr *)((SCStr *)local_94))->int_release();
      local_94[0] = (undefined4)(0);
      *(unsigned char *)((char *)&local_78 + 0) = 0x2b;
      ((SCStr *)((SCStr *)local_9c))->int_release();
      local_9c[0] = (undefined4)(0);
      local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x2c)));
      ((SCStr *)((SCStr *)local_a4))->int_release();
      local_a4[0] = (undefined4)(0);

      this_ = (SCStr *)(local_cc);
    }
  }
  else {
    local_8 = (int *)((int *)thunk_FUN_10c5f450(this_,0x2099,&DAT_11882ff0));

    uVar6 = (undefined4)(thunk_FUN_10c5f450(local_4c,0x2bed,&DAT_11882ff0));
    *(unsigned char *)((char *)&local_78 + 0) = 2;
    uVar7 = (undefined4)(thunk_FUN_10c5f450(local_44,0x2bec,&DAT_11882ff0));
    *(unsigned char *)((char *)&local_78 + 0) = 3;
    uVar8 = (undefined4)(thunk_FUN_10c5f450(local_3c,0x2be9,&DAT_11882ff0));
    *(unsigned char *)((char *)&local_78 + 0) = 4;
    thunk_FUN_10ec1250();
    uVar11 = (undefined4)(0);
    *(unsigned char *)((char *)&local_78 + 0) = 5;
    piVar5 = (int *)(local_8);
    thunk_FUN_10eceeb0(uVar8);
    thunk_FUN_10ecbaa0(uVar7);
    thunk_FUN_10ecbc60(uVar6);
    thunk_FUN_10ecb760(piVar5);
    uVar6 = (undefined4)(thunk_FUN_10eca460(uVar11));
    thunk_FUN_105f6290(uVar6);
    local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

    piStack_20 = (int *)((int *)0x0);
    piStack_1c = (int *)((int *)0x0);
    iStack_18 = (int)(0);
    local_14 = (undefined4 *)((undefined4 *)0x0);
    local_10 = (undefined4 *)((undefined4 *)0x0);

    *(unsigned char *)((char *)&local_78 + 0) = 7;
    uVar6 = (undefined4)(thunk_FUN_106050a0(local_c4));
    thunk_FUN_105f60e0(uVar6);
    puVar3 = (undefined4 *)(local_10);
    *(unsigned char *)((char *)&local_78 + 0) = 6;
    puVar9 = (undefined4 *)(local_14);
    if (local_14 != (undefined4 *)0x0) {
      for (; (undefined4 *)(puVar9) != puVar3; puVar9 = puVar9 + 8) {
        (**(code **)*puVar9)(0);
      }
      uVar4 = (uint)(local_c - (int)local_14 & 0xffffffe0);
      puVar9 = (undefined4 *)(local_14);
      if (0xfff < uVar4) {
        puVar9 = (undefined4 *)((undefined4 *)local_14[-1]);
        uVar4 = (uint)(uVar4 + 0x23);
        if (0x1f < (uint)((int)local_14 + (-4 - (int)puVar9))) goto LAB_10605515;
      }
      thunk_FUN_1148a50e(puVar9,uVar4);
      local_14 = (undefined4 *)((undefined4 *)0x0);
      local_10 = (undefined4 *)((undefined4 *)0x0);

    }
    piVar5 = (int *)(piStack_1c);
    if (piStack_20 != (int *)0x0) {
      if (piStack_20 != (int *)(piStack_1c)) {
        piVar10 = (int *)(piStack_20 + 1);
        do {
          *(unsigned char *)((char *)&local_78 + 0) = 8;
          ((SCStr *)((SCStr *)(piVar10 + 1)))->int_release();
          piVar10[1] = (int)(0);
          piVar2 = (int *)((int *)*piVar10);
          *(unsigned char *)((char *)&local_78 + 0) = 9;
          if (piVar2 != (int *)0x0) {
            piVar10[-1] = (int)(0);
            *piVar10 = (int)(0);
            (**(code **)(*piVar2 + 8))();
          }
          *(unsigned char *)((char *)&local_78 + 0) = 6;
          piVar2 = (int *)(piVar10 + 2);
          piVar10 = (int *)(piVar10 + 3);
        } while (piVar2 != (int *)(piVar5));
      }
      uVar4 = (uint)(((iStack_18 - (int)piStack_20) / 0xc) * 0xc);
      piVar5 = (int *)(piStack_20);
      if (0xfff < uVar4) {
        piVar5 = (int *)((int *)piStack_20[-1]);
        uVar4 = (uint)(uVar4 + 0x23);
        if (0x1f < (uint)((int)piStack_20 + (-4 - (int)piVar5))) {
LAB_10605515:
                    
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1148a50e(piVar5,uVar4);
      piStack_20 = (int *)((int *)0x0);
      piStack_1c = (int *)((int *)0x0);
      iStack_18 = (int)(0);
    }
    local_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
    thunk_FUN_10604790();
    thunk_FUN_10604820();
    local_c4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
    *(unsigned char *)((char *)&local_78 + 0) = 10;
    ((SCStr *)((SCStr *)&local_2c))->int_release();
    piVar5 = (int *)(local_30);

    *(unsigned char *)((char *)&local_78 + 0) = 0xb;
    if (local_30 != (int *)0x0) {

      local_30 = (int *)((int *)0x0);
      (**(code **)(*piVar5 + 8))();
    }
    *(unsigned char *)((char *)&local_78 + 0) = 0xc;
    ((SCStr *)((SCStr *)local_3c))->int_release();
    local_3c[0] = (undefined4)(0);
    *(unsigned char *)((char *)&local_78 + 0) = 0xd;
    ((SCStr *)((SCStr *)local_44))->int_release();
    local_44[0] = (undefined4)(0);
    local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0xe)));
    ((SCStr *)((SCStr *)local_4c))->int_release();
    local_4c[0] = (undefined4)(0);

  }
  ((SCStr *)(this_))->int_release();

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10605d60; body size 276 bytes.
#line 1 "ENTRY_10605d60"

undefined4 * __thiscall Recovered_Bulk::FUN_10605d60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0xfc));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_106e1380(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_106e3e70(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAccountRequiredSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10605ec0; body size 276 bytes.
#line 1 "ENTRY_10605ec0"

undefined4 * __thiscall Recovered_Bulk::FUN_10605ec0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_107626d0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10762e20(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApConnectSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606020; body size 276 bytes.
#line 1 "ENTRY_10606020"

undefined4 * __thiscall Recovered_Bulk::FUN_10606020(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10767860(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10767d40(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigApInstructionsSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606180; body size 276 bytes.
#line 1 "ENTRY_10606180"

undefined4 * __thiscall Recovered_Bulk::FUN_10606180(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x108));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10758340(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_107593f0(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAppVersionCheckSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 106062e0; body size 168 bytes.
#line 1 "ENTRY_106062e0"

undefined4 * __thiscall Recovered_Bulk::FUN_106062e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskNetworkModifiedPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 106063c0; body size 175 bytes.
#line 1 "ENTRY_106063c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106063c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe4));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigAskUnplugEthernetPage);
    *(undefined1 *)(puVar1 + 0x38) = 0;

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 106064a0; body size 276 bytes.
#line 1 "ENTRY_106064a0"

undefined4 * __thiscall Recovered_Bulk::FUN_106064a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x10c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_1077bcd0(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_1077bf70(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigBleConnectSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606600; body size 276 bytes.
#line 1 "ENTRY_10606600"

undefined4 * __thiscall Recovered_Bulk::FUN_10606600(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc4));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10811c10(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10812740(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigConnectRecoverySubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606760; body size 276 bytes.
#line 1 "ENTRY_10606760"

undefined4 * __thiscall Recovered_Bulk::FUN_10606760(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10818140(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10819ab0(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigDevicePermissionsSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 106068c0; body size 276 bytes.
#line 1 "ENTRY_106068c0"

undefined4 * __thiscall Recovered_Bulk::FUN_106068c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x120));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10873290(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10874b00(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigHouseholdSelectionSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606a20; body size 168 bytes.
#line 1 "ENTRY_10606a20"

undefined4 * __thiscall Recovered_Bulk::FUN_10606a20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigInformWiredConnectionPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606b00; body size 236 bytes.
#line 1 "ENTRY_10606b00"

undefined4 * __thiscall Recovered_Bulk::FUN_10606b00(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xf4));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigIntroPage);
    puVar2[0x38] = (undefined4)(0);
    puVar2[0x39] = (undefined4)(0);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
    *(undefined2 *)(puVar2 + 0x3a) = 0;
    puVar2[0x3b] = (undefined4)(0);
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10610c60(puVar2 + 0x3c);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606c30; body size 276 bytes.
#line 1 "ENTRY_10606c30"

undefined4 * __thiscall Recovered_Bulk::FUN_10606c30(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x124));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10905580(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10907260(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialPropagationSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606d90; body size 276 bytes.
#line 1 "ENTRY_10606d90"

undefined4 * __thiscall Recovered_Bulk::FUN_10606d90(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_108fb850(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_108fc3e0(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigNetworkCredentialsSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606ef0; body size 168 bytes.
#line 1 "ENTRY_10606ef0"

undefined4 * __thiscall Recovered_Bulk::FUN_10606ef0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerOutOfDatePage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10606fd0; body size 276 bytes.
#line 1 "ENTRY_10606fd0"

undefined4 * __thiscall Recovered_Bulk::FUN_10606fd0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_10948f60(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_10949d90(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigPlayerSelectionSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607130; body size 276 bytes.
#line 1 "ENTRY_10607130"

undefined4 * __thiscall Recovered_Bulk::FUN_10607130(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x120));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_109a6790(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109a85f0(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSecureAuthenticationSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607290; body size 193 bytes.
#line 1 "ENTRY_10607290"

undefined4 * __thiscall Recovered_Bulk::FUN_10607290(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xe4));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardBleFoundPage);
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10610c60(puVar2 + 0x38);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607390; body size 193 bytes.
#line 1 "ENTRY_10607390"

undefined4 * __thiscall Recovered_Bulk::FUN_10607390(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xe4));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardJoinNearbySystemPage);
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10610c60(puVar2 + 0x38);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607490; body size 168 bytes.
#line 1 "ENTRY_10607490"

undefined4 * __thiscall Recovered_Bulk::FUN_10607490(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNoNetworkPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607570; body size 168 bytes.
#line 1 "ENTRY_10607570"

undefined4 * __thiscall Recovered_Bulk::FUN_10607570(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardNothingFoundPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607650; body size 193 bytes.
#line 1 "ENTRY_10607650"

undefined4 * __thiscall Recovered_Bulk::FUN_10607650(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xe4));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar3);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSetupCardUnrecognizedNetworkPage);
    thunk_FUN_10eb41b0(uVar1);
    thunk_FUN_10610c60(puVar2 + 0x38);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607750; body size 168 bytes.
#line 1 "ENTRY_10607750"

undefined4 * __thiscall Recovered_Bulk::FUN_10607750(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigStartOpenApPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607830; body size 168 bytes.
#line 1 "ENTRY_10607830"

undefined4 * __thiscall Recovered_Bulk::FUN_10607830(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSuccessPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607910; body size 276 bytes.
#line 1 "ENTRY_10607910"

undefined4 * __thiscall Recovered_Bulk::FUN_10607910(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(0xc0));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    iVar4 = (int)(thunk_FUN_10eae150(uVar1));
    if (iVar4 == 0) {
      pvVar6 = (void *)(operator_new(0x11c));
      *(unsigned char *)((char *)&local_8 + 0) = 1;
      if (pvVar6 == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(uVar3);
        uVar7 = (undefined4)(thunk_FUN_109edf50(uVar3));
        uVar5 = (undefined4)(thunk_FUN_10eae0a0(uVar7,uVar5));
        local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(2)));
        uVar5 = (undefined4)(thunk_FUN_109eeaf0(uVar5));
      }

    }
    else {
      uVar5 = (undefined4)(thunk_FUN_10eae150(uVar1));
    }
    thunk_FUN_10ebc060(uVar3,uVar5);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
    puVar2[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigSystemIdSubwiz);

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607a70; body size 133 bytes.
#line 1 "ENTRY_10607a70"

undefined4 __thiscall Recovered_Bulk::FUN_10607a70(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  pvVar1 = (void *)(operator_new(0xc0));

  if (pvVar1 != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    uVar2 = (undefined4)(thunk_FUN_105fce60(uVar2));

    return (undefined4)(uVar2);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10607b20; body size 168 bytes.
#line 1 "ENTRY_10607b20"

undefined4 * __thiscall Recovered_Bulk::FUN_10607b20(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar1 = (undefined4 *)(operator_new(0xe0));

  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWrongHHIDPage);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10607c00; body size 386 bytes.
#line 1 "ENTRY_10607c00"

undefined4 * __stdcall FUN_10607c00(undefined4 *param_1)

{
 try {
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  uVar5 = (uint)(0);

  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_101da4a0(&local_24,DAT_12126b84 ));

  piVar3 = (int *)((int *)(**(code **)(*(int *)*puVar2 + 0x3c))(&local_20));
  piVar4 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&local_8 + 0) = 1;
  *piVar3 = (int)(0);
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar4 + 0xc))());
  }
  *(unsigned char *)((char *)&local_8 + 0) = 4;
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 6;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))();
  }
  *(unsigned char *)((char *)&local_8 + 0) = 5;
  local_24 = (int *)(operator_new(0x120));
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  uVar1 = (undefined1)((undefined1)local_8);
  *(unsigned char *)((char *)&local_8 + 0) = 7;
  if (local_24 == (int *)0x0) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    if (piVar4 == (int *)0x0) {
      *(unsigned char *)((char *)&local_8 + 0) = uVar1;
      ((SCStr *)((SCStr *)&local_18))->int_allocRep((char *)0x0);
      puVar2 = (undefined4 *)(&local_18);

      uVar5 = (uint)(2);
    }
    else {
      puVar2 = (undefined4 *)((undefined4 *)(**(code **)(*piVar4 + 0x1c))(&local_1c));
      local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(8)));
      uVar5 = (uint)(1);
    }
    local_14 = (uint)(uVar5);
    uVar1 = (undefined1)(thunk_FUN_10eacce0(1));
    piVar4 = (int *)((int *)thunk_FUN_10edf540(0,puVar2,uVar1));
  }

  *param_1 = (undefined4)(piVar4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = (uint)(uVar5 & 0xfffffffd | 4);

    local_14 = (uint)(uVar5);
    ((SCStr *)((SCStr *)&local_18))->int_release();

  }
  if ((uVar5 & 1) != 0) {

    ((SCStr *)((SCStr *)&local_1c))->int_release();

  }

  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10607df0; body size 299 bytes.
#line 1 "ENTRY_10607df0"

undefined4 * __thiscall Recovered_Bulk::FUN_10607df0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;


  puVar2 = (undefined4 *)(operator_new(0x124));

  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = (undefined4)(thunk_FUN_10eae0f0(param_1,param_2,param_3,param_4));
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_106da030(uVar3);
    puVar1 = (undefined4 *)(puVar2 + 0x23);

    thunk_FUN_10cf2f30(puVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 3;
    thunk_FUN_10cf41d0(puVar1);
    *(unsigned char *)((char *)&local_8 + 0) = 4;
    thunk_FUN_10eaafe0(puVar2 + 0x3a);
    local_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_8 + 1)) << 8 | (uint)(5)));
    thunk_FUN_10eab1c0(puVar2 + 0x40);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
    puVar2[4] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
    puVar2[0x2a] = (undefined4)((uint)&ghidra_vftable_SCWifiConfigWizard);
    puVar2[0x46] = (undefined4)(0);
    puVar2[0x47] = (undefined4)(0);
    *(undefined1 *)(puVar2 + 0x48) = 0;

    return (undefined4 *)(puVar2);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10608200; body size 94 bytes.
#line 1 "ENTRY_10608200"

int __thiscall Recovered_Bulk::FUN_10608200(char param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (*(int *)(iVar1 + -8) == *(int *)(iVar1 + -4)) {
    thunk_FUN_105f34e0(*(int *)(iVar1 + -8),param_3);
  }
  else {
    thunk_FUN_105f5a00(param_3);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
  }
  iVar1 = (int)(*(int *)(iVar1 + -8));
  if (param_2 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4 *)(iVar1 + -0x1c) = 5;
      return (int)(param_1);
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4 *)(iVar1 + -0x1c) = 1;
    }
  }
  return (int)(param_1);
}


// Reference entry 10608280; body size 94 bytes.
#line 1 "ENTRY_10608280"

int __thiscall Recovered_Bulk::FUN_10608280(char param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (*(int *)(iVar1 + -8) == *(int *)(iVar1 + -4)) {
    thunk_FUN_105f36d0(*(int *)(iVar1 + -8),param_3);
  }
  else {
    thunk_FUN_105f5df0(param_3);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
  }
  iVar1 = (int)(*(int *)(iVar1 + -8));
  if (param_2 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4 *)(iVar1 + -0x1c) = 5;
      return (int)(param_1);
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4 *)(iVar1 + -0x1c) = 1;
    }
  }
  return (int)(param_1);
}


// Reference entry 10608300; body size 94 bytes.
#line 1 "ENTRY_10608300"

int __thiscall Recovered_Bulk::FUN_10608300(char param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  if (*(int *)(iVar1 + -8) == *(int *)(iVar1 + -4)) {
    thunk_FUN_105f38c0(*(int *)(iVar1 + -8),param_3);
  }
  else {
    thunk_FUN_105f60e0(param_3);
    *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 0x20;
  }
  iVar1 = (int)(*(int *)(iVar1 + -8));
  if (param_2 == '\0') {
    if (*(int *)(iVar1 + -0x1c) == 4) {
      *(undefined4 *)(iVar1 + -0x1c) = 5;
      return (int)(param_1);
    }
    if (*(int *)(iVar1 + -0x1c) == 0) {
      *(undefined4 *)(iVar1 + -0x1c) = 1;
    }
  }
  return (int)(param_1);
}


// Reference entry 106083b0; body size 1130 bytes.
#line 1 "ENTRY_106083b0"

undefined4 __stdcall FUN_106083b0(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined **local_128 [8];
  undefined **local_108 [8];
  undefined **local_e8 [8];
  undefined **local_c8 [8];
  undefined **local_a8 [8];
  SCStr local_88 [8];
  void *local_80;
  undefined1 *puStack_7c;
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined4 local_70;
  int *local_6c;
  undefined4 local_68 [2];
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58 [2];
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48 [2];
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34 [2];
  undefined4 local_2c [2];
  undefined **local_24;
  undefined4 local_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;


  uVar3 = (undefined4)(thunk_FUN_10c5f450(local_88,0x2089,&DAT_11882ff0,DAT_12126b84 ^ (uint)local_74));

  thunk_FUN_10ec0a20(&DAT_11883704);
  uVar9 = (undefined4)(2);
  *(unsigned char *)((char *)&local_78 + 0) = 1;
  thunk_FUN_10ecea60(uVar3);
  iVar4 = (int)(thunk_FUN_10ec7940(uVar9));
  thunk_FUN_105f6290(iVar4 + 4);
  *(unsigned char *)((char *)&local_78 + 0) = 2;
  uVar3 = (undefined4)(thunk_FUN_10c5f450(local_34,0x2088,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_78 + 0) = 3;
  thunk_FUN_10ec0a20(&DAT_118bd5c0);
  *(unsigned char *)((char *)&local_78 + 0) = 4;
  iVar4 = (int)(thunk_FUN_10ecea60(uVar3));
  thunk_FUN_105f6290(iVar4 + 4);
  *(unsigned char *)((char *)&local_78 + 0) = 5;
  uVar3 = (undefined4)(thunk_FUN_10c5f450(local_2c,0x2c05,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_78 + 0) = 6;
  thunk_FUN_10ec1b40("header");
  *(unsigned char *)((char *)&local_78 + 0) = 7;
  iVar4 = (int)(thunk_FUN_10eced20(uVar3));
  thunk_FUN_105f6290(iVar4 + 4);
  *(unsigned char *)((char *)&local_78 + 0) = 8;
  thunk_FUN_10ec1d40();
  *(unsigned char *)((char *)&local_78 + 0) = 9;
  iVar4 = (int)(thunk_FUN_1061c630(1));
  thunk_FUN_105f6290(iVar4 + 4);
  local_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_1c = (int *)((int *)0x0);
  piStack_18 = (int *)((int *)0x0);
  iStack_14 = (int)(0);
  local_10 = (undefined4 *)((undefined4 *)0x0);
  local_c = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_78 + 0) = 0xb;
  piVar5 = (int *)((int *)thunk_FUN_106050a0(local_a8));
  thunk_FUN_10eb41c0();
  uVar3 = (undefined4)(thunk_FUN_106052d0(local_128));
  *(unsigned char *)((char *)&local_78 + 0) = 0xc;
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))(uVar3));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))(local_c8));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))(local_e8));
  uVar3 = (undefined4)((**(code **)(*piVar5 + 8))(local_108));
  thunk_FUN_105f60e0(uVar3);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_c);
  local_128[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 10;
  puVar7 = (undefined4 *)(local_10);
  if (local_10 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar7) != puVar2; puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(local_8 - (int)local_10 & 0xffffffe0);
    puVar7 = (undefined4 *)(local_10);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)local_10[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)local_10 + (-4 - (int)puVar7))) goto LAB_10608679;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    local_10 = (undefined4 *)((undefined4 *)0x0);
    local_c = (undefined4 *)((undefined4 *)0x0);

  }
  piVar5 = (int *)(piStack_18);
  if (piStack_1c != (int *)0x0) {
    if (piStack_1c != (int *)(piStack_18)) {
      piVar8 = (int *)(piStack_1c + 1);
      do {
        *(unsigned char *)((char *)&local_78 + 0) = 0xd;
        ((SCStr *)((SCStr *)(piVar8 + 1)))->int_release();
        piVar8[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar8);
        *(unsigned char *)((char *)&local_78 + 0) = 0xe;
        if (piVar1 != (int *)0x0) {
          piVar8[-1] = (int)(0);
          *piVar8 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_78 + 0) = 10;
        piVar1 = (int *)(piVar8 + 2);
        piVar8 = (int *)(piVar8 + 3);
      } while (piVar1 != (int *)(piVar5));
    }
    uVar6 = (uint)(((iStack_14 - (int)piStack_1c) / 0xc) * 0xc);
    piVar5 = (int *)(piStack_1c);
    if (0xfff < uVar6) {
      piVar5 = (int *)((int *)piStack_1c[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)piStack_1c + (-4 - (int)piVar5))) {
LAB_10608679:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar5,uVar6);
    piStack_1c = (int *)((int *)0x0);
    piStack_18 = (int *)((int *)0x0);
    iStack_14 = (int)(0);
  }
  local_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_a8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 0xf;
  ((SCStr *)((SCStr *)&local_38))->int_release();
  piVar5 = (int *)(local_3c);

  *(unsigned char *)((char *)&local_78 + 0) = 0x10;
  if (local_3c != (int *)0x0) {

    local_3c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_c8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 0x11;
  ((SCStr *)((SCStr *)local_48))->int_release();
  piVar5 = (int *)(local_4c);
  local_48[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_78 + 0) = 0x12;
  if (local_4c != (int *)0x0) {

    local_4c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_78 + 0) = 0x13;
  ((SCStr *)((SCStr *)local_2c))->int_release();
  local_2c[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_e8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 0x14;
  ((SCStr *)((SCStr *)local_58))->int_release();
  piVar5 = (int *)(local_5c);
  local_58[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_78 + 0) = 0x15;
  if (local_5c != (int *)0x0) {

    local_5c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_78 + 0) = 0x16;
  ((SCStr *)((SCStr *)local_34))->int_release();
  local_34[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_108[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_78 + 0) = 0x17;
  ((SCStr *)((SCStr *)local_68))->int_release();
  piVar5 = (int *)(local_6c);
  local_68[0] = (undefined4)(0);
  local_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_78 + 1)) << 8 | (uint)(0x18)));
  if (local_6c != (int *)0x0) {

    local_6c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }

  ((SCStr *)(local_88))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10608940; body size 1727 bytes.
#line 1 "ENTRY_10608940"

undefined4 __stdcall FUN_10608940(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined **local_194 [8];
  undefined **local_174 [8];
  undefined **local_154 [8];
  undefined **local_134 [8];
  undefined **local_114 [8];
  undefined **local_f4 [8];
  undefined1 local_d4 [12];
  undefined4 local_c8;
  int *local_c4;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  int *local_b4;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  int *local_a4;
  undefined4 local_a0 [2];
  undefined4 local_98;
  int *local_94;
  undefined4 local_90 [2];
  undefined4 local_88;
  int *local_84;
  undefined4 local_80;
  void *local_7c;
  undefined1 *puStack_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  undefined1 *local_60 [3];
  int *local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_40;
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  undefined **local_2c;
  undefined4 local_28;
  int *piStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_70);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_8));
  piVar6 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_54 = (int *)(piVar6);
  if (piVar6 == (int *)0x0) {
    local_50 = (int *)((int *)0x0);
  }
  else {
    local_50 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
  }
  *(unsigned char *)((char *)&local_74 + 0) = 3;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 2;
  thunk_FUN_10c5f1d0(piVar6);
  thunk_FUN_10c61010(local_60,local_3c,6,0,0);
  *(unsigned char *)((char *)&local_74 + 0) = 4;
  thunk_FUN_10c5f1d0(piVar6);
  puVar7 = (undefined1 *)(local_d4);
  thunk_FUN_105bebd0(puVar7);
  local_40 = (undefined4)(thunk_FUN_10e0f250(puVar7));
  uVar4 = (undefined4)(thunk_FUN_10c98710(&local_8));
  *(unsigned char *)((char *)&local_74 + 0) = 5;
  thunk_FUN_10c61ec0(&local_c,uVar4);
  *(unsigned char *)((char *)&local_74 + 0) = 8;
  ((SCStr *)((SCStr *)&local_8))->int_release();
  local_8 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_74 + 0) = 7;
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_3c,0x2c0f,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_74 + 0) = 9;
  thunk_FUN_10ec0a20("leaveItWired");
  uVar10 = (undefined4)(2);
  *(unsigned char *)((char *)&local_74 + 0) = 10;
  thunk_FUN_10ecea60(uVar4);
  iVar5 = (int)(thunk_FUN_10ec7940(uVar10));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_74 + 0) = 0xb;
  uVar4 = (undefined4)(thunk_FUN_10c5f450((SCStr *)local_70,0x2c0e,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_74 + 0) = 0xc;
  thunk_FUN_10ec0a20("continue");
  *(unsigned char *)((char *)&local_74 + 0) = 0xd;
  iVar5 = (int)(thunk_FUN_10ecea60(uVar4));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_74 + 0) = 0xe;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_c != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_c);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_68,0x277d,&DAT_1188465c,puVar7));
  *(unsigned char *)((char *)&local_74 + 0) = 0xf;
  uVar10 = (undefined4)(thunk_FUN_10e0f500(&local_4c,1));
  *(unsigned char *)((char *)&local_74 + 0) = 0x10;
  thunk_FUN_10ec1c00("image");
  *(unsigned char *)((char *)&local_74 + 0) = 0x11;
  thunk_FUN_10ecbbd0(uVar10);
  iVar5 = (int)(thunk_FUN_10ecb9f0(uVar4));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_74 + 0) = 0x12;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&local_74 + 0) = 0x13;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_60[0] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_60[0]);
  }
  thunk_FUN_10c62d50(local_34,local_60,0x2c0d,&DAT_1188465c,puVar7);
  *(unsigned char *)((char *)&local_74 + 0) = 0x14;
  thunk_FUN_10ec1b40("header");
  *(unsigned char *)((char *)&local_74 + 0) = 0x15;
  iVar5 = (int)(thunk_FUN_10eced20(local_34));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_74 + 0) = 0x16;
  thunk_FUN_10ec1d40();
  *(unsigned char *)((char *)&local_74 + 0) = 0x17;
  iVar5 = (int)(thunk_FUN_1061c630(1));
  thunk_FUN_105f6290(iVar5 + 4);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_24 = (int *)((int *)0x0);
  piStack_20 = (int *)((int *)0x0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_74 + 0) = 0x19;
  piVar6 = (int *)((int *)thunk_FUN_106050a0(local_f4));
  thunk_FUN_10eb41c0();
  uVar4 = (undefined4)(thunk_FUN_106052d0(local_194));
  *(unsigned char *)((char *)&local_74 + 0) = 0x1a;
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(uVar4));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_114));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_134));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_154));
  uVar4 = (undefined4)((**(code **)(*piVar6 + 8))(local_174));
  thunk_FUN_105f60e0(uVar4);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_14);
  local_194[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x18;
  puVar9 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_18);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar9))) goto LAB_10608d85;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar6 = (int *)(piStack_20);
  if (piStack_24 != (int *)0x0) {
    if (piStack_24 != (int *)(piStack_20)) {
      piVar3 = (int *)(piStack_24 + 1);
      do {
        *(unsigned char *)((char *)&local_74 + 0) = 0x1b;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_74 + 0) = 0x1c;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_74 + 0) = 0x18;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar6));
    }
    uVar8 = (uint)(((iStack_1c - (int)piStack_24) / 0xc) * 0xc);
    piVar6 = (int *)(piStack_24);
    if (0xfff < uVar8) {
      piVar6 = (int *)((int *)piStack_24[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_24 + (-4 - (int)piVar6))) {
LAB_10608d85:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar6,uVar8);
    piStack_24 = (int *)((int *)0x0);
    piStack_20 = (int *)((int *)0x0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_f4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x1d;
  ((SCStr *)((SCStr *)&local_80))->int_release();
  piVar6 = (int *)(local_84);

  *(unsigned char *)((char *)&local_74 + 0) = 0x1e;
  if (local_84 != (int *)0x0) {

    local_84 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_114[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x1f;
  ((SCStr *)((SCStr *)local_90))->int_release();
  piVar6 = (int *)(local_94);
  local_90[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x20;
  if (local_94 != (int *)0x0) {

    local_94 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 0x21;
  ((SCStr *)((SCStr *)local_34))->int_release();
  local_34[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_134[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x22;
  ((SCStr *)((SCStr *)local_a0))->int_release();
  piVar6 = (int *)(local_a4);
  local_a0[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x23;
  if (local_a4 != (int *)0x0) {

    local_a4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_48);
  *(unsigned char *)((char *)&local_74 + 0) = 0x24;
  if (local_48 != (int *)0x0) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 0x25;
  ((SCStr *)((SCStr *)local_68))->int_release();
  local_68[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_154[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x26;
  ((SCStr *)((SCStr *)local_b0))->int_release();
  piVar6 = (int *)(local_b4);
  local_b0[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x27;
  if (local_b4 != (int *)0x0) {

    local_b4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 0x28;
  ((SCStr *)((SCStr *)local_70))->int_release();
  local_70[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_174[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_74 + 0) = 0x29;
  ((SCStr *)((SCStr *)local_c0))->int_release();
  piVar6 = (int *)(local_c4);
  local_c0[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x2a;
  if (local_c4 != (int *)0x0) {

    local_c4 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_74 + 0) = 0x2b;
  ((SCStr *)((SCStr *)local_3c))->int_release();
  local_3c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_74 + 0) = 0x2c;
  ((SCStr *)((SCStr *)&local_c))->int_release();
  local_c = (undefined1 *)((undefined1 *)0x0);
  local_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_74 + 1)) << 8 | (uint)(0x2d)));
  ((SCStr *)((SCStr *)local_60))->int_release();
  local_60[0] = (undefined1 *)((undefined1 *)0x0);

  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 106091b0; body size 1670 bytes.
#line 1 "ENTRY_106091b0"

undefined4 __stdcall FUN_106091b0(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined **local_18c [8];
  undefined **local_16c [8];
  undefined **local_14c [8];
  undefined **local_12c [8];
  undefined **local_10c [8];
  undefined **local_ec [8];
  undefined1 local_cc [12];
  undefined4 local_c0;
  int *local_bc;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  int *local_9c;
  undefined4 local_98 [2];
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88;
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined4 local_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  undefined1 *local_60 [3];
  int *local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 local_40;
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  undefined **local_2c;
  undefined4 local_28;
  int *piStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_78);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_8));
  piVar6 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_54 = (int *)(piVar6);
  if (piVar6 == (int *)0x0) {
    local_50 = (int *)((int *)0x0);
  }
  else {
    local_50 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
  }
  *(unsigned char *)((char *)&local_7c + 0) = 3;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 2;
  thunk_FUN_10c5f1d0(piVar6);
  thunk_FUN_10c61010(local_60,local_3c,6,0,0);
  *(unsigned char *)((char *)&local_7c + 0) = 4;
  thunk_FUN_10c5f1d0(piVar6);
  puVar7 = (undefined1 *)(local_cc);
  thunk_FUN_105bebd0(puVar7);
  local_40 = (undefined4)(thunk_FUN_10e0f250(puVar7));
  uVar4 = (undefined4)(thunk_FUN_10c98710(&local_8));
  *(unsigned char *)((char *)&local_7c + 0) = 5;
  thunk_FUN_10c61ec0(&local_c,uVar4);
  *(unsigned char *)((char *)&local_7c + 0) = 8;
  ((SCStr *)((SCStr *)&local_8))->int_release();
  local_8 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&local_7c + 0) = 7;
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_3c,0x2c0c,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_7c + 0) = 9;
  thunk_FUN_10ec0a20("moreInfo");
  uVar10 = (undefined4)(2);
  *(unsigned char *)((char *)&local_7c + 0) = 10;
  thunk_FUN_10ecea60(uVar4);
  iVar5 = (int)(thunk_FUN_10ec7940(uVar10));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0xb;
  iVar5 = (int)(thunk_FUN_10ec1a10("continue"));
  *(unsigned char *)((char *)&local_7c + 0) = 0xc;
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0xd;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_c != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_c);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_68,0x277d,&DAT_1188465c,puVar7));
  *(unsigned char *)((char *)&local_7c + 0) = 0xe;
  uVar10 = (undefined4)(thunk_FUN_10e0f500(&local_4c,1));
  *(unsigned char *)((char *)&local_7c + 0) = 0xf;
  thunk_FUN_10ec1c00("image");
  *(unsigned char *)((char *)&local_7c + 0) = 0x10;
  thunk_FUN_10ecbbd0(uVar10);
  iVar5 = (int)(thunk_FUN_10ecb9f0(uVar4));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x11;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&local_7c + 0) = 0x12;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_60[0] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_60[0]);
  }
  thunk_FUN_10c62d50(local_34,local_60,0x2c0b,&DAT_1188465c,puVar7);
  *(unsigned char *)((char *)&local_7c + 0) = 0x13;
  thunk_FUN_10ec1b40("header");
  uVar4 = (undefined4)(1);
  *(unsigned char *)((char *)&local_7c + 0) = 0x14;
  thunk_FUN_10eced20(local_34);
  iVar5 = (int)(thunk_FUN_10ecd540(uVar4));
  thunk_FUN_105f6290(iVar5 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x15;
  thunk_FUN_10ec1d40();
  *(unsigned char *)((char *)&local_7c + 0) = 0x16;
  iVar5 = (int)(thunk_FUN_1061c630(1));
  thunk_FUN_105f6290(iVar5 + 4);
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_24 = (int *)((int *)0x0);
  piStack_20 = (int *)((int *)0x0);
  iStack_1c = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);
  local_14 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_7c + 0) = 0x18;
  piVar6 = (int *)((int *)thunk_FUN_106050a0(local_ec));
  thunk_FUN_10eb41c0();
  uVar4 = (undefined4)(thunk_FUN_106052d0(local_18c));
  *(unsigned char *)((char *)&local_7c + 0) = 0x19;
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(uVar4));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_10c));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_12c));
  piVar6 = (int *)((int *)(**(code **)(*piVar6 + 8))(local_14c));
  uVar4 = (undefined4)((**(code **)(*piVar6 + 8))(local_16c));
  thunk_FUN_105f60e0(uVar4);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_14);
  local_18c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x17;
  puVar9 = (undefined4 *)(local_18);
  if (local_18 != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_10 - (int)local_18 & 0xffffffe0);
    puVar9 = (undefined4 *)(local_18);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_18[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_18 + (-4 - (int)puVar9))) goto LAB_106095d5;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_18 = (undefined4 *)((undefined4 *)0x0);
    local_14 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar6 = (int *)(piStack_20);
  if (piStack_24 != (int *)0x0) {
    if (piStack_24 != (int *)(piStack_20)) {
      piVar3 = (int *)(piStack_24 + 1);
      do {
        *(unsigned char *)((char *)&local_7c + 0) = 0x1a;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_7c + 0) = 0x1b;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_7c + 0) = 0x17;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar6));
    }
    uVar8 = (uint)(((iStack_1c - (int)piStack_24) / 0xc) * 0xc);
    piVar6 = (int *)(piStack_24);
    if (0xfff < uVar8) {
      piVar6 = (int *)((int *)piStack_24[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_24 + (-4 - (int)piVar6))) {
LAB_106095d5:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar6,uVar8);
    piStack_24 = (int *)((int *)0x0);
    piStack_20 = (int *)((int *)0x0);
    iStack_1c = (int)(0);
  }
  local_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_ec[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1c;
  ((SCStr *)((SCStr *)&local_6c))->int_release();
  piVar6 = (int *)(local_70);

  *(unsigned char *)((char *)&local_7c + 0) = 0x1d;
  if (local_70 != (int *)0x0) {

    local_70 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_10c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1e;
  ((SCStr *)((SCStr *)&local_88))->int_release();
  piVar6 = (int *)(local_8c);

  *(unsigned char *)((char *)&local_7c + 0) = 0x1f;
  if (local_8c != (int *)0x0) {

    local_8c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x20;
  ((SCStr *)((SCStr *)local_34))->int_release();
  local_34[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_12c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x21;
  ((SCStr *)((SCStr *)local_98))->int_release();
  piVar6 = (int *)(local_9c);
  local_98[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x22;
  if (local_9c != (int *)0x0) {

    local_9c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(local_48);
  *(unsigned char *)((char *)&local_7c + 0) = 0x23;
  if (local_48 != (int *)0x0) {

    local_48 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x24;
  ((SCStr *)((SCStr *)local_68))->int_release();
  local_68[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_14c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x25;
  ((SCStr *)((SCStr *)local_a8))->int_release();
  piVar6 = (int *)(local_ac);
  local_a8[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x26;
  if (local_ac != (int *)0x0) {

    local_ac = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_16c[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x27;
  ((SCStr *)((SCStr *)local_b8))->int_release();
  piVar6 = (int *)(local_bc);
  local_b8[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x28;
  if (local_bc != (int *)0x0) {

    local_bc = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x29;
  ((SCStr *)((SCStr *)local_3c))->int_release();
  local_3c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x2a;
  ((SCStr *)((SCStr *)&local_c))->int_release();
  local_c = (undefined1 *)((undefined1 *)0x0);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(0x2b)));
  ((SCStr *)((SCStr *)local_60))->int_release();
  local_60[0] = (undefined1 *)((undefined1 *)0x0);

  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1060b510; body size 3122 bytes.
#line 1 "ENTRY_1060b510"

undefined4 __stdcall FUN_1060b510(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined **local_278 [8];
  undefined **local_258 [8];
  undefined **local_238 [8];
  undefined **local_218 [8];
  undefined **local_1f8 [8];
  undefined **local_1d8 [8];
  undefined **local_1b8 [8];
  undefined **local_198 [8];
  undefined **local_178 [8];
  undefined1 local_158 [8];
  undefined4 local_150 [2];
  undefined4 local_148 [3];
  undefined4 local_13c;
  int *local_138;
  undefined4 local_134 [2];
  undefined4 local_12c;
  int *local_128;
  undefined4 local_124 [2];
  undefined4 local_11c;
  int *local_118;
  undefined4 local_114 [2];
  undefined4 local_10c;
  int *local_108;
  undefined4 local_104 [2];
  undefined4 local_fc;
  int *local_f8;
  undefined4 local_f4 [2];
  undefined4 local_ec;
  int *local_e8;
  undefined4 local_e4 [2];
  undefined4 local_dc;
  int *local_d8;
  undefined4 local_d4 [2];
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  int *local_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8;
  undefined1 *local_a0 [3];
  undefined4 local_94 [2];
  undefined4 local_8c [2];
  void *local_84;
  undefined1 *puStack_80;
  undefined4 local_7c;
  undefined4 local_78 [2];
  undefined **local_70;
  undefined4 local_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54;
  undefined **local_50;
  undefined4 local_4c;
  int *piStack_48;
  int *piStack_44;
  int iStack_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_34;
  undefined **local_30;
  undefined4 local_2c;
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  undefined1 *local_c;
  int *local_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)local_78);
  piVar3 = (int *)((int *)thunk_FUN_10cf34e0(&local_8));
  piVar5 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  local_c0 = (int *)(piVar5);
  if (piVar5 == (int *)0x0) {
    local_bc = (int *)((int *)0x0);
  }
  else {
    local_bc = (int *)((int *)(**(code **)(*piVar5 + 0xc))());
  }
  *(unsigned char *)((char *)&local_7c + 0) = 3;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 2;
  thunk_FUN_10c5f1d0(piVar5);
  thunk_FUN_10c61010(local_a0,local_94,6,0,0);
  *(unsigned char *)((char *)&local_7c + 0) = 4;
  thunk_FUN_10c5f1d0(piVar5);
  puVar7 = (undefined1 *)(local_158);
  thunk_FUN_105bebd0(puVar7);
  local_8 = (int *)((int *)thunk_FUN_10e0f250(puVar7));
  uVar4 = (undefined4)(thunk_FUN_10c98710(&local_10));
  *(unsigned char *)((char *)&local_7c + 0) = 5;
  thunk_FUN_10c61ec0(&local_c,uVar4);
  *(unsigned char *)((char *)&local_7c + 0) = 8;
  ((SCStr *)((SCStr *)&local_10))->int_release();

  *(unsigned char *)((char *)&local_7c + 0) = 7;
  thunk_FUN_10eb41c0();
  piVar5 = (int *)((int *)thunk_FUN_10eace90());
  local_a8 = (undefined4)(((uint)(*(unsigned short *)((char *)&local_a8 + 1)) << 8 | (uint)(1 < (uint)((piVar5[1] - *piVar5) / 0x4c))));
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_94,0x20a6,&DAT_11882ff0));
  *(unsigned char *)((char *)&local_7c + 0) = 9;
  thunk_FUN_10ec0a20("needHelp");
  uVar10 = (undefined4)(2);
  *(unsigned char *)((char *)&local_7c + 0) = 10;
  thunk_FUN_10ecea60(uVar4);
  iVar6 = (int)(thunk_FUN_10ec7940(uVar10));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0xb;
  iVar6 = (int)(thunk_FUN_10ec1a10(&DAT_118bd270));
  *(unsigned char *)((char *)&local_7c + 0) = 0xc;
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0xd;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_c != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_c);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_150,0x277d,&DAT_1188465c,puVar7));
  *(unsigned char *)((char *)&local_7c + 0) = 0xe;
  uVar10 = (undefined4)(thunk_FUN_10e0f500(&local_b8,1));
  *(unsigned char *)((char *)&local_7c + 0) = 0xf;
  thunk_FUN_10ec1c00("image");
  *(unsigned char *)((char *)&local_7c + 0) = 0x10;
  thunk_FUN_10ecbbd0(uVar10);
  iVar6 = (int)(thunk_FUN_10ecb9f0(uVar4));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x11;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&local_7c + 0) = 0x12;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_a0[0] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_a0[0]);
  }
  thunk_FUN_10c62d50(local_8c,local_a0,0x2c07,&DAT_1188465c,puVar7);
  *(unsigned char *)((char *)&local_7c + 0) = 0x13;
  thunk_FUN_10ec1b40("header");
  uVar4 = (undefined4)(1);
  *(unsigned char *)((char *)&local_7c + 0) = 0x14;
  thunk_FUN_10eced20(local_8c);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar4));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x15;
  iVar6 = (int)(thunk_FUN_10ec1a10("differentProduct"));
  *(unsigned char *)((char *)&local_7c + 0) = 0x16;
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x17;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_c != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_c);
  }
  uVar4 = (undefined4)(thunk_FUN_10c5f450(local_148,0x277d,&DAT_1188465c,puVar7));
  *(unsigned char *)((char *)&local_7c + 0) = 0x18;
  uVar10 = (undefined4)(thunk_FUN_10e0f500(&local_b0,1));
  *(unsigned char *)((char *)&local_7c + 0) = 0x19;
  thunk_FUN_10ec1c00("image");
  *(unsigned char *)((char *)&local_7c + 0) = 0x1a;
  thunk_FUN_10ecbbd0(uVar10);
  iVar6 = (int)(thunk_FUN_10ecb9f0(uVar4));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1b;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1c;
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if (local_a0[0] != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)(local_a0[0]);
  }
  thunk_FUN_10c62d50((SCStr *)local_78,local_a0,0x2c08,&DAT_1188465c,puVar7);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1d;
  thunk_FUN_10ec1b40("header");
  uVar4 = (undefined4)(1);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1e;
  thunk_FUN_10eced20((SCStr *)local_78);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar4));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x1f;
  thunk_FUN_10ec1d40();
  *(unsigned char *)((char *)&local_7c + 0) = 0x20;
  iVar6 = (int)(thunk_FUN_1061c630(1));
  thunk_FUN_105f6290(iVar6 + 4);
  local_70 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_68 = (int *)((int *)0x0);
  piStack_64 = (int *)((int *)0x0);
  iStack_60 = (int)(0);
  local_5c = (undefined4 *)((undefined4 *)0x0);
  local_58 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_7c + 0) = 0x22;
  piVar5 = (int *)((int *)thunk_FUN_106050a0(local_1f8));
  local_8 = (int *)((int *)(**(code **)(*piVar5 + 8))(local_218));
  local_50 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_48 = (int *)((int *)0x0);
  piStack_44 = (int *)((int *)0x0);
  iStack_40 = (int)(0);
  local_3c = (undefined4 *)((undefined4 *)0x0);
  local_38 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_7c + 0) = 0x23;
  piVar5 = (int *)((int *)thunk_FUN_106050a0(local_198));
  piVar5 = (int *)((int *)(**(code **)(*piVar5 + 8))(local_1b8));
  local_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);
  local_1c = (undefined4 *)((undefined4 *)0x0);

  piStack_28 = (int *)((int *)0x0);
  piStack_24 = (int *)((int *)0x0);
  iStack_20 = (int)(0);
  local_18 = (undefined4 *)((undefined4 *)0x0);

  *(unsigned char *)((char *)&local_7c + 0) = 0x24;
  piVar3 = (int *)((int *)thunk_FUN_106050a0(local_178));
  thunk_FUN_10eb41c0();
  uVar4 = (undefined4)(thunk_FUN_106052d0(local_278));
  *(unsigned char *)((char *)&local_7c + 0) = 0x25;
  piVar3 = (int *)((int *)(**(code **)(*piVar3 + 8))(uVar4));
  iVar6 = (int)(*piVar3);
  uVar4 = (undefined4)((**(code **)(*piVar5 + 8))(local_1d8));
  piVar5 = (int *)((int *)(**(code **)(iVar6 + 0xc))(local_a8,uVar4));
  iVar6 = (int)(*piVar5);
  uVar4 = (undefined4)((**(code **)(*local_8 + 8))(local_238));
  piVar5 = (int *)((int *)(**(code **)(iVar6 + 0x14))(uVar4));
  uVar4 = (undefined4)((**(code **)(*piVar5 + 8))(local_258));
  thunk_FUN_105f60e0(uVar4);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  puVar2 = (undefined4 *)(local_18);
  local_278[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x23;
  puVar9 = (undefined4 *)(local_1c);
  if (local_1c != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_14 - (int)local_1c & 0xffffffe0);
    puVar9 = (undefined4 *)(local_1c);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_1c[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_1c + (-4 - (int)puVar9))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_1c = (undefined4 *)((undefined4 *)0x0);
    local_18 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar5 = (int *)(piStack_24);
  if (piStack_28 != (int *)0x0) {
    if (piStack_28 != (int *)(piStack_24)) {
      piVar3 = (int *)(piStack_28 + 1);
      do {
        *(unsigned char *)((char *)&local_7c + 0) = 0x26;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_7c + 0) = 0x27;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_7c + 0) = 0x23;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar5));
    }
    uVar8 = (uint)(((iStack_20 - (int)piStack_28) / 0xc) * 0xc);
    piVar5 = (int *)(piStack_28);
    if (0xfff < uVar8) {
      piVar5 = (int *)((int *)piStack_28[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_28 + (-4 - (int)piVar5))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(piVar5,uVar8);
    piStack_28 = (int *)((int *)0x0);
    piStack_24 = (int *)((int *)0x0);
    iStack_20 = (int)(0);
  }
  puVar2 = (undefined4 *)(local_38);
  local_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x22;
  puVar9 = (undefined4 *)(local_3c);
  if (local_3c != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_34 - (int)local_3c & 0xffffffe0);
    puVar9 = (undefined4 *)(local_3c);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_3c[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)puVar9))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_3c = (undefined4 *)((undefined4 *)0x0);
    local_38 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar5 = (int *)(piStack_44);
  if (piStack_48 != (int *)0x0) {
    if (piStack_48 != (int *)(piStack_44)) {
      piVar3 = (int *)(piStack_48 + 1);
      do {
        *(unsigned char *)((char *)&local_7c + 0) = 0x28;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_7c + 0) = 0x29;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_7c + 0) = 0x22;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar5));
    }
    uVar8 = (uint)(((iStack_40 - (int)piStack_48) / 0xc) * 0xc);
    piVar5 = (int *)(piStack_48);
    if (0xfff < uVar8) {
      piVar5 = (int *)((int *)piStack_48[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_48 + (-4 - (int)piVar5))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(piVar5,uVar8);
    piStack_48 = (int *)((int *)0x0);
    piStack_44 = (int *)((int *)0x0);
    iStack_40 = (int)(0);
  }
  puVar2 = (undefined4 *)(local_58);
  local_50 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x21;
  puVar9 = (undefined4 *)(local_5c);
  if (local_5c != (undefined4 *)0x0) {
    for (; (undefined4 *)(puVar9) != puVar2; puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar8 = (uint)(local_54 - (int)local_5c & 0xffffffe0);
    puVar9 = (undefined4 *)(local_5c);
    if (0xfff < uVar8) {
      puVar9 = (undefined4 *)((undefined4 *)local_5c[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)local_5c + (-4 - (int)puVar9))) goto LAB_1060bd55;
    }
    thunk_FUN_1148a50e(puVar9,uVar8);
    local_5c = (undefined4 *)((undefined4 *)0x0);
    local_58 = (undefined4 *)((undefined4 *)0x0);

  }
  piVar5 = (int *)(piStack_64);
  if (piStack_68 != (int *)0x0) {
    if (piStack_68 != (int *)(piStack_64)) {
      piVar3 = (int *)(piStack_68 + 1);
      do {
        *(unsigned char *)((char *)&local_7c + 0) = 0x2a;
        ((SCStr *)((SCStr *)(piVar3 + 1)))->int_release();
        piVar3[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar3);
        *(unsigned char *)((char *)&local_7c + 0) = 0x2b;
        if (piVar1 != (int *)0x0) {
          piVar3[-1] = (int)(0);
          *piVar3 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&local_7c + 0) = 0x21;
        piVar1 = (int *)(piVar3 + 2);
        piVar3 = (int *)(piVar3 + 3);
      } while (piVar1 != (int *)(piVar5));
    }
    uVar8 = (uint)(((iStack_60 - (int)piStack_68) / 0xc) * 0xc);
    piVar5 = (int *)(piStack_68);
    if (0xfff < uVar8) {
      piVar5 = (int *)((int *)piStack_68[-1]);
      uVar8 = (uint)(uVar8 + 0x23);
      if (0x1f < (uint)((int)piStack_68 + (-4 - (int)piVar5))) {
LAB_1060bd55:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar5,uVar8);
    piStack_68 = (int *)((int *)0x0);
    piStack_64 = (int *)((int *)0x0);
    iStack_60 = (int)(0);
  }
  local_70 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_178[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x2c;
  ((SCStr *)((SCStr *)&local_c4))->int_release();
  piVar5 = (int *)(local_c8);

  *(unsigned char *)((char *)&local_7c + 0) = 0x2d;
  if (local_c8 != (int *)0x0) {

    local_c8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_198[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x2e;
  ((SCStr *)((SCStr *)local_d4))->int_release();
  piVar5 = (int *)(local_d8);
  local_d4[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x2f;
  if (local_d8 != (int *)0x0) {

    local_d8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x30;
  ((SCStr *)((SCStr *)local_78))->int_release();
  local_78[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_1b8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x31;
  ((SCStr *)((SCStr *)local_e4))->int_release();
  piVar5 = (int *)(local_e8);
  local_e4[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x32;
  if (local_e8 != (int *)0x0) {

    local_e8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_ac);
  *(unsigned char *)((char *)&local_7c + 0) = 0x33;
  if (local_ac != (int *)0x0) {

    local_ac = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x34;
  ((SCStr *)((SCStr *)local_148))->int_release();
  local_148[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_1d8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x35;
  ((SCStr *)((SCStr *)local_f4))->int_release();
  piVar5 = (int *)(local_f8);
  local_f4[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x36;
  if (local_f8 != (int *)0x0) {

    local_f8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_1f8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x37;
  ((SCStr *)((SCStr *)local_104))->int_release();
  piVar5 = (int *)(local_108);
  local_104[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x38;
  if (local_108 != (int *)0x0) {

    local_108 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x39;
  ((SCStr *)((SCStr *)local_8c))->int_release();
  local_8c[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_218[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3a;
  ((SCStr *)((SCStr *)local_114))->int_release();
  piVar5 = (int *)(local_118);
  local_114[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3b;
  if (local_118 != (int *)0x0) {

    local_118 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(local_b4);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3c;
  if (local_b4 != (int *)0x0) {

    local_b4 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x3d;
  ((SCStr *)((SCStr *)local_150))->int_release();
  local_150[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_238[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3e;
  ((SCStr *)((SCStr *)local_124))->int_release();
  piVar5 = (int *)(local_128);
  local_124[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x3f;
  if (local_128 != (int *)0x0) {

    local_128 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  local_258[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&local_7c + 0) = 0x40;
  ((SCStr *)((SCStr *)local_134))->int_release();
  piVar5 = (int *)(local_138);
  local_134[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x41;
  if (local_138 != (int *)0x0) {

    local_138 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&local_7c + 0) = 0x42;
  ((SCStr *)((SCStr *)local_94))->int_release();
  local_94[0] = (undefined4)(0);
  *(unsigned char *)((char *)&local_7c + 0) = 0x43;
  ((SCStr *)((SCStr *)&local_c))->int_release();
  local_c = (undefined1 *)((undefined1 *)0x0);
  local_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&local_7c + 1)) << 8 | (uint)(0x44)));
  ((SCStr *)((SCStr *)local_a0))->int_release();
  local_a0[0] = (undefined1 *)((undefined1 *)0x0);

  if (local_bc != (int *)0x0) {
    (**(code **)(*local_bc + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


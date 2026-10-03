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
namespace std { template<class... A> static int _Xlength_error(A...) { return 0; } typedef int _Iterator_base0; }
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int getSingleton(A...) { return 0; } };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int int_start(A...) { return 0; } };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int format(A...) { return 0; } template<class... A> static int int_addref(A...) { return 0; } template<class... A> static int int_allocRep(A...) { return 0; } template<class... A> static int int_release(A...) { return 0; } static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
struct Array { char _pad; Array(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct DataSource { char _pad; DataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Dumping { char _pad; Dumping(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Elements { char _pad; Elements(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Entry { char _pad; Entry(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Group { char _pad; Group(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCAccountTransferAccountItem { char _pad; SCAccountTransferAccountItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCAggregateSearchDataSource { char _pad; SCAggregateSearchDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAggregateBrowseDataSource { char _pad; SCIAggregateBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAlarmMusic { char _pad; SCIAlarmMusic(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAlarmMusicBrowseItem { char _pad; SCIAlarmMusicBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIAreaManager { char _pad; SCIAreaManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIBadgeIndicatorSettingsProperty { char _pad; SCIBadgeIndicatorSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCICommittable { char _pad; SCICommittable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIDeviceSettingsDataSource { char _pad; SCIDeviceSettingsDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIOpValidateServiceCredentials { char _pad; SCIOpValidateServiceCredentials(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIReorderable { char _pad; SCIReorderable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISearchHistoryBrowseDataSource { char _pad; SCISearchHistoryBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISearchHistoryBrowseItem { char _pad; SCISearchHistoryBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISearchHistoryPageDataSource { char _pad; SCISearchHistoryPageDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISearchHistoryViewBrowseItem { char _pad; SCISearchHistoryViewBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISearchResultBrowseItem { char _pad; SCISearchResultBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISettingsBrowseItem { char _pad; SCISettingsBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISettingsProperty { char _pad; SCISettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISpinnerSettingsProperty { char _pad; SCISpinnerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIVoiceService { char _pad; SCIVoiceService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCMusicLibraryManagementDataSource { char _pad; SCMusicLibraryManagementDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCUri { char _pad; SCUri(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Size { char _pad; Size(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UrbanAirshipTagger { char _pad; UrbanAirshipTagger(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Visible { char _pad; Visible(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
typedef void *DS;
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ce8120(uint param_2,int param_3,int *param_4); template<class... A> int FUN_10ce8120(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce8340(int param_2); template<class... A> int FUN_10ce8340(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce8360(int param_2); template<class... A> int FUN_10ce8360(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce8380(undefined4 param_2); template<class... A> int FUN_10ce8380(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce8390(undefined4 param_2); template<class... A> int FUN_10ce8390(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce8490(undefined4 *param_2); template<class... A> int FUN_10ce8490(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce84b0(undefined4 *param_2); template<class... A> int FUN_10ce84b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce84c0(undefined4 *param_2); template<class... A> int FUN_10ce84c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce84d0(undefined4 *param_2); template<class... A> int FUN_10ce84d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce97c0(undefined4 *param_2); template<class... A> int FUN_10ce97c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ce97d0(undefined4 *param_2); template<class... A> int FUN_10ce97d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall FUN_10ceaa80(undefined4 param_2,SCStr *param_3); template<class... A> int FUN_10ceaa80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ceac10(int *param_2); template<class... A> int FUN_10ceac10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ceddd0(undefined4 *param_2); template<class... A> int FUN_10ceddd0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10cee0e0(int *param_2,undefined4 param_3); template<class... A> int FUN_10cee0e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cee2e0(undefined4 *param_2); template<class... A> int FUN_10cee2e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ceeb30(int *param_2); template<class... A> int FUN_10ceeb30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10ceebc0(int *param_2); template<class... A> int FUN_10ceebc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ceee70(int param_2); template<class... A> int FUN_10ceee70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10ceee90(undefined4 param_2); template<class... A> int FUN_10ceee90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cef480(undefined4 *param_2); template<class... A> int FUN_10cef480(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf0f00(int param_2); template<class... A> int FUN_10cf0f00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf12a0(int param_2,int param_3); template<class... A> int FUN_10cf12a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf1300(int param_2); template<class... A> int FUN_10cf1300(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cf31b0(int *param_2); template<class... A> int FUN_10cf31b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cf3210(int *param_2); template<class... A> int FUN_10cf3210(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cf3a00(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_10cf3a00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf3b90(int *param_2,int *param_3); template<class... A> int FUN_10cf3b90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cf4080(undefined4 *param_2); template<class... A> int FUN_10cf4080(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cf4360(int *param_2); template<class... A> int FUN_10cf4360(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cf43c0(undefined4 *param_2); template<class... A> int FUN_10cf43c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall FUN_10cf4410(undefined1 *param_2); template<class... A> int FUN_10cf4410(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10cf44c0(int *param_2); template<class... A> int FUN_10cf44c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10cf44e0(int *param_2); template<class... A> int FUN_10cf44e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cf4510(undefined4 *param_2); template<class... A> int FUN_10cf4510(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10cf4580(int param_2,int param_3); template<class... A> int FUN_10cf4580(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf4a30(undefined4 *param_2); template<class... A> int FUN_10cf4a30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf4a60(undefined4 *param_2); template<class... A> int FUN_10cf4a60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf4aa0(undefined4 *param_2); template<class... A> int FUN_10cf4aa0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf4ab0(undefined4 *param_2); template<class... A> int FUN_10cf4ab0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf4b10(undefined4 *param_2); template<class... A> int FUN_10cf4b10(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf4b20(undefined4 *param_2); template<class... A> int FUN_10cf4b20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf4b90(undefined4 *param_2); template<class... A> int FUN_10cf4b90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf4ba0(undefined4 *param_2); template<class... A> int FUN_10cf4ba0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10cf5b60(int *param_2); template<class... A> int FUN_10cf5b60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf6590(undefined2 param_2); template<class... A> int FUN_10cf6590(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cf6730(undefined4 param_2); template<class... A> int FUN_10cf6730(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf9050(int *param_2); template<class... A> int FUN_10cf9050(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10cf9090(int *param_2); template<class... A> int FUN_10cf9090(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10cfe760(undefined4 *param_2,undefined4 *param_3); template<class... A> int FUN_10cfe760(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d00b90(undefined4 *param_2); template<class... A> int FUN_10d00b90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d00c20(undefined4 param_2); template<class... A> int FUN_10d00c20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d00c30(undefined4 param_2); template<class... A> int FUN_10d00c30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d01300(undefined4 param_2); template<class... A> int FUN_10d01300(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d02380(int *param_2); template<class... A> int FUN_10d02380(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d02450(int *param_2,int param_3); template<class... A> int FUN_10d02450(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d02470(int param_2); template<class... A> int FUN_10d02470(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d02490(int param_2); template<class... A> int FUN_10d02490(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d03180(undefined4 *param_2); template<class... A> int FUN_10d03180(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d03bb0(undefined4 *param_2); template<class... A> int FUN_10d03bb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10d04580(int param_2); template<class... A> int FUN_10d04580(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d07d90(undefined4 param_2,int param_3); template<class... A> int FUN_10d07d90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d08000(int *param_2); template<class... A> int FUN_10d08000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d08020(int *param_2); template<class... A> int FUN_10d08020(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d08060(int *param_2); template<class... A> int FUN_10d08060(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d11510(int *param_2); template<class... A> int FUN_10d11510(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d11770(int *param_2); template<class... A> int FUN_10d11770(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d15b30(undefined1 param_2); template<class... A> int FUN_10d15b30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10d160c0(int param_2); template<class... A> int FUN_10d160c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d186c0(char param_2); template<class... A> int FUN_10d186c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d197f0(undefined4 *param_2); template<class... A> int FUN_10d197f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d1a1b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int FUN_10d1a1b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d1a200(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int FUN_10d1a200(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d1a250(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int FUN_10d1a250(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d1da40(int *param_2); template<class... A> int FUN_10d1da40(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d23900(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10d23900(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d23bb0(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10d23bb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d23e00(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10d23e00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d23e20(int *param_2); template<class... A> int FUN_10d23e20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d23e60(int *param_2); template<class... A> int FUN_10d23e60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d262d0(undefined4 param_2); template<class... A> int FUN_10d262d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d26360(undefined4 param_2); template<class... A> int FUN_10d26360(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d263f0(undefined4 param_2); template<class... A> int FUN_10d263f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10d27d30(int *param_2); template<class... A> int FUN_10d27d30(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10d27d50(int *param_2); template<class... A> int FUN_10d27d50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d29160(int param_2); template<class... A> int FUN_10d29160(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d29330(int *param_2); template<class... A> int FUN_10d29330(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d29430(undefined4 *param_2); template<class... A> int FUN_10d29430(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d298c0(undefined4 *param_2); template<class... A> int FUN_10d298c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d2d7a0(int *param_2); template<class... A> int FUN_10d2d7a0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d2d7e0(int *param_2); template<class... A> int FUN_10d2d7e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d2d800(int *param_2); template<class... A> int FUN_10d2d800(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d2d840(int *param_2); template<class... A> int FUN_10d2d840(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d2d8c0(int *param_2); template<class... A> int FUN_10d2d8c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d2d900(int *param_2); template<class... A> int FUN_10d2d900(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d2dcc0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int FUN_10d2dcc0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d2dee0(undefined4 *param_2); template<class... A> int FUN_10d2dee0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d30290(undefined4 *param_2); template<class... A> int FUN_10d30290(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d30940(int param_2); template<class... A> int FUN_10d30940(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d30970(uint param_2); template<class... A> int FUN_10d30970(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d3cd60(int *param_2); template<class... A> int FUN_10d3cd60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d3cda0(int *param_2); template<class... A> int FUN_10d3cda0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d3d370(undefined4 param_2); template<class... A> int FUN_10d3d370(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d3dbb0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int FUN_10d3dbb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d422f0(int *param_2); template<class... A> int FUN_10d422f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d42310(int *param_2); template<class... A> int FUN_10d42310(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d42330(int *param_2); template<class... A> int FUN_10d42330(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d49f00(int *param_2); template<class... A> int FUN_10d49f00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d49f80(int *param_2); template<class... A> int FUN_10d49f80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d4a000(int *param_2); template<class... A> int FUN_10d4a000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d4a3d0(undefined4 *param_2); template<class... A> int FUN_10d4a3d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d4a480(undefined4 *param_2); template<class... A> int FUN_10d4a480(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d4a4b0(undefined4 *param_2); template<class... A> int FUN_10d4a4b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d4a4e0(undefined4 *param_2); template<class... A> int FUN_10d4a4e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d4c310(int *param_2); template<class... A> int FUN_10d4c310(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d52860(int *param_2); template<class... A> int FUN_10d52860(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d52a00(undefined4 param_2); template<class... A> int FUN_10d52a00(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d52b20(undefined4 param_2); template<class... A> int FUN_10d52b20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d53210(undefined4 param_2); template<class... A> int FUN_10d53210(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d53420(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10d53420(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d53440(undefined4 param_2); template<class... A> int FUN_10d53440(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d53450(undefined4 param_2); template<class... A> int FUN_10d53450(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10d54000(int *param_2); template<class... A> int FUN_10d54000(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10d54020(int *param_2); template<class... A> int FUN_10d54020(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall FUN_10d54040(int param_2); template<class... A> int FUN_10d54040(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10d54270(uint param_2); template<class... A> int FUN_10d54270(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d549e0(undefined4 *param_2); template<class... A> int FUN_10d549e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d54b70(undefined4 *param_2); template<class... A> int FUN_10d54b70(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10d55ca0(uint param_2); template<class... A> int FUN_10d55ca0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d56da0(int param_2); template<class... A> int FUN_10d56da0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d58840(undefined4 param_2); template<class... A> int FUN_10d58840(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d58ca0(int *param_2); template<class... A> int FUN_10d58ca0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d5b3f0(undefined4 param_2); template<class... A> int FUN_10d5b3f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d5b420(undefined4 param_2); template<class... A> int FUN_10d5b420(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d5da20(undefined4 param_2); template<class... A> int FUN_10d5da20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d5dae0(undefined4 *param_2); template<class... A> int FUN_10d5dae0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d5db50(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10d5db50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall FUN_10d5e8b0(uint param_2); template<class... A> int FUN_10d5e8b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d602c0(undefined4 param_2); template<class... A> int FUN_10d602c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d68270(undefined4 param_2,undefined4 *param_3); template<class... A> int FUN_10d68270(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d68290(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10d68290(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d68390(undefined4 *param_2,undefined1 *param_3); template<class... A> int FUN_10d68390(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d683b0(undefined4 *param_2); template<class... A> int FUN_10d683b0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d683e0(int *param_2); template<class... A> int FUN_10d683e0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d68400(int *param_2); template<class... A> int FUN_10d68400(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d689d0(int *param_2); template<class... A> int FUN_10d689d0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d689f0(int *param_2); template<class... A> int FUN_10d689f0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d68a20(undefined4 param_2); template<class... A> int FUN_10d68a20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d68a80(undefined4 param_2); template<class... A> int FUN_10d68a80(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d68a90(undefined4 param_2); template<class... A> int FUN_10d68a90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d68b20(undefined4 param_2); template<class... A> int FUN_10d68b20(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d69e50(int *param_2); template<class... A> int FUN_10d69e50(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10d69e90(int *param_2); template<class... A> int FUN_10d69e90(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall FUN_10d69eb0(int *param_2); template<class... A> int FUN_10d69eb0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d6ab60(int param_2); template<class... A> int FUN_10d6ab60(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d6abf0(int *param_2); template<class... A> int FUN_10d6abf0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall FUN_10d6bba0(undefined4 *param_2); template<class... A> int FUN_10d6bba0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall FUN_10d741c0(int *param_2); template<class... A> int FUN_10d741c0(A...); /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall FUN_10d74620(undefined4 param_2); template<class... A> int FUN_10d74620(A...); };

extern int FUN_10cf58b0(...);
extern __declspec(dllimport) int _Xlength_error(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int format(...);
extern int getSingleton(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int int_start(...);
extern int op_ctor(...);
extern int op_inc(...);
extern int op_lt(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101bdde0(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102036c0(...);
extern int thunk_FUN_10203970(...);
extern int thunk_FUN_10207220(...);
extern int thunk_FUN_1020a5b0(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_104da760(...);
extern int thunk_FUN_10564950(...);
extern int thunk_FUN_10564c90(...);
extern int thunk_FUN_1057b1f0(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_106e09f0(...);
extern int thunk_FUN_10c21f70(...);
extern int thunk_FUN_10ce2c30(...);
extern int thunk_FUN_10ce3040(...);
extern int thunk_FUN_10ce3ca0(...);
extern int thunk_FUN_10ce3cb0(...);
extern int thunk_FUN_10ce5db0(...);
extern int thunk_FUN_10ce6450(...);
extern int thunk_FUN_10cede00(...);
extern int thunk_FUN_10cf1350(...);
extern int thunk_FUN_10cf3e20(...);
extern int thunk_FUN_10cf4680(...);
extern int thunk_FUN_10cf4bb0(...);
extern int thunk_FUN_10cf6c80(...);
extern int thunk_FUN_10cf71a0(...);
extern int thunk_FUN_10cff050(...);
extern int thunk_FUN_10cffea0(...);
extern int thunk_FUN_10d004d0(...);
extern int thunk_FUN_10d25120(...);
extern int thunk_FUN_10d25630(...);
extern int thunk_FUN_10d2d980(...);
extern int thunk_FUN_10d52b40(...);
extern int thunk_FUN_10d53a40(...);
extern int thunk_FUN_10d53f30(...);
extern int thunk_FUN_10d5b450(...);
extern int thunk_FUN_10d5bca0(...);
extern int thunk_FUN_10d5cd60(...);
extern int thunk_FUN_10d5d430(...);
extern int thunk_FUN_10d5d950(...);
extern int thunk_FUN_10d5e270(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b7150(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_SCAddPlaylistDescriptor;
extern int ghidra_vftable_SCAggregateHelperCB;
extern int ghidra_vftable_SCAlarmMusicItem;
extern int ghidra_vftable_SCAllNodeBrowseItemBase;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAsyncBrowseDataSource;
extern int ghidra_vftable_SCBooleanSettingsItemBase;
extern int ghidra_vftable_SCDateTimeManagerEventSinkInternal;
extern int ghidra_vftable_SCHistoryDeleteAllActionDescriptor;
extern int ghidra_vftable_SCHistorySignInActionDescriptor;
extern int ghidra_vftable_SCIAggregateBrowseDataSource;
extern int ghidra_vftable_SCIAlarmMusic;
extern int ghidra_vftable_SCIAlarmMusicBrowseItem;
extern int ghidra_vftable_SCIBadgeIndicatorSettingsProperty;
extern int ghidra_vftable_SCIBooleanSettingsProperty;
extern int ghidra_vftable_SCICommittable;
extern int ghidra_vftable_SCIDeviceSettingsDataSource;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpValidateServiceCredentials;
extern int ghidra_vftable_SCIReorderable;
extern int ghidra_vftable_SCISearchHistoryBrowseDataSource;
extern int ghidra_vftable_SCISearchHistoryBrowseItem;
extern int ghidra_vftable_SCISearchHistoryPageDataSource;
extern int ghidra_vftable_SCISearchHistoryViewBrowseItem;
extern int ghidra_vftable_SCISearchResultBrowseItem;
extern int ghidra_vftable_SCISettingsBrowseItem;
extern int ghidra_vftable_SCISettingsProperty;
extern int ghidra_vftable_SCISpinnerSettingsProperty;
extern int ghidra_vftable_SCIndexManagerEventSinkInternal;
extern int ghidra_vftable_SCMediaServerBrowseDataSource;
extern int ghidra_vftable_SCMultiProductWizardData_Data;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCPlayMenuPlayNowInstantTVDescriptor;
extern int ghidra_vftable_SCPlayMenuPlayNowTVDescriptor;
extern int ghidra_vftable_SCPlayNowTVDescriptor;
extern int ghidra_vftable_SCScheduleIndexUpdateSettingsItem;
extern int ghidra_vftable_SCSearchHistoryClearActionDescriptor;
extern int ghidra_vftable_SCSearchHistoryClearActionFactory;
extern int ghidra_vftable_SCSettingsItemBase;
extern int ghidra_vftable_SCShareManagerEventSink;
extern int ghidra_vftable_SCSingleProductWizardData_Data;
extern int ghidra_vftable_SCStaticBrowseItem;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCUpdateMusicIndexItem;
extern int ghidra_vftable_SCViewContributingArtistsSettingsItem;
extern int ghidra_vftable_SCVoiceBetaFeedbackBrowseItem;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_4;
extern int uStack_8;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_115035c0[];
extern undefined1 LAB_11503620[];
extern undefined1 LAB_11503650[];
extern undefined1 LAB_115a0890[];
extern undefined1 LAB_116fcb20[];
extern undefined1 LAB_1170bf40[];
extern undefined1 LAB_11710b20[];
extern undefined1 LAB_117125d0[];
extern int *stack0xfffffffc;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce8100(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce8100(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce8110(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce8110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce81a0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce81a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce81b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce81b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce81c0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce81c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce81d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce81d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce81e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce81e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce8260(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce8260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce8320(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce8320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce8330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce8330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce84e0(int param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce84e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ce9340(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ce9340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ce93b0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ce93b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce9490(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce9490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce94c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce94c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce96d0(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce96d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce9720(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce9720(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce9770(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce9770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceac30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceac30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceac40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceac40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ceae50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ceae50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10ceb3f0(float *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10ceb3f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb400(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb410(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb420(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb430(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cebd30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cebd30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cebd60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cebd60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cec7a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cec7a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cee0c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cee0c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cee0d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cee0d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cee190(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cee190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cee210(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cee210(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cee220(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cee220(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cee230(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cee230(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cee280(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cee280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cee350(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cee350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cee360(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cee360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceec20(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceec20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceec30(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceec30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceec40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceec40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceedd0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceedd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceede0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceede0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceedf0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceedf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceee00(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceee00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceee10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceee10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cef4d0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cef4d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cefa40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cefa40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cefa60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cefa60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cefc10(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cefc10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cf0920(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cf0920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf0b80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf0b80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf0bb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf0bb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ __time64_t FUN_10cf1000(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ __time64_t FUN_10cf1000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cf1290(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cf1290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf2c10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf2c10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf2d40(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf2d40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cf2d50(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cf2d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf2d60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf2d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf2db0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf2db0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf3270(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf3270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf3280(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf3280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf34b0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf34b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf3a20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf3a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf3a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf3a40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3a60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3a60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3a70(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3c30(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3c30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3c40(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3c40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3c50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3c60(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3c60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3c80(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3c80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cf3c90(int *param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cf3c90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3d00(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3d00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3d10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3f90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3f90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3fa0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3fb0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3fb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3fc0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3fc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf4500(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf4500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10cf4640(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf4640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cf4a20(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf4a20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cf50f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf50f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10cf5240(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf5240(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cf5320(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf5320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cf53e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cf53e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf5480(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf5480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf5650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf5650(...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10cf58b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf5aa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf5aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf5c20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf5c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf5c30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf5c30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cf61c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cf61c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf64f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf64f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf65e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf65e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf6f40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf6f40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf73d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf73d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf8c50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf8c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf8d60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf8d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cfb1f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cfb1f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cfb7e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cfb7e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cfcd10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cfcd10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cfcd20(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cfcd20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cfe540(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cfe540(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cfea50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cfea50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cfea60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cfea60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cfea70(int param_1,int param_2,int param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cfea70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10cff1e0(int *param_1,int *param_2,int *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10cff1e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cff260(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cff260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cffe90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cffe90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d00060(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d00060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d001f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d001f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d006f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d006f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d00700(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d00700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d00740(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d00740(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d00780(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d00780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d00790(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d00790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d007a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d007a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d008c0(int param_1,int param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d008c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00a00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00a00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00a50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00a50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00a80(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00ab0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d01640(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d01640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d01650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d01650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d01820(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d01820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d021a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d021a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d021b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d021b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d023e0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d023e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d023f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d023f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02400(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02410(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02420(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02430(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02440(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d02f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d02f80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02fd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d02fe0(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d02fe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d032c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d032c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d03aa0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d03aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d03ac0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d03ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d05500(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d05500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d05510(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d05510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d06d10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d06d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d06d20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d06d20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d06d30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d06d30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07850(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07880(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d078b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d078b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d078e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d078e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d07d80(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d07d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d08580(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d08580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d085a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d085a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d09160(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d09160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d09900(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d09900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d09910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d09910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d09920(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d09920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d0dc30(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d0dc30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d0e030(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d0e030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d102a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d102a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d102b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d102b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d102c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d102c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d10890(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d10890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d118f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d118f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d11900(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d11900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d11910(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d11910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11920(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11950(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11950(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11d50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11d50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11d60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11d60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11d70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d125b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d125b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d125d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d125d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d12890(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d12890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d12dc0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d12dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d13f90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d13f90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d13fa0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d13fa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d13fb0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d13fb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d14010(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d14010(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d14030(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d14030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d14db0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d14db0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d14dc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d14dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d150c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d150c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d150f0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d150f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d15340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d15340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d15360(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d15360(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d15390(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d15390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d153a0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d153a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d153e0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d153e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d15420(undefined4 param_1,int *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d15420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d154b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d154b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d154d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d154d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d154e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d154e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d15b70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d15b70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d16080(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d16080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d160a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d160a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d16610(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d16610(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16640(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16650(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d16f20(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d16f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16f70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16f70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16f90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16f90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d17030(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d17030(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d18620(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d18620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d186b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d186b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d187b0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d187b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d194f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d194f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d19520(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d19520(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d19770(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d19770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d19ae0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d19ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1abe0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1abe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1abf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1abf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac00(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1beb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1beb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d440(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d450(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d460(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d470(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d480(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d490(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d5f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d5f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d620(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d650(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d680(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d680(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d6b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d6b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d6e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d1df50(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d1df50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d20200(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d20200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d22a90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d22a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d23640(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d23640(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d238e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d238e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d239d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d239d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d239f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d239f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d23bd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d23bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d23be0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d23be0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d23ed0(SCStr *param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d23ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d23ef0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d23ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24170(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24180(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24180(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24190(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24510(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24530(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24530(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10d24940(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10d24940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24b50(SCStr *param_1,SCStr *param_2,SCStr *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25270(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25380(int param_1,int param_2,int param_3,SCStr *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d25430(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d25430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10d25940(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10d25940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d259d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d259d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d259e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d259e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25a70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25a70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25a80(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25a80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25a90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25a90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25aa0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25ab0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25ad0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25ad0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25ae0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25ae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b00(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b20(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b30(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b40(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25bd0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25be0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25be0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25c70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25c70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d260e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d260e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d26170(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d26170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d261a0(int param_1,int param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d261a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26250(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26270(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26270(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d262f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d262f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d26300(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d26300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d26310(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d26310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26400(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d26420(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d26420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26430(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d27490(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d27490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d274b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d274b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d27d70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d27d70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d27d80(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d27d80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d27d90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d27d90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d27da0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d27da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d27db0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d27db0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d288a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d288a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d288f0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d288f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d28da0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d28da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e40(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e50(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e80(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28ea0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28ea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28eb0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28eb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d29150(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d29150(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10d291d0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10d291d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d29310(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d29310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d29320(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d29320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d29440(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d29440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d29450(undefined1 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d29450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d29460(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d29460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10d294d0(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10d294d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d29620(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d29620(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d29670(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d29670(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2ac90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2ac90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2aca0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2aca0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2ae60(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2ae60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d2b0e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d2b0e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d2b4c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d2b4c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d2b4f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d2b4f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2d970(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2d970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2dc10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2dc10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2dc20(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2dc20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2dd10(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2dd10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2dd20(int *param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2dd20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d2dd40(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2dd40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d2dd60(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d2dd60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d2dea0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d2dea0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d2df50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d2df50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d30190(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d30190(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d302c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d302c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d302d0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d302d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d302e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d302e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d302f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d302f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d30300(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d30300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d30310(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d30310(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d30ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d30ac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d381e0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d381e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d39e30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d39e30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d39fc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d39fc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d39ff0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d39ff0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3a910(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3a910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d3abf0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d3abf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10d3ac20(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10d3ac20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d3ac40(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d3ac40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d3b410(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d3b410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3cb70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3cb70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d3cde0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d3cde0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3cdf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3cdf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce90(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3d3b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3d3b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3d3c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3d3c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e050(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e050(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e070(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e080(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e280(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e280(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e430(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e430(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e450(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d3e5d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d3e5d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d3e5e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d3e5e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d3ede0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d3ede0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d3ff80(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d3ff80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d41c50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d41c50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d41c60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d41c60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d41c70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d41c70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d420e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d420e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d42110(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d42110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d42140(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d42140(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d423a0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d423a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d423e0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d423e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d43800(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d43800(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d44000(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d44000(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d44020(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d44020(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d499e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d499e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d49ef0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d49ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d4a2c0(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d4a2c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d4a300(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d4a300(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d4a340(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d4a340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d4a380(undefined4 *param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d4a380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d4a3c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d4a3c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4a510(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4a510(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4a5e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4a5e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4a600(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4a600(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4ad50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4ad50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4ad60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4ad60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c450(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c450(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d4c460(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d4c460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d4c470(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d4c470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c480(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c490(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c4a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c4a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c4b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c4b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d8b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d8b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d8d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d8d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d8f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d8f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d910(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d910(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d930(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d930(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d507b0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d507b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d507c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d507c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d51170(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d51170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51320(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51350(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51380(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d513b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d513b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d513e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d513e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51410(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51440(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51440(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d515c0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d515c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51790(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d51f90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d51f90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d52340(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d52340(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d52780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d52780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d529d0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d529d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d52e50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d52e50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d52ec0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d52ec0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d530c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d530c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d530d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d530d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d530f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d530f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d53200(undefined4 param_1,SCStr *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d53200(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d53250(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d53250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d53260(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d53260(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d53290(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d53290(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d532c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d532c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d533d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d533d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53460(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53460(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d53480(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d53480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53490(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53940(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53b30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53b30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54060(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54060(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54070(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10d54080(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10d54080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10d54090(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10d54090(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d54380(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d54380(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54560(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54570(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54570(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54580(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54580(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54590(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d545e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d545e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d545f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d545f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10d54960(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10d54960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d549f0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d549f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d54aa0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d54aa0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d55d10(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d55d10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d57070(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d57070(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d57080(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d57080(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d58c20(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d58c20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d58de0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d58de0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d58ed0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d58ed0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d58ef0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d58ef0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d59790(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d59790(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d597a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d597a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d597b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d597b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d5a500(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d5a500(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d5a7c0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d5a7c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d5a7d0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d5a7d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5a980(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5a980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5acb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5acb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5ace0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5ace0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5b2d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5b2d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5b2f0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5b2f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5b770(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5b770(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5b780(int param_1,int param_2,int param_3,undefined4 param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5b780(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10d5cd50(undefined1 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10d5cd50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5cf80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5cf80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5d6e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5d6e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5da10(undefined4 param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5da10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5da60(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5da60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5da70(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5da70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5da80(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5da80(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5da90(int param_1,int param_2,undefined4 param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5da90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5dac0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5dac0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5db70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5db70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5db90(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5db90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5dba0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5dba0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5dd60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5dd60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5e4d0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5e4d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e550(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e550(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e560(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e560(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9d0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9e0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d5ea00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5ea00(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5ea10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5ea10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d5efc0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d5efc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5fbb0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5fbb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5fc40(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5fc40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5fc50(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5fc50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d602a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d602a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d602b0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d602b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d60390(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d60390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d603c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d603c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10d61650(SCStr *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10d61650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d635f0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d635f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63d90(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63d90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63da0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63da0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63db0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63db0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63dc0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63dc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63e40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63e40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63e70(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63e70(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f20(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f20(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f40(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f40(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f50(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d64170(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d64170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d641a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d641a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64590(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64590(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64710(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64710(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64730(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64730(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64980(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d64bc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d64bc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d64bd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d64bd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d64be0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d64be0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d64bf0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d64bf0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670c0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670d0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670d0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670e0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d67160(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d67160(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d67170(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d67170(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d67320(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d67320(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d67330(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d67330(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d677c0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d677c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d677f0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d677f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d67820(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d67820(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68250(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d682b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d682b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68470(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68470(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68490(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68490(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d684a0(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d684a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d684b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d684b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68650(undefined4 param_1,undefined4 param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68650(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d686f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d686f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10d68700(int param_1,uint *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10d68700(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68840(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68850(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68860(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68870(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68880(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68890(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68920(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68920(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68940(undefined4 *param_1,undefined4 *param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68940(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68960(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68960(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68970(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68970(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68980(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68980(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d68990(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d68990(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d689a0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d689a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68a10(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68a10(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68b30(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68b30(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d68b50(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d68b50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68b60(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68b60(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68bb0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68bb0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d69840(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d69840(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d69900(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d69900(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d69fc0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d69fc0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d69fd0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d69fd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d6a7e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d6a7e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d6a830(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d6a830(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a850(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a850(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a860(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a870(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a870(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a880(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a880(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a890(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a890(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a8a0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a8a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a8b0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a8b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a8c0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a8c0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d6abd0(unsigned int recovered_unused_stack_0);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d6abd0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6abe0(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6abe0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10d6ad50(uint param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10d6ad50(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d6ba90(undefined4 param_1,int param_2,int param_3);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d6ba90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d6bae0(int param_1,int param_2);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d6bae0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d6bb90(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d6bb90(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d6f0b0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d6f0b0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d6f2a0(int *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d6f2a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d6f370(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d6f370(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d6f390(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d6f390(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d6f3a0(void);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d6f3a0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d71350(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d71350(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d73860(int param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d73860(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d743f0(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d743f0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d74400(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d74400(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d74410(undefined4 param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d74410(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d74420(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d74420(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d74480(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d74480(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d744e0(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d744e0(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d74600(undefined4 *param_1);
extern /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d74600(...);
// Reference entry 10ce80b0; body size 3 bytes.
#line 1 "ENTRY_10ce80b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce80c0; body size 3 bytes.
#line 1 "ENTRY_10ce80c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce80d0; body size 3 bytes.
#line 1 "ENTRY_10ce80d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce80e0; body size 3 bytes.
#line 1 "ENTRY_10ce80e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce80f0; body size 3 bytes.
#line 1 "ENTRY_10ce80f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce8100; body size 4 bytes.
#line 1 "ENTRY_10ce8100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce8100(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10ce8110; body size 4 bytes.
#line 1 "ENTRY_10ce8110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce8110(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10ce8120; body size 92 bytes.
#line 1 "ENTRY_10ce8120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ce8120(uint param_2,int param_3,int *param_4)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_3 + 4));
  *(int*)(param_1 + 8) = (int)(*(int *)(param_1 + 8) + 1);
  *param_4 = (int)(param_3);
  param_4[1] = (int)((int)puVar2);
  *puVar2 = (undefined4)(param_4);
  *(int**)(param_3 + 4) = (int *)(param_4);
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 0x18) & param_2) * 8));
  if ((int)(*piVar1) == *(int *)(param_1 + 4)) {
    *piVar1 = (int)((int)param_4);
    piVar1[1] = (int)((int)param_4);
    return (int *)(param_4);
  }
  if (*piVar1 == param_3) {
    *piVar1 = (int)((int)param_4);
    return (int *)(param_4);
  }
  if ((undefined4 *)piVar1[1] == (undefined4 *)((puVar2))) {
    piVar1[1] = (int)((int)param_4);
  }
  return (int *)(param_4);
}


// Reference entry 10ce81a0; body size 7 bytes.
#line 1 "ENTRY_10ce81a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce81a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10ce81b0; body size 7 bytes.
#line 1 "ENTRY_10ce81b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce81b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10ce81c0; body size 13 bytes.
#line 1 "ENTRY_10ce81c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce81c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ce81d0; body size 3 bytes.
#line 1 "ENTRY_10ce81d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce81d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce81e0; body size 3 bytes.
#line 1 "ENTRY_10ce81e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce81e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce8260; body size 3 bytes.
#line 1 "ENTRY_10ce8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce8260(void)

{
  return;
}


// Reference entry 10ce8320; body size 11 bytes.
#line 1 "ENTRY_10ce8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce8320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ce8330; body size 6 bytes.
#line 1 "ENTRY_10ce8330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce8330(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10ce8340; body size 26 bytes.
#line 1 "ENTRY_10ce8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce8340(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10ce8360; body size 26 bytes.
#line 1 "ENTRY_10ce8360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce8360(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10ce8380; body size 10 bytes.
#line 1 "ENTRY_10ce8380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce8380(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10ce8390; body size 10 bytes.
#line 1 "ENTRY_10ce8390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce8390(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10ce8490; body size 14 bytes.
#line 1 "ENTRY_10ce8490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce8490(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4));
  return;
}


// Reference entry 10ce84b0; body size 13 bytes.
#line 1 "ENTRY_10ce84b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce84b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10ce84c0; body size 12 bytes.
#line 1 "ENTRY_10ce84c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce84c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ce84d0; body size 11 bytes.
#line 1 "ENTRY_10ce84d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce84d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ce84e0; body size 43 bytes.
#line 1 "ENTRY_10ce84e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce84e0(int param_1,int param_2,int param_3)

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
  *(int**)(param_1 + 4) = (int *)(piVar2);
  *(int**)(param_3 + 4) = (int *)(piVar1);
  *(int**)(param_2 + 4) = (int *)(piVar3);
  return;
}


// Reference entry 10ce9340; body size 87 bytes.
#line 1 "ENTRY_10ce9340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ce9340(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5d1745e) {
    param_1 = (uint)(param_1 * 0x2c);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10ce93b0; body size 87 bytes.
#line 1 "ENTRY_10ce93b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ce93b0(uint param_1)

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
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10ce9490; body size 4 bytes.
#line 1 "ENTRY_10ce9490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce9490(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10ce94c0; body size 68 bytes.
#line 1 "ENTRY_10ce94c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce94c0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_10ce5db0(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10ce6450(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10ce96d0; body size 52 bytes.
#line 1 "ENTRY_10ce96d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce96d0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x2c);
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


// Reference entry 10ce9720; body size 55 bytes.
#line 1 "ENTRY_10ce9720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce9720(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x2c);
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


// Reference entry 10ce9770; body size 61 bytes.
#line 1 "ENTRY_10ce9770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce9770(int param_1,int param_2)

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


// Reference entry 10ce97c0; body size 12 bytes.
#line 1 "ENTRY_10ce97c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce97c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ce97d0; body size 11 bytes.
#line 1 "ENTRY_10ce97d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ce97d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ceaa80; body size 54 bytes.
#line 1 "ENTRY_10ceaa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::FUN_10ceaa80(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  if ((*(char **)(param_1 + 0x14) == (char *)((0x0))) || (**(char **)(param_1 + 0x14) == '\0')) {
    ((SCStr *)(param_1))->format((char *)(param_1 + 0x14));
  }
  ((SCStr *)(param_3))->op_ctor(param_1 + 0x14);
  return (SCStr *)(param_3);
}


// Reference entry 10ceac10; body size 25 bytes.
#line 1 "ENTRY_10ceac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ceac10(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x18));
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10ceac30; body size 4 bytes.
#line 1 "ENTRY_10ceac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceac30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ceac40; body size 4 bytes.
#line 1 "ENTRY_10ceac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceac40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ceae50; body size 6 bytes.
#line 1 "ENTRY_10ceae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ceae50(void)

{
  return (char *)("SCIAreaManager");
}


// Reference entry 10ceb3f0; body size 3 bytes.
#line 1 "ENTRY_10ceb3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10ceb3f0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10ceb400; body size 6 bytes.
#line 1 "ENTRY_10ceb400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ceb400(void)

{
  return (undefined4)(0x5d1745d);
}


// Reference entry 10ceb410; body size 6 bytes.
#line 1 "ENTRY_10ceb410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ceb410(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ceb420; body size 6 bytes.
#line 1 "ENTRY_10ceb420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ceb420(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ceb430; body size 6 bytes.
#line 1 "ENTRY_10ceb430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ceb430(void)

{
  return (undefined4)(0x5d1745d);
}


// Reference entry 10cebd30; body size 28 bytes.
#line 1 "ENTRY_10cebd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cebd30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cebd60; body size 28 bytes.
#line 1 "ENTRY_10cebd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cebd60(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cec7a0; body size 9 bytes.
#line 1 "ENTRY_10cec7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cec7a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10ceddd0; body size 39 bytes.
#line 1 "ENTRY_10ceddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ceddd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10cee0c0; body size 3 bytes.
#line 1 "ENTRY_10cee0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cee0c0(void)

{
  return;
}


// Reference entry 10cee0d0; body size 5 bytes.
#line 1 "ENTRY_10cee0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cee0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cee0e0; body size 130 bytes.
#line 1 "ENTRY_10cee0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10cee0e0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (**(code **)(*param_1 + 4))();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)0x0) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)0x0) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)((0x0))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 10cee190; body size 28 bytes.
#line 1 "ENTRY_10cee190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cee190(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  piVar1 = (int *)((int *)param_3[1]);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
                    
                    
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}


// Reference entry 10cee210; body size 5 bytes.
#line 1 "ENTRY_10cee210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cee210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cee220; body size 5 bytes.
#line 1 "ENTRY_10cee220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cee220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cee230; body size 54 bytes.
#line 1 "ENTRY_10cee230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cee230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cee280; body size 70 bytes.
#line 1 "ENTRY_10cee280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cee280(undefined4 *param_1)

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
  return (undefined4 *)(param_1);
}


// Reference entry 10cee2e0; body size 32 bytes.
#line 1 "ENTRY_10cee2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cee2e0(undefined4 *param_2)
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


// Reference entry 10cee350; body size 10 bytes.
#line 1 "ENTRY_10cee350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cee350(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10cee360; body size 12 bytes.
#line 1 "ENTRY_10cee360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cee360(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ceeb30; body size 67 bytes.
#line 1 "ENTRY_10ceeb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ceeb30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_102a3ea0(param_1,*(undefined4 *)(iVar1 + 4));
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
  }
  return (int *)(param_1);
}


// Reference entry 10ceebc0; body size 67 bytes.
#line 1 "ENTRY_10ceebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10ceebc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_102a3ea0(param_1,*(undefined4 *)(iVar1 + 4));
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
  }
  return (int *)(param_1);
}


// Reference entry 10ceec20; body size 7 bytes.
#line 1 "ENTRY_10ceec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ceec20(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10ceec30; body size 8 bytes.
#line 1 "ENTRY_10ceec30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ceec30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ceec40; body size 4 bytes.
#line 1 "ENTRY_10ceec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceec40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ceedd0; body size 8 bytes.
#line 1 "ENTRY_10ceedd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ceedd0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10ceede0; body size 3 bytes.
#line 1 "ENTRY_10ceede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceede0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ceedf0; body size 3 bytes.
#line 1 "ENTRY_10ceedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceedf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ceee00; body size 4 bytes.
#line 1 "ENTRY_10ceee00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceee00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10ceee10; body size 7 bytes.
#line 1 "ENTRY_10ceee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ceee10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10ceee70; body size 26 bytes.
#line 1 "ENTRY_10ceee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ceee70(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1));
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10ceee90; body size 10 bytes.
#line 1 "ENTRY_10ceee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10ceee90(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10cef480; body size 59 bytes.
#line 1 "ENTRY_10cef480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cef480(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_10cede00(puVar1,param_2);
  return;
}


// Reference entry 10cef4d0; body size 63 bytes.
#line 1 "ENTRY_10cef4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cef4d0(int param_1)

{
  if (param_1 == 1) {
    return (undefined4)(1);
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      thunk_FUN_112af4e0("connected_partners_cache",1,"No bit flag mapping for SCIVoiceService %i",
                         param_1);
    }
    return (undefined4)(0);
  }
  return (undefined4)(2);
}


// Reference entry 10cefa40; body size 25 bytes.
#line 1 "ENTRY_10cefa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cefa40(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_10c21f70(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10cefa60; body size 16 bytes.
#line 1 "ENTRY_10cefa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cefa60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10cefc10; body size 4 bytes.
#line 1 "ENTRY_10cefc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cefc10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cf0920; body size 7 bytes.
#line 1 "ENTRY_10cf0920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cf0920(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10cf0b80; body size 28 bytes.
#line 1 "ENTRY_10cf0b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf0b80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cf0bb0; body size 38 bytes.
#line 1 "ENTRY_10cf0bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf0bb0(int param_1)

{
  *(undefined4*)(param_1 + 0x118) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x11c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x120) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x125) = (undefined1)(0);
  return;
}


// Reference entry 10cf0f00; body size 15 bytes.
#line 1 "ENTRY_10cf0f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf0f00(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x30) != (int)(param_2)) {
    *(int*)(param_1 + 0x30) = (int)(param_2);
  }
  return;
}


// Reference entry 10cf1000; body size 12 bytes.
#line 1 "ENTRY_10cf1000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

__time64_t FUN_10cf1000(void)

{
  __time64_t _Var1;
  
  _Var1 = (__time64_t)(_time64((__time64_t *)0x0));
  return _Var1;
}


// Reference entry 10cf1290; body size 7 bytes.
#line 1 "ENTRY_10cf1290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cf1290(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10cf12a0; body size 68 bytes.
#line 1 "ENTRY_10cf12a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf12a0(int param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    piVar1 = (int *)(*(int **)(param_1 + 4));
    if ((int *)(piVar1) == (int *)0x0) {
      thunk_FUN_10cf1350();
      piVar1 = (int *)(*(int **)(param_1 + 4));
      if ((int *)(piVar1) == (int *)0x0) {
        return;
      }
    }
                    
                    
    (**(code **)(*piVar1 + 0x14))();
    return;
  }
  thunk_FUN_112af4e0("UrbanAirshipTagger",1,
                     "UrbanAirshipTagger - addAndRemoveUserTags called with null tag lists");
  return;
}


// Reference entry 10cf1300; body size 61 bytes.
#line 1 "ENTRY_10cf1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf1300(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 == 0) {
    thunk_FUN_112af4e0("UrbanAirshipTagger",1,
                       "UrbanAirshipTagger - addUserTags called with null tag list");
    return;
  }
  piVar1 = (int *)(*(int **)(param_1 + 4));
  if ((int *)(piVar1) == (int *)0x0) {
    thunk_FUN_10cf1350();
    piVar1 = (int *)(*(int **)(param_1 + 4));
    if ((int *)(piVar1) == (int *)0x0) {
      return;
    }
  }
                    
                    
  (**(code **)(*piVar1 + 0x18))();
  return;
}


// Reference entry 10cf2c10; body size 5 bytes.
#line 1 "ENTRY_10cf2c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf2c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf2d40; body size 3 bytes.
#line 1 "ENTRY_10cf2d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf2d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf2d50; body size 10 bytes.
#line 1 "ENTRY_10cf2d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cf2d50(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10cf2d60; body size 61 bytes.
#line 1 "ENTRY_10cf2d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf2d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMultiProductWizardData_Data);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf2db0; body size 68 bytes.
#line 1 "ENTRY_10cf2db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf2db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSingleProductWizardData_Data);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf31b0; body size 65 bytes.
#line 1 "ENTRY_10cf31b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cf31b0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 10cf3210; body size 65 bytes.
#line 1 "ENTRY_10cf3210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cf3210(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 10cf3270; body size 3 bytes.
#line 1 "ENTRY_10cf3270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf3270(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf3280; body size 3 bytes.
#line 1 "ENTRY_10cf3280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf3280(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf34b0; body size 27 bytes.
#line 1 "ENTRY_10cf34b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf34b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*param_1);
  puVar2 = (undefined4 *)((undefined4 *)(iVar1 + 8));
  thunk_FUN_10352a90(*puVar2,*(undefined4 *)(iVar1 + 0xc),puVar2);
  *(undefined4*)(iVar1 + 0xc) = (undefined4)(*puVar2);
  return;
}


// Reference entry 10cf3a00; body size 22 bytes.
#line 1 "ENTRY_10cf3a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cf3a00(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf3a20; body size 18 bytes.
#line 1 "ENTRY_10cf3a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf3a20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf3a40; body size 18 bytes.
#line 1 "ENTRY_10cf3a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf3a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf3a60; body size 3 bytes.
#line 1 "ENTRY_10cf3a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3a60(void)

{
  return;
}


// Reference entry 10cf3a70; body size 3 bytes.
#line 1 "ENTRY_10cf3a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3a70(void)

{
  return;
}


// Reference entry 10cf3b90; body size 118 bytes.
#line 1 "ENTRY_10cf3b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf3b90(int *param_2,int *param_3)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)((undefined4 *)*param_1);
  puVar1 = (undefined4 *)((undefined4 *)puVar4[1]);
  puVar5 = (undefined4 *)(puVar4);
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = (undefined4 *)(puVar1);
    do {
      if ((int)puVar2[4] < *param_3) {
        puVar3 = (undefined4 *)((undefined4 *)puVar2[2]);
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_3 < (int)puVar2[4])) {
          puVar4 = (undefined4 *)(puVar2);
        }
        puVar3 = (undefined4 *)((undefined4 *)*puVar2);
        puVar5 = (undefined4 *)(puVar2);
      }
      puVar2 = (undefined4 *)(puVar3);
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)((undefined4 *)*puVar4);
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*param_3 < (int)puVar1[4]) {
        puVar2 = (undefined4 *)((undefined4 *)*puVar1);
        puVar4 = (undefined4 *)(puVar1);
      }
      else {
        puVar2 = (undefined4 *)((undefined4 *)puVar1[2]);
      }
      puVar1 = (undefined4 *)(puVar2);
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_2 = (int)((int)puVar5);
  param_2[1] = (int)((int)puVar4);
  return;
}


// Reference entry 10cf3c30; body size 13 bytes.
#line 1 "ENTRY_10cf3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3c30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10cf3c40; body size 5 bytes.
#line 1 "ENTRY_10cf3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3c50; body size 3 bytes.
#line 1 "ENTRY_10cf3c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3c50(void)

{
  return;
}


// Reference entry 10cf3c60; body size 19 bytes.
#line 1 "ENTRY_10cf3c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3c60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10cf3c80; body size 5 bytes.
#line 1 "ENTRY_10cf3c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3c90; body size 86 bytes.
#line 1 "ENTRY_10cf3c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cf3c90(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (int)(0);
  while ((int *)(param_1) != (int *)(param_2)) {
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
      while ((param_1 = piVar3, cVar1 == '\0' && ((int *)(piVar2) == (int *)param_1[2]))) {
        cVar1 = (char)(*(char *)(param_1[1] + 0xd));
        piVar3 = (int *)((int *)param_1[1]);
        piVar2 = (int *)(param_1);
      }
    }
  }
  return (int)(iVar4);
}


// Reference entry 10cf3d00; body size 5 bytes.
#line 1 "ENTRY_10cf3d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3d10; body size 5 bytes.
#line 1 "ENTRY_10cf3d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3f90; body size 5 bytes.
#line 1 "ENTRY_10cf3f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3fa0; body size 5 bytes.
#line 1 "ENTRY_10cf3fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3fb0; body size 5 bytes.
#line 1 "ENTRY_10cf3fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3fc0; body size 19 bytes.
#line 1 "ENTRY_10cf3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3fc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10cf4080; body size 76 bytes.
#line 1 "ENTRY_10cf4080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cf4080(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x14));
  *(void**)pvVar2 = (void *)((void *)(pvVar2));
  *(void**)((int)pvVar2 + 4) = (void *)(pvVar2);
  *(void**)((int)pvVar2 + 8) = (void *)(pvVar2);
  *(undefined2*)((int)pvVar2 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar2);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(pvVar2);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf4360; body size 65 bytes.
#line 1 "ENTRY_10cf4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cf4360(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 10cf43c0; body size 60 bytes.
#line 1 "ENTRY_10cf43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cf43c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_105a1d20();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf4410; body size 130 bytes.
#line 1 "ENTRY_10cf4410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::FUN_10cf4410(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_2 + 4));
  *param_1 = (undefined1)(*param_2);
  if ((undefined4 *)((param_1 + 4)) != (undefined4 *)(puVar1)) {
    thunk_FUN_105a1c80();
    *(undefined4*)(param_1 + 4) = (undefined4)(*puVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
    *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
    *puVar1 = (undefined4)(0);
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  }
  puVar1 = (undefined4 *)((undefined4 *)(param_2 + 0x10));
  if ((undefined4 *)((param_1 + 0x10)) != (undefined4 *)(puVar1)) {
    thunk_FUN_105a1d20();
    *(undefined4*)(param_1 + 0x10) = (undefined4)(*puVar1);
    *(undefined4*)(param_1 + 0x14) = (undefined4)(*(undefined4 *)(param_2 + 0x14));
    *(undefined4*)(param_1 + 0x18) = (undefined4)(*(undefined4 *)(param_2 + 0x18));
    *puVar1 = (undefined4)(0);
    *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
    *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  }
  return (undefined1 *)(param_1);
}


// Reference entry 10cf44c0; body size 14 bytes.
#line 1 "ENTRY_10cf44c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10cf44c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 10cf44e0; body size 14 bytes.
#line 1 "ENTRY_10cf44e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10cf44e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 10cf4500; body size 3 bytes.
#line 1 "ENTRY_10cf4500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf4500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf4510; body size 20 bytes.
#line 1 "ENTRY_10cf4510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cf4510(undefined4 *param_2)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 10cf4580; body size 142 bytes.
#line 1 "ENTRY_10cf4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10cf4580(int param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar2 = (int *)((int *)*param_1);
  if ((param_2 == *piVar2) && (*(char *)(param_3 + 0xd) != '\0')) {
    cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
    piVar4 = (int *)((int *)piVar2[1]);
    while (cVar1 == '\0') {
      thunk_FUN_106e09f0(param_1,piVar4[2]);
      piVar3 = (int *)((int *)*piVar4);
      thunk_FUN_1148a50e(piVar4,0x14);
      piVar4 = (int *)(piVar3);
      cVar1 = (char)(*(char *)((int)piVar3 + 0xd));
    }
    piVar2[1] = (int)((int)piVar2);
    *piVar2 = (int)((int)piVar2);
    piVar2[2] = (int)((int)piVar2);
    param_1[1] = (undefined4)(0);
    return (int)(param_3);
  }
  if (param_2 != param_3) {
    do {
      iVar5 = (int)(param_2);
      ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                    *)&param_2))->op_inc();
      uVar6 = (undefined4)(thunk_FUN_10cf4680(iVar5));
      thunk_FUN_1148a50e(uVar6,0x14);
    } while (param_2 != param_3);
  }
  return (int)(param_3);
}


// Reference entry 10cf4640; body size 51 bytes.
#line 1 "ENTRY_10cf4640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10cf4640(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_1);
  ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                *)&uStack_4))->op_inc();
  uVar1 = (undefined4)(thunk_FUN_10cf4680(param_1));
  thunk_FUN_1148a50e(uVar1,0x14);
  return (undefined4)(uStack_4);
}


// Reference entry 10cf4a20; body size 3 bytes.
#line 1 "ENTRY_10cf4a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cf4a20(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10cf4a30; body size 33 bytes.
#line 1 "ENTRY_10cf4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf4a30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10cf4a60; body size 43 bytes.
#line 1 "ENTRY_10cf4a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf4a60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10cf4aa0; body size 13 bytes.
#line 1 "ENTRY_10cf4aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf4aa0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf4ab0; body size 11 bytes.
#line 1 "ENTRY_10cf4ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf4ab0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cf4b10; body size 13 bytes.
#line 1 "ENTRY_10cf4b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf4b10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf4b20; body size 13 bytes.
#line 1 "ENTRY_10cf4b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf4b20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf4b90; body size 11 bytes.
#line 1 "ENTRY_10cf4b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf4b90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cf4ba0; body size 11 bytes.
#line 1 "ENTRY_10cf4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf4ba0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cf50f0; body size 22 bytes.
#line 1 "ENTRY_10cf50f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cf50f0(undefined4 *param_1)

{
  thunk_FUN_10cf3e20(*(undefined4 *)*param_1,(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf5240; body size 7 bytes.
#line 1 "ENTRY_10cf5240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10cf5240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf5320; body size 119 bytes.
#line 1 "ENTRY_10cf5320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cf5320(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(int **)*param_1);
  cVar1 = (char)(*(char *)((int)piVar4 + 0xd));
  while (cVar1 == '\0') {
    param_1 = (undefined4 *)((undefined4 *)piVar4[4]);
    thunk_FUN_10cf4bb0(&param_1);
    piVar2 = (int *)((int *)piVar4[2]);
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar2 + 0xd));
      piVar4 = (int *)(piVar2);
      piVar2 = (int *)((int *)*piVar2);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        piVar4 = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
      }
    }
    else {
      cVar1 = (char)(*(char *)(piVar4[1] + 0xd));
      piVar3 = (int *)((int *)piVar4[1]);
      piVar2 = (int *)(piVar4);
      while ((piVar4 = piVar3, cVar1 == '\0' && ((int *)(piVar2) == (int *)piVar4[2]))) {
        cVar1 = (char)(*(char *)(piVar4[1] + 0xd));
        piVar3 = (int *)((int *)piVar4[1]);
        piVar2 = (int *)(piVar4);
      }
    }
    cVar1 = (char)(*(char *)((int)piVar4 + 0xd));
  }
  return;
}


// Reference entry 10cf53e0; body size 6 bytes.
#line 1 "ENTRY_10cf53e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cf53e0(void)

{
  return (char *)("SCIOpValidateServiceCredentials");
}


// Reference entry 10cf5480; body size 27 bytes.
#line 1 "ENTRY_10cf5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf5480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf5650; body size 9 bytes.
#line 1 "ENTRY_10cf5650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf5650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpValidateServiceCredentials);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf58b0; body size 11 bytes.
#line 1 "ENTRY_10cf58b0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf58b0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);
  if ((int *)param_1[1] != (int *)((0x0))) {
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[1] + 0x10))(uVar2);
    }
    puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
    if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar3 = thunk_FUN_1123fcd0(puVar1 + 1), iVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
    param_1[1] = (undefined4)(0);
    param_1[2] = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10cf5aa0; body size 7 bytes.
#line 1 "ENTRY_10cf5aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf5aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cf5b60; body size 71 bytes.
#line 1 "ENTRY_10cf5b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10cf5b60(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
    if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = (int)(*param_2);
    *param_1 = (int)(iVar2);
    if (iVar2 != 0) {
      thunk_FUN_1123fce0(iVar2 + 4);
    }
  }
  return (int *)(param_1);
}


// Reference entry 10cf5c20; body size 4 bytes.
#line 1 "ENTRY_10cf5c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf5c20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cf5c30; body size 3 bytes.
#line 1 "ENTRY_10cf5c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf5c30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf61c0; body size 6 bytes.
#line 1 "ENTRY_10cf61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cf61c0(void)

{
  return (char *)("SCIOpValidateServiceCredentials");
}


// Reference entry 10cf64f0; body size 28 bytes.
#line 1 "ENTRY_10cf64f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf64f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cf6590; body size 12 bytes.
#line 1 "ENTRY_10cf6590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf6590(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x24) = (undefined2)(param_2);
  return;
}


// Reference entry 10cf65e0; body size 16 bytes.
#line 1 "ENTRY_10cf65e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf65e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf6730; body size 42 bytes.
#line 1 "ENTRY_10cf6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cf6730(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIndexManagerEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf6f40; body size 19 bytes.
#line 1 "ENTRY_10cf6f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf6f40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cf73d0; body size 3 bytes.
#line 1 "ENTRY_10cf73d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf73d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf8c50; body size 3 bytes.
#line 1 "ENTRY_10cf8c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf8c50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf8d60; body size 28 bytes.
#line 1 "ENTRY_10cf8d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf8d60(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10cf9050; body size 21 bytes.
#line 1 "ENTRY_10cf9050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf9050(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10cf9090; body size 21 bytes.
#line 1 "ENTRY_10cf9090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10cf9090(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10cfb1f0; body size 6 bytes.
#line 1 "ENTRY_10cfb1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cfb1f0(void)

{
  return (char *)("SCIDeviceSettingsDataSource");
}


// Reference entry 10cfb7e0; body size 9 bytes.
#line 1 "ENTRY_10cfb7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cfb7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDeviceSettingsDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10cfcd10; body size 6 bytes.
#line 1 "ENTRY_10cfcd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cfcd10(void)

{
  return (char *)("SCIDeviceSettingsDataSource");
}


// Reference entry 10cfcd20; body size 7 bytes.
#line 1 "ENTRY_10cfcd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cfcd20(int *param_1)

{
  return (bool)(*param_1 == 0);
}


// Reference entry 10cfe540; body size 39 bytes.
#line 1 "ENTRY_10cfe540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cfe540(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0xa4));
  if (((char *)(pcVar1) != (char *)0x0) && (*pcVar1 != '\0')) {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x98) + 4))(pcVar1,1));
    if (iVar2 != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10cfe760; body size 22 bytes.
#line 1 "ENTRY_10cfe760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10cfe760(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10cfea50; body size 3 bytes.
#line 1 "ENTRY_10cfea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cfea50(void)

{
  return;
}


// Reference entry 10cfea60; body size 7 bytes.
#line 1 "ENTRY_10cfea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cfea60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cfea70; body size 152 bytes.
#line 1 "ENTRY_10cfea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cfea70(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8 + param_1);
    thunk_FUN_10cff050(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    thunk_FUN_10cff050(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_10cff050(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_10cff050(iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_10cff050(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 10cff1e0; body size 93 bytes.
#line 1 "ENTRY_10cff1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10cff1e0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int *)((param_2)) == (int *)(param_1)) {
    return (int *)(param_3);
  }
  do {
    iVar2 = (int)(param_2[-2]);
    piVar4 = (int *)(param_2 + -2);
    piVar3 = (int *)(param_3 + -2);
    if (iVar2 != *piVar3) {
      piVar1 = (int *)((int *)param_3[-1]);
      if ((int *)(piVar1) != (int *)0x0) {
        *piVar3 = (int)(0);
        param_3[-1] = (int)(0);
        (**(code **)(*piVar1 + 8))();
        iVar2 = (int)(*piVar4);
      }
      *piVar3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[-1]);
      param_3[-1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
    param_3 = (int *)(piVar3);
    param_2 = (int *)(piVar4);
  } while ((int *)(piVar4) != (int *)(param_1));
  return (int *)(piVar3);
}


// Reference entry 10cff260; body size 8 bytes.
#line 1 "ENTRY_10cff260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cff260(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10cffe90; body size 5 bytes.
#line 1 "ENTRY_10cffe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cffe90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d00060; body size 92 bytes.
#line 1 "ENTRY_10d00060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d00060(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != *param_3) {
    piVar1 = (int *)((int *)param_3[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_3 = (int)(0);
      param_3[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_1);
    }
    *param_3 = (int)(iVar2);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  thunk_FUN_10cffea0(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10d001f0; body size 8 bytes.
#line 1 "ENTRY_10d001f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d001f0(int param_1)

{
  return (int)(param_1 + -8);
}


// Reference entry 10d006f0; body size 5 bytes.
#line 1 "ENTRY_10d006f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d006f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d00700; body size 40 bytes.
#line 1 "ENTRY_10d00700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d00700(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d00740; body size 40 bytes.
#line 1 "ENTRY_10d00740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d00740(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d00780; body size 5 bytes.
#line 1 "ENTRY_10d00780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d00780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d00790; body size 6 bytes.
#line 1 "ENTRY_10d00790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d00790(void)

{
  return (char *)("SCIAlarmMusic");
}


// Reference entry 10d007a0; body size 6 bytes.
#line 1 "ENTRY_10d007a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d007a0(void)

{
  return (char *)("SCIAlarmMusicBrowseItem");
}


// Reference entry 10d008c0; body size 31 bytes.
#line 1 "ENTRY_10d008c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d008c0(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10d004d0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}


// Reference entry 10d00a00; body size 54 bytes.
#line 1 "ENTRY_10d00a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d00a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00a50; body size 27 bytes.
#line 1 "ENTRY_10d00a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d00a50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00a80; body size 27 bytes.
#line 1 "ENTRY_10d00a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d00a80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00ab0; body size 16 bytes.
#line 1 "ENTRY_10d00ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d00ab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00b90; body size 32 bytes.
#line 1 "ENTRY_10d00b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d00b90(undefined4 *param_2)
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


// Reference entry 10d00c20; body size 11 bytes.
#line 1 "ENTRY_10d00c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d00c20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00c30; body size 11 bytes.
#line 1 "ENTRY_10d00c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d00c30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d01300; body size 42 bytes.
#line 1 "ENTRY_10d01300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d01300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmMusicItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d01640; body size 9 bytes.
#line 1 "ENTRY_10d01640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d01640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAlarmMusic);
  return (undefined4 *)(param_1);
}


// Reference entry 10d01650; body size 9 bytes.
#line 1 "ENTRY_10d01650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d01650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAlarmMusicBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d01820; body size 19 bytes.
#line 1 "ENTRY_10d01820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d01820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d021a0; body size 7 bytes.
#line 1 "ENTRY_10d021a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d021a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d021b0; body size 7 bytes.
#line 1 "ENTRY_10d021b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d021b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d02380; body size 65 bytes.
#line 1 "ENTRY_10d02380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d02380(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 10d023e0; body size 7 bytes.
#line 1 "ENTRY_10d023e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d023e0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d023f0; body size 3 bytes.
#line 1 "ENTRY_10d023f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d023f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02400; body size 3 bytes.
#line 1 "ENTRY_10d02400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02400(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02410; body size 3 bytes.
#line 1 "ENTRY_10d02410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02420; body size 3 bytes.
#line 1 "ENTRY_10d02420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02420(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02430; body size 3 bytes.
#line 1 "ENTRY_10d02430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02440; body size 3 bytes.
#line 1 "ENTRY_10d02440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02450; body size 18 bytes.
#line 1 "ENTRY_10d02450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d02450(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 10d02470; body size 14 bytes.
#line 1 "ENTRY_10d02470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d02470(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10d02490; body size 14 bytes.
#line 1 "ENTRY_10d02490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d02490(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10d02f80; body size 61 bytes.
#line 1 "ENTRY_10d02f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d02f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  thunk_FUN_110b7150(param_1,param_2,param_3,param_4,param_5,0,0,0,0,param_6,0,&DAT_1186d2ee,
                     &DAT_1186d2ee,param_7,param_8);
  return;
}


// Reference entry 10d02fd0; body size 3 bytes.
#line 1 "ENTRY_10d02fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02fd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02fe0; body size 3 bytes.
#line 1 "ENTRY_10d02fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d02fe0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10d03180; body size 11 bytes.
#line 1 "ENTRY_10d03180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d03180(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10d032c0; body size 25 bytes.
#line 1 "ENTRY_10d032c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d032c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_10ce2c30(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10d03aa0; body size 16 bytes.
#line 1 "ENTRY_10d03aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d03aa0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d03ac0; body size 16 bytes.
#line 1 "ENTRY_10d03ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d03ac0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d03bb0; body size 12 bytes.
#line 1 "ENTRY_10d03bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d03bb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d04580; body size 13 bytes.
#line 1 "ENTRY_10d04580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10d04580(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 10d05500; body size 6 bytes.
#line 1 "ENTRY_10d05500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d05500(void)

{
  return (char *)("SCIAlarmMusic");
}


// Reference entry 10d05510; body size 6 bytes.
#line 1 "ENTRY_10d05510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d05510(void)

{
  return (char *)("SCIAlarmMusicBrowseItem");
}


// Reference entry 10d06d10; body size 3 bytes.
#line 1 "ENTRY_10d06d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d06d10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d06d20; body size 3 bytes.
#line 1 "ENTRY_10d06d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d06d20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d06d30; body size 3 bytes.
#line 1 "ENTRY_10d06d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d06d30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d07850; body size 28 bytes.
#line 1 "ENTRY_10d07850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d07850(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d07880; body size 28 bytes.
#line 1 "ENTRY_10d07880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d07880(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d078b0; body size 28 bytes.
#line 1 "ENTRY_10d078b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d078b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d078e0; body size 28 bytes.
#line 1 "ENTRY_10d078e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d078e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d07910; body size 28 bytes.
#line 1 "ENTRY_10d07910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d07910(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d07940; body size 28 bytes.
#line 1 "ENTRY_10d07940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d07940(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d07d80; body size 10 bytes.
#line 1 "ENTRY_10d07d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d07d80(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 10d07d90; body size 38 bytes.
#line 1 "ENTRY_10d07d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d07d90(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8) + param_3 * 8);
  thunk_FUN_10d004d0(iVar1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0xc) - iVar1 >> 3,param_2);
  return;
}


// Reference entry 10d08000; body size 26 bytes.
#line 1 "ENTRY_10d08000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d08000(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d08020; body size 43 bytes.
#line 1 "ENTRY_10d08020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d08020(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d08060; body size 43 bytes.
#line 1 "ENTRY_10d08060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d08060(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d08580; body size 16 bytes.
#line 1 "ENTRY_10d08580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d08580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d085a0; body size 16 bytes.
#line 1 "ENTRY_10d085a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d085a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d09160; body size 5 bytes.
#line 1 "ENTRY_10d09160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d09160(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAllNodeBrowseItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCAllNodeBrowseItemBase);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCAllNodeBrowseItemBase);
  thunk_FUN_10202e00(uVar1);

  ((SCStr *)((SCStr *)(param_1 + 0x12)))->int_release();
  param_1[0x12] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x11)))->int_release();
  param_1[0x11] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = (undefined4)(0);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 10d09900; body size 3 bytes.
#line 1 "ENTRY_10d09900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d09900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d09910; body size 3 bytes.
#line 1 "ENTRY_10d09910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d09910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d09920; body size 3 bytes.
#line 1 "ENTRY_10d09920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d09920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d0dc30; body size 24 bytes.
#line 1 "ENTRY_10d0dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d0dc30(void)

{
  int iVar1;
  SCLibrary *pSVar2;
  uint3 uVar3;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  iVar1 = (int)(*(int *)(pSVar2 + 0x4c));
  uVar3 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x6c) == 3)) {
    return (int)((uint)uVar3 << 8);
  }
  return (int)(((uint)(uVar3) << 8 | (uint)(1)));
}


// Reference entry 10d0e030; body size 7 bytes.
#line 1 "ENTRY_10d0e030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d0e030(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d102a0; body size 3 bytes.
#line 1 "ENTRY_10d102a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d102a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d102b0; body size 3 bytes.
#line 1 "ENTRY_10d102b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d102b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d102c0; body size 3 bytes.
#line 1 "ENTRY_10d102c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d102c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d10890; body size 28 bytes.
#line 1 "ENTRY_10d10890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d10890(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d11510; body size 43 bytes.
#line 1 "ENTRY_10d11510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d11510(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d11770; body size 26 bytes.
#line 1 "ENTRY_10d11770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d11770(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d118f0; body size 6 bytes.
#line 1 "ENTRY_10d118f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d118f0(void)

{
  return (char *)("SCIBadgeIndicatorSettingsProperty");
}


// Reference entry 10d11900; body size 6 bytes.
#line 1 "ENTRY_10d11900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d11900(void)

{
  return (char *)("SCISettingsBrowseItem");
}


// Reference entry 10d11910; body size 6 bytes.
#line 1 "ENTRY_10d11910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d11910(void)

{
  return (char *)("SCISettingsProperty");
}


// Reference entry 10d11920; body size 27 bytes.
#line 1 "ENTRY_10d11920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d11950; body size 16 bytes.
#line 1 "ENTRY_10d11950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11950(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d11d50; body size 9 bytes.
#line 1 "ENTRY_10d11d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBadgeIndicatorSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10d11d60; body size 9 bytes.
#line 1 "ENTRY_10d11d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISettingsBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d11d70; body size 9 bytes.
#line 1 "ENTRY_10d11d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10d125b0; body size 7 bytes.
#line 1 "ENTRY_10d125b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d125b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d125d0; body size 7 bytes.
#line 1 "ENTRY_10d125d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d125d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d12890; body size 3 bytes.
#line 1 "ENTRY_10d12890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d12890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d12dc0; body size 8 bytes.
#line 1 "ENTRY_10d12dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d12dc0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x30) != 0);
}


// Reference entry 10d13f90; body size 6 bytes.
#line 1 "ENTRY_10d13f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d13f90(void)

{
  return (char *)("SCIBadgeIndicatorSettingsProperty");
}


// Reference entry 10d13fa0; body size 6 bytes.
#line 1 "ENTRY_10d13fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d13fa0(void)

{
  return (char *)("SCISettingsBrowseItem");
}


// Reference entry 10d13fb0; body size 6 bytes.
#line 1 "ENTRY_10d13fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d13fb0(void)

{
  return (char *)("SCISettingsProperty");
}


// Reference entry 10d14010; body size 24 bytes.
#line 1 "ENTRY_10d14010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10d14010(int param_1)

{
  if ((*(int *)(param_1 + 0x78c) == 0) && (*(char *)(param_1 + 0x801) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10d14030; body size 27 bytes.
#line 1 "ENTRY_10d14030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d14030(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xac) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xac) + 0x1c))());
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10d14db0; body size 3 bytes.
#line 1 "ENTRY_10d14db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d14db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d14dc0; body size 3 bytes.
#line 1 "ENTRY_10d14dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d14dc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d150c0; body size 28 bytes.
#line 1 "ENTRY_10d150c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d150c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d150f0; body size 20 bytes.
#line 1 "ENTRY_10d150f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d150f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d15340; body size 25 bytes.
#line 1 "ENTRY_10d15340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d15340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d15360; body size 36 bytes.
#line 1 "ENTRY_10d15360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d15360(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x9c) {
    thunk_FUN_10202e00();
  }
  return;
}


// Reference entry 10d15390; body size 5 bytes.
#line 1 "ENTRY_10d15390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d15390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d153a0; body size 40 bytes.
#line 1 "ENTRY_10d153a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d153a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d153e0; body size 40 bytes.
#line 1 "ENTRY_10d153e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d153e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d15420; body size 9 bytes.
#line 1 "ENTRY_10d15420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d15420(undefined4 param_1,int *param_2)

{
 try {
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_1124d790(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_10207220();
  iVar1 = (int)(param_2[0x14]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0x13]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0x12]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0x11]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0x10]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xf]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xe]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xd]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xc]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xb]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[10]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[9]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[8]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[7]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[6]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[5]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[4]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[3]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[2]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[1]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*param_2);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10)));
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10d154b0; body size 23 bytes.
#line 1 "ENTRY_10d154b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d154b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d154d0; body size 3 bytes.
#line 1 "ENTRY_10d154d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d154d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d154e0; body size 23 bytes.
#line 1 "ENTRY_10d154e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d154e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d15b30; body size 42 bytes.
#line 1 "ENTRY_10d15b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d15b30(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *(undefined1*)(param_1 + 2) = (undefined1)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHistoryDeleteAllActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d15b70; body size 33 bytes.
#line 1 "ENTRY_10d15b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d15b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHistorySignInActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d16080; body size 19 bytes.
#line 1 "ENTRY_10d16080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d16080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d160a0; body size 19 bytes.
#line 1 "ENTRY_10d160a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d160a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d160c0; body size 13 bytes.
#line 1 "ENTRY_10d160c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10d160c0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x9c + *param_1);
}


// Reference entry 10d16610; body size 38 bytes.
#line 1 "ENTRY_10d16610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d16610(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x9c) {
    thunk_FUN_10202e00();
  }
  return;
}


// Reference entry 10d16640; body size 3 bytes.
#line 1 "ENTRY_10d16640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d16640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d16650; body size 3 bytes.
#line 1 "ENTRY_10d16650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d16650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d16f20; body size 58 bytes.
#line 1 "ENTRY_10d16f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d16f20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x9c);
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


// Reference entry 10d16f70; body size 16 bytes.
#line 1 "ENTRY_10d16f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d16f70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d16f90; body size 16 bytes.
#line 1 "ENTRY_10d16f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d16f90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d17030; body size 4 bytes.
#line 1 "ENTRY_10d17030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d17030(int param_1)

{
  return (int)(param_1 + 0x50);
}


// Reference entry 10d18620; body size 14 bytes.
#line 1 "ENTRY_10d18620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d18620(int *param_1)

{
  (**(code **)(*param_1 + 0x16c))(0x1f5);
  return;
}


// Reference entry 10d186b0; body size 3 bytes.
#line 1 "ENTRY_10d186b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d186b0(void)

{
  return;
}


// Reference entry 10d186c0; body size 44 bytes.
#line 1 "ENTRY_10d186c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d186c0(char param_2)
{
  int *param_1 = (int *)this;
  if ((char)param_1[0xa6] != param_2) {
    *(char*)(param_1 + 0xa6) = (char)(param_2);
    (**(code **)(*param_1 + 0x110))(0);
    thunk_FUN_1020a5b0(0);
  }
  return;
}


// Reference entry 10d187b0; body size 7 bytes.
#line 1 "ENTRY_10d187b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d187b0(int *param_1)

{
  return (bool)(*param_1 == 0);
}


// Reference entry 10d194f0; body size 28 bytes.
#line 1 "ENTRY_10d194f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d194f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d19520; body size 28 bytes.
#line 1 "ENTRY_10d19520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d19520(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d19770; body size 27 bytes.
#line 1 "ENTRY_10d19770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d19770(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x9c);
}


// Reference entry 10d197f0; body size 39 bytes.
#line 1 "ENTRY_10d197f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d197f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4));
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10d19ae0; body size 40 bytes.
#line 1 "ENTRY_10d19ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d19ae0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d1a1b0; body size 52 bytes.
#line 1 "ENTRY_10d1a1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d1a1b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10564950(param_2,param_3,param_4,1,param_5,0,0,0,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuPlayNowInstantTVDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d1a200; body size 52 bytes.
#line 1 "ENTRY_10d1a200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d1a200(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10564950(param_2,param_3,param_4,0,param_5,0,0,1,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuPlayNowTVDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d1a250; body size 44 bytes.
#line 1 "ENTRY_10d1a250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d1a250(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10564c90(param_2,param_3,param_4,0,param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayNowTVDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d1abe0; body size 3 bytes.
#line 1 "ENTRY_10d1abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1abe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1abf0; body size 3 bytes.
#line 1 "ENTRY_10d1abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1abf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac00; body size 3 bytes.
#line 1 "ENTRY_10d1ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac10; body size 3 bytes.
#line 1 "ENTRY_10d1ac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac20; body size 3 bytes.
#line 1 "ENTRY_10d1ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac30; body size 3 bytes.
#line 1 "ENTRY_10d1ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac40; body size 3 bytes.
#line 1 "ENTRY_10d1ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1beb0; body size 16 bytes.
#line 1 "ENTRY_10d1beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1beb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d1d440; body size 3 bytes.
#line 1 "ENTRY_10d1d440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d450; body size 3 bytes.
#line 1 "ENTRY_10d1d450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d460; body size 3 bytes.
#line 1 "ENTRY_10d1d460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d460(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d470; body size 3 bytes.
#line 1 "ENTRY_10d1d470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d470(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d480; body size 3 bytes.
#line 1 "ENTRY_10d1d480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d480(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d490; body size 3 bytes.
#line 1 "ENTRY_10d1d490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d490(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d5f0; body size 28 bytes.
#line 1 "ENTRY_10d1d5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d5f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d1d620; body size 28 bytes.
#line 1 "ENTRY_10d1d620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d620(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d1d650; body size 28 bytes.
#line 1 "ENTRY_10d1d650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d650(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d1d680; body size 28 bytes.
#line 1 "ENTRY_10d1d680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d680(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d1d6b0; body size 28 bytes.
#line 1 "ENTRY_10d1d6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d6b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d1d6e0; body size 28 bytes.
#line 1 "ENTRY_10d1d6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d6e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d1da40; body size 83 bytes.
#line 1 "ENTRY_10d1da40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d1da40(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)((int)piVar1);
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10d1df50; body size 7 bytes.
#line 1 "ENTRY_10d1df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d1df50(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d20200; body size 85 bytes.
#line 1 "ENTRY_10d20200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d20200(int param_1)

{
  undefined4 *puVar1;
  
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(-(uint)(param_1 != 0) & param_1 + 0x80U);
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0xb4));
  *(undefined1*)(param_1 + 0xb0) = (undefined1)(0);
  *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
  thunk_FUN_10ce2c30(*puVar1,*(undefined4 *)(param_1 + 0xb8),puVar1);
  *(undefined4*)(param_1 + 0xb8) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10d22a90; body size 6 bytes.
#line 1 "ENTRY_10d22a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d22a90(void)

{
  return (undefined4)(9);
}


// Reference entry 10d23640; body size 4 bytes.
#line 1 "ENTRY_10d23640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10d23640(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x30));
}


// Reference entry 10d238e0; body size 18 bytes.
#line 1 "ENTRY_10d238e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d238e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23900; body size 22 bytes.
#line 1 "ENTRY_10d23900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d23900(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d239d0; body size 18 bytes.
#line 1 "ENTRY_10d239d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d239d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d239f0; body size 11 bytes.
#line 1 "ENTRY_10d239f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d239f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23bb0; body size 22 bytes.
#line 1 "ENTRY_10d23bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d23bb0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23bd0; body size 11 bytes.
#line 1 "ENTRY_10d23bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d23bd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23be0; body size 19 bytes.
#line 1 "ENTRY_10d23be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d23be0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[9] = (undefined4)(param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23e00; body size 22 bytes.
#line 1 "ENTRY_10d23e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d23e00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23e20; body size 43 bytes.
#line 1 "ENTRY_10d23e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d23e20(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d23e60; body size 78 bytes.
#line 1 "ENTRY_10d23e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d23e60(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10d23ed0; body size 16 bytes.
#line 1 "ENTRY_10d23ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d23ed0(SCStr *param_1,SCStr *param_2)

{
  ((SCStr *)(param_1))->op_lt(param_2);
  return;
}


// Reference entry 10d23ef0; body size 25 bytes.
#line 1 "ENTRY_10d23ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d23ef0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10d24170; body size 13 bytes.
#line 1 "ENTRY_10d24170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24170(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d24180; body size 13 bytes.
#line 1 "ENTRY_10d24180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d24190; body size 3 bytes.
#line 1 "ENTRY_10d24190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24190(void)

{
  return;
}


// Reference entry 10d24510; body size 15 bytes.
#line 1 "ENTRY_10d24510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24510(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10d24530; body size 15 bytes.
#line 1 "ENTRY_10d24530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24530(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10d24940; body size 31 bytes.
#line 1 "ENTRY_10d24940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10d24940(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d24b50; body size 84 bytes.
#line 1 "ENTRY_10d24b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24b50(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_lt(param_1));
  if (bVar1) {
    thunk_FUN_101bdde0(param_2,param_1);
  }
  bVar1 = (bool)(((SCStr *)(param_3))->op_lt(param_2));
  if (bVar1) {
    thunk_FUN_101bdde0(param_3,param_2);
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt(param_1));
    if (bVar1) {
      thunk_FUN_101bdde0(param_2,param_1);
    }
  }
  return;
}


// Reference entry 10d25270; body size 64 bytes.
#line 1 "ENTRY_10d25270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25270(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5)

{
  if ((SCStr *)(param_1) != (SCStr *)(param_3)) {
    ((SCStr *)(param_3))->int_release();
    *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)param_1));
    ((SCStr *)(param_3))->int_addref();
  }
  thunk_FUN_10d25120(param_1,0,param_2 - (int)param_1 >> 2,param_4,param_5);
  return;
}


// Reference entry 10d25380; body size 130 bytes.
#line 1 "ENTRY_10d25380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25380(int param_1,int param_2,int param_3,SCStr *param_4)

{
  bool bVar1;
  int *piVar2;
  SCStr *pSVar3;
  int iVar4;
  SCStr *this_;
  
  while (param_3 < param_2) {
    iVar4 = (int)(param_2 + -1 >> 1);
    pSVar3 = (SCStr *)((SCStr *)(iVar4 * 4 + param_1));
    bVar1 = (bool)(((SCStr *)(pSVar3))->op_lt(param_4));
    if (!bVar1) break;
    this_ = (SCStr *)((SCStr *)(param_2 * 4 + param_1));
    param_2 = (int)(iVar4);
    if ((SCStr *)(pSVar3) != (SCStr *)(this_)) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar3));
      ((SCStr *)(this_))->int_addref();
    }
  }
  pSVar3 = (SCStr *)((SCStr *)(param_2 * 4 + param_1));
  if ((SCStr *)((param_4)) != (SCStr *)(pSVar3)) {
    ((SCStr *)(pSVar3))->int_release();
    *(undefined4*)pSVar3 = (undefined4)((SCStr *)(*(undefined4 *)param_4));
    if ((*(int *)pSVar3 != 0) && (piVar2 = (int *)(*(int *)pSVar3 + -0x10), *piVar2 < 0xffff)) {
      thunk_FUN_1123fce0(piVar2);
    }
    return;
  }
  return;
}


// Reference entry 10d25430; body size 12 bytes.
#line 1 "ENTRY_10d25430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d25430(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[9] = (undefined4)(param_1);
  return;
}


// Reference entry 10d25940; body size 3 bytes.
#line 1 "ENTRY_10d25940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10d25940(void)

{
  return (undefined1)(1);
}


// Reference entry 10d259d0; body size 5 bytes.
#line 1 "ENTRY_10d259d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d259d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d259e0; body size 5 bytes.
#line 1 "ENTRY_10d259e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d259e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25a70; body size 5 bytes.
#line 1 "ENTRY_10d25a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25a80; body size 5 bytes.
#line 1 "ENTRY_10d25a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25a90; body size 5 bytes.
#line 1 "ENTRY_10d25a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25aa0; body size 5 bytes.
#line 1 "ENTRY_10d25aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25ab0; body size 13 bytes.
#line 1 "ENTRY_10d25ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10d25ac0; body size 13 bytes.
#line 1 "ENTRY_10d25ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10d25ad0; body size 3 bytes.
#line 1 "ENTRY_10d25ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25ad0(void)

{
  return;
}


// Reference entry 10d25ae0; body size 15 bytes.
#line 1 "ENTRY_10d25ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25ae0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d25b00; body size 15 bytes.
#line 1 "ENTRY_10d25b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25b00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d25b20; body size 5 bytes.
#line 1 "ENTRY_10d25b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25b30; body size 5 bytes.
#line 1 "ENTRY_10d25b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25b40; body size 5 bytes.
#line 1 "ENTRY_10d25b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25bd0; body size 5 bytes.
#line 1 "ENTRY_10d25bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25be0; body size 5 bytes.
#line 1 "ENTRY_10d25be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25c70; body size 5 bytes.
#line 1 "ENTRY_10d25c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d260e0; body size 5 bytes.
#line 1 "ENTRY_10d260e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d260e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26170; body size 35 bytes.
#line 1 "ENTRY_10d26170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d26170(int param_1,int param_2)

{
  thunk_FUN_10d25630(param_1,param_2,param_2 - param_1 >> 2,0);
  return;
}


// Reference entry 10d261a0; body size 31 bytes.
#line 1 "ENTRY_10d261a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d261a0(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10d25630(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return;
}


// Reference entry 10d26250; body size 16 bytes.
#line 1 "ENTRY_10d26250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d26250(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d26270; body size 16 bytes.
#line 1 "ENTRY_10d26270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d26270(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d262d0; body size 18 bytes.
#line 1 "ENTRY_10d262d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d262d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d262f0; body size 3 bytes.
#line 1 "ENTRY_10d262f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d262f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26300; body size 3 bytes.
#line 1 "ENTRY_10d26300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d26300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26310; body size 3 bytes.
#line 1 "ENTRY_10d26310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d26310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26360; body size 11 bytes.
#line 1 "ENTRY_10d26360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d26360(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d263f0; body size 11 bytes.
#line 1 "ENTRY_10d263f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d263f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d26400; body size 16 bytes.
#line 1 "ENTRY_10d26400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d26400(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d26420; body size 3 bytes.
#line 1 "ENTRY_10d26420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d26420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26430; body size 52 bytes.
#line 1 "ENTRY_10d26430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d26430(undefined4 *param_1)

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


// Reference entry 10d27490; body size 19 bytes.
#line 1 "ENTRY_10d27490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d27490(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10d274b0; body size 19 bytes.
#line 1 "ENTRY_10d274b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d274b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10d27d30; body size 14 bytes.
#line 1 "ENTRY_10d27d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10d27d30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 10d27d50; body size 14 bytes.
#line 1 "ENTRY_10d27d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10d27d50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 10d27d70; body size 12 bytes.
#line 1 "ENTRY_10d27d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d27d70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 10d27d80; body size 7 bytes.
#line 1 "ENTRY_10d27d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d27d80(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d27d90; body size 3 bytes.
#line 1 "ENTRY_10d27d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d27d90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d27da0; body size 3 bytes.
#line 1 "ENTRY_10d27da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d27da0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d27db0; body size 6 bytes.
#line 1 "ENTRY_10d27db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d27db0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10d288a0; body size 31 bytes.
#line 1 "ENTRY_10d288a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d288a0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10d288f0; body size 14 bytes.
#line 1 "ENTRY_10d288f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d288f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10d28da0; body size 5 bytes.
#line 1 "ENTRY_10d28da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d28da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e40; body size 3 bytes.
#line 1 "ENTRY_10d28e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e50; body size 3 bytes.
#line 1 "ENTRY_10d28e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e60; body size 3 bytes.
#line 1 "ENTRY_10d28e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e70; body size 3 bytes.
#line 1 "ENTRY_10d28e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e80; body size 3 bytes.
#line 1 "ENTRY_10d28e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e90; body size 3 bytes.
#line 1 "ENTRY_10d28e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28ea0; body size 3 bytes.
#line 1 "ENTRY_10d28ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28eb0; body size 3 bytes.
#line 1 "ENTRY_10d28eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d29150; body size 5 bytes.
#line 1 "ENTRY_10d29150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d29150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d29160; body size 79 bytes.
#line 1 "ENTRY_10d29160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d29160(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int*)(param_2 + 8) = (int)(*piVar1);
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int*)(*piVar1 + 4) = (int)(param_2);
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
  if ((int)(param_2) == *(int *)(*param_1 + 4)) {
    *(int**)(*param_1 + 4) = (int *)(piVar1);
    *piVar1 = (int)(param_2);
    *(int**)(param_2 + 4) = (int *)(piVar1);
    return;
  }
  piVar2 = (int *)(*(int **)(param_2 + 4));
  if (param_2 == *piVar2) {
    *piVar2 = (int)((int)piVar1);
    *piVar1 = (int)(param_2);
    *(int**)(param_2 + 4) = (int *)(piVar1);
    return;
  }
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int**)(param_2 + 4) = (int *)(piVar1);
  return;
}


// Reference entry 10d291d0; body size 31 bytes.
#line 1 "ENTRY_10d291d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10d291d0(int *param_1)

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
  return (int *)(param_1);
}


// Reference entry 10d29310; body size 3 bytes.
#line 1 "ENTRY_10d29310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d29310(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10d29320; body size 11 bytes.
#line 1 "ENTRY_10d29320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d29320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d29330; body size 83 bytes.
#line 1 "ENTRY_10d29330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d29330(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(*(int *)(iVar1 + 8));
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int**)(*(int *)(iVar1 + 8) + 4) = (int *)(param_2);
  }
  *(int*)(iVar1 + 4) = (int)(param_2[1]);
  if ((int *)(param_2) == *(int **)(*param_1 + 4)) {
    *(int*)(*param_1 + 4) = (int)(iVar1);
    *(int**)(iVar1 + 8) = (int *)(param_2);
    param_2[1] = (int)(iVar1);
    return;
  }
  piVar2 = (int *)((int *)param_2[1]);
  if ((int *)(param_2) == (int *)piVar2[2]) {
    piVar2[2] = (int)(iVar1);
    *(int**)(iVar1 + 8) = (int *)(param_2);
    param_2[1] = (int)(iVar1);
    return;
  }
  *piVar2 = (int)(iVar1);
  *(int**)(iVar1 + 8) = (int *)(param_2);
  param_2[1] = (int)(iVar1);
  return;
}


// Reference entry 10d29430; body size 13 bytes.
#line 1 "ENTRY_10d29430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d29430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10d29440; body size 3 bytes.
#line 1 "ENTRY_10d29440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d29440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d29450; body size 10 bytes.
#line 1 "ENTRY_10d29450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d29450(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 10d29460; body size 4 bytes.
#line 1 "ENTRY_10d29460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d29460(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d294d0; body size 90 bytes.
#line 1 "ENTRY_10d294d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10d294d0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xccccccd) {
    param_1 = (uint)(param_1 * 0x14);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10d29620; body size 57 bytes.
#line 1 "ENTRY_10d29620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d29620(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10d29670; body size 60 bytes.
#line 1 "ENTRY_10d29670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d29670(int param_1,int param_2)

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


// Reference entry 10d298c0; body size 11 bytes.
#line 1 "ENTRY_10d298c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d298c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10d2ac90; body size 6 bytes.
#line 1 "ENTRY_10d2ac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d2ac90(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10d2aca0; body size 6 bytes.
#line 1 "ENTRY_10d2aca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d2aca0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10d2ae60; body size 3 bytes.
#line 1 "ENTRY_10d2ae60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d2ae60(void)

{
  return;
}


// Reference entry 10d2b0e0; body size 3 bytes.
#line 1 "ENTRY_10d2b0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d2b0e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d2b4c0; body size 28 bytes.
#line 1 "ENTRY_10d2b4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d2b4c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d2b4f0; body size 28 bytes.
#line 1 "ENTRY_10d2b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d2b4f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d2d7a0; body size 43 bytes.
#line 1 "ENTRY_10d2d7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d2d7a0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d2d7e0; body size 26 bytes.
#line 1 "ENTRY_10d2d7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d2d7e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d2d800; body size 43 bytes.
#line 1 "ENTRY_10d2d800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d2d800(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d2d840; body size 91 bytes.
#line 1 "ENTRY_10d2d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d2d840(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = (int)(0);
  *param_1 = (int)(0);
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10d2d8c0; body size 43 bytes.
#line 1 "ENTRY_10d2d8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d2d8c0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d2d900; body size 83 bytes.
#line 1 "ENTRY_10d2d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d2d900(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)*param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      param_1[1] = (int)((int)piVar1);
      (**(code **)(*piVar1 + 4))();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10d2d970; body size 3 bytes.
#line 1 "ENTRY_10d2d970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d2d970(void)

{
  return;
}


// Reference entry 10d2dc10; body size 7 bytes.
#line 1 "ENTRY_10d2dc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d2dc10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d2dc20; body size 3 bytes.
#line 1 "ENTRY_10d2dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d2dc20(void)

{
  return;
}


// Reference entry 10d2dcc0; body size 24 bytes.
#line 1 "ENTRY_10d2dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d2dcc0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ce3040(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10d2dd10; body size 5 bytes.
#line 1 "ENTRY_10d2dd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d2dd10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d2dd20; body size 18 bytes.
#line 1 "ENTRY_10d2dd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d2dd20(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 10d2dd40; body size 20 bytes.
#line 1 "ENTRY_10d2dd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d2dd40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10d2d980(param_1,param_2,param_2);
  return;
}


// Reference entry 10d2dd60; body size 12 bytes.
#line 1 "ENTRY_10d2dd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d2dd60(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 10d2dea0; body size 12 bytes.
#line 1 "ENTRY_10d2dea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d2dea0(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 8);
}


// Reference entry 10d2dee0; body size 32 bytes.
#line 1 "ENTRY_10d2dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d2dee0(undefined4 *param_2)
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


// Reference entry 10d2df50; body size 16 bytes.
#line 1 "ENTRY_10d2df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d2df50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d30190; body size 18 bytes.
#line 1 "ENTRY_10d30190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d30190(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceBetaFeedbackBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCVoiceBetaFeedbackBrowseItem);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStaticBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCStaticBrowseItem);
  piVar1 = (int *)((int *)param_1[0x18]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x17] = (undefined4)(0);
    param_1[0x18] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x16]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x15] = (undefined4)(0);
    param_1[0x16] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0x13)))->int_release();
  param_1[0x13] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x11)))->int_release();
  param_1[0x11] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xe)))->int_release();
  param_1[0xe] = (undefined4)(0);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 10d30290; body size 31 bytes.
#line 1 "ENTRY_10d30290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d30290(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10d2d980(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d302c0; body size 3 bytes.
#line 1 "ENTRY_10d302c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d302c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d302d0; body size 7 bytes.
#line 1 "ENTRY_10d302d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d302d0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d302e0; body size 3 bytes.
#line 1 "ENTRY_10d302e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d302e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d302f0; body size 3 bytes.
#line 1 "ENTRY_10d302f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d302f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d30300; body size 3 bytes.
#line 1 "ENTRY_10d30300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d30300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d30310; body size 3 bytes.
#line 1 "ENTRY_10d30310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d30310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d30940; body size 30 bytes.
#line 1 "ENTRY_10d30940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d30940(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10ce3cb0(param_2));
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 10d30970; body size 182 bytes.
#line 1 "ENTRY_10d30970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d30970(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_10ce3ca0();
  }
  iVar2 = (int)(*param_1);
  uVar3 = (uint)(param_1[2] - iVar2 >> 3);
  if (0x1fffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = (uint)(0x1fffffff);
  }
  else {
    uVar3 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar3 < param_2) {
      uVar3 = (uint)(param_2);
    }
  }
  if (iVar2 != 0) {
    thunk_FUN_10ce2c30(iVar2,param_1[1],param_1);
    iVar2 = (int)(*param_1);
    uVar4 = (uint)(param_1[2] - iVar2 & 0xfffffff8);
    iVar1 = (int)(iVar2);
    if (0xfff < uVar4) {
      iVar1 = (int)(*(int *)(iVar2 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar2 - iVar1) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar1,uVar4);
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
  }
  iVar2 = (int)(thunk_FUN_10ce3cb0(uVar3));
  *param_1 = (int)(iVar2);
  param_1[1] = (int)(iVar2);
  param_1[2] = (int)(iVar2 + uVar3 * 8);
  return;
}


// Reference entry 10d30ac0; body size 21 bytes.
#line 1 "ENTRY_10d30ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d30ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10d2d980(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 10d381e0; body size 7 bytes.
#line 1 "ENTRY_10d381e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d381e0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d39e30; body size 3 bytes.
#line 1 "ENTRY_10d39e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d39e30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d39fc0; body size 28 bytes.
#line 1 "ENTRY_10d39fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d39fc0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d39ff0; body size 28 bytes.
#line 1 "ENTRY_10d39ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d39ff0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d3a910; body size 29 bytes.
#line 1 "ENTRY_10d3a910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3a910(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x102) != '\0') && (*(char *)((int)param_1 + 0x101) != '\0')) {
    (**(code **)(*param_1 + 0x100))(0);
  }
  return;
}


// Reference entry 10d3abf0; body size 27 bytes.
#line 1 "ENTRY_10d3abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d3abf0(void)

{
  int iVar1;
  SCLibrary *pSVar2;
  uint3 uVar3;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  iVar1 = (int)(*(int *)(*(int *)(pSVar2 + 0x4c) + 0x6c));
  uVar3 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 2) && (iVar1 != 4)) {
    return (int)((uint)uVar3 << 8);
  }
  return (int)(((uint)(uVar3) << 8 | (uint)(1)));
}


// Reference entry 10d3ac20; body size 20 bytes.
#line 1 "ENTRY_10d3ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10d3ac20(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x118) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x118) + 0x20))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d3ac40; body size 24 bytes.
#line 1 "ENTRY_10d3ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10d3ac40(int param_1)

{
  if ((*(int *)(param_1 + 0xf8) == 0) && (*(char *)(param_1 + 0xf4) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10d3b410; body size 3 bytes.
#line 1 "ENTRY_10d3b410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d3b410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d3cb70; body size 28 bytes.
#line 1 "ENTRY_10d3cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3cb70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d3cd60; body size 43 bytes.
#line 1 "ENTRY_10d3cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d3cd60(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d3cda0; body size 43 bytes.
#line 1 "ENTRY_10d3cda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d3cda0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)0x0) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d3cde0; body size 6 bytes.
#line 1 "ENTRY_10d3cde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d3cde0(void)

{
  return (char *)("SCISpinnerSettingsProperty");
}


// Reference entry 10d3cdf0; body size 27 bytes.
#line 1 "ENTRY_10d3cdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3cdf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ce20; body size 27 bytes.
#line 1 "ENTRY_10d3ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3ce20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ce50; body size 16 bytes.
#line 1 "ENTRY_10d3ce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3ce50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ce70; body size 16 bytes.
#line 1 "ENTRY_10d3ce70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3ce70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ce90; body size 16 bytes.
#line 1 "ENTRY_10d3ce90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3ce90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3d370; body size 42 bytes.
#line 1 "ENTRY_10d3d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d3d370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDateTimeManagerEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3d3b0; body size 9 bytes.
#line 1 "ENTRY_10d3d3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3d3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBooleanSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3d3c0; body size 9 bytes.
#line 1 "ENTRY_10d3d3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3d3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISpinnerSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3dbb0; body size 57 bytes.
#line 1 "ENTRY_10d3dbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d3dbb0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10cf6c80(param_2,param_3,param_4,0,1,param_5,4,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3e050; body size 19 bytes.
#line 1 "ENTRY_10d3e050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e050(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d3e070; body size 7 bytes.
#line 1 "ENTRY_10d3e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d3e080; body size 7 bytes.
#line 1 "ENTRY_10d3e080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d3e280; body size 32 bytes.
#line 1 "ENTRY_10d3e280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e280(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  piVar1 = (int *)((int *)param_1[0x3b]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x3a] = (undefined4)(0);
    param_1[0x3b] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_102cc870();
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x1b] = (undefined4)(0);
    param_1[0x1c] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_10cf71a0();

  return;

 } catch (...) { }
}


// Reference entry 10d3e430; body size 18 bytes.
#line 1 "ENTRY_10d3e430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e430(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStaticBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCStaticBrowseItem);
  piVar1 = (int *)((int *)param_1[0x18]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x17] = (undefined4)(0);
    param_1[0x18] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x16]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x15] = (undefined4)(0);
    param_1[0x16] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0x13)))->int_release();
  param_1[0x13] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x11)))->int_release();
  param_1[0x11] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xe)))->int_release();
  param_1[0xe] = (undefined4)(0);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 10d3e450; body size 32 bytes.
#line 1 "ENTRY_10d3e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e450(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  piVar1 = (int *)((int *)param_1[0x3b]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x3a] = (undefined4)(0);
    param_1[0x3b] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_102cc870();
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x1b] = (undefined4)(0);
    param_1[0x1c] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_10cf71a0();

  return;

 } catch (...) { }
}


// Reference entry 10d3e5d0; body size 3 bytes.
#line 1 "ENTRY_10d3e5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d3e5d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d3e5e0; body size 3 bytes.
#line 1 "ENTRY_10d3e5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d3e5e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d3ede0; body size 6 bytes.
#line 1 "ENTRY_10d3ede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d3ede0(void)

{
  return (char *)("SCMusicLibraryManagementDataSource");
}


// Reference entry 10d3ff80; body size 6 bytes.
#line 1 "ENTRY_10d3ff80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d3ff80(void)

{
  return (char *)("SCISpinnerSettingsProperty");
}


// Reference entry 10d41c50; body size 3 bytes.
#line 1 "ENTRY_10d41c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d41c50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d41c60; body size 3 bytes.
#line 1 "ENTRY_10d41c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d41c60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d41c70; body size 3 bytes.
#line 1 "ENTRY_10d41c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d41c70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d420e0; body size 28 bytes.
#line 1 "ENTRY_10d420e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d420e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d42110; body size 28 bytes.
#line 1 "ENTRY_10d42110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d42110(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d42140; body size 28 bytes.
#line 1 "ENTRY_10d42140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d42140(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d422f0; body size 21 bytes.
#line 1 "ENTRY_10d422f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d422f0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10d42310; body size 21 bytes.
#line 1 "ENTRY_10d42310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d42310(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10d42330; body size 78 bytes.
#line 1 "ENTRY_10d42330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d42330(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10d423a0; body size 40 bytes.
#line 1 "ENTRY_10d423a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d423a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d423e0; body size 40 bytes.
#line 1 "ENTRY_10d423e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d423e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d43800; body size 7 bytes.
#line 1 "ENTRY_10d43800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d43800(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d44000; body size 16 bytes.
#line 1 "ENTRY_10d44000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d44000(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d44020; body size 16 bytes.
#line 1 "ENTRY_10d44020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d44020(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d499e0; body size 28 bytes.
#line 1 "ENTRY_10d499e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d499e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d49ef0; body size 11 bytes.
#line 1 "ENTRY_10d49ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d49ef0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0xb8) + 100))();
  return;
}


// Reference entry 10d49f00; body size 91 bytes.
#line 1 "ENTRY_10d49f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d49f00(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = (int)(0);
  *param_1 = (int)(0);
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10d49f80; body size 91 bytes.
#line 1 "ENTRY_10d49f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d49f80(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  param_1[1] = (int)(0);
  *param_1 = (int)(0);
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10d4a000; body size 26 bytes.
#line 1 "ENTRY_10d4a000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d4a000(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d4a2c0; body size 40 bytes.
#line 1 "ENTRY_10d4a2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d4a2c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d4a300; body size 40 bytes.
#line 1 "ENTRY_10d4a300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d4a300(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d4a340; body size 40 bytes.
#line 1 "ENTRY_10d4a340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d4a340(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d4a380; body size 40 bytes.
#line 1 "ENTRY_10d4a380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d4a380(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d4a3c0; body size 6 bytes.
#line 1 "ENTRY_10d4a3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d4a3c0(void)

{
  return (char *)("SCICommittable");
}


// Reference entry 10d4a3d0; body size 32 bytes.
#line 1 "ENTRY_10d4a3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d4a3d0(undefined4 *param_2)
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


// Reference entry 10d4a480; body size 32 bytes.
#line 1 "ENTRY_10d4a480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d4a480(undefined4 *param_2)
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


// Reference entry 10d4a4b0; body size 32 bytes.
#line 1 "ENTRY_10d4a4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d4a4b0(undefined4 *param_2)
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


// Reference entry 10d4a4e0; body size 32 bytes.
#line 1 "ENTRY_10d4a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d4a4e0(undefined4 *param_2)
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


// Reference entry 10d4a510; body size 16 bytes.
#line 1 "ENTRY_10d4a510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4a510(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4a5e0; body size 16 bytes.
#line 1 "ENTRY_10d4a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4a5e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4a600; body size 16 bytes.
#line 1 "ENTRY_10d4a600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4a600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4ad50; body size 9 bytes.
#line 1 "ENTRY_10d4ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4ad50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICommittable);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4ad60; body size 9 bytes.
#line 1 "ENTRY_10d4ad60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4ad60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIReorderable);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4c310; body size 65 bytes.
#line 1 "ENTRY_10d4c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d4c310(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if (iVar2 != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return (int *)(param_1);
}


// Reference entry 10d4c450; body size 3 bytes.
#line 1 "ENTRY_10d4c450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4c460; body size 7 bytes.
#line 1 "ENTRY_10d4c460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d4c460(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d4c470; body size 7 bytes.
#line 1 "ENTRY_10d4c470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d4c470(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d4c480; body size 3 bytes.
#line 1 "ENTRY_10d4c480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c480(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4c490; body size 3 bytes.
#line 1 "ENTRY_10d4c490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c490(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4c4a0; body size 3 bytes.
#line 1 "ENTRY_10d4c4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c4a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4c4b0; body size 3 bytes.
#line 1 "ENTRY_10d4c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c4b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4d8b0; body size 16 bytes.
#line 1 "ENTRY_10d4d8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d8b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d4d8d0; body size 16 bytes.
#line 1 "ENTRY_10d4d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d8d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d4d8f0; body size 16 bytes.
#line 1 "ENTRY_10d4d8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d8f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d4d910; body size 16 bytes.
#line 1 "ENTRY_10d4d910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d910(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d4d930; body size 9 bytes.
#line 1 "ENTRY_10d4d930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d930(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d507b0; body size 7 bytes.
#line 1 "ENTRY_10d507b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d507b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x120));
}


// Reference entry 10d507c0; body size 6 bytes.
#line 1 "ENTRY_10d507c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d507c0(void)

{
  return (char *)("SCICommittable");
}


// Reference entry 10d51170; body size 3 bytes.
#line 1 "ENTRY_10d51170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d51170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d51320; body size 28 bytes.
#line 1 "ENTRY_10d51320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51320(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d51350; body size 28 bytes.
#line 1 "ENTRY_10d51350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51350(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d51380; body size 28 bytes.
#line 1 "ENTRY_10d51380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51380(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d513b0; body size 28 bytes.
#line 1 "ENTRY_10d513b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d513b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d513e0; body size 28 bytes.
#line 1 "ENTRY_10d513e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d513e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d51410; body size 28 bytes.
#line 1 "ENTRY_10d51410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51410(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d51440; body size 28 bytes.
#line 1 "ENTRY_10d51440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51440(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d515c0; body size 10 bytes.
#line 1 "ENTRY_10d515c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d515c0(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2);
}


// Reference entry 10d51790; body size 115 bytes.
#line 1 "ENTRY_10d51790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51790(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  if ((int *)param_1[0x9a] != (int *)((0x0))) {
    (**(code **)(*(int *)param_1[0x9a] + 0x18))(param_1[0x97],uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x9e)))->int_release();
  param_1[0x9e] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[0x9b]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x9a] = (undefined4)(0);
    param_1[0x9b] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCShareManagerEventSink);
  piVar1 = (int *)((int *)param_1[0x98]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[0x97] = (undefined4)(0);
    param_1[0x98] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCSwfObjBCListener);
  thunk_FUN_110a9ef0();
  thunk_FUN_10203970();

  return;

 } catch (...) { }
}


// Reference entry 10d51f90; body size 24 bytes.
#line 1 "ENTRY_10d51f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d51f90(void)

{
  int iVar1;
  SCLibrary *pSVar2;
  uint3 uVar3;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  iVar1 = (int)(*(int *)(pSVar2 + 0x4c));
  uVar3 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x6c) == 3)) {
    return (int)((uint)uVar3 << 8);
  }
  return (int)(((uint)(uVar3) << 8 | (uint)(1)));
}


// Reference entry 10d52340; body size 7 bytes.
#line 1 "ENTRY_10d52340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10d52340(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x1c44));
}


// Reference entry 10d52780; body size 25 bytes.
#line 1 "ENTRY_10d52780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d52780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d52860; body size 78 bytes.
#line 1 "ENTRY_10d52860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d52860(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10d529d0; body size 33 bytes.
#line 1 "ENTRY_10d529d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d529d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    thunk_FUN_10d53f30();
  }
  return;
}


// Reference entry 10d52a00; body size 23 bytes.
#line 1 "ENTRY_10d52a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d52a00(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d53a40(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x30);
  return;
}


// Reference entry 10d52b20; body size 23 bytes.
#line 1 "ENTRY_10d52b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d52b20(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d53a40(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x30);
  return;
}


// Reference entry 10d52e50; body size 7 bytes.
#line 1 "ENTRY_10d52e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d52e50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d52ec0; body size 5 bytes.
#line 1 "ENTRY_10d52ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d52ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d530c0; body size 5 bytes.
#line 1 "ENTRY_10d530c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d530c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d530d0; body size 14 bytes.
#line 1 "ENTRY_10d530d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d530d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10d53a40(param_3);
  return;
}


// Reference entry 10d530f0; body size 14 bytes.
#line 1 "ENTRY_10d530f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d530f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10d53a40(param_3);
  return;
}


// Reference entry 10d53200; body size 9 bytes.
#line 1 "ENTRY_10d53200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d53200(undefined4 param_1,SCStr *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  piVar1 = (int *)(*(int **)(param_2 + 0xc));

  if ((int *)(piVar1) != (int *)0x0) {
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)(param_2))->int_release();
  *(undefined4*)param_2 = (undefined4)((SCStr *)(0));

  return;

 } catch (...) { }
}


// Reference entry 10d53210; body size 40 bytes.
#line 1 "ENTRY_10d53210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d53210(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10d53a40(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x30);
    return;
  }
  thunk_FUN_10d52b40(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10d53250; body size 5 bytes.
#line 1 "ENTRY_10d53250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d53250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d53260; body size 5 bytes.
#line 1 "ENTRY_10d53260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d53260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d53290; body size 5 bytes.
#line 1 "ENTRY_10d53290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d53290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d532c0; body size 6 bytes.
#line 1 "ENTRY_10d532c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d532c0(void)

{
  return (char *)("SCIAggregateBrowseDataSource");
}


// Reference entry 10d533d0; body size 5 bytes.
#line 1 "ENTRY_10d533d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d533d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d53420; body size 21 bytes.
#line 1 "ENTRY_10d53420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d53420(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53440; body size 11 bytes.
#line 1 "ENTRY_10d53440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d53440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53450; body size 11 bytes.
#line 1 "ENTRY_10d53450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d53450(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53460; body size 23 bytes.
#line 1 "ENTRY_10d53460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d53460(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53480; body size 3 bytes.
#line 1 "ENTRY_10d53480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d53480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d53490; body size 23 bytes.
#line 1 "ENTRY_10d53490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d53490(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53940; body size 9 bytes.
#line 1 "ENTRY_10d53940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d53940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAggregateBrowseDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53b30; body size 42 bytes.
#line 1 "ENTRY_10d53b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d53b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d54000; body size 14 bytes.
#line 1 "ENTRY_10d54000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10d54000(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 10d54020; body size 14 bytes.
#line 1 "ENTRY_10d54020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10d54020(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 10d54040; body size 15 bytes.
#line 1 "ENTRY_10d54040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::FUN_10d54040(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x30 + *param_1);
}


// Reference entry 10d54060; body size 3 bytes.
#line 1 "ENTRY_10d54060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54060(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d54070; body size 3 bytes.
#line 1 "ENTRY_10d54070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54070(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d54080; body size 6 bytes.
#line 1 "ENTRY_10d54080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10d54080(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x30);
  return (int *)(param_1);
}


// Reference entry 10d54090; body size 6 bytes.
#line 1 "ENTRY_10d54090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10d54090(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x30);
  return (int *)(param_1);
}


// Reference entry 10d54270; body size 63 bytes.
#line 1 "ENTRY_10d54270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10d54270(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x30);
  if (0x5555555 - (uVar1 >> 1) < uVar1) {
    return (uint)(0x5555555);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10d54380; body size 3 bytes.
#line 1 "ENTRY_10d54380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d54380(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10d54560; body size 3 bytes.
#line 1 "ENTRY_10d54560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d54570; body size 3 bytes.
#line 1 "ENTRY_10d54570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d54580; body size 3 bytes.
#line 1 "ENTRY_10d54580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d54590; body size 3 bytes.
#line 1 "ENTRY_10d54590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d545e0; body size 3 bytes.
#line 1 "ENTRY_10d545e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d545e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10d545f0; body size 6 bytes.
#line 1 "ENTRY_10d545f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d545f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10d54960; body size 90 bytes.
#line 1 "ENTRY_10d54960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10d54960(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5555556) {
    param_1 = (uint)(param_1 * 0x30);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10d549e0; body size 11 bytes.
#line 1 "ENTRY_10d549e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d549e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10d549f0; body size 23 bytes.
#line 1 "ENTRY_10d549f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d549f0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x30);
}


// Reference entry 10d54aa0; body size 165 bytes.
#line 1 "ENTRY_10d54aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d54aa0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  thunk_FUN_112af4e0("SCAggregateSearchDataSource",4,"Dumping DS Array. size=%zu, totalItems=%d",
                     (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0)) / 0x30,
                     *(undefined4 *)(param_1 + 0xb0));
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0xd0));
  iVar3 = (int)(0);
  if ((undefined4 *)(puVar4) != *(undefined4 **)(param_1 + 0xd4)) {
    do {
      puVar2 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)puVar4[4] != (undefined1 *)((0x0))) {
        puVar2 = (undefined1 *)((undefined1 *)puVar4[4]);
      }
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar4 != (undefined1 *)((0x0))) {
        puVar5 = (undefined1 *)((undefined1 *)*puVar4);
      }
      uVar1 = (undefined4)((**(code **)(*(int *)puVar4[2] + 0x58))(puVar4[1]));
      thunk_FUN_112af4e0("SCAggregateSearchDataSource",4,
                         "Entry %d:\n\t\t SCUri: %s\n\t\t Group: %s\n\t\t DataSource Size: %d\t\t Visible Elements: %d"
                         ,iVar3,puVar5,puVar2,uVar1);
      puVar4 = (undefined4 *)(puVar4 + 0xc);
      iVar3 = (int)(iVar3 + 1);
    } while ((undefined4 *)(puVar4) != *(undefined4 **)(param_1 + 0xd4));
  }
  return;
}


// Reference entry 10d54b70; body size 12 bytes.
#line 1 "ENTRY_10d54b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d54b70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d55ca0; body size 85 bytes.
#line 1 "ENTRY_10d55ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10d55ca0(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 0xd0));
  if (((param_2 < (uint)((*(int *)(param_1 + 0xd4) - iVar1) / 0x30)) &&
      (piVar2 = *(int **)(iVar1 + 8 + param_2 * 0x30),(int *)( piVar2) != (int *)0x0)) &&
     (*(char *)(iVar1 + 0x1c + param_2 * 0x30) != '\0')) {
    uVar3 = (uint)((**(code **)(*piVar2 + 0x58))());
    return (bool)(*(uint *)(iVar1 + 4 + param_2 * 0x30) < uVar3);
  }
  return (bool)(false);
}


// Reference entry 10d55d10; body size 6 bytes.
#line 1 "ENTRY_10d55d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d55d10(void)

{
  return (char *)("SCIAggregateBrowseDataSource");
}


// Reference entry 10d56da0; body size 47 bytes.
#line 1 "ENTRY_10d56da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d56da0(int param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_2 + 8) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_2 + 8) + 0x14))(*(undefined4 *)(param_1 + 0x8c));
  }
  *(undefined1*)(param_2 + 0x14) = (undefined1)(1);
  thunk_FUN_1145c930(param_2 + 0x20,0);
  return;
}


// Reference entry 10d57070; body size 6 bytes.
#line 1 "ENTRY_10d57070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d57070(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10d57080; body size 6 bytes.
#line 1 "ENTRY_10d57080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d57080(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10d58840; body size 40 bytes.
#line 1 "ENTRY_10d58840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d58840(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10d53a40(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x30);
    return;
  }
  thunk_FUN_10d52b40(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10d58c20; body size 23 bytes.
#line 1 "ENTRY_10d58c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d58c20(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x30);
}


// Reference entry 10d58ca0; body size 26 bytes.
#line 1 "ENTRY_10d58ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d58ca0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d58de0; body size 6 bytes.
#line 1 "ENTRY_10d58de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d58de0(void)

{
  return (char *)("SCIReorderable");
}


// Reference entry 10d58ed0; body size 16 bytes.
#line 1 "ENTRY_10d58ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d58ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d58ef0; body size 16 bytes.
#line 1 "ENTRY_10d58ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d58ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d59790; body size 7 bytes.
#line 1 "ENTRY_10d59790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d59790(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d597a0; body size 3 bytes.
#line 1 "ENTRY_10d597a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d597a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d597b0; body size 3 bytes.
#line 1 "ENTRY_10d597b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d597b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5a500; body size 6 bytes.
#line 1 "ENTRY_10d5a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d5a500(void)

{
  return (char *)("SCIReorderable");
}


// Reference entry 10d5a7c0; body size 7 bytes.
#line 1 "ENTRY_10d5a7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d5a7c0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d5a7d0; body size 7 bytes.
#line 1 "ENTRY_10d5a7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d5a7d0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d5a980; body size 3 bytes.
#line 1 "ENTRY_10d5a980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5a980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5acb0; body size 28 bytes.
#line 1 "ENTRY_10d5acb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5acb0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d5ace0; body size 28 bytes.
#line 1 "ENTRY_10d5ace0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5ace0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d5b2d0; body size 25 bytes.
#line 1 "ENTRY_10d5b2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5b2d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5b2f0; body size 33 bytes.
#line 1 "ENTRY_10d5b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d5b2f0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    thunk_FUN_10d5e270();
  }
  return;
}


// Reference entry 10d5b3f0; body size 29 bytes.
#line 1 "ENTRY_10d5b3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d5b3f0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d5d950(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 10d5b420; body size 27 bytes.
#line 1 "ENTRY_10d5b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d5b420(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d5d950(param_1,*(undefined4 *)(param_1 + 4),param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 10d5b770; body size 7 bytes.
#line 1 "ENTRY_10d5b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5b770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5b780; body size 150 bytes.
#line 1 "ENTRY_10d5b780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d5b780(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8);
    thunk_FUN_10d5bca0(param_1,iVar1 + param_1,iVar2 * 0x10 + param_1,param_4);
    thunk_FUN_10d5bca0(param_2 + iVar2 * -8,param_2,iVar1 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_10d5bca0(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_10d5bca0(param_1 + iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_10d5bca0(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 10d5cd50; body size 5 bytes.
#line 1 "ENTRY_10d5cd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10d5cd50(undefined1 param_1)

{
  return (undefined1)(param_1);
}


// Reference entry 10d5cf80; body size 92 bytes.
#line 1 "ENTRY_10d5cf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d5cf80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_1);
  if (iVar2 != *param_3) {
    piVar1 = (int *)((int *)param_3[1]);
    if ((int *)(piVar1) != (int *)0x0) {
      *param_3 = (int)(0);
      param_3[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_1);
    }
    *param_3 = (int)(iVar2);
    piVar1 = (int *)((int *)param_1[1]);
    param_3[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  thunk_FUN_10d5cd60(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10d5d6e0; body size 5 bytes.
#line 1 "ENTRY_10d5d6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5d6e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5da10; body size 9 bytes.
#line 1 "ENTRY_10d5da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d5da10(undefined4 param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[7]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_2[6] = (undefined4)(0);
    param_2[7] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_2[3]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_2[2] = (undefined4)(0);
    param_2[3] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_2[1]);

  if ((int *)(piVar1) != (int *)0x0) {
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10d5da20; body size 42 bytes.
#line 1 "ENTRY_10d5da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d5da20(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10d5d950(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_10d5b450(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10d5da60; body size 5 bytes.
#line 1 "ENTRY_10d5da60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5da60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5da70; body size 5 bytes.
#line 1 "ENTRY_10d5da70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5da70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5da80; body size 5 bytes.
#line 1 "ENTRY_10d5da80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5da80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5da90; body size 31 bytes.
#line 1 "ENTRY_10d5da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d5da90(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10d5d430(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}


// Reference entry 10d5dac0; body size 16 bytes.
#line 1 "ENTRY_10d5dac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5dac0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5dae0; body size 32 bytes.
#line 1 "ENTRY_10d5dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d5dae0(undefined4 *param_2)
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


// Reference entry 10d5db50; body size 21 bytes.
#line 1 "ENTRY_10d5db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d5db50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5db70; body size 23 bytes.
#line 1 "ENTRY_10d5db70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5db70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5db90; body size 3 bytes.
#line 1 "ENTRY_10d5db90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5db90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5dba0; body size 23 bytes.
#line 1 "ENTRY_10d5dba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5dba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5dd60; body size 9 bytes.
#line 1 "ENTRY_10d5dd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5dd60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAggregateHelperCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5e4d0; body size 5 bytes.
#line 1 "ENTRY_10d5e4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5e4d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[3]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[2] = (undefined4)(0);
    param_1[3] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10d5e550; body size 3 bytes.
#line 1 "ENTRY_10d5e550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e550(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5e560; body size 3 bytes.
#line 1 "ENTRY_10d5e560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5e8b0; body size 49 bytes.
#line 1 "ENTRY_10d5e8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::FUN_10d5e8b0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 5);
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x7ffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10d5e9c0; body size 3 bytes.
#line 1 "ENTRY_10d5e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5e9d0; body size 3 bytes.
#line 1 "ENTRY_10d5e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e9d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5e9e0; body size 3 bytes.
#line 1 "ENTRY_10d5e9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5e9f0; body size 3 bytes.
#line 1 "ENTRY_10d5e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5ea00; body size 3 bytes.
#line 1 "ENTRY_10d5ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d5ea00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10d5ea10; body size 6 bytes.
#line 1 "ENTRY_10d5ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5ea10(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10d5efc0; body size 9 bytes.
#line 1 "ENTRY_10d5efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d5efc0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 5);
}


// Reference entry 10d5fbb0; body size 35 bytes.
#line 1 "ENTRY_10d5fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5fbb0(int param_1)

{
  thunk_FUN_10d5d430(*(int *)(param_1 + 0xac),*(int *)(param_1 + 0xb0),
                     *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac) >> 3,param_1);
  return;
}


// Reference entry 10d5fc40; body size 6 bytes.
#line 1 "ENTRY_10d5fc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5fc40(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10d5fc50; body size 6 bytes.
#line 1 "ENTRY_10d5fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5fc50(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10d602a0; body size 3 bytes.
#line 1 "ENTRY_10d602a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d602a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d602b0; body size 3 bytes.
#line 1 "ENTRY_10d602b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d602b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d602c0; body size 42 bytes.
#line 1 "ENTRY_10d602c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d602c0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10d5d950(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_10d5b450(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10d60390; body size 28 bytes.
#line 1 "ENTRY_10d60390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d60390(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d603c0; body size 28 bytes.
#line 1 "ENTRY_10d603c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d603c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d61650; body size 21 bytes.
#line 1 "ENTRY_10d61650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10d61650(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAccountTransferAccountItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d635f0; body size 3 bytes.
#line 1 "ENTRY_10d635f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d635f0(void)

{
  return;
}


// Reference entry 10d63d90; body size 6 bytes.
#line 1 "ENTRY_10d63d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d63d90(void)

{
  return (char *)("SCISearchHistoryBrowseDataSource");
}


// Reference entry 10d63da0; body size 6 bytes.
#line 1 "ENTRY_10d63da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d63da0(void)

{
  return (char *)("SCISearchHistoryBrowseItem");
}


// Reference entry 10d63db0; body size 6 bytes.
#line 1 "ENTRY_10d63db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d63db0(void)

{
  return (char *)("SCISearchHistoryPageDataSource");
}


// Reference entry 10d63dc0; body size 6 bytes.
#line 1 "ENTRY_10d63dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d63dc0(void)

{
  return (char *)("SCISearchHistoryViewBrowseItem");
}


// Reference entry 10d63e40; body size 27 bytes.
#line 1 "ENTRY_10d63e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63e70; body size 27 bytes.
#line 1 "ENTRY_10d63e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63e70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63f20; body size 9 bytes.
#line 1 "ENTRY_10d63f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchHistoryBrowseDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63f30; body size 9 bytes.
#line 1 "ENTRY_10d63f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63f30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchHistoryBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63f40; body size 9 bytes.
#line 1 "ENTRY_10d63f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63f40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchHistoryPageDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63f50; body size 9 bytes.
#line 1 "ENTRY_10d63f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63f50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchHistoryViewBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d64170; body size 33 bytes.
#line 1 "ENTRY_10d64170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d64170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchHistoryClearActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d641a0; body size 47 bytes.
#line 1 "ENTRY_10d641a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d641a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchHistoryClearActionFactory);
  return (undefined4 *)(param_1);
}


// Reference entry 10d64590; body size 19 bytes.
#line 1 "ENTRY_10d64590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d64590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d64710; body size 7 bytes.
#line 1 "ENTRY_10d64710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d64710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d64730; body size 7 bytes.
#line 1 "ENTRY_10d64730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d64730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d64980; body size 19 bytes.
#line 1 "ENTRY_10d64980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d64980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d64bc0; body size 3 bytes.
#line 1 "ENTRY_10d64bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d64bc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d64bd0; body size 3 bytes.
#line 1 "ENTRY_10d64bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d64bd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d64be0; body size 7 bytes.
#line 1 "ENTRY_10d64be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d64be0(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d64bf0; body size 3 bytes.
#line 1 "ENTRY_10d64bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d64bf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d670b0; body size 6 bytes.
#line 1 "ENTRY_10d670b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d670b0(void)

{
  return (char *)("SCISearchHistoryBrowseDataSource");
}


// Reference entry 10d670c0; body size 6 bytes.
#line 1 "ENTRY_10d670c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d670c0(void)

{
  return (char *)("SCISearchHistoryBrowseItem");
}


// Reference entry 10d670d0; body size 6 bytes.
#line 1 "ENTRY_10d670d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d670d0(void)

{
  return (char *)("SCISearchHistoryPageDataSource");
}


// Reference entry 10d670e0; body size 6 bytes.
#line 1 "ENTRY_10d670e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d670e0(void)

{
  return (char *)("SCISearchHistoryViewBrowseItem");
}


// Reference entry 10d67160; body size 7 bytes.
#line 1 "ENTRY_10d67160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d67160(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d67170; body size 7 bytes.
#line 1 "ENTRY_10d67170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d67170(int *param_1)

{
  return (bool)(*param_1 != 0);
}


// Reference entry 10d67320; body size 3 bytes.
#line 1 "ENTRY_10d67320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d67320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d67330; body size 3 bytes.
#line 1 "ENTRY_10d67330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d67330(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d677c0; body size 28 bytes.
#line 1 "ENTRY_10d677c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d677c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d677f0; body size 28 bytes.
#line 1 "ENTRY_10d677f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d677f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d67820; body size 20 bytes.
#line 1 "ENTRY_10d67820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d67820(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (int)(0);
                    
                    
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


// Reference entry 10d68250; body size 18 bytes.
#line 1 "ENTRY_10d68250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68270; body size 25 bytes.
#line 1 "ENTRY_10d68270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d68270(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68290; body size 22 bytes.
#line 1 "ENTRY_10d68290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d68290(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d682b0; body size 18 bytes.
#line 1 "ENTRY_10d682b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d682b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68390; body size 22 bytes.
#line 1 "ENTRY_10d68390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d68390(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d683b0; body size 27 bytes.
#line 1 "ENTRY_10d683b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d683b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d683e0; body size 26 bytes.
#line 1 "ENTRY_10d683e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d683e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d68400; body size 78 bytes.
#line 1 "ENTRY_10d68400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d68400(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)param_1[1]);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    param_1[1] = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)0x0) {
    iVar3 = (int)((**(code **)(*piVar1 + 0xc))());
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10d68470; body size 25 bytes.
#line 1 "ENTRY_10d68470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d68470(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10d68490; body size 13 bytes.
#line 1 "ENTRY_10d68490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d68490(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d684a0; body size 13 bytes.
#line 1 "ENTRY_10d684a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d684a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d684b0; body size 3 bytes.
#line 1 "ENTRY_10d684b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d684b0(void)

{
  return;
}


// Reference entry 10d68650; body size 15 bytes.
#line 1 "ENTRY_10d68650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d68650(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10d686f0; body size 5 bytes.
#line 1 "ENTRY_10d686f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d686f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68700; body size 31 bytes.
#line 1 "ENTRY_10d68700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10d68700(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = *param_2, *(uint *)(param_1 + 0x10) <= (uint)(in_EAX))
     ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d68840; body size 5 bytes.
#line 1 "ENTRY_10d68840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68850; body size 5 bytes.
#line 1 "ENTRY_10d68850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68860; body size 5 bytes.
#line 1 "ENTRY_10d68860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68870; body size 5 bytes.
#line 1 "ENTRY_10d68870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68880; body size 5 bytes.
#line 1 "ENTRY_10d68880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68890; body size 22 bytes.
#line 1 "ENTRY_10d68890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d68890(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10d68920; body size 15 bytes.
#line 1 "ENTRY_10d68920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d68940; body size 15 bytes.
#line 1 "ENTRY_10d68940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d68960; body size 5 bytes.
#line 1 "ENTRY_10d68960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68970; body size 5 bytes.
#line 1 "ENTRY_10d68970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68980; body size 5 bytes.
#line 1 "ENTRY_10d68980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68990; body size 6 bytes.
#line 1 "ENTRY_10d68990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d68990(void)

{
  return (char *)("SCISearchResultBrowseItem");
}


// Reference entry 10d689a0; body size 27 bytes.
#line 1 "ENTRY_10d689a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d689a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d689d0; body size 26 bytes.
#line 1 "ENTRY_10d689d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d689d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d689f0; body size 26 bytes.
#line 1 "ENTRY_10d689f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d689f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d68a10; body size 9 bytes.
#line 1 "ENTRY_10d68a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68a10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68a20; body size 18 bytes.
#line 1 "ENTRY_10d68a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d68a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68a80; body size 11 bytes.
#line 1 "ENTRY_10d68a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d68a80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68a90; body size 11 bytes.
#line 1 "ENTRY_10d68a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d68a90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68b20; body size 11 bytes.
#line 1 "ENTRY_10d68b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d68b20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68b30; body size 16 bytes.
#line 1 "ENTRY_10d68b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68b50; body size 3 bytes.
#line 1 "ENTRY_10d68b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d68b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68b60; body size 52 bytes.
#line 1 "ENTRY_10d68b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68b60(undefined4 *param_1)

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


// Reference entry 10d68bb0; body size 9 bytes.
#line 1 "ENTRY_10d68bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchResultBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d69840; body size 19 bytes.
#line 1 "ENTRY_10d69840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d69840(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10d69900; body size 7 bytes.
#line 1 "ENTRY_10d69900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d69900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d69e50; body size 42 bytes.
#line 1 "ENTRY_10d69e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d69e50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)*param_1);
  if ((int *)(piVar2) != (int *)0x0) {
    *param_1 = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10d69e90; body size 14 bytes.
#line 1 "ENTRY_10d69e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10d69e90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == *param_2);
}


// Reference entry 10d69eb0; body size 14 bytes.
#line 1 "ENTRY_10d69eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::FUN_10d69eb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != *param_2);
}


// Reference entry 10d69fc0; body size 3 bytes.
#line 1 "ENTRY_10d69fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d69fc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d69fd0; body size 3 bytes.
#line 1 "ENTRY_10d69fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d69fd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d6a7e0; body size 31 bytes.
#line 1 "ENTRY_10d6a7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d6a7e0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18));
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10d6a830; body size 14 bytes.
#line 1 "ENTRY_10d6a830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d6a830(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10d6a850; body size 3 bytes.
#line 1 "ENTRY_10d6a850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a860; body size 3 bytes.
#line 1 "ENTRY_10d6a860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a870; body size 3 bytes.
#line 1 "ENTRY_10d6a870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a880; body size 3 bytes.
#line 1 "ENTRY_10d6a880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a890; body size 3 bytes.
#line 1 "ENTRY_10d6a890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a8a0; body size 3 bytes.
#line 1 "ENTRY_10d6a8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a8a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a8b0; body size 3 bytes.
#line 1 "ENTRY_10d6a8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a8b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a8c0; body size 3 bytes.
#line 1 "ENTRY_10d6a8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6ab60; body size 79 bytes.
#line 1 "ENTRY_10d6ab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d6ab60(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(*(int **)(param_2 + 8));
  *(int*)(param_2 + 8) = (int)(*piVar1);
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int*)(*piVar1 + 4) = (int)(param_2);
  }
  piVar1[1] = (int)(*(int *)(param_2 + 4));
  if ((int)(param_2) == *(int *)(*param_1 + 4)) {
    *(int**)(*param_1 + 4) = (int *)(piVar1);
    *piVar1 = (int)(param_2);
    *(int**)(param_2 + 4) = (int *)(piVar1);
    return;
  }
  piVar2 = (int *)(*(int **)(param_2 + 4));
  if (param_2 == *piVar2) {
    *piVar2 = (int)((int)piVar1);
    *piVar1 = (int)(param_2);
    *(int**)(param_2 + 4) = (int *)(piVar1);
    return;
  }
  piVar2[2] = (int)((int)piVar1);
  *piVar1 = (int)(param_2);
  *(int**)(param_2 + 4) = (int *)(piVar1);
  return;
}


// Reference entry 10d6abd0; body size 3 bytes.
#line 1 "ENTRY_10d6abd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d6abd0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10d6abe0; body size 11 bytes.
#line 1 "ENTRY_10d6abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6abe0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d6abf0; body size 83 bytes.
#line 1 "ENTRY_10d6abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d6abf0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(*(int *)(iVar1 + 8));
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int**)(*(int *)(iVar1 + 8) + 4) = (int *)(param_2);
  }
  *(int*)(iVar1 + 4) = (int)(param_2[1]);
  if ((int *)(param_2) == *(int **)(*param_1 + 4)) {
    *(int*)(*param_1 + 4) = (int)(iVar1);
    *(int**)(iVar1 + 8) = (int *)(param_2);
    param_2[1] = (int)(iVar1);
    return;
  }
  piVar2 = (int *)((int *)param_2[1]);
  if ((int *)(param_2) == (int *)piVar2[2]) {
    piVar2[2] = (int)(iVar1);
    *(int**)(iVar1 + 8) = (int *)(param_2);
    param_2[1] = (int)(iVar1);
    return;
  }
  *piVar2 = (int)(iVar1);
  *(int**)(iVar1 + 8) = (int *)(param_2);
  param_2[1] = (int)(iVar1);
  return;
}


// Reference entry 10d6ad50; body size 90 bytes.
#line 1 "ENTRY_10d6ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10d6ad50(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0xaaaaaab) {
    param_1 = (uint)(param_1 * 0x18);
    if (param_1 < 0x1000) {
      if (param_1 != 0) {
        pvVar1 = (void *)(operator_new(param_1));
        return (void *)(pvVar1);
      }
      return (void *)((void *)0x0);
    }
    if (param_1 < param_1 + 0x23) {
      pvVar1 = (void *)(operator_new(param_1 + 0x23));
      if ((void *)(pvVar1) != (void *)0x0) {
        pvVar2 = (void *)((void *)((int)pvVar1 + 0x23U & 0xffffffe0));
        *(void**)((int)pvVar2 - 4) = (void *)(pvVar1);
        return (void *)(pvVar2);
      }
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10d6ba90; body size 57 bytes.
#line 1 "ENTRY_10d6ba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d6ba90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x18);
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


// Reference entry 10d6bae0; body size 60 bytes.
#line 1 "ENTRY_10d6bae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d6bae0(int param_1,int param_2)

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


// Reference entry 10d6bb90; body size 8 bytes.
#line 1 "ENTRY_10d6bb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d6bb90(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10d6bba0; body size 11 bytes.
#line 1 "ENTRY_10d6bba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::FUN_10d6bba0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10d6f0b0; body size 6 bytes.
#line 1 "ENTRY_10d6f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d6f0b0(void)

{
  return (char *)("SCISearchResultBrowseItem");
}


// Reference entry 10d6f2a0; body size 7 bytes.
#line 1 "ENTRY_10d6f2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d6f2a0(int *param_1)

{
  return (bool)(*param_1 == 0);
}


// Reference entry 10d6f370; body size 11 bytes.
#line 1 "ENTRY_10d6f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d6f370(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x298) == 0);
}


// Reference entry 10d6f390; body size 6 bytes.
#line 1 "ENTRY_10d6f390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d6f390(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10d6f3a0; body size 6 bytes.
#line 1 "ENTRY_10d6f3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d6f3a0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10d71350; body size 3 bytes.
#line 1 "ENTRY_10d71350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d71350(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d73860; body size 4 bytes.
#line 1 "ENTRY_10d73860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d73860(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d741c0; body size 26 bytes.
#line 1 "ENTRY_10d741c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::FUN_10d741c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d743f0; body size 5 bytes.
#line 1 "ENTRY_10d743f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d743f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d74400; body size 5 bytes.
#line 1 "ENTRY_10d74400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d74400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d74410; body size 5 bytes.
#line 1 "ENTRY_10d74410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d74410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d74420; body size 70 bytes.
#line 1 "ENTRY_10d74420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d74420(undefined4 *param_1)

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
  return (undefined4 *)(param_1);
}


// Reference entry 10d74480; body size 70 bytes.
#line 1 "ENTRY_10d74480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d74480(undefined4 *param_1)

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
  return (undefined4 *)(param_1);
}


// Reference entry 10d744e0; body size 70 bytes.
#line 1 "ENTRY_10d744e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d744e0(undefined4 *param_1)

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
  return (undefined4 *)(param_1);
}


// Reference entry 10d74600; body size 16 bytes.
#line 1 "ENTRY_10d74600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d74600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d74620; body size 26 bytes.
#line 1 "ENTRY_10d74620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::FUN_10d74620(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


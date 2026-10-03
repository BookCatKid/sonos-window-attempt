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
namespace std { typedef int _Iterator_base0; }
struct SCILifecycleAppProviderSwigBase { char _pad; SCILifecycleAppProviderSwigBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int isAppWithSWGenInstalled; };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int getSCHousehold(A...) { return 0; } template<class... A> static int getSingleton(A...) { return 0; } static int getRootObject; };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); template<class... A> static int format(A...) { return 0; } template<class... A> static int int_addref(A...) { return 0; } template<class... A> static int int_allocRep(A...) { return 0; } template<class... A> static int int_release(A...) { return 0; } template<class... A> static int length(A...) { return 0; } static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } template<class... A> static int setFromUTF16(A...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); }; }
struct Actions { char _pad; Actions(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Canceling { char _pad; Canceling(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Choose { char _pad; Choose(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct CurrentEvent { char _pad; CurrentEvent(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Failure { char _pad; Failure(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Feature { char _pad; Feature(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Go { char _pad; Go(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Implemented { char _pad; Implemented(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct InAppMessaging { char _pad; InAppMessaging(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Not { char _pad; Not(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Ordinal_7 { char _pad; Ordinal_7(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PhoneNumber { char _pad; PhoneNumber(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct PhoneNumberValid { char _pad; PhoneNumberValid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIEventSink { char _pad; SCIEventSink(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIIntegerSettingsProperty { char _pad; SCIIntegerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCISettingsProperty { char _pad; SCISettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCIWebsocketDelegate { char _pad; SCIWebsocketDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCReportManager { char _pad; SCReportManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCServiceDescriptorManager { char _pad; SCServiceDescriptorManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCThreadSafeDec { char _pad; SCThreadSafeDec(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SCThreadSafeTestAndClear { char _pad; SCThreadSafeTestAndClear(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct SearchablesManager { char _pad; SearchablesManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Services { char _pad; Services(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Settings { char _pad; Settings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Successfully { char _pad; Successfully(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Type { char _pad; Type(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct UAEPAVSCIObj { char _pad; UAEPAVSCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
struct Yet { char _pad; Yet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); template<class T> operator T*(); template<class T> operator T(); };
typedef void *BLE;
typedef void *HTTP;
typedef void *INVALID;
typedef void *LOCALMUSICBROWSE_CPUDN;
typedef void *LOCK;
typedef void *SSDP;
typedef void *UNLOCK;
typedef void *WARNING;
typedef void *WIFI;
typedef void *XZ;
typedef void *YAHPAJ;
typedef void *Z;
typedef void *_CSharp_SCALBUMART_EULA_FLAG_NZ_get;
typedef void *_CSharp_SCALBUMART_EULA_FLAG_NZ_get_0;
typedef void *_CSharp_SCALBUMART_RATING_THUMBSDOWN_get;
typedef void *_CSharp_SCALBUMART_RATING_THUMBSDOWN_get_0;
typedef void *_CSharp_SCIDirectControlApplication_controlsLockscreen;
typedef void *_CSharp_SCIDirectControlApplication_controlsLockscreen_4;
typedef void *_CSharp_SCIDisplayType_getTheme;
typedef void *_CSharp_SCIDisplayType_getTheme_4;
typedef void *_CSharp_SCIExperimentManager_getSingleton;
typedef void *_CSharp_SCIExperimentManager_getSingleton_0;
typedef void *_CSharp_SCIHOUSEHOLD_INTERFACE_get;
typedef void *_CSharp_SCIHOUSEHOLD_INTERFACE_get_0;
typedef void *_CSharp_SCIInAppProduct_getSKU;
typedef void *_CSharp_SCIInAppProduct_getSKU_4;
typedef void *_CSharp_SCILibrary_SCLibUIThreadCallback;
typedef void *_CSharp_SCILibrary_SCLibUIThreadCallback_4;
typedef void *_CSharp_SCILibrary_SC_URL_SONOS_DEMO_get;
typedef void *_CSharp_SCILibrary_SC_URL_SONOS_DEMO_get_0;
typedef void *_CSharp_SCINetworkManagement_suspendNetworking;
typedef void *_CSharp_SCINetworkManagement_suspendNetworking_4;
typedef void *_CSharp_SCINowPlayingTransport_createSetRepeatModeOp;
typedef void *_CSharp_SCINowPlayingTransport_createSetRepeatModeOp_8;
typedef void *_CSharp_SCIPropertyBag_getIntProp__SWIG_0;
typedef void *_CSharp_SCIPropertyBag_getIntProp__SWIG_0_8;
typedef void *_CSharp_SCISelectionManager_getNumOfSelectedItems;
typedef void *_CSharp_SCISelectionManager_getNumOfSelectedItems_4;
typedef void *_CSharp_SCIServiceDescriptor_getDescription;
typedef void *_CSharp_SCIServiceDescriptor_getDescription_4;
typedef void *_CSharp_SCIWebsocketCallbackSwigBase_director_connect;
typedef void *_CSharp_SCIWebsocketCallbackSwigBase_director_connect_24;
typedef void *_CSharp_SCI_CRASH_REPORT_VALUE_RESUMED_get;
typedef void *_CSharp_SCI_CRASH_REPORT_VALUE_RESUMED_get_0;
typedef void *_CSharp_SCI_FEATUREMANAGER_IN_APP_MESSAGING_get;
typedef void *_CSharp_SCI_FEATUREMANAGER_IN_APP_MESSAGING_get_0;
typedef void *_CSharp_SCLANDING_PAGE_URL_PROP_ID_get;
typedef void *_CSharp_SCLANDING_PAGE_URL_PROP_ID_get_0;
typedef void *_CSharp_SCLibParameters_m_sHostModel_get;
typedef void *_CSharp_SCLibParameters_m_sHostModel_get_4;
typedef void *_CSharp_SC_SVCACCTPROP_ACTIONS_get;
typedef void *_CSharp_SC_SVCACCTPROP_ACTIONS_get_0;
typedef void *_CSharp_WIZARD_PAGE_EXIT_ON_BACKGROUND_get;
typedef void *_CSharp_WIZARD_PAGE_EXIT_ON_BACKGROUND_get_0;
typedef void *_CSharp_delete_SCINfcDelegateSwigBase;
typedef void *_CSharp_delete_SCINfcDelegateSwigBase_4;
typedef void *_CSharp_delete_SCIServiceAccountFilter;
typedef void *_CSharp_delete_SCIServiceAccountFilter_4;
typedef void *_func_void_void_ptr;
using namespace std;
struct Recovered_Bulk { char _pad; undefined4 * __thiscall FUN_100030c1(undefined4 *param_2); template<class... A> int FUN_100030c1(A...); undefined4 * __thiscall FUN_100030df(byte param_2); template<class... A> int FUN_100030df(A...); undefined4 * __thiscall FUN_100030e4(byte param_2); template<class... A> int FUN_100030e4(A...); undefined4 __thiscall FUN_10003116(byte param_2); template<class... A> int FUN_10003116(A...); int __thiscall FUN_10003139(SCStr *param_2); template<class... A> int FUN_10003139(A...); undefined4 * __thiscall FUN_10003148(byte param_2); template<class... A> int FUN_10003148(A...); undefined4 * __thiscall FUN_10003175(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10003175(A...); void __thiscall FUN_100031ca(int param_2); template<class... A> int FUN_100031ca(A...); undefined4 * __thiscall FUN_10003251(byte param_2); template<class... A> int FUN_10003251(A...); void __thiscall FUN_10003265(SCStr *param_2,SCStr *param_3); template<class... A> int FUN_10003265(A...); undefined4 * __thiscall FUN_10003274(undefined4 *param_2); template<class... A> int FUN_10003274(A...); undefined4 __thiscall FUN_100032b0(undefined4 param_2); template<class... A> int FUN_100032b0(A...); undefined4 * __thiscall FUN_1000330f(byte param_2); template<class... A> int FUN_1000330f(A...); undefined4 * __thiscall FUN_10003323(byte param_2); template<class... A> int FUN_10003323(A...); undefined4 * __thiscall FUN_1000332d(byte param_2); template<class... A> int FUN_1000332d(A...); int * __thiscall FUN_1000335a(int *param_2); template<class... A> int FUN_1000335a(A...); undefined4 * __thiscall FUN_10003369(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6); template<class... A> int FUN_10003369(A...); undefined4 * __thiscall FUN_100033a5(byte param_2); template<class... A> int FUN_100033a5(A...); undefined4 * __thiscall FUN_100033be(byte param_2); template<class... A> int FUN_100033be(A...); undefined4 * __thiscall FUN_100033d2(byte param_2); template<class... A> int FUN_100033d2(A...); undefined4 * __thiscall FUN_100033e6(undefined4 *param_2); template<class... A> int FUN_100033e6(A...); void __thiscall FUN_100033f5(int param_2); template<class... A> int FUN_100033f5(A...); void __thiscall FUN_10003404(undefined4 param_2); template<class... A> int FUN_10003404(A...); undefined4 * __thiscall FUN_10003418(byte param_2); template<class... A> int FUN_10003418(A...); undefined4 * __thiscall FUN_10003427(byte param_2); template<class... A> int FUN_10003427(A...); undefined4 * __thiscall FUN_10003431(byte param_2); template<class... A> int FUN_10003431(A...); undefined4 * __thiscall FUN_10003472(byte param_2); template<class... A> int FUN_10003472(A...); void __thiscall FUN_10003481(undefined4 param_2,undefined4 param_3); template<class... A> int FUN_10003481(A...); int * __thiscall FUN_100034fe(void *param_2,uint param_3); template<class... A> int FUN_100034fe(A...); void __thiscall FUN_1000355d(int *param_2); template<class... A> int FUN_1000355d(A...); undefined4 * __thiscall FUN_100035cb(byte param_2); template<class... A> int FUN_100035cb(A...); undefined4 * __thiscall FUN_100035d0(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_100035d0(A...); void __thiscall FUN_100035df(int *param_2); template<class... A> int FUN_100035df(A...); undefined4 * __thiscall FUN_10003625(int param_2); template<class... A> int FUN_10003625(A...); undefined4 * __thiscall FUN_10003634(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_10003634(A...); undefined4 * __thiscall FUN_10003639(byte param_2); template<class... A> int FUN_10003639(A...); undefined1 __thiscall FUN_10003643(byte *param_2); template<class... A> int FUN_10003643(A...); undefined4 * __thiscall FUN_10003648(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_10003648(A...); void __thiscall FUN_10003666(int param_2,ushort param_3); template<class... A> int FUN_10003666(A...); undefined4 * __thiscall FUN_100036a2(byte param_2); template<class... A> int FUN_100036a2(A...); undefined4 * __thiscall FUN_1000371a(byte param_2); template<class... A> int FUN_1000371a(A...); undefined4 * __thiscall FUN_1000373d(byte param_2); template<class... A> int FUN_1000373d(A...); bool __thiscall FUN_10003742(int param_2,short *param_3); template<class... A> int FUN_10003742(A...); void __thiscall FUN_10003747(SCStr *param_2); template<class... A> int FUN_10003747(A...); void __thiscall FUN_1000375b(int param_2); template<class... A> int FUN_1000375b(A...); int __thiscall FUN_100037ba(undefined4 param_2); template<class... A> int FUN_100037ba(A...); undefined4 * __thiscall FUN_10003846(byte param_2); template<class... A> int FUN_10003846(A...); undefined4 * __thiscall FUN_10003850(byte param_2); template<class... A> int FUN_10003850(A...); void __thiscall FUN_10003896(int *param_2,char param_3); template<class... A> int FUN_10003896(A...); undefined4 * __thiscall FUN_100038c8(byte param_2); template<class... A> int FUN_100038c8(A...); undefined4 * __thiscall FUN_100038f0(byte param_2); template<class... A> int FUN_100038f0(A...); undefined4 __thiscall FUN_10003904(int *param_2,int param_3,int param_4); template<class... A> int FUN_10003904(A...); undefined4 * __thiscall FUN_1000390e(undefined4 *param_2,int *param_3); template<class... A> int FUN_1000390e(A...); int __thiscall FUN_1000394a(byte param_2); template<class... A> int FUN_1000394a(A...); void __thiscall FUN_1000394f(undefined *param_2,int param_3); template<class... A> int FUN_1000394f(A...); int * __thiscall FUN_1000396d(int *param_2,int param_3,int *param_4); template<class... A> int FUN_1000396d(A...); undefined4 * __thiscall FUN_10003990(byte param_2); template<class... A> int FUN_10003990(A...); undefined4 * __thiscall FUN_1000399f(byte param_2); template<class... A> int FUN_1000399f(A...); undefined4 * __thiscall FUN_100039a9(byte param_2); template<class... A> int FUN_100039a9(A...); undefined4 __thiscall FUN_100039fe(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); template<class... A> int FUN_100039fe(A...); int * __thiscall FUN_10003a1c(int *param_2,int param_3,int *param_4); template<class... A> int FUN_10003a1c(A...); undefined4 __thiscall FUN_10003a3a(undefined4 param_2); template<class... A> int FUN_10003a3a(A...); undefined4 * __thiscall FUN_10003a3f(byte param_2); template<class... A> int FUN_10003a3f(A...); void __thiscall FUN_10003a67(SCStr *param_2,SCStr *param_3); template<class... A> int FUN_10003a67(A...); undefined4 * __thiscall FUN_10003a6c(undefined4 *param_2,SCStr *param_3); template<class... A> int FUN_10003a6c(A...); void __thiscall FUN_10003a80(int *param_2); template<class... A> int FUN_10003a80(A...); };

extern int FUN_10003229(...);
extern int FUN_1000322e(...);
extern int FUN_1005a7b3(...);
extern int FUN_10065348(...);
extern int FUN_1006aac8(...);
extern int FUN_10091f7e(...);
extern int FUN_10c8de80(...);
extern int FUN_1118c950(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _close(...);
extern __declspec(dllimport) int _difftime64(...);
extern int _eh_vector_destructor_iterator_(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _read(...);
extern __declspec(dllimport) int _time64(...);
extern int beginPostSetupUpdate(...);
extern int d(...);
extern int format(...);
extern int getSCHousehold(...);
extern int getSingleton(...);
extern int int_addref(...);
extern int int_allocRep(...);
extern int int_release(...);
extern int length(...);
extern __declspec(dllimport) int memmove(...);
extern int op_ctor(...);
extern int op_eq(...);
extern int op_inc(...);
extern int op_lt(...);
extern int operator_new(...);
extern int setFromUTF16(...);
extern __declspec(dllimport) int strncmp(...);
extern int thunk_FUN_10118fc0(...);
extern int thunk_FUN_1011f530(...);
extern int thunk_FUN_1012a4c0(...);
extern int thunk_FUN_1012aad0(...);
extern int thunk_FUN_10137570(...);
extern int thunk_FUN_10139480(...);
extern int thunk_FUN_1013cfb0(...);
extern int thunk_FUN_101a2e90(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b9190(...);
extern int thunk_FUN_101b91d0(...);
extern int thunk_FUN_101b9240(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101b9dd0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101c39c0(...);
extern int thunk_FUN_101ccf90(...);
extern int thunk_FUN_101da390(...);
extern int thunk_FUN_101dbeb0(...);
extern int thunk_FUN_101dfd70(...);
extern int thunk_FUN_101e7240(...);
extern int thunk_FUN_101e8900(...);
extern int thunk_FUN_101e8ca0(...);
extern int thunk_FUN_101ea3a0(...);
extern int thunk_FUN_101ea590(...);
extern int thunk_FUN_101eaad0(...);
extern int thunk_FUN_101eb2b0(...);
extern int thunk_FUN_101ed0d0(...);
extern int thunk_FUN_101ed5f0(...);
extern int thunk_FUN_101f08d0(...);
extern int thunk_FUN_101f11d0(...);
extern int thunk_FUN_101f4a30(...);
extern int thunk_FUN_101f53d0(...);
extern int thunk_FUN_101fce40(...);
extern int thunk_FUN_10220920(...);
extern int thunk_FUN_102226d0(...);
extern int thunk_FUN_102432c0(...);
extern int thunk_FUN_10251790(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_1025ed70(...);
extern int thunk_FUN_1025f580(...);
extern int thunk_FUN_102611c0(...);
extern int thunk_FUN_10263a50(...);
extern int thunk_FUN_10266ff0(...);
extern int thunk_FUN_102712f0(...);
extern int thunk_FUN_10298a20(...);
extern int thunk_FUN_1029c880(...);
extern int thunk_FUN_1029ecd0(...);
extern int thunk_FUN_1029f7a0(...);
extern int thunk_FUN_102a3580(...);
extern int thunk_FUN_102a7a90(...);
extern int thunk_FUN_102a8630(...);
extern int thunk_FUN_102a9bb0(...);
extern int thunk_FUN_102b2be0(...);
extern int thunk_FUN_102b3d00(...);
extern int thunk_FUN_102c0920(...);
extern int thunk_FUN_102c6920(...);
extern int thunk_FUN_102cf580(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_103027b0(...);
extern int thunk_FUN_103056e0(...);
extern int thunk_FUN_1030b3b0(...);
extern int thunk_FUN_1030b7d0(...);
extern int thunk_FUN_1035ccc0(...);
extern int thunk_FUN_10361c90(...);
extern int thunk_FUN_10367bba(...);
extern int thunk_FUN_10367c1e(...);
extern int thunk_FUN_10368690(...);
extern int thunk_FUN_10368770(...);
extern int thunk_FUN_1037e850(...);
extern int thunk_FUN_1037f130(...);
extern int thunk_FUN_103869d0(...);
extern int thunk_FUN_10387aa0(...);
extern int thunk_FUN_10390660(...);
extern int thunk_FUN_103a4150(...);
extern int thunk_FUN_103abbc0(...);
extern int thunk_FUN_103ac6e0(...);
extern int thunk_FUN_103b7860(...);
extern int thunk_FUN_103bd0b0(...);
extern int thunk_FUN_103be5e0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_103e6620(...);
extern int thunk_FUN_103eafc0(...);
extern int thunk_FUN_103eb600(...);
extern int thunk_FUN_103f29b0(...);
extern int thunk_FUN_103fee70(...);
extern int thunk_FUN_10400590(...);
extern int thunk_FUN_10417a50(...);
extern int thunk_FUN_1041d6a0(...);
extern int thunk_FUN_10440860(...);
extern int thunk_FUN_10443ff4(...);
extern int thunk_FUN_10444110(...);
extern int thunk_FUN_1046b5c0(...);
extern int thunk_FUN_1046ba90(...);
extern int thunk_FUN_104a1af0(...);
extern int thunk_FUN_104a1af3(...);
extern int thunk_FUN_104b0b50(...);
extern int thunk_FUN_104bce60(...);
extern int thunk_FUN_104bcee0(...);
extern int thunk_FUN_104d4740(...);
extern int thunk_FUN_1050b490(...);
extern int thunk_FUN_1052dd30(...);
extern int thunk_FUN_10566e82(...);
extern int thunk_FUN_10568060(...);
extern int thunk_FUN_10593790(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105b3690(...);
extern int thunk_FUN_105ba3e0(...);
extern int thunk_FUN_105bebd0(...);
extern int thunk_FUN_105bfd60(...);
extern int thunk_FUN_105cb030(...);
extern int thunk_FUN_105cb6f0(...);
extern int thunk_FUN_105cc420(...);
extern int thunk_FUN_105ccc10(...);
extern int thunk_FUN_105d5ad0(...);
extern int thunk_FUN_105f5d20(...);
extern int thunk_FUN_105f5df0(...);
extern int thunk_FUN_105f60e0(...);
extern int thunk_FUN_105f6290(...);
extern int thunk_FUN_105ff930(...);
extern int thunk_FUN_1060191d(...);
extern int thunk_FUN_10603120(...);
extern int thunk_FUN_106045d0(...);
extern int thunk_FUN_10604700(...);
extern int thunk_FUN_10604790(...);
extern int thunk_FUN_10604820(...);
extern int thunk_FUN_10605060(...);
extern int thunk_FUN_106050a0(...);
extern int thunk_FUN_106198d0(...);
extern int thunk_FUN_1061c630(...);
extern int thunk_FUN_1062e1ea(...);
extern int thunk_FUN_1062f600(...);
extern int thunk_FUN_10643880(...);
extern int thunk_FUN_10687b10(...);
extern int thunk_FUN_10697db0(...);
extern int thunk_FUN_10699790(...);
extern int thunk_FUN_1069e3f0(...);
extern int thunk_FUN_106a03d0(...);
extern int thunk_FUN_106c85d0(...);
extern int thunk_FUN_106de7d0(...);
extern int thunk_FUN_106e5da0(...);
extern int thunk_FUN_106e6870(...);
extern int thunk_FUN_106f8ee0(...);
extern int thunk_FUN_10703780(...);
extern int thunk_FUN_1072c058(...);
extern int thunk_FUN_1072c5b0(...);
extern int thunk_FUN_1072c940(...);
extern int thunk_FUN_1072cfd0(...);
extern int thunk_FUN_1072d5d0(...);
extern int thunk_FUN_1074d0e4(...);
extern int thunk_FUN_1074d1b0(...);
extern int thunk_FUN_1076d930(...);
extern int thunk_FUN_10785880(...);
extern int thunk_FUN_10790839(...);
extern int thunk_FUN_10792d60(...);
extern int thunk_FUN_107d0470(...);
extern int thunk_FUN_107ec337(...);
extern int thunk_FUN_107eca70(...);
extern int thunk_FUN_107efcd0(...);
extern int thunk_FUN_1081af40(...);
extern int thunk_FUN_10828470(...);
extern int thunk_FUN_1082f6f0(...);
extern int thunk_FUN_10873290(...);
extern int thunk_FUN_10884560(...);
extern int thunk_FUN_108a2b30(...);
extern int thunk_FUN_108b17b0(...);
extern int thunk_FUN_108b17c0(...);
extern int thunk_FUN_108e4080(...);
extern int thunk_FUN_109040a0(...);
extern int thunk_FUN_109086e5(...);
extern int thunk_FUN_10909090(...);
extern int thunk_FUN_109329d0(...);
extern int thunk_FUN_109e3daf(...);
extern int thunk_FUN_109e41f0(...);
extern int thunk_FUN_109efc90(...);
extern int thunk_FUN_10a09f31(...);
extern int thunk_FUN_10a0a1f0(...);
extern int thunk_FUN_10a0dd1d(...);
extern int thunk_FUN_10a0e080(...);
extern int thunk_FUN_10a1bf70(...);
extern int thunk_FUN_10a80e5d(...);
extern int thunk_FUN_10a80ef0(...);
extern int thunk_FUN_10a880a0(...);
extern int thunk_FUN_10a8f350(...);
extern int thunk_FUN_10a98960(...);
extern int thunk_FUN_10a9ea50(...);
extern int thunk_FUN_10abf7a0(...);
extern int thunk_FUN_10ae6e20(...);
extern int thunk_FUN_10af42f0(...);
extern int thunk_FUN_10af6950(...);
extern int thunk_FUN_10b013b0(...);
extern int thunk_FUN_10b0e9d0(...);
extern int thunk_FUN_10b2dda0(...);
extern int thunk_FUN_10b2f4a0(...);
extern int thunk_FUN_10b32be0(...);
extern int thunk_FUN_10b474e0(...);
extern int thunk_FUN_10b5e5b8(...);
extern int thunk_FUN_10b5ef00(...);
extern int thunk_FUN_10b899a0(...);
extern int thunk_FUN_10b90b90(...);
extern int thunk_FUN_10b98a00(...);
extern int thunk_FUN_10b9a030(...);
extern int thunk_FUN_10bdb900(...);
extern int thunk_FUN_10bf1b90(...);
extern int thunk_FUN_10c20d40(...);
extern int thunk_FUN_10c20dd9(...);
extern int thunk_FUN_10c2c12c(...);
extern int thunk_FUN_10c2c140(...);
extern int thunk_FUN_10c414e0(...);
extern int thunk_FUN_10c47110(...);
extern int thunk_FUN_10c50220(...);
extern int thunk_FUN_10c505e0(...);
extern int thunk_FUN_10c55f20(...);
extern int thunk_FUN_10c56240(...);
extern int thunk_FUN_10c5f1d0(...);
extern int thunk_FUN_10c5f430(...);
extern int thunk_FUN_10c5f450(...);
extern int thunk_FUN_10c5f8a0(...);
extern int thunk_FUN_10c5fc80(...);
extern int thunk_FUN_10c61010(...);
extern int thunk_FUN_10c62d50(...);
extern int thunk_FUN_10c68f83(...);
extern int thunk_FUN_10c69080(...);
extern int thunk_FUN_10c8e860(...);
extern int thunk_FUN_10c90ce0(...);
extern int thunk_FUN_10c97560(...);
extern int thunk_FUN_10c98460(...);
extern int thunk_FUN_10c98c80(...);
extern int thunk_FUN_10c9a550(...);
extern int thunk_FUN_10c9bf20(...);
extern int thunk_FUN_10ca3f90(...);
extern int thunk_FUN_10cb1ab0(...);
extern int thunk_FUN_10cbd303(...);
extern int thunk_FUN_10cbd320(...);
extern int thunk_FUN_10cd3b10(...);
extern int thunk_FUN_10cd3b40(...);
extern int thunk_FUN_10cdf570(...);
extern int thunk_FUN_10cdffe0(...);
extern int thunk_FUN_10ce04e0(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10cf5f30(...);
extern int thunk_FUN_10d137e0(...);
extern int thunk_FUN_10d19550(...);
extern int thunk_FUN_10d19610(...);
extern int thunk_FUN_10d4b770(...);
extern int thunk_FUN_10d58c00(...);
extern int thunk_FUN_10d5b140(...);
extern int thunk_FUN_10d9efd0(...);
extern int thunk_FUN_10da0b10(...);
extern int thunk_FUN_10da1370(...);
extern int thunk_FUN_10da15c0(...);
extern int thunk_FUN_10da1740(...);
extern int thunk_FUN_10da1830(...);
extern int thunk_FUN_10da1e80(...);
extern int thunk_FUN_10da79f0(...);
extern int thunk_FUN_10dcdec0(...);
extern int thunk_FUN_10dcf260(...);
extern int thunk_FUN_10dd5840(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def290(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10df10f0(...);
extern int thunk_FUN_10df1160(...);
extern int thunk_FUN_10df6f00(...);
extern int thunk_FUN_10df95e0(...);
extern int thunk_FUN_10dfaa00(...);
extern int thunk_FUN_10dfb8f0(...);
extern int thunk_FUN_10dfba00(...);
extern int thunk_FUN_10dfdbf0(...);
extern int thunk_FUN_10e0f250(...);
extern int thunk_FUN_10e10270(...);
extern int thunk_FUN_10e23520(...);
extern int thunk_FUN_10e2c4f0(...);
extern int thunk_FUN_10e3c400(...);
extern int thunk_FUN_10e50d20(...);
extern int thunk_FUN_10e538a0(...);
extern int thunk_FUN_10e5a5e0(...);
extern int thunk_FUN_10e5e6b0(...);
extern int thunk_FUN_10e9cb90(...);
extern int thunk_FUN_10e9cba0(...);
extern int thunk_FUN_10ea2980(...);
extern int thunk_FUN_10eac8c0(...);
extern int thunk_FUN_10eacd60(...);
extern int thunk_FUN_10eae120(...);
extern int thunk_FUN_10eb1b50(...);
extern int thunk_FUN_10eb1dc0(...);
extern int thunk_FUN_10eb22a0(...);
extern int thunk_FUN_10eb2fc0(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10eb6cc0(...);
extern int thunk_FUN_10eba500(...);
extern int thunk_FUN_10ebb810(...);
extern int thunk_FUN_10ebc110(...);
extern int thunk_FUN_10ec0a20(...);
extern int thunk_FUN_10ec1250(...);
extern int thunk_FUN_10ec1a10(...);
extern int thunk_FUN_10ec1b40(...);
extern int thunk_FUN_10ec1d40(...);
extern int thunk_FUN_10ec20b0(...);
extern int thunk_FUN_10ec2270(...);
extern int thunk_FUN_10ec2880(...);
extern int thunk_FUN_10ec2970(...);
extern int thunk_FUN_10ec3610(...);
extern int thunk_FUN_10ec6870(...);
extern int thunk_FUN_10ec6900(...);
extern int thunk_FUN_10ec7940(...);
extern int thunk_FUN_10ec7c30(...);
extern int thunk_FUN_10ec9d30(...);
extern int thunk_FUN_10eca030(...);
extern int thunk_FUN_10eca170(...);
extern int thunk_FUN_10eca460(...);
extern int thunk_FUN_10ecb760(...);
extern int thunk_FUN_10ecbaa0(...);
extern int thunk_FUN_10ecbc60(...);
extern int thunk_FUN_10eccd50(...);
extern int thunk_FUN_10ecd540(...);
extern int thunk_FUN_10ece3b0(...);
extern int thunk_FUN_10ecea60(...);
extern int thunk_FUN_10eced20(...);
extern int thunk_FUN_10eceeb0(...);
extern int thunk_FUN_10ecef50(...);
extern int thunk_FUN_10f05890(...);
extern int thunk_FUN_10f0b5e0(...);
extern int thunk_FUN_10f0b8c0(...);
extern int thunk_FUN_10f16280(...);
extern int thunk_FUN_10f16480(...);
extern int thunk_FUN_10f18560(...);
extern int thunk_FUN_10f1a390(...);
extern int thunk_FUN_10f30c90(...);
extern int thunk_FUN_10f332e0(...);
extern int thunk_FUN_10f33e70(...);
extern int thunk_FUN_10f58400(...);
extern int thunk_FUN_10f6c297(...);
extern int thunk_FUN_10f6c340(...);
extern int thunk_FUN_10f77300(...);
extern int thunk_FUN_10f7b5a0(...);
extern int thunk_FUN_10f977a0(...);
extern int thunk_FUN_10f98f10(...);
extern int thunk_FUN_10f9cf40(...);
extern int thunk_FUN_10fa30b0(...);
extern int thunk_FUN_10fa3310(...);
extern int thunk_FUN_10fa90e0(...);
extern int thunk_FUN_10fb1530(...);
extern int thunk_FUN_10fb19e0(...);
extern int thunk_FUN_10fc5d20(...);
extern int thunk_FUN_10fc9170(...);
extern int thunk_FUN_10fcf610(...);
extern int thunk_FUN_10fd21e0(...);
extern int thunk_FUN_10fdae50(...);
extern int thunk_FUN_10fdae6a(...);
extern int thunk_FUN_10fde3b0(...);
extern int thunk_FUN_10fde45d(...);
extern int thunk_FUN_10ff1960(...);
extern int thunk_FUN_10ff84d0(...);
extern int thunk_FUN_1102ff10(...);
extern int thunk_FUN_11037520(...);
extern int thunk_FUN_11039f60(...);
extern int thunk_FUN_11061d40(...);
extern int thunk_FUN_110630a0(...);
extern int thunk_FUN_11063760(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_11072a10(...);
extern int thunk_FUN_11073270(...);
extern int thunk_FUN_11073c00(...);
extern int thunk_FUN_11074230(...);
extern int thunk_FUN_11079440(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11082e60(...);
extern int thunk_FUN_11095e10(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110c2130(...);
extern int thunk_FUN_110c67f0(...);
extern int thunk_FUN_110ca7d0(...);
extern int thunk_FUN_110d3140(...);
extern int thunk_FUN_110d5410(...);
extern int thunk_FUN_110d55a0(...);
extern int thunk_FUN_110d64e0(...);
extern int thunk_FUN_110d8c40(...);
extern int thunk_FUN_110d9820(...);
extern int thunk_FUN_110ec7a0(...);
extern int thunk_FUN_110f9a2e(...);
extern int thunk_FUN_110f9de0(...);
extern int thunk_FUN_110fa2c0(...);
extern int thunk_FUN_110fdde0(...);
extern int thunk_FUN_11127900(...);
extern int thunk_FUN_11127cf0(...);
extern int thunk_FUN_11127d60(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112a590(...);
extern int thunk_FUN_1112b9e0(...);
extern int thunk_FUN_1112be50(...);
extern int thunk_FUN_1112ccd0(...);
extern int thunk_FUN_1112ef80(...);
extern int thunk_FUN_1112fc70(...);
extern int thunk_FUN_111320a0(...);
extern int thunk_FUN_11132550(...);
extern int thunk_FUN_111354e0(...);
extern int thunk_FUN_11138290(...);
extern int thunk_FUN_1113cf20(...);
extern int thunk_FUN_1113dfa0(...);
extern int thunk_FUN_11142240(...);
extern int thunk_FUN_11167430(...);
extern int thunk_FUN_1118c950(...);
extern int thunk_FUN_111a06b0(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a44c0(...);
extern int thunk_FUN_111a66c0(...);
extern int thunk_FUN_111a7500(...);
extern int thunk_FUN_111aaf90(...);
extern int thunk_FUN_111c0a50(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_111c0af0(...);
extern int thunk_FUN_111c5dc0(...);
extern int thunk_FUN_111ce5a0(...);
extern int thunk_FUN_111d0010(...);
extern int thunk_FUN_111d1d90(...);
extern int thunk_FUN_111e7a30(...);
extern int thunk_FUN_111f1790(...);
extern int thunk_FUN_111feb50(...);
extern int thunk_FUN_11204080(...);
extern int thunk_FUN_11204620(...);
extern int thunk_FUN_112171c9(...);
extern int thunk_FUN_11231700(...);
extern int thunk_FUN_11232ce0(...);
extern int thunk_FUN_11234190(...);
extern int thunk_FUN_1123bf80(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11244ca0(...);
extern int thunk_FUN_11245810(...);
extern int thunk_FUN_11245d70(...);
extern int thunk_FUN_1124ac10(...);
extern int thunk_FUN_1124b070(...);
extern int thunk_FUN_1124b880(...);
extern int thunk_FUN_1124bce0(...);
extern int thunk_FUN_1124bde0(...);
extern int thunk_FUN_1124be90(...);
extern int thunk_FUN_1124d430(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112504f0(...);
extern int thunk_FUN_11255dc0(...);
extern int thunk_FUN_11261450(...);
extern int thunk_FUN_112665b0(...);
extern int thunk_FUN_1126c890(...);
extern int thunk_FUN_11276420(...);
extern int thunk_FUN_112765b0(...);
extern int thunk_FUN_11277050(...);
extern int thunk_FUN_112782b0(...);
extern int thunk_FUN_1127a080(...);
extern int thunk_FUN_1127a400(...);
extern int thunk_FUN_1127bf70(...);
extern int thunk_FUN_1127c6b0(...);
extern int thunk_FUN_1127c920(...);
extern int thunk_FUN_1127caf0(...);
extern int thunk_FUN_1127cb00(...);
extern int thunk_FUN_11286940(...);
extern int thunk_FUN_1128ac30(...);
extern int thunk_FUN_1128de80(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_112c7e70(...);
extern int thunk_FUN_112ea860(...);
extern int thunk_FUN_112eef40(...);
extern int thunk_FUN_112ef010(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113d35c0(...);
extern int thunk_FUN_113d91d0(...);
extern int thunk_FUN_11417c30(...);
extern int thunk_FUN_1143f120(...);
extern int thunk_FUN_1143fce0(...);
extern int thunk_FUN_11448780(...);
extern int thunk_FUN_114561e0(...);
extern int thunk_FUN_11456d50(...);
extern int thunk_FUN_11457240(...);
extern int thunk_FUN_114572e0(...);
extern int thunk_FUN_1145ad70(...);
extern int thunk_FUN_1145ae30(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145d170(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_1186d2ee;
extern int DAT_1187b440;
extern int DAT_1187b694;
extern int DAT_1187ed04;
extern int DAT_11882ff0;
extern int DAT_1188465c;
extern int DAT_11884fc8;
extern int DAT_1188d36c;
extern int DAT_118c9974;
extern int DAT_1195e878;
extern int DAT_11d33164;
extern int DAT_12126b84;
extern int DAT_121a06c8;
extern int DAT_121a06cc;
extern int DAT_121a06d8;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int DAT_121a0fd4;
extern int DAT_121a0fd8;
extern int DAT_121a282c;
extern int DAT_121a29f0;
extern int DAT_121a3428;
extern int DAT_121a35e0;
extern int DAT_121a4700;
extern int DAT_121a4b94;
extern int DAT_121a4c84;
extern int DAT_121a63bc;
extern int DAT_121a669c;
extern int DAT_121a7704;
extern int DAT_121a7734;
extern int DAT_121a7754;
extern int DAT_121a77ec;
extern int DAT_121a7824;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RCustomZPEnumerator;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RLastFMContentProvider;
extern int ghidra_vftable_RSonosGetExtendedMetadataTextOp;
extern int ghidra_vftable_RSonosGetExtendedMetadataTextParam;
extern int ghidra_vftable_RStereoZPCandidateEnumerator;
extern int ghidra_vftable_RUnsubscribeRequest;
extern int ghidra_vftable_RUpnpAIGetLineInLevelAIOOp;
extern int ghidra_vftable_SCArtworkCache;
extern int ghidra_vftable_SCConditionalVectorBuilderTree;
extern int ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface;
extern int ghidra_vftable_SCDisplayWizardEventSink;
extern int ghidra_vftable_SCHideOfflineDeviceSignIn;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCJoinExistingSearchPage;
extern int ghidra_vftable_SCMobilePhoneInput;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCSecureTransferPressButtonState;
extern int ghidra_vftable_SCSecureTransferSpeakerChoiceState;
extern int ghidra_vftable_SCSecureTransferWizCompleteState;
extern int ghidra_vftable_SCSettingsMenuNYI;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCUpdateMusicIndexActionDescriptor;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int in_stack_00000020;
extern int in_stack_00000024;
extern int uStack_10;
extern int uStack_14;
extern int uStack_16bc;
extern int uStack_16cc;
extern int uStack_16d0;
extern int uStack_18;
extern int uStack_1c;
extern int uStack_20;
extern int uStack_24;
extern int uStack_28;
extern int uStack_2c;
extern int uStack_30;
extern int uStack_34;
extern int uStack_38;
extern int uStack_3c;
extern int uStack_4;
extern int uStack_40;
extern int uStack_44;
extern int uStack_48;
extern int uStack_4c;
extern int uStack_50;
extern int uStack_54;
extern int uStack_58;
extern int uStack_5c;
extern int uStack_60;
extern int uStack_64;
extern int uStack_68;
extern int uStack_70;
extern int uStack_74;
extern int uStack_78;
extern int uStack_7c;
extern int uStack_8;
extern int uStack_80;
extern int uStack_84;
extern int uStack_88;
extern int uStack_90;
extern int uStack_94;
extern int uStack_98;
extern int uStack_a0;
extern int uStack_a4;
extern int uStack_a8;
extern int uStack_ac;
extern int uStack_b0;
extern int uStack_b4;
extern int uStack_b8;
extern int uStack_c;
extern int uStack_c0;
extern int uStack_c4;
extern int uStack_c8;
extern int uStack_d4;
extern int uStack_e4;
extern int uStack_f30;
extern int uStack_f60;
extern int uStack_f6c;
extern undefined1 LAB_100831f9[];
extern undefined1 LAB_101974a8[];
extern undefined1 LAB_1030b5a1[];
extern undefined1 LAB_105bfd82[];
extern undefined1 LAB_106c86f9[];
extern undefined1 LAB_106c8778[];
extern undefined1 LAB_107efe40[];
extern undefined1 LAB_107f0148[];
extern undefined1 LAB_10932ec5[];
extern undefined1 LAB_109efe95[];
extern undefined1 LAB_10a1c14c[];
extern undefined1 LAB_10a8f545[];
extern undefined1 LAB_10a98ad4[];
extern undefined1 LAB_10a9ef36[];
extern undefined1 LAB_10b015a5[];
extern undefined1 LAB_10bdba35[];
extern undefined1 LAB_10bdbada[];
extern undefined1 LAB_10dd58dd[];
extern undefined1 LAB_10f9d075[];
extern undefined1 LAB_10f9d11a[];
extern undefined1 LAB_10fa922b[];
extern undefined1 LAB_10fa9343[];
extern undefined1 LAB_110d6634[];
extern undefined1 LAB_11127d20[];
extern undefined1 LAB_11127d25[];
extern undefined1 LAB_11127d2f[];
extern undefined1 LAB_1112f03a[];
extern undefined1 LAB_1112f046[];
extern undefined1 LAB_11135557[];
extern undefined1 LAB_1113556d[];
extern undefined1 LAB_111355a2[];
extern undefined1 LAB_111355d0[];
extern undefined1 LAB_11135729[];
extern undefined1 LAB_11135832[];
extern undefined1 LAB_111358aa[];
extern undefined1 LAB_1123c06b[];
extern undefined1 LAB_1124ada0[];
extern undefined1 LAB_1126c946[];
extern undefined1 LAB_114dbf60[];
extern undefined1 LAB_114e87a0[];
extern undefined1 LAB_114e9af0[];
extern undefined1 LAB_114ebf80[];
extern undefined1 LAB_114ecf40[];
extern undefined1 LAB_114eeaa0[];
extern undefined1 LAB_114f2760[];
extern undefined1 LAB_114f5b90[];
extern undefined1 LAB_114fc48d[];
extern undefined1 LAB_114fe494[];
extern undefined1 LAB_11521b56[];
extern undefined1 LAB_11531067[];
extern undefined1 LAB_1153f110[];
extern undefined1 LAB_115439a5[];
extern undefined1 LAB_11546fb0[];
extern undefined1 LAB_1158c9dd[];
extern undefined1 LAB_115ae485[];
extern undefined1 LAB_115b0260[];
extern undefined1 LAB_115d2f44[];
extern undefined1 LAB_115d76cd[];
extern undefined1 LAB_115dd725[];
extern undefined1 LAB_11613d97[];
extern undefined1 LAB_1161f34f[];
extern undefined1 LAB_1162e847[];
extern undefined1 LAB_1164f1f2[];
extern undefined1 LAB_1167386d[];
extern undefined1 LAB_1167b839[];
extern undefined1 LAB_1168f13e[];
extern undefined1 LAB_11690719[];
extern undefined1 LAB_11692515[];
extern undefined1 LAB_11693a3e[];
extern undefined1 LAB_116a53fd[];
extern undefined1 LAB_116b20fb[];
extern undefined1 LAB_116bff70[];
extern undefined1 LAB_116e8b10[];
extern undefined1 LAB_116ea975[];
extern undefined1 LAB_116eb10d[];
extern undefined1 LAB_1170f0b0[];
extern undefined1 LAB_11711e45[];
extern undefined1 LAB_1173f1a5[];
extern undefined1 LAB_117437c4[];
extern undefined1 LAB_11759edd[];
extern undefined1 LAB_1175b60d[];
extern undefined1 LAB_1178259d[];
extern undefined1 LAB_1178265d[];
extern undefined1 LAB_11783a0d[];
extern undefined1 LAB_1178866d[];
extern undefined1 LAB_1178a56c[];
extern undefined1 LAB_117a4195[];
extern undefined1 LAB_117ac404[];
extern undefined1 LAB_117adaf7[];
extern undefined1 LAB_117b5ab0[];
extern undefined1 LAB_117b6010[];
extern undefined1 LAB_117b646b[];
extern undefined1 LAB_117bb10d[];
extern undefined1 LAB_117c1820[];
extern undefined1 LAB_117c3553[];
extern undefined1 LAB_117cf890[];
extern int *stack0x00000004;
extern int *stack0xffffff34;
extern int *stack0xffffff38;
extern int *stack0xffffff98;
extern int *stack0xffffffb0;
extern int *stack0xffffffb8;
extern int *stack0xfffffffc;
extern void *ExceptionList;
undefined4 __fastcall FUN_10003085(int param_1);
extern undefined4 __fastcall FUN_10003085(...);
void FUN_100030cb(void);
extern void FUN_100030cb(...);
void FUN_100030d5(void);
extern void FUN_100030d5(...);
void FUN_100030da(void);
extern void FUN_100030da(...);
void FUN_100030e9(void);
extern void FUN_100030e9(...);
void FUN_100030f3(void);
extern void FUN_100030f3(...);
undefined4 FUN_10003107(int param_1);
extern undefined4 FUN_10003107(...);
int __fastcall FUN_1000310c(int param_1);
extern int __fastcall FUN_1000310c(...);
uint FUN_10003111(undefined4 param_1);
extern uint FUN_10003111(...);
void FUN_1000311b(void);
extern void FUN_1000311b(...);
undefined1 FUN_1000312a(void);
extern undefined1 FUN_1000312a(...);
undefined4 FUN_1000312f(void);
extern undefined4 FUN_1000312f(...);
void FUN_1000315c(void);
extern void FUN_1000315c(...);
void FUN_1000316b(void);
extern void FUN_1000316b(...);
void FUN_10003193(void);
extern void FUN_10003193(...);
int __fastcall FUN_1000319d(int param_1);
extern int __fastcall FUN_1000319d(...);
undefined4 __fastcall FUN_100031ac(undefined4 param_1);
extern undefined4 __fastcall FUN_100031ac(...);
void __fastcall FUN_100031d4(undefined4 *param_1);
extern void __fastcall FUN_100031d4(...);
undefined4 FUN_100031de(undefined4 param_1);
extern undefined4 FUN_100031de(...);
undefined4 FUN_100031e3(undefined4 param_1);
extern undefined4 FUN_100031e3(...);
undefined4 * FUN_100031f7(undefined4 *param_1);
extern undefined4 * FUN_100031f7(...);
void __fastcall FUN_10003201(undefined4 *param_1);
extern void __fastcall FUN_10003201(...);
undefined4 __fastcall FUN_10003206(undefined4 param_1);
extern undefined4 __fastcall FUN_10003206(...);
SCStr * FUN_1000320b(SCStr *param_1,SCStr *param_2,SCStr *param_3);
extern SCStr * FUN_1000320b(...);
undefined1 FUN_10003210(void);
extern undefined1 FUN_10003210(...);
void FUN_10003215(void);
extern void FUN_10003215(...);
void __fastcall FUN_1000321a(int param_1);
extern void __fastcall FUN_1000321a(...);
/* int __cdecl SCThreadSafeTestAndClear_1000322e(long *) */int __cdecl FUN_1000322e(long *param_1);
void FUN_10003233(void);
extern void FUN_10003233(...);
undefined4 FUN_10003238(void);
extern undefined4 FUN_10003238(...);
undefined1 FUN_1000323d(int *param_1);
extern undefined1 FUN_1000323d(...);
undefined4 FUN_10003247(void);
extern undefined4 FUN_10003247(...);
undefined1 FUN_10003256(void);
extern undefined1 FUN_10003256(...);
SCStr * FUN_1000326a(SCStr *param_1);
extern SCStr * FUN_1000326a(...);
void FUN_10003297(void);
extern void FUN_10003297(...);
void __fastcall FUN_1000329c(int param_1);
extern void __fastcall FUN_1000329c(...);
undefined1 FUN_100032a6(void);
extern undefined1 FUN_100032a6(...);
void FUN_100032ab(void);
extern void FUN_100032ab(...);
int __fastcall FUN_100032c4(int *param_1);
extern int __fastcall FUN_100032c4(...);
void FUN_100032c9(void);
extern void FUN_100032c9(...);
void FUN_100032e2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6);
extern void FUN_100032e2(...);
void FUN_100032e7(void);
extern void FUN_100032e7(...);
void FUN_100032fb(void);
extern void FUN_100032fb(...);
void FUN_1000330a(void);
extern void FUN_1000330a(...);
void FUN_10003328(void);
extern void FUN_10003328(...);
SCStr * FUN_10003332(SCStr *param_1);
extern SCStr * FUN_10003332(...);
void FUN_10003341(SCStr *param_1,int param_2,int param_3,undefined4 param_4);
extern void FUN_10003341(...);
void __fastcall FUN_10003355(int *param_1);
extern void __fastcall FUN_10003355(...);
void __fastcall FUN_1000335f(undefined4 *param_1);
extern void __fastcall FUN_1000335f(...);
void FUN_10003364(int *param_1);
extern void FUN_10003364(...);
void __fastcall FUN_10003387(int *param_1);
extern void __fastcall FUN_10003387(...);
undefined4 FUN_10003391(undefined1 *param_1);
extern undefined4 FUN_10003391(...);
void FUN_10003396(void);
extern void FUN_10003396(...);
void FUN_100033c3(void);
extern void FUN_100033c3(...);
void FUN_100033fa(int *param_1);
extern void FUN_100033fa(...);
void FUN_1000340e(void);
extern void FUN_1000340e(...);
void __fastcall FUN_10003436(int *param_1);
extern void __fastcall FUN_10003436(...);
void FUN_1000343b(void);
extern void FUN_1000343b(...);
undefined4 FUN_10003440(undefined4 param_1);
extern undefined4 FUN_10003440(...);
undefined4 __fastcall FUN_1000344f(int param_1);
extern undefined4 __fastcall FUN_1000344f(...);
undefined4 FUN_10003463(void);
extern undefined4 FUN_10003463(...);
undefined4 FUN_10003468(int *param_1);
extern undefined4 FUN_10003468(...);
undefined4 FUN_1000346d(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4);
extern undefined4 FUN_1000346d(...);
void __fastcall FUN_1000348b(int param_1);
extern void __fastcall FUN_1000348b(...);
void __fastcall FUN_10003490(int param_1);
extern void __fastcall FUN_10003490(...);
void FUN_10003495(void);
extern void FUN_10003495(...);
void __fastcall FUN_1000349a(int param_1);
extern void __fastcall FUN_1000349a(...);
undefined4 __fastcall FUN_1000349f(int param_1);
extern undefined4 __fastcall FUN_1000349f(...);
undefined4 __fastcall FUN_100034a4(int param_1);
extern undefined4 __fastcall FUN_100034a4(...);
undefined4 * FUN_100034b3(undefined4 *param_1);
extern undefined4 * FUN_100034b3(...);
undefined1 FUN_100034d1(void);
extern undefined1 FUN_100034d1(...);
SCStr * FUN_100034e0(SCStr *param_1);
extern SCStr * FUN_100034e0(...);
void FUN_100034e5(void);
extern void FUN_100034e5(...);
undefined4 FUN_100034f4(int *param_1);
extern undefined4 FUN_100034f4(...);
undefined4 FUN_1000350d(char *param_1);
extern undefined4 FUN_1000350d(...);
void __fastcall FUN_10003512(undefined4 *param_1);
extern void __fastcall FUN_10003512(...);
undefined1 __fastcall FUN_10003521(int param_1);
extern undefined1 __fastcall FUN_10003521(...);
undefined1 FUN_1000352b(void);
extern undefined1 FUN_1000352b(...);
undefined4 FUN_1000353f(undefined4 param_1);
extern undefined4 FUN_1000353f(...);
undefined1 FUN_10003549(void);
extern undefined1 FUN_10003549(...);
undefined1 FUN_10003558(void);
extern undefined1 FUN_10003558(...);
undefined1 __fastcall FUN_1000356c(int *param_1);
extern undefined1 __fastcall FUN_1000356c(...);
int FUN_1000357b(void);
extern int FUN_1000357b(...);
void __fastcall FUN_1000358a(int param_1);
extern void __fastcall FUN_1000358a(...);
void FUN_1000359e(int *param_1);
extern void FUN_1000359e(...);
void __fastcall FUN_100035a3(int *param_1);
extern void __fastcall FUN_100035a3(...);
void FUN_100035b2(undefined4 param_1,undefined4 param_2);
extern void FUN_100035b2(...);
void FUN_100035bc(void);
extern void FUN_100035bc(...);
undefined1 FUN_100035c1(void);
extern undefined1 FUN_100035c1(...);
undefined4 * __fastcall FUN_100035d5(int param_1);
extern undefined4 * __fastcall FUN_100035d5(...);
undefined4 FUN_100035da(void);
extern undefined4 FUN_100035da(...);
undefined1 FUN_100035f8(void);
extern undefined1 FUN_100035f8(...);
undefined4 FUN_100035fd(undefined4 param_1);
extern undefined4 FUN_100035fd(...);
bool __fastcall FUN_1000360c(int param_1);
extern bool __fastcall FUN_1000360c(...);
int * FUN_1000361b(int *param_1,undefined4 param_2,char *param_3);
extern int * FUN_1000361b(...);
undefined4 FUN_1000362f(int *param_1,ushort *param_2);
extern undefined4 FUN_1000362f(...);
uint __fastcall FUN_1000366b(int param_1);
extern uint __fastcall FUN_1000366b(...);
undefined2 __fastcall FUN_10003675(int param_1);
extern undefined2 __fastcall FUN_10003675(...);
void FUN_1000368e(void);
extern void FUN_1000368e(...);
undefined1 FUN_10003693(void);
extern undefined1 FUN_10003693(...);
void FUN_1000369d(void);
extern void FUN_1000369d(...);
void FUN_100036a7(void);
extern void FUN_100036a7(...);
void FUN_100036b6(void);
extern void FUN_100036b6(...);
undefined4 FUN_100036bb(undefined1 *param_1);
extern undefined4 FUN_100036bb(...);
bool FUN_100036c5(int *param_1);
extern bool FUN_100036c5(...);
void FUN_100036cf(void);
extern void FUN_100036cf(...);
void FUN_100036d4(void);
extern void FUN_100036d4(...);
void FUN_100036d9(void);
extern void FUN_100036d9(...);
bool FUN_100036f7(void);
extern bool FUN_100036f7(...);
undefined1 FUN_100036fc(void);
extern undefined1 FUN_100036fc(...);
undefined2 __fastcall FUN_1000370b(int param_1);
extern undefined2 __fastcall FUN_1000370b(...);
void FUN_1000372e(void);
extern void FUN_1000372e(...);
SCStr * FUN_10003733(SCStr *param_1,int param_2);
extern SCStr * FUN_10003733(...);
SCStr * FUN_10003738(SCStr *param_1);
extern SCStr * FUN_10003738(...);
SCStr * FUN_10003765(SCStr *param_1);
extern SCStr * FUN_10003765(...);
/* WARNING: Type propagation algorithm not settling */ void __fastcall FUN_1000376f(int param_1);
extern /* WARNING: Type propagation algorithm not settling */ void __fastcall FUN_1000376f(...);
void __fastcall FUN_10003779(undefined4 *param_1);
extern void __fastcall FUN_10003779(...);
undefined1 __fastcall FUN_1000378d(int param_1);
extern undefined1 __fastcall FUN_1000378d(...);
void FUN_1000379c(void);
extern void FUN_1000379c(...);
undefined1 FUN_100037bf(void);
extern undefined1 FUN_100037bf(...);
undefined1 FUN_100037c4(void);
extern undefined1 FUN_100037c4(...);
void FUN_100037c9(void);
extern void FUN_100037c9(...);
void __fastcall FUN_100037ce(int param_1);
extern void __fastcall FUN_100037ce(...);
void FUN_100037d3(undefined4 *param_1);
extern void FUN_100037d3(...);
void FUN_100037dd(undefined4 *param_1,int param_2);
extern void FUN_100037dd(...);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_100037e2(int param_1);
extern /* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void FUN_100037e2(...);
void FUN_100037f6(int *param_1);
extern void FUN_100037f6(...);
void FUN_10003800(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern void FUN_10003800(...);
void FUN_10003814(undefined4 **param_1,int param_2,int param_3,undefined4 param_4);
extern void FUN_10003814(...);
int __fastcall FUN_1000381e(int param_1);
extern int __fastcall FUN_1000381e(...);
void __fastcall FUN_10003823(int param_1);
extern void __fastcall FUN_10003823(...);
void FUN_10003828(void);
extern void FUN_10003828(...);
void __fastcall FUN_10003832(undefined4 *param_1);
extern void __fastcall FUN_10003832(...);
void __fastcall FUN_10003837(int param_1);
extern void __fastcall FUN_10003837(...);
void FUN_1000385f(void);
extern void FUN_1000385f(...);
undefined4 * __fastcall FUN_10003869(undefined4 *param_1);
extern undefined4 * __fastcall FUN_10003869(...);
void FUN_1000387d(void);
extern void FUN_1000387d(...);
void FUN_1000388c(void);
extern void FUN_1000388c(...);
int __fastcall FUN_100038a5(int param_1);
extern int __fastcall FUN_100038a5(...);
void FUN_100038c3(void);
extern void FUN_100038c3(...);
void __fastcall FUN_100038d7(int param_1);
extern void __fastcall FUN_100038d7(...);
undefined4 FUN_100038e6(undefined4 param_1);
extern undefined4 FUN_100038e6(...);
void FUN_10003909(void);
extern void FUN_10003909(...);
undefined4 FUN_10003931(void);
extern undefined4 FUN_10003931(...);
void FUN_10003945(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
extern void FUN_10003945(...);
void FUN_1000395e(void);
extern void FUN_1000395e(...);
void FUN_10003963(void);
extern void FUN_10003963(...);
void FUN_10003981(undefined4 param_1,SCStr *param_2);
extern void FUN_10003981(...);
void FUN_10003986(void);
extern void FUN_10003986(...);
void __fastcall FUN_100039b8(int param_1);
extern void __fastcall FUN_100039b8(...);
void __fastcall FUN_100039c7(undefined4 *param_1);
extern void __fastcall FUN_100039c7(...);
void __fastcall FUN_100039e0(int param_1);
extern void __fastcall FUN_100039e0(...);
void FUN_100039ea(void);
extern void FUN_100039ea(...);
void __fastcall FUN_100039f9(int param_1);
extern void __fastcall FUN_100039f9(...);
void __fastcall FUN_10003a17(int param_1);
extern void __fastcall FUN_10003a17(...);
void __fastcall FUN_10003a26(int param_1);
extern void __fastcall FUN_10003a26(...);
undefined4 FUN_10003a2b(undefined4 param_1);
extern undefined4 FUN_10003a2b(...);
undefined4 FUN_10003a35(undefined4 param_1);
extern undefined4 FUN_10003a35(...);
undefined1 FUN_10003a44(void);
extern undefined1 FUN_10003a44(...);
void FUN_10003a58(undefined4 param_1,undefined4 param_2);
extern void FUN_10003a58(...);
void FUN_10003a76(undefined4 *param_1);
extern void FUN_10003a76(...);
void FUN_10003a7b(void);
extern void FUN_10003a7b(...);
void FUN_10003a85(int *param_1);
extern void FUN_10003a85(...);
undefined4 FUN_10003a8a(int *param_1,undefined4 param_2);
extern undefined4 FUN_10003a8a(...);
void FUN_10003a8f(void);
extern void FUN_10003a8f(...);
void FUN_10003a94(int *param_1);
extern void FUN_10003a94(...);
undefined4 __fastcall FUN_10003a9e(int param_1);
extern undefined4 __fastcall FUN_10003a9e(...);
int __fastcall FUN_10003aa3(int param_1);
extern int __fastcall FUN_10003aa3(...);
SCStr * FUN_10003aa8(SCStr *param_1);
extern SCStr * FUN_10003aa8(...);
void __fastcall FUN_10003aad(int param_1);
extern void __fastcall FUN_10003aad(...);
void FUN_10003ab7(void);
extern void FUN_10003ab7(...);
// Reference entry 10003085; body size 5 bytes.
#line 1 "ENTRY_10003085"

undefined4 __fastcall FUN_10003085(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x34));
}


// Reference entry 1000308f; body size 5 bytes.
#line 1 "ENTRY_1000308f"
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> * __thiscall  FUN_1000308f(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *this_){
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = (int)(*(int *)this_);
  piVar3 = (int *)(*(int **)(iVar2 + 8));
  if (*(char *)((int)piVar3 + 0xd) != '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar2 + 4) + 0xd));
    iVar5 = (int)(*(int *)(iVar2 + 4));
    while ((cVar1 == '\0' && ((int)(iVar2) == *(int *)(iVar5 + 8)))) {
      *(int*)this_ = (int)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> 
*)(iVar5));
      cVar1 = (char)(*(char *)(*(int *)(iVar5 + 4) + 0xd));
      iVar2 = (int)(iVar5);
      iVar5 = (int)(*(int *)(iVar5 + 4));
    }
    *(int*)this_ = (int)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> 
*)(iVar5));
    return (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
            *)this_);
  }
  cVar1 = (char)(*(char *)(*piVar3 + 0xd));
  piVar4 = (int *)((int *)*piVar3);
  while (cVar1 == '\0') {
    cVar1 = (char)(*(char *)(*piVar4 + 0xd));
    piVar3 = (int *)(piVar4);
    piVar4 = (int *)((int *)*piVar4);
  }
  *(int**)this_ = (int *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> 
*)(piVar3));
  return (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
          *)this_);
}


// Reference entry 100030c1; body size 5 bytes.
#line 1 "ENTRY_100030c1"

undefined4 * __thiscall Recovered_Bulk::FUN_100030c1(undefined4 *param_2)
{
  int *param_1 = (int *)this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  cVar1 = (char)((**(code **)(*param_1 + 0x24))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (cVar1 == '\0') {
    *param_2 = (undefined4)(0);

    return (undefined4 *)(param_2);
  }
  piStack_14 = (int *)(operator_new(0x14));

  if ((int *)(piStack_14) == (int *)0x0) {
    piStack_14 = (int *)((int *)0x0);
  }
  else {
    piStack_14 = (int *)((int *)thunk_FUN_103be5e0());
  }

  if ((int *)(piStack_14) != (int *)0x0) {
    (**(code **)(*piStack_14 + 4))();
  }

  thunk_FUN_101c39c0(&piStack_14);
  *(unsigned char *)((char *)&uStack_8 + 0) = 4;
  if ((int *)(piStack_14) != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
  piVar2 = (int *)(operator_new(8));
  if ((int *)(piVar2) == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
    piVar2[1] = (int)(0);
    g_lSCObjCount = (int)(g_lSCObjCount + 1);
    *piVar2 = (int)((int)(uint)&ghidra_vftable_SCUpdateMusicIndexActionDescriptor);
    piStack_14 = (int *)(piVar2);
    if (*(code **)(*piVar2 + 0xc) == (code *)((thunk_FUN_101da390))) {
      (**(code **)(*piVar2 + 4))();
    }
    else {
      piVar3 = (int *)((int *)(**(code **)(*piVar2 + 0xc))());
      (**(code **)(*piVar3 + 4))();
    }
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(5)));
  piStack_14 = (int *)(piVar2);
  thunk_FUN_103beae0(&piStack_14,0xffffffff);
  *param_2 = (undefined4)(piStack_1c);
  if ((int *)(piStack_1c) != (int *)0x0) {
    (**(code **)(*piStack_1c + 4))();
  }

  if ((int *)(piStack_18) != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 100030cb; body size 5 bytes.
#line 1 "ENTRY_100030cb"

void FUN_100030cb(void)

{
  thunk_FUN_10c20d40();
  return;
}


// Reference entry 100030d5; body size 5 bytes.
#line 1 "ENTRY_100030d5"

void FUN_100030d5(void)

{
  thunk_FUN_10a80ef0();
  return;
}


// Reference entry 100030da; body size 5 bytes.
#line 1 "ENTRY_100030da"

void FUN_100030da(void)

{
  thunk_FUN_10a0a1f0();
  return;
}


// Reference entry 100030df; body size 5 bytes.
#line 1 "ENTRY_100030df"

undefined4 * __thiscall Recovered_Bulk::FUN_100030df(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100030e4; body size 5 bytes.
#line 1 "ENTRY_100030e4"

undefined4 * __thiscall Recovered_Bulk::FUN_100030e4(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100030e9; body size 5 bytes.
#line 1 "ENTRY_100030e9"

void FUN_100030e9(void)

{
  thunk_FUN_1072c940();
  return;
}


// Reference entry 100030f3; body size 5 bytes.
#line 1 "ENTRY_100030f3"

void FUN_100030f3(void)

{
  thunk_FUN_104a1af0();
  return;
}


// Reference entry 10003107; body size 5 bytes.
#line 1 "ENTRY_10003107"
undefined4 FUN_10003107(int param_1){
 try {
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  uVar1 = (uint)(DAT_12126b84);

  puStack_14 = (undefined1 *)((undefined1 *)0x0);
  if ((SCStr *)((param_1 + 0x3c)) != (SCStr *)&puStack_14) {
    ((SCStr *)((SCStr *)&puStack_14))->int_release();
    puStack_14 = (undefined1 *)(*(undefined1 **)(param_1 + 0x3c));
    ((SCStr *)((SCStr *)&puStack_14))->int_addref();
    puVar4 = (undefined1 *)(puStack_14);
    if ((undefined1 *)(puStack_14) != (undefined1 *)0x0) goto LAB_101974a8;
  }
  puVar4 = (undefined1 *)(&DAT_1186d2ee);
LAB_101974a8:
  uVar2 = (uint)(((SCStr *)((SCStr *)&puStack_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2,uVar1));

  ((SCStr *)((SCStr *)&puStack_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1000310c; body size 5 bytes.
#line 1 "ENTRY_1000310c"

int __fastcall FUN_1000310c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(SCThreadSafeInc((long *)(param_1 + 4)));
  if (iVar1 == 2) {
    uVar2 = (undefined4)((*(code *)(uint)(DAT_121a06cc))(*(undefined4 *)(param_1 + 8)));
    *(undefined4*)(param_1 + 8) = (undefined4)(uVar2);
  }
  return (int)(iVar1);
}


// Reference entry 10003111; body size 5 bytes.
#line 1 "ENTRY_10003111"

uint FUN_10003111(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_113d91d0(param_1));
  if (iVar1 == 0) {
    return (uint)(0);
  }
  if (*(int *)(iVar1 + 8) == 0) {
    return (uint)(0);
  }
  return (uint)((*(uint *)(*(int *)(iVar1 + 8) + 4) >> 2 & 0x3c0) >> 3);
}


// Reference entry 10003116; body size 5 bytes.
#line 1 "ENTRY_10003116"

undefined4 __thiscall Recovered_Bulk::FUN_10003116(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 1000311b; body size 5 bytes.
#line 1 "ENTRY_1000311b"

void FUN_1000311b(void)

{
  thunk_FUN_11204620();
  return;
}


// Reference entry 1000312a; body size 5 bytes.
#line 1 "ENTRY_1000312a"

undefined1 FUN_1000312a(void)

{
  return (undefined1)(0);
}


// Reference entry 1000312f; body size 5 bytes.
#line 1 "ENTRY_1000312f"

undefined4 FUN_1000312f(void)

{
  return (undefined4)(0);
}


// Reference entry 10003139; body size 5 bytes.
#line 1 "ENTRY_10003139"

int __thiscall Recovered_Bulk::FUN_10003139(SCStr *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar5 = (undefined4 *)((undefined4 *)*param_1);
  puVar7 = (undefined4 *)(puVar5);
  puVar9 = (undefined4 *)(puVar5);
  puVar10 = (undefined4 *)((undefined4 *)puVar5[1]);
  if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
    do {
      puVar9 = (undefined4 *)(puVar10);
      bVar4 = (bool)(((SCStr *)((SCStr *)(puVar9 + 4)))->op_lt(param_2));
      if (bVar4) {
        puVar10 = (undefined4 *)((undefined4 *)puVar9[2]);
        puVar9 = (undefined4 *)(puVar5);
      }
      else {
        if ((*(char *)((int)puVar7 + 0xd) != '\0') &&
           (bVar4 = ((SCStr *)(param_2))->op_lt((SCStr *)(puVar9 + 4)), bVar4)) {
          puVar7 = (undefined4 *)(puVar9);
        }
        puVar10 = (undefined4 *)((undefined4 *)*puVar9);
      }
      puVar5 = (undefined4 *)(puVar9);
    } while (*(char *)((int)puVar10 + 0xd) == '\0');
    puVar5 = (undefined4 *)((undefined4 *)*param_1);
  }
  puVar5 = (undefined4 *)(puVar5 + 1);
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar5 = (undefined4 *)(puVar7);
  }
  cVar1 = (char)(*(char *)((int)*puVar5 + 0xd));
  puVar5 = (undefined4 *)((undefined4 *)*puVar5);
  while (cVar1 == '\0') {
    bVar4 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(puVar5 + 4)));
    if (bVar4) {
      puVar10 = (undefined4 *)((undefined4 *)*puVar5);
      puVar7 = (undefined4 *)(puVar5);
    }
    else {
      puVar10 = (undefined4 *)((undefined4 *)puVar5[2]);
    }
    puVar5 = (undefined4 *)(puVar10);
    cVar1 = (char)(*(char *)((int)puVar10 + 0xd));
  }
  iVar8 = (int)(0);
  puVar5 = (undefined4 *)(puVar9);
  while ((undefined4 *)(puVar5) != (undefined4 *)(puVar7)) {
    puVar10 = (undefined4 *)((undefined4 *)puVar5[2]);
    iVar8 = (int)(iVar8 + 1);
    if (*(char *)((int)puVar10 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)((int)*puVar10 + 0xd));
      puVar5 = (undefined4 *)(puVar10);
      puVar10 = (undefined4 *)((undefined4 *)*puVar10);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)((int)*puVar10 + 0xd));
        puVar5 = (undefined4 *)(puVar10);
        puVar10 = (undefined4 *)((undefined4 *)*puVar10);
      }
    }
    else {
      cVar1 = (char)(*(char *)((int)puVar5[1] + 0xd));
      puVar3 = (undefined4 *)((undefined4 *)puVar5[1]);
      puVar10 = (undefined4 *)(puVar5);
      while ((puVar5 = puVar3, cVar1 == '\0' && ((undefined4 *)(puVar10) == (undefined4 *)puVar5[2]))) {
        cVar1 = (char)(*(char *)((int)puVar5[1] + 0xd));
        puVar3 = (undefined4 *)((undefined4 *)puVar5[1]);
        puVar10 = (undefined4 *)(puVar5);
      }
    }
  }
  piVar2 = (int *)((int *)*param_1);
  param_2 = (SCStr *)((SCStr *)puVar9);
  if (((undefined4 *)(puVar9) == (undefined4 *)*piVar2) && (*(char *)((int)puVar7 + 0xd) != '\0')) {
    thunk_FUN_10f16280(param_1,piVar2[1]);
    piVar2[1] = (int)((int)piVar2);
    *piVar2 = (int)((int)piVar2);
    piVar2[2] = (int)((int)piVar2);
    param_1[1] = (int)(0);
  }
  else if ((undefined4 *)((puVar9)) != (undefined4 *)(puVar7)) {
    do {
      puVar5 = (undefined4 *)((undefined4 *)param_2);
      ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                    *)&param_2))->op_inc();
      uVar6 = (undefined4)(thunk_FUN_10f18560(puVar5));
      thunk_FUN_10f16480(param_1,uVar6);
    } while ((SCStr *)(param_2) != (SCStr *)puVar7);
    return (int)(iVar8);
  }
  return (int)(iVar8);
}


// Reference entry 10003148; body size 5 bytes.
#line 1 "ENTRY_10003148"

undefined4 * __thiscall Recovered_Bulk::FUN_10003148(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000315c; body size 5 bytes.
#line 1 "ENTRY_1000315c"

void FUN_1000315c(void)

{
 try {
  int iVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piStack_1c;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  ((SCStr *)((SCStr *)&piStack_14))->int_allocRep("tuneEvent");

  thunk_FUN_10df6f00();
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
  cVar2 = (char)(thunk_FUN_10def450());
  thunk_FUN_10def0d0();

  ((SCStr *)((SCStr *)&piStack_14))->int_release();

  if (cVar2 != '\0') {
    thunk_FUN_10eb41b0();
    piVar3 = (int *)((int *)thunk_FUN_10cf34e0());
    iVar1 = (int)(*piVar3);

    if ((int *)(piStack_14) != (int *)0x0) {
      (**(code **)(*piStack_14 + 8))();
    }

    if (iVar1 != 0) {
      thunk_FUN_10eb41b0();
      thunk_FUN_10cf34e0();

      thunk_FUN_10c98c80();
      *(unsigned char *)((char *)&uStack_8 + 0) = 7;
      if ((int *)(piStack_1c) != (int *)0x0) {
        (**(code **)(*piStack_1c + 8))();
      }
      *(unsigned char *)((char *)&uStack_8 + 0) = 6;
      piStack_14 = (int *)(operator_new(0x18));
      *(unsigned char *)((char *)&uStack_8 + 0) = 8;
      if ((void *)(piStack_14) == (void *)0x0) {
        piVar3 = (int *)((int *)0x0);
      }
      else {
        ((SCStr *)((SCStr *)&stack0xffffffb0))->op_ctor((SCStr *)&stack0x00000004);
        piVar3 = (int *)((int *)thunk_FUN_10b32be0());
      }
      piVar6 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&uStack_8 + 0) = 6;
      piStack_14 = (int *)((int *)0x0);
      if ((int *)(piVar3) != (int *)0x0) {
        piVar6 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
        piStack_14 = (int *)(piVar6);
        (**(code **)(*piVar6 + 4))();
      }
      *(unsigned char *)((char *)&uStack_8 + 0) = 9;
      pvVar4 = (void *)(operator_new(0x2c));
      *(unsigned char *)((char *)&uStack_8 + 0) = 10;
      if ((void *)(pvVar4) == (void *)0x0) {
        uVar5 = (undefined4)(0);
      }
      else {
        uVar5 = (undefined4)(thunk_FUN_10703780());
      }
      *(unsigned char *)((char *)&uStack_8 + 0) = 9;
      thunk_FUN_10ebb810("displayWizard",uVar5);
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0xb)));
      if ((int *)(piVar6) != (int *)0x0) {
        (**(code **)(*piVar6 + 8))();
      }

      ((SCStr *)((SCStr *)&stack0x00000004))->int_release();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 1000316b; body size 5 bytes.
#line 1 "ENTRY_1000316b"

void FUN_1000316b(void)

{
  thunk_FUN_109e41f0();
  return;
}


// Reference entry 10003175; body size 5 bytes.
#line 1 "ENTRY_10003175"

undefined4 * __thiscall Recovered_Bulk::FUN_10003175(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar1 = (undefined4 *)(operator_new(0xe4));

  if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_10eae120(param_1,param_2,param_3));
    thunk_FUN_10eb64f0(uVar2);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSearchPage);
    puVar1[4] = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSearchPage);
    puVar1[0x23] = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSearchPage);
    puVar1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCJoinExistingSearchPage);
    puVar1[0x38] = (undefined4)(0);

    return (undefined4 *)(puVar1);
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 10003193; body size 5 bytes.
#line 1 "ENTRY_10003193"

void FUN_10003193(void)

{
  FUN_10065348();
  return;
}


// Reference entry 1000319d; body size 5 bytes.
#line 1 "ENTRY_1000319d"

int __fastcall FUN_1000319d(int param_1)

{
  return (int)(param_1 + 0x2c);
}


// Reference entry 100031ac; body size 5 bytes.
#line 1 "ENTRY_100031ac"

undefined4 __fastcall FUN_100031ac(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 100031ca; body size 5 bytes.
#line 1 "ENTRY_100031ca"

void __thiscall Recovered_Bulk::FUN_100031ca(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = (int)(*(int *)(param_1 + 0x48));
      if (iVar1 != 0) {
        thunk_FUN_11128910();
        FUN_10065348(iVar1);
        if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)((0x0))) {
          (**(code **)**(undefined4 **)(param_1 + 0x48))(1);
        }
        *(undefined4*)(param_1 + 0x48) = (undefined4)(0);
      }
      if (*(int *)(param_1 + 0x4c) != 0) {
        thunk_FUN_10f77300();
        if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)((0x0))) {
          (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
        }
        *(undefined4*)(param_1 + 0x4c) = (undefined4)(0);
      }
    }
  }
  return;
}


// Reference entry 100031d4; body size 5 bytes.
#line 1 "ENTRY_100031d4"

void __fastcall FUN_100031d4(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 100031de; body size 5 bytes.
#line 1 "ENTRY_100031de"

undefined4 FUN_100031de(undefined4 param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined **appuStack_a4 [8];
  void *pvStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [36];
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  int iStack_c;
  SCStr aSStack_8 [4];


  uVar4 = (uint)(DAT_12126b84 ^ (uint)auStack_78);

  ((SCStr *)(aSStack_8))->int_allocRep("backward");

  iVar5 = (int)(thunk_FUN_10eb1dc0(uVar4));
  *(unsigned char *)((char *)&uStack_7c + 0) = 1;
  thunk_FUN_10df6f00(aSStack_8);
  *(unsigned char *)((char *)&uStack_7c + 0) = 2;
  uVar6 = (undefined4)(thunk_FUN_10def290(auStack_78,iVar5 + 4));
  *(unsigned char *)((char *)&uStack_7c + 0) = 3;
  thunk_FUN_105f5d20(uVar6);
  ppuStack_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  iStack_18 = (int)(0);
  puStack_14 = (undefined4 *)((undefined4 *)0x0);
  puStack_10 = (undefined4 *)((undefined4 *)0x0);
  iStack_c = (int)(0);
  *(unsigned char *)((char *)&uStack_7c + 0) = 5;
  uVar6 = (undefined4)(thunk_FUN_10605060(appuStack_a4));
  thunk_FUN_105f5df0(uVar6);
  puVar3 = (undefined4 *)(puStack_10);
  uStack_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_7c + 1)) << 8 | (uint)(4)));
  puVar7 = (undefined4 *)(puStack_14);
  if ((undefined4 *)(puStack_14) != (undefined4 *)0x0) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar3); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar4 = (uint)(iStack_c - (int)puStack_14 & 0xffffffe0);
    puVar7 = (undefined4 *)(puStack_14);
    if (0xfff < uVar4) {
      puVar7 = (undefined4 *)((undefined4 *)puStack_14[-1]);
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (uint)((int)puStack_14 + (-4 - (int)puVar7))) goto LAB_10a98ad4;
    }
    thunk_FUN_1148a50e(puVar7,uVar4);
    puStack_14 = (undefined4 *)((undefined4 *)0x0);
    puStack_10 = (undefined4 *)((undefined4 *)0x0);
    iStack_c = (int)(0);
  }
  iVar2 = (int)(iStack_1c);
  iVar5 = (int)(iStack_20);
  if (iStack_20 != 0) {
    for (; iVar5 != iVar2; iVar5 = iVar5 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar4 = (uint)(((iStack_18 - iStack_20) / 0x34) * 0x34);
    iVar5 = (int)(iStack_20);
    if (0xfff < uVar4) {
      iVar5 = (int)(*(int *)(iStack_20 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iStack_20 - iVar5) - 4U) {
LAB_10a98ad4:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar5,uVar4);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
    iStack_18 = (int)(0);
  }
  ppuStack_28 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar1 = (int *)(piStack_48);
  appuStack_a4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_7c + 0) = 6;
  if ((int *)(piStack_48) != (int *)0x0) {

    piStack_48 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(piStack_50);
  *(unsigned char *)((char *)&uStack_7c + 0) = 7;
  if ((int *)(piStack_50) != (int *)0x0) {

    piStack_50 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar1 = (int *)(piStack_2c);
  *(unsigned char *)((char *)&uStack_7c + 0) = 8;
  if ((int *)(piStack_2c) != (int *)0x0) {

    piStack_2c = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)(piStack_34);
  uStack_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_7c + 1)) << 8 | (uint)(9)));
  if ((int *)(piStack_34) != (int *)0x0) {

    piStack_34 = (int *)((int *)0x0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)(aSStack_8))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 100031e3; body size 5 bytes.
#line 1 "ENTRY_100031e3"

undefined4 FUN_100031e3(undefined4 param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined **appuStack_118 [8];
  undefined **appuStack_f8 [8];
  undefined1 auStack_d8 [36];
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  undefined1 auStack_a4 [36];
  undefined4 uStack_80;
  int *piStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  void *pvStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined **ppuStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  SCStr aSStack_c [4];
  undefined4 uStack_8;


  ((SCStr *)(aSStack_c))->int_allocRep("cloudRefresh");

  iVar3 = (int)(thunk_FUN_10eb22a0(DAT_121a4700));
  *(unsigned char *)((char *)&uStack_68 + 0) = 1;
  thunk_FUN_10dfb8f0(aSStack_c);
  *(unsigned char *)((char *)&uStack_68 + 0) = 2;
  uVar4 = (undefined4)(thunk_FUN_10def290(auStack_d8,iVar3 + 4));
  *(unsigned char *)((char *)&uStack_68 + 0) = 3;
  thunk_FUN_105f5d20(uVar4);
  *(unsigned char *)((char *)&uStack_68 + 0) = 4;
  ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("cloudRefresh");
  *(unsigned char *)((char *)&uStack_68 + 0) = 5;
  thunk_FUN_10eb22a0(DAT_121a4700);
  *(unsigned char *)((char *)&uStack_68 + 0) = 6;
  thunk_FUN_10dfba00(&uStack_8);
  *(unsigned char *)((char *)&uStack_68 + 0) = 7;
  iVar3 = (int)(thunk_FUN_10eb2fc0());
  uVar4 = (undefined4)(thunk_FUN_10def290(auStack_a4,iVar3 + 4));
  *(unsigned char *)((char *)&uStack_68 + 0) = 8;
  thunk_FUN_105f5d20(uVar4);
  ppuStack_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_24 = (int)(0);
  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  puStack_18 = (undefined4 *)((undefined4 *)0x0);
  puStack_14 = (undefined4 *)((undefined4 *)0x0);
  iStack_10 = (int)(0);
  *(unsigned char *)((char *)&uStack_68 + 0) = 10;
  piVar5 = (int *)((int *)thunk_FUN_10605060(appuStack_f8));
  uVar4 = (undefined4)((**(code **)(*piVar5 + 8))(appuStack_118));
  thunk_FUN_105f5df0(uVar4);
  puVar2 = (undefined4 *)(puStack_14);
  uStack_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_68 + 1)) << 8 | (uint)(9)));
  puVar7 = (undefined4 *)(puStack_18);
  if ((undefined4 *)(puStack_18) != (undefined4 *)0x0) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar6 = (uint)(iStack_10 - (int)puStack_18 & 0xffffffe0);
    puVar7 = (undefined4 *)(puStack_18);
    if (0xfff < uVar6) {
      puVar7 = (undefined4 *)((undefined4 *)puStack_18[-1]);
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (uint)((int)puStack_18 + (-4 - (int)puVar7))) goto LAB_10a8f545;
    }
    thunk_FUN_1148a50e(puVar7,uVar6);
    puStack_18 = (undefined4 *)((undefined4 *)0x0);
    puStack_14 = (undefined4 *)((undefined4 *)0x0);
    iStack_10 = (int)(0);
  }
  iVar1 = (int)(iStack_20);
  iVar3 = (int)(iStack_24);
  if (iStack_24 != 0) {
    for (; iVar3 != iVar1; iVar3 = iVar3 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar6 = (uint)(((iStack_1c - iStack_24) / 0x34) * 0x34);
    iVar3 = (int)(iStack_24);
    if (0xfff < uVar6) {
      iVar3 = (int)(*(int *)(iStack_24 + -4));
      uVar6 = (uint)(uVar6 + 0x23);
      if (0x1f < (iStack_24 - iVar3) - 4U) {
LAB_10a8f545:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar6);
    iStack_24 = (int)(0);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
  }
  ppuStack_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar5 = (int *)(piStack_74);
  appuStack_f8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xb;
  if ((int *)(piStack_74) != (int *)0x0) {

    piStack_74 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(piStack_7c);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xc;
  if ((int *)(piStack_7c) != (int *)0x0) {

    piStack_7c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar5 = (int *)(piStack_30);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xd;
  if ((int *)(piStack_30) != (int *)0x0) {

    piStack_30 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(piStack_38);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xe;
  if ((int *)(piStack_38) != (int *)0x0) {

    piStack_38 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xf;
  ((SCStr *)((SCStr *)&uStack_8))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar5 = (int *)(piStack_a8);
  appuStack_118[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0x10;
  if ((int *)(piStack_a8) != (int *)0x0) {

    piStack_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(piStack_b0);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0x11;
  if ((int *)(piStack_b0) != (int *)0x0) {

    piStack_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar5 = (int *)(piStack_4c);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0x12;
  if ((int *)(piStack_4c) != (int *)0x0) {

    piStack_4c = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = (int *)(piStack_54);
  uStack_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_68 + 1)) << 8 | (uint)(0x13)));
  if ((int *)(piStack_54) != (int *)0x0) {

    piStack_54 = (int *)((int *)0x0);
    (**(code **)(*piVar5 + 8))();
  }

  ((SCStr *)(aSStack_c))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 100031f7; body size 5 bytes.
#line 1 "ENTRY_100031f7"

undefined4 * FUN_100031f7(undefined4 *param_1)

{
 try {
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  SCLibrary *this_;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  SCStr **ppSVar11;
  undefined1 auStack_64 [12];
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  int *piStack_4c;
  int *piStack_48;
  SCStr *pSStack_44;
  int *piStack_40;
  void *pvStack_3c;
  int iStack_34;
  SCStr *pSStack_30;
  SCStr *pSStack_2c;
  SCStr *pSStack_28;
  int *piStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  ppSVar11 = (SCStr **)(&pSStack_30);

  uVar8 = (uint)(1);

  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton());
  piVar5 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold());
  piStack_4c = (int *)((int *)*piVar5);

  *piVar5 = (int)(0);
  if ((int *)(piStack_4c) == (int *)0x0) {
    piStack_48 = (int *)((int *)0x0);
  }
  else {
    piStack_48 = (int *)((int *)(**(code **)(*piStack_4c + 0xc))(ppSVar11,uVar4));
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 4;
  if ((SCStr *)(pSStack_30) != (SCStr *)0x0) {
    (**(code **)(*(int *)pSStack_30 + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  thunk_FUN_1037f130(&puStack_58,9);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(5)));
  puVar9 = (undefined4 *)(puStack_58);
  iVar10 = (int)(iStack_20);
  if ((undefined4 *)(puStack_58) != (undefined4 *)(puStack_54)) {
    do {
      piStack_40 = (int *)((int *)puVar9[1]);
      pSStack_44 = (SCStr *)((SCStr *)*puVar9);
      pSStack_30 = (SCStr *)(pSStack_44);
      if ((int *)(piStack_40) != (int *)0x0) {
        (**(code **)(*piStack_40 + 4))();
      }
      *(unsigned char *)((char *)&uStack_8 + 0) = 6;
      if (((SCStr *)(pSStack_30) != (SCStr *)0x0) &&
         (pSStack_2c = *(SCStr **)(pSStack_30 + 8),(SCStr *)( pSStack_2c) != (SCStr *)0x0)) {
        pSStack_28 = (SCStr *)(pSStack_2c + 0x60);
        if ((*(char **)pSStack_28 == (char *)((0x0))) || (**(char **)pSStack_28 == '\0')) {
          if ((*(int *)(pSStack_2c + 0x1c) == 0) || (pSStack_2c[0xa71] != 0x0)) {
            iVar10 = (int)(0);
            iStack_20 = (int)(0);
            piVar5 = (int *)(&iStack_20);

            uVar8 = (uint)(uVar8 | 4);
          }
          else {
            piVar5 = (int *)((int *)thunk_FUN_101b9a40(*(int *)(pSStack_2c + 0x1c) + 0x489));
            uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(7)));
            uVar8 = (uint)(uVar8 | 2);
          }
          uStack_1c = (uint)(uVar8);
          thunk_FUN_101ba530(piVar5);
          if ((uVar8 & 4) != 0) {
            uVar8 = (uint)(uVar8 & 0xfffffffb);

            uStack_1c = (uint)(uVar8);
            if (((iVar10 != 0) && (*(int *)(iVar10 + -0x10) < 0xffff)) &&
               (iVar6 = thunk_FUN_1123fcd0(iVar10 + -0x10), iVar6 == 0)) {
              *(undefined4*)(iVar10 + -8) = (undefined4)(0);
              *(undefined4*)(iVar10 + -0xc) = (undefined4)(0);
              thunk_FUN_113cfb70(iVar10,*(undefined4 *)(iVar10 + -4));
              free((void *)(iVar10 + -0x10));
            }
          }
          *(unsigned short *)((char *)&uStack_8 + 1) = 0;
          if ((uVar8 & 2) != 0) {
            uVar8 = (uint)(uVar8 & 0xfffffffd);

            uStack_1c = (uint)(uVar8);
            if (((iStack_34 != 0) && (piStack_24 = (int *)(iStack_34 + -0x10), *piStack_24 < 0xffff)
                ) && (iVar6 = thunk_FUN_1123fcd0(piStack_24), iVar6 == 0)) {
              piStack_24[2] = (int)(0);
              piStack_24[1] = (int)(0);
              thunk_FUN_113cfb70(piStack_24 + 4,piStack_24[3]);
              free(piStack_24);
            }
          }
        }
        *(unsigned char *)((char *)&uStack_8 + 0) = 6;
        pcVar7 = (char *)("");
        if (*(char **)pSStack_28 != (char *)((0x0))) {
          pcVar7 = (char *)(*(char **)pSStack_28);
        }
        ((SCStr *)((SCStr *)&uStack_18))->int_allocRep(pcVar7);
        *(unsigned char *)((char *)&uStack_8 + 0) = 0xb;
        if ((pSStack_2c[0x530] == 0x0) ||
           (cStack_11 = '\x01', *(int *)(pSStack_2c + 0x528) != 0)) {
          cStack_11 = (char)('\0');
        }
        iVar6 = (int)(thunk_FUN_1025ed70(auStack_64,&uStack_18));
        if (((*(char *)(*(int *)(iVar6 + 8) + 0xd) != '\0') ||
            (bVar2 = ((SCStr *)((SCStr *)&uStack_18))->op_lt((SCStr *)(*(int *)(iVar6 + 8) + 0x10)),
            bVar2)) && ((cStack_11 != '\0' || (cVar3 = thunk_FUN_110d5410(), cVar3 != '\0')))) {
          pvStack_3c = (void *)(operator_new(0x48));
          *(unsigned char *)((char *)&uStack_8 + 0) = 0xc;
          if ((void *)(pvStack_3c) == (void *)0x0) {
            pSStack_30 = (SCStr *)((SCStr *)0x0);
          }
          else {
            pSStack_30 = (SCStr *)((SCStr *)thunk_FUN_10f30c90(pSStack_30));
          }
          *(unsigned char *)((char *)&uStack_8 + 0) = 0xb;
          uVar1 = (undefined1)((undefined1)uStack_8);
          *(unsigned char *)((char *)&uStack_8 + 0) = 0xb;
          pSStack_2c = (SCStr *)((SCStr *)param_1[1]);
          if ((SCStr *)(pSStack_2c) == (SCStr *)param_1[2]) {
            pSStack_28 = (SCStr *)(pSStack_30);
            *(unsigned char *)((char *)&uStack_8 + 0) = uVar1;
            thunk_FUN_10828470(pSStack_2c,&uStack_18,&pSStack_28);
          }
          else {
            pSStack_28 = (SCStr *)(pSStack_2c);
            ((SCStr *)(pSStack_2c))->op_ctor((SCStr *)&uStack_18);
            *(unsigned char *)((char *)&uStack_8 + 0) = 0xd;
            *(SCStr**)(pSStack_2c + 4) = (SCStr *)(pSStack_30);
            *(undefined4*)(pSStack_2c + 8) = (undefined4)(0);
            if ((SCStr *)(pSStack_30) != (SCStr *)0x0) {
              piVar5 = (int *)((int *)(**(code **)(*(int *)pSStack_30 + 0xc))());
              *(int**)(pSStack_2c + 8) = (int *)(piVar5);
              (**(code **)(*piVar5 + 4))();
            }
            param_1[1] = (undefined4)(param_1[1] + 0xc);
          }
        }
        *(unsigned char *)((char *)&uStack_8 + 0) = 0xe;
        ((SCStr *)((SCStr *)&uStack_18))->int_release();

      }
      *(unsigned char *)((char *)&uStack_8 + 0) = 0xf;
      if ((int *)(piStack_40) != (int *)0x0) {
        iVar6 = (int)(*piStack_40);
        pSStack_44 = (SCStr *)((SCStr *)0x0);
        piStack_40 = (int *)((int *)0x0);
        (**(code **)(iVar6 + 8))();
      }
      puVar9 = (undefined4 *)(puVar9 + 2);
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(5)));
    } while ((undefined4 *)(puVar9) != (undefined4 *)(puStack_54));
  }
  thunk_FUN_101f4a30();

  if ((int *)(piStack_48) != (int *)0x0) {
    (**(code **)(*piStack_48 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10003201; body size 5 bytes.
#line 1 "ENTRY_10003201"

void __fastcall FUN_10003201(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  return;
}


// Reference entry 10003206; body size 5 bytes.
#line 1 "ENTRY_10003206"

undefined4 __fastcall FUN_10003206(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1000320b; body size 5 bytes.
#line 1 "ENTRY_1000320b"

SCStr * FUN_1000320b(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  SCStr *pSVar1;
  SCStr *this_;
  SCStr *pSVar2;
  
  if ((SCStr *)(param_1) != (SCStr *)(param_2)) {
    this_ = (SCStr *)(param_3 + 8);
    pSVar2 = (SCStr *)(param_1 + 8);
    do {
      if (pSVar2 + -8 != param_3) {
        ((SCStr *)(param_3))->int_release();
        *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)(pSVar2 + -8)));
        ((SCStr *)(param_3))->int_addref();
      }
      if ((SCStr *)((pSVar2)) != (SCStr *)(this_)) {
        ((SCStr *)(this_ + -4))->int_release();
        *(undefined4*)(this_ + -4) = (undefined4)(*(undefined4 *)(pSVar2 + -4));
        ((SCStr *)(this_ + -4))->int_addref();
        if ((SCStr *)((pSVar2)) != (SCStr *)(this_)) {
          ((SCStr *)(this_))->int_release();
          *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar2));
          ((SCStr *)(this_))->int_addref();
        }
      }
      param_3 = (SCStr *)(param_3 + 0xc);
      this_ = (SCStr *)(this_ + 0xc);
      pSVar1 = (SCStr *)(pSVar2 + 4);
      pSVar2 = (SCStr *)(pSVar2 + 0xc);
    } while ((SCStr *)(pSVar1) != (SCStr *)(param_2));
    return (SCStr *)(param_3);
  }
  return (SCStr *)(param_3);
}


// Reference entry 10003210; body size 5 bytes.
#line 1 "ENTRY_10003210"

undefined1 FUN_10003210(void)

{
  return (undefined1)(1);
}


// Reference entry 10003215; body size 5 bytes.
#line 1 "ENTRY_10003215"

void FUN_10003215(void)

{
  thunk_FUN_104bce60();
  return;
}


// Reference entry 1000321a; body size 5 bytes.
#line 1 "ENTRY_1000321a"

void __fastcall FUN_1000321a(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6160) != 0) && (*(int **)(param_1 + 0x615c) != (int *)((0x0)))) {
    (**(code **)(**(int **)(param_1 + 0x615c) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x615c));
    if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4*)(param_1 + 0x615c) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x6160) = (undefined4)(0);
  }
  return;
}


// Reference entry 10003229; body size 5 bytes.
#line 1 "ENTRY_10003229"

/* public: virtual class SCIObj * __thiscall SCLibrary::getRootObject(void_) */SCIObj * __thiscall  FUN_10003229(SCLibrary *this_){
                    
  return (SCIObj *)((SCIObj *)this_);
}


// Reference entry 1000322e; body size 5 bytes.
#line 1 "ENTRY_1000322e"

/* int __cdecl SCThreadSafeTestAndClear_1000322e(long *) */int __cdecl FUN_1000322e(long *param_1){
  int iVar1;
  
                    
  LOCK();
  iVar1 = (int)(*param_1);
  *param_1 = (long)(0);
  UNLOCK();
  return (int)(iVar1);
}


// Reference entry 10003233; body size 5 bytes.
#line 1 "ENTRY_10003233"
void FUN_10003233(void){
                    
  (*(code *)(uint)(DAT_121a06c8))("eula_flag_nz");
  return;
}


// Reference entry 10003238; body size 5 bytes.
#line 1 "ENTRY_10003238"
undefined4 FUN_10003238(void){
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  puVar2 = (undefined4 *)((undefined4 *)thunk_FUN_102518f0(&piStack_14,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if ((int *)(piStack_14) != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 1000323d; body size 5 bytes.
#line 1 "ENTRY_1000323d"
undefined1 FUN_1000323d(int *param_1){
  undefined1 uVar1;
  
                    
  uVar1 = (undefined1)((**(code **)(*param_1 + 0x2c))());
  return (undefined1)(uVar1);
}


// Reference entry 10003247; body size 5 bytes.
#line 1 "ENTRY_10003247"

undefined4 FUN_10003247(void)

{
  return (undefined4)(0xffffffff);
}


// Reference entry 10003251; body size 5 bytes.
#line 1 "ENTRY_10003251"

undefined4 * __thiscall Recovered_Bulk::FUN_10003251(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUnsubscribeRequest);
  thunk_FUN_112665b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x8570);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003256; body size 5 bytes.
#line 1 "ENTRY_10003256"

undefined1 FUN_10003256(void)

{
  return (undefined1)(0);
}


// Reference entry 10003265; body size 5 bytes.
#line 1 "ENTRY_10003265"

void __thiscall Recovered_Bulk::FUN_10003265(SCStr *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 0x28));
  if ((SCStr *)((param_2)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 0x2c));
  if ((SCStr *)((param_3)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_3));
    ((SCStr *)(pSVar1))->int_addref();
  }
  return;
}


// Reference entry 1000326a; body size 5 bytes.
#line 1 "ENTRY_1000326a"

SCStr * FUN_1000326a(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("lifecycle_player_removal.reset_failed");
  return (SCStr *)(param_1);
}


// Reference entry 10003274; body size 5 bytes.
#line 1 "ENTRY_10003274"

undefined4 * __thiscall Recovered_Bulk::FUN_10003274(undefined4 *param_2)
{
  int param_1 = (int )this;
 try {
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piStack_28;
  int *piStack_24;
  int *piStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if (*(int **)(param_1 + 0xc) == (int *)((0x0))) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }

  uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x54))
                    (&piStack_1c,DAT_12126b84 ^ (uint)&stack0xfffffffc));

  thunk_FUN_101aa9f0(uVar4);
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  if ((int *)(piStack_1c) != (int *)0x0) {
    (**(code **)(*piStack_1c + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  uVar3 = (undefined1)((undefined1)uStack_8);
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  if ((int *)(piStack_28) == (int *)0x0) goto LAB_10fa9343;
  cVar2 = (char)((**(code **)(**(int **)(param_1 + 8) + 0xf8))());
  uVar3 = (undefined1)((undefined1)uStack_8);
  if (cVar2 != '\0') goto LAB_10fa9343;
  ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("right_button_label");
  *(unsigned char *)((char *)&uStack_8 + 0) = 4;
  uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 0x98))(&uStack_14));
  *(unsigned char *)((char *)&uStack_8 + 0) = 5;
  (**(code **)(*piStack_28 + 0x1c))(&uStack_18,uVar4);
  *(unsigned char *)((char *)&uStack_8 + 0) = 6;
  ((SCStr *)((SCStr *)&uStack_14))->int_release();

  *(unsigned char *)((char *)&uStack_8 + 0) = 7;
  ((SCStr *)((SCStr *)&uStack_18))->int_release();
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("left_button_label");
  *(unsigned char *)((char *)&uStack_8 + 0) = 8;
  uVar4 = (undefined4)((**(code **)(**(int **)(param_1 + 8) + 0x9c))(&uStack_18));
  *(unsigned char *)((char *)&uStack_8 + 0) = 9;
  (**(code **)(*piStack_28 + 0x1c))(&uStack_14,uVar4);
  *(unsigned char *)((char *)&uStack_8 + 0) = 10;
  ((SCStr *)((SCStr *)&uStack_18))->int_release();

  *(unsigned char *)((char *)&uStack_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&uStack_14))->int_release();
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  cVar2 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x6c))());
  if (cVar2 == '\0') {
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x70))());
    uStack_18 = (uint)(uStack_18 & 0xffffff00);
    if (cVar2 != '\0') goto LAB_10fa922b;
  }
  else {
LAB_10fa922b:
    uStack_18 = (uint)(((uint)(*(unsigned short *)((char *)&uStack_18 + 1)) << 8 | (uint)(1)));
  }
  ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("right_arrow_hidden");
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xc;
  (**(code **)(*piStack_28 + 0x40))(&uStack_14,uStack_18);
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xd;
  ((SCStr *)((SCStr *)&uStack_14))->int_release();
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("left_arrow_hidden");
  iVar1 = (int)(*piStack_28);
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xe;
  uVar3 = (undefined1)((**(code **)(**(int **)(param_1 + 8) + 100))());
  (**(code **)(iVar1 + 0x40))(&uStack_18,uVar3);
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xf;
  ((SCStr *)((SCStr *)&uStack_18))->int_release();
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("cancel_enabled");
  iVar1 = (int)(*piStack_28);
  *(unsigned char *)((char *)&uStack_8 + 0) = 0x10;
  uVar3 = (undefined1)((**(code **)(**(int **)(param_1 + 8) + 0x68))());
  (**(code **)(iVar1 + 0x40))(&uStack_18,uVar3);
  *(unsigned char *)((char *)&uStack_8 + 0) = 0x11;
  ((SCStr *)((SCStr *)&uStack_18))->int_release();
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("is_busy");
  *(unsigned char *)((char *)&uStack_8 + 0) = 0x12;
  cVar2 = (char)((**(code **)(*piStack_28 + 0x74))(&uStack_18));
  *(unsigned char *)((char *)&uStack_8 + 0) = 0x13;
  ((SCStr *)((SCStr *)&uStack_18))->int_release();
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  uVar3 = (undefined1)((undefined1)uStack_8);
  if (cVar2 == '\0') {
    ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("is_busy");
    iVar1 = (int)(*piStack_28);
    *(unsigned char *)((char *)&uStack_8 + 0) = 0x14;
    uVar3 = (undefined1)((**(code **)(**(int **)(param_1 + 8) + 0x5c))());
    (**(code **)(iVar1 + 0x40))(&uStack_18,uVar3);
    *(unsigned char *)((char *)&uStack_8 + 0) = 0x15;
    ((SCStr *)((SCStr *)&uStack_18))->int_release();
    *(unsigned char *)((char *)&uStack_8 + 0) = 2;
    uVar3 = (undefined1)((undefined1)uStack_8);
  }
LAB_10fa9343:
  *(unsigned char *)((char *)&uStack_8 + 0) = uVar3;
  *param_2 = (undefined4)(piStack_28);
  if ((int *)(piStack_28) != (int *)0x0) {
    (**(code **)(*piStack_28 + 4))();
  }

  if ((int *)(piStack_24) != (int *)0x0) {
    (**(code **)(*piStack_24 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10003297; body size 5 bytes.
#line 1 "ENTRY_10003297"

void FUN_10003297(void)

{
  thunk_FUN_10cbd320();
  return;
}


// Reference entry 1000329c; body size 5 bytes.
#line 1 "ENTRY_1000329c"

void __fastcall FUN_1000329c(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  __time64_t _Time1;
  double dVar10;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar4 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 8) != 0) {
    piVar9 = (int *)((int *)**(int **)(param_1 + 0x6c));
    if ((int *)(piVar9) != *(int **)(param_1 + 0x6c)) {
      do {
        if ((int *)piVar9[6] != (int *)((0x0))) {
          (**(code **)(*(int *)piVar9[6] + 0x18))(uVar4);
          piVar1 = (int *)((int *)piVar9[7]);
          if ((int *)(piVar1) != (int *)0x0) {
            piVar9[6] = (int)(0);
            piVar9[7] = (int)(0);
            (**(code **)(*piVar1 + 8))();
          }
          piVar9[6] = (int)(0);
          piVar9[7] = (int)(0);
          if ((piVar9[4] == 0) && (piVar9[5] == -0x80000000)) {
            thunk_FUN_112af4e0();
          }
          else {
            _Time1 = (__time64_t)(_time64((__time64_t *)0x0));
            dVar10 = (double)(_difftime64(_Time1,*(__time64_t *)(piVar9 + 4)));
            puVar8 = (undefined1 *)(&DAT_1186d2ee);
            if ((undefined1 *)piVar9[8] != (undefined1 *)((0x0))) {
              puVar8 = (undefined1 *)((undefined1 *)piVar9[8]);
            }
            thunk_FUN_112af4e0("sc_lan_household",2,
                               "Canceling battery stats fetch op for %s, %.0lf seconds since last good fetch."
                               ,puVar8,(uint)((*(unsigned long long *)&(dVar10)) >> ((0) * 8)),(int)((ulonglong)dVar10 >> 0x20));
          }
        }
        piVar1 = (int *)((int *)*piVar9);
        iVar6 = (int)(*(int *)(param_1 + 0x74));
        uVar5 = (uint)(((((*(byte *)(piVar9 + 2) ^ 0x811c9dc5) * 0x1000193 ^
                  (uint)*(byte *)((int)piVar9 + 9)) * 0x1000193 ^ (uint)*(byte *)((int)piVar9 + 10))
                 * 0x1000193 ^ (uint)*(byte *)((int)piVar9 + 0xb)) * 0x1000193 &
                *(uint *)(param_1 + 0x80));
        piVar2 = (int *)(*(int **)(iVar6 + uVar5 * 8));
        if (*(int **)(iVar6 + 4 + uVar5 * 8) == (int *)((piVar9))) {
          if ((int *)(piVar2) == (int *)(piVar9)) {
            uVar7 = (undefined4)(*(undefined4 *)(param_1 + 0x6c));
            *(undefined4*)(iVar6 + uVar5 * 8) = (undefined4)(uVar7);
            *(undefined4*)(iVar6 + 4 + uVar5 * 8) = (undefined4)(uVar7);
          }
          else {
            *(int*)(iVar6 + 4 + uVar5 * 8) = (int)(piVar9[1]);
          }
        }
        else if ((int *)(piVar2) == (int *)(piVar9)) {
          *(int**)(iVar6 + uVar5 * 8) = (int *)(piVar1);
        }
        iVar6 = (int)(*piVar9);
        *(int*)(param_1 + 0x70) = (int)(*(int *)(param_1 + 0x70) + -1);
        *(int*)piVar9[1] = (int)((int)(iVar6));
        *(int*)(iVar6 + 4) = (int)(piVar9[1]);

        ((SCStr *)((SCStr *)(piVar9 + 8)))->int_release();
        piVar9[8] = (int)(0);
        piVar2 = (int *)((int *)piVar9[7]);

        if ((int *)(piVar2) != (int *)0x0) {
          piVar9[6] = (int)(0);
          piVar9[7] = (int)(0);
          (**(code **)(*piVar2 + 8))();
        }

        thunk_FUN_1148a50e(piVar9,0x28);
        piVar9 = (int *)(piVar1);
      } while ((int *)(piVar1) != (int *)*(int *)(param_1 + 0x6c));
    }
    uVar4 = (uint)(0);
    iVar6 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 0x28))(9));
    if (iVar6 != 0) {
      uVar7 = (undefined4)(FUN_10c8de80(9));
      do {
        iVar6 = (int)(thunk_FUN_11082e60(uVar4,uVar7));
        if ((*(int *)(iVar6 + 0x1c) != 0) &&
           (cVar3 = (**(code **)(*(int *)(*(int *)(iVar6 + 0x1c) + 0x378) + 8))(), cVar3 != '\0')) {
          thunk_FUN_10c8e860(iVar6);
        }
        uVar4 = (uint)(uVar4 + 1);
        uVar5 = (uint)((**(code **)(*(int *)(param_1 + 0xc) + 0x28))(9));
      } while (uVar4 < uVar5);
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 100032a6; body size 5 bytes.
#line 1 "ENTRY_100032a6"

undefined1 FUN_100032a6(void)

{
  return (undefined1)(1);
}


// Reference entry 100032ab; body size 5 bytes.
#line 1 "ENTRY_100032ab"

void FUN_100032ab(void)

{
  thunk_FUN_107eca70();
  return;
}


// Reference entry 100032b0; body size 5 bytes.
#line 1 "ENTRY_100032b0"

undefined4 __thiscall Recovered_Bulk::FUN_100032b0(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined ***pppuVar14;
  undefined **appuStack_174 [8];
  undefined **appuStack_154 [8];
  undefined **appuStack_134 [8];
  undefined **appuStack_114 [8];
  undefined **appuStack_f4 [8];
  undefined1 auStack_d4 [12];
  undefined4 uStack_c8;
  int *piStack_c4;
  undefined4 auStack_c0 [2];
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 auStack_b0 [2];
  undefined4 uStack_a8;
  int *piStack_a4;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  int *piStack_94;
  undefined4 auStack_90 [2];
  undefined4 uStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  void *pvStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [2];
  undefined1 *apuStack_68 [3];
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  undefined4 auStack_44 [2];
  undefined **ppuStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  int *piStack_8;


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)auStack_70);
  piVar4 = (int *)((int *)thunk_FUN_10cf34e0(&piStack_8));
  piVar7 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  piStack_5c = (int *)(piVar7);
  if ((int *)(piVar7) == (int *)0x0) {
    piStack_58 = (int *)((int *)0x0);
  }
  else {
    piStack_58 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
  }
  *(unsigned char *)((char *)&uStack_74 + 0) = 3;
  if ((int *)(piStack_8) != (int *)0x0) {
    (**(code **)(*piStack_8 + 8))();
  }
  *(unsigned char *)((char *)&uStack_74 + 0) = 2;
  thunk_FUN_10c5f1d0(piVar7);
  thunk_FUN_10c61010(apuStack_68,auStack_1c,6,0,0);
  *(unsigned char *)((char *)&uStack_74 + 0) = 4;
  thunk_FUN_10c5f1d0(piVar7);
  puVar8 = (undefined1 *)(auStack_d4);
  thunk_FUN_105bebd0(puVar8);
  uStack_14 = (uint)(thunk_FUN_10e0f250(puVar8));
  uVar5 = (undefined4)(thunk_FUN_10c5f450((SCStr *)auStack_70,0x2822,&DAT_11882ff0));
  *(unsigned char *)((char *)&uStack_74 + 0) = 5;
  thunk_FUN_10ec0a20(&DAT_1187ed04);
  *(unsigned char *)((char *)&uStack_74 + 0) = 6;
  thunk_FUN_10ec7940(2);
  iVar6 = (int)(thunk_FUN_10ecea60(uVar5));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_74 + 0) = 7;
  uVar5 = (undefined4)(thunk_FUN_10dfaa00());
  iStack_18 = (int)(param_1 + 0xac);
  uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(8)));
  uVar10 = (uint)(1);

  cVar3 = (char)(thunk_FUN_10df10f0(uVar5));
  if (cVar3 == '\0') {
LAB_107efe40:
    piStack_8 = (int *)((int *)((uint)piStack_8 & 0xffffff00));
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_10df95e0());
    uVar10 = (uint)(3);


    cVar3 = (char)(thunk_FUN_10df1160(uVar5));
    piStack_8 = (int *)((int *)((uint)(*(unsigned short *)((char *)&piStack_8 + 1)) << 8 | (uint)(1)));
    if (cVar3 != '\0') goto LAB_107efe40;
  }
  thunk_FUN_10ec2880("tryAgain");

  iVar6 = (int)(thunk_FUN_10ec6900(piStack_8));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0xb;
  uVar5 = (undefined4)(thunk_FUN_10e10270(&uStack_54,5));
  *(unsigned char *)((char *)&uStack_74 + 0) = 0xc;
  thunk_FUN_10ec2970("video");
  uVar12 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0xd;
  thunk_FUN_10ece3b0(uVar5);
  iVar6 = (int)(thunk_FUN_10eca030(uVar12));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0xe;
  uVar5 = (undefined4)(thunk_FUN_10e10270(&uStack_4c,0xd));
  *(unsigned char *)((char *)&uStack_74 + 0) = 0xf;
  thunk_FUN_10ec2970("video");
  uVar13 = (undefined4)(1);
  uVar12 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x10;
  thunk_FUN_10ece3b0(uVar5);
  thunk_FUN_10ec7c30(uVar12,uVar13);
  thunk_FUN_10ec9d30(uVar12);
  iVar6 = (int)(thunk_FUN_10eca030(uVar13));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x11;
  ((SCStr *)((SCStr *)&uStack_10))->int_allocRep("video");
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x12;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x13;
  puVar8 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(apuStack_68[0]) != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)(apuStack_68[0]);
  }
  thunk_FUN_10c62d50(auStack_44,apuStack_68,0x2821,&DAT_1188465c,puVar8);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x14;
  thunk_FUN_10ec1b40("title");
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x15;
  iVar6 = (int)(thunk_FUN_10eced20(auStack_44));
  thunk_FUN_105f6290(iVar6 + 4);
  ppuStack_3c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_34 = (int *)((int *)0x0);
  piStack_30 = (int *)((int *)0x0);
  iStack_2c = (int)(0);
  puStack_28 = (undefined4 *)((undefined4 *)0x0);
  puStack_24 = (undefined4 *)((undefined4 *)0x0);
  iStack_20 = (int)(0);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x17;
  piVar7 = (int *)((int *)thunk_FUN_106050a0(appuStack_f4));
  uVar5 = (undefined4)(thunk_FUN_10dfdbf0(&uStack_10,&DAT_121a669c));
  iVar6 = (int)(*piVar7);
  pppuVar14 = (undefined ***)(appuStack_114);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x18;
  cVar3 = (char)(thunk_FUN_10df10f0(uVar5));
  piVar7 = (int *)((int *)(**(code **)(iVar6 + 0xc))(cVar3 == '\0',pppuVar14));
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 0x14))(appuStack_134));
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 8))(appuStack_154));
  uVar5 = (undefined4)((**(code **)(*piVar7 + 8))(appuStack_174));
  thunk_FUN_105f60e0(uVar5);
  uVar10 = (uint)(uVar10 | 4);
  uStack_14 = (uint)(uVar10);
  uStack_c = (uint)(uVar10);
  thunk_FUN_10def0d0();
  puVar2 = (undefined4 *)(puStack_24);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x16;
  puVar11 = (undefined4 *)(puStack_28);
  if ((undefined4 *)(puStack_28) != (undefined4 *)0x0) {
    for (;(undefined4 *)((puVar11)) != (undefined4 *)(puVar2); puVar11 = puVar11 + 8) {
      (**(code **)*puVar11)(0);
    }
    uVar9 = (uint)(iStack_20 - (int)puStack_28 & 0xffffffe0);
    puVar11 = (undefined4 *)(puStack_28);
    if (0xfff < uVar9) {
      puVar11 = (undefined4 *)((undefined4 *)puStack_28[-1]);
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (uint)((int)puStack_28 + (-4 - (int)puVar11))) goto LAB_107f0148;
    }
    thunk_FUN_1148a50e(puVar11,uVar9);
    puStack_28 = (undefined4 *)((undefined4 *)0x0);
    puStack_24 = (undefined4 *)((undefined4 *)0x0);
    iStack_20 = (int)(0);
  }
  piVar7 = (int *)(piStack_30);
  if ((int *)(piStack_34) != (int *)0x0) {
    if ((int *)(piStack_34) != (int *)(piStack_30)) {
      piVar4 = (int *)(piStack_34 + 1);
      do {
        *(unsigned char *)((char *)&uStack_74 + 0) = 0x19;
        ((SCStr *)((SCStr *)(piVar4 + 1)))->int_release();
        piVar4[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar4);
        *(unsigned char *)((char *)&uStack_74 + 0) = 0x1a;
        if ((int *)(piVar1) != (int *)0x0) {
          piVar4[-1] = (int)(0);
          *piVar4 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&uStack_74 + 0) = 0x16;
        piVar1 = (int *)(piVar4 + 2);
        uVar10 = (uint)(uStack_14);
        piVar4 = (int *)(piVar4 + 3);
      } while ((int *)(piVar1) != (int *)(piVar7));
    }
    uVar9 = (uint)(((iStack_2c - (int)piStack_34) / 0xc) * 0xc);
    piVar7 = (int *)(piStack_34);
    if (0xfff < uVar9) {
      piVar7 = (int *)((int *)piStack_34[-1]);
      uVar9 = (uint)(uVar9 + 0x23);
      if (0x1f < (uint)((int)piStack_34 + (-4 - (int)piVar7))) {
LAB_107f0148:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar7,uVar9);
    piStack_34 = (int *)((int *)0x0);
    piStack_30 = (int *)((int *)0x0);
    iStack_2c = (int)(0);
  }
  ppuStack_3c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_f4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x1b;
  ((SCStr *)((SCStr *)&uStack_80))->int_release();
  piVar7 = (int *)(piStack_84);

  *(unsigned char *)((char *)&uStack_74 + 0) = 0x1c;
  if ((int *)(piStack_84) != (int *)0x0) {

    piStack_84 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x1d;
  ((SCStr *)((SCStr *)auStack_44))->int_release();
  auStack_44[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x1e;
  ((SCStr *)((SCStr *)&uStack_10))->int_release();

  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_114[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x1f;
  ((SCStr *)((SCStr *)auStack_90))->int_release();
  piVar7 = (int *)(piStack_94);
  auStack_90[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x20;
  if ((int *)(piStack_94) != (int *)0x0) {

    piStack_94 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(piStack_48);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x21;
  if ((int *)(piStack_48) != (int *)0x0) {

    piStack_48 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_134[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x22;
  ((SCStr *)((SCStr *)auStack_a0))->int_release();
  piVar7 = (int *)(piStack_a4);
  auStack_a0[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x23;
  if ((int *)(piStack_a4) != (int *)0x0) {

    piStack_a4 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(piStack_50);
  uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x24)));
  if ((int *)(piStack_50) != (int *)0x0) {

    piStack_50 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_154[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);

  ((SCStr *)((SCStr *)auStack_b0))->int_release();
  piVar7 = (int *)(piStack_b4);
  auStack_b0[0] = (undefined4)(0);

  if ((int *)(piStack_b4) != (int *)0x0) {

    piStack_b4 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  if ((uVar10 & 2) != 0) {
    uVar10 = (uint)(uVar10 & 0xfffffffd);
    thunk_FUN_105a1d20();
    thunk_FUN_105a1c80();
  }

  if ((uVar10 & 1) != 0) {
    thunk_FUN_10def0d0();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_174[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x27;
  ((SCStr *)((SCStr *)auStack_c0))->int_release();
  piVar7 = (int *)(piStack_c4);
  auStack_c0[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x28;
  if ((int *)(piStack_c4) != (int *)0x0) {

    piStack_c4 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char *)((char *)&uStack_74 + 0) = 0x29;
  ((SCStr *)((SCStr *)auStack_70))->int_release();
  auStack_70[0] = (undefined4)(0);
  uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x2a)));
  ((SCStr *)((SCStr *)apuStack_68))->int_release();
  apuStack_68[0] = (undefined1 *)((undefined1 *)0x0);

  if ((int *)(piStack_58) != (int *)0x0) {
    (**(code **)(*piStack_58 + 8))();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 100032c4; body size 5 bytes.
#line 1 "ENTRY_100032c4"

int __fastcall FUN_100032c4(int *param_1)

{
 try {
  uint uVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_101b9190(param_1);

  iVar2 = (int)(SCThreadSafeDec(param_1 + 1));
  if (iVar2 == 0) {
    thunk_FUN_101b9240(uVar1);
    if ((int *)(param_1) != (int *)0x0) {
      (**(code **)(*param_1 + 0x10))(1);
    }
  }
  thunk_FUN_101b91d0();

  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 100032c9; body size 5 bytes.
#line 1 "ENTRY_100032c9"

void FUN_100032c9(void)

{
  thunk_FUN_10400590(0,1);
  thunk_FUN_10400590(1,1);
  return;
}


// Reference entry 100032e2; body size 5 bytes.
#line 1 "ENTRY_100032e2"

void FUN_100032e2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  thunk_FUN_11245d70(param_1,param_2,param_3,param_4,param_5,param_6,0x3d);
  return;
}


// Reference entry 100032e7; body size 5 bytes.
#line 1 "ENTRY_100032e7"
void FUN_100032e7(void){
                    
  (*(code *)(uint)(DAT_121a06c8))("Actions");
  return;
}


// Reference entry 100032fb; body size 5 bytes.
#line 1 "ENTRY_100032fb"

void FUN_100032fb(void)

{
  return;
}


// Reference entry 1000330a; body size 5 bytes.
#line 1 "ENTRY_1000330a"

void FUN_1000330a(void)

{
  thunk_FUN_10b5ef00();
  return;
}


// Reference entry 1000330f; body size 5 bytes.
#line 1 "ENTRY_1000330f"

undefined4 * __thiscall Recovered_Bulk::FUN_1000330f(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003323; body size 5 bytes.
#line 1 "ENTRY_10003323"

undefined4 * __thiscall Recovered_Bulk::FUN_10003323(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003328; body size 5 bytes.
#line 1 "ENTRY_10003328"

void FUN_10003328(void)

{
  thunk_FUN_1074d1b0();
  return;
}


// Reference entry 1000332d; body size 5 bytes.
#line 1 "ENTRY_1000332d"

undefined4 * __thiscall Recovered_Bulk::FUN_1000332d(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003332; body size 5 bytes.
#line 1 "ENTRY_10003332"

SCStr * FUN_10003332(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2a3,&DAT_11882ff0));
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10003341; body size 5 bytes.
#line 1 "ENTRY_10003341"

void FUN_10003341(SCStr *param_1,int param_2,int param_3,undefined4 param_4)

{
 try {
  SCStr *this_;
  void **ppvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SCStr *pSVar7;
  int iStack_20;
  SCStr *pSStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);
  uVar3 = (uint)(param_2 - (int)param_1);
  ppvVar1 = (void **)(&pvStack_10);

  iVar5 = (int)(param_2);
  while( true ) {

    if ((int)(uVar3 & 0xfffffff8) < 0x101) {
      thunk_FUN_105cb030(param_1,iVar5,param_4);

      return;
    }
    if (param_3 < 1) break;
    thunk_FUN_105cb6f0(&iStack_20,param_1,iVar5,param_4,uVar2);
    param_3 = (int)((param_3 >> 1) + (param_3 >> 2));
    if ((int)(iStack_20 - (int)param_1 & 0xfffffff8U) < (int)(iVar5 - (int)pSStack_1c & 0xfffffff8U)
       ) {
      thunk_FUN_105ccc10(param_1,iStack_20,param_3,param_4);
      param_1 = (SCStr *)(pSStack_1c);
    }
    else {
      thunk_FUN_105ccc10(pSStack_1c,iVar5,param_3,param_4);
      param_2 = (int)(iStack_20);
      iVar5 = (int)(iStack_20);
    }
    uVar3 = (uint)(iVar5 - (int)param_1);

  }
  iVar4 = (int)(iVar5 - (int)param_1 >> 3);
  iVar6 = (int)(iVar5 - (int)param_1 >> 4);
  iStack_14 = (int)(iVar4);
  if (0 < iVar6) {
    pSVar7 = (SCStr *)(param_1 + iVar6 * 8);
    do {
      iVar6 = (int)(iVar6 + -1);
      ((SCStr *)((SCStr *)&iStack_20))->op_ctor(pSVar7 + -8);

      ((SCStr *)((SCStr *)&pSStack_1c))->op_ctor(pSVar7 + -4);

      thunk_FUN_105cc420(param_1,iVar6,iVar4,&iStack_20,param_4);

      ((SCStr *)((SCStr *)&pSStack_1c))->int_release();
      pSStack_1c = (SCStr *)((SCStr *)0x0);

      ((SCStr *)((SCStr *)&iStack_20))->int_release();
      iStack_20 = (int)(0);

      pSVar7 = (SCStr *)(pSVar7 + -8);
      iVar5 = (int)(param_2);
    } while (0 < iVar6);
  }
  if (iStack_14 < 2) {

    return;
  }
  pSVar7 = (SCStr *)((SCStr *)(iVar5 + -4));
  do {
    this_ = (SCStr *)(pSVar7 + -4);
    ((SCStr *)((SCStr *)&uStack_18))->op_ctor(this_);

    ((SCStr *)((SCStr *)&iStack_14))->op_ctor(pSVar7);

    if ((SCStr *)((param_1)) != (SCStr *)(pSVar7) + -4) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_1));
      ((SCStr *)(this_))->int_addref();
    }
    if (param_1 + 4 != pSVar7) {
      ((SCStr *)(pSVar7))->int_release();
      *(undefined4*)pSVar7 = (undefined4)((SCStr *)(*(undefined4 *)(param_1 + 4)));
      ((SCStr *)(pSVar7))->int_addref();
    }
    thunk_FUN_105cc420(param_1,0,(int)(pSVar7 + (-4 - (int)param_1)) >> 3,&uStack_18,param_4);

    ((SCStr *)((SCStr *)&iStack_14))->int_release();
    iStack_14 = (int)(0);

    ((SCStr *)((SCStr *)&uStack_18))->int_release();
    pSVar7 = (SCStr *)(pSVar7 + -8);


  } while (0xf < (int)((uint)(pSVar7 + (4 - (int)param_1)) & 0xfffffff8));

  return;

 } catch (...) { }
}


// Reference entry 10003355; body size 5 bytes.
#line 1 "ENTRY_10003355"

void __fastcall FUN_10003355(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10263a50(*param_1,param_1[1],param_1);
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


// Reference entry 1000335a; body size 5 bytes.
#line 1 "ENTRY_1000335a"

int * __thiscall Recovered_Bulk::FUN_1000335a(int *param_2)
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


// Reference entry 1000335f; body size 5 bytes.
#line 1 "ENTRY_1000335f"

void __fastcall FUN_1000335f(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10003364; body size 5 bytes.
#line 1 "ENTRY_10003364"
void FUN_10003364(int *param_1){
                    
  (**(code **)(*param_1 + 0x24))();
  return;
}


// Reference entry 10003369; body size 5 bytes.
#line 1 "ENTRY_10003369"

undefined4 * __thiscall Recovered_Bulk::FUN_10003369(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  thunk_FUN_111d1d90(param_2,"getExtendedMetadataText",param_3,20000,10000,1,param_1 + 0x421d);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextOp);

  param_1[0x4642] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x4644) = (undefined1)(0);
  param_1[0x46e7] = (undefined4)(0);
  thunk_FUN_111e7a30(param_4);
  puVar4 = (undefined4 *)(param_1 + 0x46f1);
  thunk_FUN_111d0010(param_2);
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  *puVar4 = (undefined4)((uint)&ghidra_vftable_RSonosGetExtendedMetadataTextParam);
  param_1[0x4c15] = (undefined4)(param_6);
  thunk_FUN_11234190(uVar1);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  thunk_FUN_1106a8d0(param_1 + 0x46e8,param_5,0x21);
  *(undefined4*)(param_1[0x2a7] + 4) = (undefined4)(1);
  piVar2 = (int *)((int *)thunk_FUN_1124ffa0(&DAT_1187b440,0));
  if ((param_1[0x4643] == 0) || (iVar3 = 0x191, param_1[0x4643] == 1)) {
    iVar3 = (int)(9);
  }
  (**(code **)(*piVar2 + 0xc))((int)param_1 + iVar3 + 0x11908);
  piVar2 = (int *)((int *)thunk_FUN_1124ffa0(&DAT_1187b694,0));
  (**(code **)(*piVar2 + 0xc))(param_1 + 0x46e8);
  thunk_FUN_1124ff50("http://www.sonos.com/Services/1.1|getExtendedMetadataTextResult");
  thunk_FUN_112504f0(puVar4);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10003387; body size 5 bytes.
#line 1 "ENTRY_10003387"

void __fastcall FUN_10003387(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_10e5a5e0(*param_1,param_1[1],param_1);
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


// Reference entry 10003391; body size 5 bytes.
#line 1 "ENTRY_10003391"

undefined4 FUN_10003391(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return (undefined4)(1);
}


// Reference entry 10003396; body size 5 bytes.
#line 1 "ENTRY_10003396"

void FUN_10003396(void)

{
  thunk_FUN_10d19550();
  return;
}


// Reference entry 100033a5; body size 5 bytes.
#line 1 "ENTRY_100033a5"

undefined4 * __thiscall Recovered_Bulk::FUN_100033a5(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100033be; body size 5 bytes.
#line 1 "ENTRY_100033be"

undefined4 * __thiscall Recovered_Bulk::FUN_100033be(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  thunk_FUN_101eb2b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x98);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100033c3; body size 5 bytes.
#line 1 "ENTRY_100033c3"

void FUN_100033c3(void)

{
  thunk_FUN_10368690();
  return;
}


// Reference entry 100033d2; body size 5 bytes.
#line 1 "ENTRY_100033d2"

undefined4 * __thiscall Recovered_Bulk::FUN_100033d2(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100033e6; body size 5 bytes.
#line 1 "ENTRY_100033e6"

undefined4 * __thiscall Recovered_Bulk::FUN_100033e6(undefined4 *param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x31) == '\0') {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  thunk_FUN_10697db0(param_2,*(undefined4 *)(param_1 + 0x34),0);
  return (undefined4 *)(param_2);
}


// Reference entry 100033f5; body size 5 bytes.
#line 1 "ENTRY_100033f5"

void __thiscall Recovered_Bulk::FUN_100033f5(int param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if (*(char *)(param_1 + 0xc2) != '\0') {
    cVar1 = (char)(thunk_FUN_112a7f50(param_1 + 0xb0,DAT_12126b84 ^ (uint)&stack0xfffffffc));

    thunk_FUN_101dbeb0();

    if (cVar1 != '\0') {
      thunk_FUN_112a8010(param_1 + 0xb0);
    }
  }
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }

  return;

 } catch (...) { }
}


// Reference entry 100033fa; body size 5 bytes.
#line 1 "ENTRY_100033fa"
void FUN_100033fa(int *param_1){
                    
  (**(code **)(*param_1 + 0x14))();
  return;
}


// Reference entry 10003404; body size 5 bytes.
#line 1 "ENTRY_10003404"

void __thiscall Recovered_Bulk::FUN_10003404(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined1 auStack_20 [28];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_20);
  if (*(code **)(param_1 + 0xc) != (code *)((0x0))) {
    (**(code **)(param_1 + 0xc))(param_2);
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_10118fc0("SCILifecycleAppProviderSwigBase::isAppWithSWGenInstalled");
                    
  _CxxThrowException(auStack_20,(ThrowInfo *)&DAT_11d33164);
}


// Reference entry 1000340e; body size 5 bytes.
#line 1 "ENTRY_1000340e"

void FUN_1000340e(void)

{
  thunk_FUN_10fdae50();
  return;
}


// Reference entry 10003418; body size 5 bytes.
#line 1 "ENTRY_10003418"

undefined4 * __thiscall Recovered_Bulk::FUN_10003418(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardEventSink);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCDisplayWizardEventSink);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003427; body size 5 bytes.
#line 1 "ENTRY_10003427"

undefined4 * __thiscall Recovered_Bulk::FUN_10003427(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003431; body size 5 bytes.
#line 1 "ENTRY_10003431"

undefined4 * __thiscall Recovered_Bulk::FUN_10003431(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a4b94 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003436; body size 5 bytes.
#line 1 "ENTRY_10003436"

void __fastcall FUN_10003436(int *param_1)

{
  thunk_FUN_10af42f0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 1000343b; body size 5 bytes.
#line 1 "ENTRY_1000343b"

void FUN_1000343b(void)

{
  thunk_FUN_10a0e080();
  return;
}


// Reference entry 10003440; body size 5 bytes.
#line 1 "ENTRY_10003440"

undefined4 FUN_10003440(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined **appuStack_1d0 [8];
  undefined **appuStack_1b0 [8];
  undefined **appuStack_190 [8];
  undefined **appuStack_170 [8];
  undefined **appuStack_150 [8];
  undefined **appuStack_130 [8];
  undefined **appuStack_110 [8];
  undefined1 auStack_f0 [12];
  undefined4 uStack_e4;
  int *piStack_e0;
  undefined4 auStack_dc [2];
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined4 auStack_cc [2];
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 auStack_bc [2];
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 auStack_ac [2];
  undefined4 uStack_a4;
  int *piStack_a0;
  undefined4 auStack_9c [2];
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 auStack_8c [2];
  undefined4 uStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  void *pvStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  undefined1 auStack_58 [4];
  int *piStack_54;
  undefined4 auStack_50 [2];
  undefined4 auStack_48 [2];
  undefined4 auStack_40 [2];
  undefined4 auStack_38 [2];
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined1 *apuStack_10 [3];


  thunk_FUN_10eb41c0(DAT_12126b84 ^ (uint)&piStack_6c);
  piVar4 = (int *)((int *)thunk_FUN_10cf34e0(&piStack_54));
  piVar8 = (int *)((int *)*piVar4);

  *piVar4 = (int)(0);
  piStack_6c = (int *)(piVar8);
  if ((int *)(piVar8) == (int *)0x0) {
    piStack_68 = (int *)((int *)0x0);
  }
  else {
    piStack_68 = (int *)((int *)(**(code **)(*piVar8 + 0xc))());
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 3;
  if ((int *)(piStack_54) != (int *)0x0) {
    (**(code **)(*piStack_54 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 2;
  thunk_FUN_10c5f1d0(piVar8);
  thunk_FUN_10c61010(apuStack_10,auStack_f0,6,0,0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 4;
  thunk_FUN_10c5f1d0(piVar8);
  puVar9 = (undefined1 *)(auStack_58);
  thunk_FUN_105bebd0(puVar9);
  thunk_FUN_10e0f250(puVar9);
  thunk_FUN_10eb41c0();
  iVar5 = (int)(thunk_FUN_10eac8c0());
  iVar6 = thunk_FUN_10ec1a10("continue");
  *(unsigned char *)((char *)&uStack_70 + 0) = 5;
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 6;
  uVar7 = (undefined4)(thunk_FUN_10e10270(&uStack_64,5));
  *(unsigned char *)((char *)&uStack_70 + 0) = 7;
  thunk_FUN_10ec2970("video");
  uVar12 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 8;
  thunk_FUN_10ece3b0(uVar7);
  iVar6 = (int)(thunk_FUN_10eca030(uVar12));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 9;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&uStack_70 + 0) = 10;
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(apuStack_10[0]) != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)(apuStack_10[0]);
  }
  thunk_FUN_10c62d50(auStack_50,apuStack_10,0x27a7,&DAT_1188465c,puVar9);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xb;
  thunk_FUN_10ec1b40("title");
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xc;
  thunk_FUN_10eced20(auStack_50);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xd;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xe;
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(apuStack_10[0]) != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)(apuStack_10[0]);
  }
  thunk_FUN_10c62d50(auStack_48,apuStack_10,0x27a6,&DAT_1188465c,puVar9);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0xf;
  thunk_FUN_10ec1b40("title");
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x10;
  thunk_FUN_10eced20(auStack_48);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x11;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x12;
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(apuStack_10[0]) != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)(apuStack_10[0]);
  }
  thunk_FUN_10c62d50(auStack_40,apuStack_10,0x27a5,&DAT_1188465c,puVar9);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x13;
  thunk_FUN_10ec1b40("title");
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x14;
  thunk_FUN_10eced20(auStack_40);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x15;
  thunk_FUN_10c5f8a0(&DAT_1186d2ee);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x16;
  puVar9 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(apuStack_10[0]) != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)(apuStack_10[0]);
  }
  thunk_FUN_10c62d50(auStack_38,apuStack_10,0x27a4,&DAT_1188465c,puVar9);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x17;
  thunk_FUN_10ec1b40("title");
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x18;
  thunk_FUN_10eced20(auStack_38);
  iVar6 = (int)(thunk_FUN_10ecd540(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x19;
  thunk_FUN_10ec1d40();
  uVar7 = (undefined4)(1);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x1a;
  thunk_FUN_1061c630(1);
  iVar6 = (int)(thunk_FUN_10ec6870(uVar7));
  thunk_FUN_105f6290(iVar6 + 4);
  ppuStack_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_28 = (int *)((int *)0x0);
  piStack_24 = (int *)((int *)0x0);
  iStack_20 = (int)(0);
  puStack_1c = (undefined4 *)((undefined4 *)0x0);
  puStack_18 = (undefined4 *)((undefined4 *)0x0);
  iStack_14 = (int)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x1c;
  piVar8 = (int *)((int *)thunk_FUN_106050a0(appuStack_110));
  thunk_FUN_10eb41c0();
  iVar6 = (int)(*piVar8);
  uVar3 = (undefined1)(thunk_FUN_10eacd60(appuStack_130));
  piVar8 = (int *)((int *)(**(code **)(iVar6 + 0xc))(uVar3));
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0x10))(iVar5 == 2,appuStack_150));
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0x10))(iVar5 == 1,appuStack_170));
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 0x14))(appuStack_190));
  piVar8 = (int *)((int *)(**(code **)(*piVar8 + 8))(appuStack_1b0));
  uVar7 = (undefined4)((**(code **)(*piVar8 + 8))(appuStack_1d0));
  thunk_FUN_105f60e0(uVar7);
  puVar2 = (undefined4 *)(puStack_18);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x1b;
  puVar11 = (undefined4 *)(puStack_1c);
  if ((undefined4 *)(puStack_1c) != (undefined4 *)0x0) {
    for (;(undefined4 *)((puVar11)) != (undefined4 *)(puVar2); puVar11 = puVar11 + 8) {
      (**(code **)*puVar11)(0);
    }
    uVar10 = (uint)(iStack_14 - (int)puStack_1c & 0xffffffe0);
    puVar11 = (undefined4 *)(puStack_1c);
    if (0xfff < uVar10) {
      puVar11 = (undefined4 *)((undefined4 *)puStack_1c[-1]);
      uVar10 = (uint)(uVar10 + 0x23);
      if (0x1f < (uint)((int)puStack_1c + (-4 - (int)puVar11))) goto LAB_10932ec5;
    }
    thunk_FUN_1148a50e(puVar11,uVar10);
    puStack_1c = (undefined4 *)((undefined4 *)0x0);
    puStack_18 = (undefined4 *)((undefined4 *)0x0);
    iStack_14 = (int)(0);
  }
  piVar8 = (int *)(piStack_24);
  if ((int *)(piStack_28) != (int *)0x0) {
    if ((int *)(piStack_28) != (int *)(piStack_24)) {
      piVar4 = (int *)(piStack_28 + 1);
      do {
        *(unsigned char *)((char *)&uStack_70 + 0) = 0x1d;
        ((SCStr *)((SCStr *)(piVar4 + 1)))->int_release();
        piVar4[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar4);
        *(unsigned char *)((char *)&uStack_70 + 0) = 0x1e;
        if ((int *)(piVar1) != (int *)0x0) {
          piVar4[-1] = (int)(0);
          *piVar4 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&uStack_70 + 0) = 0x1b;
        piVar1 = (int *)(piVar4 + 2);
        piVar4 = (int *)(piVar4 + 3);
      } while ((int *)(piVar1) != (int *)(piVar8));
    }
    uVar10 = (uint)(((iStack_20 - (int)piStack_28) / 0xc) * 0xc);
    piVar8 = (int *)(piStack_28);
    if (0xfff < uVar10) {
      piVar8 = (int *)((int *)piStack_28[-1]);
      uVar10 = (uint)(uVar10 + 0x23);
      if (0x1f < (uint)((int)piStack_28 + (-4 - (int)piVar8))) {
LAB_10932ec5:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar8,uVar10);
    piStack_28 = (int *)((int *)0x0);
    piStack_24 = (int *)((int *)0x0);
    iStack_20 = (int)(0);
  }
  ppuStack_30 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_110[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x1f;
  ((SCStr *)((SCStr *)&uStack_7c))->int_release();
  piVar8 = (int *)(piStack_80);

  *(unsigned char *)((char *)&uStack_70 + 0) = 0x20;
  if ((int *)(piStack_80) != (int *)0x0) {

    piStack_80 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_130[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x21;
  ((SCStr *)((SCStr *)auStack_8c))->int_release();
  piVar8 = (int *)(piStack_90);
  auStack_8c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x22;
  if ((int *)(piStack_90) != (int *)0x0) {

    piStack_90 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x23;
  ((SCStr *)((SCStr *)auStack_38))->int_release();
  auStack_38[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_150[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x24;
  ((SCStr *)((SCStr *)auStack_9c))->int_release();
  piVar8 = (int *)(piStack_a0);
  auStack_9c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x25;
  if ((int *)(piStack_a0) != (int *)0x0) {

    piStack_a0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x26;
  ((SCStr *)((SCStr *)auStack_40))->int_release();
  auStack_40[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_170[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x27;
  ((SCStr *)((SCStr *)auStack_ac))->int_release();
  piVar8 = (int *)(piStack_b0);
  auStack_ac[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x28;
  if ((int *)(piStack_b0) != (int *)0x0) {

    piStack_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x29;
  ((SCStr *)((SCStr *)auStack_48))->int_release();
  auStack_48[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_190[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2a;
  ((SCStr *)((SCStr *)auStack_bc))->int_release();
  piVar8 = (int *)(piStack_c0);
  auStack_bc[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2b;
  if ((int *)(piStack_c0) != (int *)0x0) {

    piStack_c0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2c;
  ((SCStr *)((SCStr *)auStack_50))->int_release();
  auStack_50[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_1b0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2d;
  ((SCStr *)((SCStr *)auStack_cc))->int_release();
  piVar8 = (int *)(piStack_d0);
  auStack_cc[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2e;
  if ((int *)(piStack_d0) != (int *)0x0) {

    piStack_d0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  piVar8 = (int *)(piStack_60);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x2f;
  if ((int *)(piStack_60) != (int *)0x0) {

    piStack_60 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_1d0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x30;
  ((SCStr *)((SCStr *)auStack_dc))->int_release();
  piVar8 = (int *)(piStack_e0);
  auStack_dc[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_70 + 0) = 0x31;
  if ((int *)(piStack_e0) != (int *)0x0) {

    piStack_e0 = (int *)((int *)0x0);
    (**(code **)(*piVar8 + 8))();
  }
  uStack_70 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_70 + 1)) << 8 | (uint)(0x32)));
  ((SCStr *)((SCStr *)apuStack_10))->int_release();
  apuStack_10[0] = (undefined1 *)((undefined1 *)0x0);

  if ((int *)(piStack_68) != (int *)0x0) {
    (**(code **)(*piStack_68 + 8))();
  }

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1000344f; body size 5 bytes.
#line 1 "ENTRY_1000344f"

undefined4 __fastcall FUN_1000344f(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x12d1c));
}


// Reference entry 10003463; body size 5 bytes.
#line 1 "ENTRY_10003463"
undefined4 FUN_10003463(void){
                    
  return (undefined4)(0x13);
}


// Reference entry 10003468; body size 5 bytes.
#line 1 "ENTRY_10003468"
undefined4 FUN_10003468(int *param_1){
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  puStack_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x14))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if ((SCStr *)(pSVar1) != (SCStr *)&puStack_14) {
    ((SCStr *)((SCStr *)&puStack_14))->int_release();
    puStack_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&puStack_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(puStack_14) != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(puStack_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&puStack_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&puStack_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 1000346d; body size 5 bytes.
#line 1 "ENTRY_1000346d"

undefined4 FUN_1000346d(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (1 < param_4) {
    bVar2 = (byte)(*(byte *)*param_3);
    pbVar1 = (byte *)((byte *)*param_3 + 1);
    *param_3 = (int)((int)pbVar1);
    if ((bVar2 != 0) && (uVar4 = (uint)bVar2, uVar4 <= param_4 - 1)) {
      *param_3 = (int)((int)(pbVar1 + uVar4));
      uVar3 = (undefined4)(thunk_FUN_1143f120(param_1,param_2,pbVar1,uVar4));
      return (undefined4)(uVar3);
    }
  }
  return (undefined4)(0xffffb080);
}


// Reference entry 10003472; body size 5 bytes.
#line 1 "ENTRY_10003472"

undefined4 * __thiscall Recovered_Bulk::FUN_10003472(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RStereoZPCandidateEnumerator);
  iVar1 = (int)(param_1[0xc]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar3 = (int)(thunk_FUN_1123fcd0((void *)(iVar1 + -0x10),uVar2));
    if (iVar3 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((void *)(iVar1 + -0x10));
    }
  }
  thunk_FUN_111320a0();

  *param_1 = (undefined4)((uint)&ghidra_vftable_RCustomZPEnumerator);
  thunk_FUN_1106b1c0(param_1);
  thunk_FUN_11079440();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10003481; body size 5 bytes.
#line 1 "ENTRY_10003481"

void __thiscall Recovered_Bulk::FUN_10003481(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [16];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)auStack_1c);
  uVar4 = (undefined4)(0);
  uVar1 = (undefined4)(thunk_FUN_11286940(0));
  thunk_FUN_11244ca0(uVar1,uVar4);
  thunk_FUN_1145c930(auStack_1c,0);
  piVar2 = (int *)(_errno());
  uVar1 = (undefined4)(thunk_FUN_1145ae30(auStack_1c,param_1 + 0x27a4,param_2,param_3,*piVar2));
  pcVar3 = (char *)("secure ");
  if (*(char *)(param_1 + 0x235d) == '\0') {
    pcVar3 = (char *)("");
  }
  thunk_FUN_112b0270(&DAT_118c9974,5,
                     "Failure in %sasync socket operation to host %s, udn %s after %ld ms; failed in state %d with error %d (errno: %d)"
                     ,pcVar3,auStack_14,param_1 + 0x2344,uVar1);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1000348b; body size 5 bytes.
#line 1 "ENTRY_1000348b"

void __fastcall FUN_1000348b(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 10003490; body size 5 bytes.
#line 1 "ENTRY_10003490"

void __fastcall FUN_10003490(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_11063760(*(int *)(param_1 + 8));
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  *(undefined4*)(param_1 + 0x10) = (undefined4)(2);
  return;
}


// Reference entry 10003495; body size 5 bytes.
#line 1 "ENTRY_10003495"

void FUN_10003495(void)

{
  thunk_FUN_10fb19e0();
  return;
}


// Reference entry 1000349a; body size 5 bytes.
#line 1 "ENTRY_1000349a"

void __fastcall FUN_1000349a(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x6284) != 0) && (*(int **)(param_1 + 0x6280) != (int *)((0x0)))) {
    (**(code **)(**(int **)(param_1 + 0x6280) + 0x10))();
    puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x6280));
    if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1));
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4*)(param_1 + 0x6280) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x6284) = (undefined4)(0);
  }
  return;
}


// Reference entry 1000349f; body size 5 bytes.
#line 1 "ENTRY_1000349f"

undefined4 __fastcall FUN_1000349f(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x14))());
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 100034a4; body size 5 bytes.
#line 1 "ENTRY_100034a4"

undefined4 __fastcall FUN_100034a4(int param_1)

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


// Reference entry 100034b3; body size 5 bytes.
#line 1 "ENTRY_100034b3"

undefined4 * FUN_100034b3(undefined4 *param_1)

{
 try {
  int *piVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *apuStack_40 [3];
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 auStack_24 [2];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);

  uVar7 = (uint)(0);

  do {
    pcVar4 = (char *)((char *)thunk_FUN_114561e0(uVar7,uVar3));
    ((SCStr *)((SCStr *)&uStack_18))->int_allocRep(pcVar4);

    bVar2 = (bool)(((SCStr *)((SCStr *)&uStack_18))->op_eq(""));
    if (!bVar2) {
      thunk_FUN_10c5f430(uVar7,0);
      thunk_FUN_10c61010(apuStack_40,auStack_34,6,0,0);
      *(unsigned char *)((char *)&uStack_8 + 0) = 2;
      ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("");
      *(unsigned char *)((char *)&uStack_8 + 0) = 3;
      thunk_FUN_10c5f8a0(&DAT_1186d2ee);
      *(unsigned char *)((char *)&uStack_8 + 0) = 4;
      puVar6 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)(apuStack_40[0]) != (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(apuStack_40[0]);
      }
      thunk_FUN_10c62d50(auStack_24,apuStack_40,0x2803,&DAT_1188465c,puVar6);
      *(unsigned char *)((char *)&uStack_8 + 0) = 5;
      thunk_FUN_10ec2270(&uStack_14);
      *(unsigned char *)((char *)&uStack_8 + 0) = 6;
      uVar5 = (undefined4)(thunk_FUN_10ecef50(auStack_24));
      thunk_FUN_10ec3610(uVar5);
      piVar1 = (int *)(piStack_28);
      *(unsigned char *)((char *)&uStack_8 + 0) = 7;
      if ((int *)(piStack_28) != (int *)0x0) {

        piStack_28 = (int *)((int *)0x0);
        (**(code **)(*piVar1 + 8))();
      }
      *(unsigned char *)((char *)&uStack_8 + 0) = 8;
      ((SCStr *)((SCStr *)auStack_24))->int_release();
      auStack_24[0] = (undefined4)(0);
      *(unsigned char *)((char *)&uStack_8 + 0) = 9;
      ((SCStr *)((SCStr *)&uStack_14))->int_release();

      uStack_8 = (uint)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(10)));
      ((SCStr *)((SCStr *)apuStack_40))->int_release();
      apuStack_40[0] = (undefined1 *)((undefined1 *)0x0);
    }

    ((SCStr *)((SCStr *)&uStack_18))->int_release();
    uVar7 = (uint)(uVar7 + 1);

    uStack_8 = (uint)(uStack_8 & 0xffffff00);
  } while (uVar7 < 0x3f);

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 100034d1; body size 5 bytes.
#line 1 "ENTRY_100034d1"

undefined1 FUN_100034d1(void)

{
  return (undefined1)(0);
}


// Reference entry 100034e0; body size 5 bytes.
#line 1 "ENTRY_100034e0"

SCStr * FUN_100034e0(SCStr *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  iVar2 = (int)(thunk_FUN_101f08d0());
  if (iVar2 != 0x40) {
    iVar2 = (int)(thunk_FUN_101f08d0());
    if (iVar2 != 0x200) {
      piVar3 = (int *)((int *)thunk_FUN_110828b0());
      if ((int *)(piVar3) != (int *)0x0) {
        cVar1 = (char)((**(code **)(*piVar3 + 0x3c))());
        if (cVar1 != '\0') {
          pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x25cb,&DAT_11882ff0));
          ((SCStr *)(param_1))->int_allocRep(pcVar4);
          return (SCStr *)(param_1);
        }
      }
      pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x25cc,&DAT_11882ff0));
      ((SCStr *)(param_1))->int_allocRep(pcVar4);
      return (SCStr *)(param_1);
    }
  }
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 100034e5; body size 5 bytes.
#line 1 "ENTRY_100034e5"

void FUN_100034e5(void)

{
  return;
}


// Reference entry 100034f4; body size 5 bytes.
#line 1 "ENTRY_100034f4"
undefined4 FUN_100034f4(int *param_1){
 try {
  SCStr *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  puStack_14 = (undefined1 *)((undefined1 *)0x0);
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(*param_1 + 0x1c))(&param_1,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if ((SCStr *)(pSVar1) != (SCStr *)&puStack_14) {
    ((SCStr *)((SCStr *)&puStack_14))->int_release();
    puStack_14 = (undefined1 *)(*(undefined1 **)pSVar1);
    ((SCStr *)((SCStr *)&puStack_14))->int_addref();
  }

  ((SCStr *)((SCStr *)&param_1))->int_release();
  param_1 = (int *)((int *)0x0);

  puVar4 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(puStack_14) != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)(puStack_14);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&puStack_14))->length());
  uVar3 = (undefined4)((*(code *)(uint)(DAT_121a06d8))(puVar4,uVar2));

  ((SCStr *)((SCStr *)&puStack_14))->int_release();

  return (undefined4)(uVar3);

 } catch (...) { }
}


// Reference entry 100034fe; body size 5 bytes.
#line 1 "ENTRY_100034fe"

int * __thiscall Recovered_Bulk::FUN_100034fe(void *param_2,uint param_3)
{
  int *param_1 = (int *)this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *_Dst;
  void *_Dst_00;
  int iVar4;
  uint uVar5;
  
  uVar2 = (uint)(param_1[5]);
  if (param_3 <= uVar2) {
    _Dst = (int *)(param_1);
    if (7 < uVar2) {
      _Dst = (int *)((int *)*param_1);
    }
    param_1[4] = (int)(param_3);
    memmove(_Dst,param_2,param_3 * 2);
    *(undefined2*)(param_3 * 2 + (int)_Dst) = (undefined2)(0);
    return (int *)(param_1);
  }
  if (0x7ffffffe < param_3) {
                    
    thunk_FUN_1012a4c0();
  }
  uVar5 = (uint)(param_3 | 7);
  if (uVar5 < 0x7fffffff) {
    if (0x7ffffffe - (uVar2 >> 1) < uVar2) {
      uVar5 = (uint)(0x7ffffffe);
    }
    else {
      uVar1 = (uint)((uVar2 >> 1) + uVar2);
      if (uVar5 < uVar1) {
        uVar5 = (uint)(uVar1);
      }
    }
  }
  else {
    uVar5 = (uint)(0x7ffffffe);
  }
  _Dst_00 = (void *)((void *)thunk_FUN_112eef40(uVar5 + 1));
  param_1[5] = (int)(uVar5);
  param_1[4] = (int)(param_3);
  memcpy(_Dst_00,param_2,param_3 * 2);
  *(undefined2*)(param_3 * 2 + (int)_Dst_00) = (undefined2)(0);
  if (7 < uVar2) {
    iVar3 = (int)(*param_1);
    uVar5 = (uint)(uVar2 * 2 + 2);
    iVar4 = (int)(iVar3);
    if (0xfff < uVar5) {
      iVar4 = (int)(*(int *)(iVar3 + -4));
      uVar5 = (uint)(uVar2 * 2 + 0x25);
      if (0x1f < (iVar3 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar5);
  }
  *param_1 = (int)((int)_Dst_00);
  return (int *)(param_1);
}


// Reference entry 1000350d; body size 5 bytes.
#line 1 "ENTRY_1000350d"

undefined4 FUN_1000350d(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)(strncmp(param_1,"HTTP/1.1 ",9));
  if (iVar1 != 0) {
    iVar1 = (int)(strncmp(param_1,"HTTP/1.0 ",9));
    if (iVar1 != 0) {
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 10003512; body size 5 bytes.
#line 1 "ENTRY_10003512"

void __fastcall FUN_10003512(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpImpl);
  thunk_FUN_112407b0();
  return;
}


// Reference entry 10003521; body size 5 bytes.
#line 1 "ENTRY_10003521"

undefined1 __fastcall FUN_10003521(int param_1)

{
 try {
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
  bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a7754));
  if (bVar1) {
    *(undefined1*)(param_1 + 0xc) = (undefined1)(1);
    FUN_1006aac8(uVar2);
    uVar3 = (undefined1)(1);
  }
  else {
    bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a7704));
    if (bVar1) {
      FUN_1006aac8(uVar2);
      uVar3 = (undefined1)(1);
    }
    else {
      uVar3 = (undefined1)(0);
    }
  }

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 1000352b; body size 5 bytes.
#line 1 "ENTRY_1000352b"

undefined1 FUN_1000352b(void)

{
  return (undefined1)(0);
}


// Reference entry 1000353f; body size 5 bytes.
#line 1 "ENTRY_1000353f"

undefined4 FUN_1000353f(undefined4 param_1)

{
 try {
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined **appuStack_118 [8];
  undefined **appuStack_f8 [8];
  undefined1 auStack_d8 [36];
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  undefined1 auStack_a4 [36];
  undefined4 uStack_80;
  int *piStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  void *pvStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [12];
  undefined4 uStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined **ppuStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  SCStr aSStack_c [4];
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84 ^ (uint)auStack_64);

  ((SCStr *)(aSStack_c))->int_allocRep("backward");

  iVar4 = (int)(thunk_FUN_10eb1b50(uVar3));
  *(unsigned char *)((char *)&uStack_68 + 0) = 1;
  thunk_FUN_10df6f00(aSStack_c);
  *(unsigned char *)((char *)&uStack_68 + 0) = 2;
  uVar5 = (undefined4)(thunk_FUN_10def290(auStack_d8,iVar4 + 4));
  *(unsigned char *)((char *)&uStack_68 + 0) = 3;
  thunk_FUN_105f5d20(uVar5);
  *(unsigned char *)((char *)&uStack_68 + 0) = 4;
  ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("forward");
  *(unsigned char *)((char *)&uStack_68 + 0) = 5;
  iVar4 = (int)(thunk_FUN_10eb1dc0());
  *(unsigned char *)((char *)&uStack_68 + 0) = 6;
  thunk_FUN_10df6f00(&uStack_8);
  *(unsigned char *)((char *)&uStack_68 + 0) = 7;
  uVar5 = (undefined4)(thunk_FUN_10def290(auStack_a4,iVar4 + 4));
  *(unsigned char *)((char *)&uStack_68 + 0) = 8;
  thunk_FUN_105f5d20(uVar5);
  ppuStack_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  iStack_24 = (int)(0);
  iStack_20 = (int)(0);
  iStack_1c = (int)(0);
  puStack_18 = (undefined4 *)((undefined4 *)0x0);
  puStack_14 = (undefined4 *)((undefined4 *)0x0);
  iStack_10 = (int)(0);
  *(unsigned char *)((char *)&uStack_68 + 0) = 10;
  piVar6 = (int *)((int *)thunk_FUN_10605060(appuStack_f8));
  uVar5 = (undefined4)((**(code **)(*piVar6 + 8))(appuStack_118));
  thunk_FUN_105f5df0(uVar5);
  puVar2 = (undefined4 *)(puStack_14);
  uStack_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_68 + 1)) << 8 | (uint)(9)));
  puVar7 = (undefined4 *)(puStack_18);
  if ((undefined4 *)(puStack_18) != (undefined4 *)0x0) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(iStack_10 - (int)puStack_18 & 0xffffffe0);
    puVar7 = (undefined4 *)(puStack_18);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)puStack_18[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)puStack_18 + (-4 - (int)puVar7))) goto LAB_10a1c14c;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    puStack_18 = (undefined4 *)((undefined4 *)0x0);
    puStack_14 = (undefined4 *)((undefined4 *)0x0);
    iStack_10 = (int)(0);
  }
  iVar1 = (int)(iStack_20);
  iVar4 = (int)(iStack_24);
  if (iStack_24 != 0) {
    for (; iVar4 != iVar1; iVar4 = iVar4 + 0x34) {
      thunk_FUN_105ff930();
    }
    uVar3 = (uint)(((iStack_1c - iStack_24) / 0x34) * 0x34);
    iVar4 = (int)(iStack_24);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iStack_24 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iStack_24 - iVar4) - 4U) {
LAB_10a1c14c:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
    iStack_24 = (int)(0);
    iStack_20 = (int)(0);
    iStack_1c = (int)(0);
  }
  ppuStack_2c = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(piStack_74);
  appuStack_f8[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xb;
  if ((int *)(piStack_74) != (int *)0x0) {

    piStack_74 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(piStack_7c);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xc;
  if ((int *)(piStack_7c) != (int *)0x0) {

    piStack_7c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(piStack_30);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xd;
  if ((int *)(piStack_30) != (int *)0x0) {

    piStack_30 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(piStack_38);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xe;
  if ((int *)(piStack_38) != (int *)0x0) {

    piStack_38 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&uStack_68 + 0) = 0xf;
  ((SCStr *)((SCStr *)&uStack_8))->int_release();

  thunk_FUN_10604700();
  thunk_FUN_106045d0();
  piVar6 = (int *)(piStack_a8);
  appuStack_118[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0x10;
  if ((int *)(piStack_a8) != (int *)0x0) {

    piStack_a8 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(piStack_b0);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0x11;
  if ((int *)(piStack_b0) != (int *)0x0) {

    piStack_b0 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  thunk_FUN_105a1d20();
  thunk_FUN_105a1c80();
  thunk_FUN_10def0d0();
  piVar6 = (int *)(piStack_4c);
  *(unsigned char *)((char *)&uStack_68 + 0) = 0x12;
  if ((int *)(piStack_4c) != (int *)0x0) {

    piStack_4c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  piVar6 = (int *)(piStack_54);
  uStack_68 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_68 + 1)) << 8 | (uint)(0x13)));
  if ((int *)(piStack_54) != (int *)0x0) {

    piStack_54 = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }

  ((SCStr *)(aSStack_c))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10003549; body size 5 bytes.
#line 1 "ENTRY_10003549"

undefined1 FUN_10003549(void)

{
  return (undefined1)(0);
}


// Reference entry 10003558; body size 5 bytes.
#line 1 "ENTRY_10003558"

undefined1 FUN_10003558(void)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10da1740());
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10da1e80());
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
    cVar1 = (char)(thunk_FUN_10da1370());
    if (((cVar1 != '\0') && (cVar1 = thunk_FUN_10da1830(), cVar1 != '\0')) &&
       (cVar1 = thunk_FUN_10da15c0(), cVar1 == '\0')) {
      return (undefined1)(1);
    }
    cVar1 = (char)(thunk_FUN_10f0b5e0());
    if (cVar1 != '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 1000355d; body size 5 bytes.
#line 1 "ENTRY_1000355d"

void __thiscall Recovered_Bulk::FUN_1000355d(int *param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  puVar2 = (undefined4 *)(operator_new(4));

  if ((undefined4 *)(puVar2) == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    uVar3 = (undefined4)((**(code **)(*param_2 + 0x1c))(uVar1));
    *puVar2 = (undefined4)(uVar3);
  }

  thunk_FUN_1106b190(-(uint)(param_1 != 0) & param_1 + 8U,puVar2,0);

  return;

 } catch (...) { }
}


// Reference entry 1000356c; body size 5 bytes.
#line 1 "ENTRY_1000356c"

undefined1 __fastcall FUN_1000356c(int *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  
  if ((param_1[0x1a] != 0) &&
     (uVar1 = (param_1[0x1a] + param_1[0x19]) - 1,
     piVar5 = *(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                       (uVar1 & 3) * 4),(int *)( piVar5) != (int *)0x0)) {
    piVar5 = (int *)((int *)(**(code **)(*piVar5 + 0x60))());
    if ((int *)(piVar5) != (int *)0x0) {
      cVar4 = (char)((**(code **)(*piVar5 + 100))());
      if (cVar4 == '\0') {
        return (undefined1)(0);
      }
    }
  }
  iVar2 = (int)(param_1[0x1a]);
  if (iVar2 == 0) {
    piVar5 = (int *)((int *)0x0);
  }
  else {
    uVar1 = (uint)((iVar2 + param_1[0x19]) - 1);
    piVar5 = (int *)(*(int **)(*(int *)(param_1[0x17] + (uVar1 >> 2 & param_1[0x18] - 1U) * 4) +
                      (uVar1 & 3) * 4));
  }
  if (((param_1[0x29] < 0) || (iVar2 == 2)) || ((int *)((iVar2)) == (int *)(param_1[0x29]))) {
LAB_10dd58dd:
    bVar3 = (bool)(true);
  }
  else {
    if ((int *)(piVar5) != (int *)0x0) {
      cVar4 = (char)((**(code **)(*piVar5 + 0x28))());
      if (cVar4 != '\0') goto LAB_10dd58dd;
    }
    bVar3 = (bool)(false);
  }
  cVar4 = (char)((**(code **)(*param_1 + 0x60))());
  if ((cVar4 != '\0') && (bVar3)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1000357b; body size 5 bytes.
#line 1 "ENTRY_1000357b"

int FUN_1000357b(void)

{
 try {
  void *pvVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  iVar8 = (int)(0);
  cVar2 = (char)(thunk_FUN_1127caf0(DAT_12126b84 ^ (uint)&stack0xfffffffc));
  if (((cVar2 == '\0') || (*(uint *)(iStack_1c + 0x568) < 2)) ||
     (cVar2 = thunk_FUN_1127cb00(), cVar2 == '\0')) {
    iVar3 = (int)((**(code **)(**(int **)(iStack_1c + 0x20) + 0xc))(iStack_1c + 0x4fa));
    if (iVar3 != 0) {
      piVar4 = (int *)((int *)thunk_FUN_11138290());

      uVar5 = (uint)(piVar4[1] - *piVar4 >> 2);
      iVar3 = (int)(iVar8);
      if (uVar5 != 0) {
        do {
          iStack_20 = (int)(*(int *)(*piVar4 + uStack_24 * 4));
          uVar6 = (undefined4)(thunk_FUN_110d9820(&iStack_2c));


          thunk_FUN_110d9820(&iStack_28);


          cVar2 = (char)(thunk_FUN_111a06b0(uVar6));
          if ((cVar2 == '\0') || (*(int *)(iStack_20 + 0x1c) == 0)) {
LAB_110d6634:
            cStack_11 = (char)('\0');
          }
          else {
            cVar2 = (char)(FUN_10091f7e());
            cStack_11 = (char)('\x01');
            if (cVar2 == '\0') goto LAB_110d6634;
          }
          iVar8 = (int)(iStack_28);


          uVar6 = (undefined4)(1);
          if (((iStack_28 != 0) &&
              (pvVar1 = (void *)(iStack_28 + -0x10), uVar6 = uStack_18,
              *(int *)(iStack_28 + -0x10) < 0xffff)) &&
             (uStack_18 = 1, iVar7 = thunk_FUN_1123fcd0(pvVar1), uVar6 = uStack_18, iVar7 == 0)) {
            *(undefined4*)(iVar8 + -8) = (undefined4)(0);
            *(undefined4*)(iVar8 + -0xc) = (undefined4)(0);
            thunk_FUN_113cfb70(iVar8,*(undefined4 *)(iVar8 + -4));
            free(pvVar1);
            uVar6 = (undefined4)(uStack_18);
          }
          uStack_18 = (undefined4)(uVar6);
          iVar8 = (int)(iStack_2c);

          if (((iStack_2c != 0) &&
              (pvVar1 = (void *)(iStack_2c + -0x10), *(int *)(iStack_2c + -0x10) < 0xffff)) &&
             (iVar7 = thunk_FUN_1123fcd0(pvVar1), iVar7 == 0)) {
            *(undefined4*)(iVar8 + -8) = (undefined4)(0);
            *(undefined4*)(iVar8 + -0xc) = (undefined4)(0);
            thunk_FUN_113cfb70(iVar8,*(undefined4 *)(iVar8 + -4));
            free(pvVar1);
          }

          iVar8 = (int)(iVar3 + 1);
          if (cStack_11 == '\0') {
            iVar8 = (int)(iVar3);
          }
          uStack_24 = (uint)(uStack_24 + 1);
          iVar3 = (int)(iVar8);
        } while (uStack_24 < uVar5);
      }
    }
  }
  else {
    iVar3 = (int)(thunk_FUN_1127c6b0(1));
    if (iVar3 != -1) {
      iVar8 = (int)(thunk_FUN_1127c6b0(2));
      if ((-1 < iVar8) && (iVar3 != iVar8)) {

        return (int)(2);
      }

      return (int)(1);
    }
  }

  return (int)(iVar8);

 } catch (...) { }
}


// Reference entry 1000358a; body size 5 bytes.
#line 1 "ENTRY_1000358a"

void __fastcall FUN_1000358a(int param_1)

{
  int *piVar1;
  
  *(undefined1*)(param_1 + 0x18) = (undefined1)(0);
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4*)(*(int *)(param_1 + 0x14) + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x10));
    if ((int *)(piVar1) != (int *)0x0) {
      *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
      *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  }
  return;
}


// Reference entry 1000359e; body size 5 bytes.
#line 1 "ENTRY_1000359e"
void FUN_1000359e(int *param_1){
                    
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 100035a3; body size 5 bytes.
#line 1 "ENTRY_100035a3"

void __fastcall FUN_100035a3(int *param_1)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 100035b2; body size 5 bytes.
#line 1 "ENTRY_100035b2"

void FUN_100035b2(undefined4 param_1,undefined4 param_2)

{
 try {
  uint uVar1;
  undefined4 auStack_20 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  auStack_20[0] = (undefined4)(0);
  thunk_FUN_111a44c0(param_2);
  thunk_FUN_111aaf90(1,auStack_20);

  thunk_FUN_111a36f0(uVar1);

  return;

 } catch (...) { }
}


// Reference entry 100035bc; body size 5 bytes.
#line 1 "ENTRY_100035bc"

void FUN_100035bc(void)

{
  thunk_FUN_10fde3b0();
  return;
}


// Reference entry 100035c1; body size 5 bytes.
#line 1 "ENTRY_100035c1"

undefined1 FUN_100035c1(void)

{
  return (undefined1)(0);
}


// Reference entry 100035cb; body size 5 bytes.
#line 1 "ENTRY_100035cb"

undefined4 * __thiscall Recovered_Bulk::FUN_100035cb(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100035d0; body size 5 bytes.
#line 1 "ENTRY_100035d0"

undefined4 * __thiscall Recovered_Bulk::FUN_100035d0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCISettingsProperty"));
  if ((bVar1) || (bVar1 = ((SCStr *)(param_3))->op_eq("SCIIntegerSettingsProperty"), bVar1)) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) == (int *)0x0) {
      return (undefined4 *)(param_2);
    }
    (**(code **)(*param_1 + 4))();
    return (undefined4 *)(param_2);
  }
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
  if (!bVar1) {
    *param_2 = (undefined4)(0);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(param_1);
  if ((int *)(param_1) == (int *)0x0) {
    return (undefined4 *)(param_2);
  }
  (**(code **)(*param_1 + 4))();
  return (undefined4 *)(param_2);
}


// Reference entry 100035d5; body size 5 bytes.
#line 1 "ENTRY_100035d5"

undefined4 * __fastcall FUN_100035d5(int param_1)

{
 try {
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  SCStr *pSVar4;
  undefined4 *puVar5;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&uStack_1c))->int_allocRep("CurrentEvent");

  pSVar4 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 8) + 0xd0))(&uStack_18,&uStack_1c,uVar3));
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("multiple_speakers"));
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&uStack_18))->int_release();


  ((SCStr *)((SCStr *)&uStack_1c))->int_release();

  if (bVar2) {
    puVar5 = (undefined4 *)(operator_new(0xc));
    if ((undefined4 *)(puVar5) != (undefined4 *)0x0) {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar5[1] = (undefined4)(uVar1);
      puVar5[2] = (undefined4)(uVar1);
      *puVar5 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferSpeakerChoiceState);

      return (undefined4 *)(puVar5);
    }
  }
  else {
    ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("CurrentEvent");

    pSVar4 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 8) + 0xd0))(&uStack_1c,&uStack_18));
    *(unsigned char *)((char *)&uStack_8 + 0) = 5;
    bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("single_speaker"));
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(6)));
    ((SCStr *)((SCStr *)&uStack_1c))->int_release();


    ((SCStr *)((SCStr *)&uStack_18))->int_release();

    if (!bVar2) {
      ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("CurrentEvent");

      pSVar4 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 8) + 0xd0))(&uStack_1c,&uStack_18));
      *(unsigned char *)((char *)&uStack_8 + 0) = 9;
      bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("ready_for_transfer"));
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(10)));
      ((SCStr *)((SCStr *)&uStack_1c))->int_release();


      ((SCStr *)((SCStr *)&uStack_18))->int_release();

      if (bVar2) {
        pvStack_20 = (void *)(operator_new(0x1c));

        if ((void *)(pvStack_20) != (void *)0x0) {
          puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_10e50d20(*(undefined4 *)(param_1 + 8)));

          return (undefined4 *)(puVar5);
        }
      }
      else {
        ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("CurrentEvent");

        pSVar4 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 8) + 0xd0))(&pvStack_20,&uStack_14));
        *(unsigned char *)((char *)&uStack_8 + 0) = 0xe;
        bVar2 = (bool)(((SCStr *)(pSVar4))->op_eq("abort"));
        uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0xf)));
        ((SCStr *)((SCStr *)&pvStack_20))->int_release();
        pvStack_20 = (void *)((void *)0x0);

        ((SCStr *)((SCStr *)&uStack_14))->int_release();


        if (bVar2) {
          puVar5 = (undefined4 *)(operator_new(0xc));
          if ((undefined4 *)(puVar5) == (undefined4 *)0x0) {

            return (undefined4 *)((undefined4 *)0x0);
          }
          uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
          puVar5[1] = (undefined4)(uVar1);
          puVar5[2] = (undefined4)(uVar1);
          *puVar5 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferWizCompleteState);

          return (undefined4 *)(puVar5);
        }
        thunk_FUN_112af4e0("secure_transfer",1,"buttons state failed");
      }

      return (undefined4 *)((undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)(operator_new(0xa0));
    if ((undefined4 *)(puVar5) != (undefined4 *)0x0) {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
      puVar5[1] = (undefined4)(uVar1);
      puVar5[2] = (undefined4)(uVar1);
      puVar5[3] = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
      puVar5[4] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
      puVar5[5] = (undefined4)(0);
      puVar5[6] = (undefined4)(0);
      *puVar5 = (undefined4)((uint)&ghidra_vftable_SCSecureTransferPressButtonState);
      puVar5[3] = (undefined4)((uint)&ghidra_vftable_SCSecureTransferPressButtonState);
      puVar5[4] = (undefined4)((uint)&ghidra_vftable_SCSecureTransferPressButtonState);
      puVar5[7] = (undefined4)(0);
      puVar5[8] = (undefined4)(0);
      puVar5[9] = (undefined4)(0);
      puVar5[10] = (undefined4)(0);
      puVar5[0xd] = (undefined4)(0);
      puVar5[0xe] = (undefined4)(0);
      puVar5[0x10] = (undefined4)(0);
      puVar5[0x11] = (undefined4)(0);
      puVar5[0xc] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
      puVar5[0xf] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
      puVar5[0x1b] = (undefined4)(0);
      puVar5[0x25] = (undefined4)(0);
      puVar5[0x26] = (undefined4)(0);

      return (undefined4 *)(puVar5);
    }
  }

  return (undefined4 *)((undefined4 *)0x0);

 } catch (...) { }
}


// Reference entry 100035da; body size 5 bytes.
#line 1 "ENTRY_100035da"

undefined4 FUN_100035da(void)

{
  return (undefined4)(1);
}


// Reference entry 100035df; body size 5 bytes.
#line 1 "ENTRY_100035df"

void __thiscall Recovered_Bulk::FUN_100035df(int *param_2)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  undefined4 uVar2;
  int *piStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  (**(code **)(**(int **)(param_1 + 0x9c) + 0x18))(param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc);
  if (*(int *)(*(int *)(param_1 + 0x9c) + 0x10) == 0) {
    if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
      (**(code **)(**(int **)(param_1 + 0x88) + 0x18))(param_1 + 0x84);
    }
    uVar2 = (undefined4)(thunk_FUN_102518f0(&param_2));

    thunk_FUN_102226d0(uVar2);
    *(unsigned char *)((char *)&uStack_8 + 0) = 3;
    if ((int *)(param_2) != (int *)0x0) {
      (**(code **)(*param_2 + 8))();
    }
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
    (**(code **)(*piStack_18 + 0x58))(param_1 + 0x84);
    if (*(int *)(param_1 + 0xac) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0xb0));
      if ((int *)(piVar1) != (int *)0x0) {
        *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
        *(undefined4*)(param_1 + 0xb0) = (undefined4)(0);
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
      *(undefined4*)(param_1 + 0xb0) = (undefined4)(0);
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0xa8));
      if ((int *)(piVar1) != (int *)0x0) {
        *(undefined4*)(param_1 + 0xa4) = (undefined4)(0);
        *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4*)(param_1 + 0xa4) = (undefined4)(0);
      *(undefined4*)(param_1 + 0xa8) = (undefined4)(0);
    }

    if ((int *)(piStack_14) != (int *)0x0) {
      (**(code **)(*piStack_14 + 8))();
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 100035f8; body size 5 bytes.
#line 1 "ENTRY_100035f8"

undefined1 FUN_100035f8(void)

{
  return (undefined1)(1);
}


// Reference entry 100035fd; body size 5 bytes.
#line 1 "ENTRY_100035fd"

undefined4 FUN_100035fd(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined **appuStack_a0 [8];
  void *pvStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  undefined **appuStack_74 [9];
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 auStack_48 [2];
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  SCStr aSStack_34 [8];
  undefined4 auStack_2c [2];
  undefined **ppuStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  int iStack_8;


  uVar3 = (uint)(DAT_12126b84 ^ (uint)appuStack_74);

  thunk_FUN_10c5f8a0("Go to Settings");

  thunk_FUN_10ec0a20("settings");
  *(unsigned char *)((char *)&uStack_78 + 0) = 1;
  iVar4 = (int)(thunk_FUN_10ecea60(aSStack_34));
  thunk_FUN_105f6290(iVar4 + 4);
  *(unsigned char *)((char *)&uStack_78 + 0) = 2;
  uVar5 = (undefined4)(thunk_FUN_10c5f450(auStack_2c,0x29f7,&DAT_1188465c,"device",uVar3));
  *(unsigned char *)((char *)&uStack_78 + 0) = 3;
  thunk_FUN_10ec1b40("header");
  *(unsigned char *)((char *)&uStack_78 + 0) = 4;
  iVar4 = (int)(thunk_FUN_10eced20(uVar5));
  thunk_FUN_105f6290(iVar4 + 4);
  ppuStack_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_1c = (int *)((int *)0x0);
  piStack_18 = (int *)((int *)0x0);
  iStack_14 = (int)(0);
  puStack_10 = (undefined4 *)((undefined4 *)0x0);
  puStack_c = (undefined4 *)((undefined4 *)0x0);
  iStack_8 = (int)(0);
  *(unsigned char *)((char *)&uStack_78 + 0) = 6;
  piVar6 = (int *)((int *)thunk_FUN_106050a0(appuStack_74));
  uVar5 = (undefined4)((**(code **)(*piVar6 + 8))(appuStack_a0));
  thunk_FUN_105f60e0(uVar5);
  puVar2 = (undefined4 *)(puStack_c);
  *(unsigned char *)((char *)&uStack_78 + 0) = 5;
  puVar7 = (undefined4 *)(puStack_10);
  if ((undefined4 *)(puStack_10) != (undefined4 *)0x0) {
    for (;(undefined4 *)((puVar7)) != (undefined4 *)(puVar2); puVar7 = puVar7 + 8) {
      (**(code **)*puVar7)(0);
    }
    uVar3 = (uint)(iStack_8 - (int)puStack_10 & 0xffffffe0);
    puVar7 = (undefined4 *)(puStack_10);
    if (0xfff < uVar3) {
      puVar7 = (undefined4 *)((undefined4 *)puStack_10[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)puStack_10 + (-4 - (int)puVar7))) goto LAB_10b015a5;
    }
    thunk_FUN_1148a50e(puVar7,uVar3);
    puStack_10 = (undefined4 *)((undefined4 *)0x0);
    puStack_c = (undefined4 *)((undefined4 *)0x0);
    iStack_8 = (int)(0);
  }
  piVar6 = (int *)(piStack_18);
  if ((int *)(piStack_1c) != (int *)0x0) {
    if ((int *)(piStack_1c) != (int *)(piStack_18)) {
      piVar8 = (int *)(piStack_1c + 1);
      do {
        *(unsigned char *)((char *)&uStack_78 + 0) = 7;
        ((SCStr *)((SCStr *)(piVar8 + 1)))->int_release();
        piVar8[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar8);
        *(unsigned char *)((char *)&uStack_78 + 0) = 8;
        if ((int *)(piVar1) != (int *)0x0) {
          piVar8[-1] = (int)(0);
          *piVar8 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&uStack_78 + 0) = 5;
        piVar1 = (int *)(piVar8 + 2);
        piVar8 = (int *)(piVar8 + 3);
      } while ((int *)(piVar1) != (int *)(piVar6));
    }
    uVar3 = (uint)(((iStack_14 - (int)piStack_1c) / 0xc) * 0xc);
    piVar6 = (int *)(piStack_1c);
    if (0xfff < uVar3) {
      piVar6 = (int *)((int *)piStack_1c[-1]);
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uint)((int)piStack_1c + (-4 - (int)piVar6))) {
LAB_10b015a5:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar6,uVar3);
    piStack_1c = (int *)((int *)0x0);
    piStack_18 = (int *)((int *)0x0);
    iStack_14 = (int)(0);
  }
  ppuStack_24 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_74[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_78 + 0) = 9;
  ((SCStr *)((SCStr *)&uStack_38))->int_release();
  piVar6 = (int *)(piStack_3c);

  *(unsigned char *)((char *)&uStack_78 + 0) = 10;
  if ((int *)(piStack_3c) != (int *)0x0) {

    piStack_3c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }
  *(unsigned char *)((char *)&uStack_78 + 0) = 0xb;
  ((SCStr *)((SCStr *)auStack_2c))->int_release();
  auStack_2c[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_a0[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_78 + 0) = 0xc;
  ((SCStr *)((SCStr *)auStack_48))->int_release();
  piVar6 = (int *)(piStack_4c);
  auStack_48[0] = (undefined4)(0);
  uStack_78 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_78 + 1)) << 8 | (uint)(0xd)));
  if ((int *)(piStack_4c) != (int *)0x0) {

    piStack_4c = (int *)((int *)0x0);
    (**(code **)(*piVar6 + 8))();
  }

  ((SCStr *)(aSStack_34))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 1000360c; body size 5 bytes.
#line 1 "ENTRY_1000360c"

bool __fastcall FUN_1000360c(int param_1)

{
 try {
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piStack_18;
  SCStr aSStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(aSStack_14))->op_ctor((SCStr *)(param_1 + 0xc));

  piVar3 = (int *)((int *)thunk_FUN_10c9bf20(&piStack_18,aSStack_14,uVar2));
  iVar1 = (int)(*piVar3);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
  if ((int *)(piStack_18) != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))();
  }

  ((SCStr *)(aSStack_14))->int_release();

  return (bool)(iVar1 != 0);

 } catch (...) { }
}


// Reference entry 1000361b; body size 5 bytes.
#line 1 "ENTRY_1000361b"

int * FUN_1000361b(int *param_1,undefined4 param_2,char *param_3)

{
 try {
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [16];
  int *piStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar1 = (uint)(DAT_12126b84);

  piStack_18 = (int *)(param_1);

  pcVar2 = (char *)((char *)&param_3);
  if (0xf < in_stack_00000020) {
    pcVar2 = (char *)(param_3);
  }
  ((SCStr *)((SCStr *)&uStack_14))->int_allocRep(pcVar2);
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_10c97560(&piStack_18));
  puVar5 = (undefined4 *)(&uStack_14);
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  uVar4 = (undefined4)(*puVar3);
  thunk_FUN_103869d0(auStack_28,4,uVar4,puVar5,in_stack_00000024);
  *(unsigned char *)((char *)&uStack_8 + 0) = 5;
  if ((int *)(piStack_18) != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))(uVar1);
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 7;
  uVar6 = (undefined4)(0x1037e8e4);
  ((SCStr *)((SCStr *)&uStack_14))->int_release();

  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(6)));
  thunk_FUN_1035ccc0(auStack_28);
  thunk_FUN_10387aa0(param_1,uVar4,puVar5,uVar6);
  thunk_FUN_101f53d0();
  if (0xf < in_stack_00000020) {
    uVar1 = (uint)(in_stack_00000020 + 1);
    pcVar2 = (char *)(param_3);
    if (0xfff < uVar1) {
      pcVar2 = (char *)(*(char **)(param_3 + -4));
      uVar1 = (uint)(in_stack_00000020 + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar2)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(pcVar2,uVar1);
  }

  return (int *)(param_1);

 } catch (...) { }
}


// Reference entry 10003625; body size 5 bytes.
#line 1 "ENTRY_10003625"

undefined4 * __thiscall Recovered_Bulk::FUN_10003625(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *extraout_ECX;
  SCStr *this_;
  int *piVar4;
  SCStr **ppSStack_50;
  SCStr aSStack_20 [4];
  SCStr *pSStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  pSStack_1c = (SCStr *)((SCStr *)0x0);
  ppSStack_50 = (SCStr **)((SCStr **)0x101ea5d1);
  ((SCStr *)((SCStr *)&piStack_18))->int_allocRep("Not Yet Implemented");

  ppSStack_50 = (SCStr **)((SCStr **)&piStack_18);
  thunk_FUN_101ea3a0(param_2);
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCRemoveMeSettingsMenu);
  ppSStack_50 = (SCStr **)((SCStr **)0x101ea609);
  piVar2 = (int *)(operator_new(0x28));
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  if ((int *)(piVar2) == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    ppSStack_50 = (SCStr **)((SCStr **)extraout_ECX);
    ((SCStr *)((SCStr *)&ppSStack_50))->int_allocRep("default");
    piVar3 = (int *)((int *)thunk_FUN_101eaad0(param_1));
  }
  piVar4 = (int *)((int *)0x0);
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  if ((int *)(piVar3) != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piVar3 + 0xc))());
    (**(code **)(*piVar4 + 4))();
  }
  puVar1 = (undefined4 *)((undefined4 *)param_1[0xc]);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(3)));
  if ((undefined4 *)(puVar1) == (undefined4 *)param_1[0xd]) {
    ppSStack_50 = (SCStr **)((SCStr **)puVar1);
    thunk_FUN_101e8ca0();
  }
  else {
    *puVar1 = (undefined4)(piVar3);
    puVar1[1] = (undefined4)(piVar4);
    if ((int *)(piVar4) != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    param_1[0xc] = (undefined4)(param_1[0xc] + 8);
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 4;
  if ((int *)(piVar4) != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 7;
  ((SCStr *)((SCStr *)&piStack_18))->int_release();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuNYI);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuNYI);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuNYI);
  *(unsigned char *)((char *)&uStack_8 + 0) = 8;
  thunk_FUN_101ed0d0();

  *(unsigned char *)((char *)&uStack_8 + 0) = 9;
  ppSStack_50 = (SCStr **)((SCStr **)0x101ea6ec);
  piVar3 = (int *)((int *)thunk_FUN_101e7240());
  *(unsigned char *)((char *)&uStack_8 + 0) = 10;
  this_ = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if ((SCStr *)*piVar3 != (SCStr *)((0x0))) {
    this_ = (SCStr *)((SCStr *)*piVar3);
  }
  ppSStack_50 = (SCStr **)((SCStr **)0x11884c90);
  ((SCStr *)(this_))->format((char *)&uStack_14);
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)&pSStack_1c))->int_release();
  *(unsigned char *)((char *)&uStack_8 + 0) = 9;
  ((SCStr *)((SCStr *)&param_2))->int_allocRep("description");
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xc;
  ppSStack_50 = (SCStr **)(&pSStack_1c);
  piVar3 = (int *)((int *)thunk_FUN_10417a50());
  piStack_18 = (int *)((int *)*piVar3);
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xd;
  *piVar3 = (int)(0);
  if ((int *)(piStack_18) == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piStack_18 + 0xc))());
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xe;
  if ((SCStr *)(pSStack_1c) != (SCStr *)0x0) {
    (**(code **)(*(int *)pSStack_1c + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xf;
  ((SCStr *)((SCStr *)&param_2))->int_release();
  *(unsigned char *)((char *)&uStack_8 + 0) = 9;
  thunk_FUN_101ed0d0();
  ppSStack_50 = (SCStr **)((SCStr **)0x101ea79d);
  ((SCStr *)((SCStr *)&stack0xffffffb8))->int_allocRep("default");
  ppSStack_50 = (SCStr **)((SCStr **)0x101ea7a8);
  piVar4 = (int *)((int *)thunk_FUN_101f11d0());
  param_2 = (int)(*piVar4);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0x10)));
  thunk_FUN_1041d6a0();
  piVar4 = (int *)((int *)0x0);
  if ((int *)(piStack_18) != (int *)0x0) {
    piVar4 = (int *)((int *)(**(code **)(*piStack_18 + 0xc))());
    (**(code **)(*piVar4 + 4))();
  }
  pSStack_1c = (SCStr *)((SCStr *)(param_2 + 0xc));
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0x11)));
  puVar1 = (undefined4 *)(*(undefined4 **)(param_2 + 0x10));
  if ((undefined4 *)(puVar1) == *(undefined4 **)(param_2 + 0x14)) {
    ppSStack_50 = (SCStr **)((SCStr **)0x101ea815);
    thunk_FUN_101e8900();
  }
  else {
    *puVar1 = (undefined4)(piStack_18);
    puVar1[1] = (undefined4)(piVar4);
    if ((int *)(piVar4) != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int*)(pSStack_1c + 4) = (int)(*(int *)(pSStack_1c + 4) + 8);
  }
  pSStack_1c = (SCStr *)((SCStr *)thunk_FUN_104d4740());
  *(unsigned char *)((char *)&uStack_8 + 0) = 0x12;
  if ((SCStr *)(pSStack_1c) != (SCStr *)(param_2 + 0x1c)) {
    ((SCStr *)((SCStr *)(param_2 + 0x1c)))->int_release();
    *(undefined4*)(param_2 + 0x1c) = (undefined4)(*(undefined4 *)pSStack_1c);
    ((SCStr *)((SCStr *)(param_2 + 0x1c)))->int_addref();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 0x13;
  ((SCStr *)(aSStack_20))->int_release();
  *(unsigned char *)((char *)&uStack_8 + 0) = 0x14;
  if ((int *)(piVar4) != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 0x15;
  if ((int *)(piVar2) != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 9;
  thunk_FUN_101ed5f0();
  thunk_FUN_101ed5f0();
  *(unsigned char *)((char *)&uStack_8 + 0) = 0x16;
  ((SCStr *)((SCStr *)&uStack_14))->int_release();

  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0x17)));
  if ((int *)(piVar3) != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1000362f; body size 5 bytes.
#line 1 "ENTRY_1000362f"
undefined4 FUN_1000362f(int *param_1,ushort *param_2){
 try {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  uVar1 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&uStack_14))->setFromUTF16(param_2);
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x24))(&uStack_14,uVar1));

  ((SCStr *)((SCStr *)&uStack_14))->int_release();

  return (undefined4)(uVar2);

 } catch (...) { }
}


// Reference entry 10003634; body size 5 bytes.
#line 1 "ENTRY_10003634"

undefined4 * __thiscall Recovered_Bulk::FUN_10003634(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIWebsocketDelegate"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10003639; body size 5 bytes.
#line 1 "ENTRY_10003639"

undefined4 * __thiscall Recovered_Bulk::FUN_10003639(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLastFMContentProvider);
  thunk_FUN_111feb50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x118);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003643; body size 5 bytes.
#line 1 "ENTRY_10003643"

undefined1 __thiscall Recovered_Bulk::FUN_10003643(byte *param_2)
{
  byte *param_1 = (byte *)this;
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  bool bVar6;
  
  pbVar2 = (byte *)(param_2);
  pbVar4 = (byte *)(param_1);
  if (*param_1 != 0) {
    do {
      bVar1 = (byte)(*pbVar4);
      bVar6 = (bool)(bVar1 < *pbVar2);
      if (bVar1 != *pbVar2) {
LAB_11127d20:
        uVar3 = (uint)(-(uint)bVar6 | 1);
        goto LAB_11127d25;
      }
      if (bVar1 == 0) break;
      bVar1 = (byte)(pbVar4[1]);
      bVar6 = (bool)(bVar1 < pbVar2[1]);
      if ((byte *)((bVar1)) != (byte *)(pbVar2[1])) goto LAB_11127d20;
      pbVar2 = (byte *)(pbVar2 + 2);
      pbVar4 = (byte *)(pbVar4 + 2);
    } while (bVar1 != 0);
    uVar3 = (uint)(0);
LAB_11127d25:
    if (uVar3 != 0) {
      uVar5 = (undefined1)(1);
      goto LAB_11127d2f;
    }
  }
  uVar5 = (undefined1)(0);
LAB_11127d2f:
  thunk_FUN_1145c250(param_1,param_2,0x24);
  return (undefined1)(uVar5);
}


// Reference entry 10003648; body size 5 bytes.
#line 1 "ENTRY_10003648"

undefined4 * __thiscall Recovered_Bulk::FUN_10003648(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10003666; body size 5 bytes.
#line 1 "ENTRY_10003666"

void __thiscall Recovered_Bulk::FUN_10003666(int param_2,ushort param_3)
{
  int param_1 = (int )this;
  int iVar1;
  uint uStack_8;
  
  if (*(int **)(param_1 + 0x18) == (int *)((0x0))) {
    iVar1 = (int)(0);
  }
  else {
    uStack_8 = (uint)(0x10e2c4ff);
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x18) + 0x20))());
  }
  if (param_2 == iVar1) {
    uStack_8 = (uint)(0x10e2c511);
    iVar1 = (int)(thunk_FUN_103eb600());
    if (iVar1 == -2) {
      uStack_8 = (uint)((uint)param_3);
      thunk_FUN_112af4e0("sec_reg",1,"Error in resetting password %d");
      ((SCStr *)((SCStr *)&uStack_8))->int_allocRep("network_error");
      (**(code **)(**(int **)(param_1 + -4) + 0x8c))();
    }
  }
  return;
}


// Reference entry 1000366b; body size 5 bytes.
#line 1 "ENTRY_1000366b"

uint __fastcall FUN_1000366b(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x20) + 0x28))());
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10003675; body size 5 bytes.
#line 1 "ENTRY_10003675"

undefined2 __fastcall FUN_10003675(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 1000368e; body size 5 bytes.
#line 1 "ENTRY_1000368e"

void FUN_1000368e(void)

{
  thunk_FUN_10909090();
  return;
}


// Reference entry 10003693; body size 5 bytes.
#line 1 "ENTRY_10003693"

undefined1 FUN_10003693(void)

{
  return (undefined1)(1);
}


// Reference entry 1000369d; body size 5 bytes.
#line 1 "ENTRY_1000369d"

void FUN_1000369d(void)

{
  thunk_FUN_10def0d0();
  return;
}


// Reference entry 100036a2; body size 5 bytes.
#line 1 "ENTRY_100036a2"

undefined4 * __thiscall Recovered_Bulk::FUN_100036a2(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a29f0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100036a7; body size 5 bytes.
#line 1 "ENTRY_100036a7"

void FUN_100036a7(void)

{
  thunk_FUN_10568060();
  return;
}


// Reference entry 100036b6; body size 5 bytes.
#line 1 "ENTRY_100036b6"

void FUN_100036b6(void)

{
  thunk_FUN_10444110();
  return;
}


// Reference entry 100036bb; body size 5 bytes.
#line 1 "ENTRY_100036bb"

undefined4 FUN_100036bb(undefined1 *param_1)

{
  *param_1 = (undefined1)(1);
  return (undefined4)(1);
}


// Reference entry 100036c5; body size 5 bytes.
#line 1 "ENTRY_100036c5"

bool FUN_100036c5(int *param_1)

{
 try {
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  SCStr *pSVar8;
  void *pvVar9;
  undefined4 *puVar10;
  char *pcVar11;
  size_t _Size;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piStack_98;
  int *piStack_90;
  int *piStack_8c;
  void *pvStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int iStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  int *piStack_28;
  char *pcStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  char *pcStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;

  puStack_34 = (undefined4 *)((undefined4 *)0x0);
  puStack_2c = (undefined4 *)((undefined4 *)0x0);

  puStack_30 = (undefined4 *)((undefined4 *)0x0);
  if ((int *)(param_1) == (int *)0x0) {
    bVar3 = (bool)(false);
  }
  else {
    (**(code **)(*param_1 + 0x14))();
    *(unsigned char *)((char *)&uStack_74 + 0) = 1;
    thunk_FUN_101ccf90();
    *(unsigned char *)((char *)&uStack_74 + 0) = 4;
    if ((int *)(piStack_28) != (int *)0x0) {
      (**(code **)(*piStack_28 + 8))();
    }
    uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(3)));
    if (((int *)(piStack_90) == (int *)0x0) || (iVar4 = (**(code **)(*piStack_90 + 0x14))(), iVar4 == 0)) {
      bVar3 = (bool)(false);
    }
    else {

      iVar4 = (int)((**(code **)(*piStack_90 + 0x14))());
      if (iVar4 != 0) {
        do {
          (**(code **)(*piStack_90 + 0x1c))();
          *(unsigned char *)((char *)&uStack_74 + 0) = 5;
          pcStack_24 = (char *)(pcStack_14);
          if (((char *)(pcStack_14) == (char *)0x0) || (*pcStack_14 == '\0')) {
            puVar10 = (undefined4 *)((undefined4 *)0x0);
          }
          else {
            pcVar11 = (char *)(pcStack_14);
            do {
              cVar1 = (char)(*pcVar11);
              pcVar11 = (char *)(pcVar11 + 1);
            } while (cVar1 != '\0');
            _Size = (size_t)((int)pcVar11 - (int)(pcStack_14 + 1));
            puVar5 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586());
            puVar10 = (undefined4 *)(puVar5 + 4);
            *puVar5 = (undefined4)(1);
            puVar5[3] = (undefined4)(_Size);
            puVar5[2] = (undefined4)(0);
            puVar5[1] = (undefined4)(0);
            memcpy(puVar10,pcStack_24,_Size);
            *(undefined1*)((int)puVar10 + _Size) = (undefined1)(0);
          }
          puVar5 = (undefined4 *)(puStack_30);
          uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(8)));
          if ((undefined4 *)(puStack_30) == (undefined4 *)(puStack_2c)) {
            thunk_FUN_102a3580();
          }
          else {
            *puStack_30 = (undefined4)(puVar10);
            if (((undefined4 *)(puVar10) != (undefined4 *)0x0) && ((int)puVar10[-4] < 0xffff)) {
              thunk_FUN_1123fce0();
            }
            puVar5[1] = (undefined4)(0);
            puVar5[2] = (undefined4)(0);
            puStack_30 = (undefined4 *)(puStack_30 + 3);
          }
          *(unsigned char *)((char *)&uStack_74 + 0) = 0xd;
          if ((((undefined4 *)(puVar10) != (undefined4 *)0x0) && ((int)puVar10[-4] < 0xffff)) &&
             (iVar4 = thunk_FUN_1123fcd0(), iVar4 == 0)) {
            puVar10[-2] = (undefined4)(0);
            puVar10[-3] = (undefined4)(0);
            thunk_FUN_113cfb70();
            free(puVar10 + -4);
          }
          *(unsigned char *)((char *)&uStack_74 + 0) = 0xe;
          ((SCStr *)((SCStr *)&pcStack_14))->int_release();
          uVar12 = (uint)(uStack_10 + 1);
          pcStack_14 = (char *)((char *)0x0);
          uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(3)));
          uStack_10 = (uint)(uVar12);
          uVar6 = (uint)((**(code **)(*piStack_90 + 0x14))());
        } while (uVar12 < uVar6);
      }
      (**(code **)(*param_1 + 0x1c))();
      *(unsigned char *)((char *)&uStack_74 + 0) = 0xf;
      (**(code **)(*param_1 + 0x18))();
      *(unsigned char *)((char *)&uStack_74 + 0) = 0x10;
      (**(code **)(*param_1 + 0x18))();
      piStack_58 = (int *)((int *)0x0);
      piStack_54 = (int *)((int *)0x0);
      *(unsigned char *)((char *)&uStack_74 + 0) = 0x12;
      piStack_20 = (int *)(operator_new(0x48));
      *(unsigned char *)((char *)&uStack_74 + 0) = 0x13;
      if ((int *)(piStack_20) == (int *)0x0) {
        piVar7 = (int *)((int *)0x0);
        uVar6 = (uint)(uStack_18);
      }
      else {
        ((SCStr *)((SCStr *)&uStack_10))->int_allocRep("LOCALMUSICBROWSE_CPUDN");
        uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x14)));

        piVar7 = (int *)((int *)thunk_FUN_102a7a90(&uStack_10,&uStack_4c,&uStack_48,&uStack_50));
        uVar6 = (uint)(1);
      }

      if ((int *)(piVar7) != (int *)0x0) {
        piStack_58 = (int *)(piVar7);
        piStack_54 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
        (**(code **)(*piStack_54 + 4))();
      }
      *(unsigned short *)((char *)&uStack_74 + 1) = 0;
      if ((uVar6 & 1) != 0) {
        uVar6 = (uint)(uVar6 & 0xfffffffe);
        *(unsigned char *)((char *)&uStack_74 + 0) = 0x16;
        *(unsigned short *)((char *)&uStack_74 + 1) = 0;
        uStack_18 = (uint)(uVar6);
        ((SCStr *)((SCStr *)&uStack_10))->int_release();
      }
      piStack_28 = (int *)((int *)0x0);
      iVar4 = (int)((int)puStack_30 - (int)puStack_34 >> 0x1f);
      if (((int)puStack_30 - (int)puStack_34) / 0xc + iVar4 != iVar4) {

        do {
          piVar7 = (int *)(piStack_28);
          *(unsigned char *)((char *)&uStack_74 + 0) = 0x12;
          piVar13 = (int *)((int *)((int)puStack_34 + uStack_10));
          piStack_68 = (int *)(piVar13);
          ((SCStr *)((SCStr *)&uStack_1c))->int_allocRep("object.container.sonos-incrementalSearch");


          pcVar11 = (char *)((char *)*piVar13);
          *(unsigned char *)((char *)&uStack_74 + 0) = 0x19;
          if (((char *)(pcVar11) == (char *)0x0) || (*pcVar11 == '\0')) {
            *(unsigned char *)((char *)&uStack_74 + 0) = 0x21;
            ((SCStr *)((SCStr *)&uStack_c))->int_release();

            *(unsigned char *)((char *)&uStack_74 + 0) = 0x22;
            ((SCStr *)((SCStr *)&uStack_8))->int_release();

            uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x23)));
            ((SCStr *)((SCStr *)&uStack_1c))->int_release();
          }
          else {
            ((SCStr *)((SCStr *)&pcStack_14))->int_allocRep(pcVar11);
            iVar4 = (int)(iStack_64);
            uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x1a)));
            piStack_20 = (int *)(*(int **)(iStack_64 + 0x5c));
            thunk_FUN_1029ecd0();
            if ((*(char *)((int)piStack_98 + 0xd) != '\0') ||
               (bVar3 = ((SCStr *)((SCStr *)&pcStack_14))->op_lt((SCStr *)(piStack_98 + 4)),
               piVar7 = piStack_98, bVar3)) {
              piVar7 = (int *)(*(int **)(iVar4 + 0x5c));
            }
            *(unsigned char *)((char *)&uStack_74 + 0) = 0x1b;
            ((SCStr *)((SCStr *)&pcStack_14))->int_release();
            pcStack_14 = (char *)((char *)0x0);
            *(unsigned char *)((char *)&uStack_74 + 0) = 0x19;
            uVar2 = (undefined1)((undefined1)uStack_74);
            *(unsigned char *)((char *)&uStack_74 + 0) = 0x19;
            if ((int *)(piVar7) == (int *)(piStack_20)) {
              thunk_FUN_112af4e0("SearchablesManager",1);
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x1c;
              ((SCStr *)((SCStr *)&uStack_c))->int_release();

              *(unsigned char *)((char *)&uStack_74 + 0) = 0x1d;
              ((SCStr *)((SCStr *)&uStack_8))->int_release();

              uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x1e)));
              ((SCStr *)((SCStr *)&uStack_1c))->int_release();
              piVar7 = (int *)(piStack_28);
            }
            else {
              pcVar11 = (char *)("");
              if ((char *)*piStack_68 != (char *)((0x0))) {
                pcVar11 = (char *)((char *)*piStack_68);
              }
              *(unsigned char *)((char *)&uStack_74 + 0) = uVar2;
              ((SCStr *)((SCStr *)&uStack_38))->int_allocRep(pcVar11);
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x1f;
              ((SCStr *)((SCStr *)&uStack_8))->int_release();
              uStack_8 = (undefined4)(uStack_38);
              ((SCStr *)((SCStr *)&uStack_8))->int_addref();
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x20;
              ((SCStr *)((SCStr *)&uStack_38))->int_release();

              uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x19)));
              pSVar8 = (SCStr *)((SCStr *)thunk_FUN_1029f7a0());
              if ((SCStr *)(pSVar8) != (SCStr *)&uStack_c) {
                ((SCStr *)((SCStr *)&uStack_c))->int_release();
                uStack_c = (undefined4)(*(undefined4 *)pSVar8);
                ((SCStr *)((SCStr *)&uStack_c))->int_addref();
              }
              piStack_20 = (int *)((int *)&stack0xffffff38);
              ((SCStr *)((SCStr *)&stack0xffffff38))->int_allocRep("");
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x24;
              ((SCStr *)((SCStr *)&stack0xffffff34))->op_ctor((SCStr *)&uStack_8);
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x19;
              (**(code **)(*param_1 + 0x20))(&pcStack_24);
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x25;
              ((SCStr *)((SCStr *)&uStack_3c))->int_allocRep("LOCALMUSICBROWSE_CPUDN");
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x26;
              thunk_FUN_103ac6e0(&uStack_44,&pcStack_24,&uStack_3c,&uStack_1c);
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x29;
              ((SCStr *)((SCStr *)&uStack_3c))->int_release();

              *(unsigned char *)((char *)&uStack_74 + 0) = 0x28;
              pvVar9 = (void *)(operator_new(0x68));
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x2a;
              if ((void *)(pvVar9) == (void *)0x0) {
                piVar7 = (int *)((int *)0x0);
              }
              else {
                ((SCStr *)((SCStr *)&uStack_40))->int_allocRep("LOCALMUSICBROWSE_CPUDN");
                uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x2b)));
                uStack_18 = (uint)(uVar6 | 2);
                piVar7 = (int *)((int *)thunk_FUN_102a8630(&uStack_8,&uStack_c,&uStack_44));
              }
              piVar13 = (int *)((int *)0x0);

              piStack_5c = (int *)((int *)0x0);
              piStack_60 = (int *)(piVar7);
              if ((int *)(piVar7) != (int *)0x0) {
                piVar13 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
                piStack_5c = (int *)(piVar13);
                (**(code **)(*piVar13 + 4))();
              }

              if ((uStack_18 & 2) != 0) {
                uStack_18 = (uint)(uStack_18 & 0xfffffffd);
                *(unsigned char *)((char *)&uStack_74 + 0) = 0x2f;
                *(unsigned short *)((char *)&uStack_74 + 1) = 0;
                ((SCStr *)((SCStr *)&uStack_40))->int_release();

                uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x2e)));
              }
              piVar14 = (int *)((int *)0x0);
              piStack_6c = (int *)((int *)0x0);
              piStack_70 = (int *)(piVar7);
              if ((int *)(piVar7) != (int *)0x0) {
                piVar14 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
                piStack_6c = (int *)(piVar14);
                (**(code **)(*piVar14 + 4))();
              }
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x30;
              if ((int *)(piVar14) != (int *)0x0) {
                (**(code **)(*piVar14 + 4))();
              }
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x31;
              piStack_20 = (int *)(piVar7);
              thunk_FUN_103beae0();
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x33;
              if ((int *)(piVar14) != (int *)0x0) {
                piStack_70 = (int *)((int *)0x0);
                piStack_6c = (int *)((int *)0x0);
                (**(code **)(*piVar14 + 8))();
              }
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x34;
              if ((int *)(piVar13) != (int *)0x0) {
                piStack_60 = (int *)((int *)0x0);
                piStack_5c = (int *)((int *)0x0);
                (**(code **)(*piVar13 + 8))();
              }
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x35;
              ((SCStr *)((SCStr *)&uStack_44))->int_release();

              *(unsigned char *)((char *)&uStack_74 + 0) = 0x36;
              ((SCStr *)((SCStr *)&pcStack_24))->int_release();
              pcStack_24 = (char *)((char *)0x0);
              *(unsigned char *)((char *)&uStack_74 + 0) = 0x37;
              ((SCStr *)((SCStr *)&uStack_c))->int_release();

              *(unsigned char *)((char *)&uStack_74 + 0) = 0x38;
              ((SCStr *)((SCStr *)&uStack_8))->int_release();

              uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x39)));
              ((SCStr *)((SCStr *)&uStack_1c))->int_release();
              uVar6 = (uint)(uStack_18);
              piVar7 = (int *)(piStack_28);
            }
          }
          piStack_28 = (int *)((int *)((int)piVar7 + 1));
          uStack_10 = (uint)(uStack_10 + 0xc);

        } while (piStack_28 < (int *)(((int)puStack_30 - (int)puStack_34) / 0xc));
      }
      *(unsigned char *)((char *)&uStack_74 + 0) = 0x12;
      puVar10 = (undefined4 *)((undefined4 *)(**(code **)(*piStack_58 + 0x44))());
      piVar7 = (int *)((int *)*puVar10);
      *(unsigned char *)((char *)&uStack_74 + 0) = 0x3a;
      *puVar10 = (undefined4)(0);
      piStack_60 = (int *)(piVar7);
      if ((int *)(piVar7) == (int *)0x0) {
        piVar13 = (int *)((int *)0x0);
      }
      else {
        piVar13 = (int *)((int *)(**(code **)(*piVar7 + 0xc))());
      }
      *(unsigned char *)((char *)&uStack_74 + 0) = 0x3d;
      piStack_5c = (int *)(piVar13);
      if ((int *)(param_1) != (int *)0x0) {
        (**(code **)(*param_1 + 8))();
      }
      uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x3c)));
      iVar4 = (int)((**(code **)(*piVar7 + 0x14))());
      bVar3 = (bool)(0 < iVar4);
      if (bVar3) {
        thunk_FUN_102b3d00();
      }
      *(unsigned char *)((char *)&uStack_74 + 0) = 0x43;
      if ((int *)(piVar13) != (int *)0x0) {
        (**(code **)(*piVar13 + 8))();
      }
      *(unsigned char *)((char *)&uStack_74 + 0) = 0x44;
      if ((int *)(piStack_54) != (int *)0x0) {
        (**(code **)(*piStack_54 + 8))();
      }
      *(unsigned char *)((char *)&uStack_74 + 0) = 0x45;
      ((SCStr *)((SCStr *)&uStack_48))->int_release();

      *(unsigned char *)((char *)&uStack_74 + 0) = 0x46;
      ((SCStr *)((SCStr *)&uStack_4c))->int_release();

      uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x47)));
      ((SCStr *)((SCStr *)&uStack_50))->int_release();

    }
    uStack_74 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_74 + 1)) << 8 | (uint)(0x48)));
    if ((int *)(piStack_8c) != (int *)0x0) {
      (**(code **)(*piStack_8c + 8))();
    }
    puVar5 = (undefined4 *)(puStack_30);
    puVar10 = (undefined4 *)(puStack_34);
    if ((undefined4 *)(puStack_34) != (undefined4 *)0x0) {
      for (;(undefined4 *)((puVar10)) != (undefined4 *)(puVar5); puVar10 = puVar10 + 3) {
        thunk_FUN_102a9bb0();
      }
      if ((0xfff < (uint)((((int)puStack_2c - (int)puStack_34) / 0xc) * 0xc)) &&
         (0x1f < (uint)((int)puStack_34 + (-4 - puStack_34[-1])))) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      thunk_FUN_1148a50e();
    }
  }

  return (bool)(bVar3);

 } catch (...) { }
}


// Reference entry 100036cf; body size 5 bytes.
#line 1 "ENTRY_100036cf"
void FUN_100036cf(void){
                    
  (*(code *)(uint)(DAT_121a06c8))("SCIHousehold");
  return;
}


// Reference entry 100036d4; body size 5 bytes.
#line 1 "ENTRY_100036d4"
void FUN_100036d4(void){
                    
  (*(code *)(uint)(DAT_121a06c8))("Feature-InAppMessaging");
  return;
}


// Reference entry 100036d9; body size 5 bytes.
#line 1 "ENTRY_100036d9"
void FUN_100036d9(void){
                    
  (*(code *)(uint)(DAT_121a06c8))("resumed");
  return;
}


// Reference entry 100036f7; body size 5 bytes.
#line 1 "ENTRY_100036f7"

bool FUN_100036f7(void)

{
 try {
  bool bVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a7734));
  if (bVar1) {
    FUN_1006aac8(uVar2);
  }

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (bool)(bVar1);

 } catch (...) { }
}


// Reference entry 100036fc; body size 5 bytes.
#line 1 "ENTRY_100036fc"

undefined1 FUN_100036fc(void)

{
  return (undefined1)(1);
}


// Reference entry 1000370b; body size 5 bytes.
#line 1 "ENTRY_1000370b"

undefined2 __fastcall FUN_1000370b(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 1000371a; body size 5 bytes.
#line 1 "ENTRY_1000371a"

undefined4 * __thiscall Recovered_Bulk::FUN_1000371a(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCSubwizStateFor);
  thunk_FUN_10ebc110();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000372e; body size 5 bytes.
#line 1 "ENTRY_1000372e"

void FUN_1000372e(void)

{
  thunk_FUN_10792d60();
  return;
}


// Reference entry 10003733; body size 5 bytes.
#line 1 "ENTRY_10003733"

SCStr * FUN_10003733(SCStr *param_1,int param_2)

{
  undefined1 auStack_c [8];
  int iStack_4;
  
  thunk_FUN_10d9efd0(auStack_c,&param_2);
  if (((*(char *)(iStack_4 + 0xd) == '\0') && (*(int *)(iStack_4 + 0x10) <= (int)(param_2))) &&
     (iStack_4 != DAT_121a63bc)) {
    ((SCStr *)(param_1))->op_ctor((SCStr *)(iStack_4 + 0x14));
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("INVALID");
  return (SCStr *)(param_1);
}


// Reference entry 10003738; body size 5 bytes.
#line 1 "ENTRY_10003738"

SCStr * FUN_10003738(SCStr *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar3 = (int *)((int *)thunk_FUN_10c97560(&piStack_14));
  piVar1 = (int *)((int *)*piVar3);

  *piVar3 = (int)(0);
  if ((int *)(piVar1) == (int *)0x0) {
    piVar3 = (int *)((int *)0x0);
  }
  else {
    piVar3 = (int *)((int *)(**(code **)(*piVar1 + 0xc))(uVar2));
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  if ((int *)(piStack_14) != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))();
  }
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  if ((int *)(piVar1) != (int *)0x0) {
    (**(code **)(*piVar1 + 0xe4))(param_1);

    if ((int *)(piVar3) != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }

    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("");

  if ((int *)(piVar3) != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }

  return (SCStr *)(param_1);

 } catch (...) { }
}


// Reference entry 1000373d; body size 5 bytes.
#line 1 "ENTRY_1000373d"

undefined4 * __thiscall Recovered_Bulk::FUN_1000373d(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignIn);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignIn);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCHideOfflineDeviceSignIn);
  piVar1 = (int *)((int *)param_1[0xb]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[10] = (undefined4)(0);
    param_1[0xb] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar1 = (int *)((int *)param_1[8]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[7] = (undefined4)(0);
    param_1[8] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)0x0) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 10003742; body size 5 bytes.
#line 1 "ENTRY_10003742"

bool __thiscall Recovered_Bulk::FUN_10003742(int param_2,short *param_3)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x20) + 0xc))());
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x20) + 8))());
      goto LAB_105bfd82;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x24));
LAB_105bfd82:
  if (iVar2 == param_2) {
    *(int*)(param_1 + 0x3c) = (int)((*(int **)(param_1 + 0x20))[0x1123]);
    if (*param_3 == 0) {
      uVar3 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x40))());
      *(undefined4*)(param_1 + 0x38) = (undefined4)(uVar3);
    }
    *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  }
  return (bool)(*(int *)(param_1 + 0x3c) == 200);
}


// Reference entry 10003747; body size 5 bytes.
#line 1 "ENTRY_10003747"

void __thiscall Recovered_Bulk::FUN_10003747(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x18));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1000375b; body size 5 bytes.
#line 1 "ENTRY_1000375b"

void __thiscall Recovered_Bulk::FUN_1000375b(int param_2)
{
  int param_1 = (int )this;
 try {
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 auStack_146c [320];
  undefined4 uStack_f6c;
  undefined1 *puStack_f68;
  int *piStack_f64;
  uint uStack_f60;
  undefined1 auStack_f4c [4];
  int iStack_f48;
  int iStack_f44;
  int iStack_f40;
  char cStack_f39;
  void *pvStack_f38;
  undefined1 *puStack_f34;
  undefined4 uStack_f30;
  undefined4 auStack_f2c [646];
  undefined1 auStack_514 [1292];
  uint uStack_8;


  uStack_f60 = (uint)(DAT_12126b84 ^ (uint)auStack_f2c);

  piStack_f64 = (int *)((int *)0x1113552e);
  iStack_f40 = (int)(param_1);
  uStack_8 = (uint)(uStack_f60);
  cVar2 = (char)(thunk_FUN_110d5410());
  if (cVar2 != '\0') goto LAB_111358aa;
  if (*(int *)(param_2 + 0x1c) == 0) {
LAB_11135557:
    if (*(int *)(param_2 + 0x1c) != 0) {
      piStack_f64 = (int *)((int *)0x11135569);
      cVar2 = (char)(FUN_10091f7e());
      if (cVar2 != '\0') goto LAB_1113556d;
    }
    iStack_f44 = (int)(2);
  }
  else {
    piStack_f64 = (int *)((int *)0x11135553);
    cVar2 = (char)((**(code **)(*(int *)(*(int *)(param_2 + 0x1c) + 0x378) + 4))());
    if (cVar2 != '\0') goto LAB_11135557;
LAB_1113556d:
    if (*(int *)(param_2 + 0x1c) != 0) {
      piStack_f64 = (int *)((int *)0x1113557f);
      cVar2 = (char)(thunk_FUN_11457240());
      if (cVar2 != '\0') {
        iStack_f44 = (int)(3);
        goto LAB_111355d0;
      }
    }
    if (*(int *)(param_2 + 0x1c) == 0) {
LAB_111355a2:
      if (*(int *)(param_2 + 0x1c) == 0) goto LAB_111358aa;
      piStack_f64 = (int *)((int *)0x111355b8);
      cVar2 = (char)(thunk_FUN_114572e0());
      if (cVar2 == '\0') goto LAB_111358aa;
    }
    else {
      piStack_f64 = (int *)((int *)0x1113559e);
      cVar2 = (char)(FUN_10091f7e());
      if (cVar2 == '\0') goto LAB_111355a2;
    }
    iStack_f44 = (int)(6);
  }
LAB_111355d0:
  if (*(int *)(param_1 + 0x20) == 2) {
    piStack_f64 = (int *)((int *)0x111355e6);
    cVar2 = (char)(thunk_FUN_110d3140());
    if (cVar2 != '\0') {
      piStack_f64 = (int *)((int *)0x111355f5);
      cVar2 = (char)(thunk_FUN_110d55a0());
      if (cVar2 == '\0') {
        iVar4 = (int)(*(int *)(param_1 + 4));
        piStack_f64 = (int *)((int *)auStack_f4c);
        puStack_f68 = (undefined1 *)((undefined1 *)0x1113560b);
        puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_110d9820());

        puStack_f68 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)*puVar3 != (undefined1 *)((0x0))) {
          puStack_f68 = (undefined1 *)((undefined1 *)*puVar3);
        }
        piStack_f64 = (int *)((int *)0x1);

        iVar4 = (int)((**(code **)(*(int *)(iVar4 + 0x1c) + 4))());

        piStack_f64 = (int *)((int *)0x1113563b);
        iStack_f48 = (int)(iVar4);
        thunk_FUN_101ba300();
        if (iVar4 == 0) {
          piStack_f64 = (int *)((int *)0x1113581f);
          cVar2 = (char)(FUN_1005a7b3());
          if (cVar2 == '\0') {
LAB_11135832:
            cStack_f39 = (char)('\0');
          }
          else {
            piStack_f64 = (int *)((int *)0x1113582a);
            cVar2 = (char)(thunk_FUN_110d8c40());
            cStack_f39 = (char)('\x01');
            if (cVar2 == '\0') goto LAB_11135832;
          }
          piStack_f64 = (int *)((int *)(param_2 + 0x4fa));
          puStack_f68 = (undefined1 *)((undefined1 *)0x1113584b);
          iVar4 = (int)((**(code **)(*(int *)(*(int *)(iStack_f40 + 4) + 0x1c) + 0xc))());
          if ((cStack_f39 == '\0') && (iVar4 != 0)) {
            pcVar6 = (char *)("");
            if (*(char **)(param_2 + 0x5c) != (char *)((0x0))) {
              pcVar6 = (char *)(*(char **)(param_2 + 0x5c));
            }
            pcVar5 = (char *)((char *)(iVar4 + 0x44));
            do {
              if (((*pcVar5 != *pcVar6) || (*pcVar5 == '\0')) ||
                 (pcVar1 = pcVar5 + 1, *pcVar1 != pcVar6[1])) break;
              pcVar5 = (char *)(pcVar5 + 2);
              pcVar6 = (char *)(pcVar6 + 2);
            } while (*pcVar1 != '\0');
          }
          goto LAB_111358aa;
        }
        piStack_f64 = (int *)((int *)0x1113564a);
        cVar2 = (char)(thunk_FUN_110d3140());
        param_1 = (int)(iStack_f40);
        if (cVar2 != '\0') {
          puVar3 = (undefined4 *)((undefined4 *)(param_2 + 0x564));
          puVar7 = (undefined4 *)(auStack_f2c);
          for (iVar4 = (int)(0x143); iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = (undefined4)(*puVar3);
            puVar3 = (undefined4 *)(puVar3 + 1);
            puVar7 = (undefined4 *)(puVar7 + 1);
          }

          puVar3 = (undefined4 *)((undefined4 *)(param_2 + 0x564));
          puVar7 = (undefined4 *)(auStack_146c);
          for (iVar4 = (int)(0x143); iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = (undefined4)(*puVar3);
            puVar3 = (undefined4 *)(puVar3 + 1);
            puVar7 = (undefined4 *)(puVar7 + 1);
          }
          thunk_FUN_1112ccd0();
          piStack_f64 = (int *)((int *)0x1113568f);
          thunk_FUN_1127a080();
          puVar3 = (undefined4 *)((undefined4 *)(iStack_f48 + 0x564));
          puVar7 = (undefined4 *)(auStack_f2c);
          for (iVar4 = (int)(0x143); iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = (undefined4)(*puVar3);
            puVar3 = (undefined4 *)(puVar3 + 1);
            puVar7 = (undefined4 *)(puVar7 + 1);
          }
          *(unsigned char *)((char *)&uStack_f30 + 0) = 4;
          puVar3 = (undefined4 *)((undefined4 *)(iStack_f48 + 0x564));
          puVar7 = (undefined4 *)(auStack_146c);
          for (iVar4 = (int)(0x143); iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = (undefined4)(*puVar3);
            puVar3 = (undefined4 *)(puVar3 + 1);
            puVar7 = (undefined4 *)(puVar7 + 1);
          }
          thunk_FUN_1112ccd0();
          uStack_f30 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_f30 + 1)) << 8 | (uint)(6)));
          piStack_f64 = (int *)((int *)0x111356d2);
          thunk_FUN_1127a080();
          piStack_f64 = (int *)((int *)auStack_514);
          puStack_f68 = (undefined1 *)((undefined1 *)0x111356e4);
          cVar2 = (char)(thunk_FUN_1127c920());
          if (cVar2 == '\0') {
            piStack_f64 = (int *)((int *)auStack_514);
            puStack_f68 = (undefined1 *)((undefined1 *)0x111356fe);
            cVar2 = (char)(thunk_FUN_1112fc70());
            if (cVar2 == '\0') {
              piStack_f64 = (int *)((int *)0x11135711);
              thunk_FUN_1127a080();

              piStack_f64 = (int *)((int *)0x11135723);
              thunk_FUN_1127a080();
              param_1 = (int)(iStack_f40);
              goto LAB_11135729;
            }
          }
          piStack_f64 = (int *)((int *)0x11135806);
          thunk_FUN_1127a080();
          piStack_f64 = (int *)((int *)0x11135811);
          thunk_FUN_1127a080();
          goto LAB_111358aa;
        }
      }
    }
  }
LAB_11135729:
  if ((iStack_f44 == 6) && (*(int *)(param_2 + 0x1c) != 0)) {
    piStack_f64 = (int *)((int *)0x1113574b);
    cVar2 = (char)(FUN_10091f7e());
    if (cVar2 != '\0') {
      piStack_f64 = (int *)((int *)0x1113575a);
      cVar2 = (char)(thunk_FUN_110d3140());
      if (cVar2 != '\0') {
        iVar4 = (int)(*(int *)(param_1 + 4));
        piStack_f64 = (int *)(&iStack_f48);
        puStack_f68 = (undefined1 *)((undefined1 *)0x11135770);
        puVar3 = (undefined4 *)((undefined4 *)thunk_FUN_110d9820());

        puStack_f68 = (undefined1 *)(&DAT_1186d2ee);
        if ((undefined1 *)*puVar3 != (undefined1 *)((0x0))) {
          puStack_f68 = (undefined1 *)((undefined1 *)*puVar3);
        }
        piStack_f64 = (int *)((int *)0x1);

        iVar4 = (int)((**(code **)(*(int *)(iVar4 + 0x1c) + 4))());

        piStack_f64 = (int *)((int *)0x1113579d);
        thunk_FUN_101ba300();
        if (iVar4 == 0) {
          piStack_f64 = (int *)((int *)(param_2 + 0x4fa));
          puStack_f68 = (undefined1 *)((undefined1 *)0x111357ba);
          iVar4 = (int)((**(code **)(*(int *)(*(int *)(iStack_f40 + 4) + 0x1c) + 0xc))());
          if (iVar4 != 0) {
            pcVar6 = (char *)("");
            if (*(char **)(param_2 + 0x5c) != (char *)((0x0))) {
              pcVar6 = (char *)(*(char **)(param_2 + 0x5c));
            }
            pcVar5 = (char *)((char *)(iVar4 + 0x44));
            do {
              if (((*pcVar5 != *pcVar6) || (*pcVar5 == '\0')) ||
                 (pcVar1 = pcVar5 + 1, *pcVar1 != pcVar6[1])) break;
              pcVar5 = (char *)(pcVar5 + 2);
              pcVar6 = (char *)(pcVar6 + 2);
            } while (*pcVar1 != '\0');
          }
        }
      }
    }
  }
LAB_111358aa:

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10003765; body size 5 bytes.
#line 1 "ENTRY_10003765"

SCStr * FUN_10003765(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCServiceDescriptorManager");
  return (SCStr *)(param_1);
}


// Reference entry 1000376f; body size 5 bytes.
#line 1 "ENTRY_1000376f"

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1000376f(int param_1)

{
 try {
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iStack_64;
  undefined1 auStack_60 [4];
  int aiStack_5c [5];
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined1 uStack_8;
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&iStack_64);
  if ((*(int *)(param_1 + 8) == -1) || (*(int *)(param_1 + 0x10) != 0)) {
LAB_1124ada0:
    thunk_FUN_1148ac28();
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    iStack_64 = (int)(4);
    iVar2 = (int)(Ordinal_7(*(int *)(param_1 + 8),0xffff,0x1007,aiStack_5c,&iStack_64));
    if (((iVar2 == 0) && (iStack_64 == 4)) && (aiStack_5c[0] == 0)) {
      *(undefined1*)(param_1 + 0xc) = (undefined1)(1);
      thunk_FUN_1124b070();
    }
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined4*)(param_1 + 0x10) = (undefined4)(0x81000004);
      goto LAB_1124ada0;
    }
    if (*(char *)(param_1 + 0x4424) != '\0') {


      puVar3 = (undefined4 *)(&uStack_28);










      auStack_60[0] = (undefined1)(0);




      aiStack_5c[1] = (int)(0);
      aiStack_5c[2] = (int)(0);
      aiStack_5c[3] = (int)(0);
      aiStack_5c[4] = (int)(0);
      cVar1 = (char)((**(code **)(*(int *)(*(int *)(param_1 + 4) + 4) + 4))
                        (auStack_60,&uStack_44,puVar3,aiStack_5c + 1));
      if (cVar1 != '\0') {
        thunk_FUN_112ea860(param_1 + 0x4430,puVar3,0,aiStack_5c + 2,&uStack_38,&stack0xffffff98);
      }
      thunk_FUN_1124d430();
      thunk_FUN_1148ac28();
      return;
    }
  }
  else if (*(char *)(param_1 + 0x4424) != '\0') {
    if (*(char *)(param_1 + 0x4425) == '\0') {
      thunk_FUN_1124bce0();
      thunk_FUN_1148ac28();
      return;
    }
    if (*(char *)(param_1 + 0x4428) == '\0') {
      thunk_FUN_1124be90();
      thunk_FUN_1148ac28();
      return;
    }
    thunk_FUN_1124bde0();
    thunk_FUN_1148ac28();
    return;
  }
  thunk_FUN_1124b880();
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10003779; body size 5 bytes.
#line 1 "ENTRY_10003779"

void __fastcall FUN_10003779(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  return;
}


// Reference entry 1000378d; body size 5 bytes.
#line 1 "ENTRY_1000378d"

undefined1 __fastcall FUN_1000378d(int param_1)

{
 try {
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *(undefined1*)(param_1 + 0xc) = (undefined1)(0);
  bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a77ec));
  if (bVar1) {
    *(undefined1*)(param_1 + 0xc) = (undefined1)(1);
    FUN_1006aac8(uVar2);
    uVar3 = (undefined1)(1);
  }
  else {
    bVar1 = (bool)(((SCStr *)((SCStr *)&stack0x00000004))->op_eq((SCStr *)&DAT_121a7824));
    if (bVar1) {
      FUN_1006aac8(uVar2);
      uVar3 = (undefined1)(1);
    }
    else {
      uVar3 = (undefined1)(0);
    }
  }

  ((SCStr *)((SCStr *)&stack0x00000004))->int_release();

  return (undefined1)(uVar3);

 } catch (...) { }
}


// Reference entry 1000379c; body size 5 bytes.
#line 1 "ENTRY_1000379c"

void FUN_1000379c(void)

{
  thunk_FUN_10e9cb90();
  return;
}


// Reference entry 100037ba; body size 5 bytes.
#line 1 "ENTRY_100037ba"

int __thiscall Recovered_Bulk::FUN_100037ba(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("forcePageIndicatorOverlay");

  (**(code **)(**(int **)(param_1 + 4) + 0x40))(&iStack_14,param_2,uVar1);

  ((SCStr *)((SCStr *)&iStack_14))->int_release();

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 100037bf; body size 5 bytes.
#line 1 "ENTRY_100037bf"

undefined1 FUN_100037bf(void)

{
  return (undefined1)(0);
}


// Reference entry 100037c4; body size 5 bytes.
#line 1 "ENTRY_100037c4"

undefined1 FUN_100037c4(void)

{
  return (undefined1)(1);
}


// Reference entry 100037c9; body size 5 bytes.
#line 1 "ENTRY_100037c9"

void FUN_100037c9(void)

{
  thunk_FUN_10603120();
  return;
}


// Reference entry 100037ce; body size 5 bytes.
#line 1 "ENTRY_100037ce"

void __fastcall FUN_100037ce(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 100037d3; body size 5 bytes.
#line 1 "ENTRY_100037d3"

void FUN_100037d3(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 100037dd; body size 5 bytes.
#line 1 "ENTRY_100037dd"

void FUN_100037dd(undefined4 *param_1,int param_2)

{
 try {
  undefined4 *_Dst;
  char cVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  size_t _Size;
  bool bVar9;
  uint auStack_56c [322];
  int aiStack_64 [13];
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uStack_14 = (uint)(DAT_12126b84);

  puVar2 = (uint *)((uint *)thunk_FUN_1127bf70(uStack_14));
  puVar6 = (uint *)(auStack_56c);
  for (iVar5 = (int)(0x142); iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = (uint)(*puVar2);
    puVar2 = (uint *)(puVar2 + 1);
    puVar6 = (uint *)(puVar6 + 1);
  }
  uVar7 = (uint)(0);

  if (auStack_56c[1] != 0) {
    do {
      piVar3 = (int *)((int *)thunk_FUN_1127a400(uVar7));
      aiStack_64[0] = (int)(*piVar3);
      aiStack_64[1] = (int)(piVar3[1]);
      aiStack_64[2] = (int)(piVar3[2]);
      aiStack_64[3] = (int)(piVar3[3]);
      aiStack_64[4] = (int)(piVar3[4]);
      aiStack_64[5] = (int)(piVar3[5]);
      aiStack_64[6] = (int)(piVar3[6]);
      aiStack_64[7] = (int)(piVar3[7]);
      aiStack_64[8] = (int)(piVar3[8]);
      aiStack_64[9] = (int)(piVar3[9]);
      aiStack_64[10] = (int)(piVar3[10]);
      aiStack_64[0xb] = (int)(piVar3[0xb]);
      aiStack_64[0xc] = (int)(piVar3[0xc]);
      uStack_30 = (undefined4)(piVar3[0xd]);
      iStack_2c = (int)(piVar3[0xe]);
      iStack_28 = (int)(piVar3[0xf]);
      iVar5 = (int)(0);
      iStack_24 = (int)(piVar3[0x10]);
      iStack_20 = (int)(piVar3[0x11]);
      iStack_1c = (int)(piVar3[0x12]);
      iStack_18 = (int)(piVar3[0x13]);
      do {
        if (aiStack_64[iVar5] == param_2) {
          *(unsigned char *)((char *)&uStack_30 + 0) = (char)piVar3[0xd];
          bVar9 = (bool)((char)uStack_30 != '\0');
          if (bVar9) {
            pcVar8 = (char *)((char *)&uStack_30);
            do {
              cVar1 = (char)(*pcVar8);
              pcVar8 = (char *)(pcVar8 + 1);
            } while (cVar1 != '\0');
            _Size = (size_t)((int)pcVar8 - ((int)&uStack_30 + 1));
            puVar4 = (undefined4 *)((undefined4 *)thunk_FUN_1148b586(_Size + 0x11));
            _Dst = (undefined4 *)(puVar4 + 4);
            *puVar4 = (undefined4)(1);
            puVar4[3] = (undefined4)(_Size);
            puVar4[2] = (undefined4)(0);
            puVar4[1] = (undefined4)(0);
            memcpy(_Dst,&uStack_30,_Size);
            *(undefined1*)((int)_Dst + _Size) = (undefined1)(0);
            *param_1 = (undefined4)(_Dst);
            goto LAB_1112f046;
          }
          goto LAB_1112f03a;
        }
        iVar5 = (int)(iVar5 + 1);
      } while (iVar5 < 0xd);
      uVar7 = (uint)(uVar7 + 1);
    } while (uVar7 < auStack_56c[1]);
  }
LAB_1112f03a:
  *param_1 = (undefined4)(0);
LAB_1112f046:
  thunk_FUN_1127a080();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 100037e2; body size 5 bytes.
#line 1 "ENTRY_100037e2"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_100037e2(int param_1)

{
 try {
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  SCStr *this_;
  undefined1 *puVar6;
  char *pcVar7;
  undefined4 uStack_16d0;
  undefined4 uStack_16cc;
  undefined1 *puStack_16c8;
  void *pvStack_16c4;
  undefined1 *puStack_16c0;
  undefined4 uStack_16bc;
  undefined1 auStack_16b8 [1712];
  undefined1 auStack_1008 [3068];
  char acStack_40c [1028];
  uint uStack_8;

  uStack_8 = (uint)(DAT_12126b84 ^ (uint)auStack_16b8);


  this_ = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if (*(SCStr **)(param_1 + 0xc) != (SCStr *)((0x0))) {
    this_ = (SCStr *)(*(SCStr **)(param_1 + 0xc));
  }
  ((SCStr *)(this_))->format((char *)&uStack_16d0);
  uVar2 = (undefined4)(thunk_FUN_112782b0());
  thunk_FUN_11276420(uVar2);
  *(unsigned char *)((char *)&uStack_16bc + 0) = 1;
  ((SCStr *)((SCStr *)&uStack_16cc))->int_allocRep("/ctrlMetricsConfig.xml");
  *(unsigned char *)((char *)&uStack_16bc + 0) = 2;
  thunk_FUN_101a2e90(&puStack_16c8,&uStack_16d0,&uStack_16cc);
  *(unsigned char *)((char *)&uStack_16bc + 0) = 5;
  ((SCStr *)((SCStr *)&uStack_16cc))->int_release();

  puVar6 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(puStack_16c8) != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)(puStack_16c8);
  }
  uStack_16bc = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_16bc + 1)) << 8 | (uint)(4)));
  iVar3 = (int)(thunk_FUN_1145d170(puVar6,0));
  if (iVar3 < 0) {
    puVar6 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puStack_16c8) != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)(puStack_16c8);
    }
    thunk_FUN_112af4e0("SCReportManager",1,"Failed to open local config file at %s",puVar6);
  }
  else {
    thunk_FUN_112af4e0("SCReportManager",2,"Successfully opened local config file");
    do {
      iVar4 = (int)(_read(iVar3,auStack_1008,0x1000));
      thunk_FUN_11277050(auStack_1008,iVar4);
    } while (iVar4 != 0);
    _close(iVar3);
  }
  if (DAT_121a0fd4 == 0) {
    if (DAT_121a0fd8 == '\0') {
      pvVar5 = (void *)(operator_new(0xfc));
      *(unsigned char *)((char *)&uStack_16bc + 0) = 6;
      if ((void *)(pvVar5) == (void *)0x0) {
        DAT_121a0fd4 = (int)(0);
      }
      else {
        DAT_121a0fd4 = (int)(thunk_FUN_103056e0());
      }
      uStack_16bc = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_16bc + 1)) << 8 | (uint)(4)));
    }
    if (DAT_121a0fd4 == 0) goto LAB_1030b5a1;
  }
  iVar3 = (int)(DAT_121a0fd4);
  thunk_FUN_11261450(acStack_40c,0x401,"/ctrlMetricsConfig.xml",0xf);
  pcVar7 = (char *)(acStack_40c);
  do {
    cVar1 = (char)(*pcVar7);
    pcVar7 = (char *)(pcVar7 + 1);
  } while (cVar1 != '\0');
  ((SCStr *)((SCStr *)(iVar3 + 0x9c)))->int_release();
  ((SCStr *)((SCStr *)(iVar3 + 0x9c)))->int_allocRep(acStack_40c,(int)pcVar7 - (int)(acStack_40c + 1));
  thunk_FUN_1030b7d0(param_1);
LAB_1030b5a1:
  uStack_16bc = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_16bc + 1)) << 8 | (uint)(7)));
  ((SCStr *)((SCStr *)&puStack_16c8))->int_release();
  puStack_16c8 = (undefined1 *)((undefined1 *)0x0);
  thunk_FUN_112765b0();

  ((SCStr *)((SCStr *)&uStack_16d0))->int_release();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 100037f6; body size 5 bytes.
#line 1 "ENTRY_100037f6"
void FUN_100037f6(int *param_1){
                    
  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


// Reference entry 10003800; body size 5 bytes.
#line 1 "ENTRY_10003800"

void FUN_10003800(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_11448780(*param_1,*(undefined2 *)((int)param_1 + 6),param_2,param_3);
  return;
}


// Reference entry 10003814; body size 5 bytes.
#line 1 "ENTRY_10003814"

void FUN_10003814(undefined4 **param_1,int param_2,int param_3,undefined4 param_4)

{
 try {
  undefined4 *puVar1;
  void **ppvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 **ppuVar5;
  int iVar6;
  int iVar7;
  int iStack_20;
  undefined4 **ppuStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);
  uVar4 = (uint)(param_2 - (int)param_1);
  ppvVar2 = (void **)(&pvStack_10);

  iVar6 = (int)(param_2);
  while( true ) {

    if ((int)(uVar4 & 0xfffffffc) < 0x81) {
      thunk_FUN_11072a10(param_1,iVar6,param_4);

      return;
    }
    if (param_3 < 1) break;
    thunk_FUN_11073270(&iStack_20,param_1,iVar6,param_4);
    param_3 = (int)((param_3 >> 1) + (param_3 >> 2));
    if ((int)(iStack_20 - (int)param_1 & 0xfffffffcU) <
        (int)(iVar6 - (int)ppuStack_1c & 0xfffffffcU)) {
      thunk_FUN_11074230(param_1,iStack_20,param_3,param_4);
      param_1 = (undefined4 **)(ppuStack_1c);
    }
    else {
      thunk_FUN_11074230(ppuStack_1c,iVar6,param_3,param_4);
      param_2 = (int)(iStack_20);
      iVar6 = (int)(iStack_20);
    }
    uVar4 = (uint)(iVar6 - (int)param_1);

  }
  iVar7 = (int)(iVar6 - (int)param_1 >> 2);
  ppuVar5 = (undefined4 **)((undefined4 **)(iVar6 - (int)param_1 >> 3));
  ppuStack_1c = (undefined4 **)(ppuVar5);
  if (0 < (int)ppuVar5) {
    ppuStack_1c = (undefined4 **)(param_1 + (int)ppuVar5);
    do {
      ppuStack_1c = (undefined4 **)(ppuStack_1c + -1);
      puStack_14 = (undefined4 *)((undefined4 *)0x0);
      ppuVar5 = (undefined4 **)((undefined4 **)((int)ppuVar5 + -1));
      if (((undefined4 **)((&puStack_14)) != (undefined4 **)(ppuStack_1c)) &&
         (puStack_14 = *ppuStack_1c,(undefined4 *)( puStack_14) != (undefined4 *)0x0)) {
        thunk_FUN_1123fce0(puStack_14 + 1,uVar3);
      }

      thunk_FUN_11073c00(param_1,ppuVar5,iVar7,&puStack_14,param_4);
      puVar1 = (undefined4 *)(puStack_14);

      if ((((undefined4 *)(puStack_14) != (undefined4 *)0x0) &&
          (iVar6 = thunk_FUN_1123fcd0(puStack_14 + 1), iVar6 == 0)) && ((undefined4 *)(puVar1) != (undefined4 *)0x0)
         ) {
        (**(code **)*puVar1)(1);
      }

      iVar6 = (int)(param_2);
    } while (0 < (int)ppuVar5);
  }
  if (iVar7 < 2) {

    return;
  }
  ppuVar5 = (undefined4 **)((undefined4 **)(iVar6 + -4));
  do {
    puStack_18 = (undefined4 *)((undefined4 *)0x0);
    if (((undefined4 **)((&puStack_18)) != (undefined4 **)(ppuVar5)) && (puStack_18 = *ppuVar5,(undefined4 *)( puStack_18) != (undefined4 *)0x0)) {
      thunk_FUN_1123fce0(puStack_18 + 1,uVar3);
    }

    if ((undefined4 **)(ppuVar5) != (undefined4 **)(param_1)) {
      puVar1 = (undefined4 *)(*ppuVar5);
      if (((undefined4 *)(puVar1) != (undefined4 *)0x0) && (iVar6 = thunk_FUN_1123fcd0(puVar1 + 1), iVar6 == 0)) {
        (**(code **)*puVar1)(1);
      }
      puVar1 = (undefined4 *)(*param_1);
      *ppuVar5 = (undefined4 *)(puVar1);
      if ((undefined4 *)(puVar1) != (undefined4 *)0x0) {
        thunk_FUN_1123fce0(puVar1 + 1);
      }
    }
    thunk_FUN_11073c00(param_1,0,-(int)param_1 + (int)ppuVar5 >> 2,&puStack_18,param_4);
    puVar1 = (undefined4 *)(puStack_18);

    if ((((undefined4 *)(puStack_18) != (undefined4 *)0x0) &&
        (iVar6 = thunk_FUN_1123fcd0(puStack_18 + 1), iVar6 == 0)) && ((undefined4 *)(puVar1) != (undefined4 *)0x0))
    {
      (**(code **)*puVar1)(1);
    }
    ppuVar5 = (undefined4 **)(ppuVar5 + -1);

  } while (7 < (int)(-(int)param_1 + 4 + (int)ppuVar5 & 0xfffffffcU));

  return;

 } catch (...) { }
}


// Reference entry 1000381e; body size 5 bytes.
#line 1 "ENTRY_1000381e"

int __fastcall FUN_1000381e(int param_1)

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


// Reference entry 10003823; body size 5 bytes.
#line 1 "ENTRY_10003823"

void __fastcall FUN_10003823(int param_1)

{
 try {
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piStack_18;
  SCStr aSStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar4 = (uint)(DAT_12126b84);

  piVar5 = (int *)(operator_new(0x18));

  piStack_18 = (int *)(piVar5);
  if ((int *)(piVar5) == (int *)0x0) {
    piVar6 = (int *)((int *)0x0);
  }
  else {
    ((SCStr *)(aSStack_14))->int_allocRep("PhoneNumber");
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(1)));
    thunk_FUN_1025f580(aSStack_14,*(undefined4 *)(param_1 + 8),
                       -(uint)(param_1 != 0) & param_1 + 0xcU);
    *piVar5 = (int)((int)(uint)&ghidra_vftable_SCMobilePhoneInput);
    piVar6 = (int *)(piVar5);
  }

  if ((int *)(piVar6) != *(int **)(param_1 + 0x10)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x14));
    if ((int *)(piVar1) != (int *)0x0) {
      *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
      *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar4);
    }
    *(int**)(param_1 + 0x10) = (int *)(piVar6);
    if ((int *)(piVar6) == (int *)0x0) {
      *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
    }
    else {
      if (*(code **)(*piVar6 + 0xc) != (code *)((thunk_FUN_102611c0))) {
        piVar6 = (int *)((int *)(**(code **)(*piVar6 + 0xc))());
      }
      *(int**)(param_1 + 0x14) = (int *)(piVar6);
      (**(code **)(*piVar6 + 4))();
    }
  }
  if ((int *)(piVar5) != (int *)0x0) {

    ((SCStr *)(aSStack_14))->int_release();
  }

  ((SCStr *)((SCStr *)&piStack_18))->int_allocRep("PhoneNumberValid");

  iVar2 = (int)(**(int **)(param_1 + 8));
  uVar3 = (undefined1)((**(code **)(**(int **)(param_1 + 0x10) + 0x30))());
  (**(code **)(iVar2 + 0xe4))(&piStack_18,uVar3);

  ((SCStr *)((SCStr *)&piStack_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10003828; body size 5 bytes.
#line 1 "ENTRY_10003828"

void FUN_10003828(void)

{
  thunk_FUN_10def0d0();
  return;
}


// Reference entry 10003832; body size 5 bytes.
#line 1 "ENTRY_10003832"

void __fastcall FUN_10003832(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 10003837; body size 5 bytes.
#line 1 "ENTRY_10003837"

void __fastcall FUN_10003837(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 10003846; body size 5 bytes.
#line 1 "ENTRY_10003846"

undefined4 * __thiscall Recovered_Bulk::FUN_10003846(byte param_2)
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


// Reference entry 10003850; body size 5 bytes.
#line 1 "ENTRY_10003850"

undefined4 * __thiscall Recovered_Bulk::FUN_10003850(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000385f; body size 5 bytes.
#line 1 "ENTRY_1000385f"

void FUN_1000385f(void)

{
  thunk_FUN_106e6870();
  return;
}


// Reference entry 10003869; body size 5 bytes.
#line 1 "ENTRY_10003869"

undefined4 * __fastcall FUN_10003869(undefined4 *param_1)

{
 try {
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  puStack_14 = (undefined4 *)(param_1);
  ((SCStr *)((SCStr *)&puStack_14))->int_allocRep("title");

  iVar1 = (int)(*(int *)*param_1);
  uVar3 = (undefined4)(thunk_FUN_10c5fc80(uVar2));
  (**(code **)(iVar1 + 0x1c))(&puStack_14,uVar3);

  ((SCStr *)((SCStr *)&puStack_14))->int_release();

  return (undefined4 *)(param_1);

 } catch (...) { }
}


// Reference entry 1000387d; body size 5 bytes.
#line 1 "ENTRY_1000387d"

void FUN_1000387d(void)

{
  thunk_FUN_10368770();
  return;
}


// Reference entry 1000388c; body size 5 bytes.
#line 1 "ENTRY_1000388c"
void FUN_1000388c(void){
                    
  (*(code *)(uint)(DAT_121a06c8))(&DAT_1187b440);
  return;
}


// Reference entry 10003896; body size 5 bytes.
#line 1 "ENTRY_10003896"

void __thiscall Recovered_Bulk::FUN_10003896(int *param_2,char param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  thunk_FUN_112a7f50(puVar1);
  piVar2 = (int *)((int *)param_1[0x126]);
  piVar4 = (int *)((int *)0x0);
  while (piVar3 = piVar4, piVar4 = piVar2,(int *)( piVar4) != (int *)0x0) {
    piVar2 = (int *)((int *)piVar4[0x36]);
    if ((int *)*piVar4 == (int *)((param_2))) {
      if ((int *)(piVar3) == (int *)0x0) {
        param_1[0x126] = (undefined4)(piVar2);
      }
      else {
        piVar3[0x36] = (int)((int)piVar2);
      }
      (**(code **)*param_1)(piVar4);
      thunk_FUN_112a8010(puVar1);
      return;
    }
  }
  for (piVar2 = (int *)((int *)param_1[0x127]);(int *)( piVar2) != (int *)0x0; piVar2 = (int *)piVar2[0x32]) {
    if ((int *)*piVar2 == (int *)((param_2))) goto LAB_1123c06b;
  }
  puVar5 = (undefined4 *)(operator_new(0xcc));
  if ((undefined4 *)(puVar5) == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)((undefined4 *)0x0);
  }
  else {
    *(undefined1*)(puVar5 + 0x31) = (undefined1)(0);
    puVar5[0x32] = (undefined4)(0);
  }
  *puVar5 = (undefined4)(param_2);
  uVar6 = (undefined4)((**(code **)(*(int *)(*(int *)(*param_2 + 4) + (int)param_2) + 0x3c))());
  thunk_FUN_1145c250(puVar5 + 1,uVar6,0xc0);
  puVar5[0x32] = (undefined4)(0);
  *(char*)(puVar5 + 0x31) = (char)(param_3);
  puVar5[0x32] = (undefined4)(param_1[0x127]);
  param_1[0x127] = (undefined4)(puVar5);
LAB_1123c06b:
  thunk_FUN_112a8010(puVar1);
  if (param_3 == '\0') {
    return;
  }
                    
                    
  (**(code **)(*(int *)param_1[1] + 4))();
  return;
}


// Reference entry 100038a5; body size 5 bytes.
#line 1 "ENTRY_100038a5"

int __fastcall FUN_100038a5(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int **)(param_1 + 4));
  piVar2 = (int *)(piVar1);
  if (*piVar1 != 0) {
    piVar2 = (int *)((int *)0x0);
  }
  if (((int *)(piVar2) == (int *)0x0) || (iVar3 = piVar2[0x1b], iVar3 == 0)) {
    iVar3 = (int)(piVar1[0xd]);
  }
  return (int)(iVar3);
}


// Reference entry 100038c3; body size 5 bytes.
#line 1 "ENTRY_100038c3"

void FUN_100038c3(void)

{
  thunk_FUN_10c69080();
  return;
}


// Reference entry 100038c8; body size 5 bytes.
#line 1 "ENTRY_100038c8"

undefined4 * __thiscall Recovered_Bulk::FUN_100038c8(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetLineInLevelAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetLineInLevelAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetLineInLevelAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100038d7; body size 5 bytes.
#line 1 "ENTRY_100038d7"

void __fastcall FUN_100038d7(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 100038e6; body size 5 bytes.
#line 1 "ENTRY_100038e6"

undefined4 FUN_100038e6(undefined4 param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined **appuStack_80 [8];
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  int *piStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  SCStr aSStack_34 [8];
  undefined4 auStack_2c [2];
  undefined4 auStack_24 [2];
  undefined4 auStack_1c [2];
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uStack_14 = (undefined4)(thunk_FUN_10c5f450(aSStack_34,0x2099,&DAT_11882ff0,
                                 DAT_12126b84 ^ (uint)&stack0xfffffffc));

  uVar3 = (undefined4)(thunk_FUN_10c5f450(auStack_2c,0x2bed,&DAT_11882ff0));
  *(unsigned char *)((char *)&uStack_8 + 0) = 1;
  uVar4 = (undefined4)(thunk_FUN_10c5f450(auStack_24,0x2bea,&DAT_11882ff0));
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  uVar5 = (undefined4)(thunk_FUN_10c5f450(auStack_1c,0x2be9,&DAT_11882ff0));
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  thunk_FUN_10ec1250();
  uVar11 = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_8 + 0) = 4;
  uVar6 = (undefined4)(uStack_14);
  thunk_FUN_10eceeb0(uVar5);
  thunk_FUN_10ecbaa0(uVar4);
  thunk_FUN_10ecbc60(uVar3);
  thunk_FUN_10ecb760(uVar6);
  uVar6 = (undefined4)(thunk_FUN_10eca460(uVar11));
  thunk_FUN_105f6290(uVar6);
  ppuStack_60 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_58 = (int *)((int *)0x0);
  piStack_54 = (int *)((int *)0x0);
  iStack_50 = (int)(0);
  puStack_4c = (undefined4 *)((undefined4 *)0x0);
  puStack_48 = (undefined4 *)((undefined4 *)0x0);
  iStack_44 = (int)(0);
  *(unsigned char *)((char *)&uStack_8 + 0) = 6;
  uVar6 = (undefined4)(thunk_FUN_106050a0(appuStack_80));
  thunk_FUN_105f60e0(uVar6);
  puVar2 = (undefined4 *)(puStack_48);
  *(unsigned char *)((char *)&uStack_8 + 0) = 5;
  puVar8 = (undefined4 *)(puStack_4c);
  if ((undefined4 *)(puStack_4c) != (undefined4 *)0x0) {
    for (;(undefined4 *)((puVar8)) != (undefined4 *)(puVar2); puVar8 = puVar8 + 8) {
      (**(code **)*puVar8)(0);
    }
    uVar7 = (uint)(iStack_44 - (int)puStack_4c & 0xffffffe0);
    puVar8 = (undefined4 *)(puStack_4c);
    if (0xfff < uVar7) {
      puVar8 = (undefined4 *)((undefined4 *)puStack_4c[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)puStack_4c + (-4 - (int)puVar8))) goto LAB_109efe95;
    }
    thunk_FUN_1148a50e(puVar8,uVar7);
    puStack_4c = (undefined4 *)((undefined4 *)0x0);
    puStack_48 = (undefined4 *)((undefined4 *)0x0);
    iStack_44 = (int)(0);
  }
  piVar10 = (int *)(piStack_54);
  if ((int *)(piStack_58) != (int *)0x0) {
    if ((int *)(piStack_58) != (int *)(piStack_54)) {
      piVar9 = (int *)(piStack_58 + 1);
      do {
        *(unsigned char *)((char *)&uStack_8 + 0) = 7;
        ((SCStr *)((SCStr *)(piVar9 + 1)))->int_release();
        piVar9[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar9);
        *(unsigned char *)((char *)&uStack_8 + 0) = 8;
        if ((int *)(piVar1) != (int *)0x0) {
          piVar9[-1] = (int)(0);
          *piVar9 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&uStack_8 + 0) = 5;
        piVar1 = (int *)(piVar9 + 2);
        piVar9 = (int *)(piVar9 + 3);
      } while ((int *)(piVar1) != (int *)(piVar10));
    }
    uVar7 = (uint)(((iStack_50 - (int)piStack_58) / 0xc) * 0xc);
    piVar10 = (int *)(piStack_58);
    if (0xfff < uVar7) {
      piVar10 = (int *)((int *)piStack_58[-1]);
      uVar7 = (uint)(uVar7 + 0x23);
      if (0x1f < (uint)((int)piStack_58 + (-4 - (int)piVar10))) {
LAB_109efe95:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(piVar10,uVar7);
    piStack_58 = (int *)((int *)0x0);
    piStack_54 = (int *)((int *)0x0);
    iStack_50 = (int)(0);
  }
  ppuStack_60 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_80[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_8 + 0) = 9;
  ((SCStr *)((SCStr *)&uStack_38))->int_release();
  piVar10 = (int *)(piStack_3c);

  *(unsigned char *)((char *)&uStack_8 + 0) = 10;
  if ((int *)(piStack_3c) != (int *)0x0) {

    piStack_3c = (int *)((int *)0x0);
    (**(code **)(*piVar10 + 8))();
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xb;
  ((SCStr *)((SCStr *)auStack_1c))->int_release();
  auStack_1c[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_8 + 0) = 0xc;
  ((SCStr *)((SCStr *)auStack_24))->int_release();
  auStack_24[0] = (undefined4)(0);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0xd)));
  ((SCStr *)((SCStr *)auStack_2c))->int_release();
  auStack_2c[0] = (undefined4)(0);

  ((SCStr *)(aSStack_34))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 100038f0; body size 5 bytes.
#line 1 "ENTRY_100038f0"

undefined4 * __thiscall Recovered_Bulk::FUN_100038f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a282c = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003904; body size 5 bytes.
#line 1 "ENTRY_10003904"

undefined4 __thiscall Recovered_Bulk::FUN_10003904(int *param_2,int param_3,int param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if (param_4 != 0) {
    if ((param_4 == 1) || (iVar6 = 0x144, param_4 != 2)) {
      iVar6 = (int)(0x138);
    }
    if ((*(int *)(iVar6 + 4 + param_1) - *(int *)(iVar6 + param_1)) / 0x14 != 0) {


      iStack_14 = (int)(param_1);
      iVar4 = (int)((**(code **)(*param_2 + 0x14))(DAT_12126b84 ^ (uint)&stack0xfffffffc));
      if (iVar4 != 0) {
        do {
          (**(code **)(*param_2 + 0x1c))(&uStack_18,uStack_24);
          iVar5 = (int)(*(int *)(iVar6 + 4 + param_1) - *(int *)(iVar6 + param_1));
          uVar7 = (uint)(0);
          *(unsigned short *)((char *)&uStack_8 + 1) = 0;
          iVar4 = (int)(iVar5 >> 0x1f);
          if (iVar5 / 0x14 + iVar4 != iVar4) {
            iVar4 = (int)(0);
            while( true ) {
              *(unsigned char *)((char *)&uStack_8 + 0) = 0;
              ((SCStr *)((SCStr *)&uStack_1c))->op_ctor((SCStr *)&uStack_18);
              *(unsigned char *)((char *)&uStack_8 + 0) = 1;
              bVar3 = (bool)(((SCStr *)((SCStr *)&uStack_1c))->op_eq((SCStr *)(*(int *)(iVar6 + iStack_14) + 4 + iVar4)));
              *(unsigned char *)((char *)&uStack_8 + 0) = 2;
              ((SCStr *)((SCStr *)&uStack_1c))->int_release();
              param_1 = (int)(iStack_14);

              *(unsigned char *)((char *)&uStack_8 + 0) = 0;
              if (bVar3) break;
              uVar2 = (uint)((*(int *)(iVar6 + 4 + iStack_14) - *(int *)(iVar6 + iStack_14)) / 0x14);
              if (uVar7 == uVar2 - 1) goto LAB_106c8778;
              uVar7 = (uint)(uVar7 + 1);
              iVar4 = (int)(iVar4 + 0x14);
              if (uVar2 <= uVar7) goto LAB_106c86f9;
            }
            iVar4 = (int)(*(int *)(iVar6 + iStack_14) + uVar7 * 0x14);
            piVar1 = (int *)(*(int **)(iVar4 + 0xc));
            iStack_20 = (int)(*piVar1);
            if ((int *)(int *)(iStack_20) == (int *)((piVar1))) goto LAB_106c8778;
            while ((int)(param_3) != *(int *)(iStack_20 + 0x10)) {
              ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                            *)&iStack_20))->op_inc();
              if ((int)(iStack_20) == *(int *)(iVar4 + 0xc)) {
LAB_106c8778:

                ((SCStr *)((SCStr *)&uStack_18))->int_release();

                return (undefined4)(0);
              }
            }
          }
LAB_106c86f9:

          ((SCStr *)((SCStr *)&uStack_18))->int_release();
          uStack_24 = (uint)(uStack_24 + 1);


          uVar7 = (uint)((**(code **)(*param_2 + 0x14))());
        } while (uStack_24 < uVar7);
      }

      return (undefined4)(1);
    }
  }
  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10003909; body size 5 bytes.
#line 1 "ENTRY_10003909"

void FUN_10003909(void)

{
  thunk_FUN_1062f600();
  return;
}


// Reference entry 1000390e; body size 5 bytes.
#line 1 "ENTRY_1000390e"

undefined4 * __thiscall Recovered_Bulk::FUN_1000390e(undefined4 *param_2,int *param_3)
{
  int param_1 = (int )this;
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(**(int **)(param_1 + 200) + 0x14))
                     (&param_3,param_3,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);
  *param_2 = (undefined4)(uVar1);

  if ((int *)(param_3) != (int *)0x0) {
    (**(code **)(*param_3 + 8))();
  }

  return (undefined4 *)(param_2);

 } catch (...) { }
}


// Reference entry 10003931; body size 5 bytes.
#line 1 "ENTRY_10003931"

undefined4 FUN_10003931(void)

{
  return (undefined4)(DAT_121a3428);
}


// Reference entry 10003945; body size 5 bytes.
#line 1 "ENTRY_10003945"
void FUN_10003945(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6){
                    
  if (param_1 != 0) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(param_3);
    *(undefined4*)(param_1 + 0x14) = (undefined4)(param_4);
    *(undefined4*)(param_1 + 0x18) = (undefined4)(param_5);
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_6);
  }
  return;
}


// Reference entry 1000394a; body size 5 bytes.
#line 1 "ENTRY_1000394a"

int __thiscall Recovered_Bulk::FUN_1000394a(byte param_2)
{
  int param_1 = (int )this;
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar1 = (uint)(DAT_12126b84);

  _eh_vector_destructor_iterator_
            ((void *)(param_1 + 0xcb8),0x24,4,(_func_void_void_ptr *)LAB_100831f9);
  thunk_FUN_1128ac30(uVar1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd48);
  }

  return (int)(param_1);

 } catch (...) { }
}


// Reference entry 1000394f; body size 5 bytes.
#line 1 "ENTRY_1000394f"

void __thiscall Recovered_Bulk::FUN_1000394f(undefined *param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char acStack_20 [28];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_28);
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_1145c930(&uStack_28,0);
    thunk_FUN_1145ad70(&uStack_28,*(undefined4 *)(param_1 + 8));
    iVar1 = (int)(*(int *)(param_1 + 4));
    *(undefined4*)(iVar1 + 8) = (undefined4)(uStack_28);
    *(undefined4*)(iVar1 + 0xc) = (undefined4)(uStack_24);
  }
  if ((*(char *)(param_1 + 0xc) != '\0') && (param_3 != 0)) {
    thunk_FUN_1145c720(acStack_20,0x19,"%zx\r\n",param_3);
    pcVar3 = (char *)(acStack_20);
    do {
      cVar2 = (char)(*pcVar3);
      pcVar3 = (char *)(pcVar3 + 1);
    } while (cVar2 != '\0');
    cVar2 = (char)((**(code **)(**(int **)(param_1 + 4) + 4))
                      (acStack_20,(int)pcVar3 - (int)(acStack_20 + 1)));
    if ((cVar2 == '\0') ||
       (cVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))(param_2,param_3), cVar2 == '\0'))
    goto LAB_1126c946;
    param_3 = (int)(2);
    param_2 = (undefined *)(&DAT_1188d36c);
  }
  (**(code **)(**(int **)(param_1 + 4) + 4))(param_2,param_3);
LAB_1126c946:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 1000395e; body size 5 bytes.
#line 1 "ENTRY_1000395e"

void FUN_1000395e(void)

{
  FUN_1118c950();
  return;
}


// Reference entry 10003963; body size 5 bytes.
#line 1 "ENTRY_10003963"

void FUN_10003963(void)

{
  thunk_FUN_110f9de0();
  return;
}


// Reference entry 1000396d; body size 5 bytes.
#line 1 "ENTRY_1000396d"

int * __thiscall Recovered_Bulk::FUN_1000396d(int *param_2,int param_3,int *param_4)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  param_1[1] = (int)(param_1[1] + 1);
  piVar2 = (int *)((int *)*param_1);
  param_4[1] = (int)((int)param_2);
  if ((int *)((param_2)) == (int *)(piVar2)) {
    *piVar2 = (int)((int)param_4);
    piVar2[1] = (int)((int)param_4);
    piVar2[2] = (int)((int)param_4);
    *(undefined1*)(param_4 + 3) = (undefined1)(1);
    return (int *)(param_4);
  }
  if (param_3 == 0) {
    param_2[2] = (int)((int)param_4);
    if ((int *)(param_2) == (int *)piVar2[2]) {
      piVar2[2] = (int)((int)param_4);
    }
  }
  else {
    *param_2 = (int)((int)param_4);
    if ((int *)(param_2) == (int *)*piVar2) {
      *piVar2 = (int)((int)param_4);
    }
  }
  cVar1 = (char)(*(char *)(param_4[1] + 0xc));
  piVar8 = (int *)(param_4);
  do {
    if (cVar1 != '\0') {
      *(undefined1*)(piVar2[1] + 0xc) = (undefined1)(1);
      return (int *)(param_4);
    }
    piVar9 = (int *)((int *)piVar8[1]);
    piVar7 = (int *)(piVar8 + 1);
    piVar10 = (int *)(piVar9 + 1);
    iVar5 = (int)(*(int *)piVar9[1]);
    if ((int *)(piVar9) == (int *)iVar5) {
      iVar5 = (int)(((int *)piVar9[1])[2]);
      if (*(char *)(iVar5 + 0xc) != '\0') {
        piVar3 = (int *)((int *)piVar9[2]);
        if ((int *)((piVar8)) == (int *)(piVar3)) {
          piVar9[2] = (int)(*piVar3);
          if (*(char *)(*piVar3 + 0xd) == '\0') {
            *(int**)(*piVar3 + 4) = (int *)(piVar9);
          }
          piVar3[1] = (int)(*piVar10);
          if ((int *)(piVar9) == (int *)*(int *)(*param_1 + 4)) {
            *(int**)(*param_1 + 4) = (int *)(piVar3);
            *piVar3 = (int)((int)piVar9);
            *piVar10 = (int)((int)piVar3);
            piVar8 = (int *)(piVar9);
            piVar9 = (int *)(piVar3);
            piVar7 = (int *)(piVar10);
          }
          else {
            piVar8 = (int *)((int *)*piVar10);
            if ((int *)(piVar9) == (int *)*piVar8) {
              *piVar8 = (int)((int)piVar3);
              *piVar3 = (int)((int)piVar9);
              *piVar10 = (int)((int)piVar3);
              piVar8 = (int *)(piVar9);
              piVar9 = (int *)(piVar3);
              piVar7 = (int *)(piVar10);
            }
            else {
              piVar8[2] = (int)((int)piVar3);
              *piVar3 = (int)((int)piVar9);
              *piVar10 = (int)((int)piVar3);
              piVar8 = (int *)(piVar9);
              piVar9 = (int *)(piVar3);
              piVar7 = (int *)(piVar10);
            }
          }
        }
        *(undefined1*)(piVar9 + 3) = (undefined1)(1);
        *(undefined1*)(*(int *)(*piVar7 + 4) + 0xc) = (undefined1)(0);
        piVar7 = (int *)(*(int **)(*piVar7 + 4));
        piVar10 = (int *)((int *)*piVar7);
        *piVar7 = (int)(piVar10[2]);
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int**)(piVar10[2] + 4) = (int *)(piVar7);
        }
        piVar10[1] = (int)(piVar7[1]);
        if ((int *)(piVar7) == *(int **)(*param_1 + 4)) {
          *(int**)(*param_1 + 4) = (int *)(piVar10);
          piVar10[2] = (int)((int)piVar7);
        }
        else {
          piVar9 = (int *)((int *)piVar7[1]);
          if ((int *)(piVar7) == (int *)piVar9[2]) {
            piVar9[2] = (int)((int)piVar10);
            piVar10[2] = (int)((int)piVar7);
          }
          else {
            *piVar9 = (int)((int)piVar10);
            piVar10[2] = (int)((int)piVar7);
          }
        }
        goto LAB_10f9d11a;
      }
LAB_10f9d075:
      *(undefined1*)(piVar9 + 3) = (undefined1)(1);
      *(undefined1*)(iVar5 + 0xc) = (undefined1)(1);
      *(undefined1*)(*(int *)(*piVar7 + 4) + 0xc) = (undefined1)(0);
      piVar8 = (int *)(*(int **)(*piVar7 + 4));
    }
    else {
      if (*(char *)(iVar5 + 0xc) == '\0') goto LAB_10f9d075;
      piVar3 = (int *)((int *)*piVar9);
      piVar6 = (int *)(piVar9);
      if ((int *)((piVar8)) == (int *)(piVar3)) {
        *piVar9 = (int)(piVar3[2]);
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          *(int**)(piVar3[2] + 4) = (int *)(piVar9);
        }
        piVar3[1] = (int)(*piVar10);
        if ((int *)(piVar9) == (int *)*(int *)(*param_1 + 4)) {
          *(int**)(*param_1 + 4) = (int *)(piVar3);
        }
        else {
          puVar4 = (undefined4 *)((undefined4 *)*piVar10);
          if ((int *)(piVar9) == (int *)puVar4[2]) {
            puVar4[2] = (undefined4)(piVar3);
          }
          else {
            *puVar4 = (undefined4)(piVar3);
          }
        }
        piVar3[2] = (int)((int)piVar9);
        *piVar10 = (int)((int)piVar3);
        piVar6 = (int *)(piVar3);
        piVar8 = (int *)(piVar9);
        piVar7 = (int *)(piVar10);
      }
      *(undefined1*)(piVar6 + 3) = (undefined1)(1);
      *(undefined1*)(*(int *)(*piVar7 + 4) + 0xc) = (undefined1)(0);
      piVar7 = (int *)(*(int **)(*piVar7 + 4));
      piVar10 = (int *)((int *)piVar7[2]);
      piVar7[2] = (int)(*piVar10);
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int**)(*piVar10 + 4) = (int *)(piVar7);
      }
      piVar10[1] = (int)(piVar7[1]);
      if ((int *)(piVar7) == *(int **)(*param_1 + 4)) {
        *(int**)(*param_1 + 4) = (int *)(piVar10);
      }
      else {
        piVar9 = (int *)((int *)piVar7[1]);
        if ((int *)(piVar7) == (int *)*piVar9) {
          *piVar9 = (int)((int)piVar10);
        }
        else {
          piVar9[2] = (int)((int)piVar10);
        }
      }
      *piVar10 = (int)((int)piVar7);
LAB_10f9d11a:
      piVar7[1] = (int)((int)piVar10);
    }
    cVar1 = (char)(*(char *)(piVar8[1] + 0xc));
  } while( true );
}


// Reference entry 10003981; body size 5 bytes.
#line 1 "ENTRY_10003981"

void FUN_10003981(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"));
  if (bVar1) {
    thunk_FUN_10ce04e0();
  }
  return;
}


// Reference entry 10003986; body size 5 bytes.
#line 1 "ENTRY_10003986"

void FUN_10003986(void)

{
  thunk_FUN_10c2c140();
  return;
}


// Reference entry 10003990; body size 5 bytes.
#line 1 "ENTRY_10003990"

undefined4 * __thiscall Recovered_Bulk::FUN_10003990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a4c84 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1000399f; body size 5 bytes.
#line 1 "ENTRY_1000399f"

undefined4 * __thiscall Recovered_Bulk::FUN_1000399f(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  DAT_121a35e0 = (int)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);
  thunk_FUN_106de7d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100039a9; body size 5 bytes.
#line 1 "ENTRY_100039a9"

undefined4 * __thiscall Recovered_Bulk::FUN_100039a9(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 100039b8; body size 5 bytes.
#line 1 "ENTRY_100039b8"

void __fastcall FUN_100039b8(int param_1)

{
 try {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined **ppuStack_58;
  int iStack_54;
  undefined4 uStack_40;
  int **ppiStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  uint uStack_30;
  int *piStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uStack_30 = (uint)(DAT_12126b84);

  if (*(int *)(param_1 + 0x28) != 0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a040a);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0x14))();
    if (*(int *)(param_1 + 0x28) != 0) {
      piVar1 = (int *)(*(int **)(param_1 + 0x2c));
      if ((int *)(piVar1) != (int *)0x0) {
        *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
        *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
        puStack_34 = (undefined1 *)((undefined1 *)0x106a042a);
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
      *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
    }
  }
  puStack_34 = (undefined1 *)((undefined1 *)(param_1 + 0x1c));
  iStack_38 = (int)(param_1 + 8);
  ppiStack_3c = (int **)(&piStack_14);

  piVar2 = (int *)((int *)thunk_FUN_1069e3f0());
  piVar1 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if ((int *)(piVar1) == (int *)0x0) {
    piVar2 = (int *)((int *)0x0);
  }
  else {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a0469);
    piVar2 = (int *)((int *)(**(code **)(*piVar1 + 0xc))());
  }
  *(unsigned char *)((char *)&uStack_8 + 0) = 3;
  if ((int *)(piStack_14) != (int *)0x0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a0482);
    (**(code **)(*piStack_14 + 8))();
  }
  puStack_34 = (undefined1 *)((undefined1 *)&ppuStack_58);
  *(unsigned char *)((char *)&uStack_8 + 0) = 2;
  ppuStack_58 = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  iStack_54 = (int)(param_1);
  piVar3 = (int *)((int *)thunk_FUN_10bf1b90(&piStack_18,piVar1));
  piVar1 = (int *)((int *)*piVar3);
  *piVar3 = (int)(0);
  piVar3 = (int *)(*(int **)(param_1 + 0x2c));
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(4)));
  if ((int *)(piVar3) != (int *)0x0) {
    *(undefined4*)(param_1 + 0x28) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
    puStack_34 = (undefined1 *)((undefined1 *)0x106a04ca);
    (**(code **)(*piVar3 + 8))();
  }
  *(int**)(param_1 + 0x28) = (int *)(piVar1);
  if ((int *)(piVar1) == (int *)0x0) {
    uVar4 = (undefined4)(0);
  }
  else {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a04d8);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))());
  }
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(uVar4);
  uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(5)));
  if ((int *)(piStack_18) != (int *)0x0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a04ef);
    (**(code **)(*piStack_18 + 8))();
  }

  if ((int *)(piVar2) != (int *)0x0) {
    puStack_34 = (undefined1 *)((undefined1 *)0x106a0501);
    (**(code **)(*piVar2 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 100039c7; body size 5 bytes.
#line 1 "ENTRY_100039c7"

void __fastcall FUN_100039c7(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)0x0) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  return;

 } catch (...) { }
}


// Reference entry 100039e0; body size 5 bytes.
#line 1 "ENTRY_100039e0"

void __fastcall FUN_100039e0(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 100039ea; body size 5 bytes.
#line 1 "ENTRY_100039ea"
void FUN_100039ea(void){
                    
  (*(code *)(uint)(DAT_121a06c8))("exit_on_background");
  return;
}


// Reference entry 100039f9; body size 5 bytes.
#line 1 "ENTRY_100039f9"

void __fastcall FUN_100039f9(int param_1)

{
 try {
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 0x24));
  *(int*)(param_1 + 0x24) = (int)(iVar4 + 1);
  if (iVar4 == 0) {
    piVar1 = (int *)((int *)(param_1 + 0x20));
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar4 = (int)(thunk_FUN_11128910(uVar3));
      uVar5 = (undefined4)(thunk_FUN_11128910(*(undefined4 *)(iVar4 + 0x7b0)));
      piStack_14 = (int *)((int *)thunk_FUN_11127d60(&puStack_18,uVar5));

      if ((int *)(piVar1) != (int *)(piStack_14)) {
        puVar2 = (undefined4 *)((undefined4 *)*piVar1);
        if ((undefined4 *)(puVar2) != (undefined4 *)0x0) {
          iVar4 = (int)(thunk_FUN_1123fcd0(puVar2 + 1));
          if (iVar4 == 0) {
            (**(code **)*puVar2)(1);
          }
        }
        iVar4 = (int)(*piStack_14);
        *piVar1 = (int)(iVar4);
        if (iVar4 != 0) {
          thunk_FUN_1123fce0(iVar4 + 4);
        }
      }

      if ((undefined4 *)(puStack_18) != (undefined4 *)0x0) {
        iVar4 = (int)(thunk_FUN_1123fcd0(puStack_18 + 1));
        if ((iVar4 == 0) && ((undefined4 *)(puStack_18) != (undefined4 *)0x0)) {
          (**(code **)*puStack_18)(1);
        }
      }
      iVar4 = (int)(*piVar1);

      thunk_FUN_11128910(iVar4);
      thunk_FUN_11127900(iVar4);
    }
    thunk_FUN_1112a590(param_1);
  }

  return;

 } catch (...) { }
}


// Reference entry 100039fe; body size 5 bytes.
#line 1 "ENTRY_100039fe"

undefined4 __thiscall Recovered_Bulk::FUN_100039fe(undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  undefined4 param_1 = (undefined4 )this;
 try {
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  pvVar1 = (void *)(operator_new(0x78));

  if ((void *)(pvVar1) != (void *)0x0) {
    uVar2 = (undefined4)(thunk_FUN_110c67f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8));

    return (undefined4)(uVar2);
  }

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10003a17; body size 5 bytes.
#line 1 "ENTRY_10003a17"

void __fastcall FUN_10003a17(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10003a1c; body size 5 bytes.
#line 1 "ENTRY_10003a1c"

int * __thiscall Recovered_Bulk::FUN_10003a1c(int *param_2,int param_3,int *param_4)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  param_1[1] = (int)(param_1[1] + 1);
  piVar2 = (int *)((int *)*param_1);
  param_4[1] = (int)((int)param_2);
  if ((int *)((param_2)) == (int *)(piVar2)) {
    *piVar2 = (int)((int)param_4);
    piVar2[1] = (int)((int)param_4);
    piVar2[2] = (int)((int)param_4);
    *(undefined1*)(param_4 + 3) = (undefined1)(1);
    return (int *)(param_4);
  }
  if (param_3 == 0) {
    param_2[2] = (int)((int)param_4);
    if ((int *)(param_2) == (int *)piVar2[2]) {
      piVar2[2] = (int)((int)param_4);
    }
  }
  else {
    *param_2 = (int)((int)param_4);
    if ((int *)(param_2) == (int *)*piVar2) {
      *piVar2 = (int)((int)param_4);
    }
  }
  cVar1 = (char)(*(char *)(param_4[1] + 0xc));
  piVar8 = (int *)(param_4);
  do {
    if (cVar1 != '\0') {
      *(undefined1*)(piVar2[1] + 0xc) = (undefined1)(1);
      return (int *)(param_4);
    }
    piVar9 = (int *)((int *)piVar8[1]);
    piVar7 = (int *)(piVar8 + 1);
    piVar10 = (int *)(piVar9 + 1);
    iVar5 = (int)(*(int *)piVar9[1]);
    if ((int *)(piVar9) == (int *)iVar5) {
      iVar5 = (int)(((int *)piVar9[1])[2]);
      if (*(char *)(iVar5 + 0xc) != '\0') {
        piVar3 = (int *)((int *)piVar9[2]);
        if ((int *)((piVar8)) == (int *)(piVar3)) {
          piVar9[2] = (int)(*piVar3);
          if (*(char *)(*piVar3 + 0xd) == '\0') {
            *(int**)(*piVar3 + 4) = (int *)(piVar9);
          }
          piVar3[1] = (int)(*piVar10);
          if ((int *)(piVar9) == (int *)*(int *)(*param_1 + 4)) {
            *(int**)(*param_1 + 4) = (int *)(piVar3);
            *piVar3 = (int)((int)piVar9);
            *piVar10 = (int)((int)piVar3);
            piVar8 = (int *)(piVar9);
            piVar9 = (int *)(piVar3);
            piVar7 = (int *)(piVar10);
          }
          else {
            piVar8 = (int *)((int *)*piVar10);
            if ((int *)(piVar9) == (int *)*piVar8) {
              *piVar8 = (int)((int)piVar3);
              *piVar3 = (int)((int)piVar9);
              *piVar10 = (int)((int)piVar3);
              piVar8 = (int *)(piVar9);
              piVar9 = (int *)(piVar3);
              piVar7 = (int *)(piVar10);
            }
            else {
              piVar8[2] = (int)((int)piVar3);
              *piVar3 = (int)((int)piVar9);
              *piVar10 = (int)((int)piVar3);
              piVar8 = (int *)(piVar9);
              piVar9 = (int *)(piVar3);
              piVar7 = (int *)(piVar10);
            }
          }
        }
        *(undefined1*)(piVar9 + 3) = (undefined1)(1);
        *(undefined1*)(*(int *)(*piVar7 + 4) + 0xc) = (undefined1)(0);
        piVar7 = (int *)(*(int **)(*piVar7 + 4));
        piVar10 = (int *)((int *)*piVar7);
        *piVar7 = (int)(piVar10[2]);
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int**)(piVar10[2] + 4) = (int *)(piVar7);
        }
        piVar10[1] = (int)(piVar7[1]);
        if ((int *)(piVar7) == *(int **)(*param_1 + 4)) {
          *(int**)(*param_1 + 4) = (int *)(piVar10);
          piVar10[2] = (int)((int)piVar7);
        }
        else {
          piVar9 = (int *)((int *)piVar7[1]);
          if ((int *)(piVar7) == (int *)piVar9[2]) {
            piVar9[2] = (int)((int)piVar10);
            piVar10[2] = (int)((int)piVar7);
          }
          else {
            *piVar9 = (int)((int)piVar10);
            piVar10[2] = (int)((int)piVar7);
          }
        }
        goto LAB_10bdbada;
      }
LAB_10bdba35:
      *(undefined1*)(piVar9 + 3) = (undefined1)(1);
      *(undefined1*)(iVar5 + 0xc) = (undefined1)(1);
      *(undefined1*)(*(int *)(*piVar7 + 4) + 0xc) = (undefined1)(0);
      piVar8 = (int *)(*(int **)(*piVar7 + 4));
    }
    else {
      if (*(char *)(iVar5 + 0xc) == '\0') goto LAB_10bdba35;
      piVar3 = (int *)((int *)*piVar9);
      piVar6 = (int *)(piVar9);
      if ((int *)((piVar8)) == (int *)(piVar3)) {
        *piVar9 = (int)(piVar3[2]);
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          *(int**)(piVar3[2] + 4) = (int *)(piVar9);
        }
        piVar3[1] = (int)(*piVar10);
        if ((int *)(piVar9) == (int *)*(int *)(*param_1 + 4)) {
          *(int**)(*param_1 + 4) = (int *)(piVar3);
        }
        else {
          puVar4 = (undefined4 *)((undefined4 *)*piVar10);
          if ((int *)(piVar9) == (int *)puVar4[2]) {
            puVar4[2] = (undefined4)(piVar3);
          }
          else {
            *puVar4 = (undefined4)(piVar3);
          }
        }
        piVar3[2] = (int)((int)piVar9);
        *piVar10 = (int)((int)piVar3);
        piVar6 = (int *)(piVar3);
        piVar8 = (int *)(piVar9);
        piVar7 = (int *)(piVar10);
      }
      *(undefined1*)(piVar6 + 3) = (undefined1)(1);
      *(undefined1*)(*(int *)(*piVar7 + 4) + 0xc) = (undefined1)(0);
      piVar7 = (int *)(*(int **)(*piVar7 + 4));
      piVar10 = (int *)((int *)piVar7[2]);
      piVar7[2] = (int)(*piVar10);
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int**)(*piVar10 + 4) = (int *)(piVar7);
      }
      piVar10[1] = (int)(piVar7[1]);
      if ((int *)(piVar7) == *(int **)(*param_1 + 4)) {
        *(int**)(*param_1 + 4) = (int *)(piVar10);
      }
      else {
        piVar9 = (int *)((int *)piVar7[1]);
        if ((int *)(piVar7) == (int *)*piVar9) {
          *piVar9 = (int)((int)piVar10);
        }
        else {
          piVar9[2] = (int)((int)piVar10);
        }
      }
      *piVar10 = (int)((int)piVar7);
LAB_10bdbada:
      piVar7[1] = (int)((int)piVar10);
    }
    cVar1 = (char)(*(char *)(piVar8[1] + 0xc));
  } while( true );
}


// Reference entry 10003a26; body size 5 bytes.
#line 1 "ENTRY_10003a26"

void __fastcall FUN_10003a26(int param_1)

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


// Reference entry 10003a2b; body size 5 bytes.
#line 1 "ENTRY_10003a2b"

undefined4 FUN_10003a2b(undefined4 param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined **appuStack_144 [8];
  undefined **appuStack_124 [8];
  undefined **appuStack_104 [8];
  undefined **appuStack_e4 [9];
  undefined4 uStack_c0;
  int *piStack_bc;
  undefined4 auStack_b8 [2];
  undefined4 uStack_b0;
  int *piStack_ac;
  undefined4 auStack_a8 [2];
  undefined4 uStack_a0;
  int *piStack_9c;
  undefined4 auStack_98 [2];
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  void *pvStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  SCStr aSStack_78 [8];
  undefined4 uStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  undefined4 auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  int *piStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  int iStack_8;


  thunk_FUN_10c5f8a0(&DAT_11884fc8);

  thunk_FUN_10ec0a20("forward");
  *(unsigned char *)((char *)&uStack_7c + 0) = 1;
  uVar2 = (uint)(thunk_FUN_10eba500("protocolPicker"));
  uVar2 = (uint)(uVar2 & 0xff);
  thunk_FUN_10ecea60(aSStack_78);
  iVar3 = (int)(thunk_FUN_10ec6900(uVar2));
  thunk_FUN_105f6290(iVar3 + 4);
  *(unsigned char *)((char *)&uStack_7c + 0) = 2;
  ((SCStr *)((SCStr *)&uStack_20))->int_allocRep("mDNS");
  *(unsigned char *)((char *)&uStack_7c + 0) = 3;
  ((SCStr *)((SCStr *)&uStack_1c))->int_allocRep("SSDP");
  *(unsigned char *)((char *)&uStack_7c + 0) = 4;
  ((SCStr *)((SCStr *)&uStack_18))->int_allocRep("WIFI");
  *(unsigned char *)((char *)&uStack_7c + 0) = 5;
  ((SCStr *)((SCStr *)&uStack_14))->int_allocRep("BLE");
  *(unsigned char *)((char *)&uStack_7c + 0) = 6;
  iStack_8 = (int)(0);

  uStack_44 = (undefined4)(thunk_FUN_10ec2270(&uStack_20));
  *(unsigned char *)((char *)&uStack_7c + 0) = 7;
  uStack_48 = (undefined4)(thunk_FUN_10ec2270(&uStack_1c));
  *(unsigned char *)((char *)&uStack_7c + 0) = 8;
  uVar4 = (undefined4)(thunk_FUN_10ec2270(&uStack_18));
  *(unsigned char *)((char *)&uStack_7c + 0) = 9;
  uVar5 = (undefined4)(thunk_FUN_10ec2270(&uStack_14));

  iStack_8 = (int)(0);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0xb;
  thunk_FUN_10ec20b0("protocolPicker");
  *(unsigned char *)((char *)&uStack_7c + 0) = 0xc;
  uVar6 = (undefined4)(uStack_48);
  uVar11 = (undefined4)(uStack_44);
  thunk_FUN_10ec3610(uVar5);
  thunk_FUN_10ec3610(uVar4);
  thunk_FUN_10ec3610(uVar6);
  uVar6 = (undefined4)(thunk_FUN_10ec3610(uVar11));
  iVar3 = (int)(thunk_FUN_10eccd50(uVar6));
  thunk_FUN_105f6290(iVar3 + 4);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0xd;
  thunk_FUN_10c5f8a0("Choose a protocol");
  *(unsigned char *)((char *)&uStack_7c + 0) = 0xe;
  thunk_FUN_10ec1b40("title");
  *(unsigned char *)((char *)&uStack_7c + 0) = 0xf;
  iVar3 = (int)(thunk_FUN_10eced20(auStack_50));
  thunk_FUN_105f6290(iVar3 + 4);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x10;
  thunk_FUN_10ec1d40();
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x11;
  iVar3 = (int)(thunk_FUN_1061c630(4));
  thunk_FUN_105f6290(iVar3 + 4);
  ppuStack_40 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTree);

  piStack_38 = (int *)((int *)0x0);
  piStack_34 = (int *)((int *)0x0);
  iStack_30 = (int)(0);
  puStack_2c = (undefined4 *)((undefined4 *)0x0);
  puStack_28 = (undefined4 *)((undefined4 *)0x0);
  iStack_24 = (int)(0);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x13;
  piVar7 = (int *)((int *)thunk_FUN_106050a0(appuStack_e4));
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 8))(appuStack_104));
  piVar7 = (int *)((int *)(**(code **)(*piVar7 + 8))(appuStack_124));
  uVar6 = (undefined4)((**(code **)(*piVar7 + 8))(appuStack_144));
  thunk_FUN_105f60e0(uVar6);
  puVar8 = (undefined4 *)(puStack_28);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x12;
  puVar9 = (undefined4 *)(puStack_2c);
  if ((undefined4 *)(puStack_2c) != (undefined4 *)0x0) {
    for (;(undefined4 *)((puVar9)) != (undefined4 *)(puVar8); puVar9 = puVar9 + 8) {
      (**(code **)*puVar9)(0);
    }
    uVar2 = (uint)(iStack_24 - (int)puStack_2c & 0xffffffe0);
    puVar9 = (undefined4 *)(puStack_2c);
    if (0xfff < uVar2) {
      puVar9 = (undefined4 *)((undefined4 *)puStack_2c[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)puStack_2c + (-4 - (int)puVar9))) goto LAB_10a9ef36;
    }
    thunk_FUN_1148a50e(puVar9,uVar2);
    puStack_2c = (undefined4 *)((undefined4 *)0x0);
    puStack_28 = (undefined4 *)((undefined4 *)0x0);
    iStack_24 = (int)(0);
  }
  piVar7 = (int *)(piStack_34);
  if ((int *)(piStack_38) != (int *)0x0) {
    if ((int *)(piStack_38) != (int *)(piStack_34)) {
      piVar10 = (int *)(piStack_38 + 1);
      do {
        *(unsigned char *)((char *)&uStack_7c + 0) = 0x14;
        ((SCStr *)((SCStr *)(piVar10 + 1)))->int_release();
        piVar10[1] = (int)(0);
        piVar1 = (int *)((int *)*piVar10);
        *(unsigned char *)((char *)&uStack_7c + 0) = 0x15;
        if ((int *)(piVar1) != (int *)0x0) {
          piVar10[-1] = (int)(0);
          *piVar10 = (int)(0);
          (**(code **)(*piVar1 + 8))();
        }
        *(unsigned char *)((char *)&uStack_7c + 0) = 0x12;
        piVar1 = (int *)(piVar10 + 2);
        piVar10 = (int *)(piVar10 + 3);
      } while ((int *)(piVar1) != (int *)(piVar7));
    }
    uVar2 = (uint)(((iStack_30 - (int)piStack_38) / 0xc) * 0xc);
    piVar7 = (int *)(piStack_38);
    if (0xfff < uVar2) {
      piVar7 = (int *)((int *)piStack_38[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)piStack_38 + (-4 - (int)piVar7))) goto LAB_10a9ef36;
    }
    thunk_FUN_1148a50e(piVar7,uVar2);
    piStack_38 = (int *)((int *)0x0);
    piStack_34 = (int *)((int *)0x0);
    iStack_30 = (int)(0);
  }
  ppuStack_40 = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_e4[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x16;
  ((SCStr *)((SCStr *)&uStack_88))->int_release();
  piVar7 = (int *)(piStack_8c);

  *(unsigned char *)((char *)&uStack_7c + 0) = 0x17;
  if ((int *)(piStack_8c) != (int *)0x0) {

    piStack_8c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_104[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x18;
  ((SCStr *)((SCStr *)auStack_98))->int_release();
  piVar7 = (int *)(piStack_9c);
  auStack_98[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x19;
  if ((int *)(piStack_9c) != (int *)0x0) {

    piStack_9c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x1a;
  ((SCStr *)((SCStr *)auStack_50))->int_release();
  auStack_50[0] = (undefined4)(0);
  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_124[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x1b;
  ((SCStr *)((SCStr *)auStack_a8))->int_release();
  piVar7 = (int *)(piStack_ac);
  auStack_a8[0] = (undefined4)(0);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x1c;
  if ((int *)(piStack_ac) != (int *)0x0) {

    piStack_ac = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  if ((undefined4 *)uStack_10 != (undefined4 *)((0x0))) {
    puVar9 = (undefined4 *)(*(uint *)((char *)&uStack_10 + 4));
    puVar8 = (undefined4 *)((undefined4 *)uStack_10);
    if ((uint)(uStack_10) != *(uint *)((char *)&uStack_10 + 4)) {
      do {
        piVar7 = (int *)((int *)puVar8[1]);
        *(unsigned char *)((char *)&uStack_7c + 0) = 0x1d;
        if ((int *)(piVar7) != (int *)0x0) {
          *puVar8 = (undefined4)(0);
          puVar8[1] = (undefined4)(0);
          (**(code **)(*piVar7 + 8))();
        }
        puVar8 = (undefined4 *)(puVar8 + 2);
      } while ((undefined4 *)(puVar8) != (undefined4 *)(puVar9));
    }
    *(unsigned char *)((char *)&uStack_7c + 0) = 10;
    uVar2 = (uint)((iStack_8 - (int)(undefined4 *)uStack_10 >> 3) * 8);
    puVar9 = (undefined4 *)((undefined4 *)uStack_10);
    if (0xfff < uVar2) {
      puVar9 = (undefined4 *)((undefined4 *)((undefined4 *)uStack_10)[-1]);
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (uint)((int)(undefined4 *)uStack_10 + (-4 - (int)puVar9))) {
LAB_10a9ef36:
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(puVar9,uVar2);

    iStack_8 = (int)(0);
  }
  piVar7 = (int *)(piStack_54);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x1e;
  if ((int *)(piStack_54) != (int *)0x0) {

    piStack_54 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(piStack_5c);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x1f;
  if ((int *)(piStack_5c) != (int *)0x0) {

    piStack_5c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(piStack_64);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x20;
  if ((int *)(piStack_64) != (int *)0x0) {

    piStack_64 = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  piVar7 = (int *)(piStack_6c);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x21;
  if ((int *)(piStack_6c) != (int *)0x0) {

    piStack_6c = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x22;
  ((SCStr *)((SCStr *)&uStack_14))->int_release();

  *(unsigned char *)((char *)&uStack_7c + 0) = 0x23;
  ((SCStr *)((SCStr *)&uStack_18))->int_release();

  *(unsigned char *)((char *)&uStack_7c + 0) = 0x24;
  ((SCStr *)((SCStr *)&uStack_1c))->int_release();

  *(unsigned char *)((char *)&uStack_7c + 0) = 0x25;
  ((SCStr *)((SCStr *)&uStack_20))->int_release();

  thunk_FUN_10604790();
  thunk_FUN_10604820();
  appuStack_144[0] = (undefined **)((uint)&ghidra_vftable_SCConditionalVectorBuilderTreeIfChainInterface);
  *(unsigned char *)((char *)&uStack_7c + 0) = 0x26;
  ((SCStr *)((SCStr *)auStack_b8))->int_release();
  piVar7 = (int *)(piStack_bc);
  auStack_b8[0] = (undefined4)(0);
  uStack_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_7c + 1)) << 8 | (uint)(0x27)));
  if ((int *)(piStack_bc) != (int *)0x0) {

    piStack_bc = (int *)((int *)0x0);
    (**(code **)(*piVar7 + 8))();
  }

  ((SCStr *)(aSStack_78))->int_release();

  return (undefined4)(param_1);

 } catch (...) { }
}


// Reference entry 10003a35; body size 5 bytes.
#line 1 "ENTRY_10003a35"

undefined4 FUN_10003a35(undefined4 param_1)

{
  switch(param_1) {
  case 0x15:
  case 0x1a:
  case 0x22:
  case 0x27:
  case 0x38:
    return (undefined4)(0);
  default:
    return (undefined4)(0xffffffff);
  case 0x1c:
    return (undefined4)(1);
  case 0x1f:
    return (undefined4)(3);
  case 0x20:
  case 0x21:
    return (undefined4)(2);
  }
}


// Reference entry 10003a3a; body size 5 bytes.
#line 1 "ENTRY_10003a3a"

undefined4 __thiscall Recovered_Bulk::FUN_10003a3a(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    thunk_FUN_112af4e0("updatemgr",1,"beginPostSetupUpdate() - no listeners");
    return (undefined4)(0x3f0);
  }
  if (*(int *)(param_1 + 0x1a0c) == 0) {
    thunk_FUN_112af4e0("updatemgr",1,"beginPostSetupUpdate() - device update list is empty!");
    return (undefined4)(0x3f0);
  }
  uVar1 = (undefined4)(thunk_FUN_110fdde0(0,&param_2,param_2));
  return (undefined4)(uVar1);
}


// Reference entry 10003a3f; body size 5 bytes.
#line 1 "ENTRY_10003a3f"

undefined4 * __thiscall Recovered_Bulk::FUN_10003a3f(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  param_1[0x2a] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  thunk_FUN_10eb6cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10003a44; body size 5 bytes.
#line 1 "ENTRY_10003a44"

undefined1 FUN_10003a44(void)

{
  return (undefined1)(1);
}


// Reference entry 10003a58; body size 5 bytes.
#line 1 "ENTRY_10003a58"

void FUN_10003a58(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2));
  if (cVar1 != '\0') {
    thunk_FUN_1046ba90();
  }
  return;
}


// Reference entry 10003a67; body size 5 bytes.
#line 1 "ENTRY_10003a67"

void __thiscall Recovered_Bulk::FUN_10003a67(SCStr *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 0x28));
  if ((SCStr *)((param_2)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 0x2c));
  if ((SCStr *)((param_3)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_3));
    ((SCStr *)(pSVar1))->int_addref();
  }
  return;
}


// Reference entry 10003a6c; body size 5 bytes.
#line 1 "ENTRY_10003a6c"

undefined4 * __thiscall Recovered_Bulk::FUN_10003a6c(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIEventSink"));
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
      return (undefined4 *)(param_2);
    }
  }
  else {
    bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"));
    if (!bVar1) {
      *param_2 = (undefined4)(0);
      return (undefined4 *)(param_2);
    }
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)0x0) {
      (**(code **)(*param_1 + 4))();
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10003a76; body size 5 bytes.
#line 1 "ENTRY_10003a76"

void FUN_10003a76(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10003a7b; body size 5 bytes.
#line 1 "ENTRY_10003a7b"

void FUN_10003a7b(void)

{
  return;
}


// Reference entry 10003a80; body size 5 bytes.
#line 1 "ENTRY_10003a80"

void __thiscall Recovered_Bulk::FUN_10003a80(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((int *)(param_2) != *(int **)(param_1 + 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc));
    if ((int *)(piVar1) != (int *)0x0) {
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(int**)(param_1 + 8) = (int *)(param_2);
    if ((int *)(param_2) != (int *)0x0) {
      piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))());
      *(int**)(param_1 + 0xc) = (int *)(piVar1);
      (**(code **)(*piVar1 + 4))();
      return;
    }
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10003a85; body size 5 bytes.
#line 1 "ENTRY_10003a85"
void FUN_10003a85(int *param_1){
                    
  (**(code **)(*param_1 + 0x18))();
  return;
}


// Reference entry 10003a8a; body size 5 bytes.
#line 1 "ENTRY_10003a8a"
undefined4 FUN_10003a8a(int *param_1,undefined4 param_2){
 try {
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    


  puVar2 = (undefined4 *)((undefined4 *)
           (**(code **)(*param_1 + 0x98))(&param_1,param_2,DAT_12126b84 ^ (uint)&stack0xfffffffc));
  uVar1 = (undefined4)(*puVar2);
  *puVar2 = (undefined4)(0);

  if ((int *)(param_1) != (int *)0x0) {
    (**(code **)(*param_1 + 8))();

    return (undefined4)(uVar1);
  }

  return (undefined4)(uVar1);

 } catch (...) { }
}


// Reference entry 10003a8f; body size 5 bytes.
#line 1 "ENTRY_10003a8f"
void FUN_10003a8f(void){
                    
  (*(code *)(uint)(DAT_121a06c8))("thumbsdown");
  return;
}


// Reference entry 10003a94; body size 5 bytes.
#line 1 "ENTRY_10003a94"
void FUN_10003a94(int *param_1){
                    
  (**(code **)(*param_1 + 0x1c))();
  return;
}


// Reference entry 10003a9e; body size 5 bytes.
#line 1 "ENTRY_10003a9e"

undefined4 __fastcall FUN_10003a9e(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_111a66c0());
  return (undefined4)(uVar1);
}


// Reference entry 10003aa3; body size 5 bytes.
#line 1 "ENTRY_10003aa3"

int __fastcall FUN_10003aa3(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x10) + 4))());
  return (int)(iVar1 + *(int *)(param_1 + 0x1710));
}


// Reference entry 10003aa8; body size 5 bytes.
#line 1 "ENTRY_10003aa8"

SCStr * FUN_10003aa8(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10003aad; body size 5 bytes.
#line 1 "ENTRY_10003aad"

void __fastcall FUN_10003aad(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 4));
  return;
}


// Reference entry 10003ab7; body size 5 bytes.
#line 1 "ENTRY_10003ab7"

void FUN_10003ab7(void)

{
  thunk_FUN_10f6c340();
  return;
}


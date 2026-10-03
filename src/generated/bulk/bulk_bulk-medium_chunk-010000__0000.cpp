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
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef unsigned char uchar;
typedef int BOOL;
typedef void *HANDLE;
typedef struct HINSTANCE__ { char _pad; } HINSTANCE__;
typedef HINSTANCE__ *HINSTANCE;
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
typedef signed char sbyte;
typedef unsigned long long uint5;
typedef long long int5;
typedef unsigned long long uint6;
typedef long long int6;
typedef unsigned long long uint7;
typedef long long int7;
typedef unsigned int uintptr_t;
typedef int intptr_t;
typedef struct { char _p[10]; } unkuint10;
static float _fzero;
static int _izero;
#define NAN 0.0f/_fzero
#define INFINITY 1.0f/_fzero
struct tm { int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon;
  int tm_year; int tm_wday; int tm_yday; int tm_isdst; };
struct SYSTEMTIME { WORD wYear; WORD wMonth; WORD wDayOfWeek; WORD wDay;
  WORD wHour; WORD wMinute; WORD wSecond; WORD wMilliseconds; };
struct _jmp_buf { int _p[16]; };
extern "C" void longjmp(void *, int);
typedef struct { char _p[256]; } _wfinddata64i32_t;
extern int vftable;
typedef struct { char *_ptr; int _cnt; char *_base; int _flag;
  int _file; int _charbuf; int _bufsiz; char *_tmpfname; char *ptr;
  int cnt; void *base; int file; } _FILE_stub;
typedef _FILE_stub FILE;
typedef _FILE_stub _iobuf;
struct facet { char _pad; };
struct id { char _pad; };
typedef long fpos_t;
typedef struct { char _p; } _Mbstatet;
struct GUID { char _pad; };
struct exception { char _pad; };
struct type_info { char _pad; };
extern "C" void *memcpy(void *, const void *, size_t);
extern "C" void *memset(void *, ...);
extern "C" int memcmp(const void *, const void *, ...);
extern "C" size_t strlen(const char *);
extern "C" size_t wcslen(const wchar_t *);
extern "C" size_t fread(void *, ...);
extern "C" size_t fwrite(const void *, ...);
extern "C" void *malloc(...);
extern "C" void free(void *);
extern "C" void *calloc(...);
extern "C" void *realloc(...);
extern "C" char *strcpy(char *, const char *);
extern "C" wchar_t *wcscpy(wchar_t *, const wchar_t *);
extern "C" char *strstr(...);
extern "C" int strcmp(const char *, const char *);
extern "C" int wcscmp(const wchar_t *, const wchar_t *);
extern "C" char *strchr(const void *, int);
extern "C" char *strrchr(const void *, int);
extern "C" char *strncpy(char *, const char *, size_t);
extern "C" char *strcat(char *, const char *);
extern "C" int strncmp(const char *, const char *, size_t);
extern "C" int atoi(const char *);
extern "C" int sprintf(char *, const char *, ...);
extern "C" int snprintf(char *, size_t, const char *, ...);
extern "C" int sscanf(const char *, const char *, ...);
extern "C" long strtol(const char *, char **, int);
extern "C" int fclose(void *);
typedef struct { char _p[64]; } _stat64i32;
typedef void (*_purecall_handler)(void);
extern "C" _purecall_handler _set_purecall_handler(_purecall_handler);
typedef _Mbstatet mbstate_t;
extern "C" size_t _Mbrtowc(wchar_t *, const char *, size_t, mbstate_t *,
                           void *);
extern "C" int feof(void *);
extern "C" int fflush(void *);
extern "C" unsigned long __readfsdword(unsigned long);
#pragma intrinsic(__readfsdword)
extern "C" int __except_handler4(void);
extern "C" int __except_handler3(void);
extern "C" void __security_check_cookie(size_t);
extern "C" int __security_cookie;
struct __RFLD2 { int _Page; };
struct __RFLD { int _Page; };
namespace std { struct _Locinfo { char _pad; _Locinfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> static int _Getcoll(A...) { return 0; } }; }
namespace std { struct locale { char _pad; locale(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; struct facet { char _pad; facet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; static int op_dtor(...) { return 0; } }; }; }
namespace std { template<class... A> static int _Xbad_alloc(A...) { return 0; } template<class... A> static int _Xout_of_range(A...) { return 0; } }
struct SCActionOnGroupDescriptorImpl { char _pad; SCActionOnGroupDescriptorImpl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; static int RTTI_Type_Descriptor; };
struct SCLibParameters { char _pad; SCLibParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> static int hasDeveloperOption(A...) { return 0; } };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> static int getSCHousehold(A...) { return 0; } template<class... A> static int getSingleton(A...) { return 0; } };
struct SCPlayMenuPlayNowDescriptor { char _pad; SCPlayMenuPlayNowDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; static int RTTI_Type_Descriptor; };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> static int beginsWith(A...) { return 0; } template<class... A> static int hash(A...) { return 0; } template<class... A> static int int_addref(A...) { return 0; } template<class... A> static int int_allocRep(A...) { return 0; } template<class... A> static int int_release(A...) { return 0; } static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; static int op_dtor(...) { return 0; } };
template<class...> struct pair { char _pad; pair(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; static int op_dtor(...) { return 0; } };
struct Aborting { char _pad; Aborting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct AlarmMusicBrowseItem { char _pad; AlarmMusicBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct AlarmMusicChimeItem { char _pad; AlarmMusicChimeItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct AlarmMusicItem { char _pad; AlarmMusicItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct AlarmMusicRootItem { char _pad; AlarmMusicRootItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct AlbumArtistDisplayOption { char _pad; AlbumArtistDisplayOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Bad { char _pad; Bad(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Charge { char _pad; Charge(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Charging { char _pad; Charging(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct ChickenExit { char _pad; ChickenExit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct ClearAllRecentlyPlayed { char _pad; ClearAllRecentlyPlayed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct CurrentDailyIndexRefreshTime { char _pad; CurrentDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct DeleteItem { char _pad; DeleteItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct DesiredDailyIndexRefreshTime { char _pad; DesiredDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Discharging { char _pad; Discharging(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Enum { char _pad; Enum(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Feature { char _pad; Feature(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct InfoViewWrapper { char _pad; InfoViewWrapper(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct InvalidateStack { char _pad; InvalidateStack(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct MyRadioStations { char _pad; MyRadioStations(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct NavigateToRoomsMenu { char _pad; NavigateToRoomsMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct OnlineUpdateWizard { char _pad; OnlineUpdateWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Pairing { char _pad; Pairing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct PlayMenuInstantPlayNowTV { char _pad; PlayMenuInstantPlayNowTV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct PlayMenuPlayNowTV { char _pad; PlayMenuPlayNowTV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct PlayNowTV { char _pad; PlayNowTV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Player { char _pad; Player(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Playlists { char _pad; Playlists(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct RTTI_Type_Descriptor { char _pad; RTTI_Type_Descriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCAlarmContentBrowseItem { char _pad; SCAlarmContentBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCAudioInputResource { char _pad; SCAudioInputResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCAvailableServicesMenu { char _pad; SCAvailableServicesMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCContentBrowseItem { char _pad; SCContentBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCContentViewBrowseItem { char _pad; SCContentViewBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCGroupQueueSaveAction { char _pad; SCGroupQueueSaveAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCGroupSaveAction { char _pad; SCGroupSaveAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCHistoryBrowseItem { char _pad; SCHistoryBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCHistorySignInActionDescriptor { char _pad; SCHistorySignInActionDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIAccountManager { char _pad; SCIAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIActionCategoryEdit { char _pad; SCIActionCategoryEdit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIActionCategoryInstant { char _pad; SCIActionCategoryInstant(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIActionCategorySettings { char _pad; SCIActionCategorySettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIAddToQueueAtNumberDescriptor { char _pad; SCIAddToQueueAtNumberDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIBadgeIndicatorSettingsProperty { char _pad; SCIBadgeIndicatorSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIBooleanSettingsProperty { char _pad; SCIBooleanSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIController { char _pad; SCIController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIDeviceMusicEqualization { char _pad; SCIDeviceMusicEqualization(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIIndexManager { char _pad; SCIIndexManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCISpinnerSettingsProperty { char _pad; SCISpinnerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCMusicServer { char _pad; SCMusicServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCMusicServicesDataSource { char _pad; SCMusicServicesDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCMySonosDataSource { char _pad; SCMySonosDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCOpGetRDM { char _pad; SCOpGetRDM(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCOpGetStr { char _pad; SCOpGetStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCOpGetUsageDataShareOption { char _pad; SCOpGetUsageDataShareOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCOpValidateServiceCredentials { char _pad; SCOpValidateServiceCredentials(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCScheduleIndexUpdateSettingsItem { char _pad; SCScheduleIndexUpdateSettingsItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCServiceAppInteropManager { char _pad; SCServiceAppInteropManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCSetAlarmMusicDescriptor { char _pad; SCSetAlarmMusicDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCSpinnerSettingsItem { char _pad; SCSpinnerSettingsItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCSpinnerSettingsProperty { char _pad; SCSpinnerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCSwfObjQInternalListener { char _pad; SCSwfObjQInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCSwfObjQListener { char _pad; SCSwfObjQListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCSwfObjUMInternalListener { char _pad; SCSwfObjUMInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SCViewContributingArtistsSettingsItem { char _pad; SCViewContributingArtistsSettingsItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SaveAlarm { char _pad; SaveAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Secure { char _pad; Secure(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Subscribe { char _pad; Subscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SwfObjQ { char _pad; SwfObjQ(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct SwfStr { char _pad; SwfStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct UnavailableSettings { char _pad; UnavailableSettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Unsubscribe { char _pad; Unsubscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
struct _Collvec { char _pad; _Collvec(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; };
typedef void *A;
typedef void *CUSTOM_SUB_WIZARD_SELF_UPDATE;
typedef void *K;
typedef void *N;
typedef void *R;
typedef void *REST;
typedef void *SQ;
typedef void *STATE_ONLINEUPDATE_CANCELED;
typedef void *STATE_ONLINEUPDATE_CHECK_FOR_UPDATES;
typedef void *STATE_ONLINEUPDATE_CHOICE;
typedef void *STATE_ONLINEUPDATE_COMPLETE;
typedef void *STATE_ONLINEUPDATE_CONTROLLER_NEEDS_UPDATING;
typedef void *STATE_ONLINEUPDATE_CONTROLLER_SELFUPDATE_SUBWIZ;
typedef void *STATE_ONLINEUPDATE_DEVICES_UPGRADED;
typedef void *STATE_ONLINEUPDATE_DEVICES_UPGRADE_IN_PROGRESS;
typedef void *STATE_ONLINEUPDATE_ERROR;
typedef void *STATE_ONLINEUPDATE_ERROR_INFO;
typedef void *STATE_ONLINEUPDATE_FINISHED;
typedef void *STATE_ONLINEUPDATE_FINISH_SECURE_REG;
typedef void *STATE_ONLINEUPDATE_FINISH_SECURE_REG_FAILED;
typedef void *STATE_ONLINEUPDATE_INIT;
typedef void *STATE_ONLINEUPDATE_INTRODUCTION;
typedef void *STATE_ONLINEUPDATE_NOT_REQUIRED;
typedef void *STATE_ONLINEUPDATE_NO_INLINE_SELF_UPDATE;
typedef void *STATE_ONLINEUPDATE_NO_SECURE;
typedef void *STATE_ONLINEUPDATE_PENDING;
typedef void *STATE_ONLINEUPDATE_POST_UPDATE_REINDEXING_NEEDED;
typedef void *STATE_ONLINEUPDATE_RESUME_CONNECTING;
typedef void *STATE_ONLINEUPDATE_SECURE_INTRO;
typedef void *STATE_ONLINEUPDATE_SEC_REG_WARNING;
typedef void *STATE_ONLINEUPDATE_WARNING;
typedef void *T;
typedef void *WARNING;
typedef void *_Page;
using namespace std;
struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_10beebc0(int *param_2); template<class... A> int m_FUN_10beebc0(A...); undefined4 * __thiscall m_FUN_10beed50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10beed50(A...); undefined4 * __thiscall m_FUN_10bf0600(byte param_2); template<class... A> int m_FUN_10bf0600(A...); undefined4 * __thiscall m_FUN_10bf06b0(byte param_2); template<class... A> int m_FUN_10bf06b0(A...); undefined4 * __thiscall m_FUN_10bf06e0(byte param_2); template<class... A> int m_FUN_10bf06e0(A...); undefined4 __thiscall m_FUN_10bf0710(byte param_2); template<class... A> int m_FUN_10bf0710(A...); undefined4 __thiscall m_FUN_10bf0740(byte param_2); template<class... A> int m_FUN_10bf0740(A...); undefined4 * __thiscall m_FUN_10bf0770(byte param_2); template<class... A> int m_FUN_10bf0770(A...); undefined4 * __thiscall m_FUN_10bf07a0(byte param_2); template<class... A> int m_FUN_10bf07a0(A...); undefined4 * __thiscall m_FUN_10bf07d0(byte param_2); template<class... A> int m_FUN_10bf07d0(A...); undefined4 * __thiscall m_FUN_10bf0800(byte param_2); template<class... A> int m_FUN_10bf0800(A...); int * __thiscall m_FUN_10bf0e70(int *param_2); template<class... A> int m_FUN_10bf0e70(A...); int * __thiscall m_FUN_10bf0e90(int *param_2); template<class... A> int m_FUN_10bf0e90(A...); SCStr * __thiscall m_FUN_10bf0eb0(SCStr *param_2); template<class... A> int m_FUN_10bf0eb0(A...); int * __thiscall m_FUN_10bf0ed0(int *param_2); template<class... A> int m_FUN_10bf0ed0(A...); SCStr * __thiscall m_FUN_10bf0f00(SCStr *param_2); template<class... A> int m_FUN_10bf0f00(A...); int * __thiscall m_FUN_10bf1100(int *param_2); template<class... A> int m_FUN_10bf1100(A...); int * __thiscall m_FUN_10bf1120(int *param_2); template<class... A> int m_FUN_10bf1120(A...); int * __thiscall m_FUN_10bf11a0(int *param_2); template<class... A> int m_FUN_10bf11a0(A...); int * __thiscall m_FUN_10bf11c0(int *param_2); template<class... A> int m_FUN_10bf11c0(A...); undefined4 * __thiscall m_FUN_10bf1470(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_10bf1470(A...); undefined4 * __thiscall m_FUN_10bf21c0(int *param_2); template<class... A> int m_FUN_10bf21c0(A...); undefined4 * __thiscall m_FUN_10bf21e0(int *param_2); template<class... A> int m_FUN_10bf21e0(A...); undefined4 * __thiscall m_FUN_10bf22f0(byte param_2); template<class... A> int m_FUN_10bf22f0(A...); undefined4 * __thiscall m_FUN_10bf2330(byte param_2); template<class... A> int m_FUN_10bf2330(A...); undefined4 * __thiscall m_FUN_10bf2380(byte param_2); template<class... A> int m_FUN_10bf2380(A...); undefined4 * __thiscall m_FUN_10bf23d0(byte param_2); template<class... A> int m_FUN_10bf23d0(A...); undefined4 * __thiscall m_FUN_10bf2400(byte param_2); template<class... A> int m_FUN_10bf2400(A...); undefined4 * __thiscall m_FUN_10bf2e90(byte param_2); template<class... A> int m_FUN_10bf2e90(A...); undefined4 * __thiscall m_FUN_10bf2ed0(byte param_2); template<class... A> int m_FUN_10bf2ed0(A...); SCStr * __thiscall m_FUN_10bf2fe0(SCStr *param_2); template<class... A> int m_FUN_10bf2fe0(A...); SCStr * __thiscall m_FUN_10bf3000(SCStr *param_2); template<class... A> int m_FUN_10bf3000(A...); undefined4 * __thiscall m_FUN_10bf3350(byte param_2); template<class... A> int m_FUN_10bf3350(A...); undefined4 * __thiscall m_FUN_10bf3450(byte param_2); template<class... A> int m_FUN_10bf3450(A...); SCStr * __thiscall m_FUN_10bf34d0(SCStr *param_2); template<class... A> int m_FUN_10bf34d0(A...); SCStr * __thiscall m_FUN_10bf34f0(SCStr *param_2); template<class... A> int m_FUN_10bf34f0(A...); int __thiscall m_FUN_10bf3b40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bf3b40(A...); int __thiscall m_FUN_10bf3b80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bf3b80(A...); undefined4 * __thiscall m_FUN_10bf6070(byte param_2); template<class... A> int m_FUN_10bf6070(A...); undefined4 __thiscall m_FUN_10bf60b0(byte param_2); template<class... A> int m_FUN_10bf60b0(A...); undefined4 __thiscall m_FUN_10bf61a0(byte param_2); template<class... A> int m_FUN_10bf61a0(A...); undefined4 * __thiscall m_FUN_10bf61d0(byte param_2); template<class... A> int m_FUN_10bf61d0(A...); undefined4 __thiscall m_FUN_10bfbbe0(byte param_2); template<class... A> int m_FUN_10bfbbe0(A...); undefined4 * __thiscall m_FUN_10bfbc10(byte param_2); template<class... A> int m_FUN_10bfbc10(A...); undefined4 __thiscall m_FUN_10bfbc50(byte param_2); template<class... A> int m_FUN_10bfbc50(A...); undefined4 __thiscall m_FUN_10bfbc80(byte param_2); template<class... A> int m_FUN_10bfbc80(A...); undefined4 * __thiscall m_FUN_10bfe530(int *param_2); template<class... A> int m_FUN_10bfe530(A...); undefined4 * __thiscall m_FUN_10bfe5b0(int *param_2); template<class... A> int m_FUN_10bfe5b0(A...); undefined4 * __thiscall m_FUN_10bfe5f0(int *param_2); template<class... A> int m_FUN_10bfe5f0(A...); undefined4 * __thiscall m_FUN_10bfee80(byte param_2); template<class... A> int m_FUN_10bfee80(A...); undefined4 * __thiscall m_FUN_10bfeec0(byte param_2); template<class... A> int m_FUN_10bfeec0(A...); undefined4 * __thiscall m_FUN_10bfef00(byte param_2); template<class... A> int m_FUN_10bfef00(A...); undefined4 * __thiscall m_FUN_10bfef50(byte param_2); template<class... A> int m_FUN_10bfef50(A...); undefined4 * __thiscall m_FUN_10bfef80(byte param_2); template<class... A> int m_FUN_10bfef80(A...); undefined4 __thiscall m_FUN_10bff130(byte param_2); template<class... A> int m_FUN_10bff130(A...); void __thiscall m_FUN_10bff180(int *param_2); template<class... A> int m_FUN_10bff180(A...); void __thiscall m_FUN_10c01490(SCStr *param_2); template<class... A> int m_FUN_10c01490(A...); void __thiscall m_FUN_10c014c0(SCStr *param_2); template<class... A> int m_FUN_10c014c0(A...); void __thiscall m_FUN_10c014f0(SCStr *param_2); template<class... A> int m_FUN_10c014f0(A...); undefined4 * __thiscall m_FUN_10c01d30(int *param_2); template<class... A> int m_FUN_10c01d30(A...); undefined4 * __thiscall m_FUN_10c01d70(int *param_2); template<class... A> int m_FUN_10c01d70(A...); undefined4 * __thiscall m_FUN_10c025f0(byte param_2); template<class... A> int m_FUN_10c025f0(A...); undefined4 * __thiscall m_FUN_10c02630(byte param_2); template<class... A> int m_FUN_10c02630(A...); int * __thiscall m_FUN_10c03220(int *param_2); template<class... A> int m_FUN_10c03220(A...); undefined4 * __thiscall m_FUN_10c05320(int *param_2); template<class... A> int m_FUN_10c05320(A...); undefined4 * __thiscall m_FUN_10c05360(int *param_2); template<class... A> int m_FUN_10c05360(A...); undefined4 * __thiscall m_FUN_10c053a0(int *param_2); template<class... A> int m_FUN_10c053a0(A...); undefined4 * __thiscall m_FUN_10c053e0(int *param_2); template<class... A> int m_FUN_10c053e0(A...); undefined4 * __thiscall m_FUN_10c062d0(byte param_2); template<class... A> int m_FUN_10c062d0(A...); undefined4 * __thiscall m_FUN_10c06310(byte param_2); template<class... A> int m_FUN_10c06310(A...); undefined4 * __thiscall m_FUN_10c06360(byte param_2); template<class... A> int m_FUN_10c06360(A...); undefined4 * __thiscall m_FUN_10c06560(byte param_2); template<class... A> int m_FUN_10c06560(A...); undefined4 * __thiscall m_FUN_10c065a0(byte param_2); template<class... A> int m_FUN_10c065a0(A...); void __thiscall m_FUN_10c06e20(char param_2); template<class... A> int m_FUN_10c06e20(A...); undefined4 __thiscall m_FUN_10c0f120(undefined4 param_2); template<class... A> int m_FUN_10c0f120(A...); undefined4 * __thiscall m_FUN_10c16f90(int *param_2); template<class... A> int m_FUN_10c16f90(A...); undefined4 * __thiscall m_FUN_10c16fd0(int *param_2); template<class... A> int m_FUN_10c16fd0(A...); undefined4 * __thiscall m_FUN_10c17010(int *param_2); template<class... A> int m_FUN_10c17010(A...); undefined4 * __thiscall m_FUN_10c17050(int *param_2); template<class... A> int m_FUN_10c17050(A...); undefined4 * __thiscall m_FUN_10c17d60(byte param_2); template<class... A> int m_FUN_10c17d60(A...); undefined4 __thiscall m_FUN_10c17d90(byte param_2); template<class... A> int m_FUN_10c17d90(A...); undefined4 __thiscall m_FUN_10c17dc0(byte param_2); template<class... A> int m_FUN_10c17dc0(A...); undefined4 __thiscall m_FUN_10c17df0(byte param_2); template<class... A> int m_FUN_10c17df0(A...); undefined4 * __thiscall m_FUN_10c17e20(byte param_2); template<class... A> int m_FUN_10c17e20(A...); int * __thiscall m_FUN_10c18560(int *param_2); template<class... A> int m_FUN_10c18560(A...); SCStr * __thiscall m_FUN_10c1bbc0(SCStr *param_2); template<class... A> int m_FUN_10c1bbc0(A...); undefined4 __thiscall m_FUN_10c1be40(int param_2); template<class... A> int m_FUN_10c1be40(A...); undefined4 __thiscall m_FUN_10c1c560(undefined4 param_2); template<class... A> int m_FUN_10c1c560(A...); undefined4 __thiscall m_FUN_10c1c700(undefined4 param_2); template<class... A> int m_FUN_10c1c700(A...); undefined4 __thiscall m_FUN_10c1e7b0(undefined4 param_2); template<class... A> int m_FUN_10c1e7b0(A...); void __thiscall m_FUN_10c212a0(int *param_2); template<class... A> int m_FUN_10c212a0(A...); int * __thiscall m_FUN_10c21eb0(int *param_2); template<class... A> int m_FUN_10c21eb0(A...); void __thiscall m_FUN_10c23420(undefined4 *param_2); template<class... A> int m_FUN_10c23420(A...); void __thiscall m_FUN_10c23470(undefined4 *param_2); template<class... A> int m_FUN_10c23470(A...); undefined4 * __thiscall m_FUN_10c238a0(int *param_2); template<class... A> int m_FUN_10c238a0(A...); undefined4 * __thiscall m_FUN_10c24750(byte param_2); template<class... A> int m_FUN_10c24750(A...); undefined4 * __thiscall m_FUN_10c249c0(byte param_2); template<class... A> int m_FUN_10c249c0(A...); void __thiscall m_FUN_10c24d60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c24d60(A...); int * __thiscall m_FUN_10c265e0(int *param_2,uint param_3); template<class... A> int m_FUN_10c265e0(A...); SCStr * __thiscall m_FUN_10c267e0(SCStr *param_2); template<class... A> int m_FUN_10c267e0(A...); void __thiscall m_FUN_10c271e0(undefined4 *param_2); template<class... A> int m_FUN_10c271e0(A...); void __thiscall m_FUN_10c27230(undefined4 *param_2); template<class... A> int m_FUN_10c27230(A...); undefined4 * __thiscall m_FUN_10c294d0(byte param_2); template<class... A> int m_FUN_10c294d0(A...); undefined4 * __thiscall m_FUN_10c29610(byte param_2); template<class... A> int m_FUN_10c29610(A...); void __thiscall m_FUN_10c2a8b0(int param_2); template<class... A> int m_FUN_10c2a8b0(A...); void __thiscall m_FUN_10c2a8e0(int param_2); template<class... A> int m_FUN_10c2a8e0(A...); undefined4 * __thiscall m_FUN_10c2b7e0(int *param_2); template<class... A> int m_FUN_10c2b7e0(A...); undefined4 * __thiscall m_FUN_10c2b820(int *param_2); template<class... A> int m_FUN_10c2b820(A...); undefined4 __thiscall m_FUN_10c2c140(byte param_2); template<class... A> int m_FUN_10c2c140(A...); void __thiscall m_FUN_10c2c3b0(undefined4 *param_2); template<class... A> int m_FUN_10c2c3b0(A...); void __thiscall m_FUN_10c2c3d0(char param_2); template<class... A> int m_FUN_10c2c3d0(A...); void __thiscall m_FUN_10c2c4b0(undefined4 *param_2); template<class... A> int m_FUN_10c2c4b0(A...); void __thiscall m_FUN_10c32530(int *param_2); template<class... A> int m_FUN_10c32530(A...); void __thiscall m_FUN_10c32580(undefined4 param_2); template<class... A> int m_FUN_10c32580(A...); void __thiscall m_FUN_10c325d0(undefined4 param_2); template<class... A> int m_FUN_10c325d0(A...); undefined4 * __thiscall m_FUN_10c35420(int *param_2); template<class... A> int m_FUN_10c35420(A...); undefined4 __thiscall m_FUN_10c36790(byte param_2); template<class... A> int m_FUN_10c36790(A...); undefined4 __thiscall m_FUN_10c36930(byte param_2); template<class... A> int m_FUN_10c36930(A...); undefined4 * __thiscall m_FUN_10c36960(byte param_2); template<class... A> int m_FUN_10c36960(A...); void __thiscall m_FUN_10c374b0(int *param_2); template<class... A> int m_FUN_10c374b0(A...); void __thiscall m_FUN_10c37500(int *param_2); template<class... A> int m_FUN_10c37500(A...); undefined4 __thiscall m_FUN_10c380f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c380f0(A...); undefined4 * __thiscall m_FUN_10c39b00(int *param_2); template<class... A> int m_FUN_10c39b00(A...); undefined4 * __thiscall m_FUN_10c3a5c0(byte param_2); template<class... A> int m_FUN_10c3a5c0(A...); undefined4 __thiscall m_FUN_10c3a600(byte param_2); template<class... A> int m_FUN_10c3a600(A...); void __thiscall m_FUN_10c3a730(int *param_2); template<class... A> int m_FUN_10c3a730(A...); undefined4 __thiscall m_FUN_10c3ad50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c3ad50(A...); void __thiscall m_FUN_10c3b200(int param_2); template<class... A> int m_FUN_10c3b200(A...); void __thiscall m_FUN_10c3b9f0(undefined4 param_2,undefined8 param_3); template<class... A> int m_FUN_10c3b9f0(A...); int __thiscall m_FUN_10c3d3d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c3d3d0(A...); int __thiscall m_FUN_10c3d410(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c3d410(A...); int __thiscall m_FUN_10c42140(byte param_2); template<class... A> int m_FUN_10c42140(A...); undefined4 __thiscall m_FUN_10c42170(byte param_2); template<class... A> int m_FUN_10c42170(A...); void __thiscall m_FUN_10c471f0(int param_2); template<class... A> int m_FUN_10c471f0(A...); undefined4 * __thiscall m_FUN_10c475e0(int *param_2); template<class... A> int m_FUN_10c475e0(A...); undefined4 __thiscall m_FUN_10c47fc0(byte param_2); template<class... A> int m_FUN_10c47fc0(A...); undefined4 * __thiscall m_FUN_10c4a570(int *param_2); template<class... A> int m_FUN_10c4a570(A...); undefined4 * __thiscall m_FUN_10c4a5b0(int *param_2); template<class... A> int m_FUN_10c4a5b0(A...); undefined4 * __thiscall m_FUN_10c4ba30(byte param_2); template<class... A> int m_FUN_10c4ba30(A...); undefined4 * __thiscall m_FUN_10c4ba60(byte param_2); template<class... A> int m_FUN_10c4ba60(A...); undefined4 __thiscall m_FUN_10c4ba90(byte param_2); template<class... A> int m_FUN_10c4ba90(A...); undefined4 __thiscall m_FUN_10c4bac0(byte param_2); template<class... A> int m_FUN_10c4bac0(A...); undefined4 * __thiscall m_FUN_10c4baf0(byte param_2); template<class... A> int m_FUN_10c4baf0(A...); undefined4 __thiscall m_FUN_10c4bd10(byte param_2); template<class... A> int m_FUN_10c4bd10(A...); undefined4 * __thiscall m_FUN_10c4bdc0(byte param_2); template<class... A> int m_FUN_10c4bdc0(A...); char __thiscall m_FUN_10c4c900(undefined4 param_2); template<class... A> int m_FUN_10c4c900(A...); undefined4 * __thiscall m_FUN_10c4e560(int *param_2); template<class... A> int m_FUN_10c4e560(A...); undefined4 * __thiscall m_FUN_10c4e5a0(int *param_2); template<class... A> int m_FUN_10c4e5a0(A...); undefined4 * __thiscall m_FUN_10c4e5e0(int *param_2); template<class... A> int m_FUN_10c4e5e0(A...); undefined4 * __thiscall m_FUN_10c4e620(int *param_2); template<class... A> int m_FUN_10c4e620(A...); undefined4 * __thiscall m_FUN_10c4e660(int *param_2); template<class... A> int m_FUN_10c4e660(A...); undefined4 * __thiscall m_FUN_10c4e6a0(int *param_2); template<class... A> int m_FUN_10c4e6a0(A...); undefined4 * __thiscall m_FUN_10c4e6c0(int *param_2); template<class... A> int m_FUN_10c4e6c0(A...); undefined4 * __thiscall m_FUN_10c4e6e0(int *param_2); template<class... A> int m_FUN_10c4e6e0(A...); undefined4 * __thiscall m_FUN_10c4e700(int *param_2); template<class... A> int m_FUN_10c4e700(A...); undefined4 * __thiscall m_FUN_10c4ea80(undefined4 param_2); template<class... A> int m_FUN_10c4ea80(A...); undefined4 * __thiscall m_FUN_10c4ffe0(byte param_2); template<class... A> int m_FUN_10c4ffe0(A...); undefined4 * __thiscall m_FUN_10c50010(byte param_2); template<class... A> int m_FUN_10c50010(A...); undefined4 * __thiscall m_FUN_10c50040(byte param_2); template<class... A> int m_FUN_10c50040(A...); undefined4 * __thiscall m_FUN_10c50070(byte param_2); template<class... A> int m_FUN_10c50070(A...); undefined4 * __thiscall m_FUN_10c500a0(byte param_2); template<class... A> int m_FUN_10c500a0(A...); undefined4 * __thiscall m_FUN_10c500e0(byte param_2); template<class... A> int m_FUN_10c500e0(A...); undefined4 * __thiscall m_FUN_10c50120(byte param_2); template<class... A> int m_FUN_10c50120(A...); undefined4 * __thiscall m_FUN_10c50160(byte param_2); template<class... A> int m_FUN_10c50160(A...); undefined4 * __thiscall m_FUN_10c501a0(byte param_2); template<class... A> int m_FUN_10c501a0(A...); undefined4 * __thiscall m_FUN_10c501e0(byte param_2); template<class... A> int m_FUN_10c501e0(A...); undefined4 * __thiscall m_FUN_10c50220(byte param_2); template<class... A> int m_FUN_10c50220(A...); undefined4 * __thiscall m_FUN_10c50270(byte param_2); template<class... A> int m_FUN_10c50270(A...); undefined4 __thiscall m_FUN_10c502c0(byte param_2); template<class... A> int m_FUN_10c502c0(A...); undefined4 __thiscall m_FUN_10c502f0(byte param_2); template<class... A> int m_FUN_10c502f0(A...); undefined4 __thiscall m_FUN_10c50320(byte param_2); template<class... A> int m_FUN_10c50320(A...); undefined4 __thiscall m_FUN_10c50350(byte param_2); template<class... A> int m_FUN_10c50350(A...); undefined4 __thiscall m_FUN_10c50380(byte param_2); template<class... A> int m_FUN_10c50380(A...); undefined4 * __thiscall m_FUN_10c503b0(byte param_2); template<class... A> int m_FUN_10c503b0(A...); undefined4 * __thiscall m_FUN_10c50400(byte param_2); template<class... A> int m_FUN_10c50400(A...); undefined4 * __thiscall m_FUN_10c50450(byte param_2); template<class... A> int m_FUN_10c50450(A...); undefined4 * __thiscall m_FUN_10c504a0(byte param_2); template<class... A> int m_FUN_10c504a0(A...); undefined4 * __thiscall m_FUN_10c504f0(byte param_2); template<class... A> int m_FUN_10c504f0(A...); undefined4 * __thiscall m_FUN_10c505e0(byte param_2); template<class... A> int m_FUN_10c505e0(A...); undefined4 * __thiscall m_FUN_10c50610(byte param_2); template<class... A> int m_FUN_10c50610(A...); undefined4 * __thiscall m_FUN_10c50640(byte param_2); template<class... A> int m_FUN_10c50640(A...); undefined4 * __thiscall m_FUN_10c50670(byte param_2); template<class... A> int m_FUN_10c50670(A...); undefined4 * __thiscall m_FUN_10c506a0(byte param_2); template<class... A> int m_FUN_10c506a0(A...); undefined4 * __thiscall m_FUN_10c506d0(byte param_2); template<class... A> int m_FUN_10c506d0(A...); undefined4 * __thiscall m_FUN_10c50700(byte param_2); template<class... A> int m_FUN_10c50700(A...); undefined4 * __thiscall m_FUN_10c50740(byte param_2); template<class... A> int m_FUN_10c50740(A...); undefined4 * __thiscall m_FUN_10c50780(byte param_2); template<class... A> int m_FUN_10c50780(A...); undefined4 * __thiscall m_FUN_10c507c0(byte param_2); template<class... A> int m_FUN_10c507c0(A...); undefined4 * __thiscall m_FUN_10c50800(byte param_2); template<class... A> int m_FUN_10c50800(A...); undefined4 * __thiscall m_FUN_10c54bb0(int *param_2); template<class... A> int m_FUN_10c54bb0(A...); undefined4 * __thiscall m_FUN_10c54bf0(int *param_2); template<class... A> int m_FUN_10c54bf0(A...); undefined4 * __thiscall m_FUN_10c54c30(int *param_2); template<class... A> int m_FUN_10c54c30(A...); undefined4 * __thiscall m_FUN_10c54c70(int *param_2); template<class... A> int m_FUN_10c54c70(A...); undefined4 * __thiscall m_FUN_10c54cb0(int *param_2); template<class... A> int m_FUN_10c54cb0(A...); undefined4 * __thiscall m_FUN_10c54cd0(int *param_2); template<class... A> int m_FUN_10c54cd0(A...); undefined4 * __thiscall m_FUN_10c55ef0(byte param_2); template<class... A> int m_FUN_10c55ef0(A...); undefined4 * __thiscall m_FUN_10c55f20(byte param_2); template<class... A> int m_FUN_10c55f20(A...); undefined4 * __thiscall m_FUN_10c55f50(byte param_2); template<class... A> int m_FUN_10c55f50(A...); undefined4 * __thiscall m_FUN_10c55f90(byte param_2); template<class... A> int m_FUN_10c55f90(A...); undefined4 * __thiscall m_FUN_10c55fd0(byte param_2); template<class... A> int m_FUN_10c55fd0(A...); undefined4 * __thiscall m_FUN_10c56010(byte param_2); template<class... A> int m_FUN_10c56010(A...); undefined4 * __thiscall m_FUN_10c56050(byte param_2); template<class... A> int m_FUN_10c56050(A...); undefined4 * __thiscall m_FUN_10c56090(byte param_2); template<class... A> int m_FUN_10c56090(A...); undefined4 * __thiscall m_FUN_10c560e0(byte param_2); template<class... A> int m_FUN_10c560e0(A...); undefined4 __thiscall m_FUN_10c56130(byte param_2); template<class... A> int m_FUN_10c56130(A...); undefined4 __thiscall m_FUN_10c56160(byte param_2); template<class... A> int m_FUN_10c56160(A...); undefined4 __thiscall m_FUN_10c56190(byte param_2); template<class... A> int m_FUN_10c56190(A...); undefined4 __thiscall m_FUN_10c561c0(byte param_2); template<class... A> int m_FUN_10c561c0(A...); undefined4 * __thiscall m_FUN_10c561f0(byte param_2); template<class... A> int m_FUN_10c561f0(A...); undefined4 * __thiscall m_FUN_10c56240(byte param_2); template<class... A> int m_FUN_10c56240(A...); undefined4 * __thiscall m_FUN_10c56290(byte param_2); template<class... A> int m_FUN_10c56290(A...); undefined4 * __thiscall m_FUN_10c562e0(byte param_2); template<class... A> int m_FUN_10c562e0(A...); undefined4 * __thiscall m_FUN_10c56310(byte param_2); template<class... A> int m_FUN_10c56310(A...); undefined4 * __thiscall m_FUN_10c56340(byte param_2); template<class... A> int m_FUN_10c56340(A...); undefined4 * __thiscall m_FUN_10c56370(byte param_2); template<class... A> int m_FUN_10c56370(A...); undefined4 * __thiscall m_FUN_10c563a0(byte param_2); template<class... A> int m_FUN_10c563a0(A...); undefined4 * __thiscall m_FUN_10c563d0(byte param_2); template<class... A> int m_FUN_10c563d0(A...); undefined4 * __thiscall m_FUN_10c56410(byte param_2); template<class... A> int m_FUN_10c56410(A...); undefined4 * __thiscall m_FUN_10c56450(byte param_2); template<class... A> int m_FUN_10c56450(A...); undefined4 * __thiscall m_FUN_10c56490(byte param_2); template<class... A> int m_FUN_10c56490(A...); undefined4 * __thiscall m_FUN_10c59370(int *param_2); template<class... A> int m_FUN_10c59370(A...); undefined4 * __thiscall m_FUN_10c593b0(int *param_2); template<class... A> int m_FUN_10c593b0(A...); undefined4 * __thiscall m_FUN_10c593d0(int *param_2); template<class... A> int m_FUN_10c593d0(A...); undefined4 * __thiscall m_FUN_10c594a0(undefined4 param_2); template<class... A> int m_FUN_10c594a0(A...); undefined4 * __thiscall m_FUN_10c59980(byte param_2); template<class... A> int m_FUN_10c59980(A...); undefined4 * __thiscall m_FUN_10c599b0(byte param_2); template<class... A> int m_FUN_10c599b0(A...); undefined4 * __thiscall m_FUN_10c599f0(byte param_2); template<class... A> int m_FUN_10c599f0(A...); undefined4 * __thiscall m_FUN_10c59a30(byte param_2); template<class... A> int m_FUN_10c59a30(A...); undefined4 * __thiscall m_FUN_10c59a80(byte param_2); template<class... A> int m_FUN_10c59a80(A...); undefined4 __thiscall m_FUN_10c59ad0(byte param_2); template<class... A> int m_FUN_10c59ad0(A...); undefined4 * __thiscall m_FUN_10c59b00(byte param_2); template<class... A> int m_FUN_10c59b00(A...); undefined4 * __thiscall m_FUN_10c59b50(byte param_2); template<class... A> int m_FUN_10c59b50(A...); undefined4 * __thiscall m_FUN_10c59ba0(byte param_2); template<class... A> int m_FUN_10c59ba0(A...); undefined4 * __thiscall m_FUN_10c59bd0(byte param_2); template<class... A> int m_FUN_10c59bd0(A...); undefined4 * __thiscall m_FUN_10c59c00(byte param_2); template<class... A> int m_FUN_10c59c00(A...); undefined4 * __thiscall m_FUN_10c5b250(int param_2); template<class... A> int m_FUN_10c5b250(A...); undefined4 * __thiscall m_FUN_10c5b870(byte param_2); template<class... A> int m_FUN_10c5b870(A...); undefined4 * __thiscall m_FUN_10c5b8b0(byte param_2); template<class... A> int m_FUN_10c5b8b0(A...); undefined4 * __thiscall m_FUN_10c5b900(byte param_2); template<class... A> int m_FUN_10c5b900(A...); undefined4 * __thiscall m_FUN_10c5b950(byte param_2); template<class... A> int m_FUN_10c5b950(A...); undefined4 * __thiscall m_FUN_10c5bab0(byte param_2); template<class... A> int m_FUN_10c5bab0(A...); undefined4 * __thiscall m_FUN_10c5baf0(byte param_2); template<class... A> int m_FUN_10c5baf0(A...); void __thiscall m_FUN_10c5bbb0(short param_2); template<class... A> int m_FUN_10c5bbb0(A...); void __thiscall m_FUN_10c5bbf0(short param_2); template<class... A> int m_FUN_10c5bbf0(A...); void __thiscall m_FUN_10c5c970(short param_2); template<class... A> int m_FUN_10c5c970(A...); void __thiscall m_FUN_10c5cb70(short param_2); template<class... A> int m_FUN_10c5cb70(A...); void __thiscall m_FUN_10c5cbd0(undefined1 param_2); template<class... A> int m_FUN_10c5cbd0(A...); void __thiscall m_FUN_10c5cc20(short param_2); template<class... A> int m_FUN_10c5cc20(A...); void __thiscall m_FUN_10c5cc70(undefined1 param_2); template<class... A> int m_FUN_10c5cc70(A...); void __thiscall m_FUN_10c5d350(short param_2); template<class... A> int m_FUN_10c5d350(A...); void __thiscall m_FUN_10c5d490(undefined1 param_2); template<class... A> int m_FUN_10c5d490(A...); void __thiscall m_FUN_10c5d720(undefined1 param_2); template<class... A> int m_FUN_10c5d720(A...); void __thiscall m_FUN_10c5d770(short param_2); template<class... A> int m_FUN_10c5d770(A...); void __thiscall m_FUN_10c5d7c0(undefined1 param_2); template<class... A> int m_FUN_10c5d7c0(A...); void __thiscall m_FUN_10c5d9b0(int *param_2); template<class... A> int m_FUN_10c5d9b0(A...); void __thiscall m_FUN_10c5d9e0(undefined1 param_2); template<class... A> int m_FUN_10c5d9e0(A...); void __thiscall m_FUN_10c5da30(short param_2); template<class... A> int m_FUN_10c5da30(A...); void __thiscall m_FUN_10c5da80(short param_2); template<class... A> int m_FUN_10c5da80(A...); void __thiscall m_FUN_10c5dac0(short param_2); template<class... A> int m_FUN_10c5dac0(A...); void __thiscall m_FUN_10c5db10(short param_2); template<class... A> int m_FUN_10c5db10(A...); void __thiscall m_FUN_10c5db60(undefined1 param_2); template<class... A> int m_FUN_10c5db60(A...); void __thiscall m_FUN_10c5dba0(undefined4 param_2); template<class... A> int m_FUN_10c5dba0(A...); void __thiscall m_FUN_10c5dbf0(int *param_2); template<class... A> int m_FUN_10c5dbf0(A...); void __thiscall m_FUN_10c5dc20(short param_2); template<class... A> int m_FUN_10c5dc20(A...); void __thiscall m_FUN_10c5e1e0(undefined4 param_2); template<class... A> int m_FUN_10c5e1e0(A...); int __thiscall m_FUN_10c5e2d0(int *param_2); template<class... A> int m_FUN_10c5e2d0(A...); int __thiscall m_FUN_10c5e310(SCStr *param_2); template<class... A> int m_FUN_10c5e310(A...); undefined4 * __thiscall m_FUN_10c5f430(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c5f430(A...); SCStr * __thiscall m_FUN_10c5f840(SCStr *param_2); template<class... A> int m_FUN_10c5f840(A...); SCStr * __thiscall m_FUN_10c5f870(SCStr *param_2); template<class... A> int m_FUN_10c5f870(A...); int * __thiscall m_FUN_10c5fa70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c5fa70(A...); undefined4 __thiscall m_FUN_10c656d0(byte param_2); template<class... A> int m_FUN_10c656d0(A...); undefined4 __thiscall m_FUN_10c65700(byte param_2); template<class... A> int m_FUN_10c65700(A...); undefined4 __thiscall m_FUN_10c65730(byte param_2); template<class... A> int m_FUN_10c65730(A...); void __thiscall m_FUN_10c67ab0(int param_2); template<class... A> int m_FUN_10c67ab0(A...); undefined4 __thiscall m_FUN_10c68fc0(byte param_2); template<class... A> int m_FUN_10c68fc0(A...); undefined4 __thiscall m_FUN_10c68ff0(byte param_2); template<class... A> int m_FUN_10c68ff0(A...); undefined4 __thiscall m_FUN_10c69020(byte param_2); template<class... A> int m_FUN_10c69020(A...); undefined4 __thiscall m_FUN_10c69050(byte param_2); template<class... A> int m_FUN_10c69050(A...); undefined4 __thiscall m_FUN_10c69080(byte param_2); template<class... A> int m_FUN_10c69080(A...); undefined4 __thiscall m_FUN_10c690b0(byte param_2); template<class... A> int m_FUN_10c690b0(A...); undefined4 __thiscall m_FUN_10c690e0(byte param_2); template<class... A> int m_FUN_10c690e0(A...); undefined4 __thiscall m_FUN_10c69110(byte param_2); template<class... A> int m_FUN_10c69110(A...); undefined4 __thiscall m_FUN_10c69140(byte param_2); template<class... A> int m_FUN_10c69140(A...); SCStr * __thiscall m_FUN_10c69c70(SCStr *param_2); template<class... A> int m_FUN_10c69c70(A...); undefined4 __thiscall m_FUN_10c69c90(undefined4 param_2); template<class... A> int m_FUN_10c69c90(A...); void __thiscall m_FUN_10c6a450(int param_2); template<class... A> int m_FUN_10c6a450(A...); void __thiscall m_FUN_10c6a490(int param_2); template<class... A> int m_FUN_10c6a490(A...); void __thiscall m_FUN_10c6a520(undefined4 param_2,int param_3); template<class... A> int m_FUN_10c6a520(A...); undefined4 * __thiscall m_FUN_10c6d620(byte param_2); template<class... A> int m_FUN_10c6d620(A...); undefined4 * __thiscall m_FUN_10c6d660(byte param_2); template<class... A> int m_FUN_10c6d660(A...); undefined1 __thiscall m_FUN_10c6fcb0(char param_2); template<class... A> int m_FUN_10c6fcb0(A...); void __thiscall m_FUN_10c73390(int param_2); template<class... A> int m_FUN_10c73390(A...); int __thiscall m_FUN_10c76c60(int param_2); template<class... A> int m_FUN_10c76c60(A...); int __thiscall m_FUN_10c76c80(uint param_2); template<class... A> int m_FUN_10c76c80(A...); undefined4 * __thiscall m_FUN_10c77060(byte param_2); template<class... A> int m_FUN_10c77060(A...); int __thiscall m_FUN_10c770a0(byte param_2); template<class... A> int m_FUN_10c770a0(A...); undefined4 * __thiscall m_FUN_10c771c0(byte param_2); template<class... A> int m_FUN_10c771c0(A...); int __thiscall m_FUN_10c77200(byte param_2); template<class... A> int m_FUN_10c77200(A...); facet * __thiscall m_FUN_10c77230(byte param_2); template<class... A> int m_FUN_10c77230(A...); undefined4 * __thiscall m_FUN_10c77280(byte param_2); template<class... A> int m_FUN_10c77280(A...); undefined4 * __thiscall m_FUN_10c77480(byte param_2); template<class... A> int m_FUN_10c77480(A...); undefined4 * __thiscall m_FUN_10c774b0(byte param_2); template<class... A> int m_FUN_10c774b0(A...); undefined4 * __thiscall m_FUN_10c774e0(byte param_2); template<class... A> int m_FUN_10c774e0(A...); undefined4 * __thiscall m_FUN_10c77510(byte param_2); template<class... A> int m_FUN_10c77510(A...); undefined4 * __thiscall m_FUN_10c77540(byte param_2); template<class... A> int m_FUN_10c77540(A...); undefined4 * __thiscall m_FUN_10c77570(byte param_2); template<class... A> int m_FUN_10c77570(A...); undefined4 * __thiscall m_FUN_10c77630(byte param_2); template<class... A> int m_FUN_10c77630(A...); undefined4 * __thiscall m_FUN_10c77660(byte param_2); template<class... A> int m_FUN_10c77660(A...); undefined4 __thiscall m_FUN_10c7ad10(char param_2); template<class... A> int m_FUN_10c7ad10(A...); void __thiscall m_FUN_10c7c230(_Locinfo *param_2); template<class... A> int m_FUN_10c7c230(A...); void __thiscall m_FUN_10c7c260(undefined1 param_2); template<class... A> int m_FUN_10c7c260(A...); void __thiscall m_FUN_10c7dc60(int param_2); template<class... A> int m_FUN_10c7dc60(A...); uint __thiscall m_FUN_10c7e120(char *param_2,char *param_3,char *param_4,char *param_5); template<class... A> int m_FUN_10c7e120(A...); void __thiscall m_FUN_10c7fcd0(uint param_2); template<class... A> int m_FUN_10c7fcd0(A...); undefined4 * __thiscall m_FUN_10c81670(byte param_2); template<class... A> int m_FUN_10c81670(A...); undefined4 * __thiscall m_FUN_10c816a0(byte param_2); template<class... A> int m_FUN_10c816a0(A...); undefined4 __thiscall m_FUN_10c816d0(byte param_2); template<class... A> int m_FUN_10c816d0(A...); undefined4 __thiscall m_FUN_10c81700(byte param_2); template<class... A> int m_FUN_10c81700(A...); undefined4 __thiscall m_FUN_10c81820(byte param_2); template<class... A> int m_FUN_10c81820(A...); undefined4 __thiscall m_FUN_10c81850(byte param_2); template<class... A> int m_FUN_10c81850(A...); undefined4 * __thiscall m_FUN_10c81930(byte param_2); template<class... A> int m_FUN_10c81930(A...); undefined4 * __thiscall m_FUN_10c81970(byte param_2); template<class... A> int m_FUN_10c81970(A...); SCStr * __thiscall m_FUN_10c81ef0(SCStr *param_2); template<class... A> int m_FUN_10c81ef0(A...); undefined4 * __thiscall m_FUN_10c83a10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c83a10(A...); undefined4 * __thiscall m_FUN_10c83ce0(undefined4 param_2); template<class... A> int m_FUN_10c83ce0(A...); SCStr * __thiscall m_FUN_10c84410(SCStr *param_2); template<class... A> int m_FUN_10c84410(A...); int __thiscall m_FUN_10c85140(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c85140(A...); int __thiscall m_FUN_10c85180(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c85180(A...); int __thiscall m_FUN_10c851c0(SCStr *param_2); template<class... A> int m_FUN_10c851c0(A...); void __thiscall m_FUN_10c87b70(undefined4 *param_2); template<class... A> int m_FUN_10c87b70(A...); undefined4 * __thiscall m_FUN_10c8a240(byte param_2); template<class... A> int m_FUN_10c8a240(A...); undefined4 __thiscall m_FUN_10c8a4a0(byte param_2); template<class... A> int m_FUN_10c8a4a0(A...); SCStr * __thiscall m_FUN_10c8d640(SCStr *param_2); template<class... A> int m_FUN_10c8d640(A...); SCStr * __thiscall m_FUN_10c8da20(SCStr *param_2); template<class... A> int m_FUN_10c8da20(A...); SCStr * __thiscall m_FUN_10c8da40(SCStr *param_2); template<class... A> int m_FUN_10c8da40(A...); undefined4 __thiscall m_FUN_10c8dce0(undefined4 param_2); template<class... A> int m_FUN_10c8dce0(A...); SCStr * __thiscall m_FUN_10c8dee0(SCStr *param_2); template<class... A> int m_FUN_10c8dee0(A...); void __thiscall m_FUN_10c92d70(undefined4 *param_2); template<class... A> int m_FUN_10c92d70(A...); undefined4 * __thiscall m_FUN_10c92dc0(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_10c92dc0(A...); undefined4 __thiscall m_FUN_10c93df0(byte param_2); template<class... A> int m_FUN_10c93df0(A...); int * __thiscall m_FUN_10c97610(int *param_2); template<class... A> int m_FUN_10c97610(A...); undefined4 __thiscall m_FUN_10c97630(undefined4 param_2); template<class... A> int m_FUN_10c97630(A...); SCStr * __thiscall m_FUN_10c986f0(SCStr *param_2); template<class... A> int m_FUN_10c986f0(A...); SCStr * __thiscall m_FUN_10c98710(SCStr *param_2); template<class... A> int m_FUN_10c98710(A...); SCStr * __thiscall m_FUN_10c98c80(SCStr *param_2); template<class... A> int m_FUN_10c98c80(A...); int * __thiscall m_FUN_10c98cb0(int *param_2); template<class... A> int m_FUN_10c98cb0(A...); void __thiscall m_FUN_10c9c0f0(SCStr *param_2); template<class... A> int m_FUN_10c9c0f0(A...); void __thiscall m_FUN_10c9cfa0(SCStr *param_2); template<class... A> int m_FUN_10c9cfa0(A...); void __thiscall m_FUN_10c9cfe0(SCStr *param_2); template<class... A> int m_FUN_10c9cfe0(A...); undefined4 * __thiscall m_FUN_10ca24a0(byte param_2); template<class... A> int m_FUN_10ca24a0(A...); undefined4 * __thiscall m_FUN_10ca2610(byte param_2); template<class... A> int m_FUN_10ca2610(A...); undefined4 * __thiscall m_FUN_10ca28b0(byte param_2); template<class... A> int m_FUN_10ca28b0(A...); undefined4 * __thiscall m_FUN_10ca28e0(byte param_2); template<class... A> int m_FUN_10ca28e0(A...); undefined4 * __thiscall m_FUN_10ca2910(byte param_2); template<class... A> int m_FUN_10ca2910(A...); undefined4 * __thiscall m_FUN_10ca2940(byte param_2); template<class... A> int m_FUN_10ca2940(A...); undefined4 * __thiscall m_FUN_10ca2a40(byte param_2); template<class... A> int m_FUN_10ca2a40(A...); undefined4 * __thiscall m_FUN_10ca2a70(byte param_2); template<class... A> int m_FUN_10ca2a70(A...); undefined4 * __thiscall m_FUN_10ca2b90(byte param_2); template<class... A> int m_FUN_10ca2b90(A...); undefined4 __thiscall m_FUN_10ca2bc0(byte param_2); template<class... A> int m_FUN_10ca2bc0(A...); undefined4 * __thiscall m_FUN_10ca2bf0(byte param_2); template<class... A> int m_FUN_10ca2bf0(A...); undefined4 * __thiscall m_FUN_10ca2c20(byte param_2); template<class... A> int m_FUN_10ca2c20(A...); undefined4 * __thiscall m_FUN_10ca2c50(byte param_2); template<class... A> int m_FUN_10ca2c50(A...); undefined4 __thiscall m_FUN_10ca2c80(byte param_2); template<class... A> int m_FUN_10ca2c80(A...); undefined4 * __thiscall m_FUN_10ca2cb0(byte param_2); template<class... A> int m_FUN_10ca2cb0(A...); undefined4 * __thiscall m_FUN_10ca2ce0(byte param_2); template<class... A> int m_FUN_10ca2ce0(A...); undefined4 * __thiscall m_FUN_10ca2d10(byte param_2); template<class... A> int m_FUN_10ca2d10(A...); undefined4 * __thiscall m_FUN_10ca2d40(byte param_2); template<class... A> int m_FUN_10ca2d40(A...); undefined4 * __thiscall m_FUN_10ca2d70(byte param_2); template<class... A> int m_FUN_10ca2d70(A...); undefined4 * __thiscall m_FUN_10ca2da0(byte param_2); template<class... A> int m_FUN_10ca2da0(A...); undefined4 * __thiscall m_FUN_10ca2dd0(byte param_2); template<class... A> int m_FUN_10ca2dd0(A...); undefined4 * __thiscall m_FUN_10ca2e00(byte param_2); template<class... A> int m_FUN_10ca2e00(A...); undefined4 * __thiscall m_FUN_10ca2f40(byte param_2); template<class... A> int m_FUN_10ca2f40(A...); undefined4 * __thiscall m_FUN_10ca2f70(byte param_2); template<class... A> int m_FUN_10ca2f70(A...); void __thiscall m_FUN_10ca3260(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ca3260(A...); void __thiscall m_FUN_10ca32c0(undefined4 *param_2); template<class... A> int m_FUN_10ca32c0(A...); void __thiscall m_FUN_10ca3b90(int param_2); template<class... A> int m_FUN_10ca3b90(A...); void __thiscall m_FUN_10ca3bc0(int *param_2); template<class... A> int m_FUN_10ca3bc0(A...); undefined4 __thiscall m_FUN_10ca9450(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ca9450(A...); undefined4 __thiscall m_FUN_10ca9a70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ca9a70(A...); void __thiscall m_FUN_10cb68f0(int param_2); template<class... A> int m_FUN_10cb68f0(A...); undefined4 * __thiscall m_FUN_10cb7a70(int *param_2); template<class... A> int m_FUN_10cb7a70(A...); undefined4 * __thiscall m_FUN_10cb7ab0(int *param_2); template<class... A> int m_FUN_10cb7ab0(A...); undefined4 * __thiscall m_FUN_10cb7af0(int *param_2); template<class... A> int m_FUN_10cb7af0(A...); undefined4 * __thiscall m_FUN_10cb7b30(int *param_2); template<class... A> int m_FUN_10cb7b30(A...); int __thiscall m_FUN_10cb8b30(SCStr *param_2); template<class... A> int m_FUN_10cb8b30(A...); undefined4 * __thiscall m_FUN_10cb9730(byte param_2); template<class... A> int m_FUN_10cb9730(A...); undefined4 * __thiscall m_FUN_10cb9810(byte param_2); template<class... A> int m_FUN_10cb9810(A...); SCStr * __thiscall m_FUN_10cbaa00(SCStr *param_2); template<class... A> int m_FUN_10cbaa00(A...); undefined4 __thiscall m_FUN_10cbd320(byte param_2); template<class... A> int m_FUN_10cbd320(A...); void __thiscall m_FUN_10cbd350(undefined4 *param_2); template<class... A> int m_FUN_10cbd350(A...); void __thiscall m_FUN_10cbd370(char param_2); template<class... A> int m_FUN_10cbd370(A...); void __thiscall m_FUN_10cbd3c0(undefined4 *param_2); template<class... A> int m_FUN_10cbd3c0(A...); int * __thiscall m_FUN_10cbd9d0(int *param_2,int param_3); template<class... A> int m_FUN_10cbd9d0(A...); SCStr * __thiscall m_FUN_10cbda20(SCStr *param_2); template<class... A> int m_FUN_10cbda20(A...); bool __thiscall m_FUN_10cbda80(int param_2); template<class... A> int m_FUN_10cbda80(A...); void __thiscall m_FUN_10cbfe00(int *param_2); template<class... A> int m_FUN_10cbfe00(A...); undefined4 * __thiscall m_FUN_10cc0cd0(int *param_2); template<class... A> int m_FUN_10cc0cd0(A...); undefined4 * __thiscall m_FUN_10cc1990(byte param_2); template<class... A> int m_FUN_10cc1990(A...); undefined4 * __thiscall m_FUN_10cc19c0(byte param_2); template<class... A> int m_FUN_10cc19c0(A...); undefined4 * __thiscall m_FUN_10cc19f0(byte param_2); template<class... A> int m_FUN_10cc19f0(A...); undefined4 __thiscall m_FUN_10cc1a30(byte param_2); template<class... A> int m_FUN_10cc1a30(A...); undefined4 * __thiscall m_FUN_10cc1a60(byte param_2); template<class... A> int m_FUN_10cc1a60(A...); undefined4 __thiscall m_FUN_10cc1ab0(byte param_2); template<class... A> int m_FUN_10cc1ab0(A...); undefined4 * __thiscall m_FUN_10cc1ae0(byte param_2); template<class... A> int m_FUN_10cc1ae0(A...); undefined4 * __thiscall m_FUN_10cc1b10(byte param_2); template<class... A> int m_FUN_10cc1b10(A...); SCStr * __thiscall m_FUN_10cc2280(SCStr *param_2); template<class... A> int m_FUN_10cc2280(A...); SCStr * __thiscall m_FUN_10cc2440(SCStr *param_2); template<class... A> int m_FUN_10cc2440(A...); SCStr * __thiscall m_FUN_10cc2830(SCStr *param_2); template<class... A> int m_FUN_10cc2830(A...); SCStr * __thiscall m_FUN_10cc2a70(SCStr *param_2); template<class... A> int m_FUN_10cc2a70(A...); undefined4 * __thiscall m_FUN_10ccca00(byte param_2); template<class... A> int m_FUN_10ccca00(A...); undefined4 * __thiscall m_FUN_10ccca30(byte param_2); template<class... A> int m_FUN_10ccca30(A...); undefined4 * __thiscall m_FUN_10ccca60(byte param_2); template<class... A> int m_FUN_10ccca60(A...); undefined4 * __thiscall m_FUN_10ccca90(byte param_2); template<class... A> int m_FUN_10ccca90(A...); undefined4 * __thiscall m_FUN_10cccac0(byte param_2); template<class... A> int m_FUN_10cccac0(A...); undefined4 * __thiscall m_FUN_10cccaf0(byte param_2); template<class... A> int m_FUN_10cccaf0(A...); undefined4 * __thiscall m_FUN_10cccb20(byte param_2); template<class... A> int m_FUN_10cccb20(A...); undefined4 * __thiscall m_FUN_10cccb50(byte param_2); template<class... A> int m_FUN_10cccb50(A...); undefined4 * __thiscall m_FUN_10cccb80(byte param_2); template<class... A> int m_FUN_10cccb80(A...); undefined4 * __thiscall m_FUN_10cccbb0(byte param_2); template<class... A> int m_FUN_10cccbb0(A...); undefined4 __thiscall m_FUN_10cccbe0(byte param_2); template<class... A> int m_FUN_10cccbe0(A...); undefined4 __thiscall m_FUN_10cccc10(byte param_2); template<class... A> int m_FUN_10cccc10(A...); undefined4 __thiscall m_FUN_10cccc40(byte param_2); template<class... A> int m_FUN_10cccc40(A...); undefined4 __thiscall m_FUN_10cccc70(byte param_2); template<class... A> int m_FUN_10cccc70(A...); undefined4 __thiscall m_FUN_10cccca0(byte param_2); template<class... A> int m_FUN_10cccca0(A...); undefined4 __thiscall m_FUN_10ccccd0(byte param_2); template<class... A> int m_FUN_10ccccd0(A...); undefined4 __thiscall m_FUN_10cccd00(byte param_2); template<class... A> int m_FUN_10cccd00(A...); undefined4 __thiscall m_FUN_10cccd30(byte param_2); template<class... A> int m_FUN_10cccd30(A...); undefined4 __thiscall m_FUN_10cccd60(byte param_2); template<class... A> int m_FUN_10cccd60(A...); undefined4 __thiscall m_FUN_10cccd90(byte param_2); template<class... A> int m_FUN_10cccd90(A...); undefined4 __thiscall m_FUN_10cccdc0(byte param_2); template<class... A> int m_FUN_10cccdc0(A...); undefined4 __thiscall m_FUN_10cccdf0(byte param_2); template<class... A> int m_FUN_10cccdf0(A...); undefined4 __thiscall m_FUN_10ccce20(byte param_2); template<class... A> int m_FUN_10ccce20(A...); undefined4 __thiscall m_FUN_10ccce50(byte param_2); template<class... A> int m_FUN_10ccce50(A...); undefined4 __thiscall m_FUN_10ccce80(byte param_2); template<class... A> int m_FUN_10ccce80(A...); undefined4 __thiscall m_FUN_10ccceb0(byte param_2); template<class... A> int m_FUN_10ccceb0(A...); undefined4 __thiscall m_FUN_10cccee0(byte param_2); template<class... A> int m_FUN_10cccee0(A...); undefined4 * __thiscall m_FUN_10ccd610(byte param_2); template<class... A> int m_FUN_10ccd610(A...); undefined4 * __thiscall m_FUN_10ccd6f0(byte param_2); template<class... A> int m_FUN_10ccd6f0(A...); undefined4 * __thiscall m_FUN_10ccd730(byte param_2); template<class... A> int m_FUN_10ccd730(A...); undefined4 * __thiscall m_FUN_10ccd770(byte param_2); template<class... A> int m_FUN_10ccd770(A...); undefined4 * __thiscall m_FUN_10ccd7b0(byte param_2); template<class... A> int m_FUN_10ccd7b0(A...); undefined4 * __thiscall m_FUN_10ccd7f0(byte param_2); template<class... A> int m_FUN_10ccd7f0(A...); undefined4 * __thiscall m_FUN_10ccd940(byte param_2); template<class... A> int m_FUN_10ccd940(A...); undefined4 * __thiscall m_FUN_10ccda20(byte param_2); template<class... A> int m_FUN_10ccda20(A...); int * __thiscall m_FUN_10cd37b0(int *param_2); template<class... A> int m_FUN_10cd37b0(A...); SCStr * __thiscall m_FUN_10cd3820(SCStr *param_2); template<class... A> int m_FUN_10cd3820(A...); SCStr * __thiscall m_FUN_10cd3a90(SCStr *param_2); template<class... A> int m_FUN_10cd3a90(A...); int * __thiscall m_FUN_10cd3c40(int *param_2); template<class... A> int m_FUN_10cd3c40(A...); int * __thiscall m_FUN_10cd4010(int *param_2,int param_3); template<class... A> int m_FUN_10cd4010(A...); void __thiscall m_FUN_10cd7cb0(int *param_2); template<class... A> int m_FUN_10cd7cb0(A...); void __thiscall m_FUN_10cd9af0(undefined4 param_2); template<class... A> int m_FUN_10cd9af0(A...); void __thiscall m_FUN_10cdaa70(undefined4 param_2); template<class... A> int m_FUN_10cdaa70(A...); undefined4 * __thiscall m_FUN_10cdb1d0(int *param_2); template<class... A> int m_FUN_10cdb1d0(A...); undefined4 * __thiscall m_FUN_10cdb210(int *param_2); template<class... A> int m_FUN_10cdb210(A...); undefined4 * __thiscall m_FUN_10cdb250(int *param_2); template<class... A> int m_FUN_10cdb250(A...); undefined4 * __thiscall m_FUN_10cdc590(byte param_2); template<class... A> int m_FUN_10cdc590(A...); undefined4 * __thiscall m_FUN_10cdc5c0(byte param_2); template<class... A> int m_FUN_10cdc5c0(A...); undefined4 * __thiscall m_FUN_10cdc5f0(byte param_2); template<class... A> int m_FUN_10cdc5f0(A...); undefined4 * __thiscall m_FUN_10cdc620(byte param_2); template<class... A> int m_FUN_10cdc620(A...); undefined4 * __thiscall m_FUN_10cdc660(byte param_2); template<class... A> int m_FUN_10cdc660(A...); undefined4 * __thiscall m_FUN_10cdc6a0(byte param_2); template<class... A> int m_FUN_10cdc6a0(A...); undefined4 __thiscall m_FUN_10cdc6e0(byte param_2); template<class... A> int m_FUN_10cdc6e0(A...); undefined4 __thiscall m_FUN_10cdc710(byte param_2); template<class... A> int m_FUN_10cdc710(A...); undefined4 __thiscall m_FUN_10cdc740(byte param_2); template<class... A> int m_FUN_10cdc740(A...); undefined4 * __thiscall m_FUN_10cdc770(byte param_2); template<class... A> int m_FUN_10cdc770(A...); undefined4 * __thiscall m_FUN_10cdc7c0(byte param_2); template<class... A> int m_FUN_10cdc7c0(A...); undefined4 * __thiscall m_FUN_10cdc810(byte param_2); template<class... A> int m_FUN_10cdc810(A...); undefined4 * __thiscall m_FUN_10cdc940(byte param_2); template<class... A> int m_FUN_10cdc940(A...); undefined4 * __thiscall m_FUN_10cdc970(byte param_2); template<class... A> int m_FUN_10cdc970(A...); undefined4 * __thiscall m_FUN_10cdc9a0(byte param_2); template<class... A> int m_FUN_10cdc9a0(A...); undefined4 * __thiscall m_FUN_10cdc9d0(byte param_2); template<class... A> int m_FUN_10cdc9d0(A...); undefined4 * __thiscall m_FUN_10cdcb60(byte param_2); template<class... A> int m_FUN_10cdcb60(A...); undefined4 * __thiscall m_FUN_10cdcba0(byte param_2); template<class... A> int m_FUN_10cdcba0(A...); SCStr * __thiscall m_FUN_10cddac0(SCStr *param_2); template<class... A> int m_FUN_10cddac0(A...); undefined4 __thiscall m_FUN_10cdf070(undefined4 param_2); template<class... A> int m_FUN_10cdf070(A...); undefined4 __thiscall m_FUN_10cdf0a0(undefined4 param_2); template<class... A> int m_FUN_10cdf0a0(A...); undefined4 * __thiscall m_FUN_10cdfd00(byte param_2); template<class... A> int m_FUN_10cdfd00(A...); undefined4 __thiscall m_FUN_10cdfd40(byte param_2); template<class... A> int m_FUN_10cdfd40(A...); void __thiscall m_FUN_10cdfda0(int param_2); template<class... A> int m_FUN_10cdfda0(A...); void __thiscall m_FUN_10ce0ad0(undefined4 param_2); template<class... A> int m_FUN_10ce0ad0(A...); undefined4 * __thiscall m_FUN_10ce0d90(int *param_2); template<class... A> int m_FUN_10ce0d90(A...); undefined4 * __thiscall m_FUN_10ce0dd0(int *param_2); template<class... A> int m_FUN_10ce0dd0(A...); undefined4 * __thiscall m_FUN_10ce1480(byte param_2); template<class... A> int m_FUN_10ce1480(A...); undefined4 * __thiscall m_FUN_10ce14c0(byte param_2); template<class... A> int m_FUN_10ce14c0(A...); undefined4 __thiscall m_FUN_10ce1500(byte param_2); template<class... A> int m_FUN_10ce1500(A...); undefined4 * __thiscall m_FUN_10ce1530(byte param_2); template<class... A> int m_FUN_10ce1530(A...); undefined4 * __thiscall m_FUN_10ce1560(byte param_2); template<class... A> int m_FUN_10ce1560(A...); undefined4 * __thiscall m_FUN_10ce16b0(byte param_2); template<class... A> int m_FUN_10ce16b0(A...); SCStr * __thiscall m_FUN_10ce1a40(SCStr *param_2); template<class... A> int m_FUN_10ce1a40(A...); undefined4 * __thiscall m_FUN_10ce22e0(int *param_2); template<class... A> int m_FUN_10ce22e0(A...); undefined4 * __thiscall m_FUN_10ce2600(byte param_2); template<class... A> int m_FUN_10ce2600(A...); undefined4 * __thiscall m_FUN_10ce2630(byte param_2); template<class... A> int m_FUN_10ce2630(A...); undefined4 * __thiscall m_FUN_10ce2670(byte param_2); template<class... A> int m_FUN_10ce2670(A...); void __thiscall m_FUN_10ce3280(undefined4 *param_2); template<class... A> int m_FUN_10ce3280(A...); undefined4 * __thiscall m_FUN_10ce37b0(byte param_2); template<class... A> int m_FUN_10ce37b0(A...); void __thiscall m_FUN_10ce39c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ce39c0(A...); int * __thiscall m_FUN_10ce4000(int *param_2,uint param_3); template<class... A> int m_FUN_10ce4000(A...); void __thiscall m_FUN_10ce4c60(undefined4 *param_2); template<class... A> int m_FUN_10ce4c60(A...); int __thiscall m_FUN_10ce5cd0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ce5cd0(A...); void __thiscall m_FUN_10ce64d0(int *param_2,SCStr *param_3); template<class... A> int m_FUN_10ce64d0(A...); undefined4 * __thiscall m_FUN_10ce66c0(int *param_2); template<class... A> int m_FUN_10ce66c0(A...); undefined4 * __thiscall m_FUN_10ce6700(int *param_2); template<class... A> int m_FUN_10ce6700(A...); undefined4 * __thiscall m_FUN_10ce6740(int *param_2); template<class... A> int m_FUN_10ce6740(A...); undefined4 * __thiscall m_FUN_10ce6780(int *param_2); template<class... A> int m_FUN_10ce6780(A...); undefined4 * __thiscall m_FUN_10ce7a40(byte param_2); template<class... A> int m_FUN_10ce7a40(A...); undefined4 __thiscall m_FUN_10ce7a80(byte param_2); template<class... A> int m_FUN_10ce7a80(A...); undefined4 __thiscall m_FUN_10ce7ab0(byte param_2); template<class... A> int m_FUN_10ce7ab0(A...); undefined4 __thiscall m_FUN_10ce7b70(byte param_2); template<class... A> int m_FUN_10ce7b70(A...); undefined4 * __thiscall m_FUN_10ce7ba0(byte param_2); template<class... A> int m_FUN_10ce7ba0(A...); uint __thiscall m_FUN_10ce9470(SCStr *param_2); template<class... A> int m_FUN_10ce9470(A...); void __thiscall m_FUN_10cee1c0(undefined4 *param_2); template<class... A> int m_FUN_10cee1c0(A...); undefined4 * __thiscall m_FUN_10cee310(int *param_2); template<class... A> int m_FUN_10cee310(A...); undefined4 __thiscall m_FUN_10ceed70(byte param_2); template<class... A> int m_FUN_10ceed70(A...); undefined4 __thiscall m_FUN_10ceeda0(byte param_2); template<class... A> int m_FUN_10ceeda0(A...); void __thiscall m_FUN_10ceee20(int *param_2); template<class... A> int m_FUN_10ceee20(A...); undefined4 * __thiscall m_FUN_10cefaa0(undefined4 *param_2); template<class... A> int m_FUN_10cefaa0(A...); void __thiscall m_FUN_10cf0930(undefined4 *param_2); template<class... A> int m_FUN_10cf0930(A...); undefined4 * __thiscall m_FUN_10cf2cc0(int *param_2); template<class... A> int m_FUN_10cf2cc0(A...); undefined4 * __thiscall m_FUN_10cf2d00(int *param_2); template<class... A> int m_FUN_10cf2d00(A...); undefined4 __thiscall m_FUN_10cf3340(byte param_2); template<class... A> int m_FUN_10cf3340(A...); void __thiscall m_FUN_10cf3370(undefined4 *param_2); template<class... A> int m_FUN_10cf3370(A...); void __thiscall m_FUN_10cf3390(undefined4 *param_2); template<class... A> int m_FUN_10cf3390(A...); void __thiscall m_FUN_10cf33b0(char param_2); template<class... A> int m_FUN_10cf33b0(A...); void __thiscall m_FUN_10cf33d0(char param_2); template<class... A> int m_FUN_10cf33d0(A...); void __thiscall m_FUN_10cf3450(undefined4 *param_2); template<class... A> int m_FUN_10cf3450(A...); void __thiscall m_FUN_10cf3470(undefined4 *param_2); template<class... A> int m_FUN_10cf3470(A...); int * __thiscall m_FUN_10cf34e0(int *param_2); template<class... A> int m_FUN_10cf34e0(A...); SCStr * __thiscall m_FUN_10cf35c0(SCStr *param_2); template<class... A> int m_FUN_10cf35c0(A...); void __thiscall m_FUN_10cf35e0(int *param_2); template<class... A> int m_FUN_10cf35e0(A...); void __thiscall m_FUN_10cf3630(int *param_2); template<class... A> int m_FUN_10cf3630(A...); void __thiscall m_FUN_10cf3940(uint param_2); template<class... A> int m_FUN_10cf3940(A...); undefined4 * __thiscall m_FUN_10cf3fe0(int *param_2); template<class... A> int m_FUN_10cf3fe0(A...); undefined4 * __thiscall m_FUN_10cf4530(byte param_2); template<class... A> int m_FUN_10cf4530(A...); void __thiscall m_FUN_10cf49d0(undefined4 *param_2); template<class... A> int m_FUN_10cf49d0(A...); void __thiscall m_FUN_10cf5250(int *param_2); template<class... A> int m_FUN_10cf5250(A...); undefined4 * __thiscall m_FUN_10cf5610(int *param_2); template<class... A> int m_FUN_10cf5610(A...); undefined4 * __thiscall m_FUN_10cf5c50(byte param_2); template<class... A> int m_FUN_10cf5c50(A...); undefined4 * __thiscall m_FUN_10cf5c80(byte param_2); template<class... A> int m_FUN_10cf5c80(A...); undefined4 __thiscall m_FUN_10cf5cc0(byte param_2); template<class... A> int m_FUN_10cf5cc0(A...); undefined4 * __thiscall m_FUN_10cf5cf0(byte param_2); template<class... A> int m_FUN_10cf5cf0(A...); SCStr * __thiscall m_FUN_10cf6150(SCStr *param_2); template<class... A> int m_FUN_10cf6150(A...); undefined4 * __thiscall m_FUN_10cf65a0(int *param_2); template<class... A> int m_FUN_10cf65a0(A...); undefined4 * __thiscall m_FUN_10cf74b0(byte param_2); template<class... A> int m_FUN_10cf74b0(A...); undefined4 __thiscall m_FUN_10cf7790(byte param_2); template<class... A> int m_FUN_10cf7790(A...); SCStr * __thiscall m_FUN_10cf7ac0(SCStr *param_2); template<class... A> int m_FUN_10cf7ac0(A...); int * __thiscall m_FUN_10cf7ae0(int *param_2); template<class... A> int m_FUN_10cf7ae0(A...); SCStr * __thiscall m_FUN_10cf7f50(SCStr *param_2); template<class... A> int m_FUN_10cf7f50(A...); SCStr * __thiscall m_FUN_10cf7f90(SCStr *param_2); template<class... A> int m_FUN_10cf7f90(A...); SCStr * __thiscall m_FUN_10cf7fb0(SCStr *param_2); template<class... A> int m_FUN_10cf7fb0(A...); SCStr * __thiscall m_FUN_10cf88e0(SCStr *param_2); template<class... A> int m_FUN_10cf88e0(A...); SCStr * __thiscall m_FUN_10cf8900(SCStr *param_2); template<class... A> int m_FUN_10cf8900(A...); void __thiscall m_FUN_10cf8d90(SCStr *param_2); template<class... A> int m_FUN_10cf8d90(A...); void __thiscall m_FUN_10cf8dc0(SCStr *param_2); template<class... A> int m_FUN_10cf8dc0(A...); void __thiscall m_FUN_10cf8df0(SCStr *param_2); template<class... A> int m_FUN_10cf8df0(A...); int * __thiscall m_FUN_10cf9c90(int *param_2,uint param_3); template<class... A> int m_FUN_10cf9c90(A...); undefined4 __thiscall m_FUN_10cfbb20(byte param_2); template<class... A> int m_FUN_10cfbb20(A...); undefined4 * __thiscall m_FUN_10cfbc00(byte param_2); template<class... A> int m_FUN_10cfbc00(A...); undefined4 __thiscall m_FUN_10cfbe60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfbe60(A...); int * __thiscall m_FUN_10cfc100(int *param_2,uint param_3); template<class... A> int m_FUN_10cfc100(A...); undefined4 __thiscall m_FUN_10cfc1c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc1c0(A...); undefined4 __thiscall m_FUN_10cfc400(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc400(A...); undefined4 __thiscall m_FUN_10cfc440(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc440(A...); SCStr * __thiscall m_FUN_10cfc4b0(SCStr *param_2); template<class... A> int m_FUN_10cfc4b0(A...); undefined4 __thiscall m_FUN_10cfc4e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc4e0(A...); undefined4 __thiscall m_FUN_10cfc510(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc510(A...); void __thiscall m_FUN_10cfe140(undefined4 param_2,undefined8 param_3); template<class... A> int m_FUN_10cfe140(A...); undefined4 * __thiscall m_FUN_10d00ad0(int *param_2); template<class... A> int m_FUN_10d00ad0(A...); undefined4 * __thiscall m_FUN_10d00b10(int *param_2); template<class... A> int m_FUN_10d00b10(A...); undefined4 * __thiscall m_FUN_10d00b50(int *param_2); template<class... A> int m_FUN_10d00b50(A...); undefined4 * __thiscall m_FUN_10d00bc0(int *param_2); template<class... A> int m_FUN_10d00bc0(A...); undefined4 * __thiscall m_FUN_10d00c00(int *param_2); template<class... A> int m_FUN_10d00c00(A...); undefined4 * __thiscall m_FUN_10d02630(byte param_2); template<class... A> int m_FUN_10d02630(A...); undefined4 * __thiscall m_FUN_10d02670(byte param_2); template<class... A> int m_FUN_10d02670(A...); undefined4 __thiscall m_FUN_10d02ab0(byte param_2); template<class... A> int m_FUN_10d02ab0(A...); undefined4 * __thiscall m_FUN_10d02ae0(byte param_2); template<class... A> int m_FUN_10d02ae0(A...); undefined4 * __thiscall m_FUN_10d02d90(byte param_2); template<class... A> int m_FUN_10d02d90(A...); undefined4 * __thiscall m_FUN_10d02dc0(byte param_2); template<class... A> int m_FUN_10d02dc0(A...); void __thiscall m_FUN_10d030e0(int *param_2); template<class... A> int m_FUN_10d030e0(A...); void __thiscall m_FUN_10d03130(undefined4 *param_2); template<class... A> int m_FUN_10d03130(A...); SCStr * __thiscall m_FUN_10d04e10(SCStr *param_2); template<class... A> int m_FUN_10d04e10(A...); SCStr * __thiscall m_FUN_10d04e60(SCStr *param_2); template<class... A> int m_FUN_10d04e60(A...); SCStr * __thiscall m_FUN_10d04ec0(SCStr *param_2); template<class... A> int m_FUN_10d04ec0(A...); SCStr * __thiscall m_FUN_10d04ee0(SCStr *param_2); template<class... A> int m_FUN_10d04ee0(A...); void __thiscall m_FUN_10d05e30(undefined4 param_2); template<class... A> int m_FUN_10d05e30(A...); undefined4 * __thiscall m_FUN_10d085c0(int *param_2); template<class... A> int m_FUN_10d085c0(A...); undefined4 __thiscall m_FUN_10d09cb0(byte param_2); template<class... A> int m_FUN_10d09cb0(A...); undefined4 __thiscall m_FUN_10d09dc0(byte param_2); template<class... A> int m_FUN_10d09dc0(A...); undefined4 __thiscall m_FUN_10d09df0(byte param_2); template<class... A> int m_FUN_10d09df0(A...); void __thiscall m_FUN_10d09f30(undefined4 *param_2); template<class... A> int m_FUN_10d09f30(A...); void __thiscall m_FUN_10d09f50(undefined4 *param_2); template<class... A> int m_FUN_10d09f50(A...); void __thiscall m_FUN_10d09f70(char param_2); template<class... A> int m_FUN_10d09f70(A...); void __thiscall m_FUN_10d09f90(char param_2); template<class... A> int m_FUN_10d09f90(A...); void __thiscall m_FUN_10d0a1e0(undefined4 *param_2); template<class... A> int m_FUN_10d0a1e0(A...); void __thiscall m_FUN_10d0a200(undefined4 *param_2); template<class... A> int m_FUN_10d0a200(A...); int * __thiscall m_FUN_10d0b910(int *param_2); template<class... A> int m_FUN_10d0b910(A...); void __thiscall m_FUN_10d0f480(undefined4 param_2); template<class... A> int m_FUN_10d0f480(A...); void __thiscall m_FUN_10d118c0(int param_2); template<class... A> int m_FUN_10d118c0(A...); undefined4 * __thiscall m_FUN_10d11970(int *param_2); template<class... A> int m_FUN_10d11970(A...); undefined4 * __thiscall m_FUN_10d12900(byte param_2); template<class... A> int m_FUN_10d12900(A...); undefined4 __thiscall m_FUN_10d129e0(byte param_2); template<class... A> int m_FUN_10d129e0(A...); undefined4 * __thiscall m_FUN_10d12a10(byte param_2); template<class... A> int m_FUN_10d12a10(A...); undefined4 * __thiscall m_FUN_10d12a40(byte param_2); template<class... A> int m_FUN_10d12a40(A...); undefined4 * __thiscall m_FUN_10d12a70(byte param_2); template<class... A> int m_FUN_10d12a70(A...); void __thiscall m_FUN_10d12d90(int param_2); template<class... A> int m_FUN_10d12d90(A...); int * __thiscall m_FUN_10d13740(int *param_2,uint param_3); template<class... A> int m_FUN_10d13740(A...); SCStr * __thiscall m_FUN_10d137c0(SCStr *param_2); template<class... A> int m_FUN_10d137c0(A...); undefined4 * __thiscall m_FUN_10d15430(int *param_2); template<class... A> int m_FUN_10d15430(A...); undefined4 * __thiscall m_FUN_10d15470(int *param_2); template<class... A> int m_FUN_10d15470(A...); undefined4 __thiscall m_FUN_10d161c0(byte param_2); template<class... A> int m_FUN_10d161c0(A...); undefined4 * __thiscall m_FUN_10d16590(byte param_2); template<class... A> int m_FUN_10d16590(A...); undefined4 * __thiscall m_FUN_10d165d0(byte param_2); template<class... A> int m_FUN_10d165d0(A...); SCStr * __thiscall m_FUN_10d176f0(SCStr *param_2); template<class... A> int m_FUN_10d176f0(A...); undefined4 __thiscall m_FUN_10d17e80(int param_2); template<class... A> int m_FUN_10d17e80(A...); void __thiscall m_FUN_10d19340(undefined4 param_2); template<class... A> int m_FUN_10d19340(A...); void __thiscall m_FUN_10d197a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10d197a0(A...); void __thiscall m_FUN_10d19b20(undefined4 *param_2); template<class... A> int m_FUN_10d19b20(A...); undefined4 * __thiscall m_FUN_10d19b70(int *param_2); template<class... A> int m_FUN_10d19b70(A...); undefined4 * __thiscall m_FUN_10d19bb0(int *param_2); template<class... A> int m_FUN_10d19bb0(A...); undefined4 * __thiscall m_FUN_10d19bf0(int *param_2); template<class... A> int m_FUN_10d19bf0(A...); undefined4 * __thiscall m_FUN_10d19c30(int *param_2); template<class... A> int m_FUN_10d19c30(A...); undefined4 * __thiscall m_FUN_10d19c70(int *param_2); template<class... A> int m_FUN_10d19c70(A...); undefined4 * __thiscall m_FUN_10d19cb0(int *param_2); template<class... A> int m_FUN_10d19cb0(A...); undefined4 * __thiscall m_FUN_10d19cf0(int *param_2); template<class... A> int m_FUN_10d19cf0(A...); undefined4 * __thiscall m_FUN_10d1c3f0(undefined4 *param_2); template<class... A> int m_FUN_10d1c3f0(A...); int * __thiscall m_FUN_10d1c4c0(int *param_2,uint param_3); template<class... A> int m_FUN_10d1c4c0(A...); SCStr * __thiscall m_FUN_10d1c5a0(SCStr *param_2); template<class... A> int m_FUN_10d1c5a0(A...); SCStr * __thiscall m_FUN_10d1ccc0(SCStr *param_2); template<class... A> int m_FUN_10d1ccc0(A...); void __thiscall m_FUN_10d1d4a0(undefined4 *param_2); template<class... A> int m_FUN_10d1d4a0(A...); void __thiscall m_FUN_10d1eb10(int param_2); template<class... A> int m_FUN_10d1eb10(A...); void __thiscall m_FUN_10d1f920(undefined4 *param_2); template<class... A> int m_FUN_10d1f920(A...); void __thiscall m_FUN_10d1f940(undefined4 *param_2); template<class... A> int m_FUN_10d1f940(A...); void __thiscall m_FUN_10d1f960(char param_2); template<class... A> int m_FUN_10d1f960(A...); void __thiscall m_FUN_10d1f980(char param_2); template<class... A> int m_FUN_10d1f980(A...); void __thiscall m_FUN_10d1fb00(undefined4 *param_2); template<class... A> int m_FUN_10d1fb00(A...); void __thiscall m_FUN_10d1fb20(undefined4 *param_2); template<class... A> int m_FUN_10d1fb20(A...); int * __thiscall m_FUN_10d20520(int *param_2,uint param_3); template<class... A> int m_FUN_10d20520(A...); SCStr * __thiscall m_FUN_10d20670(SCStr *param_2); template<class... A> int m_FUN_10d20670(A...); SCStr * __thiscall m_FUN_10d20690(SCStr *param_2); template<class... A> int m_FUN_10d20690(A...); SCStr * __thiscall m_FUN_10d21870(SCStr *param_2); template<class... A> int m_FUN_10d21870(A...); void __thiscall m_FUN_10d23440(int param_2); template<class... A> int m_FUN_10d23440(A...); int __thiscall m_FUN_10d24470(uint *param_2); template<class... A> int m_FUN_10d24470(A...); undefined4 * __thiscall m_FUN_10d26290(int *param_2); template<class... A> int m_FUN_10d26290(A...); void __thiscall m_FUN_10d28920(undefined4 *param_2); template<class... A> int m_FUN_10d28920(A...); void __thiscall m_FUN_10d28940(undefined4 *param_2); template<class... A> int m_FUN_10d28940(A...); void __thiscall m_FUN_10d28960(undefined4 *param_2); template<class... A> int m_FUN_10d28960(A...); void __thiscall m_FUN_10d28980(undefined4 *param_2); template<class... A> int m_FUN_10d28980(A...); void __thiscall m_FUN_10d289a0(undefined4 *param_2); template<class... A> int m_FUN_10d289a0(A...); void __thiscall m_FUN_10d289c0(undefined4 *param_2); template<class... A> int m_FUN_10d289c0(A...); void __thiscall m_FUN_10d289e0(undefined4 *param_2); template<class... A> int m_FUN_10d289e0(A...); void __thiscall m_FUN_10d28a00(undefined4 *param_2); template<class... A> int m_FUN_10d28a00(A...); void __thiscall m_FUN_10d28a20(char param_2); template<class... A> int m_FUN_10d28a20(A...); void __thiscall m_FUN_10d28a40(char param_2); template<class... A> int m_FUN_10d28a40(A...); void __thiscall m_FUN_10d28a60(char param_2); template<class... A> int m_FUN_10d28a60(A...); void __thiscall m_FUN_10d28a80(char param_2); template<class... A> int m_FUN_10d28a80(A...); void __thiscall m_FUN_10d28aa0(char param_2); template<class... A> int m_FUN_10d28aa0(A...); void __thiscall m_FUN_10d28ac0(char param_2); template<class... A> int m_FUN_10d28ac0(A...); void __thiscall m_FUN_10d28ae0(char param_2); template<class... A> int m_FUN_10d28ae0(A...); void __thiscall m_FUN_10d28b00(char param_2); template<class... A> int m_FUN_10d28b00(A...); void __thiscall m_FUN_10d28b20(char param_2); template<class... A> int m_FUN_10d28b20(A...); void __thiscall m_FUN_10d29210(undefined4 *param_2); template<class... A> int m_FUN_10d29210(A...); void __thiscall m_FUN_10d29230(undefined4 *param_2); template<class... A> int m_FUN_10d29230(A...); void __thiscall m_FUN_10d29250(undefined4 *param_2); template<class... A> int m_FUN_10d29250(A...); void __thiscall m_FUN_10d29270(undefined4 *param_2); template<class... A> int m_FUN_10d29270(A...); void __thiscall m_FUN_10d29290(undefined4 *param_2); template<class... A> int m_FUN_10d29290(A...); void __thiscall m_FUN_10d292b0(undefined4 *param_2); template<class... A> int m_FUN_10d292b0(A...); void __thiscall m_FUN_10d292d0(undefined4 *param_2); template<class... A> int m_FUN_10d292d0(A...); void __thiscall m_FUN_10d292f0(undefined4 *param_2); template<class... A> int m_FUN_10d292f0(A...); SCStr * __thiscall m_FUN_10d29c20(SCStr *param_2); template<class... A> int m_FUN_10d29c20(A...); int * __thiscall m_FUN_10d29f40(int *param_2,uint param_3); template<class... A> int m_FUN_10d29f40(A...); int * __thiscall m_FUN_10d29f90(int *param_2,int param_3); template<class... A> int m_FUN_10d29f90(A...); int * __thiscall m_FUN_10d29fc0(int *param_2,int param_3); template<class... A> int m_FUN_10d29fc0(A...); int * __thiscall m_FUN_10d29ff0(int *param_2,int param_3); template<class... A> int m_FUN_10d29ff0(A...); SCStr * __thiscall m_FUN_10d2a200(SCStr *param_2); template<class... A> int m_FUN_10d2a200(A...); SCStr * __thiscall m_FUN_10d2a8f0(SCStr *param_2); template<class... A> int m_FUN_10d2a8f0(A...); undefined4 * __thiscall m_FUN_10d2df10(int *param_2); template<class... A> int m_FUN_10d2df10(A...); undefined4 __thiscall m_FUN_10d307e0(byte param_2); template<class... A> int m_FUN_10d307e0(A...); undefined4 * __thiscall m_FUN_10d30900(byte param_2); template<class... A> int m_FUN_10d30900(A...); void __thiscall m_FUN_10d30a60(undefined4 *param_2); template<class... A> int m_FUN_10d30a60(A...); void __thiscall m_FUN_10d30a80(undefined4 *param_2); template<class... A> int m_FUN_10d30a80(A...); void __thiscall m_FUN_10d30aa0(undefined4 *param_2); template<class... A> int m_FUN_10d30aa0(A...); void __thiscall m_FUN_10d30ae0(char param_2); template<class... A> int m_FUN_10d30ae0(A...); void __thiscall m_FUN_10d30b00(char param_2); template<class... A> int m_FUN_10d30b00(A...); void __thiscall m_FUN_10d30b20(char param_2); template<class... A> int m_FUN_10d30b20(A...); void __thiscall m_FUN_10d30b70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10d30b70(A...); void __thiscall m_FUN_10d30c10(undefined4 *param_2); template<class... A> int m_FUN_10d30c10(A...); void __thiscall m_FUN_10d30c30(undefined4 *param_2); template<class... A> int m_FUN_10d30c30(A...); void __thiscall m_FUN_10d30c50(undefined4 *param_2); template<class... A> int m_FUN_10d30c50(A...); SCStr * __thiscall m_FUN_10d35680(SCStr *param_2); template<class... A> int m_FUN_10d35680(A...); SCStr * __thiscall m_FUN_10d356b0(SCStr *param_2); template<class... A> int m_FUN_10d356b0(A...); SCStr * __thiscall m_FUN_10d356e0(SCStr *param_2); template<class... A> int m_FUN_10d356e0(A...); undefined4 * __thiscall m_FUN_10d3ac70(int *param_2); template<class... A> int m_FUN_10d3ac70(A...); undefined4 __thiscall m_FUN_10d3b460(byte param_2); template<class... A> int m_FUN_10d3b460(A...); void __thiscall m_FUN_10d3b670(void); template<class... A> int m_FUN_10d3b670(A...); void __thiscall m_FUN_10d3b6a0(void); template<class... A> int m_FUN_10d3b6a0(A...); SCStr * __thiscall m_FUN_10d3c4f0(SCStr *param_2); template<class... A> int m_FUN_10d3c4f0(A...); SCStr * __thiscall m_FUN_10d3c520(SCStr *param_2); template<class... A> int m_FUN_10d3c520(A...); SCStr * __thiscall m_FUN_10d3c540(SCStr *param_2); template<class... A> int m_FUN_10d3c540(A...); SCStr * __thiscall m_FUN_10d3c5d0(SCStr *param_2); template<class... A> int m_FUN_10d3c5d0(A...); void __thiscall m_FUN_10d3cd10(int param_2); template<class... A> int m_FUN_10d3cd10(A...); undefined4 * __thiscall m_FUN_10d3e6a0(byte param_2); template<class... A> int m_FUN_10d3e6a0(A...); undefined4 * __thiscall m_FUN_10d3e6e0(byte param_2); template<class... A> int m_FUN_10d3e6e0(A...); undefined4 __thiscall m_FUN_10d3e720(byte param_2); template<class... A> int m_FUN_10d3e720(A...); undefined4 * __thiscall m_FUN_10d3e890(byte param_2); template<class... A> int m_FUN_10d3e890(A...); undefined4 * __thiscall m_FUN_10d3e8d0(byte param_2); template<class... A> int m_FUN_10d3e8d0(A...); undefined4 * __thiscall m_FUN_10d3e900(byte param_2); template<class... A> int m_FUN_10d3e900(A...); undefined4 * __thiscall m_FUN_10d3eb40(byte param_2); template<class... A> int m_FUN_10d3eb40(A...); undefined4 * __thiscall m_FUN_10d3ed50(byte param_2); template<class... A> int m_FUN_10d3ed50(A...); undefined4 * __thiscall m_FUN_10d3ed90(byte param_2); template<class... A> int m_FUN_10d3ed90(A...); int * __thiscall m_FUN_10d3f800(int *param_2,uint param_3); template<class... A> int m_FUN_10d3f800(A...); SCStr * __thiscall m_FUN_10d3f860(SCStr *param_2); template<class... A> int m_FUN_10d3f860(A...); SCStr * __thiscall m_FUN_10d3f880(SCStr *param_2); template<class... A> int m_FUN_10d3f880(A...); SCStr * __thiscall m_FUN_10d3f8a0(SCStr *param_2); template<class... A> int m_FUN_10d3f8a0(A...); SCStr * __thiscall m_FUN_10d3ff40(SCStr *param_2); template<class... A> int m_FUN_10d3ff40(A...); void __thiscall m_FUN_10d40090(int param_2); template<class... A> int m_FUN_10d40090(A...); void __thiscall m_FUN_10d40250(int param_2); template<class... A> int m_FUN_10d40250(A...); void __thiscall m_FUN_10d40290(int param_2); template<class... A> int m_FUN_10d40290(A...); void __thiscall m_FUN_10d402c0(int param_2); template<class... A> int m_FUN_10d402c0(A...); undefined4 * __thiscall m_FUN_10d42420(int *param_2); template<class... A> int m_FUN_10d42420(A...); undefined4 * __thiscall m_FUN_10d42460(int *param_2); template<class... A> int m_FUN_10d42460(A...); undefined4 __thiscall m_FUN_10d43bb0(byte param_2); template<class... A> int m_FUN_10d43bb0(A...); void __thiscall m_FUN_10d440e0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10d440e0(A...); int * __thiscall m_FUN_10d45eb0(int *param_2,uint param_3); template<class... A> int m_FUN_10d45eb0(A...); SCStr * __thiscall m_FUN_10d46740(SCStr *param_2); template<class... A> int m_FUN_10d46740(A...); undefined4 * __thiscall m_FUN_10d4a400(int *param_2); template<class... A> int m_FUN_10d4a400(A...); undefined4 * __thiscall m_FUN_10d4a440(int *param_2); template<class... A> int m_FUN_10d4a440(A...); undefined4 * __thiscall m_FUN_10d4a530(int *param_2); template<class... A> int m_FUN_10d4a530(A...); undefined4 * __thiscall m_FUN_10d4a570(int *param_2); template<class... A> int m_FUN_10d4a570(A...); undefined4 * __thiscall m_FUN_10d4a5b0(undefined4 *param_2); template<class... A> int m_FUN_10d4a5b0(A...); undefined4 * __thiscall m_FUN_10d4cc10(byte param_2); template<class... A> int m_FUN_10d4cc10(A...); undefined4 * __thiscall m_FUN_10d4cc40(byte param_2); template<class... A> int m_FUN_10d4cc40(A...); void __thiscall m_FUN_10d4d1a0(int *param_2); template<class... A> int m_FUN_10d4d1a0(A...); SCStr * __thiscall m_FUN_10d4f570(SCStr *param_2); template<class... A> int m_FUN_10d4f570(A...); void __thiscall m_FUN_10d50d00(undefined4 param_2); template<class... A> int m_FUN_10d50d00(A...); void __thiscall m_FUN_10d515e0(undefined4 param_2); template<class... A> int m_FUN_10d515e0(A...); SCStr * __thiscall m_FUN_10d51bf0(SCStr *param_2); template<class... A> int m_FUN_10d51bf0(A...); void __thiscall m_FUN_10d540a0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10d540a0(A...); undefined4 __thiscall m_FUN_10d541e0(byte param_2); template<class... A> int m_FUN_10d541e0(A...); undefined4 * __thiscall m_FUN_10d54210(byte param_2); template<class... A> int m_FUN_10d54210(A...); undefined4 __thiscall m_FUN_10d54240(byte param_2); template<class... A> int m_FUN_10d54240(A...); void __thiscall m_FUN_10d54390(undefined4 *param_2); template<class... A> int m_FUN_10d54390(A...); void __thiscall m_FUN_10d543b0(undefined4 *param_2); template<class... A> int m_FUN_10d543b0(A...); void __thiscall m_FUN_10d543d0(char param_2); template<class... A> int m_FUN_10d543d0(A...); void __thiscall m_FUN_10d543f0(char param_2); template<class... A> int m_FUN_10d543f0(A...); void __thiscall m_FUN_10d54440(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10d54440(A...); void __thiscall m_FUN_10d545a0(undefined4 *param_2); template<class... A> int m_FUN_10d545a0(A...); void __thiscall m_FUN_10d545c0(undefined4 *param_2); template<class... A> int m_FUN_10d545c0(A...); SCStr * __thiscall m_FUN_10d55450(SCStr *param_2); template<class... A> int m_FUN_10d55450(A...); undefined4 * __thiscall m_FUN_10d58f10(int *param_2); template<class... A> int m_FUN_10d58f10(A...); void __thiscall m_FUN_10d59ad0(undefined4 *param_2); template<class... A> int m_FUN_10d59ad0(A...); void __thiscall m_FUN_10d59af0(char param_2); template<class... A> int m_FUN_10d59af0(A...); void __thiscall m_FUN_10d59be0(undefined4 *param_2); template<class... A> int m_FUN_10d59be0(A...); undefined4 __thiscall m_FUN_10d59ee0(undefined4 param_2); template<class... A> int m_FUN_10d59ee0(A...); SCStr * __thiscall m_FUN_10d5a240(SCStr *param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10d5a240(A...); SCStr * __thiscall m_FUN_10d5a340(SCStr *param_2,undefined4 param_3); template<class... A> int m_FUN_10d5a340(A...); SCStr * __thiscall m_FUN_10d5a3b0(SCStr *param_2); template<class... A> int m_FUN_10d5a3b0(A...); SCStr * __thiscall m_FUN_10d5a430(SCStr *param_2,undefined4 param_3); template<class... A> int m_FUN_10d5a430(A...); undefined4 * __thiscall m_FUN_10d5db10(int *param_2); template<class... A> int m_FUN_10d5db10(A...); };

extern int FUN_10065348(...);
extern int FUN_1006aac8(...);
extern int FUN_10070892(...);
template<class... A> int FUN_10c8de80(A...);
extern int FUN_10cbcff0(...);
extern int FUN_10ce5120(...);
extern int FUN_10cf1ee0(...);
extern int FUN_10cf2340(...);
extern int FUN_11155590(...);
extern int FUN_11155810(...);
extern int FUN_111559c0(...);
extern int FUN_11155ba0(...);
extern int FUN_11155d80(...);
extern int FUN_11158050(...);
extern int FUN_11158070(...);
extern int FUN_111580a0(...);
extern int FUN_111580d0(...);
extern int FUN_11158120(...);
extern int FUN_11158140(...);
extern int FUN_111581a0(...);
extern int FUN_11158240(...);
extern int FUN_11158270(...);
extern int FUN_111582a0(...);
extern int FUN_111582d0(...);
extern int FUN_11158300(...);
extern int FUN_11158330(...);
extern int FUN_11158360(...);
extern int FUN_11158390(...);
extern int FUN_111583c0(...);
extern int FUN_11158420(...);
extern int SCThreadSafeInc(...);
extern __declspec(dllimport) int _Strcoll(...);
extern __declspec(dllimport) int __RTDynamicCast(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int createPropertyBag(...);
extern int operator_new(...);
extern int thunk_FUN_1012cdb0(...);
extern int thunk_FUN_101b5540(...);
extern int thunk_FUN_101b5de0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101e7e50(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102036c0(...);
extern int thunk_FUN_10208940(...);
extern int thunk_FUN_1020a5b0(...);
extern int thunk_FUN_1020fe60(...);
extern int thunk_FUN_102105a0(...);
extern int thunk_FUN_10211340(...);
extern int thunk_FUN_1021b750(...);
extern int thunk_FUN_1021d0d0(...);
extern int thunk_FUN_10221640(...);
extern int thunk_FUN_102518f0(...);
extern int thunk_FUN_1028c3a0(...);
extern int thunk_FUN_102a0500(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_103021f0(...);
extern int thunk_FUN_1033b650(...);
extern int thunk_FUN_1034d200(...);
extern int thunk_FUN_1034dc70(...);
extern int thunk_FUN_103d0730(...);
extern int thunk_FUN_103d61d0(...);
extern int thunk_FUN_103d63d0(...);
extern int thunk_FUN_103d65f0(...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104d8570(...);
extern int thunk_FUN_104d8ab0(...);
extern int thunk_FUN_104d8ba0(...);
extern int thunk_FUN_104d98f0(...);
extern int thunk_FUN_104d9cc0(...);
extern int thunk_FUN_104da1b0(...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_10509ca0(...);
extern int thunk_FUN_1059d5a0(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_105c0190(...);
extern int thunk_FUN_1065a700(...);
extern int thunk_FUN_106845c0(...);
extern int thunk_FUN_106964d0(...);
extern int thunk_FUN_10828990(...);
extern int thunk_FUN_10b034d0(...);
extern int thunk_FUN_10b93810(...);
extern int thunk_FUN_10bb46d0(...);
extern int thunk_FUN_10bef940(...);
extern int thunk_FUN_10bf0160(...);
extern int thunk_FUN_10bf3bc0(...);
extern int thunk_FUN_10bf3c60(...);
extern int thunk_FUN_10bf3d70(...);
extern int thunk_FUN_10bf3e70(...);
extern int thunk_FUN_10bf3f30(...);
extern int thunk_FUN_10bf4300(...);
extern int thunk_FUN_10bf5990(...);
extern int thunk_FUN_10bf5b40(...);
extern int thunk_FUN_10bf8040(...);
extern int thunk_FUN_10bfa620(...);
extern int thunk_FUN_10bfb550(...);
extern int thunk_FUN_10bfb670(...);
extern int thunk_FUN_10bfb760(...);
extern int thunk_FUN_10bfebd0(...);
extern int thunk_FUN_10c11c30(...);
extern int thunk_FUN_10c13d10(...);
extern int thunk_FUN_10c17930(...);
extern int thunk_FUN_10c17bb0(...);
extern int thunk_FUN_10c21f70(...);
extern int thunk_FUN_10c220f0(...);
extern int thunk_FUN_10c22290(...);
extern int thunk_FUN_10c22600(...);
extern int thunk_FUN_10c24160(...);
extern int thunk_FUN_10c2bd80(...);
extern int thunk_FUN_10c31e60(...);
extern int thunk_FUN_10c322c0(...);
extern int thunk_FUN_10c34bf0(...);
extern int thunk_FUN_10c34d70(...);
extern int thunk_FUN_10c35c30(...);
extern int thunk_FUN_10c36180(...);
extern int thunk_FUN_10c3a310(...);
extern int thunk_FUN_10c3b550(...);
extern int thunk_FUN_10c3d380(...);
extern int thunk_FUN_10c3d700(...);
extern int thunk_FUN_10c3d800(...);
extern int thunk_FUN_10c3d960(...);
extern int thunk_FUN_10c3dd10(...);
extern int thunk_FUN_10c46460(...);
extern int thunk_FUN_10c47270(...);
extern int thunk_FUN_10c47ef0(...);
extern int thunk_FUN_10c4afd0(...);
extern int thunk_FUN_10c4b120(...);
extern int thunk_FUN_10c4b530(...);
extern int thunk_FUN_10c4f390(...);
extern int thunk_FUN_10c4f4e0(...);
extern int thunk_FUN_10c4f630(...);
extern int thunk_FUN_10c4f780(...);
extern int thunk_FUN_10c4f8d0(...);
extern int thunk_FUN_10c55600(...);
extern int thunk_FUN_10c55750(...);
extern int thunk_FUN_10c558a0(...);
extern int thunk_FUN_10c559f0(...);
extern int thunk_FUN_10c59700(...);
extern int thunk_FUN_10c5e210(...);
extern int thunk_FUN_10c5e5a0(...);
extern int thunk_FUN_10c62c00(...);
extern int thunk_FUN_10c667b0(...);
extern int thunk_FUN_10c68c80(...);
extern int thunk_FUN_10c69cb0(...);
extern int thunk_FUN_10c6c6c0(...);
extern int thunk_FUN_10c6cda0(...);
extern int thunk_FUN_10c74230(...);
extern int thunk_FUN_10c74420(...);
extern int thunk_FUN_10c7a380(...);
extern int thunk_FUN_10c7a9d0(...);
extern int thunk_FUN_10c7bc70(...);
extern int thunk_FUN_10c7cce0(...);
extern int thunk_FUN_10c7d430(...);
extern int thunk_FUN_10c7ddf0(...);
extern int thunk_FUN_10c80f90(...);
extern int thunk_FUN_10c810e0(...);
extern int thunk_FUN_10c81300(...);
extern int thunk_FUN_10c81440(...);
extern int thunk_FUN_10c83fc0(...);
extern int thunk_FUN_10c84db0(...);
extern int thunk_FUN_10c85210(...);
extern int thunk_FUN_10c85290(...);
extern int thunk_FUN_10c85310(...);
extern int thunk_FUN_10c853f0(...);
extern int thunk_FUN_10c872c0(...);
extern int thunk_FUN_10c87570(...);
extern int thunk_FUN_10c89860(...);
extern int thunk_FUN_10c8edf0(...);
extern int thunk_FUN_10c8f700(...);
extern int thunk_FUN_10c93b50(...);
extern int thunk_FUN_10c9db90(...);
extern int thunk_FUN_10ca1bc0(...);
extern int thunk_FUN_10ca1e10(...);
extern int thunk_FUN_10ca3370(...);
extern int thunk_FUN_10ca43c0(...);
extern int thunk_FUN_10ca7a80(...);
extern int thunk_FUN_10ca8700(...);
extern int thunk_FUN_10cb1110(...);
extern int thunk_FUN_10cb8b80(...);
extern int thunk_FUN_10cbcd70(...);
extern int thunk_FUN_10cc12a0(...);
extern int thunk_FUN_10cc1570(...);
extern int thunk_FUN_10cca490(...);
extern int thunk_FUN_10cca5e0(...);
extern int thunk_FUN_10cca730(...);
extern int thunk_FUN_10cca880(...);
extern int thunk_FUN_10cca9d0(...);
extern int thunk_FUN_10ccab20(...);
extern int thunk_FUN_10ccac70(...);
extern int thunk_FUN_10ccadc0(...);
extern int thunk_FUN_10ccaf10(...);
extern int thunk_FUN_10ccb140(...);
extern int thunk_FUN_10ccb300(...);
extern int thunk_FUN_10ccb440(...);
extern int thunk_FUN_10ccb560(...);
extern int thunk_FUN_10ccb720(...);
extern int thunk_FUN_10ccb8a0(...);
extern int thunk_FUN_10ccba90(...);
extern int thunk_FUN_10ccbc10(...);
extern int thunk_FUN_10cd9930(...);
extern int thunk_FUN_10cdbb90(...);
extern int thunk_FUN_10cdbce0(...);
extern int thunk_FUN_10cdbe30(...);
extern int thunk_FUN_10cddd80(...);
extern int thunk_FUN_10cdfa80(...);
extern int thunk_FUN_10ce00f0(...);
extern int thunk_FUN_10ce04e0(...);
extern int thunk_FUN_10ce10f0(...);
extern int thunk_FUN_10ce2c30(...);
extern int thunk_FUN_10ce2d60(...);
extern int thunk_FUN_10ce3510(...);
extern int thunk_FUN_10ce5d10(...);
extern int thunk_FUN_10ce5db0(...);
extern int thunk_FUN_10ce5f30(...);
extern int thunk_FUN_10ce6ee0(...);
extern int thunk_FUN_10ce6fd0(...);
extern int thunk_FUN_10ce74c0(...);
extern int thunk_FUN_10cede00(...);
extern int thunk_FUN_10cee770(...);
extern int thunk_FUN_10cee930(...);
extern int thunk_FUN_10cefa80(...);
extern int thunk_FUN_10cefc20(...);
extern int thunk_FUN_10cf30f0(...);
extern int thunk_FUN_10cf3780(...);
extern int thunk_FUN_10cf3d20(...);
extern int thunk_FUN_10cf3e20(...);
extern int thunk_FUN_10cf4ae0(...);
extern int thunk_FUN_10cf4bb0(...);
extern int thunk_FUN_10cf58e0(...);
extern int thunk_FUN_10cf71a0(...);
extern int thunk_FUN_10cf7dd0(...);
extern int thunk_FUN_10cfb7f0(...);
extern int thunk_FUN_10cfd160(...);
extern int thunk_FUN_10d01e40(...);
extern int thunk_FUN_10d09230(...);
extern int thunk_FUN_10d09590(...);
extern int thunk_FUN_10d12380(...);
extern int thunk_FUN_10d142b0(...);
extern int thunk_FUN_10d19820(...);
extern int thunk_FUN_10d1cf80(...);
extern int thunk_FUN_10d24420(...);
extern int thunk_FUN_10d244b0(...);
extern int thunk_FUN_10d2f9b0(...);
extern int thunk_FUN_10d34dd0(...);
extern int thunk_FUN_10d34fd0(...);
extern int thunk_FUN_10d352a0(...);
extern int thunk_FUN_10d38af0(...);
extern int thunk_FUN_10d3b140(...);
extern int thunk_FUN_10d3de20(...);
extern int thunk_FUN_10d40300(...);
extern int thunk_FUN_10d43400(...);
extern int thunk_FUN_10d53c40(...);
extern int thunk_FUN_10d53f30(...);
extern int thunk_FUN_10d55d20(...);
extern int thunk_FUN_10d5a520(...);
extern int thunk_FUN_10d5a820(...);
extern int thunk_FUN_10d5e270(...);
extern int thunk_FUN_10dd4b80(...);
extern int thunk_FUN_1106d920(...);
extern int thunk_FUN_110810b0(...);
extern int thunk_FUN_11081b20(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110833f0(...);
extern int thunk_FUN_11093530(...);
extern int thunk_FUN_110965d0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b2900(...);
extern int thunk_FUN_110fa660(...);
extern int thunk_FUN_111004d0(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112c3b0(...);
extern int thunk_FUN_11131cc0(...);
extern int thunk_FUN_11132140(...);
extern int thunk_FUN_11132ba0(...);
extern int thunk_FUN_1113f590(...);
extern int thunk_FUN_11158170(...);
extern int thunk_FUN_11159cc0(...);
extern int thunk_FUN_1115b9c0(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a2ec0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3630(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111c0a80(...);
extern int thunk_FUN_111c0af0(...);
extern int thunk_FUN_111fc6a0(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_1125cbb0(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_112a9cf0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_11456530(...);
extern int thunk_FUN_114568e0(...);
extern int thunk_FUN_11456d50(...);
extern int thunk_FUN_11456de0(...);
extern int thunk_FUN_11456e70(...);
extern int thunk_FUN_11456f80(...);
extern int thunk_FUN_114575a0(...);
extern int thunk_FUN_11457630(...);
extern int thunk_FUN_11457670(...);
extern int thunk_FUN_114576b0(...);
extern int thunk_FUN_114576f0(...);
extern int thunk_FUN_114577b0(...);
extern int thunk_FUN_114577f0(...);
extern int thunk_FUN_11457d40(...);
extern int thunk_FUN_11457d80(...);
extern int thunk_FUN_11457f10(...);
extern int thunk_FUN_11457fd0(...);
extern int thunk_FUN_11458020(...);
extern int thunk_FUN_11458060(...);
extern int thunk_FUN_114580e0(...);
extern int thunk_FUN_11458730(...);
extern int thunk_FUN_1145e270(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_00004498;
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_1189bdd4;
extern int DAT_12119fa4;
extern int DAT_12119fa8;
extern int DAT_12119fc0;
extern int DAT_12119fc8;
extern int DAT_12119fcc;
extern int DAT_12126b84;
extern int DAT_121a07b0;
extern int DAT_121a07b4;
extern int DAT_121a524c;
extern int DAT_121a5254;
extern int DAT_121a5354;
extern int DAT_121a5e80;
extern int DAT_122e8a18;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_REqualizerListener;
extern int ghidra_vftable_RHttpGetNoRedirectAIOOp;
extern int ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp;
extern int ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp;
extern int ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp;
extern int ghidra_vftable_RUpnpAIGetLineInLevelAIOOp;
extern int ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp;
extern int ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp;
extern int ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp;
extern int ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp;
extern int ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp;
extern int ghidra_vftable_RUpnpDPGetZoneInfoAIOOp;
extern int ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp;
extern int ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAudioData;
extern int ghidra_vftable_SCDeviceAutoplay;
extern int ghidra_vftable_SCDeviceLineOut;
extern int ghidra_vftable_SCDeviceMusicEqualizationEventSink;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIndexListenerCallback;
extern int ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem;
extern int ghidra_vftable_SCMutableUrlRequest;
extern int ghidra_vftable_SCOnlineUpdateCompleteState;
extern int ghidra_vftable_SCOnlineUpdateErrorState;
extern int ghidra_vftable_SCOnlineUpdateInitState;
extern int ghidra_vftable_SCOnlineUpdateWizCompleteState;
extern int ghidra_vftable_SCOpAlarmClockGetDailyIndexRefreshTime;
extern int ghidra_vftable_SCOpAlarmClockSetDailyIndexRefreshTime;
extern int ghidra_vftable_SCOpAudioInGetAudioInputAttributes;
extern int ghidra_vftable_SCOpAudioInGetLineInLevel;
extern int ghidra_vftable_SCOpAudioInSetAudioInputAttributes;
extern int ghidra_vftable_SCOpAudioInSetLineInLevel;
extern int ghidra_vftable_SCOpDevicePropertiesGetAutoplayLinkedZones;
extern int ghidra_vftable_SCOpDevicePropertiesGetAutoplayRoomUUID;
extern int ghidra_vftable_SCOpDevicePropertiesGetAutoplayVolume;
extern int ghidra_vftable_SCOpDevicePropertiesGetUseAutoplayVolume;
extern int ghidra_vftable_SCOpDevicePropertiesSetUseAutoplayVolume;
extern int ghidra_vftable_SCOpGetAboutSonosString;
extern int ghidra_vftable_SCOpGetCertBundle;
extern int ghidra_vftable_SCOpGetHouseholdSetting;
extern int ghidra_vftable_SCOpGetUsageDataShareOption;
extern int ghidra_vftable_SCOpRenderingControlGetSupportsOutputFixed;
extern int ghidra_vftable_SCOpSetHouseholdSetting;
extern int ghidra_vftable_SCOpUpdateVoiceAccountData;
extern int ghidra_vftable_SCOpVoiceAcctWakeWordSet;
extern int ghidra_vftable_SCOpVoiceServiceAlexaROWLocale;
extern int ghidra_vftable_SCOpVoiceServiceAmazonChallenge;
extern int ghidra_vftable_SCOpVoiceServiceAmazonSkillAuthCode;
extern int ghidra_vftable_SCOpVoiceServiceAuthenticate;
extern int ghidra_vftable_SCOpVoiceServiceDeleteAccount;
extern int ghidra_vftable_SCOpVoiceServiceNotifyInitiateOnboarding;
extern int ghidra_vftable_SCScheduleIndexUpdateSettingsItem;
extern int ghidra_vftable_SCSwfObjQInternalListener;
extern int ghidra_vftable_SCSwfObjUMInternalListener;
extern int ghidra_vftable_SCUpdateMusicIndexItem;
extern int ghidra_vftable_SCUrlConnection_Callback;
extern int ghidra_vftable_SCUrlDeleteRequest;
extern int ghidra_vftable_SCUrlGetRequest;
extern int ghidra_vftable_SCUrlPostRequest;
extern int ghidra_vftable_SCUrlPutRequest;
extern int ghidra_vftable_SCViewContributingArtistsSettingsItem;
extern int ghidra_vftable_SCVoiceBetaFeedbackBrowseItem;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_Node_assert;
extern int ghidra_vftable_std_Node_base;
extern int ghidra_vftable_std_collate;
extern int in_EAX;
extern int in_stack_00000014;
extern int uStack00000004;
extern int uStack_18;
extern int uStack_1c;
extern int uStack_20;
extern int uStack_34;
extern int uStack_38;
extern int uStack_8;
extern int uStack_c;
extern int unaff_EBX;
extern undefined1 LAB_1020ff3b[];
extern undefined1 LAB_1020ff6a[];
extern undefined1 LAB_10c7c44b[];
extern undefined1 LAB_10ce4993[];
extern undefined1 LAB_10ce49de[];
extern undefined1 LAB_10ce4a2f[];
extern undefined1 LAB_10ce4a35[];
extern undefined1 LAB_10ce4ae5[];
extern undefined1 LAB_115054c7[];
extern undefined1 LAB_116cfe30[];
extern undefined1 LAB_116f7e10[];
extern undefined1 LAB_116f910e[];
extern undefined1 LAB_11704550[];
extern undefined1 LAB_1170f170[];
extern int *PTR_FUN_12119fa0;
extern int *stack0x00000004;
extern int *stack0xfffffffc;
extern void *ExceptionList;
void __fastcall FUN_10befff0(undefined4 *param_1);
template<class... A> int FUN_10befff0(A...);
void __fastcall FUN_10bf00f0(undefined4 *param_1);
template<class... A> int FUN_10bf00f0(A...);
int * __fastcall FUN_10bf0550(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf0550(A...);
void FUN_10bf0a50(void);
template<class... A> int FUN_10bf0a50(A...);
void FUN_10bf12a0(void);
template<class... A> int FUN_10bf12a0(A...);
int __fastcall FUN_10bf2460(int *param_1);
template<class... A> int FUN_10bf2460(A...);
int __fastcall FUN_10bf24a0(int *param_1);
template<class... A> int FUN_10bf24a0(A...);
void __fastcall FUN_10bf2dc0(undefined4 *param_1);
template<class... A> int FUN_10bf2dc0(A...);
void __fastcall FUN_10bf3280(undefined4 *param_1);
template<class... A> int FUN_10bf3280(A...);
SCStr * __stdcall FUN_10bf34a0(SCStr *param_1);
template<class... A> int FUN_10bf34a0(A...);
undefined4 * __fastcall FUN_10bf50a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf50a0(A...);
undefined4 * __fastcall FUN_10bf50d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bf50d0(A...);
void __fastcall FUN_10bf5650(undefined4 *param_1);
template<class... A> int FUN_10bf5650(A...);
void __fastcall FUN_10bf5670(int param_1);
template<class... A> int FUN_10bf5670(A...);
void __fastcall FUN_10bf5690(int param_1);
template<class... A> int FUN_10bf5690(A...);
void __fastcall FUN_10bf5880(int param_1);
template<class... A> int FUN_10bf5880(A...);
void __fastcall FUN_10bf58b0(undefined4 *param_1);
template<class... A> int FUN_10bf58b0(A...);
void __fastcall FUN_10bf5970(undefined4 *param_1);
template<class... A> int FUN_10bf5970(A...);
int __stdcall FUN_10bf5f40(undefined4 param_1);
template<class... A> int FUN_10bf5f40(A...);
void __fastcall FUN_10bf6240(int param_1);
template<class... A> int FUN_10bf6240(A...);
void __fastcall FUN_10bf6260(int param_1);
template<class... A> int FUN_10bf6260(A...);
void __fastcall FUN_10bf64c0(int *param_1);
template<class... A> int FUN_10bf64c0(A...);
void __fastcall FUN_10bf7260(undefined4 *param_1);
template<class... A> int FUN_10bf7260(A...);
bool FUN_10bf78b0(undefined4 param_1,int param_2);
template<class... A> int FUN_10bf78b0(A...);
void __fastcall FUN_10bf7a60(int *param_1);
template<class... A> int FUN_10bf7a60(A...);
void __fastcall FUN_10bf8890(int param_1);
template<class... A> int FUN_10bf8890(A...);
undefined4 * __fastcall FUN_10bfad00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bfad00(A...);
void __fastcall FUN_10bfb3b0(int param_1);
template<class... A> int FUN_10bfb3b0(A...);
void __fastcall FUN_10bfb4b0(int param_1);
template<class... A> int FUN_10bfb4b0(A...);
void __fastcall FUN_10bfb650(undefined4 *param_1);
template<class... A> int FUN_10bfb650(A...);
int __stdcall FUN_10bfbad0(undefined4 param_1);
template<class... A> int FUN_10bfbad0(A...);
void __fastcall FUN_10bfbcd0(int param_1);
template<class... A> int FUN_10bfbcd0(A...);
void __fastcall FUN_10bfe9e0(int *param_1);
template<class... A> int FUN_10bfe9e0(A...);
SCStr * __stdcall FUN_10bff8c0(SCStr *param_1);
template<class... A> int FUN_10bff8c0(A...);
void __fastcall FUN_10c00a90(int param_1);
template<class... A> int FUN_10c00a90(A...);
undefined4 __fastcall FUN_10c00ae0(int param_1);
template<class... A> int FUN_10c00ae0(A...);
void __fastcall FUN_10c020a0(undefined4 *param_1);
template<class... A> int FUN_10c020a0(A...);
void __stdcall FUN_10c02e00(int param_1,int param_2);
template<class... A> int FUN_10c02e00(A...);
SCStr * __stdcall FUN_10c02e50(SCStr *param_1);
template<class... A> int FUN_10c02e50(A...);
void __fastcall FUN_10c05b20(undefined4 *param_1);
template<class... A> int FUN_10c05b20(A...);
void __fastcall FUN_10c06110(int *param_1);
template<class... A> int FUN_10c06110(A...);
void __fastcall FUN_10c06130(int *param_1);
template<class... A> int FUN_10c06130(A...);
void __fastcall FUN_10c06150(int *param_1);
template<class... A> int FUN_10c06150(A...);
void __fastcall FUN_10c06170(int *param_1);
template<class... A> int FUN_10c06170(A...);
void __fastcall FUN_10c06190(int *param_1);
template<class... A> int FUN_10c06190(A...);
void __fastcall FUN_10c061b0(int *param_1);
template<class... A> int FUN_10c061b0(A...);
void __fastcall FUN_10c06f90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c06f90(A...);
void __stdcall FUN_10c06fb0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c06fb0(A...);
int __fastcall FUN_10c070b0(int *param_1);
template<class... A> int FUN_10c070b0(A...);
SCStr * __stdcall FUN_10c0cf10(SCStr *param_1);
template<class... A> int FUN_10c0cf10(A...);
SCStr * __stdcall FUN_10c0e800(SCStr *param_1);
template<class... A> int FUN_10c0e800(A...);
SCStr * __stdcall FUN_10c0ed70(SCStr *param_1);
template<class... A> int FUN_10c0ed70(A...);
undefined4 __stdcall FUN_10c0f160(undefined4 param_1);
template<class... A> int FUN_10c0f160(A...);
undefined4 FUN_10c146f0(void);
template<class... A> int FUN_10c146f0(A...);
undefined4 __fastcall FUN_10c14ab0(int *param_1);
template<class... A> int FUN_10c14ab0(A...);
undefined4 __fastcall FUN_10c16c60(int param_1);
template<class... A> int FUN_10c16c60(A...);
undefined4 __fastcall FUN_10c17fd0(int *param_1);
template<class... A> int FUN_10c17fd0(A...);
SCStr * __stdcall FUN_10c18420(SCStr *param_1);
template<class... A> int FUN_10c18420(A...);
SCStr * __stdcall FUN_10c18540(SCStr *param_1);
template<class... A> int FUN_10c18540(A...);
undefined4 __fastcall FUN_10c186b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c186b0(A...);
undefined4 __fastcall FUN_10c19540(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c19540(A...);
SCStr * __stdcall FUN_10c1c720(SCStr *param_1);
template<class... A> int FUN_10c1c720(A...);
SCStr * __stdcall FUN_10c1e790(SCStr *param_1);
template<class... A> int FUN_10c1e790(A...);
undefined4 __fastcall FUN_10c1e7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c1e7e0(A...);
void __fastcall FUN_10c1ebf0(int param_1);
template<class... A> int FUN_10c1ebf0(A...);
int __fastcall FUN_10c1ec20(int param_1);
template<class... A> int FUN_10c1ec20(A...);
uint __fastcall FUN_10c1ed60(int param_1);
template<class... A> int FUN_10c1ed60(A...);
undefined4 __fastcall FUN_10c1edc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c1edc0(A...);
void __fastcall FUN_10c208f0(int param_1);
template<class... A> int FUN_10c208f0(A...);
uint __fastcall FUN_10c20eb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c20eb0(A...);
void __stdcall FUN_10c21100(int param_1);
template<class... A> int FUN_10c21100(A...);
undefined4 * __fastcall FUN_10c23ae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c23ae0(A...);
void __fastcall FUN_10c23e30(undefined4 *param_1);
template<class... A> int FUN_10c23e30(A...);
void __fastcall FUN_10c23eb0(int param_1);
template<class... A> int FUN_10c23eb0(A...);
void __fastcall FUN_10c24080(undefined4 *param_1);
template<class... A> int FUN_10c24080(A...);
void __fastcall FUN_10c240a0(undefined4 *param_1);
template<class... A> int FUN_10c240a0(A...);
void __fastcall FUN_10c24a10(int param_1);
template<class... A> int FUN_10c24a10(A...);
void __fastcall FUN_10c253a0(undefined4 *param_1);
template<class... A> int FUN_10c253a0(A...);
void __fastcall FUN_10c260f0(int *param_1);
template<class... A> int FUN_10c260f0(A...);
void __fastcall FUN_10c26120(undefined4 *param_1);
template<class... A> int FUN_10c26120(A...);
void __stdcall FUN_10c261e0(int param_1,int param_2);
template<class... A> int FUN_10c261e0(A...);
undefined * FUN_10c26570(undefined4 param_1,int *param_2);
template<class... A> int FUN_10c26570(A...);
void __fastcall FUN_10c29140(undefined4 *param_1);
template<class... A> int FUN_10c29140(A...);
SCStr * __stdcall FUN_10c2a580(SCStr *param_1);
template<class... A> int FUN_10c2a580(A...);
void __fastcall FUN_10c2a600(int param_1);
template<class... A> int FUN_10c2a600(A...);
void __fastcall FUN_10c2a630(int param_1);
template<class... A> int FUN_10c2a630(A...);
void __fastcall FUN_10c2a700(int param_1);
template<class... A> int FUN_10c2a700(A...);
void __fastcall FUN_10c2bce0(undefined4 *param_1);
template<class... A> int FUN_10c2bce0(A...);
void __stdcall FUN_10c2c0e0(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10c2c0e0(A...);
void __stdcall FUN_10c2c400(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10c2c400(A...);
void __fastcall FUN_10c32620(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c32620(A...);
undefined4 * __fastcall FUN_10c35720(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c35720(A...);
void __fastcall FUN_10c35e00(int param_1);
template<class... A> int FUN_10c35e00(A...);
void __fastcall FUN_10c35e20(int *param_1);
template<class... A> int FUN_10c35e20(A...);
void __fastcall FUN_10c35ff0(int *param_1);
template<class... A> int FUN_10c35ff0(A...);
void __fastcall FUN_10c36020(undefined4 *param_1);
template<class... A> int FUN_10c36020(A...);
int * __fastcall FUN_10c36500(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c36500(A...);
int __stdcall FUN_10c36570(undefined4 param_1);
template<class... A> int FUN_10c36570(A...);
void __fastcall FUN_10c369c0(int param_1);
template<class... A> int FUN_10c369c0(A...);
void __fastcall FUN_10c370e0(int *param_1);
template<class... A> int FUN_10c370e0(A...);
void __fastcall FUN_10c37180(undefined4 *param_1);
template<class... A> int FUN_10c37180(A...);
void __fastcall FUN_10c37720(int *param_1);
template<class... A> int FUN_10c37720(A...);
SCStr * __stdcall FUN_10c37b00(SCStr *param_1);
template<class... A> int FUN_10c37b00(A...);
SCStr * __stdcall FUN_10c37ec0(SCStr *param_1);
template<class... A> int FUN_10c37ec0(A...);
SCStr * __stdcall FUN_10c37ef0(SCStr *param_1);
template<class... A> int FUN_10c37ef0(A...);
void __fastcall FUN_10c3b1c0(int param_1);
template<class... A> int FUN_10c3b1c0(A...);
void __stdcall FUN_10c3d380(undefined4 param_1,int *param_2);
template<class... A> int FUN_10c3d380(A...);
void FUN_10c3d960(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10c3d960(A...);
undefined4 * __fastcall FUN_10c404f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c404f0(A...);
undefined4 * __fastcall FUN_10c40520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c40520(A...);
undefined4 * __fastcall FUN_10c40550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c40550(A...);
undefined4 * __fastcall FUN_10c40580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c40580(A...);
void __fastcall FUN_10c41050(int param_1);
template<class... A> int FUN_10c41050(A...);
void __fastcall FUN_10c41070(int param_1);
template<class... A> int FUN_10c41070(A...);
void __fastcall FUN_10c41090(int param_1);
template<class... A> int FUN_10c41090(A...);
void __fastcall FUN_10c410b0(int param_1);
template<class... A> int FUN_10c410b0(A...);
void __fastcall FUN_10c414e0(int param_1);
template<class... A> int FUN_10c414e0(A...);
void __fastcall FUN_10c41500(int param_1);
template<class... A> int FUN_10c41500(A...);
void __fastcall FUN_10c41530(int param_1);
template<class... A> int FUN_10c41530(A...);
void __fastcall FUN_10c41550(int param_1);
template<class... A> int FUN_10c41550(A...);
void __fastcall FUN_10c41590(undefined4 *param_1);
template<class... A> int FUN_10c41590(A...);
void __fastcall FUN_10c415f0(int *param_1);
template<class... A> int FUN_10c415f0(A...);
void __fastcall FUN_10c41640(undefined4 *param_1);
template<class... A> int FUN_10c41640(A...);
void __fastcall FUN_10c41660(int *param_1);
template<class... A> int FUN_10c41660(A...);
int __stdcall FUN_10c41d40(undefined4 param_1);
template<class... A> int FUN_10c41d40(A...);
void __fastcall FUN_10c42360(int param_1);
template<class... A> int FUN_10c42360(A...);
void __fastcall FUN_10c42380(int param_1);
template<class... A> int FUN_10c42380(A...);
void __fastcall FUN_10c423a0(int param_1);
template<class... A> int FUN_10c423a0(A...);
void __fastcall FUN_10c423c0(int param_1);
template<class... A> int FUN_10c423c0(A...);
void __fastcall FUN_10c42860(int *param_1);
template<class... A> int FUN_10c42860(A...);
void __fastcall FUN_10c42890(int *param_1);
template<class... A> int FUN_10c42890(A...);
void __fastcall FUN_10c428d0(int *param_1);
template<class... A> int FUN_10c428d0(A...);
void __fastcall FUN_10c42900(int *param_1);
template<class... A> int FUN_10c42900(A...);
int * FUN_10c43be0(int *param_1);
template<class... A> int FUN_10c43be0(A...);
void __fastcall FUN_10c44380(undefined4 *param_1);
template<class... A> int FUN_10c44380(A...);
void __fastcall FUN_10c459c0(int *param_1);
template<class... A> int FUN_10c459c0(A...);
void __stdcall FUN_10c46f60(SCStr *param_1);
template<class... A> int FUN_10c46f60(A...);
void FUN_10c471c0(void);
template<class... A> int FUN_10c471c0(A...);
void __fastcall FUN_10c47bc0(int param_1);
template<class... A> int FUN_10c47bc0(A...);
void __fastcall FUN_10c4a070(int param_1);
template<class... A> int FUN_10c4a070(A...);
void __fastcall FUN_10c4b2f0(int *param_1);
template<class... A> int FUN_10c4b2f0(A...);
void __fastcall FUN_10c4b320(int *param_1);
template<class... A> int FUN_10c4b320(A...);
int * __fastcall FUN_10c4b8b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c4b8b0(A...);
void __fastcall FUN_10c4bf90(int *param_1);
template<class... A> int FUN_10c4bf90(A...);
void __fastcall FUN_10c4c4a0(int param_1);
template<class... A> int FUN_10c4c4a0(A...);
undefined1 * __fastcall FUN_10c4c930(int param_1);
template<class... A> int FUN_10c4c930(A...);
SCStr * __stdcall FUN_10c4cb40(SCStr *param_1);
template<class... A> int FUN_10c4cb40(A...);
undefined4 __stdcall FUN_10c4d990(int param_1,int param_2);
template<class... A> int FUN_10c4d990(A...);
void __fastcall FUN_10c4f2b0(undefined4 *param_1);
template<class... A> int FUN_10c4f2b0(A...);
void __fastcall FUN_10c4f2d0(undefined4 *param_1);
template<class... A> int FUN_10c4f2d0(A...);
void __fastcall FUN_10c4f2f0(undefined4 *param_1);
template<class... A> int FUN_10c4f2f0(A...);
void __fastcall FUN_10c4f310(undefined4 *param_1);
template<class... A> int FUN_10c4f310(A...);
void __fastcall FUN_10c4f330(undefined4 *param_1);
template<class... A> int FUN_10c4f330(A...);
int __fastcall FUN_10c50ee0(int *param_1);
template<class... A> int FUN_10c50ee0(A...);
SCStr * __stdcall FUN_10c52500(SCStr *param_1);
template<class... A> int FUN_10c52500(A...);
SCStr * __stdcall FUN_10c52520(SCStr *param_1);
template<class... A> int FUN_10c52520(A...);
SCStr * __stdcall FUN_10c52540(SCStr *param_1);
template<class... A> int FUN_10c52540(A...);
SCStr * __stdcall FUN_10c52560(SCStr *param_1);
template<class... A> int FUN_10c52560(A...);
SCStr * __stdcall FUN_10c52580(SCStr *param_1);
template<class... A> int FUN_10c52580(A...);
void __fastcall FUN_10c55540(undefined4 *param_1);
template<class... A> int FUN_10c55540(A...);
void __fastcall FUN_10c55560(undefined4 *param_1);
template<class... A> int FUN_10c55560(A...);
void __fastcall FUN_10c55580(undefined4 *param_1);
template<class... A> int FUN_10c55580(A...);
void __fastcall FUN_10c555a0(undefined4 *param_1);
template<class... A> int FUN_10c555a0(A...);
void __fastcall FUN_10c555e0(undefined4 *param_1);
template<class... A> int FUN_10c555e0(A...);
int __fastcall FUN_10c56a20(int *param_1);
template<class... A> int FUN_10c56a20(A...);
SCStr * __stdcall FUN_10c579c0(SCStr *param_1);
template<class... A> int FUN_10c579c0(A...);
SCStr * __stdcall FUN_10c579e0(SCStr *param_1);
template<class... A> int FUN_10c579e0(A...);
SCStr * __stdcall FUN_10c57a00(SCStr *param_1);
template<class... A> int FUN_10c57a00(A...);
SCStr * __stdcall FUN_10c57a20(SCStr *param_1);
template<class... A> int FUN_10c57a20(A...);
void __fastcall FUN_10c596a0(undefined4 *param_1);
template<class... A> int FUN_10c596a0(A...);
int __fastcall FUN_10c59da0(int *param_1);
template<class... A> int FUN_10c59da0(A...);
SCStr * __stdcall FUN_10c5a580(SCStr *param_1);
template<class... A> int FUN_10c5a580(A...);
void __fastcall FUN_10c5b450(undefined4 *param_1);
template<class... A> int FUN_10c5b450(A...);
int __fastcall FUN_10c5bb30(int *param_1);
template<class... A> int FUN_10c5bb30(A...);
int __fastcall FUN_10c5bb70(int *param_1);
template<class... A> int FUN_10c5bb70(A...);
int __fastcall FUN_10c5c490(int param_1);
template<class... A> int FUN_10c5c490(A...);
SCStr * __stdcall FUN_10c5c820(SCStr *param_1);
template<class... A> int FUN_10c5c820(A...);
undefined1 __fastcall FUN_10c5c920(int param_1);
template<class... A> int FUN_10c5c920(A...);
uint __fastcall FUN_10c5cbb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5cbb0(A...);
void __fastcall FUN_10c5ccb0(int param_1);
template<class... A> int FUN_10c5ccb0(A...);
void __fastcall FUN_10c5ccf0(int param_1);
template<class... A> int FUN_10c5ccf0(A...);
void __fastcall FUN_10c5d2f0(int param_1);
template<class... A> int FUN_10c5d2f0(A...);
void __fastcall FUN_10c5d300(int param_1);
template<class... A> int FUN_10c5d300(A...);
void __fastcall FUN_10c5d310(int param_1);
template<class... A> int FUN_10c5d310(A...);
void __fastcall FUN_10c5d320(int param_1);
template<class... A> int FUN_10c5d320(A...);
void __fastcall FUN_10c5d330(int param_1);
template<class... A> int FUN_10c5d330(A...);
void __fastcall FUN_10c5d390(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d390(A...);
void __fastcall FUN_10c5d3b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d3b0(A...);
void __fastcall FUN_10c5d3d0(int *param_1);
template<class... A> int FUN_10c5d3d0(A...);
void __fastcall FUN_10c5d3f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d3f0(A...);
void __fastcall FUN_10c5d410(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d410(A...);
void __fastcall FUN_10c5d430(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d430(A...);
void __fastcall FUN_10c5d450(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d450(A...);
void __fastcall FUN_10c5d470(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d470(A...);
void __fastcall FUN_10c5d4b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d4b0(A...);
void __fastcall FUN_10c5d4d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d4d0(A...);
void __fastcall FUN_10c5d4f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d4f0(A...);
void __fastcall FUN_10c5d510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d510(A...);
void __fastcall FUN_10c5d530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d530(A...);
void __fastcall FUN_10c5d550(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d550(A...);
void __fastcall FUN_10c5d570(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d570(A...);
void __fastcall FUN_10c5d590(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d590(A...);
void __fastcall FUN_10c5d5b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d5b0(A...);
void __fastcall FUN_10c5d5d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5d5d0(A...);
undefined4 * __fastcall FUN_10c5eae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c5eae0(A...);
undefined4 __fastcall FUN_10c5ed00(undefined4 param_1);
template<class... A> int FUN_10c5ed00(A...);
undefined4 * __fastcall FUN_10c5ed70(undefined4 *param_1);
template<class... A> int FUN_10c5ed70(A...);
void __fastcall FUN_10c5f930(int param_1);
template<class... A> int FUN_10c5f930(A...);
void __fastcall FUN_10c5f950(int *param_1);
template<class... A> int FUN_10c5f950(A...);
void __fastcall FUN_10c5fa10(int param_1);
template<class... A> int FUN_10c5fa10(A...);
void __fastcall FUN_10c5fa30(int *param_1);
template<class... A> int FUN_10c5fa30(A...);
void __fastcall FUN_10c5fe60(int param_1);
template<class... A> int FUN_10c5fe60(A...);
void __fastcall FUN_10c603f0(int *param_1);
template<class... A> int FUN_10c603f0(A...);
SCStr * FUN_10c62180(SCStr *param_1,undefined4 *param_2);
template<class... A> int FUN_10c62180(A...);
int __fastcall FUN_10c62f60(undefined4 *param_1);
template<class... A> int FUN_10c62f60(A...);
SCStr * FUN_10c63000(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10c63000(A...);
int FUN_10c66510(uint param_1,uint param_2);
template<class... A> int FUN_10c66510(A...);
undefined4 __fastcall FUN_10c67700(int *param_1);
template<class... A> int FUN_10c67700(A...);
SCStr * __stdcall FUN_10c67820(SCStr *param_1);
template<class... A> int FUN_10c67820(A...);
void __fastcall FUN_10c67bf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c67bf0(A...);
void __fastcall FUN_10c67c20(int param_1);
template<class... A> int FUN_10c67c20(A...);
bool __stdcall FUN_10c69170(undefined4 param_1);
template<class... A> int FUN_10c69170(A...);
void __stdcall FUN_10c69f50(int param_1);
template<class... A> int FUN_10c69f50(A...);
void __fastcall FUN_10c6a3c0(int param_1);
template<class... A> int FUN_10c6a3c0(A...);
undefined1 __fastcall FUN_10c6a3e0(int param_1);
template<class... A> int FUN_10c6a3e0(A...);
undefined1 __fastcall FUN_10c6a400(int param_1);
template<class... A> int FUN_10c6a400(A...);
undefined1 __fastcall FUN_10c6a420(int param_1);
template<class... A> int FUN_10c6a420(A...);
void __fastcall FUN_10c6a4c0(int param_1);
template<class... A> int FUN_10c6a4c0(A...);
void __fastcall FUN_10c6a950(int param_1);
template<class... A> int FUN_10c6a950(A...);
void __fastcall FUN_10c6a970(int param_1);
template<class... A> int FUN_10c6a970(A...);
void __fastcall FUN_10c6d4a0(undefined4 *param_1);
template<class... A> int FUN_10c6d4a0(A...);
SCStr * __stdcall FUN_10c6d7f0(SCStr *param_1);
template<class... A> int FUN_10c6d7f0(A...);
undefined4 __fastcall FUN_10c6ed50(int param_1);
template<class... A> int FUN_10c6ed50(A...);
undefined4 __fastcall FUN_10c6ed70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c6ed70(A...);
undefined4 __fastcall FUN_10c6fb30(int param_1);
template<class... A> int FUN_10c6fb30(A...);
undefined1 __fastcall FUN_10c6fce0(int param_1);
template<class... A> int FUN_10c6fce0(A...);
uint FUN_10c71eb0(uint param_1,int param_2);
template<class... A> int FUN_10c71eb0(A...);
void FUN_10c73860(undefined4 *param_1,char *param_2,char *param_3,int *param_4);
template<class... A> int FUN_10c73860(A...);
void __fastcall FUN_10c75cf0(undefined4 *param_1);
template<class... A> int FUN_10c75cf0(A...);
void __fastcall FUN_10c75fb0(undefined4 *param_1);
template<class... A> int FUN_10c75fb0(A...);
void __fastcall FUN_10c760e0(undefined4 *param_1);
template<class... A> int FUN_10c760e0(A...);
void __fastcall FUN_10c76170(int param_1);
template<class... A> int FUN_10c76170(A...);
void __fastcall FUN_10c761a0(facet *param_1);
template<class... A> int FUN_10c761a0(A...);
void __fastcall FUN_10c761e0(int param_1);
template<class... A> int FUN_10c761e0(A...);
void __fastcall FUN_10c76540(undefined4 *param_1);
template<class... A> int FUN_10c76540(A...);
uint __fastcall FUN_10c78bf0(int param_1);
template<class... A> int FUN_10c78bf0(A...);
void __fastcall FUN_10c79140(undefined4 *param_1);
template<class... A> int FUN_10c79140(A...);
bool FUN_10c7a2d0(void);
template<class... A> int FUN_10c7a2d0(A...);
void FUN_10c7b430(void);
template<class... A> int FUN_10c7b430(A...);
uint __fastcall FUN_10c7c420(int *param_1);
template<class... A> int FUN_10c7c420(A...);
void __fastcall FUN_10c7d3b0(undefined4 *param_1);
template<class... A> int FUN_10c7d3b0(A...);
void __stdcall FUN_10c7d870(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c7d870(A...);
void __stdcall FUN_10c7d8f0(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c7d8f0(A...);
uint __stdcall FUN_10c7e160(int param_1,int param_2);
template<class... A> int FUN_10c7e160(A...);
void __fastcall FUN_10c7e2e0(int *param_1);
template<class... A> int FUN_10c7e2e0(A...);
undefined4 __fastcall FUN_10c7e5a0(int param_1);
template<class... A> int FUN_10c7e5a0(A...);
undefined4 __fastcall FUN_10c7e960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c7e960(A...);
undefined1 * __fastcall FUN_10c81d90(int param_1);
template<class... A> int FUN_10c81d90(A...);
SCStr * __stdcall FUN_10c81e50(SCStr *param_1);
template<class... A> int FUN_10c81e50(A...);
SCStr * __stdcall FUN_10c81e70(SCStr *param_1);
template<class... A> int FUN_10c81e70(A...);
void __fastcall FUN_10c83c30(int param_1);
template<class... A> int FUN_10c83c30(A...);
void __fastcall FUN_10c83c80(int param_1);
template<class... A> int FUN_10c83c80(A...);
undefined4 __fastcall FUN_10c83f10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10c83f10(A...);
void __fastcall FUN_10c83f90(int param_1);
template<class... A> int FUN_10c83f90(A...);
void __fastcall FUN_10c83fc0(int param_1);
template<class... A> int FUN_10c83fc0(A...);
SCStr * __stdcall FUN_10c844e0(SCStr *param_1);
template<class... A> int FUN_10c844e0(A...);
undefined4 * __fastcall FUN_10c88a30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c88a30(A...);
undefined4 * __fastcall FUN_10c88a60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c88a60(A...);
void __fastcall FUN_10c89270(undefined4 *param_1);
template<class... A> int FUN_10c89270(A...);
void __fastcall FUN_10c89290(int param_1);
template<class... A> int FUN_10c89290(A...);
void __fastcall FUN_10c892b0(int param_1);
template<class... A> int FUN_10c892b0(A...);
void __fastcall FUN_10c89650(undefined4 *param_1);
template<class... A> int FUN_10c89650(A...);
void __fastcall FUN_10c89670(undefined4 *param_1);
template<class... A> int FUN_10c89670(A...);
int __stdcall FUN_10c89fc0(undefined4 param_1);
template<class... A> int FUN_10c89fc0(A...);
int __stdcall FUN_10c89ff0(undefined4 param_1);
template<class... A> int FUN_10c89ff0(A...);
void __fastcall FUN_10c8a510(int param_1);
template<class... A> int FUN_10c8a510(A...);
void __fastcall FUN_10c8a530(int param_1);
template<class... A> int FUN_10c8a530(A...);
void __fastcall FUN_10c8b900(undefined4 *param_1);
template<class... A> int FUN_10c8b900(A...);
void __fastcall FUN_10c8b920(undefined4 *param_1);
template<class... A> int FUN_10c8b920(A...);
void __stdcall FUN_10c8be80(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10c8be80(A...);
void __fastcall FUN_10c8c9b0(int *param_1);
template<class... A> int FUN_10c8c9b0(A...);
void __fastcall FUN_10c8c9e0(int *param_1);
template<class... A> int FUN_10c8c9e0(A...);
void __fastcall FUN_10c8d180(undefined4 *param_1);
template<class... A> int FUN_10c8d180(A...);
undefined4 FUN_10c8de30(undefined4 param_1);
template<class... A> int FUN_10c8de30(A...);
undefined4 FUN_10c8de80(undefined4 param_1);
void __fastcall FUN_10c92e40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c92e40(A...);
char * FUN_10c93210(undefined4 param_1);
template<class... A> int FUN_10c93210(A...);
void __fastcall FUN_10c93f50(int param_1);
template<class... A> int FUN_10c93f50(A...);
undefined1 __fastcall FUN_10c95030(int param_1);
template<class... A> int FUN_10c95030(A...);
undefined4 __fastcall FUN_10c961e0(int param_1);
template<class... A> int FUN_10c961e0(A...);
undefined4 __fastcall FUN_10c96350(int param_1);
template<class... A> int FUN_10c96350(A...);
undefined4 __fastcall FUN_10c96760(int param_1);
template<class... A> int FUN_10c96760(A...);
undefined4 __fastcall FUN_10c97650(int param_1);
template<class... A> int FUN_10c97650(A...);
undefined4 __fastcall FUN_10c97670(int param_1);
template<class... A> int FUN_10c97670(A...);
int __fastcall FUN_10c97b50(int param_1);
template<class... A> int FUN_10c97b50(A...);
void __fastcall FUN_10c97b70(int param_1);
template<class... A> int FUN_10c97b70(A...);
void __fastcall FUN_10c980a0(int param_1);
template<class... A> int FUN_10c980a0(A...);
void __fastcall FUN_10c98100(int param_1);
template<class... A> int FUN_10c98100(A...);
void __fastcall FUN_10c99580(int param_1);
template<class... A> int FUN_10c99580(A...);
void __fastcall FUN_10c99820(int param_1);
template<class... A> int FUN_10c99820(A...);
void __fastcall FUN_10c99870(int param_1);
template<class... A> int FUN_10c99870(A...);
void __fastcall FUN_10c998c0(int param_1);
template<class... A> int FUN_10c998c0(A...);
void __fastcall FUN_10c99dc0(int param_1);
template<class... A> int FUN_10c99dc0(A...);
void __fastcall FUN_10c9a420(int param_1);
template<class... A> int FUN_10c9a420(A...);
void __fastcall FUN_10c9b060(int param_1);
template<class... A> int FUN_10c9b060(A...);
undefined4 __fastcall FUN_10c9b1e0(int param_1);
template<class... A> int FUN_10c9b1e0(A...);
void __fastcall FUN_10c9c3f0(int param_1);
template<class... A> int FUN_10c9c3f0(A...);
undefined4 __fastcall FUN_10c9c4d0(int param_1);
template<class... A> int FUN_10c9c4d0(A...);
bool __fastcall FUN_10c9c640(int param_1);
template<class... A> int FUN_10c9c640(A...);
void __fastcall FUN_10c9c6e0(int param_1);
template<class... A> int FUN_10c9c6e0(A...);
void __fastcall FUN_10c9c980(int param_1);
template<class... A> int FUN_10c9c980(A...);
void __fastcall FUN_10c9c9d0(int param_1);
template<class... A> int FUN_10c9c9d0(A...);
void __fastcall FUN_10c9ca20(int param_1);
template<class... A> int FUN_10c9ca20(A...);
void __fastcall FUN_10c9cc60(int param_1);
template<class... A> int FUN_10c9cc60(A...);
void __fastcall FUN_10c9cf50(int param_1);
template<class... A> int FUN_10c9cf50(A...);
void __fastcall FUN_10ca17a0(undefined4 *param_1);
template<class... A> int FUN_10ca17a0(A...);
undefined1 __fastcall FUN_10ca3ee0(int param_1);
template<class... A> int FUN_10ca3ee0(A...);
undefined1 __fastcall FUN_10ca3ff0(int param_1);
template<class... A> int FUN_10ca3ff0(A...);
void __fastcall FUN_10ca4250(int param_1);
template<class... A> int FUN_10ca4250(A...);
void __fastcall FUN_10ca42b0(int param_1);
template<class... A> int FUN_10ca42b0(A...);
undefined4 * __fastcall FUN_10ca4b50(undefined4 param_1);
template<class... A> int FUN_10ca4b50(A...);
undefined4 * __fastcall FUN_10ca4d90(undefined4 param_1);
template<class... A> int FUN_10ca4d90(A...);
undefined4 * __fastcall FUN_10ca4dd0(int param_1);
template<class... A> int FUN_10ca4dd0(A...);
undefined4 * __fastcall FUN_10ca4e10(int param_1);
template<class... A> int FUN_10ca4e10(A...);
undefined4 * __fastcall FUN_10ca5270(int param_1);
template<class... A> int FUN_10ca5270(A...);
undefined4 * __fastcall FUN_10ca5370(int param_1);
template<class... A> int FUN_10ca5370(A...);
undefined4 * __fastcall FUN_10ca5ac0(int param_1);
template<class... A> int FUN_10ca5ac0(A...);
undefined4 * __fastcall FUN_10ca5b00(int param_1);
template<class... A> int FUN_10ca5b00(A...);
undefined4 * __fastcall FUN_10ca5e80(int param_1);
template<class... A> int FUN_10ca5e80(A...);
undefined4 * __fastcall FUN_10ca6210(int param_1);
template<class... A> int FUN_10ca6210(A...);
undefined4 * __fastcall FUN_10ca67f0(int param_1);
template<class... A> int FUN_10ca67f0(A...);
void __stdcall FUN_10ca7710(int param_1,int param_2);
template<class... A> int FUN_10ca7710(A...);
uint FUN_10ca7ef0(void);
template<class... A> int FUN_10ca7ef0(A...);
SCStr * __stdcall FUN_10ca8360(SCStr *param_1);
template<class... A> int FUN_10ca8360(A...);
undefined4 __fastcall FUN_10ca8b40(int param_1);
template<class... A> int FUN_10ca8b40(A...);
SCStr * __stdcall FUN_10ca8d00(SCStr *param_1);
template<class... A> int FUN_10ca8d00(A...);
SCStr * __stdcall FUN_10ca8d20(SCStr *param_1);
template<class... A> int FUN_10ca8d20(A...);
SCStr * __stdcall FUN_10ca8d40(SCStr *param_1);
template<class... A> int FUN_10ca8d40(A...);
SCStr * __stdcall FUN_10ca8d60(SCStr *param_1);
template<class... A> int FUN_10ca8d60(A...);
SCStr * __stdcall FUN_10ca8d80(SCStr *param_1);
template<class... A> int FUN_10ca8d80(A...);
SCStr * __stdcall FUN_10ca8da0(SCStr *param_1);
template<class... A> int FUN_10ca8da0(A...);
SCStr * __stdcall FUN_10ca8dc0(SCStr *param_1);
template<class... A> int FUN_10ca8dc0(A...);
SCStr * __stdcall FUN_10ca8de0(SCStr *param_1);
template<class... A> int FUN_10ca8de0(A...);
SCStr * __stdcall FUN_10ca8e00(SCStr *param_1);
template<class... A> int FUN_10ca8e00(A...);
SCStr * __stdcall FUN_10ca8e20(SCStr *param_1);
template<class... A> int FUN_10ca8e20(A...);
SCStr * __stdcall FUN_10ca8e40(SCStr *param_1);
template<class... A> int FUN_10ca8e40(A...);
SCStr * __stdcall FUN_10ca8e60(SCStr *param_1);
template<class... A> int FUN_10ca8e60(A...);
SCStr * __stdcall FUN_10ca8e80(SCStr *param_1);
template<class... A> int FUN_10ca8e80(A...);
SCStr * __stdcall FUN_10ca8ea0(SCStr *param_1);
template<class... A> int FUN_10ca8ea0(A...);
SCStr * __stdcall FUN_10ca8ec0(SCStr *param_1);
template<class... A> int FUN_10ca8ec0(A...);
SCStr * __stdcall FUN_10ca8ee0(SCStr *param_1);
template<class... A> int FUN_10ca8ee0(A...);
SCStr * __stdcall FUN_10ca8f00(SCStr *param_1);
template<class... A> int FUN_10ca8f00(A...);
SCStr * __stdcall FUN_10ca8f20(SCStr *param_1);
template<class... A> int FUN_10ca8f20(A...);
SCStr * __stdcall FUN_10ca8f40(SCStr *param_1);
template<class... A> int FUN_10ca8f40(A...);
SCStr * __stdcall FUN_10ca8f60(SCStr *param_1);
template<class... A> int FUN_10ca8f60(A...);
SCStr * __stdcall FUN_10ca8f80(SCStr *param_1);
template<class... A> int FUN_10ca8f80(A...);
SCStr * __stdcall FUN_10ca8fa0(SCStr *param_1);
template<class... A> int FUN_10ca8fa0(A...);
SCStr * __stdcall FUN_10ca8fc0(SCStr *param_1);
template<class... A> int FUN_10ca8fc0(A...);
SCStr * __stdcall FUN_10ca8fe0(SCStr *param_1);
template<class... A> int FUN_10ca8fe0(A...);
undefined4 __fastcall FUN_10ca92f0(int param_1);
template<class... A> int FUN_10ca92f0(A...);
SCStr * __stdcall FUN_10cb0e30(SCStr *param_1);
template<class... A> int FUN_10cb0e30(A...);
void __fastcall FUN_10cb1020(int param_1);
template<class... A> int FUN_10cb1020(A...);
undefined4 __fastcall FUN_10cb1ab0(int param_1);
template<class... A> int FUN_10cb1ab0(A...);
undefined4 __fastcall FUN_10cb1c70(int *param_1);
template<class... A> int FUN_10cb1c70(A...);
undefined1 FUN_10cb2250(SCStr *param_1);
template<class... A> int FUN_10cb2250(A...);
void __fastcall FUN_10cb2f70(int param_1);
template<class... A> int FUN_10cb2f70(A...);
void __fastcall FUN_10cb3780(int *param_1);
template<class... A> int FUN_10cb3780(A...);
void __fastcall FUN_10cb3800(int param_1);
template<class... A> int FUN_10cb3800(A...);
void __fastcall FUN_10cb57c0(int param_1);
template<class... A> int FUN_10cb57c0(A...);
void __fastcall FUN_10cb5cc0(int param_1);
template<class... A> int FUN_10cb5cc0(A...);
void __fastcall FUN_10cb6550(int param_1);
template<class... A> int FUN_10cb6550(A...);
void __stdcall FUN_10cb6c40(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10cb6c40(A...);
void __stdcall FUN_10cb6c60(int param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10cb6c60(A...);
undefined4 FUN_10cb7580(void);
template<class... A> int FUN_10cb7580(A...);
void __fastcall FUN_10cb9320(undefined4 *param_1);
template<class... A> int FUN_10cb9320(A...);
void __fastcall FUN_10cb9340(int param_1);
template<class... A> int FUN_10cb9340(A...);
void __fastcall FUN_10cb9410(int param_1);
template<class... A> int FUN_10cb9410(A...);
void __fastcall FUN_10cb9840(int param_1);
template<class... A> int FUN_10cb9840(A...);
int * FUN_10cba030(int *param_1);
template<class... A> int FUN_10cba030(A...);
void __stdcall FUN_10cbd390(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10cbd390(A...);
SCStr * __stdcall FUN_10cbd990(SCStr *param_1);
template<class... A> int FUN_10cbd990(A...);
SCStr * __stdcall FUN_10cbda40(SCStr *param_1);
template<class... A> int FUN_10cbda40(A...);
SCStr * __stdcall FUN_10cbdac0(SCStr *param_1);
template<class... A> int FUN_10cbdac0(A...);
void __fastcall FUN_10cc1280(undefined4 *param_1);
template<class... A> int FUN_10cc1280(A...);
SCStr * __stdcall FUN_10cc23f0(SCStr *param_1);
template<class... A> int FUN_10cc23f0(A...);
SCStr * __stdcall FUN_10cc2850(SCStr *param_1);
template<class... A> int FUN_10cc2850(A...);
void __fastcall FUN_10ccf340(int param_1);
template<class... A> int FUN_10ccf340(A...);
undefined1 * __fastcall FUN_10cd3610(int param_1);
template<class... A> int FUN_10cd3610(A...);
undefined1 * __fastcall FUN_10cd3630(int param_1);
template<class... A> int FUN_10cd3630(A...);
undefined1 * __fastcall FUN_10cd3650(int param_1);
template<class... A> int FUN_10cd3650(A...);
undefined1 * __fastcall FUN_10cd3670(int param_1);
template<class... A> int FUN_10cd3670(A...);
undefined1 * __fastcall FUN_10cd36f0(int param_1);
template<class... A> int FUN_10cd36f0(A...);
SCStr * __stdcall FUN_10cd3cc0(SCStr *param_1);
template<class... A> int FUN_10cd3cc0(A...);
SCStr * __stdcall FUN_10cd3ce0(SCStr *param_1);
template<class... A> int FUN_10cd3ce0(A...);
SCStr * __stdcall FUN_10cd3d00(SCStr *param_1);
template<class... A> int FUN_10cd3d00(A...);
SCStr * __stdcall FUN_10cd3d20(SCStr *param_1);
template<class... A> int FUN_10cd3d20(A...);
SCStr * __stdcall FUN_10cd3d40(SCStr *param_1);
template<class... A> int FUN_10cd3d40(A...);
SCStr * __stdcall FUN_10cd3d60(SCStr *param_1);
template<class... A> int FUN_10cd3d60(A...);
SCStr * __stdcall FUN_10cd3d80(SCStr *param_1);
template<class... A> int FUN_10cd3d80(A...);
SCStr * __stdcall FUN_10cd3da0(SCStr *param_1);
template<class... A> int FUN_10cd3da0(A...);
SCStr * __stdcall FUN_10cd3dc0(SCStr *param_1);
template<class... A> int FUN_10cd3dc0(A...);
void __fastcall FUN_10cdbb30(undefined4 *param_1);
template<class... A> int FUN_10cdbb30(A...);
void __fastcall FUN_10cdbb50(undefined4 *param_1);
template<class... A> int FUN_10cdbb50(A...);
void __fastcall FUN_10cdbb70(undefined4 *param_1);
template<class... A> int FUN_10cdbb70(A...);
void __fastcall FUN_10cdc070(int *param_1);
template<class... A> int FUN_10cdc070(A...);
void __fastcall FUN_10cdc0a0(int *param_1);
template<class... A> int FUN_10cdc0a0(A...);
int * __fastcall FUN_10cdc3e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cdc3e0(A...);
void __fastcall FUN_10cdcc40(int *param_1);
template<class... A> int FUN_10cdcc40(A...);
void __fastcall FUN_10cdd550(int param_1);
template<class... A> int FUN_10cdd550(A...);
SCStr * __stdcall FUN_10cddbe0(SCStr *param_1);
template<class... A> int FUN_10cddbe0(A...);
SCStr * __stdcall FUN_10cddc00(SCStr *param_1);
template<class... A> int FUN_10cddc00(A...);
void __fastcall FUN_10cddc50(undefined4 param_1);
template<class... A> int FUN_10cddc50(A...);
void __fastcall FUN_10cddc70(undefined4 param_1);
template<class... A> int FUN_10cddc70(A...);
undefined1 __fastcall FUN_10cde1e0(int param_1);
template<class... A> int FUN_10cde1e0(A...);
undefined1 __fastcall FUN_10cde200(int param_1);
template<class... A> int FUN_10cde200(A...);
int __fastcall FUN_10cdf040(int param_1);
template<class... A> int FUN_10cdf040(A...);
void __fastcall FUN_10cdf0d0(int param_1);
template<class... A> int FUN_10cdf0d0(A...);
void __fastcall FUN_10cdf240(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cdf240(A...);
void FUN_10cdfa20(void);
template<class... A> int FUN_10cdfa20(A...);
undefined4 FUN_10cdfcc0(void);
template<class... A> int FUN_10cdfcc0(A...);
undefined4 FUN_10cdfce0(void);
template<class... A> int FUN_10cdfce0(A...);
void __stdcall FUN_10cdffe0(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10cdffe0(A...);
void __fastcall FUN_10ce0010(undefined4 *param_1);
template<class... A> int FUN_10ce0010(A...);
undefined4 __fastcall FUN_10ce0060(int param_1);
template<class... A> int FUN_10ce0060(A...);
void __stdcall FUN_10ce07c0(SCStr *param_1);
template<class... A> int FUN_10ce07c0(A...);
void __fastcall FUN_10ce10b0(undefined4 *param_1);
template<class... A> int FUN_10ce10b0(A...);
void __fastcall FUN_10ce10d0(undefined4 *param_1);
template<class... A> int FUN_10ce10d0(A...);
SCStr * __stdcall FUN_10ce1960(SCStr *param_1);
template<class... A> int FUN_10ce1960(A...);
SCStr * __stdcall FUN_10ce1980(SCStr *param_1);
template<class... A> int FUN_10ce1980(A...);
SCStr * __stdcall FUN_10ce19c0(SCStr *param_1);
template<class... A> int FUN_10ce19c0(A...);
SCStr * __stdcall FUN_10ce19e0(SCStr *param_1);
template<class... A> int FUN_10ce19e0(A...);
SCStr * __stdcall FUN_10ce1a00(SCStr *param_1);
template<class... A> int FUN_10ce1a00(A...);
void __fastcall FUN_10ce2450(undefined4 *param_1);
template<class... A> int FUN_10ce2450(A...);
SCStr * __stdcall FUN_10ce28e0(SCStr *param_1);
template<class... A> int FUN_10ce28e0(A...);
SCStr * __stdcall FUN_10ce2940(SCStr *param_1);
template<class... A> int FUN_10ce2940(A...);
void __fastcall FUN_10ce34f0(undefined4 *param_1);
template<class... A> int FUN_10ce34f0(A...);
void __fastcall FUN_10ce3d30(undefined4 *param_1);
template<class... A> int FUN_10ce3d30(A...);
void __stdcall FUN_10ce3d50(int param_1,int param_2);
template<class... A> int FUN_10ce3d50(A...);
SCStr * __stdcall FUN_10ce3da0(SCStr *param_1);
template<class... A> int FUN_10ce3da0(A...);
SCStr * __stdcall FUN_10ce3ee0(SCStr *param_1);
template<class... A> int FUN_10ce3ee0(A...);
SCStr * __stdcall FUN_10ce4060(SCStr *param_1);
template<class... A> int FUN_10ce4060(A...);
int __fastcall FUN_10ce4080(int param_1);
template<class... A> int FUN_10ce4080(A...);
SCStr * __stdcall FUN_10ce42a0(SCStr *param_1);
template<class... A> int FUN_10ce42a0(A...);
void __fastcall FUN_10ce4550(int param_1);
template<class... A> int FUN_10ce4550(A...);
void __fastcall FUN_10ce4570(int param_1);
template<class... A> int FUN_10ce4570(A...);
undefined4 * __fastcall FUN_10ce6a80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce6a80(A...);
void __fastcall FUN_10ce6ec0(undefined4 *param_1);
template<class... A> int FUN_10ce6ec0(A...);
void __fastcall FUN_10ce71a0(int param_1);
template<class... A> int FUN_10ce71a0(A...);
void __fastcall FUN_10ce71c0(int *param_1);
template<class... A> int FUN_10ce71c0(A...);
void __fastcall FUN_10ce71f0(int *param_1);
template<class... A> int FUN_10ce71f0(A...);
void __fastcall FUN_10ce73c0(int *param_1);
template<class... A> int FUN_10ce73c0(A...);
void __fastcall FUN_10ce73f0(int *param_1);
template<class... A> int FUN_10ce73f0(A...);
void __fastcall FUN_10ce7420(undefined4 *param_1);
template<class... A> int FUN_10ce7420(A...);
int * __fastcall FUN_10ce7740(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce7740(A...);
int * __fastcall FUN_10ce7770(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce7770(A...);
int __stdcall FUN_10ce7820(undefined4 param_1);
template<class... A> int FUN_10ce7820(A...);
void __fastcall FUN_10ce7bf0(int param_1);
template<class... A> int FUN_10ce7bf0(A...);
void __fastcall FUN_10ce83a0(int *param_1);
template<class... A> int FUN_10ce83a0(A...);
void __fastcall FUN_10ce83d0(int *param_1);
template<class... A> int FUN_10ce83d0(A...);
void __fastcall FUN_10ce8470(undefined4 *param_1);
template<class... A> int FUN_10ce8470(A...);
int __stdcall FUN_10ce9420(SCStr *param_1);
template<class... A> int FUN_10ce9420(A...);
void __fastcall FUN_10ce9520(int *param_1);
template<class... A> int FUN_10ce9520(A...);
void __fastcall FUN_10cee720(undefined4 *param_1);
template<class... A> int FUN_10cee720(A...);
void __fastcall FUN_10cee8d0(int *param_1);
template<class... A> int FUN_10cee8d0(A...);
void __fastcall FUN_10cee900(int *param_1);
template<class... A> int FUN_10cee900(A...);
int * __fastcall FUN_10ceeb90(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ceeb90(A...);
void __fastcall FUN_10ceeea0(int *param_1);
template<class... A> int FUN_10ceeea0(A...);
void __stdcall FUN_10cf1010(int param_1);
template<class... A> int FUN_10cf1010(A...);
void __stdcall FUN_10cf1030(int param_1);
template<class... A> int FUN_10cf1030(A...);
void __stdcall FUN_10cf33f0(undefined4 *param_1);
template<class... A> int FUN_10cf33f0(A...);
void __stdcall FUN_10cf3410(undefined4 *param_1);
template<class... A> int FUN_10cf3410(A...);
void __fastcall FUN_10cf4330(undefined4 *param_1);
template<class... A> int FUN_10cf4330(A...);
void __stdcall FUN_10cf4ac0(undefined4 *param_1);
template<class... A> int FUN_10cf4ac0(A...);
void __stdcall FUN_10cf4ae0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10cf4ae0(A...);
void __stdcall FUN_10cf5110(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10cf5110(A...);
void __stdcall FUN_10cf53c0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10cf53c0(A...);
void __fastcall FUN_10cf58c0(undefined4 *param_1);
template<class... A> int FUN_10cf58c0(A...);
SCStr * __stdcall FUN_10cf5f40(SCStr *param_1);
template<class... A> int FUN_10cf5f40(A...);
SCStr * __stdcall FUN_10cf6190(SCStr *param_1);
template<class... A> int FUN_10cf6190(A...);
undefined1 __fastcall FUN_10cf78a0(int param_1);
template<class... A> int FUN_10cf78a0(A...);
undefined1 __fastcall FUN_10cf78c0(int param_1);
template<class... A> int FUN_10cf78c0(A...);
undefined4 __fastcall FUN_10cf7aa0(int param_1);
template<class... A> int FUN_10cf7aa0(A...);
SCStr * __stdcall FUN_10cf7db0(SCStr *param_1);
template<class... A> int FUN_10cf7db0(A...);
uint __fastcall FUN_10cf8b00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cf8b00(A...);
void __stdcall FUN_10cf9070(int param_1);
template<class... A> int FUN_10cf9070(A...);
undefined4 __fastcall FUN_10cf9740(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cf9740(A...);
undefined4 __fastcall FUN_10cf9c70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cf9c70(A...);
SCStr * __stdcall FUN_10cf9cf0(SCStr *param_1);
template<class... A> int FUN_10cf9cf0(A...);
int __fastcall FUN_10cf9d30(int param_1);
template<class... A> int FUN_10cf9d30(A...);
SCStr * __stdcall FUN_10cf9f50(SCStr *param_1);
template<class... A> int FUN_10cf9f50(A...);
undefined4 __fastcall FUN_10cfa090(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cfa090(A...);
undefined4 __fastcall FUN_10cfa2c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cfa2c0(A...);
uint __fastcall FUN_10cfb1d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cfb1d0(A...);
SCStr * __stdcall FUN_10cfc180(SCStr *param_1);
template<class... A> int FUN_10cfc180(A...);
int __fastcall FUN_10cfc1a0(int param_1);
template<class... A> int FUN_10cfc1a0(A...);
SCStr * __stdcall FUN_10cfc460(SCStr *param_1);
template<class... A> int FUN_10cfc460(A...);
void __fastcall FUN_10cfdf80(int *param_1);
template<class... A> int FUN_10cfdf80(A...);
void __fastcall FUN_10d017b0(undefined4 *param_1);
template<class... A> int FUN_10d017b0(A...);
void __fastcall FUN_10d01800(undefined4 *param_1);
template<class... A> int FUN_10d01800(A...);
void __fastcall FUN_10d01f50(undefined4 *param_1);
template<class... A> int FUN_10d01f50(A...);
void __fastcall FUN_10d03040(int param_1);
template<class... A> int FUN_10d03040(A...);
undefined4 __fastcall FUN_10d03290(int *param_1);
template<class... A> int FUN_10d03290(A...);
SCStr * __stdcall FUN_10d03ae0(SCStr *param_1);
template<class... A> int FUN_10d03ae0(A...);
SCStr * __stdcall FUN_10d03b00(SCStr *param_1);
template<class... A> int FUN_10d03b00(A...);
SCStr * __stdcall FUN_10d03b20(SCStr *param_1);
template<class... A> int FUN_10d03b20(A...);
SCStr * __stdcall FUN_10d03b40(SCStr *param_1);
template<class... A> int FUN_10d03b40(A...);
SCStr * __stdcall FUN_10d03b60(SCStr *param_1);
template<class... A> int FUN_10d03b60(A...);
void __fastcall FUN_10d03b80(int *param_1);
template<class... A> int FUN_10d03b80(A...);
SCStr * __stdcall FUN_10d03fd0(SCStr *param_1);
template<class... A> int FUN_10d03fd0(A...);
SCStr * __stdcall FUN_10d03ff0(SCStr *param_1);
template<class... A> int FUN_10d03ff0(A...);
SCStr * __stdcall FUN_10d04850(SCStr *param_1);
template<class... A> int FUN_10d04850(A...);
SCStr * __stdcall FUN_10d04870(SCStr *param_1);
template<class... A> int FUN_10d04870(A...);
SCStr * __stdcall FUN_10d04b90(SCStr *param_1);
template<class... A> int FUN_10d04b90(A...);
SCStr * __stdcall FUN_10d04bc0(SCStr *param_1);
template<class... A> int FUN_10d04bc0(A...);
SCStr * __stdcall FUN_10d04c20(SCStr *param_1);
template<class... A> int FUN_10d04c20(A...);
SCStr * __stdcall FUN_10d04df0(SCStr *param_1);
template<class... A> int FUN_10d04df0(A...);
SCStr * __stdcall FUN_10d04e30(SCStr *param_1);
template<class... A> int FUN_10d04e30(A...);
SCStr * __stdcall FUN_10d04e80(SCStr *param_1);
template<class... A> int FUN_10d04e80(A...);
SCStr * __stdcall FUN_10d04ea0(SCStr *param_1);
template<class... A> int FUN_10d04ea0(A...);
SCStr * __stdcall FUN_10d04f00(SCStr *param_1);
template<class... A> int FUN_10d04f00(A...);
void __fastcall FUN_10d05f30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d05f30(A...);
void __fastcall FUN_10d05f80(int param_1);
template<class... A> int FUN_10d05f80(A...);
SCStr * __stdcall FUN_10d0b4c0(SCStr *param_1);
template<class... A> int FUN_10d0b4c0(A...);
SCStr * __stdcall FUN_10d0b4e0(SCStr *param_1);
template<class... A> int FUN_10d0b4e0(A...);
SCStr * __stdcall FUN_10d0b940(SCStr *param_1);
template<class... A> int FUN_10d0b940(A...);
SCStr * __stdcall FUN_10d0b960(SCStr *param_1);
template<class... A> int FUN_10d0b960(A...);
SCStr * __stdcall FUN_10d0b980(SCStr *param_1);
template<class... A> int FUN_10d0b980(A...);
void __stdcall FUN_10d113e0(int param_1);
template<class... A> int FUN_10d113e0(A...);
void __fastcall FUN_10d12200(undefined4 *param_1);
template<class... A> int FUN_10d12200(A...);
undefined4 __fastcall FUN_10d130b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d130b0(A...);
undefined4 __fastcall FUN_10d13700(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d13700(A...);
SCStr * __stdcall FUN_10d13720(SCStr *param_1);
template<class... A> int FUN_10d13720(A...);
SCStr * __stdcall FUN_10d137a0(SCStr *param_1);
template<class... A> int FUN_10d137a0(A...);
int __fastcall FUN_10d13800(int param_1);
template<class... A> int FUN_10d13800(A...);
SCStr * __stdcall FUN_10d13cd0(SCStr *param_1);
template<class... A> int FUN_10d13cd0(A...);
undefined4 __fastcall FUN_10d13d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d13d50(A...);
undefined4 __fastcall FUN_10d13fd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d13fd0(A...);
void __stdcall FUN_10d14070(SCStr *param_1);
template<class... A> int FUN_10d14070(A...);
void __fastcall FUN_10d14290(int param_1);
template<class... A> int FUN_10d14290(A...);
uint __fastcall FUN_10d15320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d15320(A...);
void __fastcall FUN_10d16980(int *param_1);
template<class... A> int FUN_10d16980(A...);
SCStr * __stdcall FUN_10d17010(SCStr *param_1);
template<class... A> int FUN_10d17010(A...);
SCStr * __stdcall FUN_10d17040(SCStr *param_1);
template<class... A> int FUN_10d17040(A...);
SCStr * __stdcall FUN_10d17060(SCStr *param_1);
template<class... A> int FUN_10d17060(A...);
SCStr * __stdcall FUN_10d17080(SCStr *param_1);
template<class... A> int FUN_10d17080(A...);
SCStr * __stdcall FUN_10d176d0(SCStr *param_1);
template<class... A> int FUN_10d176d0(A...);
SCStr * __stdcall FUN_10d17720(SCStr *param_1);
template<class... A> int FUN_10d17720(A...);
undefined4 __fastcall FUN_10d17740(int param_1);
template<class... A> int FUN_10d17740(A...);
int __fastcall FUN_10d17d40(int *param_1);
template<class... A> int FUN_10d17d40(A...);
undefined1 __fastcall FUN_10d18640(int param_1);
template<class... A> int FUN_10d18640(A...);
void __fastcall FUN_10d18670(int *param_1);
template<class... A> int FUN_10d18670(A...);
undefined1 __fastcall FUN_10d187d0(int param_1);
template<class... A> int FUN_10d187d0(A...);
void FUN_10d18800(void);
template<class... A> int FUN_10d18800(A...);
undefined1 __fastcall FUN_10d189f0(int *param_1);
template<class... A> int FUN_10d189f0(A...);
void __stdcall FUN_10d18a10(SCStr *param_1);
template<class... A> int FUN_10d18a10(A...);
void __fastcall FUN_10d18a30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d18a30(A...);
void __fastcall FUN_10d18e50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d18e50(A...);
void __fastcall FUN_10d19370(int param_1);
template<class... A> int FUN_10d19370(A...);
void __fastcall FUN_10d193b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d193b0(A...);
undefined4 __fastcall FUN_10d194d0(int *param_1);
template<class... A> int FUN_10d194d0(A...);
undefined2 FUN_10d19730(short param_1,int param_2);
template<class... A> int FUN_10d19730(A...);
void __fastcall FUN_10d1a530(int *param_1);
template<class... A> int FUN_10d1a530(A...);
SCStr * __stdcall FUN_10d1c200(SCStr *param_1);
template<class... A> int FUN_10d1c200(A...);
SCStr * __stdcall FUN_10d1c220(SCStr *param_1);
template<class... A> int FUN_10d1c220(A...);
SCStr * __stdcall FUN_10d1c240(SCStr *param_1);
template<class... A> int FUN_10d1c240(A...);
SCStr * __stdcall FUN_10d1c390(SCStr *param_1);
template<class... A> int FUN_10d1c390(A...);
SCStr * __stdcall FUN_10d1c3d0(SCStr *param_1);
template<class... A> int FUN_10d1c3d0(A...);
SCStr * __stdcall FUN_10d1c540(SCStr *param_1);
template<class... A> int FUN_10d1c540(A...);
int __fastcall FUN_10d1c560(int param_1);
template<class... A> int FUN_10d1c560(A...);
SCStr * __stdcall FUN_10d1c5c0(SCStr *param_1);
template<class... A> int FUN_10d1c5c0(A...);
SCStr * __stdcall FUN_10d1cce0(SCStr *param_1);
template<class... A> int FUN_10d1cce0(A...);
void __fastcall FUN_10d1ce70(int param_1);
template<class... A> int FUN_10d1ce70(A...);
void __fastcall FUN_10d1cf60(int param_1);
template<class... A> int FUN_10d1cf60(A...);
void __stdcall FUN_10d1d940(int param_1);
template<class... A> int FUN_10d1d940(A...);
void __fastcall FUN_10d1e0d0(int *param_1);
template<class... A> int FUN_10d1e0d0(A...);
SCStr * __stdcall FUN_10d1e110(SCStr *param_1);
template<class... A> int FUN_10d1e110(A...);
SCStr * __stdcall FUN_10d1e2d0(SCStr *param_1);
template<class... A> int FUN_10d1e2d0(A...);
SCStr * __stdcall FUN_10d1e500(SCStr *param_1);
template<class... A> int FUN_10d1e500(A...);
SCStr * __stdcall FUN_10d1e520(SCStr *param_1);
template<class... A> int FUN_10d1e520(A...);
SCStr * __stdcall FUN_10d20400(SCStr *param_1);
template<class... A> int FUN_10d20400(A...);
SCStr * __stdcall FUN_10d20580(SCStr *param_1);
template<class... A> int FUN_10d20580(A...);
int __fastcall FUN_10d205a0(int param_1);
template<class... A> int FUN_10d205a0(A...);
undefined4 __stdcall FUN_10d205d0(int param_1);
template<class... A> int FUN_10d205d0(A...);
SCStr * FUN_10d20600(SCStr *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10d20600(A...);
SCStr * __stdcall FUN_10d21890(SCStr *param_1);
template<class... A> int FUN_10d21890(A...);
int __fastcall FUN_10d23140(int param_1);
template<class... A> int FUN_10d23140(A...);
void __fastcall FUN_10d234b0(int param_1);
template<class... A> int FUN_10d234b0(A...);
void __stdcall FUN_10d24420(undefined4 param_1,int *param_2);
template<class... A> int FUN_10d24420(A...);
undefined4 * __fastcall FUN_10d26320(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d26320(A...);
void __fastcall FUN_10d27420(int param_1);
template<class... A> int FUN_10d27420(A...);
void __fastcall FUN_10d288d0(int param_1);
template<class... A> int FUN_10d288d0(A...);
SCStr * __stdcall FUN_10d29860(SCStr *param_1);
template<class... A> int FUN_10d29860(A...);
SCStr * __stdcall FUN_10d29880(SCStr *param_1);
template<class... A> int FUN_10d29880(A...);
SCStr * __stdcall FUN_10d298a0(SCStr *param_1);
template<class... A> int FUN_10d298a0(A...);
SCStr * __stdcall FUN_10d2a060(SCStr *param_1);
template<class... A> int FUN_10d2a060(A...);
int __fastcall FUN_10d2a080(int param_1);
template<class... A> int FUN_10d2a080(A...);
int __fastcall FUN_10d2a0a0(int param_1);
template<class... A> int FUN_10d2a0a0(A...);
int __fastcall FUN_10d2a0c0(int param_1);
template<class... A> int FUN_10d2a0c0(A...);
int __fastcall FUN_10d2a0e0(int param_1);
template<class... A> int FUN_10d2a0e0(A...);
SCStr * __stdcall FUN_10d2a180(SCStr *param_1);
template<class... A> int FUN_10d2a180(A...);
SCStr * __stdcall FUN_10d2a1e0(SCStr *param_1);
template<class... A> int FUN_10d2a1e0(A...);
SCStr * __stdcall FUN_10d2a220(SCStr *param_1);
template<class... A> int FUN_10d2a220(A...);
SCStr * __stdcall FUN_10d2a780(SCStr *param_1);
template<class... A> int FUN_10d2a780(A...);
SCStr * __stdcall FUN_10d2a7a0(SCStr *param_1);
template<class... A> int FUN_10d2a7a0(A...);
SCStr * __stdcall FUN_10d2a8c0(SCStr *param_1);
template<class... A> int FUN_10d2a8c0(A...);
void __fastcall FUN_10d2ae00(int param_1);
template<class... A> int FUN_10d2ae00(A...);
void __stdcall FUN_10d2be50(int param_1);
template<class... A> int FUN_10d2be50(A...);
void __stdcall FUN_10d2be70(int param_1);
template<class... A> int FUN_10d2be70(A...);
void __fastcall FUN_10d30b40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10d30b40(A...);
void __fastcall FUN_10d30bb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10d30bb0(A...);
SCStr * __stdcall FUN_10d354e0(SCStr *param_1);
template<class... A> int FUN_10d354e0(A...);
undefined4 __fastcall FUN_10d35830(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d35830(A...);
SCStr * __stdcall FUN_10d35ca0(SCStr *param_1);
template<class... A> int FUN_10d35ca0(A...);
undefined4 __fastcall FUN_10d360e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d360e0(A...);
SCStr * __stdcall FUN_10d36430(SCStr *param_1);
template<class... A> int FUN_10d36430(A...);
SCStr * __stdcall FUN_10d36460(SCStr *param_1);
template<class... A> int FUN_10d36460(A...);
undefined4 __fastcall FUN_10d370c0(int param_1);
template<class... A> int FUN_10d370c0(A...);
int __fastcall FUN_10d370e0(int *param_1);
template<class... A> int FUN_10d370e0(A...);
undefined4 __fastcall FUN_10d37d60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d37d60(A...);
undefined4 __fastcall FUN_10d37fa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d37fa0(A...);
bool __fastcall FUN_10d381f0(int *param_1);
template<class... A> int FUN_10d381f0(A...);
void __fastcall FUN_10d38420(int param_1);
template<class... A> int FUN_10d38420(A...);
void __fastcall FUN_10d38450(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d38450(A...);
void __fastcall FUN_10d38510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d38510(A...);
void __fastcall FUN_10d386f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d386f0(A...);
void __fastcall FUN_10d389c0(int param_1);
template<class... A> int FUN_10d389c0(A...);
void __fastcall FUN_10d38a10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d38a10(A...);
void __fastcall FUN_10d38a40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d38a40(A...);
void __fastcall FUN_10d38a70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d38a70(A...);
void __fastcall FUN_10d38aa0(int param_1);
template<class... A> int FUN_10d38aa0(A...);
void __fastcall FUN_10d39e10(int *param_1);
template<class... A> int FUN_10d39e10(A...);
undefined4 __fastcall FUN_10d39fa0(int *param_1);
template<class... A> int FUN_10d39fa0(A...);
uint __fastcall FUN_10d3a8f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d3a8f0(A...);
void __fastcall FUN_10d3bc70(int param_1);
template<class... A> int FUN_10d3bc70(A...);
undefined2 __fastcall FUN_10d3c3a0(int param_1);
template<class... A> int FUN_10d3c3a0(A...);
undefined4 __fastcall FUN_10d3c470(int param_1);
template<class... A> int FUN_10d3c470(A...);
SCStr * __stdcall FUN_10d3c580(SCStr *param_1);
template<class... A> int FUN_10d3c580(A...);
SCStr * __stdcall FUN_10d3c700(SCStr *param_1);
template<class... A> int FUN_10d3c700(A...);
SCStr * __stdcall FUN_10d3c720(SCStr *param_1);
template<class... A> int FUN_10d3c720(A...);
bool __fastcall FUN_10d3c880(int *param_1);
template<class... A> int FUN_10d3c880(A...);
undefined1 __fastcall FUN_10d3c8b0(int param_1);
template<class... A> int FUN_10d3c8b0(A...);
undefined1 __fastcall FUN_10d3c910(int param_1);
template<class... A> int FUN_10d3c910(A...);
void __fastcall FUN_10d3c9b0(int param_1);
template<class... A> int FUN_10d3c9b0(A...);
void __stdcall FUN_10d3ccf0(int param_1);
template<class... A> int FUN_10d3ccf0(A...);
void __fastcall FUN_10d3dc90(undefined4 *param_1);
template<class... A> int FUN_10d3dc90(A...);
void __fastcall FUN_10d3dcb0(undefined4 *param_1);
template<class... A> int FUN_10d3dcb0(A...);
SCStr * __stdcall FUN_10d3ef90(SCStr *param_1);
template<class... A> int FUN_10d3ef90(A...);
SCStr * __stdcall FUN_10d3efb0(SCStr *param_1);
template<class... A> int FUN_10d3efb0(A...);
SCStr * __stdcall FUN_10d3efd0(SCStr *param_1);
template<class... A> int FUN_10d3efd0(A...);
SCStr * __stdcall FUN_10d3eff0(SCStr *param_1);
template<class... A> int FUN_10d3eff0(A...);
undefined4 __fastcall FUN_10d3f250(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d3f250(A...);
undefined4 __fastcall FUN_10d3f7a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d3f7a0(A...);
SCStr * __stdcall FUN_10d3f7c0(SCStr *param_1);
template<class... A> int FUN_10d3f7c0(A...);
SCStr * __stdcall FUN_10d3f7e0(SCStr *param_1);
template<class... A> int FUN_10d3f7e0(A...);
int __fastcall FUN_10d3f8e0(int param_1);
template<class... A> int FUN_10d3f8e0(A...);
SCStr * __stdcall FUN_10d3fb00(SCStr *param_1);
template<class... A> int FUN_10d3fb00(A...);
SCStr * __stdcall FUN_10d3fc90(SCStr *param_1);
template<class... A> int FUN_10d3fc90(A...);
SCStr * __stdcall FUN_10d3fcd0(SCStr *param_1);
template<class... A> int FUN_10d3fcd0(A...);
undefined4 __fastcall FUN_10d3fd00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d3fd00(A...);
undefined4 __fastcall FUN_10d3ff90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d3ff90(A...);
uint __fastcall FUN_10d40010(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d40010(A...);
void __fastcall FUN_10d40040(int param_1);
template<class... A> int FUN_10d40040(A...);
void __fastcall FUN_10d40200(int param_1);
template<class... A> int FUN_10d40200(A...);
uint __fastcall FUN_10d422d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d422d0(A...);
undefined4 __fastcall FUN_10d44fa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d44fa0(A...);
undefined4 __fastcall FUN_10d44fc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d44fc0(A...);
undefined4 __fastcall FUN_10d44fe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d44fe0(A...);
undefined4 __fastcall FUN_10d45e50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d45e50(A...);
undefined4 __fastcall FUN_10d45e70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d45e70(A...);
undefined4 __fastcall FUN_10d45e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d45e90(A...);
SCStr * __stdcall FUN_10d45f10(SCStr *param_1);
template<class... A> int FUN_10d45f10(A...);
int __fastcall FUN_10d45f90(int param_1);
template<class... A> int FUN_10d45f90(A...);
SCStr * __stdcall FUN_10d460e0(SCStr *param_1);
template<class... A> int FUN_10d460e0(A...);
SCStr * __stdcall FUN_10d46110(SCStr *param_1);
template<class... A> int FUN_10d46110(A...);
undefined4 __fastcall FUN_10d462d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d462d0(A...);
undefined4 __fastcall FUN_10d462f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d462f0(A...);
undefined4 __fastcall FUN_10d46310(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d46310(A...);
undefined4 __fastcall FUN_10d46760(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d46760(A...);
undefined4 __fastcall FUN_10d46780(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d46780(A...);
undefined4 __fastcall FUN_10d467a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d467a0(A...);
void __stdcall FUN_10d467f0(SCStr *param_1);
template<class... A> int FUN_10d467f0(A...);
void __fastcall FUN_10d46830(int param_1);
template<class... A> int FUN_10d46830(A...);
void __fastcall FUN_10d468e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d468e0(A...);
void __fastcall FUN_10d49e60(int param_1);
template<class... A> int FUN_10d49e60(A...);
uint __fastcall FUN_10d49e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d49e90(A...);
uint __fastcall FUN_10d49eb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d49eb0(A...);
uint __fastcall FUN_10d49ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d49ed0(A...);
void __fastcall FUN_10d4b930(int *param_1);
template<class... A> int FUN_10d4b930(A...);
SCStr * __stdcall FUN_10d4d940(SCStr *param_1);
template<class... A> int FUN_10d4d940(A...);
SCStr * __stdcall FUN_10d4d960(SCStr *param_1);
template<class... A> int FUN_10d4d960(A...);
SCStr * __stdcall FUN_10d4d980(SCStr *param_1);
template<class... A> int FUN_10d4d980(A...);
SCStr * __stdcall FUN_10d4ea90(SCStr *param_1);
template<class... A> int FUN_10d4ea90(A...);
SCStr * __stdcall FUN_10d4eab0(SCStr *param_1);
template<class... A> int FUN_10d4eab0(A...);
SCStr * __stdcall FUN_10d4eae0(SCStr *param_1);
template<class... A> int FUN_10d4eae0(A...);
undefined4 __stdcall FUN_10d4f3a0(int param_1);
template<class... A> int FUN_10d4f3a0(A...);
undefined1 __fastcall FUN_10d507d0(int param_1);
template<class... A> int FUN_10d507d0(A...);
undefined4 __fastcall FUN_10d50800(int param_1);
template<class... A> int FUN_10d50800(A...);
undefined4 __fastcall FUN_10d51ab0(int param_1);
template<class... A> int FUN_10d51ab0(A...);
void __fastcall FUN_10d53b70(int *param_1);
template<class... A> int FUN_10d53b70(A...);
void __stdcall FUN_10d54410(int param_1,int param_2);
template<class... A> int FUN_10d54410(A...);
void __fastcall FUN_10d54a10(int *param_1);
template<class... A> int FUN_10d54a10(A...);
void __stdcall FUN_10d54a50(int param_1,int param_2);
template<class... A> int FUN_10d54a50(A...);
undefined4 __fastcall FUN_10d54d40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d54d40(A...);
undefined4 __fastcall FUN_10d553a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d553a0(A...);
undefined4 __stdcall FUN_10d554c0(int param_1);
template<class... A> int FUN_10d554c0(A...);
SCStr * FUN_10d554f0(SCStr *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10d554f0(A...);
undefined4 __fastcall FUN_10d55ac0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d55ac0(A...);
undefined4 __fastcall FUN_10d56df0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d56df0(A...);
void __stdcall FUN_10d57050(SCStr *param_1);
template<class... A> int FUN_10d57050(A...);
void __fastcall FUN_10d57bf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d57bf0(A...);
uint __fastcall FUN_10d58c00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d58c00(A...);
uint __fastcall FUN_10d59c40(int param_1);
template<class... A> int FUN_10d59c40(A...);
SCStr * __stdcall FUN_10d59d80(SCStr *param_1);
template<class... A> int FUN_10d59d80(A...);
void __fastcall FUN_10d59da0(undefined4 *param_1);
template<class... A> int FUN_10d59da0(A...);
void __fastcall FUN_10d59de0(undefined4 *param_1);
template<class... A> int FUN_10d59de0(A...);
void __fastcall FUN_10d59e20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d59e20(A...);
undefined4 __fastcall FUN_10d59f20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d59f20(A...);
undefined4 __fastcall FUN_10d59f40(int param_1);
template<class... A> int FUN_10d59f40(A...);
undefined4 __fastcall FUN_10d5a0c0(int param_1);
template<class... A> int FUN_10d5a0c0(A...);
undefined4 __fastcall FUN_10d5a1b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5a1b0(A...);
undefined4 __fastcall FUN_10d5a1e0(int param_1);
template<class... A> int FUN_10d5a1e0(A...);
undefined4 __fastcall FUN_10d5a200(int param_1);
template<class... A> int FUN_10d5a200(A...);
undefined4 __fastcall FUN_10d5a220(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5a220(A...);
undefined4 __fastcall FUN_10d5a300(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5a300(A...);
undefined4 __fastcall FUN_10d5a320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5a320(A...);
uint __fastcall FUN_10d5a4e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5a4e0(A...);
uint __fastcall FUN_10d5a700(int param_1);
template<class... A> int FUN_10d5a700(A...);
uint __fastcall FUN_10d5a720(int param_1);
template<class... A> int FUN_10d5a720(A...);
uint __fastcall FUN_10d5a740(int param_1);
template<class... A> int FUN_10d5a740(A...);
uint __fastcall FUN_10d5a760(int param_1);
template<class... A> int FUN_10d5a760(A...);
uint __fastcall FUN_10d5a780(int param_1);
template<class... A> int FUN_10d5a780(A...);
uint __fastcall FUN_10d5a7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5a7e0(A...);
uint __fastcall FUN_10d5a800(int param_1);
template<class... A> int FUN_10d5a800(A...);
undefined4 __fastcall FUN_10d5a910(int param_1);
template<class... A> int FUN_10d5a910(A...);
void __fastcall FUN_10d5a960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10d5a960(A...);
uint __fastcall FUN_10d5aa70(int param_1);
template<class... A> int FUN_10d5aa70(A...);
void __fastcall FUN_10d5add0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5add0(A...);
void __fastcall FUN_10d5adf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5adf0(A...);
uint __fastcall FUN_10d5ae10(int param_1);
template<class... A> int FUN_10d5ae10(A...);
uint __fastcall FUN_10d5ae30(int param_1);
template<class... A> int FUN_10d5ae30(A...);
uint __fastcall FUN_10d5b120(int param_1);
template<class... A> int FUN_10d5b120(A...);
void __fastcall FUN_10d5e1b0(int *param_1);
template<class... A> int FUN_10d5e1b0(A...);
// Reference entry 10beebc0; body size 24 bytes.
#line 1 "ENTRY_10beebc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10beebc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10beed50; body size 34 bytes.
#line 1 "ENTRY_10beed50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10beed50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10bef940(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMutableUrlRequest);
  return (undefined4 *)(param_1);
}


// Reference entry 10befff0; body size 19 bytes.
#line 1 "ENTRY_10befff0"

void __fastcall FUN_10befff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf00f0; body size 62 bytes.
#line 1 "ENTRY_10bf00f0"

void __fastcall FUN_10bf00f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlConnection_Callback);
  piVar1 = (int *)((int *)param_1[0xd]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1) + 4);
    param_1[0xd] = (undefined4)(0);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf0550; body size 37 bytes.
#line 1 "ENTRY_10bf0550"

int * __fastcall FUN_10bf0550(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10bf0600; body size 45 bytes.
#line 1 "ENTRY_10bf0600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf0600(byte param_2)
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


// Reference entry 10bf06b0; body size 33 bytes.
#line 1 "ENTRY_10bf06b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf06b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf06e0; body size 33 bytes.
#line 1 "ENTRY_10bf06e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf06e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf0710; body size 32 bytes.
#line 1 "ENTRY_10bf0710"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bf0710(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bf0740; body size 32 bytes.
#line 1 "ENTRY_10bf0740"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bf0740(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bf0160();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x34);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bf0770; body size 38 bytes.
#line 1 "ENTRY_10bf0770"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf0770(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlDeleteRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf07a0; body size 38 bytes.
#line 1 "ENTRY_10bf07a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf07a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlGetRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf07d0; body size 38 bytes.
#line 1 "ENTRY_10bf07d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf07d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlPostRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf0800; body size 38 bytes.
#line 1 "ENTRY_10bf0800"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf0800(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUrlPutRequest);
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf0a50; body size 24 bytes.
#line 1 "ENTRY_10bf0a50"

void FUN_10bf0a50(void)

{
  thunk_FUN_112a7f20(&DAT_121a524c);
  DAT_121a5254 = (int)(0);
  return;
}


// Reference entry 10bf0e70; body size 25 bytes.
#line 1 "ENTRY_10bf0e70"

int * __thiscall Recovered_Bulk::m_FUN_10bf0e70(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x40), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10bf0e90; body size 25 bytes.
#line 1 "ENTRY_10bf0e90"

int * __thiscall Recovered_Bulk::m_FUN_10bf0e90(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1c), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10bf0eb0; body size 20 bytes.
#line 1 "ENTRY_10bf0eb0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf0eb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 10bf0ed0; body size 25 bytes.
#line 1 "ENTRY_10bf0ed0"

int * __thiscall Recovered_Bulk::m_FUN_10bf0ed0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x18), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10bf0f00; body size 20 bytes.
#line 1 "ENTRY_10bf0f00"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf0f00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10bf1100; body size 25 bytes.
#line 1 "ENTRY_10bf1100"

int * __thiscall Recovered_Bulk::m_FUN_10bf1100(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x38), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10bf1120; body size 25 bytes.
#line 1 "ENTRY_10bf1120"

int * __thiscall Recovered_Bulk::m_FUN_10bf1120(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x14), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10bf11a0; body size 25 bytes.
#line 1 "ENTRY_10bf11a0"

int * __thiscall Recovered_Bulk::m_FUN_10bf11a0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x10), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10bf11c0; body size 25 bytes.
#line 1 "ENTRY_10bf11c0"

int * __thiscall Recovered_Bulk::m_FUN_10bf11c0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x24), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10bf12a0; body size 24 bytes.
#line 1 "ENTRY_10bf12a0"

void FUN_10bf12a0(void)

{
  thunk_FUN_112a9cf0(&DAT_121a524c);
  DAT_121a5254 = (int)(1);
  return;
}


// Reference entry 10bf1470; body size 60 bytes.
#line 1 "ENTRY_10bf1470"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf1470(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"), 0);
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)(0x0)) {
      (**(code **)(*param_1 + 4))();
    }
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10bf21c0; body size 24 bytes.
#line 1 "ENTRY_10bf21c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf21c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf21e0; body size 24 bytes.
#line 1 "ENTRY_10bf21e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf21e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf22f0; body size 45 bytes.
#line 1 "ENTRY_10bf22f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf22f0(byte param_2)
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


// Reference entry 10bf2330; body size 52 bytes.
#line 1 "ENTRY_10bf2330"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf2330(byte param_2)
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


// Reference entry 10bf2380; body size 52 bytes.
#line 1 "ENTRY_10bf2380"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf2380(byte param_2)
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


// Reference entry 10bf23d0; body size 33 bytes.
#line 1 "ENTRY_10bf23d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf23d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf2400; body size 52 bytes.
#line 1 "ENTRY_10bf2400"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf2400(byte param_2)
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


// Reference entry 10bf2460; body size 48 bytes.
#line 1 "ENTRY_10bf2460"

int __fastcall FUN_10bf2460(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x20))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10bf24a0; body size 48 bytes.
#line 1 "ENTRY_10bf24a0"

int __fastcall FUN_10bf24a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x20))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10bf2dc0; body size 19 bytes.
#line 1 "ENTRY_10bf2dc0"

void __fastcall FUN_10bf2dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf2e90; body size 45 bytes.
#line 1 "ENTRY_10bf2e90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf2e90(byte param_2)
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


// Reference entry 10bf2ed0; body size 33 bytes.
#line 1 "ENTRY_10bf2ed0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf2ed0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf2fe0; body size 20 bytes.
#line 1 "ENTRY_10bf2fe0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf2fe0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10bf3000; body size 20 bytes.
#line 1 "ENTRY_10bf3000"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf3000(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10bf3280; body size 19 bytes.
#line 1 "ENTRY_10bf3280"

void __fastcall FUN_10bf3280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf3350; body size 45 bytes.
#line 1 "ENTRY_10bf3350"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf3350(byte param_2)
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


// Reference entry 10bf3450; body size 33 bytes.
#line 1 "ENTRY_10bf3450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf3450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf34a0; body size 21 bytes.
#line 1 "ENTRY_10bf34a0"

SCStr * __stdcall FUN_10bf34a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAudioInputResource");
  return (SCStr *)(param_1);
}


// Reference entry 10bf34d0; body size 20 bytes.
#line 1 "ENTRY_10bf34d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf34d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10bf34f0; body size 20 bytes.
#line 1 "ENTRY_10bf34f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf34f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10bf3b40; body size 40 bytes.
#line 1 "ENTRY_10bf3b40"

int __thiscall Recovered_Bulk::m_FUN_10bf3b40(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10bf3bc0((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10bf3b80; body size 40 bytes.
#line 1 "ENTRY_10bf3b80"

int __thiscall Recovered_Bulk::m_FUN_10bf3b80(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10bf3c60((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10bf50a0; body size 39 bytes.
#line 1 "ENTRY_10bf50a0"

undefined4 * __fastcall FUN_10bf50a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf50d0; body size 39 bytes.
#line 1 "ENTRY_10bf50d0"

undefined4 * __fastcall FUN_10bf50d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bf5650; body size 19 bytes.
#line 1 "ENTRY_10bf5650"

void __fastcall FUN_10bf5650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bf5670; body size 19 bytes.
#line 1 "ENTRY_10bf5670"

void __fastcall FUN_10bf5670(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10bf5690; body size 19 bytes.
#line 1 "ENTRY_10bf5690"

void __fastcall FUN_10bf5690(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10bf5880; body size 38 bytes.
#line 1 "ENTRY_10bf5880"

void __fastcall FUN_10bf5880(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10bf5990();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 10bf58b0; body size 44 bytes.
#line 1 "ENTRY_10bf58b0"

void __fastcall FUN_10bf58b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (param_1[1] != 0) {
    thunk_FUN_10bf4300(*param_1,param_1[1] + 8);
    iVar1 = (int)(param_1[1]);
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x20);
  }
  return;
}


// Reference entry 10bf5970; body size 25 bytes.
#line 1 "ENTRY_10bf5970"

void __fastcall FUN_10bf5970(undefined4 *param_1)

{
  thunk_FUN_10bf3d70(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10bf5f40; body size 27 bytes.
#line 1 "ENTRY_10bf5f40"

int __stdcall FUN_10bf5f40(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10bf3f30((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10bf6070; body size 45 bytes.
#line 1 "ENTRY_10bf6070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf6070(byte param_2)
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


// Reference entry 10bf60b0; body size 32 bytes.
#line 1 "ENTRY_10bf60b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bf60b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bf5990();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bf61a0; body size 32 bytes.
#line 1 "ENTRY_10bf61a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bf61a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bf5b40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bf61d0; body size 33 bytes.
#line 1 "ENTRY_10bf61d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf61d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bf6240; body size 25 bytes.
#line 1 "ENTRY_10bf6240"

void __fastcall FUN_10bf6240(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10bf6260; body size 25 bytes.
#line 1 "ENTRY_10bf6260"

void __fastcall FUN_10bf6260(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10bf64c0; body size 29 bytes.
#line 1 "ENTRY_10bf64c0"

void __fastcall FUN_10bf64c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_10bf3e70(*param_1,piVar1);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 10bf7260; body size 25 bytes.
#line 1 "ENTRY_10bf7260"

void __fastcall FUN_10bf7260(undefined4 *param_1)

{
  thunk_FUN_10bf3d70(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x20);
  return;
}


// Reference entry 10bf78b0; body size 50 bytes.
#line 1 "ENTRY_10bf78b0"

bool FUN_10bf78b0(undefined4 param_1,int param_2)

{
  int iVar1;
  __time64_t _Var2;
  
  _Var2 = (__time64_t)(_time64((__time64_t *)0x0), 0);
  iVar1 = (int)(thunk_FUN_10bf8040(param_1), 0);
  return (bool)(param_2 * 0x15180 < (int)_Var2 - iVar1);
}


// Reference entry 10bf7a60; body size 32 bytes.
#line 1 "ENTRY_10bf7a60"

void __fastcall FUN_10bf7a60(int *param_1)

{
  thunk_FUN_10bf3d70(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10bf8890; body size 24 bytes.
#line 1 "ENTRY_10bf8890"

void __fastcall FUN_10bf8890(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x24) + 0xc))(param_1);
    *(undefined1*)(param_1 + 0x28) = (undefined1)(1);
  }
  return;
}


// Reference entry 10bfad00; body size 39 bytes.
#line 1 "ENTRY_10bfad00"

undefined4 * __fastcall FUN_10bfad00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10bfb3b0; body size 19 bytes.
#line 1 "ENTRY_10bfb3b0"

void __fastcall FUN_10bfb3b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10bfb4b0; body size 38 bytes.
#line 1 "ENTRY_10bfb4b0"

void __fastcall FUN_10bfb4b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10bfb550();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x10);
  }
  return;
}


// Reference entry 10bfb650; body size 25 bytes.
#line 1 "ENTRY_10bfb650"

void __fastcall FUN_10bfb650(undefined4 *param_1)

{
  thunk_FUN_10bfb670();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  return;
}


// Reference entry 10bfbad0; body size 27 bytes.
#line 1 "ENTRY_10bfbad0"

int __stdcall FUN_10bfbad0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10bfa620((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10bfbbe0; body size 32 bytes.
#line 1 "ENTRY_10bfbbe0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bfbbe0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bfb550();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bfbc10; body size 51 bytes.
#line 1 "ENTRY_10bfbc10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfbc10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10bfb670();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x623c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bfbc50; body size 35 bytes.
#line 1 "ENTRY_10bfbc50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bfbc50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bfb670();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x622c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bfbc80; body size 32 bytes.
#line 1 "ENTRY_10bfbc80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bfbc80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bfb760();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bfbcd0; body size 25 bytes.
#line 1 "ENTRY_10bfbcd0"

void __fastcall FUN_10bfbcd0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10bfe530; body size 41 bytes.
#line 1 "ENTRY_10bfe530"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfe530(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe5b0; body size 41 bytes.
#line 1 "ENTRY_10bfe5b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfe5b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe5f0; body size 41 bytes.
#line 1 "ENTRY_10bfe5f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfe5f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bfe9e0; body size 60 bytes.
#line 1 "ENTRY_10bfe9e0"

void __fastcall FUN_10bfe9e0(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 10bfee80; body size 45 bytes.
#line 1 "ENTRY_10bfee80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfee80(byte param_2)
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


// Reference entry 10bfeec0; body size 45 bytes.
#line 1 "ENTRY_10bfeec0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfeec0(byte param_2)
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


// Reference entry 10bfef00; body size 58 bytes.
#line 1 "ENTRY_10bfef00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfef00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAudioData);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_10bfebd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bfef50; body size 33 bytes.
#line 1 "ENTRY_10bfef50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfef50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bfef80; body size 33 bytes.
#line 1 "ENTRY_10bfef80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bfef80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10bff130; body size 32 bytes.
#line 1 "ENTRY_10bff130"

undefined4 __thiscall Recovered_Bulk::m_FUN_10bff130(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10bfebd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4)(param_1);
}


// Reference entry 10bff180; body size 61 bytes.
#line 1 "ENTRY_10bff180"

void __thiscall Recovered_Bulk::m_FUN_10bff180(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10bff8c0; body size 21 bytes.
#line 1 "ENTRY_10bff8c0"

SCStr * __stdcall FUN_10bff8c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCMusicServer");
  return (SCStr *)(param_1);
}


// Reference entry 10c00a90; body size 35 bytes.
#line 1 "ENTRY_10c00a90"

void __fastcall FUN_10c00a90(int param_1)

{
  if (*(void **)(param_1 + 0x1c) != (void *)((0x0))) {
    free(*(void **)(param_1 + 0x1c));
    *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  }
  return;
}


// Reference entry 10c00ae0; body size 51 bytes.
#line 1 "ENTRY_10c00ae0"

undefined4 __fastcall FUN_10c00ae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x14))(), 0);
    iVar2 = (int)(*(int *)(param_1 + 0x14) + 1);
    if ((iVar2 < iVar1) && (*(int *)(param_1 + 0x14) = iVar2, -1 < iVar2)) {
      iVar1 = (int)((**(code **)(**(int **)(param_1 + 8) + 0x14))(), 0);
      if (*(int *)(param_1 + 0x14) < (int)(iVar1)) {
        return (undefined4)(1);
      }
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c01490; body size 36 bytes.
#line 1 "ENTRY_10c01490"

void __thiscall Recovered_Bulk::m_FUN_10c01490(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  ((SCStr *)(this_))->op_ctor(param_2);
  *(undefined4*)(this_ + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10c014c0; body size 36 bytes.
#line 1 "ENTRY_10c014c0"

void __thiscall Recovered_Bulk::m_FUN_10c014c0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  ((SCStr *)(this_))->op_ctor(param_2);
  *(undefined4*)(this_ + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10c014f0; body size 36 bytes.
#line 1 "ENTRY_10c014f0"

void __thiscall Recovered_Bulk::m_FUN_10c014f0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)(*(SCStr **)(param_1 + 4), 0);
  ((SCStr *)(this_))->op_ctor(param_2);
  *(undefined4*)(this_ + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10c01d30; body size 41 bytes.
#line 1 "ENTRY_10c01d30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c01d30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c01d70; body size 41 bytes.
#line 1 "ENTRY_10c01d70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c01d70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c020a0; body size 19 bytes.
#line 1 "ENTRY_10c020a0"

void __fastcall FUN_10c020a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c025f0; body size 45 bytes.
#line 1 "ENTRY_10c025f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c025f0(byte param_2)
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


// Reference entry 10c02630; body size 33 bytes.
#line 1 "ENTRY_10c02630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c02630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c02e00; body size 60 bytes.
#line 1 "ENTRY_10c02e00"

void __stdcall FUN_10c02e00(int param_1,int param_2)

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


// Reference entry 10c02e50; body size 21 bytes.
#line 1 "ENTRY_10c02e50"

SCStr * __stdcall FUN_10c02e50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCServiceAppInteropManager");
  return (SCStr *)(param_1);
}


// Reference entry 10c03220; body size 25 bytes.
#line 1 "ENTRY_10c03220"

int * __thiscall Recovered_Bulk::m_FUN_10c03220(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10c05320; body size 41 bytes.
#line 1 "ENTRY_10c05320"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c05320(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c05360; body size 41 bytes.
#line 1 "ENTRY_10c05360"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c05360(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c053a0; body size 41 bytes.
#line 1 "ENTRY_10c053a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c053a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c053e0; body size 24 bytes.
#line 1 "ENTRY_10c053e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c053e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c05b20; body size 26 bytes.
#line 1 "ENTRY_10c05b20"

void __fastcall FUN_10c05b20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c06110; body size 18 bytes.
#line 1 "ENTRY_10c06110"

void __fastcall FUN_10c06110(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10c06130; body size 18 bytes.
#line 1 "ENTRY_10c06130"

void __fastcall FUN_10c06130(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10c06150; body size 18 bytes.
#line 1 "ENTRY_10c06150"

void __fastcall FUN_10c06150(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10c06170; body size 18 bytes.
#line 1 "ENTRY_10c06170"

void __fastcall FUN_10c06170(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10c06190; body size 18 bytes.
#line 1 "ENTRY_10c06190"

void __fastcall FUN_10c06190(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10c061b0; body size 18 bytes.
#line 1 "ENTRY_10c061b0"

void __fastcall FUN_10c061b0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0xc);
  }
  return;
}


// Reference entry 10c062d0; body size 45 bytes.
#line 1 "ENTRY_10c062d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c062d0(byte param_2)
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


// Reference entry 10c06310; body size 52 bytes.
#line 1 "ENTRY_10c06310"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c06310(byte param_2)
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


// Reference entry 10c06360; body size 52 bytes.
#line 1 "ENTRY_10c06360"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c06360(byte param_2)
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


// Reference entry 10c06560; body size 45 bytes.
#line 1 "ENTRY_10c06560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c06560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c065a0; body size 33 bytes.
#line 1 "ENTRY_10c065a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c065a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c06e20; body size 21 bytes.
#line 1 "ENTRY_10c06e20"

void __thiscall Recovered_Bulk::m_FUN_10c06e20(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10c06f90; body size 23 bytes.
#line 1 "ENTRY_10c06f90"

void __fastcall FUN_10c06f90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c06fb0; body size 22 bytes.
#line 1 "ENTRY_10c06fb0"

void __stdcall FUN_10c06fb0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10cf4ae0(0);
  return;
}


// Reference entry 10c070b0; body size 48 bytes.
#line 1 "ENTRY_10c070b0"

int __fastcall FUN_10c070b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x70))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c0cf10; body size 21 bytes.
#line 1 "ENTRY_10c0cf10"

SCStr * __stdcall FUN_10c0cf10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ChickenExit");
  return (SCStr *)(param_1);
}


// Reference entry 10c0e800; body size 21 bytes.
#line 1 "ENTRY_10c0e800"

SCStr * __stdcall FUN_10c0e800(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10c0ed70; body size 21 bytes.
#line 1 "ENTRY_10c0ed70"

SCStr * __stdcall FUN_10c0ed70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Secure Player Wizard");
  return (SCStr *)(param_1);
}


// Reference entry 10c0f120; body size 43 bytes.
#line 1 "ENTRY_10c0f120"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c0f120(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  SCLibrary *pSVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  iVar1 = (int)(*param_1);
  uVar3 = (undefined4)((**(code **)(*(int *)pSVar2 + 0x124))(), 0);
  (**(code **)(iVar1 + 0x80))(param_2,uVar3);
  return (undefined4)(unaff_EBX);
}


// Reference entry 10c0f160; body size 38 bytes.
#line 1 "ENTRY_10c0f160"

undefined4 __stdcall FUN_10c0f160(undefined4 param_1)

{
  SCLibrary *pSVar1;
  undefined4 uVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  uVar2 = (undefined4)((**(code **)(*(int *)pSVar1 + 0x124))(), 0);
  thunk_FUN_10c11c30(param_1,uVar2);
  return (undefined4)(param_1);
}


// Reference entry 10c146f0; body size 28 bytes.
#line 1 "ENTRY_10c146f0"

undefined4 FUN_10c146f0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)(thunk_FUN_101b5540(), 0);
  if (iVar2 != 0) {
    cVar1 = (char)(thunk_FUN_101b5de0(2), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c14ab0; body size 35 bytes.
#line 1 "ENTRY_10c14ab0"

undefined4 __fastcall FUN_10c14ab0(int *param_1)

{
  char cVar1;
  
  thunk_FUN_10c13d10();
  if ((char)param_1[0xc] == '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x14))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c16c60; body size 43 bytes.
#line 1 "ENTRY_10c16c60"

undefined4 __fastcall FUN_10c16c60(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x20) != (int *)((0x0))) &&
     (iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), 0), iVar1 != 0)) {
    return (undefined4)(0);
  }
  if ((*(int **)(param_1 + 0x18) != (int *)((0x0))) &&
     (iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x18) + 0x14))(), 0), iVar1 != 0)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10c16f90; body size 41 bytes.
#line 1 "ENTRY_10c16f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c16f90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c16fd0; body size 41 bytes.
#line 1 "ENTRY_10c16fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c16fd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c17010; body size 41 bytes.
#line 1 "ENTRY_10c17010"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c17010(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c17050; body size 24 bytes.
#line 1 "ENTRY_10c17050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c17050(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c17d60; body size 33 bytes.
#line 1 "ENTRY_10c17d60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c17d60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c17d90; body size 35 bytes.
#line 1 "ENTRY_10c17d90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c17d90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c17bb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c17dc0; body size 35 bytes.
#line 1 "ENTRY_10c17dc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c17dc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c17930();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x170);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c17df0; body size 35 bytes.
#line 1 "ENTRY_10c17df0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c17df0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c17bb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c17e20; body size 55 bytes.
#line 1 "ENTRY_10c17e20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c17e20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCLocalMusicShuffleAllNodeBrowseItem);
  thunk_FUN_10c17bb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x108);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c17fd0; body size 48 bytes.
#line 1 "ENTRY_10c17fd0"

undefined4 __fastcall FUN_10c17fd0(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)((**(code **)(*(int *)param_1[0x28] + 0x14))(), 0);
  cVar1 = (char)((**(code **)(*param_1 + 0x168))(), 0);
  if ((cVar1 != '\0') && (1 < uVar2)) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10c18420; body size 21 bytes.
#line 1 "ENTRY_10c18420"

SCStr * __stdcall FUN_10c18420(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("allnode");
  return (SCStr *)(param_1);
}


// Reference entry 10c18540; body size 21 bytes.
#line 1 "ENTRY_10c18540"

SCStr * __stdcall FUN_10c18540(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("shuffleallnode");
  return (SCStr *)(param_1);
}


// Reference entry 10c18560; body size 28 bytes.
#line 1 "ENTRY_10c18560"

int * __thiscall Recovered_Bulk::m_FUN_10c18560(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x160), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10c186b0; body size 20 bytes.
#line 1 "ENTRY_10c186b0"

undefined4 __fastcall FUN_10c186b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10c19540; body size 17 bytes.
#line 1 "ENTRY_10c19540"

undefined4 __fastcall FUN_10c19540(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10c1bbc0; body size 23 bytes.
#line 1 "ENTRY_10c1bbc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c1bbc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xdc));
  return (SCStr *)(param_2);
}


// Reference entry 10c1be40; body size 56 bytes.
#line 1 "ENTRY_10c1be40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c1be40(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = (undefined4)(7);
    if (*(int **)(param_1 + 0xa8) != (int *)((0x0))) {
      uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(), 0);
    }
    return (undefined4)(uVar1);
  }
  if (param_2 != 2) {
    uVar1 = (undefined4)(thunk_FUN_104d8ab0(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 10c1c560; body size 21 bytes.
#line 1 "ENTRY_10c1c560"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c1c560(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(param_2);
  return (undefined4)(0);
}


// Reference entry 10c1c700; body size 21 bytes.
#line 1 "ENTRY_10c1c700"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c1c700(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(param_2);
  return (undefined4)(0);
}


// Reference entry 10c1c720; body size 35 bytes.
#line 1 "ENTRY_10c1c720"

SCStr * __stdcall FUN_10c1c720(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1f57,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10c1e790; body size 21 bytes.
#line 1 "ENTRY_10c1e790"

SCStr * __stdcall FUN_10c1e790(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c1e7b0; body size 21 bytes.
#line 1 "ENTRY_10c1e7b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c1e7b0(undefined4 param_2)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(param_2);
  return (undefined4)(1);
}


// Reference entry 10c1e7e0; body size 17 bytes.
#line 1 "ENTRY_10c1e7e0"

undefined4 __fastcall FUN_10c1e7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10c1ebf0; body size 23 bytes.
#line 1 "ENTRY_10c1ebf0"

void __fastcall FUN_10c1ebf0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*(int *)(param_1 + 0x38) + 0x14))(0), 0);
  thunk_FUN_10509ca0(uVar1,0);
  return;
}


// Reference entry 10c1ec20; body size 21 bytes.
#line 1 "ENTRY_10c1ec20"

int __fastcall FUN_10c1ec20(int param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0xdc), 0);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    return (int)(((uint)(uVar2) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar2 << 8);
}


// Reference entry 10c1ed60; body size 46 bytes.
#line 1 "ENTRY_10c1ed60"

uint __fastcall FUN_10c1ed60(int param_1)

{
  uint in_EAX;
  
  if (((*(int **)(param_1 + 0xa0) != (int *)((0x0))) && (*(int *)(param_1 + 0xa8) != 0)) &&
     (*(char *)(param_1 + 0x14d) == '\0')) {
    in_EAX = (uint)((**(code **)(**(int **)(param_1 + 0xa0) + 0x1c))(), 0);
    if (in_EAX == 3) {
      return (uint)(1);
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10c1edc0; body size 19 bytes.
#line 1 "ENTRY_10c1edc0"

undefined4 __fastcall FUN_10c1edc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 4) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10c208f0; body size 37 bytes.
#line 1 "ENTRY_10c208f0"

void __fastcall FUN_10c208f0(int param_1)

{
  thunk_FUN_104d9cc0();
  if (*(int **)(param_1 + 0xa0) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xa0) + 0x20))(0);
  }
  thunk_FUN_1106d920();
  return;
}


// Reference entry 10c20eb0; body size 19 bytes.
#line 1 "ENTRY_10c20eb0"

uint __fastcall FUN_10c20eb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 4) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10c21100; body size 23 bytes.
#line 1 "ENTRY_10c21100"

void __stdcall FUN_10c21100(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10c212a0; body size 61 bytes.
#line 1 "ENTRY_10c212a0"

void __thiscall Recovered_Bulk::m_FUN_10c212a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10c21eb0; body size 43 bytes.
#line 1 "ENTRY_10c21eb0"

int * __thiscall Recovered_Bulk::m_FUN_10c21eb0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (int)((int)piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10c23420; body size 59 bytes.
#line 1 "ENTRY_10c23420"

void __thiscall Recovered_Bulk::m_FUN_10c23420(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10c220f0(puVar1,param_2);
  return;
}


// Reference entry 10c23470; body size 59 bytes.
#line 1 "ENTRY_10c23470"

void __thiscall Recovered_Bulk::m_FUN_10c23470(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10c22290(puVar1,param_2);
  return;
}


// Reference entry 10c238a0; body size 24 bytes.
#line 1 "ENTRY_10c238a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c238a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c23ae0; body size 39 bytes.
#line 1 "ENTRY_10c23ae0"

undefined4 * __fastcall FUN_10c23ae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c23e30; body size 19 bytes.
#line 1 "ENTRY_10c23e30"

void __fastcall FUN_10c23e30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c23eb0; body size 19 bytes.
#line 1 "ENTRY_10c23eb0"

void __fastcall FUN_10c23eb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10c24080; body size 17 bytes.
#line 1 "ENTRY_10c24080"

void __fastcall FUN_10c24080(undefined4 *param_1)

{
  thunk_FUN_10c21f70(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10c240a0; body size 25 bytes.
#line 1 "ENTRY_10c240a0"

void __fastcall FUN_10c240a0(undefined4 *param_1)

{
  thunk_FUN_10c22600(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10c24750; body size 45 bytes.
#line 1 "ENTRY_10c24750"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c24750(byte param_2)
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


// Reference entry 10c249c0; body size 33 bytes.
#line 1 "ENTRY_10c249c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c249c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c24a10; body size 25 bytes.
#line 1 "ENTRY_10c24a10"

void __fastcall FUN_10c24a10(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10c24d60; body size 20 bytes.
#line 1 "ENTRY_10c24d60"

void __thiscall Recovered_Bulk::m_FUN_10c24d60(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c21f70(param_2,param_3,param_1);
  return;
}


// Reference entry 10c253a0; body size 25 bytes.
#line 1 "ENTRY_10c253a0"

void __fastcall FUN_10c253a0(undefined4 *param_1)

{
  thunk_FUN_10c22600(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10c260f0; body size 32 bytes.
#line 1 "ENTRY_10c260f0"

void __fastcall FUN_10c260f0(int *param_1)

{
  thunk_FUN_10c22600(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10c26120; body size 24 bytes.
#line 1 "ENTRY_10c26120"

void __fastcall FUN_10c26120(undefined4 *param_1)

{
  thunk_FUN_10c21f70(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10c261e0; body size 60 bytes.
#line 1 "ENTRY_10c261e0"

void __stdcall FUN_10c261e0(int param_1,int param_2)

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


// Reference entry 10c26570; body size 23 bytes.
#line 1 "ENTRY_10c26570"

undefined * FUN_10c26570(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_1);
  return (undefined *)(&DAT_121a5354);
}


// Reference entry 10c265e0; body size 57 bytes.
#line 1 "ENTRY_10c265e0"

int * __thiscall Recovered_Bulk::m_FUN_10c265e0(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x14) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10c267e0; body size 20 bytes.
#line 1 "ENTRY_10c267e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c267e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10c271e0; body size 59 bytes.
#line 1 "ENTRY_10c271e0"

void __thiscall Recovered_Bulk::m_FUN_10c271e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10c220f0(puVar1,param_2);
  return;
}


// Reference entry 10c27230; body size 59 bytes.
#line 1 "ENTRY_10c27230"

void __thiscall Recovered_Bulk::m_FUN_10c27230(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10c22290(puVar1,param_2);
  return;
}


// Reference entry 10c29140; body size 19 bytes.
#line 1 "ENTRY_10c29140"

void __fastcall FUN_10c29140(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c294d0; body size 45 bytes.
#line 1 "ENTRY_10c294d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c294d0(byte param_2)
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


// Reference entry 10c29610; body size 33 bytes.
#line 1 "ENTRY_10c29610"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c29610(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c2a580; body size 35 bytes.
#line 1 "ENTRY_10c2a580"

SCStr * __stdcall FUN_10c2a580(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2095,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10c2a600; body size 29 bytes.
#line 1 "ENTRY_10c2a600"

void __fastcall FUN_10c2a600(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_10cefc20(), 0);
  (**(code **)(*piVar1 + 0xc))(-(uint)(param_1 != 0) & param_1 + 0x28U);
  return;
}


// Reference entry 10c2a630; body size 29 bytes.
#line 1 "ENTRY_10c2a630"

void __fastcall FUN_10c2a630(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_10cefc20(), 0);
  (**(code **)(*piVar1 + 0x10))(-(uint)(param_1 != 0) & param_1 + 0x28U);
  return;
}


// Reference entry 10c2a700; body size 16 bytes.
#line 1 "ENTRY_10c2a700"

void __fastcall FUN_10c2a700(int param_1)

{
  *(undefined1*)(param_1 + 0x34) = (undefined1)(0);
  thunk_FUN_10cefc20();
  thunk_FUN_10cefa80();
  return;
}


// Reference entry 10c2a8b0; body size 39 bytes.
#line 1 "ENTRY_10c2a8b0"

void __thiscall Recovered_Bulk::m_FUN_10c2a8b0(int param_2)
{
  int *param_1 = (int *)this;
  if (param_2 != 0) {
    if (param_1[4] == 0) {
      (**(code **)(*param_1 + 0x30))();
    }
    thunk_FUN_103d61d0(param_2,0);
  }
  return;
}


// Reference entry 10c2a8e0; body size 41 bytes.
#line 1 "ENTRY_10c2a8e0"

void __thiscall Recovered_Bulk::m_FUN_10c2a8e0(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = (char)(thunk_FUN_103d6930(param_2), 0);
    if ((cVar1 != '\0') && (param_1[4] == 0)) {
      (**(code **)(*param_1 + 0x34))();
    }
  }
  return;
}


// Reference entry 10c2b7e0; body size 41 bytes.
#line 1 "ENTRY_10c2b7e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c2b7e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c2b820; body size 41 bytes.
#line 1 "ENTRY_10c2b820"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c2b820(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c2bce0; body size 34 bytes.
#line 1 "ENTRY_10c2bce0"

void __fastcall FUN_10c2bce0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)((param_1)) != (undefined4 *)(puVar1); param_1 = param_1 + 4) {
    (**(code **)*param_1)(0);
  }
  return;
}


// Reference entry 10c2c0e0; body size 45 bytes.
#line 1 "ENTRY_10c2c0e0"

void __stdcall FUN_10c2c0e0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIAccountManager:onCurrentAccountChanged"), 0);
  if (bVar1) {
    cVar2 = (char)(thunk_FUN_10c322c0(), 0);
    if (cVar2 != '\0') {
      thunk_FUN_10c31e60(0);
    }
  }
  return;
}


// Reference entry 10c2c140; body size 35 bytes.
#line 1 "ENTRY_10c2c140"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c2c140(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c2bd80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x120);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c2c3b0; body size 19 bytes.
#line 1 "ENTRY_10c2c3b0"

void __thiscall Recovered_Bulk::m_FUN_10c2c3b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c2c3d0; body size 21 bytes.
#line 1 "ENTRY_10c2c3d0"

void __thiscall Recovered_Bulk::m_FUN_10c2c3d0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10c2c400; body size 47 bytes.
#line 1 "ENTRY_10c2c400"

void __stdcall FUN_10c2c400(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIAccountManager:onCurrentAccountChanged"), 0);
  if (bVar1) {
    cVar2 = (char)(thunk_FUN_10c322c0(), 0);
    if (cVar2 != '\0') {
      thunk_FUN_10c31e60(0);
    }
  }
  return;
}


// Reference entry 10c2c4b0; body size 19 bytes.
#line 1 "ENTRY_10c2c4b0"

void __thiscall Recovered_Bulk::m_FUN_10c2c4b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10c32530; body size 57 bytes.
#line 1 "ENTRY_10c32530"

void __thiscall Recovered_Bulk::m_FUN_10c32530(int *param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if (((int *)(param_2) != (int *)(0x0)) && (cVar1 = (char)((**(code **)(*param_2 + 0x8c))(5,0), 0), cVar1 != '\0')) {
    (**(code **)(*param_2 + 0x38))(*(undefined4 *)(param_1 + 4));
    thunk_FUN_10c31e60(0);
  }
  return;
}


// Reference entry 10c32580; body size 55 bytes.
#line 1 "ENTRY_10c32580"

void __thiscall Recovered_Bulk::m_FUN_10c32580(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2 != 0) {
    do {
      (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x2c) + uVar1 * 4))(param_2);
      uVar1 = (uint)(uVar1 + 1);
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2));
  }
  return;
}


// Reference entry 10c325d0; body size 56 bytes.
#line 1 "ENTRY_10c325d0"

void __thiscall Recovered_Bulk::m_FUN_10c325d0(undefined4 param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x2c) + uVar1 * 4) + 4))(param_2);
      uVar1 = (uint)(uVar1 + 1);
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2));
  }
  return;
}


// Reference entry 10c32620; body size 44 bytes.
#line 1 "ENTRY_10c32620"

void __fastcall FUN_10c32620(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  char cVar1;
  
  (**(code **)(*(int *)(param_1 + 0x18) + 8))();
  if (*(char *)(param_1 + 0x38) != '\0') {
    cVar1 = (char)(thunk_FUN_10c322c0(), 0);
    if (cVar1 != '\0') {
      thunk_FUN_10c31e60(0);
    }
  }
  return;
}


// Reference entry 10c35420; body size 41 bytes.
#line 1 "ENTRY_10c35420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c35420(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c35720; body size 39 bytes.
#line 1 "ENTRY_10c35720"

undefined4 * __fastcall FUN_10c35720(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c35e00; body size 19 bytes.
#line 1 "ENTRY_10c35e00"

void __fastcall FUN_10c35e00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10c35e20; body size 33 bytes.
#line 1 "ENTRY_10c35e20"

void __fastcall FUN_10c35e20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c35ff0; body size 33 bytes.
#line 1 "ENTRY_10c35ff0"

void __fastcall FUN_10c35ff0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c36020; body size 25 bytes.
#line 1 "ENTRY_10c36020"

void __fastcall FUN_10c36020(undefined4 *param_1)

{
  thunk_FUN_10c34bf0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10c36500; body size 37 bytes.
#line 1 "ENTRY_10c36500"

int * __fastcall FUN_10c36500(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10c36570; body size 27 bytes.
#line 1 "ENTRY_10c36570"

int __stdcall FUN_10c36570(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10c34d70((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10c36790; body size 32 bytes.
#line 1 "ENTRY_10c36790"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c36790(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c35c30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c36930; body size 35 bytes.
#line 1 "ENTRY_10c36930"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c36930(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c36180();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa0);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c36960; body size 45 bytes.
#line 1 "ENTRY_10c36960"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c36960(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c369c0; body size 25 bytes.
#line 1 "ENTRY_10c369c0"

void __fastcall FUN_10c369c0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10c370e0; body size 33 bytes.
#line 1 "ENTRY_10c370e0"

void __fastcall FUN_10c370e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c37180; body size 25 bytes.
#line 1 "ENTRY_10c37180"

void __fastcall FUN_10c37180(undefined4 *param_1)

{
  thunk_FUN_10c34bf0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10c374b0; body size 61 bytes.
#line 1 "ENTRY_10c374b0"

void __thiscall Recovered_Bulk::m_FUN_10c374b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10c37500; body size 61 bytes.
#line 1 "ENTRY_10c37500"

void __thiscall Recovered_Bulk::m_FUN_10c37500(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10c37720; body size 32 bytes.
#line 1 "ENTRY_10c37720"

void __fastcall FUN_10c37720(int *param_1)

{
  thunk_FUN_10c34bf0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10c37b00; body size 21 bytes.
#line 1 "ENTRY_10c37b00"

SCStr * __stdcall FUN_10c37b00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SaveAlarm");
  return (SCStr *)(param_1);
}


// Reference entry 10c37ec0; body size 21 bytes.
#line 1 "ENTRY_10c37ec0"

SCStr * __stdcall FUN_10c37ec0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategorySettings");
  return (SCStr *)(param_1);
}


// Reference entry 10c37ef0; body size 35 bytes.
#line 1 "ENTRY_10c37ef0"

SCStr * __stdcall FUN_10c37ef0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2097,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10c380f0; body size 26 bytes.
#line 1 "ENTRY_10c380f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c380f0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10c39b00; body size 41 bytes.
#line 1 "ENTRY_10c39b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c39b00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c3a5c0; body size 45 bytes.
#line 1 "ENTRY_10c3a5c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c3a5c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c3a600; body size 35 bytes.
#line 1 "ENTRY_10c3a600"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c3a600(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c3a310();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1a8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c3a730; body size 61 bytes.
#line 1 "ENTRY_10c3a730"

void __thiscall Recovered_Bulk::m_FUN_10c3a730(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10c3ad50; body size 26 bytes.
#line 1 "ENTRY_10c3ad50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c3ad50(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10c3b1c0; body size 42 bytes.
#line 1 "ENTRY_10c3b1c0"

void __fastcall FUN_10c3b1c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 400) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 400) + 0x14))(*(undefined4 *)(param_1 + 0x3c));
  }
  uVar1 = (undefined4)(thunk_FUN_1059d5a0(1000), 0);
  *(undefined4*)(param_1 + 0x198) = (undefined4)(uVar1);
  return;
}


// Reference entry 10c3b200; body size 56 bytes.
#line 1 "ENTRY_10c3b200"

void __thiscall Recovered_Bulk::m_FUN_10c3b200(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if ((int)(param_2) == *(int *)(param_1 + 0x180)) {
    thunk_FUN_10c3b550();
    thunk_FUN_10b93810();
    uVar1 = (undefined4)(thunk_FUN_1059d5a0(1000), 0);
    *(undefined4*)(param_1 + 0x180) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10c3b9f0; body size 29 bytes.
#line 1 "ENTRY_10c3b9f0"

void __thiscall Recovered_Bulk::m_FUN_10c3b9f0(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 10c3d380; body size 57 bytes.
#line 1 "ENTRY_10c3d380"

void __stdcall FUN_10c3d380(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10c3d380(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10c3d3d0; body size 40 bytes.
#line 1 "ENTRY_10c3d3d0"

int __thiscall Recovered_Bulk::m_FUN_10c3d3d0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10c3d700((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10c3d410; body size 40 bytes.
#line 1 "ENTRY_10c3d410"

int __thiscall Recovered_Bulk::m_FUN_10c3d410(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10c3d800((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10c3d960; body size 52 bytes.
#line 1 "ENTRY_10c3d960"

void FUN_10c3d960(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_10b034d0(puVar2 + 3);
    thunk_FUN_1148a50e(puVar2,0x14);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10c404f0; body size 39 bytes.
#line 1 "ENTRY_10c404f0"

undefined4 * __fastcall FUN_10c404f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40520; body size 39 bytes.
#line 1 "ENTRY_10c40520"

undefined4 * __fastcall FUN_10c40520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40550; body size 39 bytes.
#line 1 "ENTRY_10c40550"

undefined4 * __fastcall FUN_10c40550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c40580; body size 39 bytes.
#line 1 "ENTRY_10c40580"

undefined4 * __fastcall FUN_10c40580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c41050; body size 19 bytes.
#line 1 "ENTRY_10c41050"

void __fastcall FUN_10c41050(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10c41070; body size 19 bytes.
#line 1 "ENTRY_10c41070"

void __fastcall FUN_10c41070(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10c41090; body size 19 bytes.
#line 1 "ENTRY_10c41090"

void __fastcall FUN_10c41090(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10c410b0; body size 19 bytes.
#line 1 "ENTRY_10c410b0"

void __fastcall FUN_10c410b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10c414e0; body size 19 bytes.
#line 1 "ENTRY_10c414e0"

void __fastcall FUN_10c414e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10c41500; body size 39 bytes.
#line 1 "ENTRY_10c41500"

void __fastcall FUN_10c41500(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_10b034d0(*(int *)(param_1 + 4) + 0xc);
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x14);
  }
  return;
}


// Reference entry 10c41530; body size 19 bytes.
#line 1 "ENTRY_10c41530"

void __fastcall FUN_10c41530(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x10);
  }
  return;
}


// Reference entry 10c41550; body size 38 bytes.
#line 1 "ENTRY_10c41550"

void __fastcall FUN_10c41550(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(0);
  if (*(int *)(param_1 + 4) != 0) {
    ((pair<> *)(0))->op_dtor();
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  if (iVar1 != 0) {
    thunk_FUN_1148a50e(iVar1,0x18);
  }
  return;
}


// Reference entry 10c41590; body size 17 bytes.
#line 1 "ENTRY_10c41590"

void __fastcall FUN_10c41590(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    thunk_FUN_10b034d0(*param_1);
  }
  return;
}


// Reference entry 10c415f0; body size 55 bytes.
#line 1 "ENTRY_10c415f0"

void __fastcall FUN_10c415f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 10c41640; body size 25 bytes.
#line 1 "ENTRY_10c41640"

void __fastcall FUN_10c41640(undefined4 *param_1)

{
  thunk_FUN_10c3d960(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10c41660; body size 55 bytes.
#line 1 "ENTRY_10c41660"

void __fastcall FUN_10c41660(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0x10);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0x10);
  return;
}


// Reference entry 10c41d40; body size 27 bytes.
#line 1 "ENTRY_10c41d40"

int __stdcall FUN_10c41d40(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10c3dd10((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10c42140; body size 36 bytes.
#line 1 "ENTRY_10c42140"

int __thiscall Recovered_Bulk::m_FUN_10c42140(byte param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10b034d0(param_1 + 4);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (int)(param_1);
}


// Reference entry 10c42170; body size 32 bytes.
#line 1 "ENTRY_10c42170"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c42170(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  ((pair<> *)(0))->op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c42360; body size 25 bytes.
#line 1 "ENTRY_10c42360"

void __fastcall FUN_10c42360(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10c42380; body size 25 bytes.
#line 1 "ENTRY_10c42380"

void __fastcall FUN_10c42380(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10c423a0; body size 25 bytes.
#line 1 "ENTRY_10c423a0"

void __fastcall FUN_10c423a0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10c423c0; body size 25 bytes.
#line 1 "ENTRY_10c423c0"

void __fastcall FUN_10c423c0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10c42860; body size 29 bytes.
#line 1 "ENTRY_10c42860"

void __fastcall FUN_10c42860(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_1148a50e(piVar1,0x10);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 10c42890; body size 40 bytes.
#line 1 "ENTRY_10c42890"

void __fastcall FUN_10c42890(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_10b034d0(piVar1 + 3);
  thunk_FUN_1148a50e(piVar1,0x14);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 10c428d0; body size 29 bytes.
#line 1 "ENTRY_10c428d0"

void __fastcall FUN_10c428d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  thunk_FUN_1148a50e(piVar1,0x10);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 10c42900; body size 39 bytes.
#line 1 "ENTRY_10c42900"

void __fastcall FUN_10c42900(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[2]);
  param_1[2] = (int)(*piVar1);
  ((pair<> *)(0))->op_dtor();
  thunk_FUN_1148a50e(piVar1,0x18);
  *(int*)(*param_1 + 4) = (int)(*(int *)(*param_1 + 4) + -1);
  return;
}


// Reference entry 10c43be0; body size 31 bytes.
#line 1 "ENTRY_10c43be0"

int * FUN_10c43be0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = (int *)(piVar2), cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (int *)(param_1);
}


// Reference entry 10c44380; body size 25 bytes.
#line 1 "ENTRY_10c44380"

void __fastcall FUN_10c44380(undefined4 *param_1)

{
  thunk_FUN_10c3d960(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 10c459c0; body size 32 bytes.
#line 1 "ENTRY_10c459c0"

void __fastcall FUN_10c459c0(int *param_1)

{
  thunk_FUN_10c3d960(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10c46f60; body size 17 bytes.
#line 1 "ENTRY_10c46f60"

void __stdcall FUN_10c46f60(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onSearchablesListChanged");
  return;
}


// Reference entry 10c471c0; body size 16 bytes.
#line 1 "ENTRY_10c471c0"

void FUN_10c471c0(void)

{
  undefined4 uStack00000004;
  
  uStack00000004 = (undefined4)(9);
  thunk_FUN_10c47270();
  return;
}


// Reference entry 10c471f0; body size 20 bytes.
#line 1 "ENTRY_10c471f0"

void __thiscall Recovered_Bulk::m_FUN_10c471f0(int param_2)
{
  int param_1 = (int )this;
  if ((int)(param_2) == *(int *)(param_1 + 0x5c)) {
    thunk_FUN_10c46460();
  }
  return;
}


// Reference entry 10c475e0; body size 41 bytes.
#line 1 "ENTRY_10c475e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c475e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c47bc0; body size 51 bytes.
#line 1 "ENTRY_10c47bc0"

void __fastcall FUN_10c47bc0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0xc), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10c47fc0; body size 35 bytes.
#line 1 "ENTRY_10c47fc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c47fc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c47ef0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa4);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c4a070; body size 23 bytes.
#line 1 "ENTRY_10c4a070"

void __fastcall FUN_10c4a070(int param_1)

{
  thunk_FUN_1059d800();
  *(undefined4*)(param_1 + 0x94) = (undefined4)(0);
  return;
}


// Reference entry 10c4a570; body size 41 bytes.
#line 1 "ENTRY_10c4a570"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4a570(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4a5b0; body size 41 bytes.
#line 1 "ENTRY_10c4a5b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4a5b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4b2f0; body size 33 bytes.
#line 1 "ENTRY_10c4b2f0"

void __fastcall FUN_10c4b2f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c4b320; body size 33 bytes.
#line 1 "ENTRY_10c4b320"

void __fastcall FUN_10c4b320(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c4b8b0; body size 37 bytes.
#line 1 "ENTRY_10c4b8b0"

int * __fastcall FUN_10c4b8b0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10c4ba30; body size 38 bytes.
#line 1 "ENTRY_10c4ba30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4ba30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4ba60; body size 38 bytes.
#line 1 "ENTRY_10c4ba60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4ba60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4ba90; body size 32 bytes.
#line 1 "ENTRY_10c4ba90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c4ba90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c4afd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c4bac0; body size 32 bytes.
#line 1 "ENTRY_10c4bac0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c4bac0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c4b120();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c4baf0; body size 48 bytes.
#line 1 "ENTRY_10c4baf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4baf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RHttpGetNoRedirectAIOOp);
  thunk_FUN_111c0a80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,&DAT_00004498);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4bd10; body size 35 bytes.
#line 1 "ENTRY_10c4bd10"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c4bd10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c4b530();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6148);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c4bdc0; body size 45 bytes.
#line 1 "ENTRY_10c4bdc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4bdc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetCertBundle);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetCertBundle);
  thunk_FUN_10c4afd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4bf90; body size 33 bytes.
#line 1 "ENTRY_10c4bf90"

void __fastcall FUN_10c4bf90(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10c4c4a0; body size 28 bytes.
#line 1 "ENTRY_10c4c4a0"

void __fastcall FUN_10c4c4a0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(), 0);
  if (cVar1 != '\0') {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10c4c900; body size 34 bytes.
#line 1 "ENTRY_10c4c900"

char __thiscall Recovered_Bulk::m_FUN_10c4c900(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_111fc6a0(param_2), 0);
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x442c) == 0x130)) {
    cVar1 = (char)('\x01');
  }
  return (char)(cVar1);
}


// Reference entry 10c4c930; body size 17 bytes.
#line 1 "ENTRY_10c4c930"

undefined1 * __fastcall FUN_10c4c930(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6114) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6114), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10c4cb40; body size 21 bytes.
#line 1 "ENTRY_10c4cb40"

SCStr * __stdcall FUN_10c4cb40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c4d990; body size 31 bytes.
#line 1 "ENTRY_10c4d990"

undefined4 __stdcall FUN_10c4d990(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    thunk_FUN_1012cdb0(param_1,param_2);
  }
  return (undefined4)(1);
}


// Reference entry 10c4e560; body size 41 bytes.
#line 1 "ENTRY_10c4e560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e560(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e5a0; body size 41 bytes.
#line 1 "ENTRY_10c4e5a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e5a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e5e0; body size 41 bytes.
#line 1 "ENTRY_10c4e5e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e5e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e620; body size 41 bytes.
#line 1 "ENTRY_10c4e620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e620(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e660; body size 41 bytes.
#line 1 "ENTRY_10c4e660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e660(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e6a0; body size 24 bytes.
#line 1 "ENTRY_10c4e6a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e6a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e6c0; body size 24 bytes.
#line 1 "ENTRY_10c4e6c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e6c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e6e0; body size 24 bytes.
#line 1 "ENTRY_10c4e6e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e6e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4e700; body size 24 bytes.
#line 1 "ENTRY_10c4e700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e700(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4ea80; body size 49 bytes.
#line 1 "ENTRY_10c4ea80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4ea80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceAutoplay);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c4f2b0; body size 19 bytes.
#line 1 "ENTRY_10c4f2b0"

void __fastcall FUN_10c4f2b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4f2d0; body size 19 bytes.
#line 1 "ENTRY_10c4f2d0"

void __fastcall FUN_10c4f2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4f2f0; body size 19 bytes.
#line 1 "ENTRY_10c4f2f0"

void __fastcall FUN_10c4f2f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4f310; body size 19 bytes.
#line 1 "ENTRY_10c4f310"

void __fastcall FUN_10c4f310(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4f330; body size 19 bytes.
#line 1 "ENTRY_10c4f330"

void __fastcall FUN_10c4f330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c4ffe0; body size 38 bytes.
#line 1 "ENTRY_10c4ffe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4ffe0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50010; body size 38 bytes.
#line 1 "ENTRY_10c50010"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50010(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50040; body size 38 bytes.
#line 1 "ENTRY_10c50040"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50040(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50070; body size 38 bytes.
#line 1 "ENTRY_10c50070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c500a0; body size 45 bytes.
#line 1 "ENTRY_10c500a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c500a0(byte param_2)
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


// Reference entry 10c500e0; body size 45 bytes.
#line 1 "ENTRY_10c500e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c500e0(byte param_2)
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


// Reference entry 10c50120; body size 45 bytes.
#line 1 "ENTRY_10c50120"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50120(byte param_2)
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


// Reference entry 10c50160; body size 45 bytes.
#line 1 "ENTRY_10c50160"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50160(byte param_2)
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


// Reference entry 10c501a0; body size 45 bytes.
#line 1 "ENTRY_10c501a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c501a0(byte param_2)
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


// Reference entry 10c501e0; body size 45 bytes.
#line 1 "ENTRY_10c501e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c501e0(byte param_2)
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


// Reference entry 10c50220; body size 52 bytes.
#line 1 "ENTRY_10c50220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50220(byte param_2)
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


// Reference entry 10c50270; body size 52 bytes.
#line 1 "ENTRY_10c50270"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50270(byte param_2)
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


// Reference entry 10c502c0; body size 32 bytes.
#line 1 "ENTRY_10c502c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c502c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c4f390();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c502f0; body size 32 bytes.
#line 1 "ENTRY_10c502f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c502f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c4f4e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c50320; body size 32 bytes.
#line 1 "ENTRY_10c50320"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c50320(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c4f630();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c50350; body size 32 bytes.
#line 1 "ENTRY_10c50350"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c50350(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c4f780();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c50380; body size 32 bytes.
#line 1 "ENTRY_10c50380"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c50380(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c4f8d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c503b0; body size 58 bytes.
#line 1 "ENTRY_10c503b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c503b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayLinkedZonesAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50400; body size 58 bytes.
#line 1 "ENTRY_10c50400"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50400(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayRoomUUIDAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50450; body size 58 bytes.
#line 1 "ENTRY_10c50450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetAutoplayVolumeAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c504a0; body size 58 bytes.
#line 1 "ENTRY_10c504a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c504a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetUseAutoplayVolumeAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c504f0; body size 58 bytes.
#line 1 "ENTRY_10c504f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c504f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetAutoplayLinkedZonesAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c505e0; body size 33 bytes.
#line 1 "ENTRY_10c505e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c505e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50610; body size 33 bytes.
#line 1 "ENTRY_10c50610"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50610(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50640; body size 33 bytes.
#line 1 "ENTRY_10c50640"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50640(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50670; body size 33 bytes.
#line 1 "ENTRY_10c50670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c506a0; body size 33 bytes.
#line 1 "ENTRY_10c506a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c506a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c506d0; body size 33 bytes.
#line 1 "ENTRY_10c506d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c506d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50700; body size 45 bytes.
#line 1 "ENTRY_10c50700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayLinkedZones);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayLinkedZones);
  thunk_FUN_10c4f390();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50740; body size 45 bytes.
#line 1 "ENTRY_10c50740"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50740(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayRoomUUID);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayRoomUUID);
  thunk_FUN_10c4f4e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50780; body size 45 bytes.
#line 1 "ENTRY_10c50780"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50780(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayVolume);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetAutoplayVolume);
  thunk_FUN_10c4f630();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c507c0; body size 45 bytes.
#line 1 "ENTRY_10c507c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c507c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetUseAutoplayVolume);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesGetUseAutoplayVolume);
  thunk_FUN_10c4f780();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50800; body size 45 bytes.
#line 1 "ENTRY_10c50800"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c50800(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetUseAutoplayVolume);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDevicePropertiesSetUseAutoplayVolume);
  thunk_FUN_10c4f8d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c50ee0; body size 48 bytes.
#line 1 "ENTRY_10c50ee0"

int __fastcall FUN_10c50ee0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x3c))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c52500; body size 21 bytes.
#line 1 "ENTRY_10c52500"

SCStr * __stdcall FUN_10c52500(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c52520; body size 21 bytes.
#line 1 "ENTRY_10c52520"

SCStr * __stdcall FUN_10c52520(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c52540; body size 21 bytes.
#line 1 "ENTRY_10c52540"

SCStr * __stdcall FUN_10c52540(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c52560; body size 21 bytes.
#line 1 "ENTRY_10c52560"

SCStr * __stdcall FUN_10c52560(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c52580; body size 21 bytes.
#line 1 "ENTRY_10c52580"

SCStr * __stdcall FUN_10c52580(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c54bb0; body size 41 bytes.
#line 1 "ENTRY_10c54bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c54bb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c54bf0; body size 41 bytes.
#line 1 "ENTRY_10c54bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c54bf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c54c30; body size 41 bytes.
#line 1 "ENTRY_10c54c30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c54c30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c54c70; body size 41 bytes.
#line 1 "ENTRY_10c54c70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c54c70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c54cb0; body size 24 bytes.
#line 1 "ENTRY_10c54cb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c54cb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c54cd0; body size 24 bytes.
#line 1 "ENTRY_10c54cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c54cd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c55540; body size 19 bytes.
#line 1 "ENTRY_10c55540"

void __fastcall FUN_10c55540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55560; body size 19 bytes.
#line 1 "ENTRY_10c55560"

void __fastcall FUN_10c55560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55580; body size 19 bytes.
#line 1 "ENTRY_10c55580"

void __fastcall FUN_10c55580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c555a0; body size 19 bytes.
#line 1 "ENTRY_10c555a0"

void __fastcall FUN_10c555a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c555e0; body size 26 bytes.
#line 1 "ENTRY_10c555e0"

void __fastcall FUN_10c555e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c55ef0; body size 38 bytes.
#line 1 "ENTRY_10c55ef0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c55ef0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c55f20; body size 38 bytes.
#line 1 "ENTRY_10c55f20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c55f20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c55f50; body size 45 bytes.
#line 1 "ENTRY_10c55f50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c55f50(byte param_2)
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


// Reference entry 10c55f90; body size 45 bytes.
#line 1 "ENTRY_10c55f90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c55f90(byte param_2)
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


// Reference entry 10c55fd0; body size 45 bytes.
#line 1 "ENTRY_10c55fd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c55fd0(byte param_2)
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


// Reference entry 10c56010; body size 45 bytes.
#line 1 "ENTRY_10c56010"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56010(byte param_2)
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


// Reference entry 10c56050; body size 45 bytes.
#line 1 "ENTRY_10c56050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56050(byte param_2)
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


// Reference entry 10c56090; body size 52 bytes.
#line 1 "ENTRY_10c56090"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56090(byte param_2)
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


// Reference entry 10c560e0; body size 52 bytes.
#line 1 "ENTRY_10c560e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c560e0(byte param_2)
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


// Reference entry 10c56130; body size 32 bytes.
#line 1 "ENTRY_10c56130"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c56130(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c55600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c56160; body size 32 bytes.
#line 1 "ENTRY_10c56160"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c56160(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c55750();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c56190; body size 32 bytes.
#line 1 "ENTRY_10c56190"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c56190(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c558a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c561c0; body size 32 bytes.
#line 1 "ENTRY_10c561c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c561c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c559f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c561f0; body size 58 bytes.
#line 1 "ENTRY_10c561f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c561f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAIGetAudioInputAttributesAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd8d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c56240; body size 58 bytes.
#line 1 "ENTRY_10c56240"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56240(byte param_2)
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


// Reference entry 10c56290; body size 52 bytes.
#line 1 "ENTRY_10c56290"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c562e0; body size 33 bytes.
#line 1 "ENTRY_10c562e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c562e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c56310; body size 33 bytes.
#line 1 "ENTRY_10c56310"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56310(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c56340; body size 33 bytes.
#line 1 "ENTRY_10c56340"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56340(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c56370; body size 33 bytes.
#line 1 "ENTRY_10c56370"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56370(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c563a0; body size 33 bytes.
#line 1 "ENTRY_10c563a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c563a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c563d0; body size 45 bytes.
#line 1 "ENTRY_10c563d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c563d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAudioInGetAudioInputAttributes);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAudioInGetAudioInputAttributes);
  thunk_FUN_10c55600();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c56410; body size 45 bytes.
#line 1 "ENTRY_10c56410"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56410(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAudioInGetLineInLevel);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAudioInGetLineInLevel);
  thunk_FUN_10c55750();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c56450; body size 45 bytes.
#line 1 "ENTRY_10c56450"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56450(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAudioInSetAudioInputAttributes);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAudioInSetAudioInputAttributes);
  thunk_FUN_10c558a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c56490; body size 45 bytes.
#line 1 "ENTRY_10c56490"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c56490(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAudioInSetLineInLevel);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAudioInSetLineInLevel);
  thunk_FUN_10c559f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c56a20; body size 48 bytes.
#line 1 "ENTRY_10c56a20"

int __fastcall FUN_10c56a20(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x30))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c579c0; body size 21 bytes.
#line 1 "ENTRY_10c579c0"

SCStr * __stdcall FUN_10c579c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c579e0; body size 21 bytes.
#line 1 "ENTRY_10c579e0"

SCStr * __stdcall FUN_10c579e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c57a00; body size 21 bytes.
#line 1 "ENTRY_10c57a00"

SCStr * __stdcall FUN_10c57a00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c57a20; body size 21 bytes.
#line 1 "ENTRY_10c57a20"

SCStr * __stdcall FUN_10c57a20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c59370; body size 41 bytes.
#line 1 "ENTRY_10c59370"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59370(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c593b0; body size 24 bytes.
#line 1 "ENTRY_10c593b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c593b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c593d0; body size 24 bytes.
#line 1 "ENTRY_10c593d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c593d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c594a0; body size 42 bytes.
#line 1 "ENTRY_10c594a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c594a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceLineOut);
  return (undefined4 *)(param_1);
}


// Reference entry 10c596a0; body size 19 bytes.
#line 1 "ENTRY_10c596a0"

void __fastcall FUN_10c596a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c59980; body size 38 bytes.
#line 1 "ENTRY_10c59980"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c599b0; body size 45 bytes.
#line 1 "ENTRY_10c599b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c599b0(byte param_2)
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


// Reference entry 10c599f0; body size 45 bytes.
#line 1 "ENTRY_10c599f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c599f0(byte param_2)
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


// Reference entry 10c59a30; body size 52 bytes.
#line 1 "ENTRY_10c59a30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59a30(byte param_2)
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


// Reference entry 10c59a80; body size 52 bytes.
#line 1 "ENTRY_10c59a80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59a80(byte param_2)
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


// Reference entry 10c59ad0; body size 32 bytes.
#line 1 "ENTRY_10c59ad0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c59ad0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c59700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c59b00; body size 58 bytes.
#line 1 "ENTRY_10c59b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetSupportsOutputFixedAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c59b50; body size 52 bytes.
#line 1 "ENTRY_10c59b50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59b50(byte param_2)
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


// Reference entry 10c59ba0; body size 33 bytes.
#line 1 "ENTRY_10c59ba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59ba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c59bd0; body size 33 bytes.
#line 1 "ENTRY_10c59bd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59bd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c59c00; body size 45 bytes.
#line 1 "ENTRY_10c59c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c59c00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlGetSupportsOutputFixed);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpRenderingControlGetSupportsOutputFixed);
  thunk_FUN_10c59700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c59da0; body size 48 bytes.
#line 1 "ENTRY_10c59da0"

int __fastcall FUN_10c59da0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0x24))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c5a580; body size 21 bytes.
#line 1 "ENTRY_10c5a580"

SCStr * __stdcall FUN_10c5a580(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c5b250; body size 46 bytes.
#line 1 "ENTRY_10c5b250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5b250(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceMusicEqualizationEventSink);
  param_1[1] = (undefined4)(*(undefined4 *)(param_2 + 4));
  piVar1 = (int *)(*(int **)(param_2 + 8), 0);
  param_1[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c5b450; body size 26 bytes.
#line 1 "ENTRY_10c5b450"

void __fastcall FUN_10c5b450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c5b870; body size 45 bytes.
#line 1 "ENTRY_10c5b870"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5b870(byte param_2)
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


// Reference entry 10c5b8b0; body size 52 bytes.
#line 1 "ENTRY_10c5b8b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5b8b0(byte param_2)
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


// Reference entry 10c5b900; body size 52 bytes.
#line 1 "ENTRY_10c5b900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5b900(byte param_2)
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


// Reference entry 10c5b950; body size 33 bytes.
#line 1 "ENTRY_10c5b950"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5b950(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_REqualizerListener);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c5bab0; body size 45 bytes.
#line 1 "ENTRY_10c5bab0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5bab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c5baf0; body size 33 bytes.
#line 1 "ENTRY_10c5baf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5baf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c5bb30; body size 51 bytes.
#line 1 "ENTRY_10c5bb30"

int __fastcall FUN_10c5bb30(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xf8))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c5bb70; body size 51 bytes.
#line 1 "ENTRY_10c5bb70"

int __fastcall FUN_10c5bb70(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(SCThreadSafeInc(param_1 + 1), 0);
  if ((1 < iVar1) && (param_1[2] != 0)) {
    piVar2 = (int *)((int *)(**(code **)(*param_1 + 0xf8))(), 0);
    (**(code **)(*piVar2 + 4))();
  }
  return (int)(iVar1);
}


// Reference entry 10c5bbb0; body size 42 bytes.
#line 1 "ENTRY_10c5bbb0"

void __thiscall Recovered_Bulk::m_FUN_10c5bbb0(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x30) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onBalanceLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5bbf0; body size 42 bytes.
#line 1 "ENTRY_10c5bbf0"

void __thiscall Recovered_Bulk::m_FUN_10c5bbf0(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x28) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onBassLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5c490; body size 41 bytes.
#line 1 "ENTRY_10c5c490"

int __fastcall FUN_10c5c490(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((0x6e - *(int *)(param_1 + 0x48)) / 10);
  if (iVar1 < 0) {
    return (int)(0);
  }
  if (6 < iVar1) {
    iVar1 = (int)(6);
  }
  return (int)(iVar1);
}


// Reference entry 10c5c820; body size 35 bytes.
#line 1 "ENTRY_10c5c820"

SCStr * __stdcall FUN_10c5c820(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fd7,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10c5c920; body size 51 bytes.
#line 1 "ENTRY_10c5c920"

undefined1 __fastcall FUN_10c5c920(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return (undefined1)(1);
  }
  cVar1 = (char)(thunk_FUN_11456f80(), 0);
  if ((cVar1 == '\0') && (cVar1 = (char)(thunk_FUN_11458730(), 0), cVar1 != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10c5c970; body size 42 bytes.
#line 1 "ENTRY_10c5c970"

void __thiscall Recovered_Bulk::m_FUN_10c5c970(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 100) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onHeightChannelLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5cb70; body size 42 bytes.
#line 1 "ENTRY_10c5cb70"

void __thiscall Recovered_Bulk::m_FUN_10c5cb70(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x58) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onLeftRearDelayChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5cbb0; body size 19 bytes.
#line 1 "ENTRY_10c5cbb0"

uint __fastcall FUN_10c5cbb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x4c))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10c5cbd0; body size 41 bytes.
#line 1 "ENTRY_10c5cbd0"

void __thiscall Recovered_Bulk::m_FUN_10c5cbd0(undefined1 param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1*)(param_1 + 0x24) = (undefined1)(param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onLoudnessChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5cc20; body size 42 bytes.
#line 1 "ENTRY_10c5cc20"

void __thiscall Recovered_Bulk::m_FUN_10c5cc20(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x4c) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onMusicSurroundLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5cc70; body size 41 bytes.
#line 1 "ENTRY_10c5cc70"

void __thiscall Recovered_Bulk::m_FUN_10c5cc70(undefined1 param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1*)(param_1 + 0x54) = (undefined1)(param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onNightModeChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5ccb0; body size 38 bytes.
#line 1 "ENTRY_10c5ccb0"

void __fastcall FUN_10c5ccb0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0xc);
  *(undefined1*)(param_1 + 0x60) = (undefined1)(0);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDeviceMusicEqualization:onFixedOutput");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5ccf0; body size 38 bytes.
#line 1 "ENTRY_10c5ccf0"

void __fastcall FUN_10c5ccf0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0xc);
  *(undefined1*)(param_1 + 0x60) = (undefined1)(1);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIDeviceMusicEqualization:onFixedOutput");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d2f0; body size 17 bytes.
#line 1 "ENTRY_10c5d2f0"

void __fastcall FUN_10c5d2f0(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11155590();
  return;
}


// Reference entry 10c5d300; body size 17 bytes.
#line 1 "ENTRY_10c5d300"

void __fastcall FUN_10c5d300(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11155810();
  return;
}


// Reference entry 10c5d310; body size 17 bytes.
#line 1 "ENTRY_10c5d310"

void __fastcall FUN_10c5d310(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111559c0();
  return;
}


// Reference entry 10c5d320; body size 17 bytes.
#line 1 "ENTRY_10c5d320"

void __fastcall FUN_10c5d320(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11155ba0();
  return;
}


// Reference entry 10c5d330; body size 17 bytes.
#line 1 "ENTRY_10c5d330"

void __fastcall FUN_10c5d330(int param_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11155d80();
  return;
}


// Reference entry 10c5d350; body size 42 bytes.
#line 1 "ENTRY_10c5d350"

void __thiscall Recovered_Bulk::m_FUN_10c5d350(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x5c) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onRightRearDelayChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d390; body size 19 bytes.
#line 1 "ENTRY_10c5d390"

void __fastcall FUN_10c5d390(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158070();
  return;
}


// Reference entry 10c5d3b0; body size 19 bytes.
#line 1 "ENTRY_10c5d3b0"

void __fastcall FUN_10c5d3b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111582d0();
  return;
}


// Reference entry 10c5d3d0; body size 23 bytes.
#line 1 "ENTRY_10c5d3d0"

void __fastcall FUN_10c5d3d0(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0x68))();
  return;
}


// Reference entry 10c5d3f0; body size 19 bytes.
#line 1 "ENTRY_10c5d3f0"

void __fastcall FUN_10c5d3f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111580a0();
  return;
}


// Reference entry 10c5d410; body size 19 bytes.
#line 1 "ENTRY_10c5d410"

void __fastcall FUN_10c5d410(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111580d0();
  return;
}


// Reference entry 10c5d430; body size 19 bytes.
#line 1 "ENTRY_10c5d430"

void __fastcall FUN_10c5d430(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158050();
  return;
}


// Reference entry 10c5d450; body size 19 bytes.
#line 1 "ENTRY_10c5d450"

void __fastcall FUN_10c5d450(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158120();
  return;
}


// Reference entry 10c5d470; body size 19 bytes.
#line 1 "ENTRY_10c5d470"

void __fastcall FUN_10c5d470(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158140();
  return;
}


// Reference entry 10c5d490; body size 26 bytes.
#line 1 "ENTRY_10c5d490"

void __thiscall Recovered_Bulk::m_FUN_10c5d490(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x60) = (undefined1)(param_2);
  if (*(int *)(param_1 + 0x74) != 0) {
    thunk_FUN_11158170();
    return;
  }
  return;
}


// Reference entry 10c5d4b0; body size 19 bytes.
#line 1 "ENTRY_10c5d4b0"

void __fastcall FUN_10c5d4b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111581a0();
  return;
}


// Reference entry 10c5d4d0; body size 19 bytes.
#line 1 "ENTRY_10c5d4d0"

void __fastcall FUN_10c5d4d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158240();
  return;
}


// Reference entry 10c5d4f0; body size 19 bytes.
#line 1 "ENTRY_10c5d4f0"

void __fastcall FUN_10c5d4f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158270();
  return;
}


// Reference entry 10c5d510; body size 19 bytes.
#line 1 "ENTRY_10c5d510"

void __fastcall FUN_10c5d510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111582a0();
  return;
}


// Reference entry 10c5d530; body size 19 bytes.
#line 1 "ENTRY_10c5d530"

void __fastcall FUN_10c5d530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158300();
  return;
}


// Reference entry 10c5d550; body size 19 bytes.
#line 1 "ENTRY_10c5d550"

void __fastcall FUN_10c5d550(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158330();
  return;
}


// Reference entry 10c5d570; body size 19 bytes.
#line 1 "ENTRY_10c5d570"

void __fastcall FUN_10c5d570(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158360();
  return;
}


// Reference entry 10c5d590; body size 19 bytes.
#line 1 "ENTRY_10c5d590"

void __fastcall FUN_10c5d590(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158390();
  return;
}


// Reference entry 10c5d5b0; body size 19 bytes.
#line 1 "ENTRY_10c5d5b0"

void __fastcall FUN_10c5d5b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_111583c0();
  return;
}


// Reference entry 10c5d5d0; body size 19 bytes.
#line 1 "ENTRY_10c5d5d0"

void __fastcall FUN_10c5d5d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_11158420();
  return;
}


// Reference entry 10c5d720; body size 41 bytes.
#line 1 "ENTRY_10c5d720"

void __thiscall Recovered_Bulk::m_FUN_10c5d720(undefined1 param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1*)(param_1 + 0x34) = (undefined1)(param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSubEnabledChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d770; body size 42 bytes.
#line 1 "ENTRY_10c5d770"

void __thiscall Recovered_Bulk::m_FUN_10c5d770(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x38) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSubGainChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d7c0; body size 41 bytes.
#line 1 "ENTRY_10c5d7c0"

void __thiscall Recovered_Bulk::m_FUN_10c5d7c0(undefined1 param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1*)(param_1 + 0x35) = (undefined1)(param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSubPolarityChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5d9b0; body size 21 bytes.
#line 1 "ENTRY_10c5d9b0"

void __thiscall Recovered_Bulk::m_FUN_10c5d9b0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10c5d9e0; body size 41 bytes.
#line 1 "ENTRY_10c5d9e0"

void __thiscall Recovered_Bulk::m_FUN_10c5d9e0(undefined1 param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1*)(param_1 + 0x36) = (undefined1)(param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSurroundEnabledChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5da30; body size 42 bytes.
#line 1 "ENTRY_10c5da30"

void __thiscall Recovered_Bulk::m_FUN_10c5da30(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x48) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSurroundLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5da80; body size 42 bytes.
#line 1 "ENTRY_10c5da80"

void __thiscall Recovered_Bulk::m_FUN_10c5da80(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x50) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onSurroundModeChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5dac0; body size 42 bytes.
#line 1 "ENTRY_10c5dac0"

void __thiscall Recovered_Bulk::m_FUN_10c5dac0(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x2c) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onTrebleLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5db10; body size 42 bytes.
#line 1 "ENTRY_10c5db10"

void __thiscall Recovered_Bulk::m_FUN_10c5db10(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x44) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onTVAudioDelayChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5db60; body size 41 bytes.
#line 1 "ENTRY_10c5db60"

void __thiscall Recovered_Bulk::m_FUN_10c5db60(undefined1 param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(undefined1*)(param_1 + 0x40) = (undefined1)(param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onTVDialogLevelChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5dba0; body size 54 bytes.
#line 1 "ENTRY_10c5dba0"

void __thiscall Recovered_Bulk::m_FUN_10c5dba0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x18));
  thunk_FUN_103d6930(param_2);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)((0x0)))) {
    (**(code **)**(undefined4 **)(param_1 + 0x74))(1);
    *(undefined4*)(param_1 + 0x74) = (undefined4)(0);
  }
  return;
}


// Reference entry 10c5dbf0; body size 21 bytes.
#line 1 "ENTRY_10c5dbf0"

void __thiscall Recovered_Bulk::m_FUN_10c5dbf0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10c5dc20; body size 42 bytes.
#line 1 "ENTRY_10c5dc20"

void __thiscall Recovered_Bulk::m_FUN_10c5dc20(short param_2)
{
  int param_1 = (int )this;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (undefined4)(0);
  *(int*)(param_1 + 0x3c) = (int)((int)param_2);
  iStack_c = (int)(param_1 + -0xc);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_10))->int_allocRep("SCIDeviceMusicEqualization:onCrossoverChanged");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10c5e1e0; body size 33 bytes.
#line 1 "ENTRY_10c5e1e0"

void __thiscall Recovered_Bulk::m_FUN_10c5e1e0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10c5e210(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10c5e2d0; body size 49 bytes.
#line 1 "ENTRY_10c5e2d0"

int __thiscall Recovered_Bulk::m_FUN_10c5e2d0(int *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10c5e5a0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((int)(*param_2) < *(int *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10c5e310; body size 60 bytes.
#line 1 "ENTRY_10c5e310"

int __thiscall Recovered_Bulk::m_FUN_10c5e310(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10828990((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10c5eae0; body size 48 bytes.
#line 1 "ENTRY_10c5eae0"

undefined4 * __fastcall FUN_10c5eae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5ed00; body size 16 bytes.
#line 1 "ENTRY_10c5ed00"

undefined4 __fastcall FUN_10c5ed00(undefined4 param_1)

{
  thunk_FUN_1145e270(param_1);
  return (undefined4)(param_1);
}


// Reference entry 10c5ed70; body size 28 bytes.
#line 1 "ENTRY_10c5ed70"

undefined4 * __fastcall FUN_10c5ed70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(6);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5f430; body size 18 bytes.
#line 1 "ENTRY_10c5f430"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c5f430(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c5f840; body size 31 bytes.
#line 1 "ENTRY_10c5f840"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c5f840(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0xffffffff);
  return (SCStr *)(param_1);
}


// Reference entry 10c5f870; body size 31 bytes.
#line 1 "ENTRY_10c5f870"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c5f870(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0xffffffff);
  return (SCStr *)(param_1);
}


// Reference entry 10c5f930; body size 19 bytes.
#line 1 "ENTRY_10c5f930"

void __fastcall FUN_10c5f930(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10c5f950; body size 28 bytes.
#line 1 "ENTRY_10c5f950"

void __fastcall FUN_10c5f950(int *param_1)

{
  thunk_FUN_10c5e210(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10c5fa10; body size 19 bytes.
#line 1 "ENTRY_10c5fa10"

void __fastcall FUN_10c5fa10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10c5fa30; body size 28 bytes.
#line 1 "ENTRY_10c5fa30"

void __fastcall FUN_10c5fa30(int *param_1)

{
  thunk_FUN_10c5e210(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10c5fa70; body size 52 bytes.
#line 1 "ENTRY_10c5fa70"

int * __thiscall Recovered_Bulk::m_FUN_10c5fa70(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10c5e210(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  thunk_FUN_10c62c00(param_2,param_3);
  return (int *)(param_1);
}


// Reference entry 10c5fe60; body size 25 bytes.
#line 1 "ENTRY_10c5fe60"

void __fastcall FUN_10c5fe60(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10c603f0; body size 33 bytes.
#line 1 "ENTRY_10c603f0"

void __fastcall FUN_10c603f0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10c5e210(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10c62180; body size 29 bytes.
#line 1 "ENTRY_10c62180"

SCStr * FUN_10c62180(SCStr *param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_11456530(*param_2), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10c62f60; body size 17 bytes.
#line 1 "ENTRY_10c62f60"

int __fastcall FUN_10c62f60(undefined4 *param_1)

{
  char *pcVar1;
  uint3 uVar2;
  
  pcVar1 = (char *)((char *)*param_1);
  uVar2 = (uint3)((uint3)((uint)pcVar1 >> 8));
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    return (int)((uint)uVar2 << 8);
  }
  return (int)(((uint)(uVar2) << 8 | (uint)(1)));
}


// Reference entry 10c63000; body size 36 bytes.
#line 1 "ENTRY_10c63000"

SCStr * FUN_10c63000(undefined4 param_1,SCStr *param_2)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_102a0500(), 0);
  pcVar2 = (char *)((char *)(**(code **)(*piVar1 + 0x28))(0x231e), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10c656d0; body size 32 bytes.
#line 1 "ENTRY_10c656d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c656d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c65700; body size 32 bytes.
#line 1 "ENTRY_10c65700"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c65700(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c65730; body size 32 bytes.
#line 1 "ENTRY_10c65730"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c65730(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_106845c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x50);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c66510; body size 25 bytes.
#line 1 "ENTRY_10c66510"

int FUN_10c66510(uint param_1,uint param_2)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint3)((param_1 & param_2) >> 8));
  if (((param_1 & param_2) == param_2) && ((int)param_2 < 0x1f)) {
    return (int)(((uint)(uVar1) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar1 << 8);
}


// Reference entry 10c67700; body size 57 bytes.
#line 1 "ENTRY_10c67700"

undefined4 __fastcall FUN_10c67700(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)(param_1[0xc]);
  thunk_FUN_101b5540(iVar3);
  cVar1 = (char)(thunk_FUN_101b5de0(iVar3), 0);
  if (cVar1 == '\0') {
    return (undefined4)(3);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0x18))(), 0);
  if (cVar1 != '\0') {
    return (undefined4)(2);
  }
                    
                    
  uVar2 = (undefined4)((**(code **)(*param_1 + 0x28))(), 0);
  return (undefined4)(uVar2);
}


// Reference entry 10c67820; body size 21 bytes.
#line 1 "ENTRY_10c67820"

SCStr * __stdcall FUN_10c67820(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("base_connector");
  return (SCStr *)(param_1);
}


// Reference entry 10c67ab0; body size 34 bytes.
#line 1 "ENTRY_10c67ab0"

void __thiscall Recovered_Bulk::m_FUN_10c67ab0(int param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  if ((int)((param_2)) == param_1[0xc]) {
    cVar1 = (char)((**(code **)(*param_1 + 0x18))(), 0);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x14))();
    }
  }
  return;
}


// Reference entry 10c67bf0; body size 22 bytes.
#line 1 "ENTRY_10c67bf0"

void __fastcall FUN_10c67bf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_103021f0(param_1 + 0x20,3,"Pairing requested on an unsupported protocol");
  return;
}


// Reference entry 10c67c20; body size 23 bytes.
#line 1 "ENTRY_10c67c20"

void __fastcall FUN_10c67c20(int param_1)

{
  thunk_FUN_1059d940(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4*)(param_1 + 0x48) = (undefined4)(0);
  return;
}


// Reference entry 10c68fc0; body size 32 bytes.
#line 1 "ENTRY_10c68fc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c68fc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c68ff0; body size 32 bytes.
#line 1 "ENTRY_10c68ff0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c68ff0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c69020; body size 32 bytes.
#line 1 "ENTRY_10c69020"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c69020(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c69050; body size 32 bytes.
#line 1 "ENTRY_10c69050"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c69050(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c69080; body size 35 bytes.
#line 1 "ENTRY_10c69080"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c69080(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c68c80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c690b0; body size 32 bytes.
#line 1 "ENTRY_10c690b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c690b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c690e0; body size 32 bytes.
#line 1 "ENTRY_10c690e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c690e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c69110; body size 32 bytes.
#line 1 "ENTRY_10c69110"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c69110(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c69140; body size 32 bytes.
#line 1 "ENTRY_10c69140"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c69140(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c69170; body size 17 bytes.
#line 1 "ENTRY_10c69170"

bool __stdcall FUN_10c69170(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10c69cb0(param_1), 0);
  return (bool)(iVar1 == 0);
}


// Reference entry 10c69c70; body size 20 bytes.
#line 1 "ENTRY_10c69c70"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c69c70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x44));
  return (SCStr *)(param_2);
}


// Reference entry 10c69c90; body size 25 bytes.
#line 1 "ENTRY_10c69c90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c69c90(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10c667b0(param_2,*(undefined4 *)(param_1 + 0xb4));
  return (undefined4)(param_2);
}


// Reference entry 10c69f50; body size 26 bytes.
#line 1 "ENTRY_10c69f50"

void __stdcall FUN_10c69f50(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_1033b650();
    return;
  }
  return;
}


// Reference entry 10c6a3c0; body size 20 bytes.
#line 1 "ENTRY_10c6a3c0"

void __fastcall FUN_10c6a3c0(int param_1)

{
  thunk_FUN_10c6c6c0(*(int *)(param_1 + 0xcc) != 0);
  return;
}


// Reference entry 10c6a3e0; body size 24 bytes.
#line 1 "ENTRY_10c6a3e0"

undefined1 __fastcall FUN_10c6a3e0(int param_1)

{
  if ((*(char *)(param_1 + 0xd1) != '\0') && (*(int *)(param_1 + 0xcc) != 0)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10c6a400; body size 24 bytes.
#line 1 "ENTRY_10c6a400"

undefined1 __fastcall FUN_10c6a400(int param_1)

{
  if ((*(char *)(param_1 + 0xd1) != '\0') && (*(char *)(param_1 + 0xd0) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10c6a420; body size 33 bytes.
#line 1 "ENTRY_10c6a420"

undefined1 __fastcall FUN_10c6a420(int param_1)

{
  if ((*(char *)(param_1 + 0xd1) != '\0') &&
     ((*(int *)(param_1 + 0xcc) != 0 || (*(char *)(param_1 + 0xd0) != '\0')))) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10c6a450; body size 40 bytes.
#line 1 "ENTRY_10c6a450"

void __thiscall Recovered_Bulk::m_FUN_10c6a450(int param_2)
{
  int param_1 = (int )this;
  if ((int)(param_2) == *(int *)(param_1 + 0x34)) {
    thunk_FUN_10c6c6c0();
    return;
  }
  return;
}


// Reference entry 10c6a490; body size 23 bytes.
#line 1 "ENTRY_10c6a490"

void __thiscall Recovered_Bulk::m_FUN_10c6a490(int param_2)
{
  int param_1 = (int )this;
  if ((int)(param_2) == *(int *)(param_1 + 0x34)) {
    thunk_FUN_10c6cda0();
  }
  return;
}


// Reference entry 10c6a4c0; body size 56 bytes.
#line 1 "ENTRY_10c6a4c0"

void __fastcall FUN_10c6a4c0(int param_1)

{
  thunk_FUN_10c6c6c0(*(int *)(param_1 + 0x50) != 0);
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_104dec20();
    if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x60))(1);
    }
    *(undefined4*)(param_1 + 0x60) = (undefined4)(0);
  }
  return;
}


// Reference entry 10c6a520; body size 34 bytes.
#line 1 "ENTRY_10c6a520"

void __thiscall Recovered_Bulk::m_FUN_10c6a520(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  if ((int)(param_3) == *(int *)(param_1 + 0x34)) {
    thunk_FUN_10c6c6c0(*(int *)(param_1 + 0x4c) != 0);
  }
  return;
}


// Reference entry 10c6a950; body size 18 bytes.
#line 1 "ENTRY_10c6a950"

void __fastcall FUN_10c6a950(int param_1)

{
  if (*(int *)(param_1 + 0x44) == 0) {
    thunk_FUN_10c6cda0();
    return;
  }
  return;
}


// Reference entry 10c6a970; body size 26 bytes.
#line 1 "ENTRY_10c6a970"

void __fastcall FUN_10c6a970(int param_1)

{
  thunk_FUN_10c6c6c0(*(int *)(param_1 + 0x44) != 0);
  return;
}


// Reference entry 10c6d4a0; body size 19 bytes.
#line 1 "ENTRY_10c6d4a0"

void __fastcall FUN_10c6d4a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c6d620; body size 45 bytes.
#line 1 "ENTRY_10c6d620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c6d620(byte param_2)
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


// Reference entry 10c6d660; body size 33 bytes.
#line 1 "ENTRY_10c6d660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c6d660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c6d7f0; body size 21 bytes.
#line 1 "ENTRY_10c6d7f0"

SCStr * __stdcall FUN_10c6d7f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("wifi_connector");
  return (SCStr *)(param_1);
}


// Reference entry 10c6ed50; body size 17 bytes.
#line 1 "ENTRY_10c6ed50"

undefined4 __fastcall FUN_10c6ed50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (*(int *)(param_1 + 0xe8) == 0) {
    uVar1 = (undefined4)(4);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10c6ed70; body size 18 bytes.
#line 1 "ENTRY_10c6ed70"

undefined4 __fastcall FUN_10c6ed70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  (**(code **)(**(int **)(param_1 + 0xe8) + 0x2c))(0);
  return (undefined4)(1);
}


// Reference entry 10c6fb30; body size 17 bytes.
#line 1 "ENTRY_10c6fb30"

undefined4 __fastcall FUN_10c6fb30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar1 = (undefined4)(4);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10c6fcb0; body size 30 bytes.
#line 1 "ENTRY_10c6fcb0"

undefined1 __thiscall Recovered_Bulk::m_FUN_10c6fcb0(char param_2)
{
  int param_1 = (int )this;
  if (param_2 != '\0') {
    *(undefined1*)(param_1 + 0x174) = (undefined1)(1);
    thunk_FUN_1112c3b0();
  }
  return (undefined1)(1);
}


// Reference entry 10c6fce0; body size 19 bytes.
#line 1 "ENTRY_10c6fce0"

undefined1 __fastcall FUN_10c6fce0(int param_1)

{
  if (*(char *)(param_1 + 0x174) != '\0') {
    *(undefined1*)(param_1 + 0x174) = (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10c71eb0; body size 56 bytes.
#line 1 "ENTRY_10c71eb0"

uint FUN_10c71eb0(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(0);
  if (*(uint *)(param_2 + 4) != 0) {
    do {
      if ((*(byte *)(*(int *)(param_2 + 8) + uVar1) <= (byte)(param_1)) &&
         ((byte)(param_1) <= *(byte *)(*(int *)(param_2 + 8) + 1 + uVar1))) {
        return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
      }
      uVar1 = (uint)(uVar1 + 2);
    } while ((uint)(uVar1) < *(uint *)(param_2 + 4));
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10c73390; body size 30 bytes.
#line 1 "ENTRY_10c73390"

void __thiscall Recovered_Bulk::m_FUN_10c73390(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10c73860; body size 46 bytes.
#line 1 "ENTRY_10c73860"

void FUN_10c73860(undefined4 *param_1,char *param_2,char *param_3,int *param_4)

{
  if ((char *)(param_2) == (char *)(param_3)) {
    *param_1 = (undefined4)(param_2);
    return;
  }
  do {
    if ((int)*param_2 == (char)(*(param_4))) break;
    param_2 = (char *)(param_2 + 1);
  } while ((char *)(param_2) != (char *)(param_3));
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c75cf0; body size 19 bytes.
#line 1 "ENTRY_10c75cf0"

void __fastcall FUN_10c75cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c75fb0; body size 23 bytes.
#line 1 "ENTRY_10c75fb0"

void __fastcall FUN_10c75fb0(undefined4 *param_1)

{
  free((void *)param_1[7]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c760e0; body size 48 bytes.
#line 1 "ENTRY_10c760e0"

void __fastcall FUN_10c760e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  param_1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(param_1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
    while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
      puVar1 = (undefined4 *)((undefined4 *)puVar2[3]);
      puVar2[3] = (undefined4)(0);
      (**(code **)*puVar2)(1);
      puVar2 = (undefined4 *)(puVar1);
    }
    *param_1 = (undefined4)(0);
  }
  return;
}


// Reference entry 10c76170; body size 34 bytes.
#line 1 "ENTRY_10c76170"

void __fastcall FUN_10c76170(int param_1)

{
  undefined4 *puVar1;
  
  thunk_FUN_10c7d430();
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
    puVar1 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 0x10) + 8))(), 0);
    if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


// Reference entry 10c761a0; body size 30 bytes.
#line 1 "ENTRY_10c761a0"

void __fastcall FUN_10c761a0(facet *param_1)

{
  *(undefined***)param_1 = (undefined **)((facet *)((uint)&ghidra_vftable_std_collate));
  free(*(void **)(param_1 + 0xc));
                    
                    
  ((std::locale::facet *)(param_1))->op_dtor();
  return;
}


// Reference entry 10c761e0; body size 25 bytes.
#line 1 "ENTRY_10c761e0"

void __fastcall FUN_10c761e0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    puVar1 = (undefined4 *)((undefined4 *)(**(code **)(**(int **)(param_1 + 0xc) + 8))(), 0);
    if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


// Reference entry 10c76540; body size 49 bytes.
#line 1 "ENTRY_10c76540"

void __fastcall FUN_10c76540(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_assert);
  puVar2 = (undefined4 *)((undefined4 *)param_1[5]);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)puVar2[3]);
    puVar2[3] = (undefined4)(0);
    (**(code **)*puVar2)(1);
    puVar2 = (undefined4 *)(puVar1);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  return;
}


// Reference entry 10c76c60; body size 17 bytes.
#line 1 "ENTRY_10c76c60"

int __thiscall Recovered_Bulk::m_FUN_10c76c60(int param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)((undefined4 *)*param_1);
  }
  return (int)(param_2 + (int)param_1);
}


// Reference entry 10c76c80; body size 55 bytes.
#line 1 "ENTRY_10c76c80"

int __thiscall Recovered_Bulk::m_FUN_10c76c80(uint param_2)
{
  int param_1 = (int )this;
  if ((uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0xc) <= param_2) {
    return (int)(param_1 + 0x2c);
  }
  return (int)(*(int *)(param_1 + 8) + param_2 * 0xc);
}


// Reference entry 10c77060; body size 45 bytes.
#line 1 "ENTRY_10c77060"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c77060(byte param_2)
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


// Reference entry 10c770a0; body size 39 bytes.
#line 1 "ENTRY_10c770a0"

int __thiscall Recovered_Bulk::m_FUN_10c770a0(byte param_2)
{
  int param_1 = (int )this;
  free(*(void **)(param_1 + 8));
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (int)(param_1);
}


// Reference entry 10c771c0; body size 45 bytes.
#line 1 "ENTRY_10c771c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c771c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  free((void *)param_1[7]);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x20);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c77200; body size 39 bytes.
#line 1 "ENTRY_10c77200"

int __thiscall Recovered_Bulk::m_FUN_10c77200(byte param_2)
{
  int param_1 = (int )this;
  free(*(void **)(param_1 + 0xc));
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (int)(param_1);
}


// Reference entry 10c77230; body size 53 bytes.
#line 1 "ENTRY_10c77230"

facet * __thiscall Recovered_Bulk::m_FUN_10c77230(byte param_2)
{
  facet *param_1 = (facet *)this;
  *(undefined***)param_1 = (undefined **)((facet *)((uint)&ghidra_vftable_std_collate));
  free(*(void **)(param_1 + 0xc));
  ((std::locale::facet *)(param_1))->op_dtor();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (facet *)(param_1);
}


// Reference entry 10c77280; body size 33 bytes.
#line 1 "ENTRY_10c77280"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c77280(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c77480; body size 33 bytes.
#line 1 "ENTRY_10c77480"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c77480(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c774b0; body size 33 bytes.
#line 1 "ENTRY_10c774b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c774b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c774e0; body size 33 bytes.
#line 1 "ENTRY_10c774e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c774e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c77510; body size 33 bytes.
#line 1 "ENTRY_10c77510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c77510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c77540; body size 33 bytes.
#line 1 "ENTRY_10c77540"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c77540(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c77570; body size 33 bytes.
#line 1 "ENTRY_10c77570"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c77570(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x14);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c77630; body size 33 bytes.
#line 1 "ENTRY_10c77630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c77630(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x28);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c77660; body size 33 bytes.
#line 1 "ENTRY_10c77660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c77660(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Node_base);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x24);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c78bf0; body size 53 bytes.
#line 1 "ENTRY_10c78bf0"

uint __fastcall FUN_10c78bf0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(*(int *)(param_1 + 4) + 4));
  if ((((uVar1 != 0x14) && (uVar1 != 8)) && (uVar1 != 0xd)) &&
     ((uVar1 != 2 ||
      (((uVar1 = (uint)(*(uint *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 4)), uVar1 != 0x14 &&
        (uVar1 != 8)) && (uVar1 != 0xd)))))) {
    return (uint)(uVar1 & 0xffffff00);
  }
  return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 10c79140; body size 30 bytes.
#line 1 "ENTRY_10c79140"

void __fastcall FUN_10c79140(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_10c74230(param_1 + 2), 0);
  *param_1 = (undefined4)(uVar1);
  uVar1 = (undefined4)(thunk_FUN_10c74420(param_1 + 2), 0);
  param_1[1] = (undefined4)(uVar1);
  return;
}


// Reference entry 10c7a2d0; body size 21 bytes.
#line 1 "ENTRY_10c7a2d0"

bool FUN_10c7a2d0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10c7a9d0(10,0x7fffffff), 0);
  return (bool)(iVar1 != 0x7fffffff);
}


// Reference entry 10c7ad10; body size 43 bytes.
#line 1 "ENTRY_10c7ad10"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c7ad10(char param_2)
{
  int param_1 = (int )this;
  if (param_2 == 'a') {
    *(undefined4*)(param_1 + 0x44) = (undefined4)(7);
    return (undefined4)(1);
  }
  if (param_2 == 'b') {
    *(undefined4*)(param_1 + 0x44) = (undefined4)(8);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10c7b430; body size 37 bytes.
#line 1 "ENTRY_10c7b430"

void FUN_10c7b430(void)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_10c7cce0(8), 0);
  thunk_FUN_10c7a380();
  thunk_FUN_10c7bc70(uVar1);
  return;
}


// Reference entry 10c7c230; body size 38 bytes.
#line 1 "ENTRY_10c7c230"

void __thiscall Recovered_Bulk::m_FUN_10c7c230(_Locinfo *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  _Collvec _Var2;
  
  _Var2 = (_Collvec)(((std::_Locinfo *)(param_2))->_Getcoll(), 0);
  uVar1 = (undefined4)(((undefined4 *)(*(struct __RFLD *)&_Var2)._Page)[1]);
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(*(struct __RFLD *)&_Var2)._Page);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(uVar1);
  return;
}


// Reference entry 10c7c260; body size 62 bytes.
#line 1 "ENTRY_10c7c260"

void __thiscall Recovered_Bulk::m_FUN_10c7c260(undefined1 param_2)
{
  size_t *param_1 = (size_t *)this;
  size_t _NewSize;
  void *pvVar1;
  
  if (*param_1 <= (size_t)((param_1))[1]) {
    _NewSize = (size_t)(param_1[1] + 0x10);
    pvVar1 = (void *)(realloc((void *)param_1[2], (void *)(_NewSize) ), 0);
    if ((void *)(pvVar1) == (void *)(0x0)) {
                    
      std::_Xbad_alloc();
    }
    param_1[2] = (size_t)((size_t)pvVar1);
    *param_1 = (size_t)(_NewSize);
  }
  *(undefined1*)(param_1[2] + param_1[1]) = (undefined1)(param_2);
  param_1[1] = (size_t)(param_1[1] + 1);
  return;
}


// Reference entry 10c7c420; body size 49 bytes.
#line 1 "ENTRY_10c7c420"

uint __fastcall FUN_10c7c420(int *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((char *)(*param_1 + 1));
  if ((char *)(pcVar2) != (char *)param_1[2]) {
    if (((param_1[0x14] & 8U) == 0) && ((*pcVar2 == (char)(('(')) || (*pcVar2 == (char)((')')))))) {
LAB_10c7c44b:
      return (uint)(((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(1)));
    }
    if ((param_1[0x14] & 0x10U) == 0) {
      cVar1 = (char)(*pcVar2);
      pcVar2 = (char *)((char *)((uint)((int3)((uint)pcVar2 >> 8)) << 8 | (uint)(cVar1)));
      if ((cVar1 == '{') || (cVar1 == '}')) goto LAB_10c7c44b;
    }
  }
  return (uint)((uint)pcVar2 & 0xffffff00);
}


// Reference entry 10c7d3b0; body size 48 bytes.
#line 1 "ENTRY_10c7d3b0"

void __fastcall FUN_10c7d3b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((undefined4 *)*param_1);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)puVar2[3]);
    puVar2[3] = (undefined4)(0);
    (**(code **)*puVar2)(1);
    puVar2 = (undefined4 *)(puVar1);
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10c7d870; body size 40 bytes.
#line 1 "ENTRY_10c7d870"

void __stdcall FUN_10c7d870(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1 = (undefined4 *)(param_1 + 2);
  }
  return;
}


// Reference entry 10c7d8f0; body size 44 bytes.
#line 1 "ENTRY_10c7d8f0"

void __stdcall FUN_10c7d8f0(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    *(undefined1*)(param_1 + 2) = (undefined1)(0);
    param_1 = (undefined4 *)(param_1 + 3);
  }
  return;
}


// Reference entry 10c7dc60; body size 30 bytes.
#line 1 "ENTRY_10c7dc60"

void __thiscall Recovered_Bulk::m_FUN_10c7dc60(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10c7e120; body size 50 bytes.
#line 1 "ENTRY_10c7e120"

uint __thiscall Recovered_Bulk::m_FUN_10c7e120(char *param_2,char *param_3,char *param_4,char *param_5)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(_Strcoll(param_2,param_3,param_4,param_5,(_Collvec *)(param_1 + 8)), 0);
  if (iVar1 < 0) {
    return (uint)(0xffffffff);
  }
  return (uint)((uint)(iVar1 != 0));
}


// Reference entry 10c7e160; body size 48 bytes.
#line 1 "ENTRY_10c7e160"

uint __stdcall FUN_10c7e160(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(0x811c9dc5);
  uVar2 = (uint)(0);
  if (param_2 != param_1) {
    do {
      pbVar1 = (byte *)((byte *)(uVar2 + param_1));
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)((*pbVar1 ^ uVar3) * 0x1000193);
    } while (uVar2 < (uint)(param_2 - param_1));
  }
  return (uint)(uVar3);
}


// Reference entry 10c7e2e0; body size 28 bytes.
#line 1 "ENTRY_10c7e2e0"

void __fastcall FUN_10c7e2e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10c7e5a0; body size 17 bytes.
#line 1 "ENTRY_10c7e5a0"

undefined4 __fastcall FUN_10c7e5a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar1 = (undefined4)(4);
  }
  return (undefined4)(uVar1);
}


// Reference entry 10c7e960; body size 16 bytes.
#line 1 "ENTRY_10c7e960"

undefined4 __fastcall FUN_10c7e960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  (**(code **)(**(int **)(param_1 + 0x178) + 0x14))();
  return (undefined4)(1);
}


// Reference entry 10c7fcd0; body size 40 bytes.
#line 1 "ENTRY_10c7fcd0"

void __thiscall Recovered_Bulk::m_FUN_10c7fcd0(uint param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if (param_2 <= (uint)param_1[4]) {
    param_1[4] = (undefined4)(param_2);
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)((undefined4 *)*param_1);
    }
    *(undefined1*)((int)param_1 + param_2) = (undefined1)(0);
    return;
  }
  thunk_FUN_10c7ddf0();
  return;
}


// Reference entry 10c81670; body size 38 bytes.
#line 1 "ENTRY_10c81670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c81670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c816a0; body size 38 bytes.
#line 1 "ENTRY_10c816a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c816a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c816d0; body size 32 bytes.
#line 1 "ENTRY_10c816d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c816d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c80f90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c81700; body size 32 bytes.
#line 1 "ENTRY_10c81700"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c81700(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c810e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c81820; body size 35 bytes.
#line 1 "ENTRY_10c81820"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c81820(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c81300();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6128);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c81850; body size 35 bytes.
#line 1 "ENTRY_10c81850"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c81850(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c81440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6228);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c81930; body size 45 bytes.
#line 1 "ENTRY_10c81930"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c81930(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetHouseholdSetting);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetHouseholdSetting);
  thunk_FUN_10c80f90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c81970; body size 45 bytes.
#line 1 "ENTRY_10c81970"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c81970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSetHouseholdSetting);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSetHouseholdSetting);
  thunk_FUN_10c810e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c81d90; body size 17 bytes.
#line 1 "ENTRY_10c81d90"

undefined1 * __fastcall FUN_10c81d90(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6214) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6214), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10c81e50; body size 21 bytes.
#line 1 "ENTRY_10c81e50"

SCStr * __stdcall FUN_10c81e50(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c81e70; body size 21 bytes.
#line 1 "ENTRY_10c81e70"

SCStr * __stdcall FUN_10c81e70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10c81ef0; body size 25 bytes.
#line 1 "ENTRY_10c81ef0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c81ef0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x615c));
  return (SCStr *)(param_2);
}


// Reference entry 10c83a10; body size 51 bytes.
#line 1 "ENTRY_10c83a10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c83a10(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjQInternalListener");
  param_1[6] = (undefined4)(param_2);
  param_1[7] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjQInternalListener);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c83c30; body size 56 bytes.
#line 1 "ENTRY_10c83c30"

void __fastcall FUN_10c83c30(int param_1)

{
  if ((*(char *)(param_1 + 0x14) == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjQListener",3,"Subscribe to SwfObjQ events");
      thunk_FUN_11159cc0(param_1);
    }
    *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
  }
  return;
}


// Reference entry 10c83c80; body size 56 bytes.
#line 1 "ENTRY_10c83c80"

void __fastcall FUN_10c83c80(int param_1)

{
  if ((*(char *)(param_1 + 0x14) != '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_112af4e0("SCSwfObjQListener",3,"Unsubscribe from SwfObjQ events");
      thunk_FUN_1115b9c0(param_1);
    }
    *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
  }
  return;
}


// Reference entry 10c83ce0; body size 44 bytes.
#line 1 "ENTRY_10c83ce0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c83ce0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_111a4bc0(0,"SCSwfObjUMInternalListener");
  param_1[6] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjUMInternalListener);
  *(undefined1*)(param_1 + 5) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c83f10; body size 27 bytes.
#line 1 "ENTRY_10c83f10"

undefined4 __fastcall FUN_10c83f10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(thunk_FUN_111a2df0(), 0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(uVar1);
  return (undefined4)(0);
}


// Reference entry 10c83f90; body size 34 bytes.
#line 1 "ENTRY_10c83f90"

void __fastcall FUN_10c83f90(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (DAT_122e8a18 != 0) {
      FUN_10070892(param_1);
    }
    *(undefined1*)(param_1 + 0x14) = (undefined1)(1);
  }
  return;
}


// Reference entry 10c83fc0; body size 34 bytes.
#line 1 "ENTRY_10c83fc0"

void __fastcall FUN_10c83fc0(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (DAT_122e8a18 != 0) {
      FUN_10065348(param_1);
    }
    *(undefined1*)(param_1 + 0x14) = (undefined1)(0);
  }
  return;
}


// Reference entry 10c84410; body size 20 bytes.
#line 1 "ENTRY_10c84410"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c84410(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10c844e0; body size 18 bytes.
#line 1 "ENTRY_10c844e0"

SCStr * __stdcall FUN_10c844e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10c85140; body size 40 bytes.
#line 1 "ENTRY_10c85140"

int __thiscall Recovered_Bulk::m_FUN_10c85140(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10c85210((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 10c85180; body size 40 bytes.
#line 1 "ENTRY_10c85180"

int __thiscall Recovered_Bulk::m_FUN_10c85180(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10c85290((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
  }
  return (int)(iVar1);
}


// Reference entry 10c851c0; body size 60 bytes.
#line 1 "ENTRY_10c851c0"

int __thiscall Recovered_Bulk::m_FUN_10c851c0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_1028c3a0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10c87b70; body size 59 bytes.
#line 1 "ENTRY_10c87b70"

void __thiscall Recovered_Bulk::m_FUN_10c87b70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10c84db0(puVar1,param_2);
  return;
}


// Reference entry 10c88a30; body size 39 bytes.
#line 1 "ENTRY_10c88a30"

undefined4 * __fastcall FUN_10c88a30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c88a60; body size 39 bytes.
#line 1 "ENTRY_10c88a60"

undefined4 * __fastcall FUN_10c88a60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c89270; body size 26 bytes.
#line 1 "ENTRY_10c89270"

void __fastcall FUN_10c89270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10c89290; body size 19 bytes.
#line 1 "ENTRY_10c89290"

void __fastcall FUN_10c89290(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x28);
  }
  return;
}


// Reference entry 10c892b0; body size 19 bytes.
#line 1 "ENTRY_10c892b0"

void __fastcall FUN_10c892b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x28);
  }
  return;
}


// Reference entry 10c89650; body size 25 bytes.
#line 1 "ENTRY_10c89650"

void __fastcall FUN_10c89650(undefined4 *param_1)

{
  thunk_FUN_10c85310(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 10c89670; body size 25 bytes.
#line 1 "ENTRY_10c89670"

void __fastcall FUN_10c89670(undefined4 *param_1)

{
  thunk_FUN_10c853f0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 10c89fc0; body size 27 bytes.
#line 1 "ENTRY_10c89fc0"

int __stdcall FUN_10c89fc0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10c872c0((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0x10);
}


// Reference entry 10c89ff0; body size 27 bytes.
#line 1 "ENTRY_10c89ff0"

int __stdcall FUN_10c89ff0(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10c87570((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0x10);
}


// Reference entry 10c8a240; body size 52 bytes.
#line 1 "ENTRY_10c8a240"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c8a240(byte param_2)
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


// Reference entry 10c8a4a0; body size 35 bytes.
#line 1 "ENTRY_10c8a4a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c8a4a0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c89860();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c8a510; body size 25 bytes.
#line 1 "ENTRY_10c8a510"

void __fastcall FUN_10c8a510(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10c8a530; body size 25 bytes.
#line 1 "ENTRY_10c8a530"

void __fastcall FUN_10c8a530(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10c8b900; body size 25 bytes.
#line 1 "ENTRY_10c8b900"

void __fastcall FUN_10c8b900(undefined4 *param_1)

{
  thunk_FUN_10c85310(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 10c8b920; body size 25 bytes.
#line 1 "ENTRY_10c8b920"

void __fastcall FUN_10c8b920(undefined4 *param_1)

{
  thunk_FUN_10c853f0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x28);
  return;
}


// Reference entry 10c8be80; body size 38 bytes.
#line 1 "ENTRY_10c8be80"

void __stdcall FUN_10c8be80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10c8edf0(param_1,param_2);
  thunk_FUN_10c8f700(param_1,param_2);
  return;
}


// Reference entry 10c8c9b0; body size 32 bytes.
#line 1 "ENTRY_10c8c9b0"

void __fastcall FUN_10c8c9b0(int *param_1)

{
  thunk_FUN_10c85310(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10c8c9e0; body size 32 bytes.
#line 1 "ENTRY_10c8c9e0"

void __fastcall FUN_10c8c9e0(int *param_1)

{
  thunk_FUN_10c853f0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10c8d180; body size 43 bytes.
#line 1 "ENTRY_10c8d180"

void __fastcall FUN_10c8d180(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10c8d640; body size 50 bytes.
#line 1 "ENTRY_10c8d640"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c8d640(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  if (*(int *)(param_1 + -4) != 0) {
    pcVar1 = (char *)((char *)thunk_FUN_110810b0(), 0);
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep((char *)0x0);
  return (SCStr *)(param_2);
}


// Reference entry 10c8da20; body size 20 bytes.
#line 1 "ENTRY_10c8da20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c8da20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 10c8da40; body size 20 bytes.
#line 1 "ENTRY_10c8da40"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c8da40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x4c));
  return (SCStr *)(param_2);
}


// Reference entry 10c8dce0; body size 50 bytes.
#line 1 "ENTRY_10c8dce0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c8dce0(undefined4 param_2)
{
  int param_1 = (int )this;
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + -4) != 0) {
    cVar1 = (char)(thunk_FUN_110833f0(), 0);
    if (cVar1 != '\0') {
      uVar2 = (undefined4)(FUN_10c8de80(param_2), 0);
      uVar2 = (undefined4)(thunk_FUN_11081b20(uVar2), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c8de30; body size 31 bytes.
#line 1 "ENTRY_10c8de30"

undefined4 FUN_10c8de30(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (undefined4)(0);
  case 1:
  case 6:
    return (undefined4)(1);
  default:
    return (undefined4)(2);
  }
}


// Reference entry 10c8de80; body size 38 bytes.
#line 1 "ENTRY_10c8de80"

undefined4 FUN_10c8de80(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 0xb:
    return (undefined4)(0);
  default:
    return (undefined4)(2);
  case 10:
  case 0xf:
    return (undefined4)(1);
  }
}


// Reference entry 10c8dee0; body size 20 bytes.
#line 1 "ENTRY_10c8dee0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c8dee0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x40));
  return (SCStr *)(param_2);
}


// Reference entry 10c92d70; body size 59 bytes.
#line 1 "ENTRY_10c92d70"

void __thiscall Recovered_Bulk::m_FUN_10c92d70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10c84db0(puVar1,param_2);
  return;
}


// Reference entry 10c92dc0; body size 60 bytes.
#line 1 "ENTRY_10c92dc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c92dc0(undefined4 *param_2,SCStr *param_3)
{
  int *param_1 = (int *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIObj"), 0);
  if (bVar1) {
    *param_2 = (undefined4)(param_1);
    if ((int *)(param_1) != (int *)(0x0)) {
      (**(code **)(*param_1 + 4))();
    }
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10c92e40; body size 35 bytes.
#line 1 "ENTRY_10c92e40"

void __fastcall FUN_10c92e40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + -4) != 0) {
    thunk_FUN_110965d0();
    return;
  }
  return;
}


// Reference entry 10c93210; body size 46 bytes.
#line 1 "ENTRY_10c93210"

char * FUN_10c93210(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (char *)("Unknown");
  case 1:
    return (char *)("N/A");
  case 2:
    return (char *)("Charging");
  case 3:
    return (char *)("Discharging");
  default:
    return (char *)("Bad Charge Enum");
  }
}


// Reference entry 10c93df0; body size 32 bytes.
#line 1 "ENTRY_10c93df0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c93df0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c93b50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x78);
  }
  return (undefined4)(param_1);
}


// Reference entry 10c93f50; body size 53 bytes.
#line 1 "ENTRY_10c93f50"

void __fastcall FUN_10c93f50(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_105c0190(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_105c0190(uVar1);
    return;
  }
  thunk_FUN_105c0190(0);
  return;
}


// Reference entry 10c95030; body size 47 bytes.
#line 1 "ENTRY_10c95030"

undefined1 __fastcall FUN_10c95030(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(0);
  if ((((1 < *(int *)(param_1 + 0x4c)) || (1 < *(int *)(param_1 + 0x50))) ||
      (1 < *(int *)(param_1 + 0x54))) ||
     (((1 < *(int *)(param_1 + 0x58) || (1 < *(int *)(param_1 + 0x5c))) ||
      ((1 < *(int *)(param_1 + 100) || (0 < *(int *)(param_1 + 0x60))))))) {
    uVar1 = (undefined1)(1);
  }
  return (undefined1)(uVar1);
}


// Reference entry 10c961e0; body size 17 bytes.
#line 1 "ENTRY_10c961e0"

undefined4 __fastcall FUN_10c961e0(int param_1)

{
  if (*(int *)(param_1 + 0x6c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x20));
  }
  return (undefined4)(10);
}


// Reference entry 10c96350; body size 25 bytes.
#line 1 "ENTRY_10c96350"

undefined4 __fastcall FUN_10c96350(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 4));
  }
  iVar1 = (int)(*(int *)(param_1 + 0x70));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  if (*(char *)(iVar1 + 0x90) != '\0') {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x94));
  }
  return (undefined4)(0);
}


// Reference entry 10c96760; body size 24 bytes.
#line 1 "ENTRY_10c96760"

undefined4 __fastcall FUN_10c96760(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    return (undefined4)(**(undefined4 **)(param_1 + 0x6c));
  }
  iVar1 = (int)(*(int *)(param_1 + 0x70));
  if (iVar1 == 0) {
    return (undefined4)(0);
  }
  if (*(char *)(iVar1 + 0x78) != '\0') {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x7c));
  }
  if ((*(char *)(iVar1 + 0x80) != '\0') && (*(char *)(iVar1 + 0x88) != '\0')) {
    uVar2 = (undefined4)(thunk_FUN_114568e0(*(undefined4 *)(iVar1 + 0x84),*(undefined4 *)(iVar1 + 0x8c)), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10c97610; body size 25 bytes.
#line 1 "ENTRY_10c97610"

int * __thiscall Recovered_Bulk::m_FUN_10c97610(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x70), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10c97630; body size 20 bytes.
#line 1 "ENTRY_10c97630"

undefined4 __thiscall Recovered_Bulk::m_FUN_10c97630(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1125cbb0(param_1 + 0x10);
  return (undefined4)(param_2);
}


// Reference entry 10c97650; body size 26 bytes.
#line 1 "ENTRY_10c97650"

undefined4 __fastcall FUN_10c97650(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 8));
  }
  iVar1 = (int)(*(int *)(param_1 + 0x70));
  if (iVar1 == 0) {
    return (undefined4)(0xffffffff);
  }
  if (*(char *)(iVar1 + 0x80) != '\0') {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x84));
  }
  return (undefined4)(0);
}


// Reference entry 10c97670; body size 26 bytes.
#line 1 "ENTRY_10c97670"

undefined4 __fastcall FUN_10c97670(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc));
  }
  iVar1 = (int)(*(int *)(param_1 + 0x70));
  if (iVar1 == 0) {
    return (undefined4)(0xffffffff);
  }
  if (*(char *)(iVar1 + 0x88) != '\0') {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x8c));
  }
  return (undefined4)(0);
}


// Reference entry 10c97b50; body size 22 bytes.
#line 1 "ENTRY_10c97b50"

int __fastcall FUN_10c97b50(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24));
  if (iVar1 < 0) {
    iVar1 = (int)(*(int *)(param_1 + 0x70));
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0xa0) != '\0') {
        return (int)(*(int *)(iVar1 + 0xa4));
      }
      return (int)(-1);
    }
    iVar1 = (int)(-1);
  }
  return (int)(iVar1);
}


// Reference entry 10c97b70; body size 53 bytes.
#line 1 "ENTRY_10c97b70"

void __fastcall FUN_10c97b70(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11456d50(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11456d50(uVar1);
    return;
  }
  thunk_FUN_11456d50(0);
  return;
}


// Reference entry 10c980a0; body size 53 bytes.
#line 1 "ENTRY_10c980a0"

void __fastcall FUN_10c980a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11456de0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11456de0(uVar1);
    return;
  }
  thunk_FUN_11456de0(0);
  return;
}


// Reference entry 10c98100; body size 53 bytes.
#line 1 "ENTRY_10c98100"

void __fastcall FUN_10c98100(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11456e70(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11456e70(uVar1);
    return;
  }
  thunk_FUN_11456e70(0);
  return;
}


// Reference entry 10c986f0; body size 20 bytes.
#line 1 "ENTRY_10c986f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c986f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 10c98710; body size 20 bytes.
#line 1 "ENTRY_10c98710"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c98710(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10c98c80; body size 20 bytes.
#line 1 "ENTRY_10c98c80"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c98c80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10c98cb0; body size 25 bytes.
#line 1 "ENTRY_10c98cb0"

int * __thiscall Recovered_Bulk::m_FUN_10c98cb0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x44), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10c99580; body size 53 bytes.
#line 1 "ENTRY_10c99580"

void __fastcall FUN_10c99580(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11457d40(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11457d40(uVar1);
    return;
  }
  thunk_FUN_11457d40(0);
  return;
}


// Reference entry 10c99820; body size 53 bytes.
#line 1 "ENTRY_10c99820"

void __fastcall FUN_10c99820(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_114575a0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_114575a0(uVar1);
    return;
  }
  thunk_FUN_114575a0(0);
  return;
}


// Reference entry 10c99870; body size 53 bytes.
#line 1 "ENTRY_10c99870"

void __fastcall FUN_10c99870(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11457630(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11457630(uVar1);
    return;
  }
  thunk_FUN_11457630(0);
  return;
}


// Reference entry 10c998c0; body size 53 bytes.
#line 1 "ENTRY_10c998c0"

void __fastcall FUN_10c998c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11457670(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11457670(uVar1);
    return;
  }
  thunk_FUN_11457670(0);
  return;
}


// Reference entry 10c99dc0; body size 53 bytes.
#line 1 "ENTRY_10c99dc0"

void __fastcall FUN_10c99dc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_114576b0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_114576b0(uVar1);
    return;
  }
  thunk_FUN_114576b0(0);
  return;
}


// Reference entry 10c9a420; body size 53 bytes.
#line 1 "ENTRY_10c9a420"

void __fastcall FUN_10c9a420(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_114576f0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_114576f0(uVar1);
    return;
  }
  thunk_FUN_114576f0(0);
  return;
}


// Reference entry 10c9b060; body size 53 bytes.
#line 1 "ENTRY_10c9b060"

void __fastcall FUN_10c9b060(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_114577b0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_114577b0(uVar1);
    return;
  }
  thunk_FUN_114577b0(0);
  return;
}


// Reference entry 10c9b1e0; body size 45 bytes.
#line 1 "ENTRY_10c9b1e0"

undefined4 __fastcall FUN_10c9b1e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6c));
  if (iVar1 != 0) {
    return (undefined4)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)(*(undefined1 *)(iVar1 + 0x17))));
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar2 = (undefined4)(thunk_FUN_1034d200(), 0);
    uVar2 = (undefined4)(thunk_FUN_114577f0(uVar2), 0);
    return (undefined4)(uVar2);
  }
  uVar2 = (undefined4)(thunk_FUN_114577f0(0), 0);
  return (undefined4)(uVar2);
}


// Reference entry 10c9c0f0; body size 36 bytes.
#line 1 "ENTRY_10c9c0f0"

void __thiscall Recovered_Bulk::m_FUN_10c9c0f0(SCStr *param_2)
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


// Reference entry 10c9c3f0; body size 53 bytes.
#line 1 "ENTRY_10c9c3f0"

void __fastcall FUN_10c9c3f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11457d80(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11457d80(uVar1);
    return;
  }
  thunk_FUN_11457d80(0);
  return;
}


// Reference entry 10c9c4d0; body size 59 bytes.
#line 1 "ENTRY_10c9c4d0"

undefined4 __fastcall FUN_10c9c4d0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24));
  if (iVar1 < 0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      return (undefined4)(0);
    }
    iVar1 = (int)(thunk_FUN_1034dc70(), 0);
  }
  if (0x16 < iVar1) {
    iVar1 = (int)(*(int *)(param_1 + 0x24));
    if (iVar1 < 0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        return (undefined4)(1);
      }
      iVar1 = (int)(thunk_FUN_1034dc70(), 0);
    }
    if (iVar1 != 0x18) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c9c640; body size 36 bytes.
#line 1 "ENTRY_10c9c640"

bool __fastcall FUN_10c9c640(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x24));
  if (iVar1 < 0) {
    if (*(int *)(param_1 + 0x70) != 0) {
      iVar1 = (int)(thunk_FUN_1034dc70(), 0);
      return (bool)(0x20 < iVar1);
    }
    iVar1 = (int)(-1);
  }
  return (bool)(0x20 < iVar1);
}


// Reference entry 10c9c6e0; body size 53 bytes.
#line 1 "ENTRY_10c9c6e0"

void __fastcall FUN_10c9c6e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11457f10(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11457f10(uVar1);
    return;
  }
  thunk_FUN_11457f10(0);
  return;
}


// Reference entry 10c9c980; body size 53 bytes.
#line 1 "ENTRY_10c9c980"

void __fastcall FUN_10c9c980(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11457fd0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11457fd0(uVar1);
    return;
  }
  thunk_FUN_11457fd0(0);
  return;
}


// Reference entry 10c9c9d0; body size 53 bytes.
#line 1 "ENTRY_10c9c9d0"

void __fastcall FUN_10c9c9d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11458020(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11458020(uVar1);
    return;
  }
  thunk_FUN_11458020(0);
  return;
}


// Reference entry 10c9ca20; body size 53 bytes.
#line 1 "ENTRY_10c9ca20"

void __fastcall FUN_10c9ca20(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_11458060(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_11458060(uVar1);
    return;
  }
  thunk_FUN_11458060(0);
  return;
}


// Reference entry 10c9cc60; body size 53 bytes.
#line 1 "ENTRY_10c9cc60"

void __fastcall FUN_10c9cc60(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    thunk_FUN_114580e0(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    thunk_FUN_114580e0(uVar1);
    return;
  }
  thunk_FUN_114580e0(0);
  return;
}


// Reference entry 10c9cf50; body size 51 bytes.
#line 1 "ENTRY_10c9cf50"

void __fastcall FUN_10c9cf50(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x74), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 0x70) = (undefined4)(0);
      *(undefined4*)(param_1 + 0x74) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 0x70) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x74) = (undefined4)(0);
  }
  return;
}


// Reference entry 10c9cfa0; body size 36 bytes.
#line 1 "ENTRY_10c9cfa0"

void __thiscall Recovered_Bulk::m_FUN_10c9cfa0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x2c));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10c9cfe0; body size 36 bytes.
#line 1 "ENTRY_10c9cfe0"

void __thiscall Recovered_Bulk::m_FUN_10c9cfe0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x30));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10ca17a0; body size 17 bytes.
#line 1 "ENTRY_10ca17a0"

void __fastcall FUN_10ca17a0(undefined4 *param_1)

{
  thunk_FUN_10c9db90(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10ca24a0; body size 38 bytes.
#line 1 "ENTRY_10ca24a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca24a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2610; body size 33 bytes.
#line 1 "ENTRY_10ca2610"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2610(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca28b0; body size 33 bytes.
#line 1 "ENTRY_10ca28b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca28b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca28e0; body size 33 bytes.
#line 1 "ENTRY_10ca28e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca28e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x10);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2910; body size 33 bytes.
#line 1 "ENTRY_10ca2910"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2910(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2940; body size 33 bytes.
#line 1 "ENTRY_10ca2940"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2a40; body size 33 bytes.
#line 1 "ENTRY_10ca2a40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2a40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2a70; body size 33 bytes.
#line 1 "ENTRY_10ca2a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2b90; body size 33 bytes.
#line 1 "ENTRY_10ca2b90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2bc0; body size 35 bytes.
#line 1 "ENTRY_10ca2bc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ca2bc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ca1bc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf0);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ca2bf0; body size 33 bytes.
#line 1 "ENTRY_10ca2bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2bf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2c20; body size 33 bytes.
#line 1 "ENTRY_10ca2c20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2c20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2c50; body size 33 bytes.
#line 1 "ENTRY_10ca2c50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2c80; body size 32 bytes.
#line 1 "ENTRY_10ca2c80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ca2c80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ca1e10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x44);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ca2cb0; body size 33 bytes.
#line 1 "ENTRY_10ca2cb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2cb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2ce0; body size 33 bytes.
#line 1 "ENTRY_10ca2ce0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2ce0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2d10; body size 33 bytes.
#line 1 "ENTRY_10ca2d10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2d40; body size 33 bytes.
#line 1 "ENTRY_10ca2d40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2d40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2d70; body size 33 bytes.
#line 1 "ENTRY_10ca2d70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2da0; body size 33 bytes.
#line 1 "ENTRY_10ca2da0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2da0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2dd0; body size 33 bytes.
#line 1 "ENTRY_10ca2dd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2dd0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2e00; body size 33 bytes.
#line 1 "ENTRY_10ca2e00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2e00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2f40; body size 33 bytes.
#line 1 "ENTRY_10ca2f40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2f40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca2f70; body size 33 bytes.
#line 1 "ENTRY_10ca2f70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2f70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca3260; body size 20 bytes.
#line 1 "ENTRY_10ca3260"

void __thiscall Recovered_Bulk::m_FUN_10ca3260(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10c9db90(param_2,param_3,param_1);
  return;
}


// Reference entry 10ca32c0; body size 52 bytes.
#line 1 "ENTRY_10ca32c0"

void __thiscall Recovered_Bulk::m_FUN_10ca32c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10ca3370();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10ca3b90; body size 37 bytes.
#line 1 "ENTRY_10ca3b90"

void __thiscall Recovered_Bulk::m_FUN_10ca3b90(int param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  if (*(int **)(param_1 + 0x28) == (int *)((0x0))) {
    iVar1 = (int)(0);
  }
  else {
    iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x28) + 0x20))(), 0);
  }
  if (iVar1 == param_2) {
    thunk_FUN_10cb1110();
  }
  return;
}


// Reference entry 10ca3bc0; body size 61 bytes.
#line 1 "ENTRY_10ca3bc0"

void __thiscall Recovered_Bulk::m_FUN_10ca3bc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10ca3ee0; body size 37 bytes.
#line 1 "ENTRY_10ca3ee0"

undefined1 __fastcall FUN_10ca3ee0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x58))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10ca3ff0; body size 37 bytes.
#line 1 "ENTRY_10ca3ff0"

undefined1 __fastcall FUN_10ca3ff0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x60))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10ca4250; body size 45 bytes.
#line 1 "ENTRY_10ca4250"

void __fastcall FUN_10ca4250(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_10c83fc0();
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    }
    *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  }
                    
                    
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  return;
}


// Reference entry 10ca42b0; body size 33 bytes.
#line 1 "ENTRY_10ca42b0"

void __fastcall FUN_10ca42b0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x54) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x54) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + 0x50) + 4))();
      return;
    }
  }
  return;
}


// Reference entry 10ca4b50; body size 42 bytes.
#line 1 "ENTRY_10ca4b50"

undefined4 * __fastcall FUN_10ca4b50(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateWizCompleteState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca4d90; body size 42 bytes.
#line 1 "ENTRY_10ca4d90"

undefined4 * __fastcall FUN_10ca4d90(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar1[1] = (undefined4)(param_1);
    puVar1[2] = (undefined4)(param_1);
    *puVar1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateInitState);
    return (undefined4 *)(puVar1);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca4dd0; body size 45 bytes.
#line 1 "ENTRY_10ca4dd0"

undefined4 * __fastcall FUN_10ca4dd0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca4e10; body size 45 bytes.
#line 1 "ENTRY_10ca4e10"

undefined4 * __fastcall FUN_10ca4e10(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5270; body size 45 bytes.
#line 1 "ENTRY_10ca5270"

undefined4 * __fastcall FUN_10ca5270(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5370; body size 45 bytes.
#line 1 "ENTRY_10ca5370"

undefined4 * __fastcall FUN_10ca5370(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5ac0; body size 45 bytes.
#line 1 "ENTRY_10ca5ac0"

undefined4 * __fastcall FUN_10ca5ac0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5b00; body size 45 bytes.
#line 1 "ENTRY_10ca5b00"

undefined4 * __fastcall FUN_10ca5b00(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca5e80; body size 45 bytes.
#line 1 "ENTRY_10ca5e80"

undefined4 * __fastcall FUN_10ca5e80(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateErrorState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca6210; body size 45 bytes.
#line 1 "ENTRY_10ca6210"

undefined4 * __fastcall FUN_10ca6210(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca67f0; body size 45 bytes.
#line 1 "ENTRY_10ca67f0"

undefined4 * __fastcall FUN_10ca67f0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10ca7710; body size 59 bytes.
#line 1 "ENTRY_10ca7710"

void __stdcall FUN_10ca7710(int param_1,int param_2)

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


// Reference entry 10ca7ef0; body size 34 bytes.
#line 1 "ENTRY_10ca7ef0"

uint FUN_10ca7ef0(void)

{
  SCLibrary *pSVar1;
  uint uVar2;
  
  pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  uVar2 = (uint)(0);
  if ((SCLibrary *)(pSVar1) != (SCLibrary *)(0x0)) {
    pSVar1 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
    uVar2 = (uint)((**(code **)(*(int *)pSVar1 + 0xf4))(), 0);
    if (uVar2 == 0) {
      return (uint)(1);
    }
  }
  return (uint)(uVar2 & 0xffffff00);
}


// Reference entry 10ca8360; body size 21 bytes.
#line 1 "ENTRY_10ca8360"

SCStr * __stdcall FUN_10ca8360(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("CUSTOM_SUB_WIZARD_SELF_UPDATE");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8b40; body size 34 bytes.
#line 1 "ENTRY_10ca8b40"

undefined4 __fastcall FUN_10ca8b40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
                    
                    
      uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc) + 0x14))(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ca8d00; body size 21 bytes.
#line 1 "ENTRY_10ca8d00"

SCStr * __stdcall FUN_10ca8d00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_NO_SECURE");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8d20; body size 21 bytes.
#line 1 "ENTRY_10ca8d20"

SCStr * __stdcall FUN_10ca8d20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_SECURE_INTRO");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8d40; body size 21 bytes.
#line 1 "ENTRY_10ca8d40"

SCStr * __stdcall FUN_10ca8d40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_WARNING");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8d60; body size 21 bytes.
#line 1 "ENTRY_10ca8d60"

SCStr * __stdcall FUN_10ca8d60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_CANCELED");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8d80; body size 21 bytes.
#line 1 "ENTRY_10ca8d80"

SCStr * __stdcall FUN_10ca8d80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_CHECK_FOR_UPDATES");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8da0; body size 21 bytes.
#line 1 "ENTRY_10ca8da0"

SCStr * __stdcall FUN_10ca8da0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_CHOICE");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8dc0; body size 21 bytes.
#line 1 "ENTRY_10ca8dc0"

SCStr * __stdcall FUN_10ca8dc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_COMPLETE");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8de0; body size 21 bytes.
#line 1 "ENTRY_10ca8de0"

SCStr * __stdcall FUN_10ca8de0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_CONTROLLER_NEEDS_UPDATING");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8e00; body size 21 bytes.
#line 1 "ENTRY_10ca8e00"

SCStr * __stdcall FUN_10ca8e00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_CONTROLLER_SELFUPDATE_SUBWIZ");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8e20; body size 21 bytes.
#line 1 "ENTRY_10ca8e20"

SCStr * __stdcall FUN_10ca8e20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_DEVICES_UPGRADE_IN_PROGRESS");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8e40; body size 21 bytes.
#line 1 "ENTRY_10ca8e40"

SCStr * __stdcall FUN_10ca8e40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_DEVICES_UPGRADED");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8e60; body size 21 bytes.
#line 1 "ENTRY_10ca8e60"

SCStr * __stdcall FUN_10ca8e60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_ERROR_INFO");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8e80; body size 21 bytes.
#line 1 "ENTRY_10ca8e80"

SCStr * __stdcall FUN_10ca8e80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_ERROR");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8ea0; body size 21 bytes.
#line 1 "ENTRY_10ca8ea0"

SCStr * __stdcall FUN_10ca8ea0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_FINISH_SECURE_REG");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8ec0; body size 21 bytes.
#line 1 "ENTRY_10ca8ec0"

SCStr * __stdcall FUN_10ca8ec0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_FINISH_SECURE_REG_FAILED");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8ee0; body size 21 bytes.
#line 1 "ENTRY_10ca8ee0"

SCStr * __stdcall FUN_10ca8ee0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_FINISHED");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8f00; body size 21 bytes.
#line 1 "ENTRY_10ca8f00"

SCStr * __stdcall FUN_10ca8f00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_INIT");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8f20; body size 21 bytes.
#line 1 "ENTRY_10ca8f20"

SCStr * __stdcall FUN_10ca8f20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_INTRODUCTION");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8f40; body size 21 bytes.
#line 1 "ENTRY_10ca8f40"

SCStr * __stdcall FUN_10ca8f40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_NO_INLINE_SELF_UPDATE");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8f60; body size 21 bytes.
#line 1 "ENTRY_10ca8f60"

SCStr * __stdcall FUN_10ca8f60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_NOT_REQUIRED");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8f80; body size 21 bytes.
#line 1 "ENTRY_10ca8f80"

SCStr * __stdcall FUN_10ca8f80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_PENDING");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8fa0; body size 21 bytes.
#line 1 "ENTRY_10ca8fa0"

SCStr * __stdcall FUN_10ca8fa0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_POST_UPDATE_REINDEXING_NEEDED");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8fc0; body size 21 bytes.
#line 1 "ENTRY_10ca8fc0"

SCStr * __stdcall FUN_10ca8fc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_RESUME_CONNECTING");
  return (SCStr *)(param_1);
}


// Reference entry 10ca8fe0; body size 21 bytes.
#line 1 "ENTRY_10ca8fe0"

SCStr * __stdcall FUN_10ca8fe0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("STATE_ONLINEUPDATE_SEC_REG_WARNING");
  return (SCStr *)(param_1);
}


// Reference entry 10ca92f0; body size 30 bytes.
#line 1 "ENTRY_10ca92f0"

undefined4 __fastcall FUN_10ca92f0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10ca9450; body size 26 bytes.
#line 1 "ENTRY_10ca9450"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ca9450(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xa0))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10ca9a70; body size 23 bytes.
#line 1 "ENTRY_10ca9a70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ca9a70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x7c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cb0e30; body size 21 bytes.
#line 1 "ENTRY_10cb0e30"

SCStr * __stdcall FUN_10cb0e30(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("OnlineUpdateWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10cb1020; body size 45 bytes.
#line 1 "ENTRY_10cb1020"

void __fastcall FUN_10cb1020(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_10c83fc0();
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    }
    *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  }
                    
                    
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  return;
}


// Reference entry 10cb1ab0; body size 24 bytes.
#line 1 "ENTRY_10cb1ab0"

undefined4 __fastcall FUN_10cb1ab0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xc) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xc) + 0x40))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10cb1c70; body size 39 bytes.
#line 1 "ENTRY_10cb1c70"

undefined4 __fastcall FUN_10cb1c70(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x9c))(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x6c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10cb2250; body size 63 bytes.
#line 1 "ENTRY_10cb2250"

undefined1 FUN_10cb2250(SCStr *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateChanged"), 0);
  if (!bVar1) {
    bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateTransitionsEnabled"), 0);
    if (!bVar1) {
      bVar1 = (bool)(((SCStr *)(param_1))->op_eq("SCIWizard:onStateUpdate"), 0);
      if (!bVar1) {
        return (undefined1)(0);
      }
    }
  }
  return (undefined1)(1);
}


// Reference entry 10cb2f70; body size 40 bytes.
#line 1 "ENTRY_10cb2f70"

void __fastcall FUN_10cb2f70(int param_1)

{
  thunk_FUN_104dec20();
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)((0x0))) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
  }
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  thunk_FUN_10cb1110();
  return;
}


// Reference entry 10cb3780; body size 61 bytes.
#line 1 "ENTRY_10cb3780"

void __fastcall FUN_10cb3780(int *param_1)

{
  char cVar1;
  
  if ((int *)param_1[3] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[3] + 0xcc))(param_1[5]);
    cVar1 = (char)((**(code **)(*(int *)param_1[3] + 0x30))(), 0);
    if (cVar1 == '\0') {
      cVar1 = (char)((**(code **)(*param_1 + 0x94))(), 0);
      if (cVar1 == '\0') {
        thunk_FUN_10ca7a80();
        return;
      }
    }
  }
  return;
}


// Reference entry 10cb3800; body size 45 bytes.
#line 1 "ENTRY_10cb3800"

void __fastcall FUN_10cb3800(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_10c83fc0();
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    }
    *(undefined4*)(param_1 + 0x20) = (undefined4)(0);
  }
                    
                    
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  return;
}


// Reference entry 10cb57c0; body size 20 bytes.
#line 1 "ENTRY_10cb57c0"

void __fastcall FUN_10cb57c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0xd8), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))(*(int *)(param_1 + 8));
  }
  return;
}


// Reference entry 10cb5cc0; body size 37 bytes.
#line 1 "ENTRY_10cb5cc0"

void __fastcall FUN_10cb5cc0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(thunk_FUN_111004d0(), 0);
  (**(code **)(**(int **)(param_1 + 8) + 0x228))(uVar1);
  return;
}


// Reference entry 10cb6550; body size 21 bytes.
#line 1 "ENTRY_10cb6550"

void __fastcall FUN_10cb6550(int param_1)

{
  if (*(int *)(param_1 + 0xd0) != 2) {
    thunk_FUN_110fa660();
    return;
  }
  return;
}


// Reference entry 10cb68f0; body size 50 bytes.
#line 1 "ENTRY_10cb68f0"

void __thiscall Recovered_Bulk::m_FUN_10cb68f0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 == 0) {
    FUN_1006aac8();
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x230))(0x44e);
  (**(code **)(**(int **)(param_1 + 8) + 0xb4))();
  return;
}


// Reference entry 10cb6c40; body size 18 bytes.
#line 1 "ENTRY_10cb6c40"

void __stdcall FUN_10cb6c40(int param_1, unsigned int recovered_unused_stack_0)

{
  if (param_1 == 0) {
    thunk_FUN_10dd4b80();
  }
  return;
}


// Reference entry 10cb6c60; body size 18 bytes.
#line 1 "ENTRY_10cb6c60"

void __stdcall FUN_10cb6c60(int param_1, unsigned int recovered_unused_stack_0)

{
  if (param_1 == 0) {
    FUN_1006aac8();
  }
  return;
}


// Reference entry 10cb7580; body size 30 bytes.
#line 1 "ENTRY_10cb7580"

undefined4 FUN_10cb7580(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_10ca43c0(), 0);
  if ((iVar1 != 1) && (iVar1 != 0x12)) {
    uVar2 = (undefined4)(thunk_FUN_10ca8700(), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10cb7a70; body size 41 bytes.
#line 1 "ENTRY_10cb7a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb7a70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cb7ab0; body size 41 bytes.
#line 1 "ENTRY_10cb7ab0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb7ab0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cb7af0; body size 41 bytes.
#line 1 "ENTRY_10cb7af0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb7af0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cb7b30; body size 41 bytes.
#line 1 "ENTRY_10cb7b30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb7b30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8b30; body size 60 bytes.
#line 1 "ENTRY_10cb8b30"

int __thiscall Recovered_Bulk::m_FUN_10cb8b30(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10cb8b80((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 10cb9320; body size 19 bytes.
#line 1 "ENTRY_10cb9320"

void __fastcall FUN_10cb9320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cb9340; body size 19 bytes.
#line 1 "ENTRY_10cb9340"

void __fastcall FUN_10cb9340(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10cb9410; body size 19 bytes.
#line 1 "ENTRY_10cb9410"

void __fastcall FUN_10cb9410(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10cb9730; body size 45 bytes.
#line 1 "ENTRY_10cb9730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb9730(byte param_2)
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


// Reference entry 10cb9810; body size 33 bytes.
#line 1 "ENTRY_10cb9810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb9810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cb9840; body size 25 bytes.
#line 1 "ENTRY_10cb9840"

void __fastcall FUN_10cb9840(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10cba030; body size 31 bytes.
#line 1 "ENTRY_10cba030"

int * FUN_10cba030(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = (char)(*(char *)(*param_1 + 0xd));
  piVar2 = (int *)((int *)*param_1);
  while (piVar3 = (int *)(piVar2), cVar1 == '\0') {
    piVar2 = (int *)((int *)*piVar3);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
    param_1 = (int *)(piVar3);
  }
  return (int *)(param_1);
}


// Reference entry 10cbaa00; body size 20 bytes.
#line 1 "ENTRY_10cbaa00"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cbaa00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10cbd320; body size 32 bytes.
#line 1 "ENTRY_10cbd320"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cbd320(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cbcd70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cbd350; body size 19 bytes.
#line 1 "ENTRY_10cbd350"

void __thiscall Recovered_Bulk::m_FUN_10cbd350(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cbd370; body size 21 bytes.
#line 1 "ENTRY_10cbd370"

void __thiscall Recovered_Bulk::m_FUN_10cbd370(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10cbd390; body size 21 bytes.
#line 1 "ENTRY_10cbd390"

void __stdcall FUN_10cbd390(undefined4 *param_1,undefined4 param_2)

{
  FUN_10cbcff0(*param_1,param_2);
  return;
}


// Reference entry 10cbd3c0; body size 19 bytes.
#line 1 "ENTRY_10cbd3c0"

void __thiscall Recovered_Bulk::m_FUN_10cbd3c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cbd990; body size 18 bytes.
#line 1 "ENTRY_10cbd990"

SCStr * __stdcall FUN_10cbd990(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10cbd9d0; body size 45 bytes.
#line 1 "ENTRY_10cbd9d0"

int * __thiscall Recovered_Bulk::m_FUN_10cbd9d0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_3 != 0) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(param_1 + 0x54), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cbda20; body size 20 bytes.
#line 1 "ENTRY_10cbda20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cbda20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x4c));
  return (SCStr *)(param_2);
}


// Reference entry 10cbda40; body size 18 bytes.
#line 1 "ENTRY_10cbda40"

SCStr * __stdcall FUN_10cbda40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10cbda80; body size 18 bytes.
#line 1 "ENTRY_10cbda80"

bool __thiscall Recovered_Bulk::m_FUN_10cbda80(int param_2)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(false);
  if (param_2 != 5) {
    bVar1 = (bool)(*(int *)(param_1 + 0x5c) != 0);
  }
  return (bool)(bVar1);
}


// Reference entry 10cbdac0; body size 18 bytes.
#line 1 "ENTRY_10cbdac0"

SCStr * __stdcall FUN_10cbdac0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10cbfe00; body size 53 bytes.
#line 1 "ENTRY_10cbfe00"

void __thiscall Recovered_Bulk::m_FUN_10cbfe00(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x38))(*(undefined4 *)(param_1 + 4));
  }
  thunk_FUN_112af4e0("cloud_discovery",1, "Aborting cloud discovery : Failed to refresh the auth token");
  *(undefined4*)(param_1 + 0x504) = (undefined4)(0);
  return;
}


// Reference entry 10cc0cd0; body size 41 bytes.
#line 1 "ENTRY_10cc0cd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc0cd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cc1280; body size 19 bytes.
#line 1 "ENTRY_10cc1280"

void __fastcall FUN_10cc1280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cc1990; body size 38 bytes.
#line 1 "ENTRY_10cc1990"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc1990(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cc19c0; body size 38 bytes.
#line 1 "ENTRY_10cc19c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc19c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cc19f0; body size 45 bytes.
#line 1 "ENTRY_10cc19f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc19f0(byte param_2)
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


// Reference entry 10cc1a30; body size 32 bytes.
#line 1 "ENTRY_10cc1a30"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cc1a30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cc12a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cc1a60; body size 58 bytes.
#line 1 "ENTRY_10cc1a60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc1a60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe960);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cc1ab0; body size 32 bytes.
#line 1 "ENTRY_10cc1ab0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cc1ab0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cc1570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x74);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cc1ae0; body size 33 bytes.
#line 1 "ENTRY_10cc1ae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc1ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cc1b10; body size 45 bytes.
#line 1 "ENTRY_10cc1b10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc1b10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetAboutSonosString);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetAboutSonosString);
  thunk_FUN_10cc12a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cc2280; body size 23 bytes.
#line 1 "ENTRY_10cc2280"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cc2280(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x58));
  return (SCStr *)(param_2);
}


// Reference entry 10cc23f0; body size 35 bytes.
#line 1 "ENTRY_10cc23f0"

SCStr * __stdcall FUN_10cc23f0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1fd1,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10cc2440; body size 23 bytes.
#line 1 "ENTRY_10cc2440"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cc2440(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x50));
  return (SCStr *)(param_2);
}


// Reference entry 10cc2830; body size 23 bytes.
#line 1 "ENTRY_10cc2830"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cc2830(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x54));
  return (SCStr *)(param_2);
}


// Reference entry 10cc2850; body size 21 bytes.
#line 1 "ENTRY_10cc2850"

SCStr * __stdcall FUN_10cc2850(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cc2a70; body size 23 bytes.
#line 1 "ENTRY_10cc2a70"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cc2a70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10ccca00; body size 38 bytes.
#line 1 "ENTRY_10ccca00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccca00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccca30; body size 38 bytes.
#line 1 "ENTRY_10ccca30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccca30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccca60; body size 38 bytes.
#line 1 "ENTRY_10ccca60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccca60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccca90; body size 38 bytes.
#line 1 "ENTRY_10ccca90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccca90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cccac0; body size 38 bytes.
#line 1 "ENTRY_10cccac0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cccac0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cccaf0; body size 38 bytes.
#line 1 "ENTRY_10cccaf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cccaf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cccb20; body size 38 bytes.
#line 1 "ENTRY_10cccb20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cccb20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cccb50; body size 38 bytes.
#line 1 "ENTRY_10cccb50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cccb50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cccb80; body size 38 bytes.
#line 1 "ENTRY_10cccb80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cccb80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cccbb0; body size 38 bytes.
#line 1 "ENTRY_10cccbb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cccbb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cccbe0; body size 32 bytes.
#line 1 "ENTRY_10cccbe0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccbe0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cca490();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccc10; body size 32 bytes.
#line 1 "ENTRY_10cccc10"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccc10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cca5e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccc40; body size 32 bytes.
#line 1 "ENTRY_10cccc40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccc40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cca730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccc70; body size 32 bytes.
#line 1 "ENTRY_10cccc70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccc70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cca880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccca0; body size 32 bytes.
#line 1 "ENTRY_10cccca0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccca0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cca9d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ccccd0; body size 32 bytes.
#line 1 "ENTRY_10ccccd0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ccccd0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccab20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccd00; body size 32 bytes.
#line 1 "ENTRY_10cccd00"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccd00(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccac70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccd30; body size 32 bytes.
#line 1 "ENTRY_10cccd30"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccd30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccadc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccd60; body size 32 bytes.
#line 1 "ENTRY_10cccd60"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccd60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccaf10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccd90; body size 35 bytes.
#line 1 "ENTRY_10cccd90"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccd90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccb140();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6244);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccdc0; body size 35 bytes.
#line 1 "ENTRY_10cccdc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccdc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccb300();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6134);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccdf0; body size 35 bytes.
#line 1 "ENTRY_10cccdf0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccdf0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccb440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6230);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ccce20; body size 35 bytes.
#line 1 "ENTRY_10ccce20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ccce20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccb560();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6248);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ccce50; body size 35 bytes.
#line 1 "ENTRY_10ccce50"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ccce50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccb720();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x623c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ccce80; body size 35 bytes.
#line 1 "ENTRY_10ccce80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ccce80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccb8a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6160);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ccceb0; body size 35 bytes.
#line 1 "ENTRY_10ccceb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ccceb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccba90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6240);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cccee0; body size 32 bytes.
#line 1 "ENTRY_10cccee0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cccee0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ccbc10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x5c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ccd610; body size 45 bytes.
#line 1 "ENTRY_10ccd610"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccd610(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpUpdateVoiceAccountData);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpUpdateVoiceAccountData);
  thunk_FUN_10cca490();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccd6f0; body size 45 bytes.
#line 1 "ENTRY_10ccd6f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccd6f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceAcctWakeWordSet);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceAcctWakeWordSet);
  thunk_FUN_10ccadc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccd730; body size 45 bytes.
#line 1 "ENTRY_10ccd730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccd730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAlexaROWLocale);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAlexaROWLocale);
  thunk_FUN_10cca5e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccd770; body size 45 bytes.
#line 1 "ENTRY_10ccd770"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccd770(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonChallenge);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonChallenge);
  thunk_FUN_10cca730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccd7b0; body size 45 bytes.
#line 1 "ENTRY_10ccd7b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccd7b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonSkillAuthCode);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonSkillAuthCode);
  thunk_FUN_10cca880();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccd7f0; body size 45 bytes.
#line 1 "ENTRY_10ccd7f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccd7f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAuthenticate);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAuthenticate);
  thunk_FUN_10cca9d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccd940; body size 45 bytes.
#line 1 "ENTRY_10ccd940"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccd940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceDeleteAccount);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceDeleteAccount);
  thunk_FUN_10ccaf10();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccda20; body size 45 bytes.
#line 1 "ENTRY_10ccda20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ccda20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceNotifyInitiateOnboarding);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceNotifyInitiateOnboarding);
  thunk_FUN_10ccac70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ccf340; body size 47 bytes.
#line 1 "ENTRY_10ccf340"

void __fastcall FUN_10ccf340(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c), 0);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20), 0);
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


// Reference entry 10cd3610; body size 17 bytes.
#line 1 "ENTRY_10cd3610"

undefined1 * __fastcall FUN_10cd3610(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x623c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x623c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3630; body size 17 bytes.
#line 1 "ENTRY_10cd3630"

undefined1 * __fastcall FUN_10cd3630(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6228) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6228), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3650; body size 17 bytes.
#line 1 "ENTRY_10cd3650"

undefined1 * __fastcall FUN_10cd3650(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6234) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6234), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3670; body size 17 bytes.
#line 1 "ENTRY_10cd3670"

undefined1 * __fastcall FUN_10cd3670(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6234) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6234), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd36f0; body size 17 bytes.
#line 1 "ENTRY_10cd36f0"

undefined1 * __fastcall FUN_10cd36f0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6238) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6238), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd37b0; body size 31 bytes.
#line 1 "ENTRY_10cd37b0"

int * __thiscall Recovered_Bulk::m_FUN_10cd37b0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x18) + 0x6260), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd3820; body size 25 bytes.
#line 1 "ENTRY_10cd3820"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3820(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x625c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a90; body size 25 bytes.
#line 1 "ENTRY_10cd3a90"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3a90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6160));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3c40; body size 31 bytes.
#line 1 "ENTRY_10cd3c40"

int * __thiscall Recovered_Bulk::m_FUN_10cd3c40(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x18) + 0x6274), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd3cc0; body size 21 bytes.
#line 1 "ENTRY_10cd3cc0"

SCStr * __stdcall FUN_10cd3cc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cd3ce0; body size 21 bytes.
#line 1 "ENTRY_10cd3ce0"

SCStr * __stdcall FUN_10cd3ce0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cd3d00; body size 21 bytes.
#line 1 "ENTRY_10cd3d00"

SCStr * __stdcall FUN_10cd3d00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cd3d20; body size 21 bytes.
#line 1 "ENTRY_10cd3d20"

SCStr * __stdcall FUN_10cd3d20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cd3d40; body size 21 bytes.
#line 1 "ENTRY_10cd3d40"

SCStr * __stdcall FUN_10cd3d40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cd3d60; body size 21 bytes.
#line 1 "ENTRY_10cd3d60"

SCStr * __stdcall FUN_10cd3d60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cd3d80; body size 21 bytes.
#line 1 "ENTRY_10cd3d80"

SCStr * __stdcall FUN_10cd3d80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cd3da0; body size 21 bytes.
#line 1 "ENTRY_10cd3da0"

SCStr * __stdcall FUN_10cd3da0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cd3dc0; body size 21 bytes.
#line 1 "ENTRY_10cd3dc0"

SCStr * __stdcall FUN_10cd3dc0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cd4010; body size 57 bytes.
#line 1 "ENTRY_10cd4010"

int * __thiscall Recovered_Bulk::m_FUN_10cd4010(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((int)(param_3) < *(int *)(*(int *)(param_1 + 0x18) + 0x617c)) {
    piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x18) + 0x6164 + param_3 * 8), 0);
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10cd7cb0; body size 31 bytes.
#line 1 "ENTRY_10cd7cb0"

void __thiscall Recovered_Bulk::m_FUN_10cd7cb0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x38))(*(undefined4 *)(param_1 + 4));
  }
  thunk_FUN_10cd9930();
  return;
}


// Reference entry 10cd9af0; body size 43 bytes.
#line 1 "ENTRY_10cd9af0"

void __thiscall Recovered_Bulk::m_FUN_10cd9af0(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x2c) + 4))(param_1 + 8,param_2), 0);
    *(undefined4*)(param_1 + 0x30) = (undefined4)(uVar1);
  }
  (**(code **)(*(int *)(param_1 + 0x44) + 0x14))();
  return;
}


// Reference entry 10cdaa70; body size 44 bytes.
#line 1 "ENTRY_10cdaa70"

void __thiscall Recovered_Bulk::m_FUN_10cdaa70(undefined4 param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(undefined4 **)(param_1 + 0x1c), 0);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20), 0);
  if ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1)) {
    do {
      (**(code **)(*(int *)*puVar2 + 4))(param_1 + 8,param_2);
      puVar2 = (undefined4 *)(puVar2 + 1);
    } while ((undefined4 *)((puVar2)) != (undefined4 *)(puVar1));
  }
  return;
}


// Reference entry 10cdb1d0; body size 41 bytes.
#line 1 "ENTRY_10cdb1d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdb1d0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb210; body size 41 bytes.
#line 1 "ENTRY_10cdb210"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdb210(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb250; body size 41 bytes.
#line 1 "ENTRY_10cdb250"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdb250(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdbb30; body size 19 bytes.
#line 1 "ENTRY_10cdbb30"

void __fastcall FUN_10cdbb30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdbb50; body size 19 bytes.
#line 1 "ENTRY_10cdbb50"

void __fastcall FUN_10cdbb50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdbb70; body size 19 bytes.
#line 1 "ENTRY_10cdbb70"

void __fastcall FUN_10cdbb70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdc070; body size 33 bytes.
#line 1 "ENTRY_10cdc070"

void __fastcall FUN_10cdc070(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cdc0a0; body size 33 bytes.
#line 1 "ENTRY_10cdc0a0"

void __fastcall FUN_10cdc0a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cdc3e0; body size 37 bytes.
#line 1 "ENTRY_10cdc3e0"

int * __fastcall FUN_10cdc3e0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10cdc590; body size 38 bytes.
#line 1 "ENTRY_10cdc590"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc590(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdc5c0; body size 38 bytes.
#line 1 "ENTRY_10cdc5c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc5c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdc5f0; body size 38 bytes.
#line 1 "ENTRY_10cdc5f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc5f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdc620; body size 45 bytes.
#line 1 "ENTRY_10cdc620"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc620(byte param_2)
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


// Reference entry 10cdc660; body size 45 bytes.
#line 1 "ENTRY_10cdc660"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc660(byte param_2)
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


// Reference entry 10cdc6a0; body size 45 bytes.
#line 1 "ENTRY_10cdc6a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc6a0(byte param_2)
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


// Reference entry 10cdc6e0; body size 32 bytes.
#line 1 "ENTRY_10cdc6e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cdc6e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cdbb90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cdc710; body size 32 bytes.
#line 1 "ENTRY_10cdc710"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cdc710(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cdbce0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cdc740; body size 32 bytes.
#line 1 "ENTRY_10cdc740"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cdc740(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cdbe30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cdc770; body size 58 bytes.
#line 1 "ENTRY_10cdc770"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc770(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7e0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdc7c0; body size 58 bytes.
#line 1 "ENTRY_10cdc7c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc7c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdc810; body size 58 bytes.
#line 1 "ENTRY_10cdc810"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc810(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  thunk_FUN_111c0af0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xd7d0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdc940; body size 33 bytes.
#line 1 "ENTRY_10cdc940"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdc970; body size 33 bytes.
#line 1 "ENTRY_10cdc970"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc970(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdc9a0; body size 33 bytes.
#line 1 "ENTRY_10cdc9a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc9a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdc9d0; body size 33 bytes.
#line 1 "ENTRY_10cdc9d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdc9d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIndexListenerCallback);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdcb60; body size 45 bytes.
#line 1 "ENTRY_10cdcb60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdcb60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockGetDailyIndexRefreshTime);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockGetDailyIndexRefreshTime);
  thunk_FUN_10cdbb90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdcba0; body size 45 bytes.
#line 1 "ENTRY_10cdcba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdcba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockSetDailyIndexRefreshTime);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockSetDailyIndexRefreshTime);
  thunk_FUN_10cdbce0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdcc40; body size 33 bytes.
#line 1 "ENTRY_10cdcc40"

void __fastcall FUN_10cdcc40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cdd550; body size 28 bytes.
#line 1 "ENTRY_10cdd550"

void __fastcall FUN_10cdd550(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(), 0);
  if (cVar1 != '\0') {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x24) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10cddac0; body size 20 bytes.
#line 1 "ENTRY_10cddac0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cddac0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SwfStr *)(param_1 + 0x44));
  return (SCStr *)(param_2);
}


// Reference entry 10cddbe0; body size 21 bytes.
#line 1 "ENTRY_10cddbe0"

SCStr * __stdcall FUN_10cddbe0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cddc00; body size 21 bytes.
#line 1 "ENTRY_10cddc00"

SCStr * __stdcall FUN_10cddc00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cddc50; body size 19 bytes.
#line 1 "ENTRY_10cddc50"

void __fastcall FUN_10cddc50(undefined4 param_1)

{
  thunk_FUN_11128910();
  FUN_10070892(param_1);
  return;
}


// Reference entry 10cddc70; body size 19 bytes.
#line 1 "ENTRY_10cddc70"

void __fastcall FUN_10cddc70(undefined4 param_1)

{
  thunk_FUN_11128910();
  FUN_10065348(param_1);
  return;
}


// Reference entry 10cde1e0; body size 18 bytes.
#line 1 "ENTRY_10cde1e0"

undefined1 __fastcall FUN_10cde1e0(int param_1)

{
  if ((*(char *)(param_1 + 0x3c) == '\0') && (*(char *)(param_1 + 0x3d) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10cde200; body size 24 bytes.
#line 1 "ENTRY_10cde200"

undefined1 __fastcall FUN_10cde200(int param_1)

{
  if ((*(char *)(param_1 + 0x3f) == '\0') && (*(char *)(param_1 + 0x40) == '\0')) {
    thunk_FUN_10cddd80();
    return (undefined1)(0);
  }
  return (undefined1)(*(undefined1 *)(param_1 + 0x3e));
}


// Reference entry 10cdf040; body size 39 bytes.
#line 1 "ENTRY_10cdf040"

int __fastcall FUN_10cdf040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(9);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("CurrentDailyIndexRefreshTime");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 10cdf070; body size 38 bytes.
#line 1 "ENTRY_10cdf070"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cdf070(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("DesiredDailyIndexRefreshTime",0), 0);
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10cdf0a0; body size 38 bytes.
#line 1 "ENTRY_10cdf0a0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cdf0a0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)thunk_FUN_1124ffa0("AlbumArtistDisplayOption",0), 0);
  (**(code **)(*piVar1 + 0xc))(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10cdf0d0; body size 35 bytes.
#line 1 "ENTRY_10cdf0d0"

void __fastcall FUN_10cdf0d0(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  *(undefined1*)(param_1 + 0x3d) = (undefined1)(1);
  iStack_14 = (int)(param_1);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIIndexManager:onIndexEvent");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10cdf240; body size 61 bytes.
#line 1 "ENTRY_10cdf240"

void __fastcall FUN_10cdf240(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(param_1 + -4);
  uVar1 = (undefined4)(thunk_FUN_110b2900(param_1 + -4,"RINCON_AssociatedZPUDN",&DAT_1189bdd4,0), 0);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(uVar1);
  return;
}


// Reference entry 10cdfa20; body size 61 bytes.
#line 1 "ENTRY_10cdfa20"

void FUN_10cdfa20(void)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  thunk_FUN_111a36f0(DAT_12126b84 ^ (uint)&stack0xfffffffc);

  return;

 } catch (...) { }
}


// Reference entry 10cdfcc0; body size 25 bytes.
#line 1 "ENTRY_10cdfcc0"

undefined4 FUN_10cdfcc0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_111a3630(), 0);
  if (iVar1 == 6) {
    uVar2 = (undefined4)(thunk_FUN_111a2ec0(), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10cdfce0; body size 25 bytes.
#line 1 "ENTRY_10cdfce0"

undefined4 FUN_10cdfce0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(thunk_FUN_111a3630(), 0);
  if (iVar1 == 2) {
    uVar2 = (undefined4)(thunk_FUN_111a32a0(), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10cdfd00; body size 45 bytes.
#line 1 "ENTRY_10cdfd00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdfd00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cdfd40; body size 32 bytes.
#line 1 "ENTRY_10cdfd40"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cdfd40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cdfa80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x38);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cdfda0; body size 59 bytes.
#line 1 "ENTRY_10cdfda0"

void __thiscall Recovered_Bulk::m_FUN_10cdfda0(int param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
    if (iVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return;
}


// Reference entry 10cdffe0; body size 33 bytes.
#line 1 "ENTRY_10cdffe0"

void __stdcall FUN_10cdffe0(undefined4 param_1,SCStr *param_2)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_eq("SCIHousehold:onZoneGroupsChanged"), 0);
  if (bVar1) {
    thunk_FUN_10ce04e0();
  }
  return;
}


// Reference entry 10ce0010; body size 43 bytes.
#line 1 "ENTRY_10ce0010"

void __fastcall FUN_10ce0010(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10ce0060; body size 18 bytes.
#line 1 "ENTRY_10ce0060"

undefined4 __fastcall FUN_10ce0060(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1113f590(0), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10ce07c0; body size 17 bytes.
#line 1 "ENTRY_10ce07c0"

void __stdcall FUN_10ce07c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged");
  return;
}


// Reference entry 10ce0ad0; body size 46 bytes.
#line 1 "ENTRY_10ce0ad0"

void __thiscall Recovered_Bulk::m_FUN_10ce0ad0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x34));
  if (iVar1 != 0) {
    iVar2 = (int)(thunk_FUN_1113f590(0), 0);
    if (iVar2 != 0) {
      thunk_FUN_10ce00f0(iVar1,iVar2,1,param_2,1);
    }
  }
  return;
}


// Reference entry 10ce0d90; body size 41 bytes.
#line 1 "ENTRY_10ce0d90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce0d90(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce0dd0; body size 41 bytes.
#line 1 "ENTRY_10ce0dd0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce0dd0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce10b0; body size 19 bytes.
#line 1 "ENTRY_10ce10b0"

void __fastcall FUN_10ce10b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce10d0; body size 19 bytes.
#line 1 "ENTRY_10ce10d0"

void __fastcall FUN_10ce10d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce1480; body size 45 bytes.
#line 1 "ENTRY_10ce1480"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce1480(byte param_2)
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


// Reference entry 10ce14c0; body size 45 bytes.
#line 1 "ENTRY_10ce14c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce14c0(byte param_2)
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


// Reference entry 10ce1500; body size 32 bytes.
#line 1 "ENTRY_10ce1500"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ce1500(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ce10f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ce1530; body size 33 bytes.
#line 1 "ENTRY_10ce1530"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce1530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce1560; body size 33 bytes.
#line 1 "ENTRY_10ce1560"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce1560(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce16b0; body size 45 bytes.
#line 1 "ENTRY_10ce16b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce16b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetUsageDataShareOption);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetUsageDataShareOption);
  thunk_FUN_10ce10f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce1960; body size 21 bytes.
#line 1 "ENTRY_10ce1960"

SCStr * __stdcall FUN_10ce1960(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpGetStr instance");
  return (SCStr *)(param_1);
}


// Reference entry 10ce1980; body size 21 bytes.
#line 1 "ENTRY_10ce1980"

SCStr * __stdcall FUN_10ce1980(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpGetUsageDataShareOption");
  return (SCStr *)(param_1);
}


// Reference entry 10ce19c0; body size 21 bytes.
#line 1 "ENTRY_10ce19c0"

SCStr * __stdcall FUN_10ce19c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ce19e0; body size 21 bytes.
#line 1 "ENTRY_10ce19e0"

SCStr * __stdcall FUN_10ce19e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ce1a00; body size 21 bytes.
#line 1 "ENTRY_10ce1a00"

SCStr * __stdcall FUN_10ce1a00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ce1a40; body size 33 bytes.
#line 1 "ENTRY_10ce1a40"

SCStr * __thiscall Recovered_Bulk::m_FUN_10ce1a40(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)(*(char **)(*(int *)(param_1 + 0x18) + 0x44), 0);
  pcVar2 = (char *)("");
  if ((char *)(pcVar1) != (char *)(0x0)) {
    pcVar2 = (char *)(pcVar1);
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10ce22e0; body size 41 bytes.
#line 1 "ENTRY_10ce22e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce22e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce2450; body size 19 bytes.
#line 1 "ENTRY_10ce2450"

void __fastcall FUN_10ce2450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce2600; body size 38 bytes.
#line 1 "ENTRY_10ce2600"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce2600(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce2630; body size 45 bytes.
#line 1 "ENTRY_10ce2630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce2630(byte param_2)
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


// Reference entry 10ce2670; body size 33 bytes.
#line 1 "ENTRY_10ce2670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce2670(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce28e0; body size 21 bytes.
#line 1 "ENTRY_10ce28e0"

SCStr * __stdcall FUN_10ce28e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpGetRDM instance");
  return (SCStr *)(param_1);
}


// Reference entry 10ce2940; body size 21 bytes.
#line 1 "ENTRY_10ce2940"

SCStr * __stdcall FUN_10ce2940(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ce3280; body size 59 bytes.
#line 1 "ENTRY_10ce3280"

void __thiscall Recovered_Bulk::m_FUN_10ce3280(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10ce2d60(puVar1,param_2);
  return;
}


// Reference entry 10ce34f0; body size 17 bytes.
#line 1 "ENTRY_10ce34f0"

void __fastcall FUN_10ce34f0(undefined4 *param_1)

{
  thunk_FUN_10ce2c30(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10ce37b0; body size 45 bytes.
#line 1 "ENTRY_10ce37b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce37b0(byte param_2)
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


// Reference entry 10ce39c0; body size 20 bytes.
#line 1 "ENTRY_10ce39c0"

void __thiscall Recovered_Bulk::m_FUN_10ce39c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ce2c30(param_2,param_3,param_1);
  return;
}


// Reference entry 10ce3d30; body size 24 bytes.
#line 1 "ENTRY_10ce3d30"

void __fastcall FUN_10ce3d30(undefined4 *param_1)

{
  thunk_FUN_10ce2c30(*param_1,param_1[1],param_1);
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10ce3d50; body size 60 bytes.
#line 1 "ENTRY_10ce3d50"

void __stdcall FUN_10ce3d50(int param_1,int param_2)

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


// Reference entry 10ce3da0; body size 21 bytes.
#line 1 "ENTRY_10ce3da0"

SCStr * __stdcall FUN_10ce3da0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("NavigateToRoomsMenu");
  return (SCStr *)(param_1);
}


// Reference entry 10ce3ee0; body size 21 bytes.
#line 1 "ENTRY_10ce3ee0"

SCStr * __stdcall FUN_10ce3ee0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10ce4000; body size 63 bytes.
#line 1 "ENTRY_10ce4000"

int * __thiscall Recovered_Bulk::m_FUN_10ce4000(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x84) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10ce4060; body size 21 bytes.
#line 1 "ENTRY_10ce4060"

SCStr * __stdcall FUN_10ce4060(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10ce4080; body size 16 bytes.
#line 1 "ENTRY_10ce4080"

int __fastcall FUN_10ce4080(int param_1)

{
  return (int)(*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 3);
}


// Reference entry 10ce42a0; body size 35 bytes.
#line 1 "ENTRY_10ce42a0"

SCStr * __stdcall FUN_10ce42a0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1b0,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10ce4550; body size 24 bytes.
#line 1 "ENTRY_10ce4550"

void __fastcall FUN_10ce4550(int param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  SCLibrary *this_;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int **ppiVar11;
  int *piStack_50;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 *puStack_2c;
  int *piStack_28;
  SCLibParameters *pSStack_24;
  uint uStack_20;
  int iStack_1c;
  char cStack_15;
  char cStack_14;
  char cStack_13;
  bool bStack_12;
  bool bStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  if ((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) & 0xfffffff8U) != 0) {
    return;
  }

  piVar10 = (int *)((int *)0x0);


  piStack_44 = (int *)((int *)0x0);
  piStack_40 = (int *)((int *)0x0);

  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x84));
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(1);
  *(unsigned short*)((char *)&uStack_8 + 1) = (unsigned short)(0);
  puStack_2c = (undefined4 *)(puVar1);
  iStack_1c = (int)(param_1);
  if (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 3 != 0) {
    thunk_FUN_10ce2c30(*(int *)(param_1 + 0x84),*(int *)(param_1 + 0x88),puVar1, DAT_12126b84 ^ (uint)&stack0xfffffffc);
    *(undefined4*)(param_1 + 0x88) = (undefined4)(*puVar1);
  }
  this_ = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  pSStack_24 = (SCLibParameters *)(*(SCLibParameters **)(this_ + 0x4c), 0);
  ppiVar11 = (int **)(&piStack_30);
  piVar5 = (int *)((int *)((SCLibrary *)(this_))->getSCHousehold(), 0);
  piVar2 = (int *)((int *)*piVar5);
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(2);
  *piVar5 = (int)(0);
  if ((int *)(piVar2) == (int *)(0x0)) {
    piStack_50 = (int *)((int *)0x0);
  }
  else {
    piStack_50 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(ppiVar11), 0);
  }
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(5);
  if ((int *)(piStack_30) != (int *)(0x0)) {
    (**(code **)(*piStack_30 + 8))();
  }
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(4);
  piVar5 = (int *)((int *)thunk_FUN_102518f0(&piStack_28), 0);
  piVar2 = (int *)((int *)*piVar5);
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(6);
  *piVar5 = (int)(0);
  if ((int *)(piVar2) == (int *)(0x0)) {
    piStack_48 = (int *)((int *)0x0);
  }
  else {
    piStack_48 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(), 0);
  }
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(9);
  if ((int *)(piStack_28) != (int *)(0x0)) {
    (**(code **)(*piStack_28 + 8))();
  }
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(8);
  iVar6 = (int)((**(code **)(*(int *)this_ + 0xf4))(), 0);
  cStack_15 = (char)(iVar6 == 0);
  thunk_FUN_1109f7f0();
  thunk_FUN_110a0140();
  uVar7 = (undefined4)(FUN_10ce5120(), 0);
  *(undefined4*)(iStack_1c + 0x94) = (undefined4)(uVar7);
  uVar7 = (undefined4)(thunk_FUN_110828b0(), 0);
  thunk_FUN_11131cc0(uVar7,2,0);
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(10);
  iVar6 = (int)(thunk_FUN_11132ba0(), 0);
  *(bool*)(iStack_1c + 0x98) = (bool)(iVar6 != 0);
  iVar6 = (int)(thunk_FUN_11081b20(2), 0);
  iVar8 = (int)(thunk_FUN_11132ba0(), 0);
  piStack_30 = (int *)((int *)0x0);
  uVar9 = (uint)(0);
  *(bool*)(iStack_1c + 0x99) = (bool)(iVar6 == iVar8);
  do {
    uVar3 = (uint)(*(uint *)(iStack_1c + 0x94));
    if (uVar3 < 8) {
      bStack_12 = (bool)(*(int *)(&DAT_12119fa8 + (uVar3 + (int)piStack_30) * 4) == 1);
      bStack_11 = (bool)(*(int *)(&DAT_12119fa8 + (uVar3 + (int)piStack_30) * 4) == 0);
    }
    else {
      bStack_12 = (bool)(false);
      bStack_11 = (bool)(false);
    }
    cStack_14 = (char)((&DAT_12119fc8)[uVar9]);
    iVar6 = (int)(*(int *)((int)&DAT_12119fc0 + uVar9));
    if ((&DAT_12119fa4)[uVar9] == '\0') {
LAB_10ce4993:
      cStack_13 = (char)('\0');
    }
    else {
      if (((*(char **)((int)&DAT_12119fcc + uVar9) != (char *)((0x0))) &&
          (**(char **)((int)&DAT_12119fcc + uVar9) != '\0')) &&
         (bVar4 = (bool)(((SCLibParameters *)(pSStack_24))->hasDeveloperOption((SCStr *)((int)&DAT_12119fcc + uVar9)), 0), !bVar4)) goto LAB_10ce4993;
      cStack_13 = (char)('\x01');
    }
    iVar8 = (int)(FUN_10ce5120(), 0);
    if (((iVar8 == 5) && (bStack_12 != false)) && ((SCLibParameters *)(pSStack_24) != (SCLibParameters *)(0x0))) {
      ((SCStr *)((SCStr *)&piStack_28))->int_allocRep("UnavailableSettings");
      uStack_38 = (uint)(uStack_20 | 1);
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0xb)));
      uStack_20 = (uint)(uStack_38);
      bVar4 = (bool)(((SCLibParameters *)(pSStack_24))->hasDeveloperOption((SCStr *)&piStack_28), 0);
      bStack_12 = (bool)(true);
      if (!bVar4) goto LAB_10ce49de;
    }
    else {
LAB_10ce49de:
      bStack_12 = (bool)(false);
    }
    *(unsigned short*)((char *)&uStack_8 + 1) = (unsigned short)(0);
    if ((uStack_20 & 1) != 0) {
      uStack_20 = (uint)(uStack_20 & 0xfffffffe);
      *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(0xc);
      *(unsigned short*)((char *)&uStack_8 + 1) = (unsigned short)(0);
      ((SCStr *)((SCStr *)&piStack_28))->int_release();
      piStack_28 = (int *)((int *)0x0);
    }
    *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(10);
    if (cStack_13 != '\0') {
      if (cStack_15 == '\0') {
        if (iVar6 != 0) {
          if (cStack_14 == '\0') goto LAB_10ce4a2f;
          goto LAB_10ce4a35;
        }
        if (cStack_14 == '\0') goto LAB_10ce4a2f;
      }
      else {
LAB_10ce4a2f:
        if (bStack_11 == false) {
LAB_10ce4a35:
          if (bStack_12 == false) goto LAB_10ce4ae5;
        }
      }
      piVar5 = (int *)((int *)(**(code **)((int)&PTR_FUN_12119fa0 + uVar9))(&piStack_3c,iStack_1c), 0);
      piVar2 = (int *)((int *)*piVar5);
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0xd)));
      *piVar5 = (int)(0);
      if ((int *)(piVar10) != (int *)(0x0)) {
        piStack_44 = (int *)((int *)0x0);
        piStack_40 = (int *)((int *)0x0);
        (**(code **)(*piVar10 + 8))();
      }
      piStack_44 = (int *)(piVar2);
      if ((int *)(piVar2) == (int *)(0x0)) {
        piVar10 = (int *)((int *)0x0);
      }
      else {
        piVar10 = (int *)((int *)(**(code **)(*piVar2 + 0xc))(), 0);
      }
      *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(0xe);
      piStack_40 = (int *)(piVar10);
      if ((int *)(piStack_3c) != (int *)(0x0)) {
        (**(code **)(*piStack_3c + 8))();
      }
      *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(10);
      if ((int *)(piVar2) != (int *)(0x0)) {
        if (bStack_12 != false) {
          (**(code **)(*piVar2 + 0xcc))(0);
        }
        piVar5 = (int *)((int *)puStack_2c[1]);
        if ((int *)(piVar5) == (int *)puStack_2c[2]) {
          thunk_FUN_10ce2d60(piVar5,&piStack_44);
        }
        else {
          *piVar5 = (int)((int)piVar2);
          piVar5[1] = (int)((int)piVar10);
          if ((int *)(piVar10) != (int *)(0x0)) {
            (**(code **)(*piVar10 + 4))();
          }
          puStack_2c[1] = (undefined4)(puStack_2c[1] + 8);
        }
      }
    }
LAB_10ce4ae5:
    uVar9 = (uint)(uVar9 + 0x30);
    piStack_30 = (int *)(piStack_30 + 3);
    if (0x8f < uVar9) {
      thunk_FUN_11132140();
      *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(0xf);
      if ((int *)(piStack_48) != (int *)(0x0)) {
        (**(code **)(*piStack_48 + 8))();
      }
      *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(0x10);
      if ((int *)(piStack_50) != (int *)(0x0)) {
        (**(code **)(*piStack_50 + 8))();
      }
      uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(0x11)));
      ((SCStr *)((SCStr *)&uStack_34))->int_release();


      if ((int *)(piVar10) != (int *)(0x0)) {
        (**(code **)(*piVar10 + 8))();
      }

      return;
    }
  } while( true );

 } catch (...) { }
}


// Reference entry 10ce4570; body size 28 bytes.
#line 1 "ENTRY_10ce4570"

void __fastcall FUN_10ce4570(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0x84));
  thunk_FUN_10ce2c30(*puVar1,*(undefined4 *)(param_1 + 0x88),puVar1);
  *(undefined4*)(param_1 + 0x88) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10ce4c60; body size 59 bytes.
#line 1 "ENTRY_10ce4c60"

void __thiscall Recovered_Bulk::m_FUN_10ce4c60(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10ce2d60(puVar1,param_2);
  return;
}


// Reference entry 10ce5cd0; body size 40 bytes.
#line 1 "ENTRY_10ce5cd0"

int __thiscall Recovered_Bulk::m_FUN_10ce5cd0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = (int)(thunk_FUN_10ce5d10((uint)&local_8,param_2,param_3), 0);
  iVar1 = (int)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (int)(*(int *)(param_1 + 4));
  }
  return (int)(iVar1);
}


// Reference entry 10ce64d0; body size 55 bytes.
#line 1 "ENTRY_10ce64d0"

void __thiscall Recovered_Bulk::m_FUN_10ce64d0(int *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = (uint)(((SCStr *)(param_3))->hash(), 0);
  iVar2 = (int)(thunk_FUN_10ce5d10((uint)&local_8,param_3,uVar1), 0);
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 10ce66c0; body size 41 bytes.
#line 1 "ENTRY_10ce66c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce66c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6700; body size 41 bytes.
#line 1 "ENTRY_10ce6700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce6700(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6740; body size 41 bytes.
#line 1 "ENTRY_10ce6740"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce6740(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6780; body size 24 bytes.
#line 1 "ENTRY_10ce6780"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce6780(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6a80; body size 39 bytes.
#line 1 "ENTRY_10ce6a80"

undefined4 * __fastcall FUN_10ce6a80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6ec0; body size 19 bytes.
#line 1 "ENTRY_10ce6ec0"

void __fastcall FUN_10ce6ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce71a0; body size 19 bytes.
#line 1 "ENTRY_10ce71a0"

void __fastcall FUN_10ce71a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 10ce71c0; body size 33 bytes.
#line 1 "ENTRY_10ce71c0"

void __fastcall FUN_10ce71c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce71f0; body size 33 bytes.
#line 1 "ENTRY_10ce71f0"

void __fastcall FUN_10ce71f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce73c0; body size 33 bytes.
#line 1 "ENTRY_10ce73c0"

void __fastcall FUN_10ce73c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce73f0; body size 33 bytes.
#line 1 "ENTRY_10ce73f0"

void __fastcall FUN_10ce73f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce7420; body size 25 bytes.
#line 1 "ENTRY_10ce7420"

void __fastcall FUN_10ce7420(undefined4 *param_1)

{
  thunk_FUN_10ce5db0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 10ce7740; body size 37 bytes.
#line 1 "ENTRY_10ce7740"

int * __fastcall FUN_10ce7740(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10ce7770; body size 37 bytes.
#line 1 "ENTRY_10ce7770"

int * __fastcall FUN_10ce7770(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10ce7820; body size 27 bytes.
#line 1 "ENTRY_10ce7820"

int __stdcall FUN_10ce7820(undefined4 param_1)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  piVar1 = (int *)((int *)thunk_FUN_10ce5f30((uint)&local_8,param_1), 0);
  return (int)(*piVar1 + 0xc);
}


// Reference entry 10ce7a40; body size 45 bytes.
#line 1 "ENTRY_10ce7a40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce7a40(byte param_2)
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


// Reference entry 10ce7a80; body size 32 bytes.
#line 1 "ENTRY_10ce7a80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ce7a80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ce6ee0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ce7ab0; body size 32 bytes.
#line 1 "ENTRY_10ce7ab0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ce7ab0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ce6fd0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ce7b70; body size 35 bytes.
#line 1 "ENTRY_10ce7b70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ce7b70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ce74c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x248);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ce7ba0; body size 33 bytes.
#line 1 "ENTRY_10ce7ba0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce7ba0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce7bf0; body size 25 bytes.
#line 1 "ENTRY_10ce7bf0"

void __fastcall FUN_10ce7bf0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10ce83a0; body size 33 bytes.
#line 1 "ENTRY_10ce83a0"

void __fastcall FUN_10ce83a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce83d0; body size 33 bytes.
#line 1 "ENTRY_10ce83d0"

void __fastcall FUN_10ce83d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ce8470; body size 25 bytes.
#line 1 "ENTRY_10ce8470"

void __fastcall FUN_10ce8470(undefined4 *param_1)

{
  thunk_FUN_10ce5db0(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x2c);
  return;
}


// Reference entry 10ce9420; body size 60 bytes.
#line 1 "ENTRY_10ce9420"

int __stdcall FUN_10ce9420(SCStr *param_1)

{
  uint uVar1;
  undefined1 local_8 [4];
  int local_4;
  
  uVar1 = (uint)(((SCStr *)(param_1))->hash(), 0);
  thunk_FUN_10ce5d10((uint)&local_8,param_1,uVar1);
  if (local_4 != 0) {
    return (int)(local_4 + 0xc);
  }
                    
  std::_Xout_of_range("invalid unordered_map<K, T> key");
}


// Reference entry 10ce9470; body size 19 bytes.
#line 1 "ENTRY_10ce9470"

uint __thiscall Recovered_Bulk::m_FUN_10ce9470(SCStr *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)(((SCStr *)(param_2))->hash(), 0);
  return (uint)(uVar1 & *(uint *)(param_1 + 0x18));
}


// Reference entry 10ce9520; body size 32 bytes.
#line 1 "ENTRY_10ce9520"

void __fastcall FUN_10ce9520(int *param_1)

{
  thunk_FUN_10ce5db0(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10cee1c0; body size 59 bytes.
#line 1 "ENTRY_10cee1c0"

void __thiscall Recovered_Bulk::m_FUN_10cee1c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10cede00(puVar1,param_2);
  return;
}


// Reference entry 10cee310; body size 41 bytes.
#line 1 "ENTRY_10cee310"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cee310(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cee720; body size 60 bytes.
#line 1 "ENTRY_10cee720"

void __fastcall FUN_10cee720(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_10c21f70(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_10c24160();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cee8d0; body size 33 bytes.
#line 1 "ENTRY_10cee8d0"

void __fastcall FUN_10cee8d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cee900; body size 33 bytes.
#line 1 "ENTRY_10cee900"

void __fastcall FUN_10cee900(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10ceeb90; body size 37 bytes.
#line 1 "ENTRY_10ceeb90"

int * __fastcall FUN_10ceeb90(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10ceed70; body size 32 bytes.
#line 1 "ENTRY_10ceed70"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ceed70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cee770();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ceeda0; body size 35 bytes.
#line 1 "ENTRY_10ceeda0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10ceeda0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cee930();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x128);
  }
  return (undefined4)(param_1);
}


// Reference entry 10ceee20; body size 59 bytes.
#line 1 "ENTRY_10ceee20"

void __thiscall Recovered_Bulk::m_FUN_10ceee20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
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
  return;
}


// Reference entry 10ceeea0; body size 33 bytes.
#line 1 "ENTRY_10ceeea0"

void __fastcall FUN_10ceeea0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 10cefaa0; body size 37 bytes.
#line 1 "ENTRY_10cefaa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cefaa0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x110));
  piVar1 = (int *)(*(int **)(param_1 + 0x114), 0);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10cf0930; body size 59 bytes.
#line 1 "ENTRY_10cf0930"

void __thiscall Recovered_Bulk::m_FUN_10cf0930(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10cede00(puVar1,param_2);
  return;
}


// Reference entry 10cf1010; body size 22 bytes.
#line 1 "ENTRY_10cf1010"

void __stdcall FUN_10cf1010(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d61d0(param_1,0);
  }
  return;
}


// Reference entry 10cf1030; body size 23 bytes.
#line 1 "ENTRY_10cf1030"

void __stdcall FUN_10cf1030(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10cf2cc0; body size 41 bytes.
#line 1 "ENTRY_10cf2cc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf2cc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf2d00; body size 41 bytes.
#line 1 "ENTRY_10cf2d00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf2d00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf3340; body size 32 bytes.
#line 1 "ENTRY_10cf3340"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cf3340(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cf30f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x1c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cf3370; body size 19 bytes.
#line 1 "ENTRY_10cf3370"

void __thiscall Recovered_Bulk::m_FUN_10cf3370(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cf3390; body size 19 bytes.
#line 1 "ENTRY_10cf3390"

void __thiscall Recovered_Bulk::m_FUN_10cf3390(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cf33b0; body size 21 bytes.
#line 1 "ENTRY_10cf33b0"

void __thiscall Recovered_Bulk::m_FUN_10cf33b0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10cf33d0; body size 21 bytes.
#line 1 "ENTRY_10cf33d0"

void __thiscall Recovered_Bulk::m_FUN_10cf33d0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10cf33f0; body size 17 bytes.
#line 1 "ENTRY_10cf33f0"

void __stdcall FUN_10cf33f0(undefined4 *param_1)

{
  FUN_10cf1ee0(*param_1);
  return;
}


// Reference entry 10cf3410; body size 17 bytes.
#line 1 "ENTRY_10cf3410"

void __stdcall FUN_10cf3410(undefined4 *param_1)

{
  FUN_10cf2340(*param_1);
  return;
}


// Reference entry 10cf3450; body size 19 bytes.
#line 1 "ENTRY_10cf3450"

void __thiscall Recovered_Bulk::m_FUN_10cf3450(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cf3470; body size 19 bytes.
#line 1 "ENTRY_10cf3470"

void __thiscall Recovered_Bulk::m_FUN_10cf3470(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cf34e0; body size 27 bytes.
#line 1 "ENTRY_10cf34e0"

int * __thiscall Recovered_Bulk::m_FUN_10cf34e0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*param_1 + 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cf35c0; body size 22 bytes.
#line 1 "ENTRY_10cf35c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf35c0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(*param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10cf35e0; body size 63 bytes.
#line 1 "ENTRY_10cf35e0"

void __thiscall Recovered_Bulk::m_FUN_10cf35e0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if ((int)(iVar2) != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return;
}


// Reference entry 10cf3630; body size 63 bytes.
#line 1 "ENTRY_10cf3630"

void __thiscall Recovered_Bulk::m_FUN_10cf3630(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if ((int)(iVar2) != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return;
}


// Reference entry 10cf3940; body size 31 bytes.
#line 1 "ENTRY_10cf3940"

void __thiscall Recovered_Bulk::m_FUN_10cf3940(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_2);
  if (*param_1 + 8U != param_2) {
    param_2 = (uint)(param_2 & 0xffffff00);
    thunk_FUN_1065a700(uVar1,param_2);
  }
  return;
}


// Reference entry 10cf3fe0; body size 41 bytes.
#line 1 "ENTRY_10cf3fe0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf3fe0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf4330; body size 39 bytes.
#line 1 "ENTRY_10cf4330"

void __fastcall FUN_10cf4330(undefined4 *param_1)

{
  ((_Tree<> *)(0))->op_dtor();
  ((_Tree<> *)(0))->op_dtor();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cf4530; body size 61 bytes.
#line 1 "ENTRY_10cf4530"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf4530(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  ((_Tree<> *)(0))->op_dtor();
  ((_Tree<> *)(0))->op_dtor();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x18);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf49d0; body size 52 bytes.
#line 1 "ENTRY_10cf49d0"

void __thiscall Recovered_Bulk::m_FUN_10cf49d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_105a1d20();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10cf4ac0; body size 22 bytes.
#line 1 "ENTRY_10cf4ac0"

void __stdcall FUN_10cf4ac0(undefined4 *param_1)

{
  thunk_FUN_10cf3e20(*(undefined4 *)*param_1,(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf4ae0; body size 29 bytes.
#line 1 "ENTRY_10cf4ae0"

void __stdcall FUN_10cf4ae0(unsigned int recovered_unused_stack_0)

{
 try {
  undefined1 local_8 [8];
  
  thunk_FUN_10cf3d20((uint)&local_8,&stack0x00000004);
  return;

 } catch (...) { }
}


// Reference entry 10cf5110; body size 29 bytes.
#line 1 "ENTRY_10cf5110"

void __stdcall FUN_10cf5110(unsigned int recovered_unused_stack_0)

{
 try {
  undefined1 local_8 [8];
  
  thunk_FUN_10cf3d20((uint)&local_8,&stack0x00000004);
  return;

 } catch (...) { }
}


// Reference entry 10cf5250; body size 63 bytes.
#line 1 "ENTRY_10cf5250"

void __thiscall Recovered_Bulk::m_FUN_10cf5250(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(*param_2);
  if ((int)(iVar2) != *param_1) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (**(code **)(*piVar1 + 8))();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  return;
}


// Reference entry 10cf53c0; body size 18 bytes.
#line 1 "ENTRY_10cf53c0"

void __stdcall FUN_10cf53c0(unsigned int recovered_unused_stack_0)

{
 try {
  thunk_FUN_10cf4bb0(&stack0x00000004);
  return;

 } catch (...) { }
}


// Reference entry 10cf5610; body size 41 bytes.
#line 1 "ENTRY_10cf5610"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf5610(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf58c0; body size 19 bytes.
#line 1 "ENTRY_10cf58c0"

void __fastcall FUN_10cf58c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cf5c50; body size 38 bytes.
#line 1 "ENTRY_10cf5c50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf5c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf5c80; body size 45 bytes.
#line 1 "ENTRY_10cf5c80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf5c80(byte param_2)
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


// Reference entry 10cf5cc0; body size 32 bytes.
#line 1 "ENTRY_10cf5cc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cf5cc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cf58e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cf5cf0; body size 33 bytes.
#line 1 "ENTRY_10cf5cf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf5cf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf5f40; body size 21 bytes.
#line 1 "ENTRY_10cf5f40"

SCStr * __stdcall FUN_10cf5f40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpValidateServiceCredentials");
  return (SCStr *)(param_1);
}


// Reference entry 10cf6150; body size 35 bytes.
#line 1 "ENTRY_10cf6150"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf6150(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)((char *)(**(code **)(**(int **)(param_1 + 0x18) + 0x2c))(), 0);
  pcVar2 = (char *)("");
  if ((char *)(pcVar1) != (char *)(0x0)) {
    pcVar2 = (char *)(pcVar1);
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar2);
  return (SCStr *)(param_2);
}


// Reference entry 10cf6190; body size 21 bytes.
#line 1 "ENTRY_10cf6190"

SCStr * __stdcall FUN_10cf6190(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cf65a0; body size 41 bytes.
#line 1 "ENTRY_10cf65a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf65a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf74b0; body size 45 bytes.
#line 1 "ENTRY_10cf74b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf74b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf7790; body size 32 bytes.
#line 1 "ENTRY_10cf7790"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cf7790(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cf78a0; body size 24 bytes.
#line 1 "ENTRY_10cf78a0"

undefined1 __fastcall FUN_10cf78a0(int param_1)

{
  if (((*(char *)(param_1 + 0x49) == '\0') || (*(int *)(param_1 + 0x54) == 0)) &&
     (*(char *)(param_1 + 8) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10cf78c0; body size 18 bytes.
#line 1 "ENTRY_10cf78c0"

undefined1 __fastcall FUN_10cf78c0(int param_1)

{
  if ((*(char *)(param_1 + 0x48) != '\0') && (*(char *)(param_1 + 8) == '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10cf7aa0; body size 22 bytes.
#line 1 "ENTRY_10cf7aa0"

undefined4 __fastcall FUN_10cf7aa0(int param_1)

{
  if ((*(char **)(param_1 + 0x4c) != (char *)((0x0))) && (**(char **)(param_1 + 0x4c) != '\0')) {
    return (undefined4)(*(undefined4 *)(param_1 + 0x50));
  }
  return (undefined4)(7);
}


// Reference entry 10cf7ac0; body size 20 bytes.
#line 1 "ENTRY_10cf7ac0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf7ac0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x4c));
  return (SCStr *)(param_2);
}


// Reference entry 10cf7ae0; body size 25 bytes.
#line 1 "ENTRY_10cf7ae0"

int * __thiscall Recovered_Bulk::m_FUN_10cf7ae0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x5c), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cf7db0; body size 21 bytes.
#line 1 "ENTRY_10cf7db0"

SCStr * __stdcall FUN_10cf7db0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cf7f50; body size 50 bytes.
#line 1 "ENTRY_10cf7f50"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf7f50(SCStr *param_2)
{
  int *param_1 = (int *)this;
  if (((char *)param_1[0x10] != (char *)(((0x0)))) && (*(char *)param_1[0x10] != '\0')) {
    ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x10));
    return (SCStr *)(param_2);
  }
  (**(code **)(*param_1 + 0x38))(param_2);
  return (SCStr *)(param_2);
}


// Reference entry 10cf7f90; body size 20 bytes.
#line 1 "ENTRY_10cf7f90"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf7f90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10cf7fb0; body size 23 bytes.
#line 1 "ENTRY_10cf7fb0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf7fb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x8c));
  return (SCStr *)(param_2);
}


// Reference entry 10cf88e0; body size 20 bytes.
#line 1 "ENTRY_10cf88e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf88e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10cf8900; body size 20 bytes.
#line 1 "ENTRY_10cf8900"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf8900(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x44));
  return (SCStr *)(param_2);
}


// Reference entry 10cf8b00; body size 19 bytes.
#line 1 "ENTRY_10cf8b00"

uint __fastcall FUN_10cf8b00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x10))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10cf8d90; body size 36 bytes.
#line 1 "ENTRY_10cf8d90"

void __thiscall Recovered_Bulk::m_FUN_10cf8d90(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x40));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10cf8dc0; body size 36 bytes.
#line 1 "ENTRY_10cf8dc0"

void __thiscall Recovered_Bulk::m_FUN_10cf8dc0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x3c));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10cf8df0; body size 36 bytes.
#line 1 "ENTRY_10cf8df0"

void __thiscall Recovered_Bulk::m_FUN_10cf8df0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x44));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10cf9070; body size 23 bytes.
#line 1 "ENTRY_10cf9070"

void __stdcall FUN_10cf9070(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10cf9740; body size 20 bytes.
#line 1 "ENTRY_10cf9740"

undefined4 __fastcall FUN_10cf9740(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10cf9c70; body size 17 bytes.
#line 1 "ENTRY_10cf9c70"

undefined4 __fastcall FUN_10cf9c70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10cf9c90; body size 63 bytes.
#line 1 "ENTRY_10cf9c90"

int * __thiscall Recovered_Bulk::m_FUN_10cf9c90(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x88) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cf9cf0; body size 21 bytes.
#line 1 "ENTRY_10cf9cf0"

SCStr * __stdcall FUN_10cf9cf0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cf9d30; body size 16 bytes.
#line 1 "ENTRY_10cf9d30"

int __fastcall FUN_10cf9d30(int param_1)

{
  return (int)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 3);
}


// Reference entry 10cf9f50; body size 35 bytes.
#line 1 "ENTRY_10cf9f50"

SCStr * __stdcall FUN_10cf9f50(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1b0,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10cfa090; body size 17 bytes.
#line 1 "ENTRY_10cfa090"

undefined4 __fastcall FUN_10cfa090(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10cfa2c0; body size 19 bytes.
#line 1 "ENTRY_10cfa2c0"

undefined4 __fastcall FUN_10cfa2c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10cfb1d0; body size 19 bytes.
#line 1 "ENTRY_10cfb1d0"

uint __fastcall FUN_10cfb1d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10cfbb20; body size 35 bytes.
#line 1 "ENTRY_10cfbb20"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cfbb20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10cfb7f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,200);
  }
  return (undefined4)(param_1);
}


// Reference entry 10cfbc00; body size 33 bytes.
#line 1 "ENTRY_10cfbc00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10cfbc00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cfbe60; body size 23 bytes.
#line 1 "ENTRY_10cfbe60"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cfbe60(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 8) + 0x60))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc100; body size 63 bytes.
#line 1 "ENTRY_10cfc100"

int * __thiscall Recovered_Bulk::m_FUN_10cfc100(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x8c) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cfc180; body size 21 bytes.
#line 1 "ENTRY_10cfc180"

SCStr * __stdcall FUN_10cfc180(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10cfc1a0; body size 16 bytes.
#line 1 "ENTRY_10cfc1a0"

int __fastcall FUN_10cfc1a0(int param_1)

{
  return (int)(*(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x8c) >> 3);
}


// Reference entry 10cfc1c0; body size 23 bytes.
#line 1 "ENTRY_10cfc1c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cfc1c0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 8) + 0x6c))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc400; body size 23 bytes.
#line 1 "ENTRY_10cfc400"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cfc400(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 8) + 0x48))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc440; body size 26 bytes.
#line 1 "ENTRY_10cfc440"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cfc440(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 8) + 0x84))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc460; body size 35 bytes.
#line 1 "ENTRY_10cfc460"

SCStr * __stdcall FUN_10cfc460(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1b0,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10cfc4b0; body size 20 bytes.
#line 1 "ENTRY_10cfc4b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cfc4b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10cfc4e0; body size 23 bytes.
#line 1 "ENTRY_10cfc4e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cfc4e0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 8) + 0x54))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfc510; body size 23 bytes.
#line 1 "ENTRY_10cfc510"

undefined4 __thiscall Recovered_Bulk::m_FUN_10cfc510(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10cfdf80; body size 28 bytes.
#line 1 "ENTRY_10cfdf80"

void __fastcall FUN_10cfdf80(int *param_1)

{
  if ((char)param_1[0x10] == '\0') {
    thunk_FUN_10cfd160();
    (**(code **)(*param_1 + 0x114))(0);
  }
  return;
}


// Reference entry 10cfe140; body size 29 bytes.
#line 1 "ENTRY_10cfe140"

void __thiscall Recovered_Bulk::m_FUN_10cfe140(undefined4 param_2,undefined8 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 8) + 0x34))(param_2,param_3);
  return;
}


// Reference entry 10d00ad0; body size 41 bytes.
#line 1 "ENTRY_10d00ad0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d00ad0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d00b10; body size 41 bytes.
#line 1 "ENTRY_10d00b10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d00b10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d00b50; body size 41 bytes.
#line 1 "ENTRY_10d00b50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d00b50(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d00bc0; body size 41 bytes.
#line 1 "ENTRY_10d00bc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d00bc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d00c00; body size 24 bytes.
#line 1 "ENTRY_10d00c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d00c00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d017b0; body size 60 bytes.
#line 1 "ENTRY_10d017b0"

void __fastcall FUN_10d017b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  thunk_FUN_10ce2c30(*puVar1,param_1[3],puVar1);
  param_1[3] = (undefined4)(*puVar1);
  thunk_FUN_10ce3510();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d01800; body size 19 bytes.
#line 1 "ENTRY_10d01800"

void __fastcall FUN_10d01800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d01f50; body size 19 bytes.
#line 1 "ENTRY_10d01f50"

void __fastcall FUN_10d01f50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d02630; body size 45 bytes.
#line 1 "ENTRY_10d02630"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d02630(byte param_2)
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


// Reference entry 10d02670; body size 45 bytes.
#line 1 "ENTRY_10d02670"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d02670(byte param_2)
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


// Reference entry 10d02ab0; body size 35 bytes.
#line 1 "ENTRY_10d02ab0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d02ab0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d01e40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x138);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d02ae0; body size 45 bytes.
#line 1 "ENTRY_10d02ae0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d02ae0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d02d90; body size 33 bytes.
#line 1 "ENTRY_10d02d90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d02d90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d02dc0; body size 33 bytes.
#line 1 "ENTRY_10d02dc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d02dc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d03040; body size 16 bytes.
#line 1 "ENTRY_10d03040"

void __fastcall FUN_10d03040(int param_1)

{
  SCThreadSafeInc((long *)(param_1 + 0x124));
  return;
}


// Reference entry 10d030e0; body size 61 bytes.
#line 1 "ENTRY_10d030e0"

void __thiscall Recovered_Bulk::m_FUN_10d030e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10d03130; body size 59 bytes.
#line 1 "ENTRY_10d03130"

void __thiscall Recovered_Bulk::m_FUN_10d03130(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_10ce2d60(puVar1,param_2);
  return;
}


// Reference entry 10d03290; body size 33 bytes.
#line 1 "ENTRY_10d03290"

undefined4 __fastcall FUN_10d03290(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10208940(), 0);
  if (cVar1 != '\0') {
    cVar1 = (char)((**(code **)(*param_1 + 0x24))(), 0);
    if (cVar1 == '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10d03ae0; body size 21 bytes.
#line 1 "ENTRY_10d03ae0"

SCStr * __stdcall FUN_10d03ae0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AlarmMusicChimeItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d03b00; body size 21 bytes.
#line 1 "ENTRY_10d03b00"

SCStr * __stdcall FUN_10d03b00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmContentBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d03b20; body size 21 bytes.
#line 1 "ENTRY_10d03b20"

SCStr * __stdcall FUN_10d03b20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AlarmMusicBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d03b40; body size 21 bytes.
#line 1 "ENTRY_10d03b40"

SCStr * __stdcall FUN_10d03b40(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AlarmMusicItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d03b60; body size 21 bytes.
#line 1 "ENTRY_10d03b60"

SCStr * __stdcall FUN_10d03b60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("AlarmMusicRootItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d03b80; body size 28 bytes.
#line 1 "ENTRY_10d03b80"

void __fastcall FUN_10d03b80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10d03fd0; body size 21 bytes.
#line 1 "ENTRY_10d03fd0"

SCStr * __stdcall FUN_10d03fd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InvalidateStack");
  return (SCStr *)(param_1);
}


// Reference entry 10d03ff0; body size 21 bytes.
#line 1 "ENTRY_10d03ff0"

SCStr * __stdcall FUN_10d03ff0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSetAlarmMusicDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10d04850; body size 21 bytes.
#line 1 "ENTRY_10d04850"

SCStr * __stdcall FUN_10d04850(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d04870; body size 21 bytes.
#line 1 "ENTRY_10d04870"

SCStr * __stdcall FUN_10d04870(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10d04b90; body size 35 bytes.
#line 1 "ENTRY_10d04b90"

SCStr * __stdcall FUN_10d04b90(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2099,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d04bc0; body size 53 bytes.
#line 1 "ENTRY_10d04bc0"

SCStr * __stdcall FUN_10d04bc0(SCStr *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  cVar1 = (char)(thunk_FUN_10bb46d0(), 0);
  if (cVar1 == '\0') {
    uVar3 = (undefined4)(0x20bd);
  }
  else {
    uVar3 = (undefined4)(0x20be);
  }
  pcVar2 = (char *)((char *)thunk_FUN_1109aba0(uVar3,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar2);
  return (SCStr *)(param_1);
}


// Reference entry 10d04c20; body size 21 bytes.
#line 1 "ENTRY_10d04c20"

SCStr * __stdcall FUN_10d04c20(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d04df0; body size 21 bytes.
#line 1 "ENTRY_10d04df0"

SCStr * __stdcall FUN_10d04df0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d04e10; body size 20 bytes.
#line 1 "ENTRY_10d04e10"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d04e10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10d04e30; body size 35 bytes.
#line 1 "ENTRY_10d04e30"

SCStr * __stdcall FUN_10d04e30(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x187,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d04e60; body size 23 bytes.
#line 1 "ENTRY_10d04e60"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d04e60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SwfStr *)(param_1 + -0xbc));
  return (SCStr *)(param_2);
}


// Reference entry 10d04e80; body size 21 bytes.
#line 1 "ENTRY_10d04e80"

SCStr * __stdcall FUN_10d04e80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d04ea0; body size 21 bytes.
#line 1 "ENTRY_10d04ea0"

SCStr * __stdcall FUN_10d04ea0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("x-rincon-buzzer:0");
  return (SCStr *)(param_1);
}


// Reference entry 10d04ec0; body size 20 bytes.
#line 1 "ENTRY_10d04ec0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d04ec0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10d04ee0; body size 23 bytes.
#line 1 "ENTRY_10d04ee0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d04ee0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SwfStr *)(param_1 + -0xa0));
  return (SCStr *)(param_2);
}


// Reference entry 10d04f00; body size 21 bytes.
#line 1 "ENTRY_10d04f00"

SCStr * __stdcall FUN_10d04f00(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d05e30; body size 42 bytes.
#line 1 "ENTRY_10d05e30"

void __thiscall Recovered_Bulk::m_FUN_10d05e30(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  thunk_FUN_1021d0d0(param_2);
  cVar1 = (char)((**(code **)(*param_1 + 0x90))(), 0);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x94))();
  }
  return;
}


// Reference entry 10d05f30; body size 46 bytes.
#line 1 "ENTRY_10d05f30"

void __fastcall FUN_10d05f30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0x94);
  *(undefined1*)(param_1 + -0x54) = (undefined1)(1);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d65f0();
  return;
}


// Reference entry 10d05f80; body size 35 bytes.
#line 1 "ENTRY_10d05f80"

void __fastcall FUN_10d05f80(int param_1)

{
  (**(code **)(*(int *)(param_1 + -0x90) + 0x164))();
  (**(code **)(*(int *)(param_1 + -0x90) + 0x110))(0);
  return;
}


// Reference entry 10d085c0; body size 41 bytes.
#line 1 "ENTRY_10d085c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d085c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d09cb0; body size 35 bytes.
#line 1 "ENTRY_10d09cb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d09cb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_102036c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x100);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d09dc0; body size 35 bytes.
#line 1 "ENTRY_10d09dc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d09dc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d09230();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x2e0);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d09df0; body size 35 bytes.
#line 1 "ENTRY_10d09df0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d09df0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d09590();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x180);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d09f30; body size 19 bytes.
#line 1 "ENTRY_10d09f30"

void __thiscall Recovered_Bulk::m_FUN_10d09f30(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d09f50; body size 19 bytes.
#line 1 "ENTRY_10d09f50"

void __thiscall Recovered_Bulk::m_FUN_10d09f50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d09f70; body size 21 bytes.
#line 1 "ENTRY_10d09f70"

void __thiscall Recovered_Bulk::m_FUN_10d09f70(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d09f90; body size 21 bytes.
#line 1 "ENTRY_10d09f90"

void __thiscall Recovered_Bulk::m_FUN_10d09f90(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d0a1e0; body size 19 bytes.
#line 1 "ENTRY_10d0a1e0"

void __thiscall Recovered_Bulk::m_FUN_10d0a1e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d0a200; body size 19 bytes.
#line 1 "ENTRY_10d0a200"

void __thiscall Recovered_Bulk::m_FUN_10d0a200(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d0b4c0; body size 21 bytes.
#line 1 "ENTRY_10d0b4c0"

SCStr * __stdcall FUN_10d0b4c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCContentBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d0b4e0; body size 21 bytes.
#line 1 "ENTRY_10d0b4e0"

SCStr * __stdcall FUN_10d0b4e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCContentViewBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d0b910; body size 28 bytes.
#line 1 "ENTRY_10d0b910"

int * __thiscall Recovered_Bulk::m_FUN_10d0b910(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x14c), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d0b940; body size 21 bytes.
#line 1 "ENTRY_10d0b940"

SCStr * __stdcall FUN_10d0b940(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("REST");
  return (SCStr *)(param_1);
}


// Reference entry 10d0b960; body size 21 bytes.
#line 1 "ENTRY_10d0b960"

SCStr * __stdcall FUN_10d0b960(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("REST");
  return (SCStr *)(param_1);
}


// Reference entry 10d0b980; body size 21 bytes.
#line 1 "ENTRY_10d0b980"

SCStr * __stdcall FUN_10d0b980(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("REST");
  return (SCStr *)(param_1);
}


// Reference entry 10d0f480; body size 42 bytes.
#line 1 "ENTRY_10d0f480"

void __thiscall Recovered_Bulk::m_FUN_10d0f480(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  thunk_FUN_1021d0d0(param_2);
  cVar1 = (char)((**(code **)(*param_1 + 0x90))(), 0);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x94))();
  }
  return;
}


// Reference entry 10d113e0; body size 23 bytes.
#line 1 "ENTRY_10d113e0"

void __stdcall FUN_10d113e0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d118c0; body size 30 bytes.
#line 1 "ENTRY_10d118c0"

void __thiscall Recovered_Bulk::m_FUN_10d118c0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10d11970; body size 24 bytes.
#line 1 "ENTRY_10d11970"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d11970(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d12200; body size 19 bytes.
#line 1 "ENTRY_10d12200"

void __fastcall FUN_10d12200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d12900; body size 45 bytes.
#line 1 "ENTRY_10d12900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d12900(byte param_2)
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


// Reference entry 10d129e0; body size 35 bytes.
#line 1 "ENTRY_10d129e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d129e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d12380();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xb8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d12a10; body size 33 bytes.
#line 1 "ENTRY_10d12a10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d12a10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d12a40; body size 33 bytes.
#line 1 "ENTRY_10d12a40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d12a40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d12a70; body size 33 bytes.
#line 1 "ENTRY_10d12a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d12a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d12d90; body size 30 bytes.
#line 1 "ENTRY_10d12d90"

void __thiscall Recovered_Bulk::m_FUN_10d12d90(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10d130b0; body size 20 bytes.
#line 1 "ENTRY_10d130b0"

undefined4 __fastcall FUN_10d130b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d13700; body size 17 bytes.
#line 1 "ENTRY_10d13700"

undefined4 __fastcall FUN_10d13700(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d13720; body size 21 bytes.
#line 1 "ENTRY_10d13720"

SCStr * __stdcall FUN_10d13720(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIBadgeIndicatorSettingsProperty");
  return (SCStr *)(param_1);
}


// Reference entry 10d13740; body size 63 bytes.
#line 1 "ENTRY_10d13740"

int * __thiscall Recovered_Bulk::m_FUN_10d13740(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x94) + 8));
  if ((uint)(*(int *)(*(int *)(param_1 + 0x94) + 0xc) - iVar1 >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar2 = (int *)(*(int **)(iVar1 + param_3 * 8), 0);
  *param_2 = (int)((int)piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (**(code **)(*piVar2 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d137a0; body size 21 bytes.
#line 1 "ENTRY_10d137a0"

SCStr * __stdcall FUN_10d137a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d137c0; body size 20 bytes.
#line 1 "ENTRY_10d137c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d137c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10d13800; body size 16 bytes.
#line 1 "ENTRY_10d13800"

int __fastcall FUN_10d13800(int param_1)

{
  return (int)(*(int *)(*(int *)(param_1 + 0x94) + 0xc) - *(int *)(*(int *)(param_1 + 0x94) + 8) >> 3);
}


// Reference entry 10d13cd0; body size 35 bytes.
#line 1 "ENTRY_10d13cd0"

SCStr * __stdcall FUN_10d13cd0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1b0,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d13d50; body size 17 bytes.
#line 1 "ENTRY_10d13d50"

undefined4 __fastcall FUN_10d13d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d13fd0; body size 19 bytes.
#line 1 "ENTRY_10d13fd0"

undefined4 __fastcall FUN_10d13fd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x24) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d14070; body size 17 bytes.
#line 1 "ENTRY_10d14070"

void __stdcall FUN_10d14070(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onVoiceAccountInfoChanged");
  return;
}


// Reference entry 10d14290; body size 25 bytes.
#line 1 "ENTRY_10d14290"

void __fastcall FUN_10d14290(int param_1)

{
  thunk_FUN_10d142b0();
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  return;
}


// Reference entry 10d15320; body size 19 bytes.
#line 1 "ENTRY_10d15320"

uint __fastcall FUN_10d15320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x24) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d15430; body size 41 bytes.
#line 1 "ENTRY_10d15430"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d15430(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d15470; body size 41 bytes.
#line 1 "ENTRY_10d15470"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d15470(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d161c0; body size 35 bytes.
#line 1 "ENTRY_10d161c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d161c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10202e00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x9c);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d16590; body size 45 bytes.
#line 1 "ENTRY_10d16590"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d16590(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d165d0; body size 45 bytes.
#line 1 "ENTRY_10d165d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d165d0(byte param_2)
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


// Reference entry 10d16980; body size 49 bytes.
#line 1 "ENTRY_10d16980"

void __fastcall FUN_10d16980(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10202e00();
      iVar2 = (int)(iVar2 + 0x9c);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 10d17010; body size 21 bytes.
#line 1 "ENTRY_10d17010"

SCStr * __stdcall FUN_10d17010(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCHistoryBrowseItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d17040; body size 21 bytes.
#line 1 "ENTRY_10d17040"

SCStr * __stdcall FUN_10d17040(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DeleteItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d17060; body size 21 bytes.
#line 1 "ENTRY_10d17060"

SCStr * __stdcall FUN_10d17060(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("ClearAllRecentlyPlayed");
  return (SCStr *)(param_1);
}


// Reference entry 10d17080; body size 21 bytes.
#line 1 "ENTRY_10d17080"

SCStr * __stdcall FUN_10d17080(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCHistorySignInActionDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10d176d0; body size 21 bytes.
#line 1 "ENTRY_10d176d0"

SCStr * __stdcall FUN_10d176d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryEdit");
  return (SCStr *)(param_1);
}


// Reference entry 10d176f0; body size 34 bytes.
#line 1 "ENTRY_10d176f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d176f0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("SCIActionCategorySettings");
  if (*(char *)(param_1 + 8) == '\0') {
    pcVar1 = (char *)("SCIActionCategoryEdit");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d17720; body size 21 bytes.
#line 1 "ENTRY_10d17720"

SCStr * __stdcall FUN_10d17720(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10d17740; body size 27 bytes.
#line 1 "ENTRY_10d17740"

undefined4 __fastcall FUN_10d17740(int param_1)

{
  if ((*(char *)(param_1 + 0x299) != '\0') && (*(char *)(param_1 + 0x298) != '\0')) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10d17d40; body size 25 bytes.
#line 1 "ENTRY_10d17d40"

int __fastcall FUN_10d17d40(int *param_1)

{
 try {
  int iVar1;
  bool bVar2;
  char cVar3;
  SCLibrary *pSVar4;
  int iVar5;
  uint uVar6;
  SCStr aSStack_4c [4];
  int *piStack_48;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  SCStr aSStack_20 [4];
  undefined4 uStack_1c;
  uint uStack_18;
  char cStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  if (((char)param_1[0xa6] != '\0') || (*(char *)((int)param_1 + 0x299) == '\0')) {
    return (int)(0);
  }


  if (param_1[0x18] == 0) {
    return (int)(0);
  }

  pSVar4 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  (**(code **)(*(int *)pSVar4 + 0x88))();

  piStack_48 = (int *)((int *)0x1020fece);
  thunk_FUN_101e7e50();
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(3);
  if ((int *)(piStack_24) != (int *)(0x0)) {
    (**(code **)(*piStack_24 + 8))();
  }
  *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(2);
  piStack_48 = (int *)((int *)0x1020fef2);
  bVar2 = (bool)(((SCStr *)((SCStr *)(param_1 + 0x2d)))->beginsWith("R:0"), 0);
  piStack_48 = (int *)((int *)0x1020ff04);
  cStack_11 = (char)(((SCStr *)((SCStr *)(param_1 + 0x2d)))->beginsWith("SQ:"), 0);
  uVar6 = (uint)(uStack_18);
  if (bVar2) {
    piStack_48 = (int *)((int *)0x1020ff1b);
    ((SCStr *)((uint)&aSStack_20))->int_allocRep("Feature-MyRadioStations");
    uVar6 = (uint)(1);
    *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(4);

    piStack_48 = (int *)((int *)0x1020ff34);
    cVar3 = (char)((**(code **)(*piStack_2c + 0x14))(), 0);
    if (cVar3 != '\0') goto LAB_1020ff3b;
LAB_1020ff6a:
    cStack_11 = (char)('\x01');
  }
  else {
LAB_1020ff3b:
    if (cStack_11 != '\0') {
      piStack_48 = (int *)((int *)0x1020ff4c);
      ((SCStr *)((SCStr *)&uStack_1c))->int_allocRep("Feature-Playlists");
      uVar6 = (uint)(uVar6 | 2);

      piStack_48 = (int *)((int *)0x1020ff66);
      uStack_18 = (uint)(uVar6);
      cVar3 = (char)((**(code **)(*piStack_2c + 0x14))(), 0);
      if (cVar3 == '\0') goto LAB_1020ff6a;
    }
    cStack_11 = (char)('\0');
  }
  if ((uVar6 & 2) != 0) {
    uVar6 = (uint)(uVar6 & 0xfffffffd);

    uStack_18 = (uint)(uVar6);
    ((SCStr *)((SCStr *)&uStack_1c))->int_release();

  }

  if ((uVar6 & 1) != 0) {
    *(unsigned char*)((char *)&uStack_8 + 0) = (unsigned char)(7);
    *(unsigned short*)((char *)&uStack_8 + 1) = (unsigned short)(0);
    ((SCStr *)((uint)&aSStack_20))->int_release();
    uStack_8 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_8 + 1)) << 8 | (uint)(2)));
  }
  if (cStack_11 == '\0') {
    if (*(char *)((int)param_1 + 0xc5) != '\0') {
      (**(code **)(*param_1 + 0x94))();
      piStack_48 = (int *)(param_1);
      ((SCStr *)((uint)&aSStack_4c))->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d63d0();
      *(undefined1*)((int)param_1 + 0x41) = (undefined1)(0);
    }
    cVar3 = (char)((**(code **)(*param_1 + 0x13c))(), 0);
    if (cVar3 == '\0') {
      iVar5 = (int)(param_1[0x32]);
    }
    else {
      iVar5 = (int)((**(code **)(*param_1 + 0xbc))(), 0);
      iVar5 = (int)(iVar5 + param_1[0x32]);
    }
    iVar1 = (int)(param_1[0x18]);
    if ((0 < iVar1) && (iVar1 < iVar5)) {
      iVar5 = (int)(iVar1);
    }
  }
  else {
    iVar5 = (int)(0);
  }

  if ((int *)(piStack_28) != (int *)(0x0)) {
    (**(code **)(*piStack_28 + 8))();
  }

  return (int)(iVar5);

 } catch (...) { }
}


// Reference entry 10d17e80; body size 47 bytes.
#line 1 "ENTRY_10d17e80"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d17e80(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x298) == '\0') && (*(char *)(param_1 + 0x299) != '\0')) {
    uVar1 = (undefined4)(7);
    if (param_2 == 2) {
      uVar1 = (undefined4)(4);
    }
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d18640; body size 37 bytes.
#line 1 "ENTRY_10d18640"

undefined1 __fastcall FUN_10d18640(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x299) == '\0') {
    cVar1 = (char)(thunk_FUN_104d8570(&DAT_121a5e80,1), 0);
    if (cVar1 == '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10d18670; body size 44 bytes.
#line 1 "ENTRY_10d18670"

void __fastcall FUN_10d18670(int *param_1)

{
  char cVar1;
  
  thunk_FUN_1059d800();
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))(), 0);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x100))(0);
  }
  return;
}


// Reference entry 10d187d0; body size 37 bytes.
#line 1 "ENTRY_10d187d0"

undefined1 __fastcall FUN_10d187d0(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x299) == '\0') {
    cVar1 = (char)(thunk_FUN_104d8570(&DAT_121a5e80,1), 0);
    if (cVar1 != '\0') {
      return (undefined1)(1);
    }
  }
  return (undefined1)(0);
}


// Reference entry 10d18800; body size 17 bytes.
#line 1 "ENTRY_10d18800"

void FUN_10d18800(void)

{
  thunk_FUN_104d8570(&DAT_121a5e80,1);
  return;
}


// Reference entry 10d189f0; body size 25 bytes.
#line 1 "ENTRY_10d189f0"

undefined1 __fastcall FUN_10d189f0(int *param_1)

{
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  if ((*(char *)((int)param_1 + 0x299) != '\0') && ((char)param_1[0xa6] == '\0')) {
    if (*(char *)((int)param_1 + 0xc5) != '\0') {
      uStack_c = (undefined4)(0x1021b215);
      (**(code **)(*param_1 + 0x94))();
      uStack_c = (undefined4)(0);
      piStack_10 = (int *)(param_1);
      ((SCStr *)((uint)&aSStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
      thunk_FUN_103d63d0();
      *(undefined1*)((int)param_1 + 0x41) = (undefined1)(0);
    }
    return (undefined1)((char)param_1[0x31]);
  }
  return (undefined1)(1);
}


// Reference entry 10d18a10; body size 17 bytes.
#line 1 "ENTRY_10d18a10"

void __stdcall FUN_10d18a10(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onSecureSettingsChanged");
  return;
}


// Reference entry 10d18a30; body size 53 bytes.
#line 1 "ENTRY_10d18a30"

void __fastcall FUN_10d18a30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  bool bVar1;
  
  bVar1 = (bool)(*(int *)(param_1 + 0x34) == 0);
  if ((bool)*(char *)(param_1 + 0x30) != (char)(bVar1)) {
    *(bool*)(param_1 + 0x30) = (bool)(bVar1);
    (**(code **)(*(int *)(param_1 + -0x268) + 0x110))(0);
    thunk_FUN_1020a5b0(0);
  }
  return;
}


// Reference entry 10d18e50; body size 53 bytes.
#line 1 "ENTRY_10d18e50"

void __fastcall FUN_10d18e50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  bool bVar1;
  
  bVar1 = (bool)(*(int *)(param_1 + 0x34) == 0);
  if ((bool)*(char *)(param_1 + 0x30) != (char)(bVar1)) {
    *(bool*)(param_1 + 0x30) = (bool)(bVar1);
    (**(code **)(*(int *)(param_1 + -0x268) + 0x110))(0);
    thunk_FUN_1020a5b0(0);
  }
  return;
}


// Reference entry 10d19340; body size 32 bytes.
#line 1 "ENTRY_10d19340"

void __thiscall Recovered_Bulk::m_FUN_10d19340(undefined4 param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x5c))(), 0);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x114))(param_2);
  }
  return;
}


// Reference entry 10d19370; body size 48 bytes.
#line 1 "ENTRY_10d19370"

void __fastcall FUN_10d19370(int param_1)

{
  char cVar1;
  
  thunk_FUN_1059d800();
  cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x90) + 0xfc))(), 0);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + -0x90) + 0x100))(0);
  }
  return;
}


// Reference entry 10d193b0; body size 50 bytes.
#line 1 "ENTRY_10d193b0"

void __fastcall FUN_10d193b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  char cVar1;
  
  thunk_FUN_1059d800();
  cVar1 = (char)((**(code **)(*(int *)(param_1 + -0x278) + 0xfc))(), 0);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + -0x278) + 0x100))(0);
  }
  return;
}


// Reference entry 10d194d0; body size 16 bytes.
#line 1 "ENTRY_10d194d0"

undefined4 __fastcall FUN_10d194d0(int *param_1)

{
  (**(code **)(*param_1 + 0x16c))(0x191);
  return (undefined4)(1);
}


// Reference entry 10d19730; body size 42 bytes.
#line 1 "ENTRY_10d19730"

undefined2 FUN_10d19730(short param_1,int param_2)

{
  if ((param_1 != 0x3ea) && ((param_1 != 0x403 || (param_2 < 1)))) {
    return (undefined2)(0);
  }
  return (undefined2)(1);
}


// Reference entry 10d197a0; body size 52 bytes.
#line 1 "ENTRY_10d197a0"

void __thiscall Recovered_Bulk::m_FUN_10d197a0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  thunk_FUN_10221640(param_2,param_3);
  if (param_1[8] != 0) {
    *(byte*)(param_1 + 0x18) = (byte)((byte)param_3 ^ 1);
    (**(code **)(*param_1 + 0xe0))(param_1 + 0x47);
  }
  return;
}


// Reference entry 10d19b20; body size 59 bytes.
#line 1 "ENTRY_10d19b20"

void __thiscall Recovered_Bulk::m_FUN_10d19b20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10d19820(puVar1,param_2);
  return;
}


// Reference entry 10d19b70; body size 41 bytes.
#line 1 "ENTRY_10d19b70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d19b70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d19bb0; body size 41 bytes.
#line 1 "ENTRY_10d19bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d19bb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d19bf0; body size 41 bytes.
#line 1 "ENTRY_10d19bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d19bf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d19c30; body size 41 bytes.
#line 1 "ENTRY_10d19c30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d19c30(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d19c70; body size 41 bytes.
#line 1 "ENTRY_10d19c70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d19c70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d19cb0; body size 41 bytes.
#line 1 "ENTRY_10d19cb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d19cb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d19cf0; body size 24 bytes.
#line 1 "ENTRY_10d19cf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d19cf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d1a530; body size 60 bytes.
#line 1 "ENTRY_10d1a530"

void __fastcall FUN_10d1a530(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 10d1c200; body size 21 bytes.
#line 1 "ENTRY_10d1c200"

SCStr * __stdcall FUN_10d1c200(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("PlayMenuInstantPlayNowTV");
  return (SCStr *)(param_1);
}


// Reference entry 10d1c220; body size 21 bytes.
#line 1 "ENTRY_10d1c220"

SCStr * __stdcall FUN_10d1c220(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("PlayMenuPlayNowTV");
  return (SCStr *)(param_1);
}


// Reference entry 10d1c240; body size 21 bytes.
#line 1 "ENTRY_10d1c240"

SCStr * __stdcall FUN_10d1c240(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("PlayNowTV");
  return (SCStr *)(param_1);
}


// Reference entry 10d1c390; body size 21 bytes.
#line 1 "ENTRY_10d1c390"

SCStr * __stdcall FUN_10d1c390(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("tvaudio");
  return (SCStr *)(param_1);
}


// Reference entry 10d1c3d0; body size 21 bytes.
#line 1 "ENTRY_10d1c3d0"

SCStr * __stdcall FUN_10d1c3d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryInstant");
  return (SCStr *)(param_1);
}


// Reference entry 10d1c3f0; body size 49 bytes.
#line 1 "ENTRY_10d1c3f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d1c3f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)((int *)__RTDynamicCast(*(undefined4 *)(param_1 + 8),0, &SCActionOnGroupDescriptorImpl::RTTI_Type_Descriptor, &SCPlayMenuPlayNowDescriptor::RTTI_Type_Descriptor,0), 0);
  *param_2 = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10d1c4c0; body size 63 bytes.
#line 1 "ENTRY_10d1c4c0"

int * __thiscall Recovered_Bulk::m_FUN_10d1c4c0(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x88) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d1c540; body size 21 bytes.
#line 1 "ENTRY_10d1c540"

SCStr * __stdcall FUN_10d1c540(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d1c560; body size 16 bytes.
#line 1 "ENTRY_10d1c560"

int __fastcall FUN_10d1c560(int param_1)

{
  return (int)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 3);
}


// Reference entry 10d1c5a0; body size 20 bytes.
#line 1 "ENTRY_10d1c5a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d1c5a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10d1c5c0; body size 35 bytes.
#line 1 "ENTRY_10d1c5c0"

SCStr * __stdcall FUN_10d1c5c0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1af,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d1ccc0; body size 20 bytes.
#line 1 "ENTRY_10d1ccc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d1ccc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10d1cce0; body size 18 bytes.
#line 1 "ENTRY_10d1cce0"

SCStr * __stdcall FUN_10d1cce0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10d1ce70; body size 25 bytes.
#line 1 "ENTRY_10d1ce70"

void __fastcall FUN_10d1ce70(int param_1)

{
  thunk_FUN_10d1cf80();
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  return;
}


// Reference entry 10d1cf60; body size 25 bytes.
#line 1 "ENTRY_10d1cf60"

void __fastcall FUN_10d1cf60(int param_1)

{
  thunk_FUN_10d1cf80();
  (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  return;
}


// Reference entry 10d1d4a0; body size 59 bytes.
#line 1 "ENTRY_10d1d4a0"

void __thiscall Recovered_Bulk::m_FUN_10d1d4a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_10d19820(puVar1,param_2);
  return;
}


// Reference entry 10d1d940; body size 23 bytes.
#line 1 "ENTRY_10d1d940"

void __stdcall FUN_10d1d940(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d1e0d0; body size 28 bytes.
#line 1 "ENTRY_10d1e0d0"

void __fastcall FUN_10d1e0d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10d1e110; body size 21 bytes.
#line 1 "ENTRY_10d1e110"

SCStr * __stdcall FUN_10d1e110(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("none");
  return (SCStr *)(param_1);
}


// Reference entry 10d1e2d0; body size 35 bytes.
#line 1 "ENTRY_10d1e2d0"

SCStr * __stdcall FUN_10d1e2d0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2ba,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d1e500; body size 21 bytes.
#line 1 "ENTRY_10d1e500"

SCStr * __stdcall FUN_10d1e500(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("invalid");
  return (SCStr *)(param_1);
}


// Reference entry 10d1e520; body size 21 bytes.
#line 1 "ENTRY_10d1e520"

SCStr * __stdcall FUN_10d1e520(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d1eb10; body size 46 bytes.
#line 1 "ENTRY_10d1eb10"

void __thiscall Recovered_Bulk::m_FUN_10d1eb10(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x40) + 0x18))();
    return;
  }
  return;
}


// Reference entry 10d1f920; body size 19 bytes.
#line 1 "ENTRY_10d1f920"

void __thiscall Recovered_Bulk::m_FUN_10d1f920(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d1f940; body size 19 bytes.
#line 1 "ENTRY_10d1f940"

void __thiscall Recovered_Bulk::m_FUN_10d1f940(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d1f960; body size 21 bytes.
#line 1 "ENTRY_10d1f960"

void __thiscall Recovered_Bulk::m_FUN_10d1f960(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d1f980; body size 21 bytes.
#line 1 "ENTRY_10d1f980"

void __thiscall Recovered_Bulk::m_FUN_10d1f980(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d1fb00; body size 19 bytes.
#line 1 "ENTRY_10d1fb00"

void __thiscall Recovered_Bulk::m_FUN_10d1fb00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d1fb20; body size 19 bytes.
#line 1 "ENTRY_10d1fb20"

void __thiscall Recovered_Bulk::m_FUN_10d1fb20(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d20400; body size 21 bytes.
#line 1 "ENTRY_10d20400"

SCStr * __stdcall FUN_10d20400(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("linein");
  return (SCStr *)(param_1);
}


// Reference entry 10d20520; body size 63 bytes.
#line 1 "ENTRY_10d20520"

int * __thiscall Recovered_Bulk::m_FUN_10d20520(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xb4) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d20580; body size 21 bytes.
#line 1 "ENTRY_10d20580"

SCStr * __stdcall FUN_10d20580(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d205a0; body size 16 bytes.
#line 1 "ENTRY_10d205a0"

int __fastcall FUN_10d205a0(int param_1)

{
  return (int)(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 3);
}


// Reference entry 10d205d0; body size 28 bytes.
#line 1 "ENTRY_10d205d0"

undefined4 __stdcall FUN_10d205d0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 2) {
    uVar1 = (undefined4)(thunk_FUN_104d8ab0(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 10d20600; body size 55 bytes.
#line 1 "ENTRY_10d20600"

SCStr * FUN_10d20600(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 2) {
    thunk_FUN_104d8ba0(param_1,param_2,param_3);
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("emptylinein");
  return (SCStr *)(param_1);
}


// Reference entry 10d20670; body size 20 bytes.
#line 1 "ENTRY_10d20670"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d20670(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x40));
  return (SCStr *)(param_2);
}


// Reference entry 10d20690; body size 53 bytes.
#line 1 "ENTRY_10d20690"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d20690(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar2 = (undefined4)(0x2298);
  }
  else {
    uVar2 = (undefined4)(0x2297);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(uVar2,&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d21870; body size 20 bytes.
#line 1 "ENTRY_10d21870"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d21870(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10d21890; body size 18 bytes.
#line 1 "ENTRY_10d21890"

SCStr * __stdcall FUN_10d21890(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep((char *)0x0);
  return (SCStr *)(param_1);
}


// Reference entry 10d23140; body size 61 bytes.
#line 1 "ENTRY_10d23140"

int __fastcall FUN_10d23140(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xad) == '\0') {
    return (int)(0);
  }
  iVar1 = (int)(thunk_FUN_1109f7f0(), 0);
  uVar2 = (uint)((uint)(*(char *)(iVar1 + 0x30) == '\0'));
  if (*(char *)(param_1 + 0xac) == '\0') {
    uVar2 = (uint)((*(char *)(iVar1 + 0x30) == '\0') + 1);
  }
  iVar1 = (int)(thunk_FUN_10cf7dd0(), 0);
  return (int)(iVar1 - uVar2);
}


// Reference entry 10d23440; body size 61 bytes.
#line 1 "ENTRY_10d23440"

void __thiscall Recovered_Bulk::m_FUN_10d23440(int param_2)
{
  int param_1 = (int )this;
  char cVar1;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x11) == '\0')) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(), 0);
    if (cVar1 != '\0') {
                    
                    
      (**(code **)(*(int *)(param_1 + -0x9c) + 0x110))();
      return;
    }
  }
  return;
}


// Reference entry 10d234b0; body size 37 bytes.
#line 1 "ENTRY_10d234b0"

void __fastcall FUN_10d234b0(int param_1)

{
  thunk_FUN_104d9cc0();
  thunk_FUN_104dec20();
  if (*(undefined4 **)(param_1 + 0xbc) != (undefined4 *)((0x0))) {
    (**(code **)**(undefined4 **)(param_1 + 0xbc))(1);
  }
  return;
}


// Reference entry 10d24420; body size 57 bytes.
#line 1 "ENTRY_10d24420"

void __stdcall FUN_10d24420(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)(*(char *)((int)param_2 + 0xd));
  while (cVar1 == '\0') {
    thunk_FUN_10d24420(param_1,param_2[2]);
    piVar2 = (int *)((int *)*param_2);
    thunk_FUN_1148a50e(param_2,0x14);
    param_2 = (int *)(piVar2);
    cVar1 = (char)(*(char *)((int)piVar2 + 0xd));
  }
  return;
}


// Reference entry 10d24470; body size 49 bytes.
#line 1 "ENTRY_10d24470"

int __thiscall Recovered_Bulk::m_FUN_10d24470(uint *param_2)
{
  int *param_1 = (int *)this;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_10d244b0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) != '\0') || ((uint)(*param_2) < *(uint *)(local_4 + 0x10))) {
    local_4 = (int)(*param_1);
  }
  return (int)(local_4);
}


// Reference entry 10d26290; body size 41 bytes.
#line 1 "ENTRY_10d26290"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d26290(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d26320; body size 48 bytes.
#line 1 "ENTRY_10d26320"

undefined4 * __fastcall FUN_10d26320(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d27420; body size 19 bytes.
#line 1 "ENTRY_10d27420"

void __fastcall FUN_10d27420(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10d288d0; body size 25 bytes.
#line 1 "ENTRY_10d288d0"

void __fastcall FUN_10d288d0(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 10d28920; body size 19 bytes.
#line 1 "ENTRY_10d28920"

void __thiscall Recovered_Bulk::m_FUN_10d28920(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d28940; body size 19 bytes.
#line 1 "ENTRY_10d28940"

void __thiscall Recovered_Bulk::m_FUN_10d28940(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d28960; body size 19 bytes.
#line 1 "ENTRY_10d28960"

void __thiscall Recovered_Bulk::m_FUN_10d28960(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d28980; body size 19 bytes.
#line 1 "ENTRY_10d28980"

void __thiscall Recovered_Bulk::m_FUN_10d28980(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d289a0; body size 19 bytes.
#line 1 "ENTRY_10d289a0"

void __thiscall Recovered_Bulk::m_FUN_10d289a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d289c0; body size 19 bytes.
#line 1 "ENTRY_10d289c0"

void __thiscall Recovered_Bulk::m_FUN_10d289c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d289e0; body size 19 bytes.
#line 1 "ENTRY_10d289e0"

void __thiscall Recovered_Bulk::m_FUN_10d289e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d28a00; body size 19 bytes.
#line 1 "ENTRY_10d28a00"

void __thiscall Recovered_Bulk::m_FUN_10d28a00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d28a20; body size 21 bytes.
#line 1 "ENTRY_10d28a20"

void __thiscall Recovered_Bulk::m_FUN_10d28a20(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d28a40; body size 21 bytes.
#line 1 "ENTRY_10d28a40"

void __thiscall Recovered_Bulk::m_FUN_10d28a40(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d28a60; body size 21 bytes.
#line 1 "ENTRY_10d28a60"

void __thiscall Recovered_Bulk::m_FUN_10d28a60(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d28a80; body size 21 bytes.
#line 1 "ENTRY_10d28a80"

void __thiscall Recovered_Bulk::m_FUN_10d28a80(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d28aa0; body size 21 bytes.
#line 1 "ENTRY_10d28aa0"

void __thiscall Recovered_Bulk::m_FUN_10d28aa0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d28ac0; body size 21 bytes.
#line 1 "ENTRY_10d28ac0"

void __thiscall Recovered_Bulk::m_FUN_10d28ac0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d28ae0; body size 21 bytes.
#line 1 "ENTRY_10d28ae0"

void __thiscall Recovered_Bulk::m_FUN_10d28ae0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d28b00; body size 21 bytes.
#line 1 "ENTRY_10d28b00"

void __thiscall Recovered_Bulk::m_FUN_10d28b00(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d28b20; body size 21 bytes.
#line 1 "ENTRY_10d28b20"

void __thiscall Recovered_Bulk::m_FUN_10d28b20(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d29210; body size 19 bytes.
#line 1 "ENTRY_10d29210"

void __thiscall Recovered_Bulk::m_FUN_10d29210(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29230; body size 19 bytes.
#line 1 "ENTRY_10d29230"

void __thiscall Recovered_Bulk::m_FUN_10d29230(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29250; body size 19 bytes.
#line 1 "ENTRY_10d29250"

void __thiscall Recovered_Bulk::m_FUN_10d29250(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29270; body size 19 bytes.
#line 1 "ENTRY_10d29270"

void __thiscall Recovered_Bulk::m_FUN_10d29270(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29290; body size 19 bytes.
#line 1 "ENTRY_10d29290"

void __thiscall Recovered_Bulk::m_FUN_10d29290(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d292b0; body size 19 bytes.
#line 1 "ENTRY_10d292b0"

void __thiscall Recovered_Bulk::m_FUN_10d292b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d292d0; body size 19 bytes.
#line 1 "ENTRY_10d292d0"

void __thiscall Recovered_Bulk::m_FUN_10d292d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d292f0; body size 19 bytes.
#line 1 "ENTRY_10d292f0"

void __thiscall Recovered_Bulk::m_FUN_10d292f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d29860; body size 21 bytes.
#line 1 "ENTRY_10d29860"

SCStr * __stdcall FUN_10d29860(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAvailableServicesMenu");
  return (SCStr *)(param_1);
}


// Reference entry 10d29880; body size 21 bytes.
#line 1 "ENTRY_10d29880"

SCStr * __stdcall FUN_10d29880(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCMusicServicesDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10d298a0; body size 21 bytes.
#line 1 "ENTRY_10d298a0"

SCStr * __stdcall FUN_10d298a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCMusicServicesDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10d29c20; body size 25 bytes.
#line 1 "ENTRY_10d29c20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d29c20(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x18) + 0x18))(), 0);
  ((SCStr *)(param_2))->op_ctor(pSVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d29f40; body size 63 bytes.
#line 1 "ENTRY_10d29f40"

int * __thiscall Recovered_Bulk::m_FUN_10d29f40(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xb0) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d29f90; body size 35 bytes.
#line 1 "ENTRY_10d29f90"

int * __thiscall Recovered_Bulk::m_FUN_10d29f90(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0xb8) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d29fc0; body size 35 bytes.
#line 1 "ENTRY_10d29fc0"

int * __thiscall Recovered_Bulk::m_FUN_10d29fc0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x90) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d29ff0; body size 35 bytes.
#line 1 "ENTRY_10d29ff0"

int * __thiscall Recovered_Bulk::m_FUN_10d29ff0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x90) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d2a060; body size 21 bytes.
#line 1 "ENTRY_10d2a060"

SCStr * __stdcall FUN_10d2a060(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d2a080; body size 16 bytes.
#line 1 "ENTRY_10d2a080"

int __fastcall FUN_10d2a080(int param_1)

{
  return (int)(*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 3);
}


// Reference entry 10d2a0a0; body size 16 bytes.
#line 1 "ENTRY_10d2a0a0"

int __fastcall FUN_10d2a0a0(int param_1)

{
  return (int)(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 3);
}


// Reference entry 10d2a0c0; body size 16 bytes.
#line 1 "ENTRY_10d2a0c0"

int __fastcall FUN_10d2a0c0(int param_1)

{
  return (int)(*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 3);
}


// Reference entry 10d2a0e0; body size 16 bytes.
#line 1 "ENTRY_10d2a0e0"

int __fastcall FUN_10d2a0e0(int param_1)

{
  return (int)(*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 3);
}


// Reference entry 10d2a180; body size 25 bytes.
#line 1 "ENTRY_10d2a180"

SCStr * __stdcall FUN_10d2a180(SCStr *param_1)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)thunk_FUN_106964d0(), 0);
  ((SCStr *)(param_1))->op_ctor(pSVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d2a1e0; body size 25 bytes.
#line 1 "ENTRY_10d2a1e0"

SCStr * __stdcall FUN_10d2a1e0(SCStr *param_1)

{
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)thunk_FUN_106964d0(), 0);
  ((SCStr *)(param_1))->op_ctor(pSVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d2a200; body size 25 bytes.
#line 1 "ENTRY_10d2a200"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d2a200(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x18) + 0x1c))(), 0);
  ((SCStr *)(param_2))->op_ctor(pSVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d2a220; body size 35 bytes.
#line 1 "ENTRY_10d2a220"

SCStr * __stdcall FUN_10d2a220(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1af,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d2a780; body size 21 bytes.
#line 1 "ENTRY_10d2a780"

SCStr * __stdcall FUN_10d2a780(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d2a7a0; body size 21 bytes.
#line 1 "ENTRY_10d2a7a0"

SCStr * __stdcall FUN_10d2a7a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d2a8c0; body size 35 bytes.
#line 1 "ENTRY_10d2a8c0"

SCStr * __stdcall FUN_10d2a8c0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2060,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d2a8f0; body size 25 bytes.
#line 1 "ENTRY_10d2a8f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d2a8f0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(**(code **)(**(int **)(param_1 + 0x18) + 0x20))(), 0);
  ((SCStr *)(param_2))->op_ctor(pSVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d2ae00; body size 53 bytes.
#line 1 "ENTRY_10d2ae00"

void __fastcall FUN_10d2ae00(int param_1)

{
  undefined4 *puVar1;
  
  thunk_FUN_104d9cc0();
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x18))(param_1 + 0x80);
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0xb0));
  thunk_FUN_10ce2c30(*puVar1,*(undefined4 *)(param_1 + 0xb4),puVar1);
  *(undefined4*)(param_1 + 0xb4) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10d2be50; body size 23 bytes.
#line 1 "ENTRY_10d2be50"

void __stdcall FUN_10d2be50(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d2be70; body size 23 bytes.
#line 1 "ENTRY_10d2be70"

void __stdcall FUN_10d2be70(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d2df10; body size 41 bytes.
#line 1 "ENTRY_10d2df10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d2df10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d307e0; body size 35 bytes.
#line 1 "ENTRY_10d307e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d307e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d2f9b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x150);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d30900; body size 45 bytes.
#line 1 "ENTRY_10d30900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d30900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceBetaFeedbackBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCVoiceBetaFeedbackBrowseItem);
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d30a60; body size 19 bytes.
#line 1 "ENTRY_10d30a60"

void __thiscall Recovered_Bulk::m_FUN_10d30a60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30a80; body size 19 bytes.
#line 1 "ENTRY_10d30a80"

void __thiscall Recovered_Bulk::m_FUN_10d30a80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30aa0; body size 19 bytes.
#line 1 "ENTRY_10d30aa0"

void __thiscall Recovered_Bulk::m_FUN_10d30aa0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30ae0; body size 21 bytes.
#line 1 "ENTRY_10d30ae0"

void __thiscall Recovered_Bulk::m_FUN_10d30ae0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d30b00; body size 21 bytes.
#line 1 "ENTRY_10d30b00"

void __thiscall Recovered_Bulk::m_FUN_10d30b00(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d30b20; body size 21 bytes.
#line 1 "ENTRY_10d30b20"

void __thiscall Recovered_Bulk::m_FUN_10d30b20(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d30b40; body size 27 bytes.
#line 1 "ENTRY_10d30b40"

void __fastcall FUN_10d30b40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  thunk_FUN_10d38af0();
  (**(code **)(*piVar1 + 0x110))(0);
  return;
}


// Reference entry 10d30b70; body size 45 bytes.
#line 1 "ENTRY_10d30b70"

void __thiscall Recovered_Bulk::m_FUN_10d30b70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  char cVar2;
  
  cVar2 = (char)(thunk_FUN_102d65b0(param_3), 0);
  if (cVar2 != '\0') {
    piVar1 = (int *)(*(int **)(param_1 + 4), 0);
    thunk_FUN_10d38af0();
    (**(code **)(*piVar1 + 0x110))(0);
  }
  return;
}


// Reference entry 10d30bb0; body size 27 bytes.
#line 1 "ENTRY_10d30bb0"

void __fastcall FUN_10d30bb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  thunk_FUN_10d38af0();
  (**(code **)(*piVar1 + 0x110))(0);
  return;
}


// Reference entry 10d30c10; body size 19 bytes.
#line 1 "ENTRY_10d30c10"

void __thiscall Recovered_Bulk::m_FUN_10d30c10(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30c30; body size 19 bytes.
#line 1 "ENTRY_10d30c30"

void __thiscall Recovered_Bulk::m_FUN_10d30c30(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d30c50; body size 19 bytes.
#line 1 "ENTRY_10d30c50"

void __thiscall Recovered_Bulk::m_FUN_10d30c50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d354e0; body size 21 bytes.
#line 1 "ENTRY_10d354e0"

SCStr * __stdcall FUN_10d354e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("InfoViewWrapper");
  return (SCStr *)(param_1);
}


// Reference entry 10d35680; body size 30 bytes.
#line 1 "ENTRY_10d35680"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d35680(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x68));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x6c));
  return (SCStr *)(param_2);
}


// Reference entry 10d356b0; body size 30 bytes.
#line 1 "ENTRY_10d356b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d356b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x68));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x6c));
  return (SCStr *)(param_2);
}


// Reference entry 10d356e0; body size 30 bytes.
#line 1 "ENTRY_10d356e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d356e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x78));
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_1 + 0x7c));
  return (SCStr *)(param_2);
}


// Reference entry 10d35830; body size 23 bytes.
#line 1 "ENTRY_10d35830"

undefined4 __fastcall FUN_10d35830(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d35ca0; body size 21 bytes.
#line 1 "ENTRY_10d35ca0"

SCStr * __stdcall FUN_10d35ca0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 10d360e0; body size 20 bytes.
#line 1 "ENTRY_10d360e0"

undefined4 __fastcall FUN_10d360e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d36430; body size 21 bytes.
#line 1 "ENTRY_10d36430"

SCStr * __stdcall FUN_10d36430(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d36460; body size 21 bytes.
#line 1 "ENTRY_10d36460"

SCStr * __stdcall FUN_10d36460(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d370c0; body size 18 bytes.
#line 1 "ENTRY_10d370c0"

undefined4 __fastcall FUN_10d370c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x14))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d370e0; body size 51 bytes.
#line 1 "ENTRY_10d370e0"

int __fastcall FUN_10d370e0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x80))(), 0);
  if (cVar1 != '\0') {
    return (int)(param_1[0x3a] - param_1[0x39] >> 3);
  }
  return (int)(param_1[0x37] - param_1[0x36] >> 3);
}


// Reference entry 10d37d60; body size 20 bytes.
#line 1 "ENTRY_10d37d60"

undefined4 __fastcall FUN_10d37d60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d37fa0; body size 22 bytes.
#line 1 "ENTRY_10d37fa0"

undefined4 __fastcall FUN_10d37fa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0xc0) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d381f0; body size 40 bytes.
#line 1 "ENTRY_10d381f0"

bool __fastcall FUN_10d381f0(int *param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(*param_1 + 0x80))(), 0);
  if (cVar1 != '\0') {
    return (bool)(true);
  }
  cVar1 = (char)((**(code **)(*param_1 + 0xfc))(), 0);
  return (bool)(cVar1 == '\0');
}


// Reference entry 10d38420; body size 39 bytes.
#line 1 "ENTRY_10d38420"

void __fastcall FUN_10d38420(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_10d34fd0(), 0);
  if (cVar1 != '\0') {
    thunk_FUN_10d38af0();
    (**(code **)(*(int *)(param_1 + -0x88) + 0x110))(0);
  }
  return;
}


// Reference entry 10d38450; body size 27 bytes.
#line 1 "ENTRY_10d38450"

void __fastcall FUN_10d38450(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x28) + 0x110))(0);
  return;
}


// Reference entry 10d38510; body size 30 bytes.
#line 1 "ENTRY_10d38510"

void __fastcall FUN_10d38510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x98) + 0x110))(0);
  return;
}


// Reference entry 10d386f0; body size 30 bytes.
#line 1 "ENTRY_10d386f0"

void __fastcall FUN_10d386f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x8c) + 0x110))(0);
  return;
}


// Reference entry 10d389c0; body size 62 bytes.
#line 1 "ENTRY_10d389c0"

void __fastcall FUN_10d389c0(int param_1)

{
  *(undefined1*)(param_1 + 0x7a) = (undefined1)(1);
  if ((*(char *)(param_1 + 0x7a) != '\0') && (*(char *)(param_1 + 0x79) != '\0')) {
    (**(code **)(*(int *)(param_1 + -0x88) + 0x100))(0);
  }
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x88) + 0x110))(0);
  return;
}


// Reference entry 10d38a10; body size 39 bytes.
#line 1 "ENTRY_10d38a10"

void __fastcall FUN_10d38a10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  (**(code **)(*(int *)(param_1 + -0xbc) + 0x100))(0);
  (**(code **)(*(int *)(param_1 + -0xbc) + 0x110))(0);
  return;
}


// Reference entry 10d38a40; body size 30 bytes.
#line 1 "ENTRY_10d38a40"

void __fastcall FUN_10d38a40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x8c) + 0x110))(0);
  return;
}


// Reference entry 10d38a70; body size 30 bytes.
#line 1 "ENTRY_10d38a70"

void __fastcall FUN_10d38a70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*(int *)(param_1 + -0x8c) + 0x110))(0);
  return;
}


// Reference entry 10d38aa0; body size 59 bytes.
#line 1 "ENTRY_10d38aa0"

void __fastcall FUN_10d38aa0(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = (char)(thunk_FUN_10d352a0(), 0);
  cVar2 = (char)(thunk_FUN_10d34fd0(), 0);
  cVar3 = (char)(thunk_FUN_10d34dd0(), 0);
  if (cVar3 != '\0' || (cVar1 != '\0' || cVar2 != '\0')) {
    thunk_FUN_10d38af0();
    (**(code **)(*(int *)(param_1 + -0x88) + 0x110))(0);
  }
  return;
}


// Reference entry 10d39e10; body size 22 bytes.
#line 1 "ENTRY_10d39e10"

void __fastcall FUN_10d39e10(int *param_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*param_1 + 0x110))(0);
  return;
}


// Reference entry 10d39fa0; body size 24 bytes.
#line 1 "ENTRY_10d39fa0"

undefined4 __fastcall FUN_10d39fa0(int *param_1)

{
  thunk_FUN_10d38af0();
  (**(code **)(*param_1 + 0x110))(0);
  return (undefined4)(1);
}


// Reference entry 10d3a8f0; body size 22 bytes.
#line 1 "ENTRY_10d3a8f0"

uint __fastcall FUN_10d3a8f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0xc0) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0xc0) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d3ac70; body size 41 bytes.
#line 1 "ENTRY_10d3ac70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3ac70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d3b460; body size 35 bytes.
#line 1 "ENTRY_10d3b460"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d3b460(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d3b140();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x140);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d3b670; body size 30 bytes.
#line 1 "ENTRY_10d3b670"

void __thiscall Recovered_Bulk::m_FUN_10d3b670(void)
{
  int param_1 = (int )this;
  undefined2 in_stack_00000014;
  
  *(undefined2*)(param_1 + 0x20) = (undefined2)(in_stack_00000014);
  *(undefined1*)(param_1 + 0x18) = (undefined1)(1);
  (**(code **)(*(int *)(param_1 + -0x80) + 0x114))(0);
  return;
}


// Reference entry 10d3b6a0; body size 18 bytes.
#line 1 "ENTRY_10d3b6a0"

void __thiscall Recovered_Bulk::m_FUN_10d3b6a0(void)
{
  int param_1 = (int )this;
  undefined4 in_stack_00000014;
  
  (**(code **)(**(int **)(param_1 + 0x10) + 0x128))(in_stack_00000014);
  return;
}


// Reference entry 10d3bc70; body size 18 bytes.
#line 1 "ENTRY_10d3bc70"

void __fastcall FUN_10d3bc70(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 0x5c,"object.container");
  return;
}


// Reference entry 10d3c3a0; body size 20 bytes.
#line 1 "ENTRY_10d3c3a0"

undefined2 __fastcall FUN_10d3c3a0(int param_1)

{
  if (*(char *)(param_1 + 0x84) != '\0') {
    return (undefined2)(*(undefined2 *)(param_1 + 0xa0));
  }
  return (undefined2)(0);
}


// Reference entry 10d3c470; body size 59 bytes.
#line 1 "ENTRY_10d3c470"

undefined4 __fastcall FUN_10d3c470(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (*(char *)(param_1 + 0x84) == '\0') {
    thunk_FUN_110828b0();
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x90) != (undefined1 *)((0x0))) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x90), 0);
    }
    piVar1 = (int *)((int *)thunk_FUN_11093530(puVar3,0), 0);
                    
                    
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x78))(), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(*(undefined4 *)(param_1 + 0x9c));
}


// Reference entry 10d3c4f0; body size 30 bytes.
#line 1 "ENTRY_10d3c4f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3c4f0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)("");
  if (*(char **)(param_1 + 0x54) != (char *)((0x0))) {
    pcVar1 = (char *)(*(char **)(param_1 + 0x54), 0);
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d3c520; body size 20 bytes.
#line 1 "ENTRY_10d3c520"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3c520(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10d3c540; body size 44 bytes.
#line 1 "ENTRY_10d3c540"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3c540(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0x80), 0);
  if ((((char *)(pcVar1) == (char *)(0x0)) || (*pcVar1 == (char)(('\0')))) &&
     (pcVar1 = (char *)(*(char **)(param_1 + 0x54), 0),(char *)( pcVar1) == (char *)(0x0))) {
    pcVar1 = (char *)("");
  }
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d3c580; body size 35 bytes.
#line 1 "ENTRY_10d3c580"

SCStr * __stdcall FUN_10d3c580(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1af,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d3c5d0; body size 20 bytes.
#line 1 "ENTRY_10d3c5d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3c5d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10d3c700; body size 21 bytes.
#line 1 "ENTRY_10d3c700"

SCStr * __stdcall FUN_10d3c700(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d3c720; body size 21 bytes.
#line 1 "ENTRY_10d3c720"

SCStr * __stdcall FUN_10d3c720(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d3c880; body size 29 bytes.
#line 1 "ENTRY_10d3c880"

bool __fastcall FUN_10d3c880(int *param_1)

{
  short sVar1;
  
  if ((char)param_1[0x21] == '\0') {
    return (bool)(true);
  }
  sVar1 = (short)((**(code **)(*param_1 + 100))(), 0);
  return (bool)(sVar1 == 1000);
}


// Reference entry 10d3c8b0; body size 19 bytes.
#line 1 "ENTRY_10d3c8b0"

undefined1 __fastcall FUN_10d3c8b0(int param_1)

{
  if (*(char *)(param_1 + 0x84) != '\0') {
    return (undefined1)(*(undefined1 *)(param_1 + 0xa2));
  }
  return (undefined1)(0);
}


// Reference entry 10d3c910; body size 19 bytes.
#line 1 "ENTRY_10d3c910"

undefined1 __fastcall FUN_10d3c910(int param_1)

{
  if (*(char *)(param_1 + 0x84) != '\0') {
    return (undefined1)(*(undefined1 *)(param_1 + 0x98));
  }
  return (undefined1)(1);
}


// Reference entry 10d3c9b0; body size 47 bytes.
#line 1 "ENTRY_10d3c9b0"

void __fastcall FUN_10d3c9b0(int param_1)

{
  thunk_FUN_104d9cc0();
  if (*(char *)(param_1 + 0x84) != '\0') {
    thunk_FUN_110b0460(1);
    thunk_FUN_110adac0(param_1 + 0x80);
  }
  return;
}


// Reference entry 10d3ccf0; body size 23 bytes.
#line 1 "ENTRY_10d3ccf0"

void __stdcall FUN_10d3ccf0(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_103d6930();
    return;
  }
  return;
}


// Reference entry 10d3cd10; body size 59 bytes.
#line 1 "ENTRY_10d3cd10"

void __thiscall Recovered_Bulk::m_FUN_10d3cd10(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    thunk_FUN_103d6930(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    thunk_FUN_110b0460(1);
    thunk_FUN_110adac0();
    return;
  }
  return;
}


// Reference entry 10d3dc90; body size 19 bytes.
#line 1 "ENTRY_10d3dc90"

void __fastcall FUN_10d3dc90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d3dcb0; body size 19 bytes.
#line 1 "ENTRY_10d3dcb0"

void __fastcall FUN_10d3dcb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d3e6a0; body size 45 bytes.
#line 1 "ENTRY_10d3e6a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3e6a0(byte param_2)
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


// Reference entry 10d3e6e0; body size 45 bytes.
#line 1 "ENTRY_10d3e6e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3e6e0(byte param_2)
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


// Reference entry 10d3e720; body size 35 bytes.
#line 1 "ENTRY_10d3e720"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d3e720(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d3de20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf0);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d3e890; body size 45 bytes.
#line 1 "ENTRY_10d3e890"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3e890(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d3e8d0; body size 33 bytes.
#line 1 "ENTRY_10d3e8d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3e8d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d3e900; body size 33 bytes.
#line 1 "ENTRY_10d3e900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3e900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d3eb40; body size 62 bytes.
#line 1 "ENTRY_10d3eb40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3eb40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  thunk_FUN_10d3de20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ed50; body size 45 bytes.
#line 1 "ENTRY_10d3ed50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3ed50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);
  thunk_FUN_10cf71a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ed90; body size 62 bytes.
#line 1 "ENTRY_10d3ed90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3ed90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  thunk_FUN_10d3de20();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xf0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ef90; body size 21 bytes.
#line 1 "ENTRY_10d3ef90"

SCStr * __stdcall FUN_10d3ef90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCScheduleIndexUpdateSettingsItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d3efb0; body size 21 bytes.
#line 1 "ENTRY_10d3efb0"

SCStr * __stdcall FUN_10d3efb0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSpinnerSettingsItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d3efd0; body size 21 bytes.
#line 1 "ENTRY_10d3efd0"

SCStr * __stdcall FUN_10d3efd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCSpinnerSettingsProperty");
  return (SCStr *)(param_1);
}


// Reference entry 10d3eff0; body size 21 bytes.
#line 1 "ENTRY_10d3eff0"

SCStr * __stdcall FUN_10d3eff0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCViewContributingArtistsSettingsItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d3f250; body size 20 bytes.
#line 1 "ENTRY_10d3f250"

undefined4 __fastcall FUN_10d3f250(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d3f7a0; body size 17 bytes.
#line 1 "ENTRY_10d3f7a0"

undefined4 __fastcall FUN_10d3f7a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d3f7c0; body size 21 bytes.
#line 1 "ENTRY_10d3f7c0"

SCStr * __stdcall FUN_10d3f7c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIBooleanSettingsProperty");
  return (SCStr *)(param_1);
}


// Reference entry 10d3f7e0; body size 21 bytes.
#line 1 "ENTRY_10d3f7e0"

SCStr * __stdcall FUN_10d3f7e0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCISpinnerSettingsProperty");
  return (SCStr *)(param_1);
}


// Reference entry 10d3f800; body size 63 bytes.
#line 1 "ENTRY_10d3f800"

int * __thiscall Recovered_Bulk::m_FUN_10d3f800(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x9c) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d3f860; body size 23 bytes.
#line 1 "ENTRY_10d3f860"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3f860(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xb8));
  return (SCStr *)(param_2);
}


// Reference entry 10d3f880; body size 20 bytes.
#line 1 "ENTRY_10d3f880"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3f880(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10d3f8a0; body size 20 bytes.
#line 1 "ENTRY_10d3f8a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3f8a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10d3f8e0; body size 16 bytes.
#line 1 "ENTRY_10d3f8e0"

int __fastcall FUN_10d3f8e0(int param_1)

{
  return (int)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c) >> 3);
}


// Reference entry 10d3fb00; body size 35 bytes.
#line 1 "ENTRY_10d3fb00"

SCStr * __stdcall FUN_10d3fb00(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1af,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d3fc90; body size 21 bytes.
#line 1 "ENTRY_10d3fc90"

SCStr * __stdcall FUN_10d3fc90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d3fcd0; body size 21 bytes.
#line 1 "ENTRY_10d3fcd0"

SCStr * __stdcall FUN_10d3fcd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d3fd00; body size 17 bytes.
#line 1 "ENTRY_10d3fd00"

undefined4 __fastcall FUN_10d3fd00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d3ff40; body size 20 bytes.
#line 1 "ENTRY_10d3ff40"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3ff40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10d3ff90; body size 19 bytes.
#line 1 "ENTRY_10d3ff90"

undefined4 __fastcall FUN_10d3ff90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x28) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d40010; body size 19 bytes.
#line 1 "ENTRY_10d40010"

uint __fastcall FUN_10d40010(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x1c))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d40040; body size 52 bytes.
#line 1 "ENTRY_10d40040"

void __fastcall FUN_10d40040(int param_1)

{
  thunk_FUN_104d98f0();
  if (*(int **)(param_1 + 0xa8) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x14))(*(undefined4 *)(param_1 + 0x90));
  }
  if (*(int **)(param_1 + 0xb0) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x14))(*(undefined4 *)(param_1 + 0x84));
  }
  return;
}


// Reference entry 10d40090; body size 37 bytes.
#line 1 "ENTRY_10d40090"

void __thiscall Recovered_Bulk::m_FUN_10d40090(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d40300();
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_1 + -0x8c) + 0x110))(0);
  }
  return;
}


// Reference entry 10d40200; body size 52 bytes.
#line 1 "ENTRY_10d40200"

void __fastcall FUN_10d40200(int param_1)

{
  thunk_FUN_104d9cc0();
  if (*(int **)(param_1 + 0xb0) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x18))(*(undefined4 *)(param_1 + 0x84));
  }
  if (*(int **)(param_1 + 0xa8) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x18))(*(undefined4 *)(param_1 + 0x90));
  }
  return;
}


// Reference entry 10d40250; body size 34 bytes.
#line 1 "ENTRY_10d40250"

void __thiscall Recovered_Bulk::m_FUN_10d40250(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d40300();
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d40290; body size 34 bytes.
#line 1 "ENTRY_10d40290"

void __thiscall Recovered_Bulk::m_FUN_10d40290(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d40300();
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d402c0; body size 34 bytes.
#line 1 "ENTRY_10d402c0"

void __thiscall Recovered_Bulk::m_FUN_10d402c0(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d40300();
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d422d0; body size 19 bytes.
#line 1 "ENTRY_10d422d0"

uint __fastcall FUN_10d422d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x28) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x28) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d42420; body size 41 bytes.
#line 1 "ENTRY_10d42420"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d42420(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d42460; body size 41 bytes.
#line 1 "ENTRY_10d42460"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d42460(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d43bb0; body size 35 bytes.
#line 1 "ENTRY_10d43bb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d43bb0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d43400();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xa8);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d440e0; body size 51 bytes.
#line 1 "ENTRY_10d440e0"

void __thiscall Recovered_Bulk::m_FUN_10d440e0(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIAlarmManager:onAlarmsChanged"), 0);
  if (bVar1) {
    (**(code **)(*(int *)(param_1 + -0x80) + 0x16c))();
    (**(code **)(*(int *)(param_1 + -0x80) + 0x110))(0);
  }
  return;
}


// Reference entry 10d44fa0; body size 20 bytes.
#line 1 "ENTRY_10d44fa0"

undefined4 __fastcall FUN_10d44fa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d44fc0; body size 20 bytes.
#line 1 "ENTRY_10d44fc0"

undefined4 __fastcall FUN_10d44fc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d44fe0; body size 20 bytes.
#line 1 "ENTRY_10d44fe0"

undefined4 __fastcall FUN_10d44fe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d45e50; body size 17 bytes.
#line 1 "ENTRY_10d45e50"

undefined4 __fastcall FUN_10d45e50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d45e70; body size 17 bytes.
#line 1 "ENTRY_10d45e70"

undefined4 __fastcall FUN_10d45e70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d45e90; body size 17 bytes.
#line 1 "ENTRY_10d45e90"

undefined4 __fastcall FUN_10d45e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d45eb0; body size 63 bytes.
#line 1 "ENTRY_10d45eb0"

int * __thiscall Recovered_Bulk::m_FUN_10d45eb0(int *param_2,uint param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((uint)(*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 3) <= param_3) {
    *param_2 = (int)(0);
    return (int *)(param_2);
  }
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x84) + param_3 * 8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10d45f10; body size 21 bytes.
#line 1 "ENTRY_10d45f10"

SCStr * __stdcall FUN_10d45f10(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d45f90; body size 16 bytes.
#line 1 "ENTRY_10d45f90"

int __fastcall FUN_10d45f90(int param_1)

{
  return (int)(*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 3);
}


// Reference entry 10d460e0; body size 35 bytes.
#line 1 "ENTRY_10d460e0"

SCStr * __stdcall FUN_10d460e0(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1ec,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d46110; body size 35 bytes.
#line 1 "ENTRY_10d46110"

SCStr * __stdcall FUN_10d46110(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x1b0,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10d462d0; body size 17 bytes.
#line 1 "ENTRY_10d462d0"

undefined4 __fastcall FUN_10d462d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d462f0; body size 17 bytes.
#line 1 "ENTRY_10d462f0"

undefined4 __fastcall FUN_10d462f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d46310; body size 17 bytes.
#line 1 "ENTRY_10d46310"

undefined4 __fastcall FUN_10d46310(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d46740; body size 20 bytes.
#line 1 "ENTRY_10d46740"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d46740(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10d46760; body size 19 bytes.
#line 1 "ENTRY_10d46760"

undefined4 __fastcall FUN_10d46760(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d46780; body size 19 bytes.
#line 1 "ENTRY_10d46780"

undefined4 __fastcall FUN_10d46780(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x10) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d467a0; body size 19 bytes.
#line 1 "ENTRY_10d467a0"

undefined4 __fastcall FUN_10d467a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x18) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d467f0; body size 17 bytes.
#line 1 "ENTRY_10d467f0"

void __stdcall FUN_10d467f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onZoneGroupsChanged");
  return;
}


// Reference entry 10d46830; body size 60 bytes.
#line 1 "ENTRY_10d46830"

void __fastcall FUN_10d46830(int param_1)

{
  int iVar1;
  
  thunk_FUN_104d98f0();
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 0xb8) + 0x1c))(), 0);
  if (iVar1 == 5) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0xb8) + 100))();
    return;
  }
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x14))(param_1 + 0x80);
  }
  return;
}


// Reference entry 10d468e0; body size 37 bytes.
#line 1 "ENTRY_10d468e0"

void __fastcall FUN_10d468e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  (**(code **)(*(int *)(param_1 + -0xac) + 0x16c))();
  (**(code **)(*(int *)(param_1 + -0xac) + 0x110))(0);
  return;
}


// Reference entry 10d49e60; body size 35 bytes.
#line 1 "ENTRY_10d49e60"

void __fastcall FUN_10d49e60(int param_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  *(undefined1*)(param_1 + 0x40) = (undefined1)(1);
  iStack_14 = (int)(param_1);
  iStack_10 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d63d0();
  return;
}


// Reference entry 10d49e90; body size 19 bytes.
#line 1 "ENTRY_10d49e90"

uint __fastcall FUN_10d49e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d49eb0; body size 19 bytes.
#line 1 "ENTRY_10d49eb0"

uint __fastcall FUN_10d49eb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x10) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d49ed0; body size 19 bytes.
#line 1 "ENTRY_10d49ed0"

uint __fastcall FUN_10d49ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x18) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d4a400; body size 41 bytes.
#line 1 "ENTRY_10d4a400"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4a400(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d4a440; body size 41 bytes.
#line 1 "ENTRY_10d4a440"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4a440(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d4a530; body size 41 bytes.
#line 1 "ENTRY_10d4a530"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4a530(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d4a570; body size 41 bytes.
#line 1 "ENTRY_10d4a570"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4a570(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d4a5b0; body size 32 bytes.
#line 1 "ENTRY_10d4a5b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4a5b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d4b930; body size 60 bytes.
#line 1 "ENTRY_10d4b930"

void __fastcall FUN_10d4b930(int *param_1)

{
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 10d4cc10; body size 33 bytes.
#line 1 "ENTRY_10d4cc10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4cc10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d4cc40; body size 33 bytes.
#line 1 "ENTRY_10d4cc40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4cc40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d4d1a0; body size 61 bytes.
#line 1 "ENTRY_10d4d1a0"

void __thiscall Recovered_Bulk::m_FUN_10d4d1a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10d4d940; body size 21 bytes.
#line 1 "ENTRY_10d4d940"

SCStr * __stdcall FUN_10d4d940(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCGroupQueueSaveAction");
  return (SCStr *)(param_1);
}


// Reference entry 10d4d960; body size 21 bytes.
#line 1 "ENTRY_10d4d960"

SCStr * __stdcall FUN_10d4d960(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCGroupSaveAction");
  return (SCStr *)(param_1);
}


// Reference entry 10d4d980; body size 21 bytes.
#line 1 "ENTRY_10d4d980"

SCStr * __stdcall FUN_10d4d980(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCGroupQueueSaveAction");
  return (SCStr *)(param_1);
}


// Reference entry 10d4ea90; body size 21 bytes.
#line 1 "ENTRY_10d4ea90"

SCStr * __stdcall FUN_10d4ea90(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 10d4eab0; body size 32 bytes.
#line 1 "ENTRY_10d4eab0"

SCStr * __stdcall FUN_10d4eab0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_1 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_1);
}


// Reference entry 10d4eae0; body size 21 bytes.
#line 1 "ENTRY_10d4eae0"

SCStr * __stdcall FUN_10d4eae0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIAddToQueueAtNumberDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 10d4f3a0; body size 33 bytes.
#line 1 "ENTRY_10d4f3a0"

undefined4 __stdcall FUN_10d4f3a0(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 1) && (param_1 != 2)) {
    uVar1 = (undefined4)(thunk_FUN_102105a0(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 10d4f570; body size 62 bytes.
#line 1 "ENTRY_10d4f570"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d4f570(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  if (*(char *)(param_1 + 0x299) != '\0') {
    thunk_FUN_10211340(param_2);
    return (SCStr *)(param_2);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2292,&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 10d507d0; body size 22 bytes.
#line 1 "ENTRY_10d507d0"

undefined1 __fastcall FUN_10d507d0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 8) + 0x28))(), 0);
    if (cVar1 == '\0') {
      return (undefined1)(0);
    }
  }
  return (undefined1)(1);
}


// Reference entry 10d50800; body size 27 bytes.
#line 1 "ENTRY_10d50800"

undefined4 __fastcall FUN_10d50800(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x288) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x288) + 0x24))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10d50d00; body size 56 bytes.
#line 1 "ENTRY_10d50d00"

void __thiscall Recovered_Bulk::m_FUN_10d50d00(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x288));
  if ((iVar1 != 0) || (iVar1 = (int)(*(int *)(param_1 + 0x290)), iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 8) + 0x14))(0);
  }
  *(undefined1*)(param_1 + 0x298) = (undefined1)(0);
  thunk_FUN_1021b750(param_2);
  return;
}


// Reference entry 10d515e0; body size 39 bytes.
#line 1 "ENTRY_10d515e0"

void __thiscall Recovered_Bulk::m_FUN_10d515e0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_104da1b0(param_2);
  if (*(int **)(param_1 + 0x288) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x288) + 0x2c))();
    return;
  }
  return;
}


// Reference entry 10d51ab0; body size 17 bytes.
#line 1 "ENTRY_10d51ab0"

undefined4 __fastcall FUN_10d51ab0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x280) == '\0') {
    return (undefined4)(0);
  }
  uVar1 = (undefined4)(thunk_FUN_1020fe60(), 0);
  return (undefined4)(uVar1);
}


// Reference entry 10d51bf0; body size 62 bytes.
#line 1 "ENTRY_10d51bf0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d51bf0(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  
  if (*(char *)(param_1 + 0x280) == '\0') {
    pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x229d,&DAT_11882ff0), 0);
    ((SCStr *)(param_2))->int_allocRep(pcVar1);
    return (SCStr *)(param_2);
  }
  thunk_FUN_10211340(param_2);
  return (SCStr *)(param_2);
}


// Reference entry 10d53b70; body size 33 bytes.
#line 1 "ENTRY_10d53b70"

void __fastcall FUN_10d53b70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
    thunk_FUN_10d53f30();
  }
  return;
}


// Reference entry 10d540a0; body size 37 bytes.
#line 1 "ENTRY_10d540a0"

void __thiscall Recovered_Bulk::m_FUN_10d540a0(undefined4 param_2,SCStr *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIController:onConnectivityStateChanged"), 0);
  if (bVar1) {
    (**(code **)(*(int *)*param_1 + 0x110))(0);
  }
  return;
}


// Reference entry 10d541e0; body size 35 bytes.
#line 1 "ENTRY_10d541e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d541e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d53c40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x118);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d54210; body size 33 bytes.
#line 1 "ENTRY_10d54210"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d54210(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d54240; body size 32 bytes.
#line 1 "ENTRY_10d54240"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d54240(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10d53f30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return (undefined4)(param_1);
}


// Reference entry 10d54390; body size 19 bytes.
#line 1 "ENTRY_10d54390"

void __thiscall Recovered_Bulk::m_FUN_10d54390(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d543b0; body size 19 bytes.
#line 1 "ENTRY_10d543b0"

void __thiscall Recovered_Bulk::m_FUN_10d543b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d543d0; body size 21 bytes.
#line 1 "ENTRY_10d543d0"

void __thiscall Recovered_Bulk::m_FUN_10d543d0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d543f0; body size 21 bytes.
#line 1 "ENTRY_10d543f0"

void __thiscall Recovered_Bulk::m_FUN_10d543f0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d54410; body size 35 bytes.
#line 1 "ENTRY_10d54410"

void __stdcall FUN_10d54410(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    thunk_FUN_10d53f30();
  }
  return;
}


// Reference entry 10d54440; body size 38 bytes.
#line 1 "ENTRY_10d54440"

void __thiscall Recovered_Bulk::m_FUN_10d54440(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIController:onConnectivityStateChanged"), 0);
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 4) + 0x110))(0);
  }
  return;
}


// Reference entry 10d545a0; body size 19 bytes.
#line 1 "ENTRY_10d545a0"

void __thiscall Recovered_Bulk::m_FUN_10d545a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d545c0; body size 19 bytes.
#line 1 "ENTRY_10d545c0"

void __thiscall Recovered_Bulk::m_FUN_10d545c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d54a10; body size 46 bytes.
#line 1 "ENTRY_10d54a10"

void __fastcall FUN_10d54a10(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  iVar2 = (int)(*param_1);
  if (iVar2 != iVar1) {
    do {
      thunk_FUN_10d53f30();
      iVar2 = (int)(iVar2 + 0x30);
    } while (iVar2 != iVar1);
    param_1[1] = (int)(*param_1);
    return;
  }
  param_1[1] = (int)(iVar2);
  return;
}


// Reference entry 10d54a50; body size 59 bytes.
#line 1 "ENTRY_10d54a50"

void __stdcall FUN_10d54a50(int param_1,int param_2)

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


// Reference entry 10d54d40; body size 20 bytes.
#line 1 "ENTRY_10d54d40"

undefined4 __fastcall FUN_10d54d40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x38))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d553a0; body size 17 bytes.
#line 1 "ENTRY_10d553a0"

undefined4 __fastcall FUN_10d553a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x18))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d55450; body size 23 bytes.
#line 1 "ENTRY_10d55450"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d55450(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->op_ctor((SCStr *)(param_1 + 0xbc));
  return (SCStr *)(param_2);
}


// Reference entry 10d554c0; body size 28 bytes.
#line 1 "ENTRY_10d554c0"

undefined4 __stdcall FUN_10d554c0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 2) {
    uVar1 = (undefined4)(thunk_FUN_104d8ab0(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(4);
}


// Reference entry 10d554f0; body size 55 bytes.
#line 1 "ENTRY_10d554f0"

SCStr * FUN_10d554f0(SCStr *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 2) {
    thunk_FUN_104d8ba0(param_1,param_2,param_3);
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("emptysearch");
  return (SCStr *)(param_1);
}


// Reference entry 10d55ac0; body size 17 bytes.
#line 1 "ENTRY_10d55ac0"

undefined4 __fastcall FUN_10d55ac0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d56df0; body size 19 bytes.
#line 1 "ENTRY_10d56df0"

undefined4 __fastcall FUN_10d56df0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x20) + 0x24))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d57050; body size 17 bytes.
#line 1 "ENTRY_10d57050"

void __stdcall FUN_10d57050(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCIHousehold:onSearchablesListChanged");
  return;
}


// Reference entry 10d57bf0; body size 42 bytes.
#line 1 "ENTRY_10d57bf0"

void __fastcall FUN_10d57bf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  (**(code **)(*(int *)(param_1 + -0x94) + 0x160))();
  thunk_FUN_10d55d20();
  (**(code **)(*(int *)(param_1 + -0x94) + 0x15c))();
  return;
}


// Reference entry 10d58c00; body size 19 bytes.
#line 1 "ENTRY_10d58c00"

uint __fastcall FUN_10d58c00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x20) + 0x28))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d58f10; body size 41 bytes.
#line 1 "ENTRY_10d58f10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d58f10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d59ad0; body size 19 bytes.
#line 1 "ENTRY_10d59ad0"

void __thiscall Recovered_Bulk::m_FUN_10d59ad0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d59af0; body size 21 bytes.
#line 1 "ENTRY_10d59af0"

void __thiscall Recovered_Bulk::m_FUN_10d59af0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 10d59be0; body size 19 bytes.
#line 1 "ENTRY_10d59be0"

void __thiscall Recovered_Bulk::m_FUN_10d59be0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d59c40; body size 23 bytes.
#line 1 "ENTRY_10d59c40"

uint __fastcall FUN_10d59c40(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0xd8))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d59d80; body size 21 bytes.
#line 1 "ENTRY_10d59d80"

SCStr * __stdcall FUN_10d59d80(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCMySonosDataSource");
  return (SCStr *)(param_1);
}


// Reference entry 10d59da0; body size 43 bytes.
#line 1 "ENTRY_10d59da0"

void __fastcall FUN_10d59da0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10d59de0; body size 43 bytes.
#line 1 "ENTRY_10d59de0"

void __fastcall FUN_10d59de0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10d59e20; body size 21 bytes.
#line 1 "ENTRY_10d59e20"

void __fastcall FUN_10d59e20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x88) + 0xc4))();
    return;
  }
  return;
}


// Reference entry 10d59ee0; body size 44 bytes.
#line 1 "ENTRY_10d59ee0"

undefined4 __thiscall Recovered_Bulk::m_FUN_10d59ee0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0xe8))(param_2);
    return (undefined4)(param_2);
  }
  createPropertyBag();
  return (undefined4)(param_2);
}


// Reference entry 10d59f20; body size 23 bytes.
#line 1 "ENTRY_10d59f20"

undefined4 __fastcall FUN_10d59f20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x50))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(1);
}


// Reference entry 10d59f40; body size 18 bytes.
#line 1 "ENTRY_10d59f40"

undefined4 __fastcall FUN_10d59f40(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x54))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a0c0; body size 18 bytes.
#line 1 "ENTRY_10d5a0c0"

undefined4 __fastcall FUN_10d5a0c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 100))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a1b0; body size 20 bytes.
#line 1 "ENTRY_10d5a1b0"

undefined4 __fastcall FUN_10d5a1b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x30))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a1e0; body size 21 bytes.
#line 1 "ENTRY_10d5a1e0"

undefined4 __fastcall FUN_10d5a1e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0xb8))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a200; body size 21 bytes.
#line 1 "ENTRY_10d5a200"

undefined4 __fastcall FUN_10d5a200(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0xbc))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a220; body size 23 bytes.
#line 1 "ENTRY_10d5a220"

undefined4 __fastcall FUN_10d5a220(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x40))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(7);
}


// Reference entry 10d5a240; body size 57 bytes.
#line 1 "ENTRY_10d5a240"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d5a240(SCStr *param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0x38))(param_2,param_3,param_4);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10d5a300; body size 20 bytes.
#line 1 "ENTRY_10d5a300"

undefined4 __fastcall FUN_10d5a300(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x4c))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a320; body size 20 bytes.
#line 1 "ENTRY_10d5a320"

undefined4 __fastcall FUN_10d5a320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x48))(), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10d5a340; body size 53 bytes.
#line 1 "ENTRY_10d5a340"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d5a340(SCStr *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0x24))(param_2,param_3);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10d5a3b0; body size 49 bytes.
#line 1 "ENTRY_10d5a3b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d5a3b0(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0x1c))(param_2);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10d5a430; body size 61 bytes.
#line 1 "ENTRY_10d5a430"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d5a430(SCStr *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x88) + 0xe4))(param_2,param_3);
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_2 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_2);
}


// Reference entry 10d5a4e0; body size 22 bytes.
#line 1 "ENTRY_10d5a4e0"

uint __fastcall FUN_10d5a4e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x44))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a700; body size 23 bytes.
#line 1 "ENTRY_10d5a700"

uint __fastcall FUN_10d5a700(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x84))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a720; body size 23 bytes.
#line 1 "ENTRY_10d5a720"

uint __fastcall FUN_10d5a720(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x90))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a740; body size 20 bytes.
#line 1 "ENTRY_10d5a740"

uint __fastcall FUN_10d5a740(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x6c))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a760; body size 20 bytes.
#line 1 "ENTRY_10d5a760"

uint __fastcall FUN_10d5a760(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x60))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a780; body size 48 bytes.
#line 1 "ENTRY_10d5a780"

uint __fastcall FUN_10d5a780(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(thunk_FUN_10d5a820(), 0);
  if ((char)uVar1 == '\0') {
    uVar1 = (uint)(thunk_FUN_10d5a520(), 0);
    if (((char)uVar1 == '\0') && (*(int **)(param_1 + 0x88) != (int *)((0x0)))) {
                    
                    
      uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x80))(), 0);
      return (uint)(uVar1);
    }
  }
  return (uint)(uVar1 & 0xffffff00);
}


// Reference entry 10d5a7e0; body size 22 bytes.
#line 1 "ENTRY_10d5a7e0"

uint __fastcall FUN_10d5a7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x20))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a800; body size 20 bytes.
#line 1 "ENTRY_10d5a800"

uint __fastcall FUN_10d5a800(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x70))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5a910; body size 49 bytes.
#line 1 "ENTRY_10d5a910"

undefined4 __fastcall FUN_10d5a910(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (char)(thunk_FUN_10d5a520(), 0);
  if (cVar1 == '\0') {
    cVar1 = (char)(thunk_FUN_10d5a820(), 0);
    if (cVar1 == '\0') {
      if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
        uVar2 = (undefined4)((**(code **)(**(int **)(param_1 + 0x88) + 0x5c))(), 0);
        return (undefined4)(uVar2);
      }
      return (undefined4)(0);
    }
  }
  return (undefined4)(1);
}


// Reference entry 10d5a960; body size 22 bytes.
#line 1 "ENTRY_10d5a960"

void __fastcall FUN_10d5a960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  if (*(int *)(param_1 + 8) != 0) {
                    
                    
    (**(code **)(*(int *)(*(int *)(param_1 + 8) + 0x80) + 0x14))();
    return;
  }
  return;
}


// Reference entry 10d5aa70; body size 23 bytes.
#line 1 "ENTRY_10d5aa70"

uint __fastcall FUN_10d5aa70(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0x94))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5add0; body size 21 bytes.
#line 1 "ENTRY_10d5add0"

void __fastcall FUN_10d5add0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x88) + 0xdc))();
    return;
  }
  return;
}


// Reference entry 10d5adf0; body size 21 bytes.
#line 1 "ENTRY_10d5adf0"

void __fastcall FUN_10d5adf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x88) + 200))();
    return;
  }
  return;
}


// Reference entry 10d5ae10; body size 23 bytes.
#line 1 "ENTRY_10d5ae10"

uint __fastcall FUN_10d5ae10(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0xcc))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5ae30; body size 23 bytes.
#line 1 "ENTRY_10d5ae30"

uint __fastcall FUN_10d5ae30(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0xd0))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5b120; body size 23 bytes.
#line 1 "ENTRY_10d5b120"

uint __fastcall FUN_10d5b120(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x88) + 0xc0))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d5db10; body size 41 bytes.
#line 1 "ENTRY_10d5db10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d5db10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d5e1b0; body size 33 bytes.
#line 1 "ENTRY_10d5e1b0"

void __fastcall FUN_10d5e1b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1[1]);
  for (iVar2 = (int)(*param_1); iVar2 != iVar1; iVar2 = iVar2 + 0x20) {
    thunk_FUN_10d5e270();
  }
  return;
}


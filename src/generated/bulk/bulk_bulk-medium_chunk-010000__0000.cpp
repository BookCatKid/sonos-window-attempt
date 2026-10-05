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
namespace std { struct _Locinfo { char _pad; _Locinfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int _Getcoll(A...); }; }
namespace std { struct locale { char _pad; locale(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); struct facet { char _pad; facet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } }; }; }
namespace std { template<class... A> int _Xbad_alloc(A...); template<class... A> int _Xout_of_range(A...); }
struct SCActionOnGroupDescriptorImpl { char _pad; SCActionOnGroupDescriptorImpl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int RTTI_Type_Descriptor; };
struct SCLibParameters { char _pad; SCLibParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int hasDeveloperOption(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getSCHousehold(A...); template<class... A> int getSingleton(A...); };
struct SCPlayMenuPlayNowDescriptor { char _pad; SCPlayMenuPlayNowDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int RTTI_Type_Descriptor; };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int beginsWith(A...); template<class... A> int hash(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
template<class...> struct pair { char _pad; pair(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
struct Aborting { char _pad; Aborting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AlarmMusicBrowseItem { char _pad; AlarmMusicBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AlarmMusicChimeItem { char _pad; AlarmMusicChimeItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AlarmMusicItem { char _pad; AlarmMusicItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AlarmMusicRootItem { char _pad; AlarmMusicRootItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AlbumArtistDisplayOption { char _pad; AlbumArtistDisplayOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Bad { char _pad; Bad(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Charge { char _pad; Charge(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Charging { char _pad; Charging(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ChickenExit { char _pad; ChickenExit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ClearAllRecentlyPlayed { char _pad; ClearAllRecentlyPlayed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentDailyIndexRefreshTime { char _pad; CurrentDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeleteItem { char _pad; DeleteItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DesiredDailyIndexRefreshTime { char _pad; DesiredDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Discharging { char _pad; Discharging(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Enum { char _pad; Enum(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Feature { char _pad; Feature(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct InfoViewWrapper { char _pad; InfoViewWrapper(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct InvalidateStack { char _pad; InvalidateStack(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MyRadioStations { char _pad; MyRadioStations(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct NavigateToRoomsMenu { char _pad; NavigateToRoomsMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnlineUpdateWizard { char _pad; OnlineUpdateWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Pairing { char _pad; Pairing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayMenuInstantPlayNowTV { char _pad; PlayMenuInstantPlayNowTV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayMenuPlayNowTV { char _pad; PlayMenuPlayNowTV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayNowTV { char _pad; PlayNowTV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Player { char _pad; Player(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Playlists { char _pad; Playlists(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RINCON_AssociatedZPUDN { char _pad; RINCON_AssociatedZPUDN(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RTTI_Type_Descriptor { char _pad; RTTI_Type_Descriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmContentBrowseItem { char _pad; SCAlarmContentBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAudioInputResource { char _pad; SCAudioInputResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAvailableServicesMenu { char _pad; SCAvailableServicesMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCContentBrowseItem { char _pad; SCContentBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCContentViewBrowseItem { char _pad; SCContentViewBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCGroupQueueSaveAction { char _pad; SCGroupQueueSaveAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCGroupSaveAction { char _pad; SCGroupSaveAction(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCHistoryBrowseItem { char _pad; SCHistoryBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCHistorySignInActionDescriptor { char _pad; SCHistorySignInActionDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAccountManager { char _pad; SCIAccountManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryEdit { char _pad; SCIActionCategoryEdit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryInstant { char _pad; SCIActionCategoryInstant(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategorySettings { char _pad; SCIActionCategorySettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAddToQueueAtNumberDescriptor { char _pad; SCIAddToQueueAtNumberDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBadgeIndicatorSettingsProperty { char _pad; SCIBadgeIndicatorSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBooleanSettingsProperty { char _pad; SCIBooleanSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIController { char _pad; SCIController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDeviceMusicEqualization { char _pad; SCIDeviceMusicEqualization(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIIndexManager { char _pad; SCIIndexManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIObj { char _pad; SCIObj(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISpinnerSettingsProperty { char _pad; SCISpinnerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCMusicServer { char _pad; SCMusicServer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCMusicServicesDataSource { char _pad; SCMusicServicesDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCMySonosDataSource { char _pad; SCMySonosDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpGetRDM { char _pad; SCOpGetRDM(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpGetStr { char _pad; SCOpGetStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpGetUsageDataShareOption { char _pad; SCOpGetUsageDataShareOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpValidateServiceCredentials { char _pad; SCOpValidateServiceCredentials(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCScheduleIndexUpdateSettingsItem { char _pad; SCScheduleIndexUpdateSettingsItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCServiceAppInteropManager { char _pad; SCServiceAppInteropManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSetAlarmMusicDescriptor { char _pad; SCSetAlarmMusicDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSpinnerSettingsItem { char _pad; SCSpinnerSettingsItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSpinnerSettingsProperty { char _pad; SCSpinnerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjQInternalListener { char _pad; SCSwfObjQInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjQListener { char _pad; SCSwfObjQListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfObjUMInternalListener { char _pad; SCSwfObjUMInternalListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCThreadSafeInc { char _pad; SCThreadSafeInc(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCViewContributingArtistsSettingsItem { char _pad; SCViewContributingArtistsSettingsItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SaveAlarm { char _pad; SaveAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Secure { char _pad; Secure(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subscribe { char _pad; Subscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SwfObjQ { char _pad; SwfObjQ(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SwfStr { char _pad; SwfStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UnavailableSettings { char _pad; UnavailableSettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unsubscribe { char _pad; Unsubscribe(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct _Collvec { char _pad; _Collvec(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int _Page; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
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
extern "C" void LAB_10001361(void);
extern "C" void LAB_10001d3e(void);
extern "C" void LAB_1000296e(void);
extern "C" void LAB_10002bad(void);
extern "C" void LAB_10002eeb(void);
extern "C" void LAB_10003a35(void);
extern "C" void LAB_10003ebd(void);
extern "C" void LAB_100051fa(void);
extern "C" void LAB_10005b32(void);
extern "C" void LAB_10005f9c(void);
extern "C" void LAB_10007a90(void);
extern "C" void LAB_10007c7a(void);
extern "C" void LAB_1000845e(void);
extern "C" void LAB_10008bde(void);
extern "C" void LAB_1000966f(void);
extern "C" void LAB_10009c64(void);
extern "C" void LAB_1000afab(void);
extern "C" void LAB_1000c7b6(void);
extern "C" void LAB_1000db2a(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_1000e3db(void);
extern "C" void LAB_1000e435(void);
extern "C" void LAB_1000e6f1(void);
extern "C" void LAB_1000e78c(void);
extern "C" void LAB_1000e827(void);
extern "C" void LAB_1000f669(void);
extern "C" void LAB_1000f9a7(void);
extern "C" void LAB_10012332(void);
extern "C" void LAB_10012648(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10013732(void);
extern "C" void LAB_10013746(void);
extern "C" void LAB_1001457e(void);
extern "C" void LAB_10014da8(void);
extern "C" void LAB_10015190(void);
extern "C" void LAB_10015532(void);
extern "C" void LAB_100168a6(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_100172ce(void);
extern "C" void LAB_1001be6e(void);
extern "C" void LAB_1001c9c2(void);
extern "C" void LAB_1001cba7(void);
extern "C" void LAB_1001dde0(void);
extern "C" void LAB_1001e231(void);
extern "C" void LAB_1001e90c(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_1001fd9d(void);
extern "C" void LAB_1001fde3(void);
extern "C" void LAB_10020aae(void);
extern "C" void LAB_10021a5d(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10023a4c(void);
extern "C" void LAB_1002428a(void);
extern "C" void LAB_10024a55(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002614d(void);
extern "C" void LAB_10026283(void);
extern "C" void LAB_10027e49(void);
extern "C" void LAB_10028d21(void);
extern "C" void LAB_1002a1a3(void);
extern "C" void LAB_1002b70b(void);
extern "C" void LAB_1002cd45(void);
extern "C" void LAB_1002d41b(void);
extern "C" void LAB_1002d682(void);
extern "C" void LAB_1002eb77(void);
extern "C" void LAB_1002f0b3(void);
extern "C" void LAB_1002f0c7(void);
extern "C" void LAB_1002f88d(void);
extern "C" void LAB_1002faea(void);
extern "C" void LAB_10030206(void);
extern "C" void LAB_100302e7(void);
extern "C" void LAB_10031985(void);
extern "C" void LAB_10032100(void);
extern "C" void LAB_10032cc2(void);
extern "C" void LAB_100339bf(void);
extern "C" void LAB_10033b86(void);
extern "C" void LAB_100354f4(void);
extern "C" void LAB_100355df(void);
extern "C" void LAB_100357fb(void);
extern "C" void LAB_1003614c(void);
extern "C" void LAB_1003619c(void);
extern "C" void LAB_1003639f(void);
extern "C" void LAB_10036af2(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10036c5a(void);
extern "C" void LAB_10037380(void);
extern "C" void LAB_100373d5(void);
extern "C" void LAB_10037812(void);
extern "C" void LAB_10037bc8(void);
extern "C" void LAB_10038046(void);
extern "C" void LAB_10038b4f(void);
extern "C" void LAB_10038d48(void);
extern "C" void LAB_1003a4a9(void);
extern "C" void LAB_1003a904(void);
extern "C" void LAB_1003b3ae(void);
extern "C" void LAB_1003b4d5(void);
extern "C" void LAB_1003b507(void);
extern "C" void LAB_1003c3b7(void);
extern "C" void LAB_1003c763(void);
extern "C" void LAB_1003d479(void);
extern "C" void LAB_1003dde8(void);
extern "C" void LAB_1003e86a(void);
extern "C" void LAB_10040c0f(void);
extern "C" void LAB_10041245(void);
extern "C" void LAB_100414cf(void);
extern "C" void LAB_10043dba(void);
extern "C" void LAB_10045354(void);
extern "C" void LAB_10045363(void);
extern "C" void LAB_10047a5f(void);
extern "C" void LAB_1004838d(void);
extern "C" void LAB_10049288(void);
extern "C" void LAB_1004bdfd(void);
extern "C" void LAB_1004cbc2(void);
extern "C" void LAB_1004cd07(void);
extern "C" void LAB_1004d266(void);
extern "C" void LAB_1004d2ca(void);
extern "C" void LAB_1004de23(void);
extern "C" void LAB_1004e08a(void);
extern "C" void LAB_1004e189(void);
extern "C" void LAB_1004e229(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_1004fd7c(void);
extern "C" void LAB_100503c6(void);
extern "C" void LAB_100505ec(void);
extern "C" void LAB_10051992(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10052f77(void);
extern "C" void LAB_100532dd(void);
extern "C" void LAB_1005409d(void);
extern "C" void LAB_10055a8d(void);
extern "C" void LAB_10055aa1(void);
extern "C" void LAB_100561d6(void);
extern "C" void LAB_10056e92(void);
extern "C" void LAB_10057bad(void);
extern "C" void LAB_10058643(void);
extern "C" void LAB_100586b6(void);
extern "C" void LAB_10058bed(void);
extern "C" void LAB_10058cc9(void);
extern "C" void LAB_1005a37b(void);
extern "C" void LAB_1005b078(void);
extern "C" void LAB_1005ba00(void);
extern "C" void LAB_1005c8c4(void);
extern "C" void LAB_1005cb17(void);
extern "C" void LAB_1005e1b5(void);
extern "C" void LAB_1005edea(void);
extern "C" void LAB_1005f1be(void);
extern "C" void LAB_1005fec5(void);
extern "C" void LAB_1006005a(void);
extern "C" void LAB_10062364(void);
extern "C" void LAB_1006299a(void);
extern "C" void LAB_10063ba1(void);
extern "C" void LAB_10063fed(void);
extern "C" void LAB_10064a3d(void);
extern "C" void LAB_10065348(void);
extern "C" void LAB_100665a4(void);
extern "C" void LAB_1006688d(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_10068872(void);
extern "C" void LAB_10068994(void);
extern "C" void LAB_10068caf(void);
extern "C" void LAB_1006990c(void);
extern "C" void LAB_10069920(void);
extern "C" void LAB_1006a483(void);
extern "C" void LAB_1006a9e7(void);
extern "C" void LAB_1006aac8(void);
extern "C" void LAB_1006ac85(void);
extern "C" void LAB_1006c03f(void);
extern "C" void LAB_1006def3(void);
extern "C" void LAB_1006e812(void);
extern "C" void LAB_1006ffd2(void);
extern "C" void LAB_10070441(void);
extern "C" void LAB_10070892(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_100718dc(void);
extern "C" void LAB_10071d50(void);
extern "C" void LAB_10072d77(void);
extern "C" void LAB_10073b91(void);
extern "C" void LAB_10073d53(void);
extern "C" void LAB_10076341(void);
extern "C" void LAB_10076751(void);
extern "C" void LAB_10077a61(void);
extern "C" void LAB_10077d77(void);
extern "C" void LAB_10078baf(void);
extern "C" void LAB_1007a766(void);
extern "C" void LAB_1007a7a2(void);
extern "C" void LAB_1007b4c2(void);
extern "C" void LAB_1007b9c2(void);
extern "C" void LAB_1007bb66(void);
extern "C" void LAB_1007bb6b(void);
extern "C" void LAB_1007be1d(void);
extern "C" void LAB_1007bed1(void);
extern "C" void LAB_1007d46b(void);
extern "C" void LAB_1007dec5(void);
extern "C" void LAB_1007eb95(void);
extern "C" void LAB_1007fb03(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_10080c3d(void);
extern "C" void LAB_10081787(void);
extern "C" void LAB_1008339d(void);
extern "C" void LAB_10083721(void);
extern "C" void LAB_10083b22(void);
extern "C" void LAB_10086944(void);
extern "C" void LAB_1008774a(void);
extern "C" void LAB_10087862(void);
extern "C" void LAB_10088ae1(void);
extern "C" void LAB_100890ea(void);
extern "C" void LAB_1008a48b(void);
extern "C" void LAB_1008b435(void);
extern "C" void LAB_1008c475(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_1008e55e(void);
extern "C" void LAB_1008e75c(void);
extern "C" void LAB_10090520(void);
extern "C" void LAB_100913f8(void);
extern "C" void LAB_10092735(void);
extern "C" void LAB_100928cf(void);
extern "C" void LAB_10093329(void);
extern "C" void LAB_10093bc1(void);
extern "C" void LAB_10095c14(void);
extern "C" void LAB_10096cae(void);
extern "C" void LAB_10098ea0(void);
extern "C" void LAB_100991f2(void);
extern "C" void LAB_10099580(void);
extern "C" void LAB_10099670(void);
extern "C" void LAB_1009a22d(void);
extern "C" void LAB_10c8de50(void);
extern "C" void LAB_10c8de80(void);
extern "C" void LAB_10c8dea8(void);
extern "C" void LAB_10c8deb4(void);
extern "C" void LAB_10c93240(void);
extern "C" void LAB_10cbcff0(void);
extern "C" void LAB_10cf1ee0(void);
extern "C" void LAB_10cf2340(void);
extern "C" void LAB_1148a060(void);
extern "C" void LAB_1148a066(void);
extern "C" void LAB_1148a279(void);
extern "C" void LAB_1148ce17(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1186d2f4(void);
extern "C" void LAB_1186d30c(void);
extern "C" void LAB_118782f8(void);
extern "C" void LAB_118783f0(void);
extern "C" void LAB_11878f88(void);
extern "C" void LAB_11879594(void);
extern "C" void LAB_118795c8(void);
extern "C" void LAB_11879604(void);
extern "C" void LAB_11879640(void);
extern "C" void LAB_11879678(void);
extern "C" void LAB_118796b0(void);
extern "C" void LAB_118796e4(void);
extern "C" void LAB_1187971c(void);
extern "C" void LAB_11879758(void);
extern "C" void LAB_11879790(void);
extern "C" void LAB_118797cc(void);
extern "C" void LAB_11879808(void);
extern "C" void LAB_11879844(void);
extern "C" void LAB_11879888(void);
extern "C" void LAB_118798c0(void);
extern "C" void LAB_11879900(void);
extern "C" void LAB_1187993c(void);
extern "C" void LAB_11879978(void);
extern "C" void LAB_118799b8(void);
extern "C" void LAB_1187ae7c(void);
extern "C" void LAB_1187af24(void);
extern "C" void LAB_1187b07c(void);
extern "C" void LAB_1187b0d0(void);
extern "C" void LAB_1187b2a8(void);
extern "C" void LAB_1187b668(void);
extern "C" void LAB_1187c800(void);
extern "C" void LAB_1187c820(void);
extern "C" void LAB_1187c84c(void);
extern "C" void LAB_11880164(void);
extern "C" void LAB_11880650(void);
extern "C" void LAB_11880660(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11882ff0(void);
extern "C" void LAB_118835c0(void);
extern "C" void LAB_11892f2c(void);
extern "C" void LAB_1189bdd4(void);
extern "C" void LAB_118abe0c(void);
extern "C" void LAB_119137bc(void);
extern "C" void LAB_119139d4(void);
extern "C" void LAB_119144e8(void);
extern "C" void LAB_1191452c(void);
extern "C" void LAB_119168cc(void);
extern "C" void LAB_11916f64(void);
extern "C" void LAB_11917054(void);
extern "C" void LAB_11918350(void);
extern "C" void LAB_119183e4(void);
extern "C" void LAB_11918d30(void);
extern "C" void LAB_1191a200(void);
extern "C" void LAB_1191a79c(void);
extern "C" void LAB_1191a8f8(void);
extern "C" void LAB_1191a91c(void);
extern "C" void LAB_1191b360(void);
extern "C" void LAB_1191b38c(void);
extern "C" void LAB_1191b3ac(void);
extern "C" void LAB_1191b3d0(void);
extern "C" void LAB_1191b3e8(void);
extern "C" void LAB_1191b464(void);
extern "C" void LAB_1191b490(void);
extern "C" void LAB_1191b788(void);
extern "C" void LAB_1191b794(void);
extern "C" void LAB_1191b7a4(void);
extern "C" void LAB_1191c1a0(void);
extern "C" void LAB_1191c274(void);
extern "C" void LAB_1191c350(void);
extern "C" void LAB_1191c4e4(void);
extern "C" void LAB_11920854(void);
extern "C" void LAB_1192092c(void);
extern "C" void LAB_11920d5c(void);
extern "C" void LAB_11921d48(void);
extern "C" void LAB_1192263c(void);
extern "C" void LAB_1192428c(void);
extern "C" void LAB_11925180(void);
extern "C" void LAB_11926a88(void);
extern "C" void LAB_11926aac(void);
extern "C" void LAB_11927f04(void);
extern "C" void LAB_11927f4c(void);
extern "C" void LAB_11927fb8(void);
extern "C" void LAB_11928b8c(void);
extern "C" void LAB_11928bb0(void);
extern "C" void LAB_11928bd4(void);
extern "C" void LAB_1192bf18(void);
extern "C" void LAB_1192bf3c(void);
extern "C" void LAB_1192c1bc(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_1212f648(void);
extern "C" void LAB_12142188(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a10c8(void);
extern "C" void LAB_121a5354(void);
extern "C" void LAB_121a5e80(void);
extern "C" void LAB_122e8a18(void);
extern "C" void LAB_122fc308(void);
extern "C" void LAB_122fc314(void);
extern "C" void LAB_122fc7a8(void);
extern "C" void LAB_122fc7ac(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fca5c(void);


struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_10beebc0(int *param_2); template<class... A> int m_FUN_10beebc0(A...); undefined4 * __thiscall m_FUN_10beed50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10beed50(A...); undefined4 * __thiscall m_FUN_10bf0600(byte param_2); template<class... A> int m_FUN_10bf0600(A...); undefined4 * __thiscall m_FUN_10bf06b0(byte param_2); template<class... A> int m_FUN_10bf06b0(A...); undefined4 * __thiscall m_FUN_10bf06e0(byte param_2); template<class... A> int m_FUN_10bf06e0(A...); undefined4 __thiscall m_FUN_10bf0710(byte param_2); template<class... A> int m_FUN_10bf0710(A...); undefined4 __thiscall m_FUN_10bf0740(byte param_2); template<class... A> int m_FUN_10bf0740(A...); undefined4 * __thiscall m_FUN_10bf0770(byte param_2); template<class... A> int m_FUN_10bf0770(A...); undefined4 * __thiscall m_FUN_10bf07a0(byte param_2); template<class... A> int m_FUN_10bf07a0(A...); undefined4 * __thiscall m_FUN_10bf07d0(byte param_2); template<class... A> int m_FUN_10bf07d0(A...); undefined4 * __thiscall m_FUN_10bf0800(byte param_2); template<class... A> int m_FUN_10bf0800(A...); int * __thiscall m_FUN_10bf0e70(int *param_2); template<class... A> int m_FUN_10bf0e70(A...); int * __thiscall m_FUN_10bf0e90(int *param_2); template<class... A> int m_FUN_10bf0e90(A...); SCStr * __thiscall m_FUN_10bf0eb0(SCStr *param_2); template<class... A> int m_FUN_10bf0eb0(A...); int * __thiscall m_FUN_10bf0ed0(int *param_2); template<class... A> int m_FUN_10bf0ed0(A...); SCStr * __thiscall m_FUN_10bf0f00(SCStr *param_2); template<class... A> int m_FUN_10bf0f00(A...); int * __thiscall m_FUN_10bf1100(int *param_2); template<class... A> int m_FUN_10bf1100(A...); int * __thiscall m_FUN_10bf1120(int *param_2); template<class... A> int m_FUN_10bf1120(A...); int * __thiscall m_FUN_10bf11a0(int *param_2); template<class... A> int m_FUN_10bf11a0(A...); int * __thiscall m_FUN_10bf11c0(int *param_2); template<class... A> int m_FUN_10bf11c0(A...); undefined4 * __thiscall m_FUN_10bf1470(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_10bf1470(A...); undefined4 * __thiscall m_FUN_10bf21c0(int *param_2); template<class... A> int m_FUN_10bf21c0(A...); undefined4 * __thiscall m_FUN_10bf21e0(int *param_2); template<class... A> int m_FUN_10bf21e0(A...); undefined4 * __thiscall m_FUN_10bf22f0(byte param_2); template<class... A> int m_FUN_10bf22f0(A...); undefined4 * __thiscall m_FUN_10bf2330(byte param_2); template<class... A> int m_FUN_10bf2330(A...); undefined4 * __thiscall m_FUN_10bf2380(byte param_2); template<class... A> int m_FUN_10bf2380(A...); undefined4 * __thiscall m_FUN_10bf23d0(byte param_2); template<class... A> int m_FUN_10bf23d0(A...); undefined4 * __thiscall m_FUN_10bf2400(byte param_2); template<class... A> int m_FUN_10bf2400(A...); undefined4 * __thiscall m_FUN_10bf2e90(byte param_2); template<class... A> int m_FUN_10bf2e90(A...); undefined4 * __thiscall m_FUN_10bf2ed0(byte param_2); template<class... A> int m_FUN_10bf2ed0(A...); SCStr * __thiscall m_FUN_10bf2fe0(SCStr *param_2); template<class... A> int m_FUN_10bf2fe0(A...); SCStr * __thiscall m_FUN_10bf3000(SCStr *param_2); template<class... A> int m_FUN_10bf3000(A...); undefined4 * __thiscall m_FUN_10bf3350(byte param_2); template<class... A> int m_FUN_10bf3350(A...); undefined4 * __thiscall m_FUN_10bf3450(byte param_2); template<class... A> int m_FUN_10bf3450(A...); SCStr * __thiscall m_FUN_10bf34d0(SCStr *param_2); template<class... A> int m_FUN_10bf34d0(A...); SCStr * __thiscall m_FUN_10bf34f0(SCStr *param_2); template<class... A> int m_FUN_10bf34f0(A...); int __thiscall m_FUN_10bf3b40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bf3b40(A...); int __thiscall m_FUN_10bf3b80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bf3b80(A...); undefined4 * __thiscall m_FUN_10bf6070(byte param_2); template<class... A> int m_FUN_10bf6070(A...); undefined4 __thiscall m_FUN_10bf60b0(byte param_2); template<class... A> int m_FUN_10bf60b0(A...); undefined4 __thiscall m_FUN_10bf61a0(byte param_2); template<class... A> int m_FUN_10bf61a0(A...); undefined4 * __thiscall m_FUN_10bf61d0(byte param_2); template<class... A> int m_FUN_10bf61d0(A...); undefined4 __thiscall m_FUN_10bfbbe0(byte param_2); template<class... A> int m_FUN_10bfbbe0(A...); undefined4 * __thiscall m_FUN_10bfbc10(byte param_2); template<class... A> int m_FUN_10bfbc10(A...); undefined4 __thiscall m_FUN_10bfbc50(byte param_2); template<class... A> int m_FUN_10bfbc50(A...); undefined4 __thiscall m_FUN_10bfbc80(byte param_2); template<class... A> int m_FUN_10bfbc80(A...); undefined4 * __thiscall m_FUN_10bfe530(int *param_2); template<class... A> int m_FUN_10bfe530(A...); undefined4 * __thiscall m_FUN_10bfe5b0(int *param_2); template<class... A> int m_FUN_10bfe5b0(A...); undefined4 * __thiscall m_FUN_10bfe5f0(int *param_2); template<class... A> int m_FUN_10bfe5f0(A...); undefined4 * __thiscall m_FUN_10bfee80(byte param_2); template<class... A> int m_FUN_10bfee80(A...); undefined4 * __thiscall m_FUN_10bfeec0(byte param_2); template<class... A> int m_FUN_10bfeec0(A...); undefined4 * __thiscall m_FUN_10bfef00(byte param_2); template<class... A> int m_FUN_10bfef00(A...); undefined4 * __thiscall m_FUN_10bfef50(byte param_2); template<class... A> int m_FUN_10bfef50(A...); undefined4 * __thiscall m_FUN_10bfef80(byte param_2); template<class... A> int m_FUN_10bfef80(A...); undefined4 __thiscall m_FUN_10bff130(byte param_2); template<class... A> int m_FUN_10bff130(A...); void __thiscall m_FUN_10bff180(int *param_2); template<class... A> int m_FUN_10bff180(A...); void __thiscall m_FUN_10c01490(SCStr *param_2); template<class... A> int m_FUN_10c01490(A...); void __thiscall m_FUN_10c014c0(SCStr *param_2); template<class... A> int m_FUN_10c014c0(A...); void __thiscall m_FUN_10c014f0(SCStr *param_2); template<class... A> int m_FUN_10c014f0(A...); undefined4 * __thiscall m_FUN_10c01d30(int *param_2); template<class... A> int m_FUN_10c01d30(A...); undefined4 * __thiscall m_FUN_10c01d70(int *param_2); template<class... A> int m_FUN_10c01d70(A...); undefined4 * __thiscall m_FUN_10c025f0(byte param_2); template<class... A> int m_FUN_10c025f0(A...); undefined4 * __thiscall m_FUN_10c02630(byte param_2); template<class... A> int m_FUN_10c02630(A...); int * __thiscall m_FUN_10c03220(int *param_2); template<class... A> int m_FUN_10c03220(A...); undefined4 * __thiscall m_FUN_10c05320(int *param_2); template<class... A> int m_FUN_10c05320(A...); undefined4 * __thiscall m_FUN_10c05360(int *param_2); template<class... A> int m_FUN_10c05360(A...); undefined4 * __thiscall m_FUN_10c053a0(int *param_2); template<class... A> int m_FUN_10c053a0(A...); undefined4 * __thiscall m_FUN_10c053e0(int *param_2); template<class... A> int m_FUN_10c053e0(A...); undefined4 * __thiscall m_FUN_10c062d0(byte param_2); template<class... A> int m_FUN_10c062d0(A...); undefined4 * __thiscall m_FUN_10c06310(byte param_2); template<class... A> int m_FUN_10c06310(A...); undefined4 * __thiscall m_FUN_10c06360(byte param_2); template<class... A> int m_FUN_10c06360(A...); undefined4 * __thiscall m_FUN_10c06560(byte param_2); template<class... A> int m_FUN_10c06560(A...); undefined4 * __thiscall m_FUN_10c065a0(byte param_2); template<class... A> int m_FUN_10c065a0(A...); void __thiscall m_FUN_10c06e20(char param_2); template<class... A> int m_FUN_10c06e20(A...); undefined4 __thiscall m_FUN_10c0f120(undefined4 param_2); template<class... A> int m_FUN_10c0f120(A...); undefined4 * __thiscall m_FUN_10c16f90(int *param_2); template<class... A> int m_FUN_10c16f90(A...); undefined4 * __thiscall m_FUN_10c16fd0(int *param_2); template<class... A> int m_FUN_10c16fd0(A...); undefined4 * __thiscall m_FUN_10c17010(int *param_2); template<class... A> int m_FUN_10c17010(A...); undefined4 * __thiscall m_FUN_10c17050(int *param_2); template<class... A> int m_FUN_10c17050(A...); undefined4 * __thiscall m_FUN_10c17d60(byte param_2); template<class... A> int m_FUN_10c17d60(A...); undefined4 __thiscall m_FUN_10c17d90(byte param_2); template<class... A> int m_FUN_10c17d90(A...); undefined4 __thiscall m_FUN_10c17dc0(byte param_2); template<class... A> int m_FUN_10c17dc0(A...); undefined4 __thiscall m_FUN_10c17df0(byte param_2); template<class... A> int m_FUN_10c17df0(A...); undefined4 * __thiscall m_FUN_10c17e20(byte param_2); template<class... A> int m_FUN_10c17e20(A...); int * __thiscall m_FUN_10c18560(int *param_2); template<class... A> int m_FUN_10c18560(A...); SCStr * __thiscall m_FUN_10c1bbc0(SCStr *param_2); template<class... A> int m_FUN_10c1bbc0(A...); undefined4 __thiscall m_FUN_10c1be40(int param_2); template<class... A> int m_FUN_10c1be40(A...); undefined4 __thiscall m_FUN_10c1c560(undefined4 param_2); template<class... A> int m_FUN_10c1c560(A...); undefined4 __thiscall m_FUN_10c1c700(undefined4 param_2); template<class... A> int m_FUN_10c1c700(A...); undefined4 __thiscall m_FUN_10c1e7b0(undefined4 param_2); template<class... A> int m_FUN_10c1e7b0(A...); void __thiscall m_FUN_10c212a0(int *param_2); template<class... A> int m_FUN_10c212a0(A...); int * __thiscall m_FUN_10c21eb0(int *param_2); template<class... A> int m_FUN_10c21eb0(A...); void __thiscall m_FUN_10c23420(undefined4 *param_2); template<class... A> int m_FUN_10c23420(A...); void __thiscall m_FUN_10c23470(undefined4 *param_2); template<class... A> int m_FUN_10c23470(A...); undefined4 * __thiscall m_FUN_10c238a0(int *param_2); template<class... A> int m_FUN_10c238a0(A...); undefined4 * __thiscall m_FUN_10c24750(byte param_2); template<class... A> int m_FUN_10c24750(A...); undefined4 * __thiscall m_FUN_10c249c0(byte param_2); template<class... A> int m_FUN_10c249c0(A...); void __thiscall m_FUN_10c24d60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c24d60(A...); int * __thiscall m_FUN_10c265e0(int *param_2,uint param_3); template<class... A> int m_FUN_10c265e0(A...); SCStr * __thiscall m_FUN_10c267e0(SCStr *param_2); template<class... A> int m_FUN_10c267e0(A...); void __thiscall m_FUN_10c271e0(undefined4 *param_2); template<class... A> int m_FUN_10c271e0(A...); void __thiscall m_FUN_10c27230(undefined4 *param_2); template<class... A> int m_FUN_10c27230(A...); undefined4 * __thiscall m_FUN_10c294d0(byte param_2); template<class... A> int m_FUN_10c294d0(A...); undefined4 * __thiscall m_FUN_10c29610(byte param_2); template<class... A> int m_FUN_10c29610(A...); void __thiscall m_FUN_10c2a8b0(int param_2); template<class... A> int m_FUN_10c2a8b0(A...); void __thiscall m_FUN_10c2a8e0(int param_2); template<class... A> int m_FUN_10c2a8e0(A...); undefined4 * __thiscall m_FUN_10c2b7e0(int *param_2); template<class... A> int m_FUN_10c2b7e0(A...); undefined4 * __thiscall m_FUN_10c2b820(int *param_2); template<class... A> int m_FUN_10c2b820(A...); undefined4 __thiscall m_FUN_10c2c140(byte param_2); template<class... A> int m_FUN_10c2c140(A...); undefined4 *  __thiscall m_FUN_10c2c3b0(undefined4 *param_2); template<class... A> int m_FUN_10c2c3b0(A...); void __thiscall m_FUN_10c2c3d0(char param_2); template<class... A> int m_FUN_10c2c3d0(A...); undefined4 *  __thiscall m_FUN_10c2c4b0(undefined4 *param_2); template<class... A> int m_FUN_10c2c4b0(A...); void __thiscall m_FUN_10c32530(int *param_2); template<class... A> int m_FUN_10c32530(A...); void __thiscall m_FUN_10c32580(undefined4 param_2); template<class... A> int m_FUN_10c32580(A...); void __thiscall m_FUN_10c325d0(undefined4 param_2); template<class... A> int m_FUN_10c325d0(A...); undefined4 * __thiscall m_FUN_10c35420(int *param_2); template<class... A> int m_FUN_10c35420(A...); undefined4 __thiscall m_FUN_10c36790(byte param_2); template<class... A> int m_FUN_10c36790(A...); undefined4 __thiscall m_FUN_10c36930(byte param_2); template<class... A> int m_FUN_10c36930(A...); undefined4 * __thiscall m_FUN_10c36960(byte param_2); template<class... A> int m_FUN_10c36960(A...); void __thiscall m_FUN_10c374b0(int *param_2); template<class... A> int m_FUN_10c374b0(A...); void __thiscall m_FUN_10c37500(int *param_2); template<class... A> int m_FUN_10c37500(A...); undefined4 __thiscall m_FUN_10c380f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c380f0(A...); undefined4 * __thiscall m_FUN_10c39b00(int *param_2); template<class... A> int m_FUN_10c39b00(A...); undefined4 * __thiscall m_FUN_10c3a5c0(byte param_2); template<class... A> int m_FUN_10c3a5c0(A...); undefined4 __thiscall m_FUN_10c3a600(byte param_2); template<class... A> int m_FUN_10c3a600(A...); void __thiscall m_FUN_10c3a730(int *param_2); template<class... A> int m_FUN_10c3a730(A...); undefined4 __thiscall m_FUN_10c3ad50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c3ad50(A...); void __thiscall m_FUN_10c3b200(int param_2); template<class... A> int m_FUN_10c3b200(A...); void __thiscall m_FUN_10c3b9f0(undefined4 param_2,undefined8 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c3b9f0(A...); int __thiscall m_FUN_10c3d3d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c3d3d0(A...); int __thiscall m_FUN_10c3d410(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c3d410(A...); int __thiscall m_FUN_10c42140(byte param_2); template<class... A> int m_FUN_10c42140(A...); undefined4 __thiscall m_FUN_10c42170(byte param_2); template<class... A> int m_FUN_10c42170(A...); void __thiscall m_FUN_10c471f0(int param_2); template<class... A> int m_FUN_10c471f0(A...); undefined4 * __thiscall m_FUN_10c475e0(int *param_2); template<class... A> int m_FUN_10c475e0(A...); undefined4 __thiscall m_FUN_10c47fc0(byte param_2); template<class... A> int m_FUN_10c47fc0(A...); undefined4 * __thiscall m_FUN_10c4a570(int *param_2); template<class... A> int m_FUN_10c4a570(A...); undefined4 * __thiscall m_FUN_10c4a5b0(int *param_2); template<class... A> int m_FUN_10c4a5b0(A...); undefined4 * __thiscall m_FUN_10c4ba30(byte param_2); template<class... A> int m_FUN_10c4ba30(A...); undefined4 * __thiscall m_FUN_10c4ba60(byte param_2); template<class... A> int m_FUN_10c4ba60(A...); undefined4 __thiscall m_FUN_10c4ba90(byte param_2); template<class... A> int m_FUN_10c4ba90(A...); undefined4 __thiscall m_FUN_10c4bac0(byte param_2); template<class... A> int m_FUN_10c4bac0(A...); undefined4 * __thiscall m_FUN_10c4baf0(byte param_2); template<class... A> int m_FUN_10c4baf0(A...); undefined4 __thiscall m_FUN_10c4bd10(byte param_2); template<class... A> int m_FUN_10c4bd10(A...); undefined4 * __thiscall m_FUN_10c4bdc0(byte param_2); template<class... A> int m_FUN_10c4bdc0(A...); char __thiscall m_FUN_10c4c900(undefined4 param_2); template<class... A> int m_FUN_10c4c900(A...); undefined4 * __thiscall m_FUN_10c4e560(int *param_2); template<class... A> int m_FUN_10c4e560(A...); undefined4 * __thiscall m_FUN_10c4e5a0(int *param_2); template<class... A> int m_FUN_10c4e5a0(A...); undefined4 * __thiscall m_FUN_10c4e5e0(int *param_2); template<class... A> int m_FUN_10c4e5e0(A...); undefined4 * __thiscall m_FUN_10c4e620(int *param_2); template<class... A> int m_FUN_10c4e620(A...); undefined4 * __thiscall m_FUN_10c4e660(int *param_2); template<class... A> int m_FUN_10c4e660(A...); undefined4 * __thiscall m_FUN_10c4e6a0(int *param_2); template<class... A> int m_FUN_10c4e6a0(A...); undefined4 * __thiscall m_FUN_10c4e6c0(int *param_2); template<class... A> int m_FUN_10c4e6c0(A...); undefined4 * __thiscall m_FUN_10c4e6e0(int *param_2); template<class... A> int m_FUN_10c4e6e0(A...); undefined4 * __thiscall m_FUN_10c4e700(int *param_2); template<class... A> int m_FUN_10c4e700(A...); undefined4 * __thiscall m_FUN_10c4ea80(undefined4 param_2); template<class... A> int m_FUN_10c4ea80(A...); undefined4 * __thiscall m_FUN_10c4ffe0(byte param_2); template<class... A> int m_FUN_10c4ffe0(A...); undefined4 * __thiscall m_FUN_10c50010(byte param_2); template<class... A> int m_FUN_10c50010(A...); undefined4 * __thiscall m_FUN_10c50040(byte param_2); template<class... A> int m_FUN_10c50040(A...); undefined4 * __thiscall m_FUN_10c50070(byte param_2); template<class... A> int m_FUN_10c50070(A...); undefined4 * __thiscall m_FUN_10c500a0(byte param_2); template<class... A> int m_FUN_10c500a0(A...); undefined4 * __thiscall m_FUN_10c500e0(byte param_2); template<class... A> int m_FUN_10c500e0(A...); undefined4 * __thiscall m_FUN_10c50120(byte param_2); template<class... A> int m_FUN_10c50120(A...); undefined4 * __thiscall m_FUN_10c50160(byte param_2); template<class... A> int m_FUN_10c50160(A...); undefined4 * __thiscall m_FUN_10c501a0(byte param_2); template<class... A> int m_FUN_10c501a0(A...); undefined4 * __thiscall m_FUN_10c501e0(byte param_2); template<class... A> int m_FUN_10c501e0(A...); undefined4 * __thiscall m_FUN_10c50220(byte param_2); template<class... A> int m_FUN_10c50220(A...); undefined4 * __thiscall m_FUN_10c50270(byte param_2); template<class... A> int m_FUN_10c50270(A...); undefined4 __thiscall m_FUN_10c502c0(byte param_2); template<class... A> int m_FUN_10c502c0(A...); undefined4 __thiscall m_FUN_10c502f0(byte param_2); template<class... A> int m_FUN_10c502f0(A...); undefined4 __thiscall m_FUN_10c50320(byte param_2); template<class... A> int m_FUN_10c50320(A...); undefined4 __thiscall m_FUN_10c50350(byte param_2); template<class... A> int m_FUN_10c50350(A...); undefined4 __thiscall m_FUN_10c50380(byte param_2); template<class... A> int m_FUN_10c50380(A...); undefined4 * __thiscall m_FUN_10c503b0(byte param_2); template<class... A> int m_FUN_10c503b0(A...); undefined4 * __thiscall m_FUN_10c50400(byte param_2); template<class... A> int m_FUN_10c50400(A...); undefined4 * __thiscall m_FUN_10c50450(byte param_2); template<class... A> int m_FUN_10c50450(A...); undefined4 * __thiscall m_FUN_10c504a0(byte param_2); template<class... A> int m_FUN_10c504a0(A...); undefined4 * __thiscall m_FUN_10c504f0(byte param_2); template<class... A> int m_FUN_10c504f0(A...); undefined4 * __thiscall m_FUN_10c505e0(byte param_2); template<class... A> int m_FUN_10c505e0(A...); undefined4 * __thiscall m_FUN_10c50610(byte param_2); template<class... A> int m_FUN_10c50610(A...); undefined4 * __thiscall m_FUN_10c50640(byte param_2); template<class... A> int m_FUN_10c50640(A...); undefined4 * __thiscall m_FUN_10c50670(byte param_2); template<class... A> int m_FUN_10c50670(A...); undefined4 * __thiscall m_FUN_10c506a0(byte param_2); template<class... A> int m_FUN_10c506a0(A...); undefined4 * __thiscall m_FUN_10c506d0(byte param_2); template<class... A> int m_FUN_10c506d0(A...); undefined4 * __thiscall m_FUN_10c50700(byte param_2); template<class... A> int m_FUN_10c50700(A...); undefined4 * __thiscall m_FUN_10c50740(byte param_2); template<class... A> int m_FUN_10c50740(A...); undefined4 * __thiscall m_FUN_10c50780(byte param_2); template<class... A> int m_FUN_10c50780(A...); undefined4 * __thiscall m_FUN_10c507c0(byte param_2); template<class... A> int m_FUN_10c507c0(A...); undefined4 * __thiscall m_FUN_10c50800(byte param_2); template<class... A> int m_FUN_10c50800(A...); undefined4 * __thiscall m_FUN_10c54bb0(int *param_2); template<class... A> int m_FUN_10c54bb0(A...); undefined4 * __thiscall m_FUN_10c54bf0(int *param_2); template<class... A> int m_FUN_10c54bf0(A...); undefined4 * __thiscall m_FUN_10c54c30(int *param_2); template<class... A> int m_FUN_10c54c30(A...); undefined4 * __thiscall m_FUN_10c54c70(int *param_2); template<class... A> int m_FUN_10c54c70(A...); undefined4 * __thiscall m_FUN_10c54cb0(int *param_2); template<class... A> int m_FUN_10c54cb0(A...); undefined4 * __thiscall m_FUN_10c54cd0(int *param_2); template<class... A> int m_FUN_10c54cd0(A...); undefined4 * __thiscall m_FUN_10c55ef0(byte param_2); template<class... A> int m_FUN_10c55ef0(A...); undefined4 * __thiscall m_FUN_10c55f20(byte param_2); template<class... A> int m_FUN_10c55f20(A...); undefined4 * __thiscall m_FUN_10c55f50(byte param_2); template<class... A> int m_FUN_10c55f50(A...); undefined4 * __thiscall m_FUN_10c55f90(byte param_2); template<class... A> int m_FUN_10c55f90(A...); undefined4 * __thiscall m_FUN_10c55fd0(byte param_2); template<class... A> int m_FUN_10c55fd0(A...); undefined4 * __thiscall m_FUN_10c56010(byte param_2); template<class... A> int m_FUN_10c56010(A...); undefined4 * __thiscall m_FUN_10c56050(byte param_2); template<class... A> int m_FUN_10c56050(A...); undefined4 * __thiscall m_FUN_10c56090(byte param_2); template<class... A> int m_FUN_10c56090(A...); undefined4 * __thiscall m_FUN_10c560e0(byte param_2); template<class... A> int m_FUN_10c560e0(A...); undefined4 __thiscall m_FUN_10c56130(byte param_2); template<class... A> int m_FUN_10c56130(A...); undefined4 __thiscall m_FUN_10c56160(byte param_2); template<class... A> int m_FUN_10c56160(A...); undefined4 __thiscall m_FUN_10c56190(byte param_2); template<class... A> int m_FUN_10c56190(A...); undefined4 __thiscall m_FUN_10c561c0(byte param_2); template<class... A> int m_FUN_10c561c0(A...); undefined4 * __thiscall m_FUN_10c561f0(byte param_2); template<class... A> int m_FUN_10c561f0(A...); undefined4 * __thiscall m_FUN_10c56240(byte param_2); template<class... A> int m_FUN_10c56240(A...); undefined4 * __thiscall m_FUN_10c56290(byte param_2); template<class... A> int m_FUN_10c56290(A...); undefined4 * __thiscall m_FUN_10c562e0(byte param_2); template<class... A> int m_FUN_10c562e0(A...); undefined4 * __thiscall m_FUN_10c56310(byte param_2); template<class... A> int m_FUN_10c56310(A...); undefined4 * __thiscall m_FUN_10c56340(byte param_2); template<class... A> int m_FUN_10c56340(A...); undefined4 * __thiscall m_FUN_10c56370(byte param_2); template<class... A> int m_FUN_10c56370(A...); undefined4 * __thiscall m_FUN_10c563a0(byte param_2); template<class... A> int m_FUN_10c563a0(A...); undefined4 * __thiscall m_FUN_10c563d0(byte param_2); template<class... A> int m_FUN_10c563d0(A...); undefined4 * __thiscall m_FUN_10c56410(byte param_2); template<class... A> int m_FUN_10c56410(A...); undefined4 * __thiscall m_FUN_10c56450(byte param_2); template<class... A> int m_FUN_10c56450(A...); undefined4 * __thiscall m_FUN_10c56490(byte param_2); template<class... A> int m_FUN_10c56490(A...); undefined4 * __thiscall m_FUN_10c59370(int *param_2); template<class... A> int m_FUN_10c59370(A...); undefined4 * __thiscall m_FUN_10c593b0(int *param_2); template<class... A> int m_FUN_10c593b0(A...); undefined4 * __thiscall m_FUN_10c593d0(int *param_2); template<class... A> int m_FUN_10c593d0(A...); undefined4 * __thiscall m_FUN_10c594a0(undefined4 param_2); template<class... A> int m_FUN_10c594a0(A...); undefined4 * __thiscall m_FUN_10c59980(byte param_2); template<class... A> int m_FUN_10c59980(A...); undefined4 * __thiscall m_FUN_10c599b0(byte param_2); template<class... A> int m_FUN_10c599b0(A...); undefined4 * __thiscall m_FUN_10c599f0(byte param_2); template<class... A> int m_FUN_10c599f0(A...); undefined4 * __thiscall m_FUN_10c59a30(byte param_2); template<class... A> int m_FUN_10c59a30(A...); undefined4 * __thiscall m_FUN_10c59a80(byte param_2); template<class... A> int m_FUN_10c59a80(A...); undefined4 __thiscall m_FUN_10c59ad0(byte param_2); template<class... A> int m_FUN_10c59ad0(A...); undefined4 * __thiscall m_FUN_10c59b00(byte param_2); template<class... A> int m_FUN_10c59b00(A...); undefined4 * __thiscall m_FUN_10c59b50(byte param_2); template<class... A> int m_FUN_10c59b50(A...); undefined4 * __thiscall m_FUN_10c59ba0(byte param_2); template<class... A> int m_FUN_10c59ba0(A...); undefined4 * __thiscall m_FUN_10c59bd0(byte param_2); template<class... A> int m_FUN_10c59bd0(A...); undefined4 * __thiscall m_FUN_10c59c00(byte param_2); template<class... A> int m_FUN_10c59c00(A...); undefined4 * __thiscall m_FUN_10c5b250(int param_2); template<class... A> int m_FUN_10c5b250(A...); undefined4 * __thiscall m_FUN_10c5b870(byte param_2); template<class... A> int m_FUN_10c5b870(A...); undefined4 * __thiscall m_FUN_10c5b8b0(byte param_2); template<class... A> int m_FUN_10c5b8b0(A...); undefined4 * __thiscall m_FUN_10c5b900(byte param_2); template<class... A> int m_FUN_10c5b900(A...); undefined4 * __thiscall m_FUN_10c5b950(byte param_2); template<class... A> int m_FUN_10c5b950(A...); undefined4 * __thiscall m_FUN_10c5bab0(byte param_2); template<class... A> int m_FUN_10c5bab0(A...); undefined4 * __thiscall m_FUN_10c5baf0(byte param_2); template<class... A> int m_FUN_10c5baf0(A...); void __thiscall m_FUN_10c5bbb0(short param_2); template<class... A> int m_FUN_10c5bbb0(A...); void __thiscall m_FUN_10c5bbf0(short param_2); template<class... A> int m_FUN_10c5bbf0(A...); void __thiscall m_FUN_10c5c970(short param_2); template<class... A> int m_FUN_10c5c970(A...); void __thiscall m_FUN_10c5cb70(short param_2); template<class... A> int m_FUN_10c5cb70(A...); void __thiscall m_FUN_10c5cbd0(undefined1 param_2); template<class... A> int m_FUN_10c5cbd0(A...); void __thiscall m_FUN_10c5cc20(short param_2); template<class... A> int m_FUN_10c5cc20(A...); void __thiscall m_FUN_10c5cc70(undefined1 param_2); template<class... A> int m_FUN_10c5cc70(A...); void __thiscall m_FUN_10c5d350(short param_2); template<class... A> int m_FUN_10c5d350(A...); void __thiscall m_FUN_10c5d490(undefined1 param_2); template<class... A> int m_FUN_10c5d490(A...); void __thiscall m_FUN_10c5d720(undefined1 param_2); template<class... A> int m_FUN_10c5d720(A...); void __thiscall m_FUN_10c5d770(short param_2); template<class... A> int m_FUN_10c5d770(A...); void __thiscall m_FUN_10c5d7c0(undefined1 param_2); template<class... A> int m_FUN_10c5d7c0(A...); void __thiscall m_FUN_10c5d9b0(int *param_2); template<class... A> int m_FUN_10c5d9b0(A...); void __thiscall m_FUN_10c5d9e0(undefined1 param_2); template<class... A> int m_FUN_10c5d9e0(A...); void __thiscall m_FUN_10c5da30(short param_2); template<class... A> int m_FUN_10c5da30(A...); void __thiscall m_FUN_10c5da80(short param_2); template<class... A> int m_FUN_10c5da80(A...); void __thiscall m_FUN_10c5dac0(short param_2); template<class... A> int m_FUN_10c5dac0(A...); void __thiscall m_FUN_10c5db10(short param_2); template<class... A> int m_FUN_10c5db10(A...); void __thiscall m_FUN_10c5db60(undefined1 param_2); template<class... A> int m_FUN_10c5db60(A...); void __thiscall m_FUN_10c5dba0(undefined4 param_2); template<class... A> int m_FUN_10c5dba0(A...); void __thiscall m_FUN_10c5dbf0(int *param_2); template<class... A> int m_FUN_10c5dbf0(A...); void __thiscall m_FUN_10c5dc20(short param_2); template<class... A> int m_FUN_10c5dc20(A...); void __thiscall m_FUN_10c5e1e0(undefined4 param_2); template<class... A> int m_FUN_10c5e1e0(A...); int __thiscall m_FUN_10c5e2d0(int *param_2); template<class... A> int m_FUN_10c5e2d0(A...); int __thiscall m_FUN_10c5e310(SCStr *param_2); template<class... A> int m_FUN_10c5e310(A...); undefined4 * __thiscall m_FUN_10c5f430(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c5f430(A...); SCStr * __thiscall m_FUN_10c5f840(SCStr *param_2); template<class... A> int m_FUN_10c5f840(A...); SCStr * __thiscall m_FUN_10c5f870(SCStr *param_2); template<class... A> int m_FUN_10c5f870(A...); int * __thiscall m_FUN_10c5fa70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c5fa70(A...); undefined4 __thiscall m_FUN_10c656d0(byte param_2); template<class... A> int m_FUN_10c656d0(A...); undefined4 __thiscall m_FUN_10c65700(byte param_2); template<class... A> int m_FUN_10c65700(A...); undefined4 __thiscall m_FUN_10c65730(byte param_2); template<class... A> int m_FUN_10c65730(A...); void __thiscall m_FUN_10c67ab0(int param_2); template<class... A> int m_FUN_10c67ab0(A...); undefined4 __thiscall m_FUN_10c68fc0(byte param_2); template<class... A> int m_FUN_10c68fc0(A...); undefined4 __thiscall m_FUN_10c68ff0(byte param_2); template<class... A> int m_FUN_10c68ff0(A...); undefined4 __thiscall m_FUN_10c69020(byte param_2); template<class... A> int m_FUN_10c69020(A...); undefined4 __thiscall m_FUN_10c69050(byte param_2); template<class... A> int m_FUN_10c69050(A...); undefined4 __thiscall m_FUN_10c69080(byte param_2); template<class... A> int m_FUN_10c69080(A...); undefined4 __thiscall m_FUN_10c690b0(byte param_2); template<class... A> int m_FUN_10c690b0(A...); undefined4 __thiscall m_FUN_10c690e0(byte param_2); template<class... A> int m_FUN_10c690e0(A...); undefined4 __thiscall m_FUN_10c69110(byte param_2); template<class... A> int m_FUN_10c69110(A...); undefined4 __thiscall m_FUN_10c69140(byte param_2); template<class... A> int m_FUN_10c69140(A...); SCStr * __thiscall m_FUN_10c69c70(SCStr *param_2); template<class... A> int m_FUN_10c69c70(A...); undefined4 __thiscall m_FUN_10c69c90(undefined4 param_2); template<class... A> int m_FUN_10c69c90(A...); void __thiscall m_FUN_10c6a450(int param_2); template<class... A> int m_FUN_10c6a450(A...); void __thiscall m_FUN_10c6a490(int param_2); template<class... A> int m_FUN_10c6a490(A...); void __thiscall m_FUN_10c6a520(undefined4 param_2,int param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1); template<class... A> int m_FUN_10c6a520(A...); undefined4 * __thiscall m_FUN_10c6d620(byte param_2); template<class... A> int m_FUN_10c6d620(A...); undefined4 * __thiscall m_FUN_10c6d660(byte param_2); template<class... A> int m_FUN_10c6d660(A...); undefined1 __thiscall m_FUN_10c6fcb0(char param_2); template<class... A> int m_FUN_10c6fcb0(A...); void __thiscall m_FUN_10c73390(int param_2); template<class... A> int m_FUN_10c73390(A...); int __thiscall m_FUN_10c76c60(int param_2); template<class... A> int m_FUN_10c76c60(A...); int __thiscall m_FUN_10c76c80(uint param_2); template<class... A> int m_FUN_10c76c80(A...); undefined4 * __thiscall m_FUN_10c77060(byte param_2); template<class... A> int m_FUN_10c77060(A...); int __thiscall m_FUN_10c770a0(byte param_2); template<class... A> int m_FUN_10c770a0(A...); undefined4 * __thiscall m_FUN_10c771c0(byte param_2); template<class... A> int m_FUN_10c771c0(A...); int __thiscall m_FUN_10c77200(byte param_2); template<class... A> int m_FUN_10c77200(A...); facet * __thiscall m_FUN_10c77230(byte param_2); template<class... A> int m_FUN_10c77230(A...); undefined4 * __thiscall m_FUN_10c77280(byte param_2); template<class... A> int m_FUN_10c77280(A...); undefined4 * __thiscall m_FUN_10c77480(byte param_2); template<class... A> int m_FUN_10c77480(A...); undefined4 * __thiscall m_FUN_10c774b0(byte param_2); template<class... A> int m_FUN_10c774b0(A...); undefined4 * __thiscall m_FUN_10c774e0(byte param_2); template<class... A> int m_FUN_10c774e0(A...); undefined4 * __thiscall m_FUN_10c77510(byte param_2); template<class... A> int m_FUN_10c77510(A...); undefined4 * __thiscall m_FUN_10c77540(byte param_2); template<class... A> int m_FUN_10c77540(A...); undefined4 * __thiscall m_FUN_10c77570(byte param_2); template<class... A> int m_FUN_10c77570(A...); undefined4 * __thiscall m_FUN_10c77630(byte param_2); template<class... A> int m_FUN_10c77630(A...); undefined4 * __thiscall m_FUN_10c77660(byte param_2); template<class... A> int m_FUN_10c77660(A...); undefined4 __thiscall m_FUN_10c7ad10(char param_2); template<class... A> int m_FUN_10c7ad10(A...); void __thiscall m_FUN_10c7c230(_Locinfo *param_2); template<class... A> int m_FUN_10c7c230(A...); void __thiscall m_FUN_10c7c260(undefined1 param_2); template<class... A> int m_FUN_10c7c260(A...); void __thiscall m_FUN_10c7dc60(int param_2); template<class... A> int m_FUN_10c7dc60(A...); uint __thiscall m_FUN_10c7e120(char *param_2,char *param_3,char *param_4,char *param_5); template<class... A> int m_FUN_10c7e120(A...); void __thiscall m_FUN_10c7fcd0(uint param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c7fcd0(A...); undefined4 * __thiscall m_FUN_10c81670(byte param_2); template<class... A> int m_FUN_10c81670(A...); undefined4 * __thiscall m_FUN_10c816a0(byte param_2); template<class... A> int m_FUN_10c816a0(A...); undefined4 __thiscall m_FUN_10c816d0(byte param_2); template<class... A> int m_FUN_10c816d0(A...); undefined4 __thiscall m_FUN_10c81700(byte param_2); template<class... A> int m_FUN_10c81700(A...); undefined4 __thiscall m_FUN_10c81820(byte param_2); template<class... A> int m_FUN_10c81820(A...); undefined4 __thiscall m_FUN_10c81850(byte param_2); template<class... A> int m_FUN_10c81850(A...); undefined4 * __thiscall m_FUN_10c81930(byte param_2); template<class... A> int m_FUN_10c81930(A...); undefined4 * __thiscall m_FUN_10c81970(byte param_2); template<class... A> int m_FUN_10c81970(A...); SCStr * __thiscall m_FUN_10c81ef0(SCStr *param_2); template<class... A> int m_FUN_10c81ef0(A...); undefined4 * __thiscall m_FUN_10c83a10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c83a10(A...); undefined4 * __thiscall m_FUN_10c83ce0(undefined4 param_2); template<class... A> int m_FUN_10c83ce0(A...); SCStr * __thiscall m_FUN_10c84410(SCStr *param_2); template<class... A> int m_FUN_10c84410(A...); int __thiscall m_FUN_10c85140(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c85140(A...); int __thiscall m_FUN_10c85180(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10c85180(A...); int __thiscall m_FUN_10c851c0(SCStr *param_2); template<class... A> int m_FUN_10c851c0(A...); void __thiscall m_FUN_10c87b70(undefined4 *param_2); template<class... A> int m_FUN_10c87b70(A...); undefined4 * __thiscall m_FUN_10c8a240(byte param_2); template<class... A> int m_FUN_10c8a240(A...); undefined4 __thiscall m_FUN_10c8a4a0(byte param_2); template<class... A> int m_FUN_10c8a4a0(A...); SCStr * __thiscall m_FUN_10c8d640(SCStr *param_2); template<class... A> int m_FUN_10c8d640(A...); SCStr * __thiscall m_FUN_10c8da20(SCStr *param_2); template<class... A> int m_FUN_10c8da20(A...); SCStr * __thiscall m_FUN_10c8da40(SCStr *param_2); template<class... A> int m_FUN_10c8da40(A...); undefined4 __thiscall m_FUN_10c8dce0(undefined4 param_2); template<class... A> int m_FUN_10c8dce0(A...); SCStr * __thiscall m_FUN_10c8dee0(SCStr *param_2); template<class... A> int m_FUN_10c8dee0(A...); void __thiscall m_FUN_10c92d70(undefined4 *param_2); template<class... A> int m_FUN_10c92d70(A...); undefined4 * __thiscall m_FUN_10c92dc0(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_10c92dc0(A...); undefined4 __thiscall m_FUN_10c93df0(byte param_2); template<class... A> int m_FUN_10c93df0(A...); int * __thiscall m_FUN_10c97610(int *param_2); template<class... A> int m_FUN_10c97610(A...); undefined4 __thiscall m_FUN_10c97630(undefined4 param_2); template<class... A> int m_FUN_10c97630(A...); SCStr * __thiscall m_FUN_10c986f0(SCStr *param_2); template<class... A> int m_FUN_10c986f0(A...); SCStr * __thiscall m_FUN_10c98710(SCStr *param_2); template<class... A> int m_FUN_10c98710(A...); SCStr * __thiscall m_FUN_10c98c80(SCStr *param_2); template<class... A> int m_FUN_10c98c80(A...); int * __thiscall m_FUN_10c98cb0(int *param_2); template<class... A> int m_FUN_10c98cb0(A...); void __thiscall m_FUN_10c9c0f0(SCStr *param_2); template<class... A> int m_FUN_10c9c0f0(A...); void __thiscall m_FUN_10c9cfa0(SCStr *param_2); template<class... A> int m_FUN_10c9cfa0(A...); void __thiscall m_FUN_10c9cfe0(SCStr *param_2); template<class... A> int m_FUN_10c9cfe0(A...); undefined4 * __thiscall m_FUN_10ca24a0(byte param_2); template<class... A> int m_FUN_10ca24a0(A...); undefined4 * __thiscall m_FUN_10ca2610(byte param_2); template<class... A> int m_FUN_10ca2610(A...); undefined4 * __thiscall m_FUN_10ca28b0(byte param_2); template<class... A> int m_FUN_10ca28b0(A...); undefined4 * __thiscall m_FUN_10ca28e0(byte param_2); template<class... A> int m_FUN_10ca28e0(A...); undefined4 * __thiscall m_FUN_10ca2910(byte param_2); template<class... A> int m_FUN_10ca2910(A...); undefined4 * __thiscall m_FUN_10ca2940(byte param_2); template<class... A> int m_FUN_10ca2940(A...); undefined4 * __thiscall m_FUN_10ca2a40(byte param_2); template<class... A> int m_FUN_10ca2a40(A...); undefined4 * __thiscall m_FUN_10ca2a70(byte param_2); template<class... A> int m_FUN_10ca2a70(A...); undefined4 * __thiscall m_FUN_10ca2b90(byte param_2); template<class... A> int m_FUN_10ca2b90(A...); undefined4 __thiscall m_FUN_10ca2bc0(byte param_2); template<class... A> int m_FUN_10ca2bc0(A...); undefined4 * __thiscall m_FUN_10ca2bf0(byte param_2); template<class... A> int m_FUN_10ca2bf0(A...); undefined4 * __thiscall m_FUN_10ca2c20(byte param_2); template<class... A> int m_FUN_10ca2c20(A...); undefined4 * __thiscall m_FUN_10ca2c50(byte param_2); template<class... A> int m_FUN_10ca2c50(A...); undefined4 __thiscall m_FUN_10ca2c80(byte param_2); template<class... A> int m_FUN_10ca2c80(A...); undefined4 * __thiscall m_FUN_10ca2cb0(byte param_2); template<class... A> int m_FUN_10ca2cb0(A...); undefined4 * __thiscall m_FUN_10ca2ce0(byte param_2); template<class... A> int m_FUN_10ca2ce0(A...); undefined4 * __thiscall m_FUN_10ca2d10(byte param_2); template<class... A> int m_FUN_10ca2d10(A...); undefined4 * __thiscall m_FUN_10ca2d40(byte param_2); template<class... A> int m_FUN_10ca2d40(A...); undefined4 * __thiscall m_FUN_10ca2d70(byte param_2); template<class... A> int m_FUN_10ca2d70(A...); undefined4 * __thiscall m_FUN_10ca2da0(byte param_2); template<class... A> int m_FUN_10ca2da0(A...); undefined4 * __thiscall m_FUN_10ca2dd0(byte param_2); template<class... A> int m_FUN_10ca2dd0(A...); undefined4 * __thiscall m_FUN_10ca2e00(byte param_2); template<class... A> int m_FUN_10ca2e00(A...); undefined4 * __thiscall m_FUN_10ca2f40(byte param_2); template<class... A> int m_FUN_10ca2f40(A...); undefined4 * __thiscall m_FUN_10ca2f70(byte param_2); template<class... A> int m_FUN_10ca2f70(A...); void __thiscall m_FUN_10ca3260(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ca3260(A...); void __thiscall m_FUN_10ca32c0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ca32c0(A...); void __thiscall m_FUN_10ca3b90(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ca3b90(A...); void __thiscall m_FUN_10ca3bc0(int *param_2); template<class... A> int m_FUN_10ca3bc0(A...); undefined4 __thiscall m_FUN_10ca9450(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ca9450(A...); undefined4 __thiscall m_FUN_10ca9a70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ca9a70(A...); void __thiscall m_FUN_10cb68f0(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cb68f0(A...); undefined4 * __thiscall m_FUN_10cb7a70(int *param_2); template<class... A> int m_FUN_10cb7a70(A...); undefined4 * __thiscall m_FUN_10cb7ab0(int *param_2); template<class... A> int m_FUN_10cb7ab0(A...); undefined4 * __thiscall m_FUN_10cb7af0(int *param_2); template<class... A> int m_FUN_10cb7af0(A...); undefined4 * __thiscall m_FUN_10cb7b30(int *param_2); template<class... A> int m_FUN_10cb7b30(A...); int __thiscall m_FUN_10cb8b30(SCStr *param_2); template<class... A> int m_FUN_10cb8b30(A...); undefined4 * __thiscall m_FUN_10cb9730(byte param_2); template<class... A> int m_FUN_10cb9730(A...); undefined4 * __thiscall m_FUN_10cb9810(byte param_2); template<class... A> int m_FUN_10cb9810(A...); SCStr * __thiscall m_FUN_10cbaa00(SCStr *param_2); template<class... A> int m_FUN_10cbaa00(A...); undefined4 __thiscall m_FUN_10cbd320(byte param_2); template<class... A> int m_FUN_10cbd320(A...); undefined4 *  __thiscall m_FUN_10cbd350(undefined4 *param_2); template<class... A> int m_FUN_10cbd350(A...); void __thiscall m_FUN_10cbd370(char param_2); template<class... A> int m_FUN_10cbd370(A...); undefined4 *  __thiscall m_FUN_10cbd3c0(undefined4 *param_2); template<class... A> int m_FUN_10cbd3c0(A...); int * __thiscall m_FUN_10cbd9d0(int *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cbd9d0(A...); SCStr * __thiscall m_FUN_10cbda20(SCStr *param_2); template<class... A> int m_FUN_10cbda20(A...); bool __thiscall m_FUN_10cbda80(int param_2); template<class... A> int m_FUN_10cbda80(A...); void __thiscall m_FUN_10cbfe00(int *param_2); template<class... A> int m_FUN_10cbfe00(A...); undefined4 * __thiscall m_FUN_10cc0cd0(int *param_2); template<class... A> int m_FUN_10cc0cd0(A...); undefined4 * __thiscall m_FUN_10cc1990(byte param_2); template<class... A> int m_FUN_10cc1990(A...); undefined4 * __thiscall m_FUN_10cc19c0(byte param_2); template<class... A> int m_FUN_10cc19c0(A...); undefined4 * __thiscall m_FUN_10cc19f0(byte param_2); template<class... A> int m_FUN_10cc19f0(A...); undefined4 __thiscall m_FUN_10cc1a30(byte param_2); template<class... A> int m_FUN_10cc1a30(A...); undefined4 * __thiscall m_FUN_10cc1a60(byte param_2); template<class... A> int m_FUN_10cc1a60(A...); undefined4 __thiscall m_FUN_10cc1ab0(byte param_2); template<class... A> int m_FUN_10cc1ab0(A...); undefined4 * __thiscall m_FUN_10cc1ae0(byte param_2); template<class... A> int m_FUN_10cc1ae0(A...); undefined4 * __thiscall m_FUN_10cc1b10(byte param_2); template<class... A> int m_FUN_10cc1b10(A...); SCStr * __thiscall m_FUN_10cc2280(SCStr *param_2); template<class... A> int m_FUN_10cc2280(A...); SCStr * __thiscall m_FUN_10cc2440(SCStr *param_2); template<class... A> int m_FUN_10cc2440(A...); SCStr * __thiscall m_FUN_10cc2830(SCStr *param_2); template<class... A> int m_FUN_10cc2830(A...); SCStr * __thiscall m_FUN_10cc2a70(SCStr *param_2); template<class... A> int m_FUN_10cc2a70(A...); undefined4 * __thiscall m_FUN_10ccca00(byte param_2); template<class... A> int m_FUN_10ccca00(A...); undefined4 * __thiscall m_FUN_10ccca30(byte param_2); template<class... A> int m_FUN_10ccca30(A...); undefined4 * __thiscall m_FUN_10ccca60(byte param_2); template<class... A> int m_FUN_10ccca60(A...); undefined4 * __thiscall m_FUN_10ccca90(byte param_2); template<class... A> int m_FUN_10ccca90(A...); undefined4 * __thiscall m_FUN_10cccac0(byte param_2); template<class... A> int m_FUN_10cccac0(A...); undefined4 * __thiscall m_FUN_10cccaf0(byte param_2); template<class... A> int m_FUN_10cccaf0(A...); undefined4 * __thiscall m_FUN_10cccb20(byte param_2); template<class... A> int m_FUN_10cccb20(A...); undefined4 * __thiscall m_FUN_10cccb50(byte param_2); template<class... A> int m_FUN_10cccb50(A...); undefined4 * __thiscall m_FUN_10cccb80(byte param_2); template<class... A> int m_FUN_10cccb80(A...); undefined4 * __thiscall m_FUN_10cccbb0(byte param_2); template<class... A> int m_FUN_10cccbb0(A...); undefined4 __thiscall m_FUN_10cccbe0(byte param_2); template<class... A> int m_FUN_10cccbe0(A...); undefined4 __thiscall m_FUN_10cccc10(byte param_2); template<class... A> int m_FUN_10cccc10(A...); undefined4 __thiscall m_FUN_10cccc40(byte param_2); template<class... A> int m_FUN_10cccc40(A...); undefined4 __thiscall m_FUN_10cccc70(byte param_2); template<class... A> int m_FUN_10cccc70(A...); undefined4 __thiscall m_FUN_10cccca0(byte param_2); template<class... A> int m_FUN_10cccca0(A...); undefined4 __thiscall m_FUN_10ccccd0(byte param_2); template<class... A> int m_FUN_10ccccd0(A...); undefined4 __thiscall m_FUN_10cccd00(byte param_2); template<class... A> int m_FUN_10cccd00(A...); undefined4 __thiscall m_FUN_10cccd30(byte param_2); template<class... A> int m_FUN_10cccd30(A...); undefined4 __thiscall m_FUN_10cccd60(byte param_2); template<class... A> int m_FUN_10cccd60(A...); undefined4 __thiscall m_FUN_10cccd90(byte param_2); template<class... A> int m_FUN_10cccd90(A...); undefined4 __thiscall m_FUN_10cccdc0(byte param_2); template<class... A> int m_FUN_10cccdc0(A...); undefined4 __thiscall m_FUN_10cccdf0(byte param_2); template<class... A> int m_FUN_10cccdf0(A...); undefined4 __thiscall m_FUN_10ccce20(byte param_2); template<class... A> int m_FUN_10ccce20(A...); undefined4 __thiscall m_FUN_10ccce50(byte param_2); template<class... A> int m_FUN_10ccce50(A...); undefined4 __thiscall m_FUN_10ccce80(byte param_2); template<class... A> int m_FUN_10ccce80(A...); undefined4 __thiscall m_FUN_10ccceb0(byte param_2); template<class... A> int m_FUN_10ccceb0(A...); undefined4 __thiscall m_FUN_10cccee0(byte param_2); template<class... A> int m_FUN_10cccee0(A...); undefined4 * __thiscall m_FUN_10ccd610(byte param_2); template<class... A> int m_FUN_10ccd610(A...); undefined4 * __thiscall m_FUN_10ccd6f0(byte param_2); template<class... A> int m_FUN_10ccd6f0(A...); undefined4 * __thiscall m_FUN_10ccd730(byte param_2); template<class... A> int m_FUN_10ccd730(A...); undefined4 * __thiscall m_FUN_10ccd770(byte param_2); template<class... A> int m_FUN_10ccd770(A...); undefined4 * __thiscall m_FUN_10ccd7b0(byte param_2); template<class... A> int m_FUN_10ccd7b0(A...); undefined4 * __thiscall m_FUN_10ccd7f0(byte param_2); template<class... A> int m_FUN_10ccd7f0(A...); undefined4 * __thiscall m_FUN_10ccd940(byte param_2); template<class... A> int m_FUN_10ccd940(A...); undefined4 * __thiscall m_FUN_10ccda20(byte param_2); template<class... A> int m_FUN_10ccda20(A...); int * __thiscall m_FUN_10cd37b0(int *param_2); template<class... A> int m_FUN_10cd37b0(A...); SCStr * __thiscall m_FUN_10cd3820(SCStr *param_2); template<class... A> int m_FUN_10cd3820(A...); SCStr * __thiscall m_FUN_10cd3a90(SCStr *param_2); template<class... A> int m_FUN_10cd3a90(A...); int * __thiscall m_FUN_10cd3c40(int *param_2); template<class... A> int m_FUN_10cd3c40(A...); int * __thiscall m_FUN_10cd4010(int *param_2,int param_3); template<class... A> int m_FUN_10cd4010(A...); void __thiscall m_FUN_10cd7cb0(int *param_2); template<class... A> int m_FUN_10cd7cb0(A...); void __thiscall m_FUN_10cd9af0(undefined4 param_2); template<class... A> int m_FUN_10cd9af0(A...); void __thiscall m_FUN_10cdaa70(undefined4 param_2); template<class... A> int m_FUN_10cdaa70(A...); undefined4 * __thiscall m_FUN_10cdb1d0(int *param_2); template<class... A> int m_FUN_10cdb1d0(A...); undefined4 * __thiscall m_FUN_10cdb210(int *param_2); template<class... A> int m_FUN_10cdb210(A...); undefined4 * __thiscall m_FUN_10cdb250(int *param_2); template<class... A> int m_FUN_10cdb250(A...); undefined4 * __thiscall m_FUN_10cdc590(byte param_2); template<class... A> int m_FUN_10cdc590(A...); undefined4 * __thiscall m_FUN_10cdc5c0(byte param_2); template<class... A> int m_FUN_10cdc5c0(A...); undefined4 * __thiscall m_FUN_10cdc5f0(byte param_2); template<class... A> int m_FUN_10cdc5f0(A...); undefined4 * __thiscall m_FUN_10cdc620(byte param_2); template<class... A> int m_FUN_10cdc620(A...); undefined4 * __thiscall m_FUN_10cdc660(byte param_2); template<class... A> int m_FUN_10cdc660(A...); undefined4 * __thiscall m_FUN_10cdc6a0(byte param_2); template<class... A> int m_FUN_10cdc6a0(A...); undefined4 __thiscall m_FUN_10cdc6e0(byte param_2); template<class... A> int m_FUN_10cdc6e0(A...); undefined4 __thiscall m_FUN_10cdc710(byte param_2); template<class... A> int m_FUN_10cdc710(A...); undefined4 __thiscall m_FUN_10cdc740(byte param_2); template<class... A> int m_FUN_10cdc740(A...); undefined4 * __thiscall m_FUN_10cdc770(byte param_2); template<class... A> int m_FUN_10cdc770(A...); undefined4 * __thiscall m_FUN_10cdc7c0(byte param_2); template<class... A> int m_FUN_10cdc7c0(A...); undefined4 * __thiscall m_FUN_10cdc810(byte param_2); template<class... A> int m_FUN_10cdc810(A...); undefined4 * __thiscall m_FUN_10cdc940(byte param_2); template<class... A> int m_FUN_10cdc940(A...); undefined4 * __thiscall m_FUN_10cdc970(byte param_2); template<class... A> int m_FUN_10cdc970(A...); undefined4 * __thiscall m_FUN_10cdc9a0(byte param_2); template<class... A> int m_FUN_10cdc9a0(A...); undefined4 * __thiscall m_FUN_10cdc9d0(byte param_2); template<class... A> int m_FUN_10cdc9d0(A...); undefined4 * __thiscall m_FUN_10cdcb60(byte param_2); template<class... A> int m_FUN_10cdcb60(A...); undefined4 * __thiscall m_FUN_10cdcba0(byte param_2); template<class... A> int m_FUN_10cdcba0(A...); SCStr * __thiscall m_FUN_10cddac0(SCStr *param_2); template<class... A> int m_FUN_10cddac0(A...); undefined4 __thiscall m_FUN_10cdf070(undefined4 param_2); template<class... A> int m_FUN_10cdf070(A...); undefined4 __thiscall m_FUN_10cdf0a0(undefined4 param_2); template<class... A> int m_FUN_10cdf0a0(A...); undefined4 * __thiscall m_FUN_10cdfd00(byte param_2); template<class... A> int m_FUN_10cdfd00(A...); undefined4 __thiscall m_FUN_10cdfd40(byte param_2); template<class... A> int m_FUN_10cdfd40(A...); void __thiscall m_FUN_10cdfda0(int param_2); template<class... A> int m_FUN_10cdfda0(A...); void __thiscall m_FUN_10ce0ad0(undefined4 param_2); template<class... A> int m_FUN_10ce0ad0(A...); undefined4 * __thiscall m_FUN_10ce0d90(int *param_2); template<class... A> int m_FUN_10ce0d90(A...); undefined4 * __thiscall m_FUN_10ce0dd0(int *param_2); template<class... A> int m_FUN_10ce0dd0(A...); undefined4 * __thiscall m_FUN_10ce1480(byte param_2); template<class... A> int m_FUN_10ce1480(A...); undefined4 * __thiscall m_FUN_10ce14c0(byte param_2); template<class... A> int m_FUN_10ce14c0(A...); undefined4 __thiscall m_FUN_10ce1500(byte param_2); template<class... A> int m_FUN_10ce1500(A...); undefined4 * __thiscall m_FUN_10ce1530(byte param_2); template<class... A> int m_FUN_10ce1530(A...); undefined4 * __thiscall m_FUN_10ce1560(byte param_2); template<class... A> int m_FUN_10ce1560(A...); undefined4 * __thiscall m_FUN_10ce16b0(byte param_2); template<class... A> int m_FUN_10ce16b0(A...); SCStr * __thiscall m_FUN_10ce1a40(SCStr *param_2); template<class... A> int m_FUN_10ce1a40(A...); undefined4 * __thiscall m_FUN_10ce22e0(int *param_2); template<class... A> int m_FUN_10ce22e0(A...); undefined4 * __thiscall m_FUN_10ce2600(byte param_2); template<class... A> int m_FUN_10ce2600(A...); undefined4 * __thiscall m_FUN_10ce2630(byte param_2); template<class... A> int m_FUN_10ce2630(A...); undefined4 * __thiscall m_FUN_10ce2670(byte param_2); template<class... A> int m_FUN_10ce2670(A...); void __thiscall m_FUN_10ce3280(undefined4 *param_2); template<class... A> int m_FUN_10ce3280(A...); undefined4 * __thiscall m_FUN_10ce37b0(byte param_2); template<class... A> int m_FUN_10ce37b0(A...); void __thiscall m_FUN_10ce39c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ce39c0(A...); int * __thiscall m_FUN_10ce4000(int *param_2,uint param_3); template<class... A> int m_FUN_10ce4000(A...); void __thiscall m_FUN_10ce4c60(undefined4 *param_2); template<class... A> int m_FUN_10ce4c60(A...); int __thiscall m_FUN_10ce5cd0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ce5cd0(A...); void __thiscall m_FUN_10ce64d0(int *param_2,SCStr *param_3); template<class... A> int m_FUN_10ce64d0(A...); undefined4 * __thiscall m_FUN_10ce66c0(int *param_2); template<class... A> int m_FUN_10ce66c0(A...); undefined4 * __thiscall m_FUN_10ce6700(int *param_2); template<class... A> int m_FUN_10ce6700(A...); undefined4 * __thiscall m_FUN_10ce6740(int *param_2); template<class... A> int m_FUN_10ce6740(A...); undefined4 * __thiscall m_FUN_10ce6780(int *param_2); template<class... A> int m_FUN_10ce6780(A...); undefined4 * __thiscall m_FUN_10ce7a40(byte param_2); template<class... A> int m_FUN_10ce7a40(A...); undefined4 __thiscall m_FUN_10ce7a80(byte param_2); template<class... A> int m_FUN_10ce7a80(A...); undefined4 __thiscall m_FUN_10ce7ab0(byte param_2); template<class... A> int m_FUN_10ce7ab0(A...); undefined4 __thiscall m_FUN_10ce7b70(byte param_2); template<class... A> int m_FUN_10ce7b70(A...); undefined4 * __thiscall m_FUN_10ce7ba0(byte param_2); template<class... A> int m_FUN_10ce7ba0(A...); uint __thiscall m_FUN_10ce9470(SCStr *param_2); template<class... A> int m_FUN_10ce9470(A...); void __thiscall m_FUN_10cee1c0(undefined4 *param_2); template<class... A> int m_FUN_10cee1c0(A...); undefined4 * __thiscall m_FUN_10cee310(int *param_2); template<class... A> int m_FUN_10cee310(A...); undefined4 __thiscall m_FUN_10ceed70(byte param_2); template<class... A> int m_FUN_10ceed70(A...); undefined4 __thiscall m_FUN_10ceeda0(byte param_2); template<class... A> int m_FUN_10ceeda0(A...); void __thiscall m_FUN_10ceee20(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ceee20(A...); undefined4 * __thiscall m_FUN_10cefaa0(undefined4 *param_2); template<class... A> int m_FUN_10cefaa0(A...); void __thiscall m_FUN_10cf0930(undefined4 *param_2); template<class... A> int m_FUN_10cf0930(A...); undefined4 * __thiscall m_FUN_10cf2cc0(int *param_2); template<class... A> int m_FUN_10cf2cc0(A...); undefined4 * __thiscall m_FUN_10cf2d00(int *param_2); template<class... A> int m_FUN_10cf2d00(A...); undefined4 __thiscall m_FUN_10cf3340(byte param_2); template<class... A> int m_FUN_10cf3340(A...); undefined4 *  __thiscall m_FUN_10cf3370(undefined4 *param_2); template<class... A> int m_FUN_10cf3370(A...); undefined4 *  __thiscall m_FUN_10cf3390(undefined4 *param_2); template<class... A> int m_FUN_10cf3390(A...); void __thiscall m_FUN_10cf33b0(char param_2); template<class... A> int m_FUN_10cf33b0(A...); void __thiscall m_FUN_10cf33d0(char param_2); template<class... A> int m_FUN_10cf33d0(A...); undefined4 *  __thiscall m_FUN_10cf3450(undefined4 *param_2); template<class... A> int m_FUN_10cf3450(A...); void __thiscall m_FUN_10cf3470(undefined4 *param_2); template<class... A> int m_FUN_10cf3470(A...); int * __thiscall m_FUN_10cf34e0(int *param_2); template<class... A> int m_FUN_10cf34e0(A...); SCStr * __thiscall m_FUN_10cf35c0(SCStr *param_2); template<class... A> int m_FUN_10cf35c0(A...); void __thiscall m_FUN_10cf35e0(int *param_2); template<class... A> int m_FUN_10cf35e0(A...); void __thiscall m_FUN_10cf3630(int *param_2); template<class... A> int m_FUN_10cf3630(A...); void __thiscall m_FUN_10cf3940(uint param_2); template<class... A> int m_FUN_10cf3940(A...); undefined4 * __thiscall m_FUN_10cf3fe0(int *param_2); template<class... A> int m_FUN_10cf3fe0(A...); undefined4 * __thiscall m_FUN_10cf4530(byte param_2); template<class... A> int m_FUN_10cf4530(A...); void __thiscall m_FUN_10cf49d0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cf49d0(A...); void __thiscall m_FUN_10cf5250(int *param_2); template<class... A> int m_FUN_10cf5250(A...); undefined4 * __thiscall m_FUN_10cf5610(int *param_2); template<class... A> int m_FUN_10cf5610(A...); undefined4 * __thiscall m_FUN_10cf5c50(byte param_2); template<class... A> int m_FUN_10cf5c50(A...); undefined4 * __thiscall m_FUN_10cf5c80(byte param_2); template<class... A> int m_FUN_10cf5c80(A...); undefined4 __thiscall m_FUN_10cf5cc0(byte param_2); template<class... A> int m_FUN_10cf5cc0(A...); undefined4 * __thiscall m_FUN_10cf5cf0(byte param_2); template<class... A> int m_FUN_10cf5cf0(A...); SCStr * __thiscall m_FUN_10cf6150(SCStr *param_2); template<class... A> int m_FUN_10cf6150(A...); undefined4 * __thiscall m_FUN_10cf65a0(int *param_2); template<class... A> int m_FUN_10cf65a0(A...); undefined4 * __thiscall m_FUN_10cf74b0(byte param_2); template<class... A> int m_FUN_10cf74b0(A...); undefined4 __thiscall m_FUN_10cf7790(byte param_2); template<class... A> int m_FUN_10cf7790(A...); SCStr * __thiscall m_FUN_10cf7ac0(SCStr *param_2); template<class... A> int m_FUN_10cf7ac0(A...); int * __thiscall m_FUN_10cf7ae0(int *param_2); template<class... A> int m_FUN_10cf7ae0(A...); SCStr * __thiscall m_FUN_10cf7f50(SCStr *param_2); template<class... A> int m_FUN_10cf7f50(A...); SCStr * __thiscall m_FUN_10cf7f90(SCStr *param_2); template<class... A> int m_FUN_10cf7f90(A...); SCStr * __thiscall m_FUN_10cf7fb0(SCStr *param_2); template<class... A> int m_FUN_10cf7fb0(A...); SCStr * __thiscall m_FUN_10cf88e0(SCStr *param_2); template<class... A> int m_FUN_10cf88e0(A...); SCStr * __thiscall m_FUN_10cf8900(SCStr *param_2); template<class... A> int m_FUN_10cf8900(A...); void __thiscall m_FUN_10cf8d90(SCStr *param_2); template<class... A> int m_FUN_10cf8d90(A...); void __thiscall m_FUN_10cf8dc0(SCStr *param_2); template<class... A> int m_FUN_10cf8dc0(A...); void __thiscall m_FUN_10cf8df0(SCStr *param_2); template<class... A> int m_FUN_10cf8df0(A...); int * __thiscall m_FUN_10cf9c90(int *param_2,uint param_3); template<class... A> int m_FUN_10cf9c90(A...); undefined4 __thiscall m_FUN_10cfbb20(byte param_2); template<class... A> int m_FUN_10cfbb20(A...); undefined4 * __thiscall m_FUN_10cfbc00(byte param_2); template<class... A> int m_FUN_10cfbc00(A...); undefined4 __thiscall m_FUN_10cfbe60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfbe60(A...); int * __thiscall m_FUN_10cfc100(int *param_2,uint param_3); template<class... A> int m_FUN_10cfc100(A...); undefined4 __thiscall m_FUN_10cfc1c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc1c0(A...); undefined4 __thiscall m_FUN_10cfc400(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc400(A...); undefined4 __thiscall m_FUN_10cfc440(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc440(A...); SCStr * __thiscall m_FUN_10cfc4b0(SCStr *param_2); template<class... A> int m_FUN_10cfc4b0(A...); undefined4 __thiscall m_FUN_10cfc4e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc4e0(A...); undefined4 __thiscall m_FUN_10cfc510(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cfc510(A...); void __thiscall m_FUN_10cfe140(undefined4 param_2,undefined8 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cfe140(A...); undefined4 * __thiscall m_FUN_10d00ad0(int *param_2); template<class... A> int m_FUN_10d00ad0(A...); undefined4 * __thiscall m_FUN_10d00b10(int *param_2); template<class... A> int m_FUN_10d00b10(A...); undefined4 * __thiscall m_FUN_10d00b50(int *param_2); template<class... A> int m_FUN_10d00b50(A...); undefined4 * __thiscall m_FUN_10d00bc0(int *param_2); template<class... A> int m_FUN_10d00bc0(A...); undefined4 * __thiscall m_FUN_10d00c00(int *param_2); template<class... A> int m_FUN_10d00c00(A...); undefined4 * __thiscall m_FUN_10d02630(byte param_2); template<class... A> int m_FUN_10d02630(A...); undefined4 * __thiscall m_FUN_10d02670(byte param_2); template<class... A> int m_FUN_10d02670(A...); undefined4 __thiscall m_FUN_10d02ab0(byte param_2); template<class... A> int m_FUN_10d02ab0(A...); undefined4 * __thiscall m_FUN_10d02ae0(byte param_2); template<class... A> int m_FUN_10d02ae0(A...); undefined4 * __thiscall m_FUN_10d02d90(byte param_2); template<class... A> int m_FUN_10d02d90(A...); undefined4 * __thiscall m_FUN_10d02dc0(byte param_2); template<class... A> int m_FUN_10d02dc0(A...); void __thiscall m_FUN_10d030e0(int *param_2); template<class... A> int m_FUN_10d030e0(A...); void __thiscall m_FUN_10d03130(undefined4 *param_2); template<class... A> int m_FUN_10d03130(A...); SCStr * __thiscall m_FUN_10d04e10(SCStr *param_2); template<class... A> int m_FUN_10d04e10(A...); SCStr * __thiscall m_FUN_10d04e60(SCStr *param_2); template<class... A> int m_FUN_10d04e60(A...); SCStr * __thiscall m_FUN_10d04ec0(SCStr *param_2); template<class... A> int m_FUN_10d04ec0(A...); SCStr * __thiscall m_FUN_10d04ee0(SCStr *param_2); template<class... A> int m_FUN_10d04ee0(A...); void __thiscall m_FUN_10d05e30(undefined4 param_2); template<class... A> int m_FUN_10d05e30(A...); undefined4 * __thiscall m_FUN_10d085c0(int *param_2); template<class... A> int m_FUN_10d085c0(A...); undefined4 __thiscall m_FUN_10d09cb0(byte param_2); template<class... A> int m_FUN_10d09cb0(A...); undefined4 __thiscall m_FUN_10d09dc0(byte param_2); template<class... A> int m_FUN_10d09dc0(A...); undefined4 __thiscall m_FUN_10d09df0(byte param_2); template<class... A> int m_FUN_10d09df0(A...); undefined4 *  __thiscall m_FUN_10d09f30(undefined4 *param_2); template<class... A> int m_FUN_10d09f30(A...); undefined4 *  __thiscall m_FUN_10d09f50(undefined4 *param_2); template<class... A> int m_FUN_10d09f50(A...); void __thiscall m_FUN_10d09f70(char param_2); template<class... A> int m_FUN_10d09f70(A...); void  __thiscall m_FUN_10d09f90(char param_2); template<class... A> int m_FUN_10d09f90(A...); undefined4 *  __thiscall m_FUN_10d0a1e0(undefined4 *param_2); template<class... A> int m_FUN_10d0a1e0(A...); void __thiscall m_FUN_10d0a200(undefined4 *param_2); template<class... A> int m_FUN_10d0a200(A...); int * __thiscall m_FUN_10d0b910(int *param_2); template<class... A> int m_FUN_10d0b910(A...); void __thiscall m_FUN_10d0f480(undefined4 param_2); template<class... A> int m_FUN_10d0f480(A...); void __thiscall m_FUN_10d118c0(int param_2); template<class... A> int m_FUN_10d118c0(A...); undefined4 * __thiscall m_FUN_10d11970(int *param_2); template<class... A> int m_FUN_10d11970(A...); undefined4 * __thiscall m_FUN_10d12900(byte param_2); template<class... A> int m_FUN_10d12900(A...); undefined4 __thiscall m_FUN_10d129e0(byte param_2); template<class... A> int m_FUN_10d129e0(A...); undefined4 * __thiscall m_FUN_10d12a10(byte param_2); template<class... A> int m_FUN_10d12a10(A...); undefined4 * __thiscall m_FUN_10d12a40(byte param_2); template<class... A> int m_FUN_10d12a40(A...); undefined4 * __thiscall m_FUN_10d12a70(byte param_2); template<class... A> int m_FUN_10d12a70(A...); void __thiscall m_FUN_10d12d90(int param_2); template<class... A> int m_FUN_10d12d90(A...); int * __thiscall m_FUN_10d13740(int *param_2,uint param_3); template<class... A> int m_FUN_10d13740(A...); SCStr * __thiscall m_FUN_10d137c0(SCStr *param_2); template<class... A> int m_FUN_10d137c0(A...); undefined4 * __thiscall m_FUN_10d15430(int *param_2); template<class... A> int m_FUN_10d15430(A...); undefined4 * __thiscall m_FUN_10d15470(int *param_2); template<class... A> int m_FUN_10d15470(A...); undefined4 __thiscall m_FUN_10d161c0(byte param_2); template<class... A> int m_FUN_10d161c0(A...); undefined4 * __thiscall m_FUN_10d16590(byte param_2); template<class... A> int m_FUN_10d16590(A...); undefined4 * __thiscall m_FUN_10d165d0(byte param_2); template<class... A> int m_FUN_10d165d0(A...); SCStr * __thiscall m_FUN_10d176f0(SCStr *param_2); template<class... A> int m_FUN_10d176f0(A...); undefined4 __thiscall m_FUN_10d17e80(int param_2); template<class... A> int m_FUN_10d17e80(A...); void __thiscall m_FUN_10d19340(undefined4 param_2); template<class... A> int m_FUN_10d19340(A...); void __thiscall m_FUN_10d197a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10d197a0(A...); void __thiscall m_FUN_10d19b20(undefined4 *param_2); template<class... A> int m_FUN_10d19b20(A...); undefined4 * __thiscall m_FUN_10d19b70(int *param_2); template<class... A> int m_FUN_10d19b70(A...); undefined4 * __thiscall m_FUN_10d19bb0(int *param_2); template<class... A> int m_FUN_10d19bb0(A...); undefined4 * __thiscall m_FUN_10d19bf0(int *param_2); template<class... A> int m_FUN_10d19bf0(A...); undefined4 * __thiscall m_FUN_10d19c30(int *param_2); template<class... A> int m_FUN_10d19c30(A...); undefined4 * __thiscall m_FUN_10d19c70(int *param_2); template<class... A> int m_FUN_10d19c70(A...); undefined4 * __thiscall m_FUN_10d19cb0(int *param_2); template<class... A> int m_FUN_10d19cb0(A...); undefined4 * __thiscall m_FUN_10d19cf0(int *param_2); template<class... A> int m_FUN_10d19cf0(A...); undefined4 * __thiscall m_FUN_10d1c3f0(undefined4 *param_2); template<class... A> int m_FUN_10d1c3f0(A...); int * __thiscall m_FUN_10d1c4c0(int *param_2,uint param_3); template<class... A> int m_FUN_10d1c4c0(A...); SCStr * __thiscall m_FUN_10d1c5a0(SCStr *param_2); template<class... A> int m_FUN_10d1c5a0(A...); SCStr * __thiscall m_FUN_10d1ccc0(SCStr *param_2); template<class... A> int m_FUN_10d1ccc0(A...); void __thiscall m_FUN_10d1d4a0(undefined4 *param_2); template<class... A> int m_FUN_10d1d4a0(A...); undefined4 *  __thiscall m_FUN_10d1eb10(int param_2); template<class... A> int m_FUN_10d1eb10(A...); undefined4 *  __thiscall m_FUN_10d1f920(undefined4 *param_2); template<class... A> int m_FUN_10d1f920(A...); void __thiscall m_FUN_10d1f940(undefined4 *param_2); template<class... A> int m_FUN_10d1f940(A...); void  __thiscall m_FUN_10d1f960(char param_2); template<class... A> int m_FUN_10d1f960(A...); void  __thiscall m_FUN_10d1f980(char param_2); template<class... A> int m_FUN_10d1f980(A...); void __thiscall m_FUN_10d1fb00(undefined4 *param_2); template<class... A> int m_FUN_10d1fb00(A...); void __thiscall m_FUN_10d1fb20(undefined4 *param_2); template<class... A> int m_FUN_10d1fb20(A...); int * __thiscall m_FUN_10d20520(int *param_2,uint param_3); template<class... A> int m_FUN_10d20520(A...); SCStr * __thiscall m_FUN_10d20670(SCStr *param_2); template<class... A> int m_FUN_10d20670(A...); SCStr * __thiscall m_FUN_10d20690(SCStr *param_2); template<class... A> int m_FUN_10d20690(A...); SCStr * __thiscall m_FUN_10d21870(SCStr *param_2); template<class... A> int m_FUN_10d21870(A...); void __thiscall m_FUN_10d23440(int param_2); template<class... A> int m_FUN_10d23440(A...); int __thiscall m_FUN_10d24470(uint *param_2); template<class... A> int m_FUN_10d24470(A...); undefined4 * __thiscall m_FUN_10d26290(int *param_2); template<class... A> int m_FUN_10d26290(A...); undefined4 *  __thiscall m_FUN_10d28920(undefined4 *param_2); template<class... A> int m_FUN_10d28920(A...); undefined4 *  __thiscall m_FUN_10d28940(undefined4 *param_2); template<class... A> int m_FUN_10d28940(A...); undefined4 *  __thiscall m_FUN_10d28960(undefined4 *param_2); template<class... A> int m_FUN_10d28960(A...); undefined4 *  __thiscall m_FUN_10d28980(undefined4 *param_2); template<class... A> int m_FUN_10d28980(A...); undefined4 *  __thiscall m_FUN_10d289a0(undefined4 *param_2); template<class... A> int m_FUN_10d289a0(A...); undefined4 *  __thiscall m_FUN_10d289c0(undefined4 *param_2); template<class... A> int m_FUN_10d289c0(A...); void __thiscall m_FUN_10d289e0(undefined4 *param_2); template<class... A> int m_FUN_10d289e0(A...); void __thiscall m_FUN_10d28a00(undefined4 *param_2); template<class... A> int m_FUN_10d28a00(A...); void __thiscall m_FUN_10d28a20(char param_2); template<class... A> int m_FUN_10d28a20(A...); void __thiscall m_FUN_10d28a40(char param_2); template<class... A> int m_FUN_10d28a40(A...); void __thiscall m_FUN_10d28a60(char param_2); template<class... A> int m_FUN_10d28a60(A...); void __thiscall m_FUN_10d28a80(char param_2); template<class... A> int m_FUN_10d28a80(A...); void __thiscall m_FUN_10d28aa0(char param_2); template<class... A> int m_FUN_10d28aa0(A...); void __thiscall m_FUN_10d28ac0(char param_2); template<class... A> int m_FUN_10d28ac0(A...); void  __thiscall m_FUN_10d28ae0(char param_2); template<class... A> int m_FUN_10d28ae0(A...); void  __thiscall m_FUN_10d28b00(char param_2); template<class... A> int m_FUN_10d28b00(A...); void  __thiscall m_FUN_10d28b20(char param_2); template<class... A> int m_FUN_10d28b20(A...); undefined4 *  __thiscall m_FUN_10d29210(undefined4 *param_2); template<class... A> int m_FUN_10d29210(A...); undefined4 *  __thiscall m_FUN_10d29230(undefined4 *param_2); template<class... A> int m_FUN_10d29230(A...); undefined4 *  __thiscall m_FUN_10d29250(undefined4 *param_2); template<class... A> int m_FUN_10d29250(A...); undefined4 *  __thiscall m_FUN_10d29270(undefined4 *param_2); template<class... A> int m_FUN_10d29270(A...); undefined4 *  __thiscall m_FUN_10d29290(undefined4 *param_2); template<class... A> int m_FUN_10d29290(A...); void __thiscall m_FUN_10d292b0(undefined4 *param_2); template<class... A> int m_FUN_10d292b0(A...); void __thiscall m_FUN_10d292d0(undefined4 *param_2); template<class... A> int m_FUN_10d292d0(A...); void __thiscall m_FUN_10d292f0(undefined4 *param_2); template<class... A> int m_FUN_10d292f0(A...); SCStr * __thiscall m_FUN_10d29c20(SCStr *param_2); template<class... A> int m_FUN_10d29c20(A...); int * __thiscall m_FUN_10d29f40(int *param_2,uint param_3); template<class... A> int m_FUN_10d29f40(A...); int * __thiscall m_FUN_10d29f90(int *param_2,int param_3); template<class... A> int m_FUN_10d29f90(A...); int * __thiscall m_FUN_10d29fc0(int *param_2,int param_3); template<class... A> int m_FUN_10d29fc0(A...); int * __thiscall m_FUN_10d29ff0(int *param_2,int param_3); template<class... A> int m_FUN_10d29ff0(A...); SCStr * __thiscall m_FUN_10d2a200(SCStr *param_2); template<class... A> int m_FUN_10d2a200(A...); SCStr * __thiscall m_FUN_10d2a8f0(SCStr *param_2); template<class... A> int m_FUN_10d2a8f0(A...); undefined4 * __thiscall m_FUN_10d2df10(int *param_2); template<class... A> int m_FUN_10d2df10(A...); undefined4 __thiscall m_FUN_10d307e0(byte param_2); template<class... A> int m_FUN_10d307e0(A...); undefined4 * __thiscall m_FUN_10d30900(byte param_2); template<class... A> int m_FUN_10d30900(A...); undefined4 *  __thiscall m_FUN_10d30a60(undefined4 *param_2); template<class... A> int m_FUN_10d30a60(A...); undefined4 *  __thiscall m_FUN_10d30a80(undefined4 *param_2); template<class... A> int m_FUN_10d30a80(A...); undefined4 *  __thiscall m_FUN_10d30aa0(undefined4 *param_2); template<class... A> int m_FUN_10d30aa0(A...); void __thiscall m_FUN_10d30ae0(char param_2); template<class... A> int m_FUN_10d30ae0(A...); void __thiscall m_FUN_10d30b00(char param_2); template<class... A> int m_FUN_10d30b00(A...); void  __thiscall m_FUN_10d30b20(char param_2); template<class... A> int m_FUN_10d30b20(A...); undefined4 *  __thiscall m_FUN_10d30b70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10d30b70(A...); void __thiscall m_FUN_10d30c10(undefined4 *param_2); template<class... A> int m_FUN_10d30c10(A...); void __thiscall m_FUN_10d30c30(undefined4 *param_2); template<class... A> int m_FUN_10d30c30(A...); void __thiscall m_FUN_10d30c50(undefined4 *param_2); template<class... A> int m_FUN_10d30c50(A...); SCStr * __thiscall m_FUN_10d35680(SCStr *param_2); template<class... A> int m_FUN_10d35680(A...); SCStr * __thiscall m_FUN_10d356b0(SCStr *param_2); template<class... A> int m_FUN_10d356b0(A...); SCStr * __thiscall m_FUN_10d356e0(SCStr *param_2); template<class... A> int m_FUN_10d356e0(A...); undefined4 * __thiscall m_FUN_10d3ac70(int *param_2); template<class... A> int m_FUN_10d3ac70(A...); undefined4 __thiscall m_FUN_10d3b460(byte param_2); template<class... A> int m_FUN_10d3b460(A...); void __thiscall m_FUN_10d3b670(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4); template<class... A> int m_FUN_10d3b670(A...); void __thiscall m_FUN_10d3b6a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4); template<class... A> int m_FUN_10d3b6a0(A...); SCStr * __thiscall m_FUN_10d3c4f0(SCStr *param_2); template<class... A> int m_FUN_10d3c4f0(A...); SCStr * __thiscall m_FUN_10d3c520(SCStr *param_2); template<class... A> int m_FUN_10d3c520(A...); SCStr * __thiscall m_FUN_10d3c540(SCStr *param_2); template<class... A> int m_FUN_10d3c540(A...); SCStr * __thiscall m_FUN_10d3c5d0(SCStr *param_2); template<class... A> int m_FUN_10d3c5d0(A...); void __thiscall m_FUN_10d3cd10(int param_2); template<class... A> int m_FUN_10d3cd10(A...); undefined4 * __thiscall m_FUN_10d3e6a0(byte param_2); template<class... A> int m_FUN_10d3e6a0(A...); undefined4 * __thiscall m_FUN_10d3e6e0(byte param_2); template<class... A> int m_FUN_10d3e6e0(A...); undefined4 __thiscall m_FUN_10d3e720(byte param_2); template<class... A> int m_FUN_10d3e720(A...); undefined4 * __thiscall m_FUN_10d3e890(byte param_2); template<class... A> int m_FUN_10d3e890(A...); undefined4 * __thiscall m_FUN_10d3e8d0(byte param_2); template<class... A> int m_FUN_10d3e8d0(A...); undefined4 * __thiscall m_FUN_10d3e900(byte param_2); template<class... A> int m_FUN_10d3e900(A...); undefined4 * __thiscall m_FUN_10d3eb40(byte param_2); template<class... A> int m_FUN_10d3eb40(A...); undefined4 * __thiscall m_FUN_10d3ed50(byte param_2); template<class... A> int m_FUN_10d3ed50(A...); undefined4 * __thiscall m_FUN_10d3ed90(byte param_2); template<class... A> int m_FUN_10d3ed90(A...); int * __thiscall m_FUN_10d3f800(int *param_2,uint param_3); template<class... A> int m_FUN_10d3f800(A...); SCStr * __thiscall m_FUN_10d3f860(SCStr *param_2); template<class... A> int m_FUN_10d3f860(A...); SCStr * __thiscall m_FUN_10d3f880(SCStr *param_2); template<class... A> int m_FUN_10d3f880(A...); SCStr * __thiscall m_FUN_10d3f8a0(SCStr *param_2); template<class... A> int m_FUN_10d3f8a0(A...); SCStr * __thiscall m_FUN_10d3ff40(SCStr *param_2); template<class... A> int m_FUN_10d3ff40(A...); void __thiscall m_FUN_10d40090(int param_2); template<class... A> int m_FUN_10d40090(A...); void __thiscall m_FUN_10d40250(int param_2); template<class... A> int m_FUN_10d40250(A...); void __thiscall m_FUN_10d40290(int param_2); template<class... A> int m_FUN_10d40290(A...); void __thiscall m_FUN_10d402c0(int param_2); template<class... A> int m_FUN_10d402c0(A...); undefined4 * __thiscall m_FUN_10d42420(int *param_2); template<class... A> int m_FUN_10d42420(A...); undefined4 * __thiscall m_FUN_10d42460(int *param_2); template<class... A> int m_FUN_10d42460(A...); undefined4 __thiscall m_FUN_10d43bb0(byte param_2); template<class... A> int m_FUN_10d43bb0(A...); void __thiscall m_FUN_10d440e0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10d440e0(A...); int * __thiscall m_FUN_10d45eb0(int *param_2,uint param_3); template<class... A> int m_FUN_10d45eb0(A...); SCStr * __thiscall m_FUN_10d46740(SCStr *param_2); template<class... A> int m_FUN_10d46740(A...); undefined4 * __thiscall m_FUN_10d4a400(int *param_2); template<class... A> int m_FUN_10d4a400(A...); undefined4 * __thiscall m_FUN_10d4a440(int *param_2); template<class... A> int m_FUN_10d4a440(A...); undefined4 * __thiscall m_FUN_10d4a530(int *param_2); template<class... A> int m_FUN_10d4a530(A...); undefined4 * __thiscall m_FUN_10d4a570(int *param_2); template<class... A> int m_FUN_10d4a570(A...); undefined4 * __thiscall m_FUN_10d4a5b0(undefined4 *param_2); template<class... A> int m_FUN_10d4a5b0(A...); undefined4 * __thiscall m_FUN_10d4cc10(byte param_2); template<class... A> int m_FUN_10d4cc10(A...); undefined4 * __thiscall m_FUN_10d4cc40(byte param_2); template<class... A> int m_FUN_10d4cc40(A...); void __thiscall m_FUN_10d4d1a0(int *param_2); template<class... A> int m_FUN_10d4d1a0(A...); SCStr * __thiscall m_FUN_10d4f570(SCStr *param_2); template<class... A> int m_FUN_10d4f570(A...); void __thiscall m_FUN_10d50d00(undefined4 param_2); template<class... A> int m_FUN_10d50d00(A...); void __thiscall m_FUN_10d515e0(undefined4 param_2); template<class... A> int m_FUN_10d515e0(A...); SCStr * __thiscall m_FUN_10d51bf0(SCStr *param_2); template<class... A> int m_FUN_10d51bf0(A...); undefined4 *  __thiscall m_FUN_10d540a0(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10d540a0(A...); undefined4 __thiscall m_FUN_10d541e0(byte param_2); template<class... A> int m_FUN_10d541e0(A...); undefined4 * __thiscall m_FUN_10d54210(byte param_2); template<class... A> int m_FUN_10d54210(A...); undefined4 __thiscall m_FUN_10d54240(byte param_2); template<class... A> int m_FUN_10d54240(A...); undefined4 *  __thiscall m_FUN_10d54390(undefined4 *param_2); template<class... A> int m_FUN_10d54390(A...); undefined4 *  __thiscall m_FUN_10d543b0(undefined4 *param_2); template<class... A> int m_FUN_10d543b0(A...); void  __thiscall m_FUN_10d543d0(char param_2); template<class... A> int m_FUN_10d543d0(A...); void __thiscall m_FUN_10d543f0(char param_2); template<class... A> int m_FUN_10d543f0(A...); void __thiscall m_FUN_10d54440(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10d54440(A...); void __thiscall m_FUN_10d545a0(undefined4 *param_2); template<class... A> int m_FUN_10d545a0(A...); void __thiscall m_FUN_10d545c0(undefined4 *param_2); template<class... A> int m_FUN_10d545c0(A...); SCStr * __thiscall m_FUN_10d55450(SCStr *param_2); template<class... A> int m_FUN_10d55450(A...); undefined4 * __thiscall m_FUN_10d58f10(int *param_2); template<class... A> int m_FUN_10d58f10(A...); undefined4 *  __thiscall m_FUN_10d59ad0(undefined4 *param_2); template<class... A> int m_FUN_10d59ad0(A...); void __thiscall m_FUN_10d59af0(char param_2); template<class... A> int m_FUN_10d59af0(A...); void __thiscall m_FUN_10d59be0(undefined4 *param_2); template<class... A> int m_FUN_10d59be0(A...); undefined4 __thiscall m_FUN_10d59ee0(undefined4 param_2); template<class... A> int m_FUN_10d59ee0(A...); SCStr * __thiscall m_FUN_10d5a240(SCStr *param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10d5a240(A...); SCStr * __thiscall m_FUN_10d5a340(SCStr *param_2,undefined4 param_3); template<class... A> int m_FUN_10d5a340(A...); SCStr * __thiscall m_FUN_10d5a3b0(SCStr *param_2); template<class... A> int m_FUN_10d5a3b0(A...); SCStr * __thiscall m_FUN_10d5a430(SCStr *param_2,undefined4 param_3); template<class... A> int m_FUN_10d5a430(A...); undefined4 * __thiscall m_FUN_10d5db10(int *param_2); template<class... A> int m_FUN_10d5db10(A...); };

extern int FUN_10065348(...);
extern int FUN_1006aac8(...);
extern int FUN_10070892(...);
template<class... A> int FUN_10c8de80(A...);
template<class... A> int __stdcall FUN_10cbcff0(A...);
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
template<class... A> int __stdcall FUN_11158240(A...);
template<class... A> int __stdcall FUN_11158270(A...);
template<class... A> int __stdcall FUN_111582a0(A...);
template<class... A> int __stdcall FUN_111582d0(A...);
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
template<class... A> int __stdcall thunk_FUN_101e7e50(A...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102036c0(...);
extern int thunk_FUN_10208940(...);
extern int thunk_FUN_1020a5b0(...);
extern int thunk_FUN_1020fe60(...);
extern int thunk_FUN_102105a0(...);
template<class... A> int __stdcall thunk_FUN_10211340(A...);
extern int thunk_FUN_1021b750(...);
template<class... A> int __stdcall thunk_FUN_1021d0d0(A...);
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
template<class... A> int __stdcall thunk_FUN_103d63d0(A...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_103d6930(...);
extern int thunk_FUN_104d8570(...);
extern int thunk_FUN_104d8ab0(...);
extern int thunk_FUN_104d8ba0(...);
extern int thunk_FUN_104d98f0(...);
extern int thunk_FUN_104d9cc0(...);
template<class... A> int __stdcall thunk_FUN_104da1b0(A...);
extern int thunk_FUN_104dec20(...);
extern int thunk_FUN_10509ca0(...);
template<class... A> int __stdcall thunk_FUN_1059d5a0(A...);
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
template<class... A> int __stdcall thunk_FUN_10bf3f30(A...);
extern int thunk_FUN_10bf4300(...);
extern int thunk_FUN_10bf5990(...);
extern int thunk_FUN_10bf5b40(...);
extern int thunk_FUN_10bf8040(...);
template<class... A> int __stdcall thunk_FUN_10bfa620(A...);
extern int thunk_FUN_10bfb550(...);
extern int thunk_FUN_10bfb670(...);
extern int thunk_FUN_10bfb760(...);
extern int thunk_FUN_10bfebd0(...);
template<class... A> int __stdcall thunk_FUN_10c11c30(A...);
extern int thunk_FUN_10c13d10(...);
extern int thunk_FUN_10c17930(...);
extern int thunk_FUN_10c17bb0(...);
extern int thunk_FUN_10c21f70(...);
template<class... A> int __stdcall thunk_FUN_10c220f0(A...);
template<class... A> int __stdcall thunk_FUN_10c22290(A...);
extern int thunk_FUN_10c22600(...);
extern int thunk_FUN_10c24160(...);
extern int thunk_FUN_10c2bd80(...);
extern int thunk_FUN_10c31e60(...);
extern int thunk_FUN_10c322c0(...);
extern int thunk_FUN_10c34bf0(...);
template<class... A> int __stdcall thunk_FUN_10c34d70(A...);
extern int thunk_FUN_10c35c30(...);
extern int thunk_FUN_10c36180(...);
extern int thunk_FUN_10c3a310(...);
extern int thunk_FUN_10c3b550(...);
extern int thunk_FUN_10c3d380(...);
extern int thunk_FUN_10c3d700(...);
extern int thunk_FUN_10c3d800(...);
extern int thunk_FUN_10c3d960(...);
template<class... A> int __stdcall thunk_FUN_10c3dd10(A...);
extern int thunk_FUN_10c46460(...);
template<class... A> int __stdcall thunk_FUN_10c47270(A...);
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
template<class... A> int __stdcall thunk_FUN_10c69cb0(A...);
template<class... A> int __stdcall thunk_FUN_10c6c6c0(A...);
extern int thunk_FUN_10c6cda0(...);
extern int thunk_FUN_10c74230(...);
extern int thunk_FUN_10c74420(...);
extern int thunk_FUN_10c7a380(...);
template<class... A> int __stdcall thunk_FUN_10c7a9d0(A...);
extern int thunk_FUN_10c7bc70(...);
extern int thunk_FUN_10c7cce0(...);
extern int thunk_FUN_10c7d430(...);
extern int thunk_FUN_10c7ddf0(...);
extern int thunk_FUN_10c80f90(...);
extern int thunk_FUN_10c810e0(...);
extern int thunk_FUN_10c81300(...);
extern int thunk_FUN_10c81440(...);
extern int thunk_FUN_10c83fc0(...);
template<class... A> int __stdcall thunk_FUN_10c84db0(A...);
extern int thunk_FUN_10c85210(...);
extern int thunk_FUN_10c85290(...);
extern int thunk_FUN_10c85310(...);
extern int thunk_FUN_10c853f0(...);
template<class... A> int __stdcall thunk_FUN_10c872c0(A...);
template<class... A> int __stdcall thunk_FUN_10c87570(A...);
extern int thunk_FUN_10c89860(...);
template<class... A> int __stdcall thunk_FUN_10c8edf0(A...);
template<class... A> int __stdcall thunk_FUN_10c8f700(A...);
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
template<class... A> int __stdcall thunk_FUN_10ce00f0(A...);
extern int thunk_FUN_10ce04e0(...);
extern int thunk_FUN_10ce10f0(...);
extern int thunk_FUN_10ce2c30(...);
template<class... A> int __stdcall thunk_FUN_10ce2d60(A...);
extern int thunk_FUN_10ce3510(...);
extern int thunk_FUN_10ce5d10(...);
extern int thunk_FUN_10ce5db0(...);
template<class... A> int __stdcall thunk_FUN_10ce5f30(A...);
extern int thunk_FUN_10ce6ee0(...);
extern int thunk_FUN_10ce6fd0(...);
extern int thunk_FUN_10ce74c0(...);
template<class... A> int __stdcall thunk_FUN_10cede00(A...);
extern int thunk_FUN_10cee770(...);
extern int thunk_FUN_10cee930(...);
extern int thunk_FUN_10cefa80(...);
extern int thunk_FUN_10cefc20(...);
extern int thunk_FUN_10cf30f0(...);
template<class... A> int __stdcall thunk_FUN_10cf3780(A...);
template<class... A> int __stdcall thunk_FUN_10cf3d20(A...);
extern int thunk_FUN_10cf3e20(...);
extern int thunk_FUN_10cf4ae0(...);
template<class... A> int __stdcall thunk_FUN_10cf4bb0(A...);
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
template<class... A> int __stdcall thunk_FUN_10d19820(A...);
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
template<class... A> int __stdcall thunk_FUN_11093530(A...);
extern int thunk_FUN_110965d0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
template<class... A> int __stdcall thunk_FUN_110b2900(A...);
extern int thunk_FUN_110fa660(...);
extern int thunk_FUN_111004d0(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_1112c3b0(...);
template<class... A> int __stdcall thunk_FUN_11131cc0(A...);
extern int thunk_FUN_11132140(...);
extern int thunk_FUN_11132ba0(...);
template<class... A> int __stdcall thunk_FUN_1113f590(A...);
extern int thunk_FUN_11158170(...);
extern int thunk_FUN_11159cc0(...);
extern int thunk_FUN_1115b9c0(...);
extern int thunk_FUN_111a2df0(...);
extern int thunk_FUN_111a2ec0(...);
extern int thunk_FUN_111a32a0(...);
extern int thunk_FUN_111a3630(...);
extern int thunk_FUN_111a36f0(...);
extern int thunk_FUN_111a4bc0(...);
template<class... A> int __stdcall thunk_FUN_111c0a80(A...);
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
template<class... A> int __stdcall thunk_FUN_111fc6a0(A...);
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
extern "C" void LAB_116cfe30(void);
extern "C" void LAB_116f7e10(void);
extern undefined1 LAB_116f910e[];
extern "C" void LAB_11704550(void);
extern "C" void LAB_1170f170(void);
extern int *PTR_FUN_12119fa0;
extern void *ExceptionList;
extern int FUN_112a9d40(...);
void __fastcall FUN_10befff0(undefined4 *param_1);
template<class... A> int FUN_10befff0(A...);
void __fastcall FUN_10bf00f0(undefined4 *param_1);
template<class... A> int FUN_10bf00f0(A...);
int * __fastcall FUN_10bf0550(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bf0550(A...);
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
template<class... A> int __stdcall FUN_10bf34a0(A...);
undefined4 * __fastcall FUN_10bf50a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bf50a0(A...);
undefined4 * __fastcall FUN_10bf50d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bf50d0(A...);
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
template<class... A> int __stdcall FUN_10bf5f40(A...);
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
template<class... A> int __stdcall FUN_10bfad00(A...);
void __fastcall FUN_10bfb3b0(int param_1);
template<class... A> int FUN_10bfb3b0(A...);
void __fastcall FUN_10bfb4b0(int param_1);
template<class... A> int FUN_10bfb4b0(A...);
void __fastcall FUN_10bfb650(undefined4 *param_1);
template<class... A> int FUN_10bfb650(A...);
int __stdcall FUN_10bfbad0(undefined4 param_1);
template<class... A> int __stdcall FUN_10bfbad0(A...);
void __fastcall FUN_10bfbcd0(int param_1);
template<class... A> int FUN_10bfbcd0(A...);
void __fastcall FUN_10bfe9e0(int *param_1);
template<class... A> int FUN_10bfe9e0(A...);
SCStr * __stdcall FUN_10bff8c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10bff8c0(A...);
void __fastcall FUN_10c00a90(int param_1);
template<class... A> int FUN_10c00a90(A...);
undefined4 __fastcall FUN_10c00ae0(int param_1);
template<class... A> int FUN_10c00ae0(A...);
void __fastcall FUN_10c020a0(undefined4 *param_1);
template<class... A> int FUN_10c020a0(A...);
void __stdcall FUN_10c02e00(int param_1,int param_2);
template<class... A> int FUN_10c02e00(A...);
SCStr * __stdcall FUN_10c02e50(SCStr *param_1);
template<class... A> int __stdcall FUN_10c02e50(A...);
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
template<class... A> int __stdcall FUN_10c06f90(A...);
void __stdcall FUN_10c06fb0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10c06fb0(A...);
int __fastcall FUN_10c070b0(int *param_1);
template<class... A> int FUN_10c070b0(A...);
SCStr * __stdcall FUN_10c0cf10(SCStr *param_1);
template<class... A> int __stdcall FUN_10c0cf10(A...);
SCStr * __stdcall FUN_10c0e800(SCStr *param_1);
template<class... A> int __stdcall FUN_10c0e800(A...);
SCStr * __stdcall FUN_10c0ed70(SCStr *param_1);
template<class... A> int __stdcall FUN_10c0ed70(A...);
undefined4 __stdcall FUN_10c0f160(undefined4 param_1);
template<class... A> int __stdcall FUN_10c0f160(A...);
undefined4 FUN_10c146f0(void);
template<class... A> int FUN_10c146f0(A...);
undefined4 __fastcall FUN_10c14ab0(int *param_1);
template<class... A> int FUN_10c14ab0(A...);
undefined4 __fastcall FUN_10c16c60(int param_1);
template<class... A> int FUN_10c16c60(A...);
undefined4 __fastcall FUN_10c17fd0(int *param_1);
template<class... A> int FUN_10c17fd0(A...);
SCStr * __stdcall FUN_10c18420(SCStr *param_1);
template<class... A> int __stdcall FUN_10c18420(A...);
SCStr * __stdcall FUN_10c18540(SCStr *param_1);
template<class... A> int __stdcall FUN_10c18540(A...);
undefined4 __fastcall FUN_10c186b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c186b0(A...);
undefined4 __fastcall FUN_10c19540(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c19540(A...);
SCStr * __stdcall FUN_10c1c720(SCStr *param_1);
template<class... A> int __stdcall FUN_10c1c720(A...);
SCStr * __stdcall FUN_10c1e790(SCStr *param_1);
template<class... A> int __stdcall FUN_10c1e790(A...);
undefined4 __fastcall FUN_10c1e7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c1e7e0(A...);
void __fastcall FUN_10c1ebf0(int param_1);
template<class... A> int FUN_10c1ebf0(A...);
int __fastcall FUN_10c1ec20(int param_1);
template<class... A> int FUN_10c1ec20(A...);
bool __fastcall FUN_10c1ed60(int param_1);
template<class... A> int FUN_10c1ed60(A...);
undefined4 __fastcall FUN_10c1edc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c1edc0(A...);
void __fastcall FUN_10c208f0(int param_1);
template<class... A> int FUN_10c208f0(A...);
bool __fastcall FUN_10c20eb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c20eb0(A...);
void __stdcall FUN_10c21100(int param_1);
template<class... A> int __stdcall FUN_10c21100(A...);
undefined4 * __fastcall FUN_10c23ae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c23ae0(A...);
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
template<class... A> int __stdcall FUN_10c2a580(A...);
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
template<class... A> int __stdcall FUN_10c32620(A...);
undefined4 * __fastcall FUN_10c35720(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c35720(A...);
void __fastcall FUN_10c35e00(int param_1);
template<class... A> int FUN_10c35e00(A...);
void __fastcall FUN_10c35e20(int *param_1);
template<class... A> int FUN_10c35e20(A...);
void __fastcall FUN_10c35ff0(int *param_1);
template<class... A> int FUN_10c35ff0(A...);
void __fastcall FUN_10c36020(undefined4 *param_1);
template<class... A> int FUN_10c36020(A...);
int * __fastcall FUN_10c36500(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c36500(A...);
int __stdcall FUN_10c36570(undefined4 param_1);
template<class... A> int __stdcall FUN_10c36570(A...);
void __fastcall FUN_10c369c0(int param_1);
template<class... A> int FUN_10c369c0(A...);
void __fastcall FUN_10c370e0(int *param_1);
template<class... A> int FUN_10c370e0(A...);
void __fastcall FUN_10c37180(undefined4 *param_1);
template<class... A> int FUN_10c37180(A...);
void __fastcall FUN_10c37720(int *param_1);
template<class... A> int FUN_10c37720(A...);
SCStr * __stdcall FUN_10c37b00(SCStr *param_1);
template<class... A> int __stdcall FUN_10c37b00(A...);
SCStr * __stdcall FUN_10c37ec0(SCStr *param_1);
template<class... A> int __stdcall FUN_10c37ec0(A...);
SCStr * __stdcall FUN_10c37ef0(SCStr *param_1);
template<class... A> int __stdcall FUN_10c37ef0(A...);
void __fastcall FUN_10c3b1c0(int param_1);
template<class... A> int FUN_10c3b1c0(A...);
void __stdcall FUN_10c3d380(undefined4 param_1,int *param_2);
template<class... A> int FUN_10c3d380(A...);
void FUN_10c3d960(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10c3d960(A...);
undefined4 * __fastcall FUN_10c404f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c404f0(A...);
undefined4 * __fastcall FUN_10c40520(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c40520(A...);
undefined4 * __fastcall FUN_10c40550(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c40550(A...);
undefined4 * __fastcall FUN_10c40580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c40580(A...);
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
template<class... A> int __stdcall FUN_10c41d40(A...);
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
template<class... A> int __stdcall FUN_10c46f60(A...);
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
template<class... A> int __stdcall FUN_10c4b8b0(A...);
void __fastcall FUN_10c4bf90(int *param_1);
template<class... A> int FUN_10c4bf90(A...);
void __fastcall FUN_10c4c4a0(int param_1);
template<class... A> int FUN_10c4c4a0(A...);
undefined1 * __fastcall FUN_10c4c930(int param_1);
template<class... A> int FUN_10c4c930(A...);
SCStr * __stdcall FUN_10c4cb40(SCStr *param_1);
template<class... A> int __stdcall FUN_10c4cb40(A...);
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
template<class... A> int __stdcall FUN_10c52500(A...);
SCStr * __stdcall FUN_10c52520(SCStr *param_1);
template<class... A> int __stdcall FUN_10c52520(A...);
SCStr * __stdcall FUN_10c52540(SCStr *param_1);
template<class... A> int __stdcall FUN_10c52540(A...);
SCStr * __stdcall FUN_10c52560(SCStr *param_1);
template<class... A> int __stdcall FUN_10c52560(A...);
SCStr * __stdcall FUN_10c52580(SCStr *param_1);
template<class... A> int __stdcall FUN_10c52580(A...);
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
template<class... A> int __stdcall FUN_10c579c0(A...);
SCStr * __stdcall FUN_10c579e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10c579e0(A...);
SCStr * __stdcall FUN_10c57a00(SCStr *param_1);
template<class... A> int __stdcall FUN_10c57a00(A...);
SCStr * __stdcall FUN_10c57a20(SCStr *param_1);
template<class... A> int __stdcall FUN_10c57a20(A...);
void __fastcall FUN_10c596a0(undefined4 *param_1);
template<class... A> int FUN_10c596a0(A...);
int __fastcall FUN_10c59da0(int *param_1);
template<class... A> int FUN_10c59da0(A...);
SCStr * __stdcall FUN_10c5a580(SCStr *param_1);
template<class... A> int __stdcall FUN_10c5a580(A...);
void __fastcall FUN_10c5b450(undefined4 *param_1);
template<class... A> int FUN_10c5b450(A...);
int __fastcall FUN_10c5bb30(int *param_1);
template<class... A> int FUN_10c5bb30(A...);
int __fastcall FUN_10c5bb70(int *param_1);
template<class... A> int FUN_10c5bb70(A...);
int __fastcall FUN_10c5c490(int param_1);
template<class... A> int FUN_10c5c490(A...);
SCStr * __stdcall FUN_10c5c820(SCStr *param_1);
template<class... A> int __stdcall FUN_10c5c820(A...);
undefined1 __fastcall FUN_10c5c920(int param_1);
template<class... A> int FUN_10c5c920(A...);
bool __fastcall FUN_10c5cbb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5cbb0(A...);
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
template<class... A> int __stdcall FUN_10c5d390(A...);
void __fastcall FUN_10c5d3b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d3b0(A...);
void __fastcall FUN_10c5d3d0(int *param_1);
template<class... A> int FUN_10c5d3d0(A...);
void __fastcall FUN_10c5d3f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d3f0(A...);
void __fastcall FUN_10c5d410(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d410(A...);
void __fastcall FUN_10c5d430(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d430(A...);
void __fastcall FUN_10c5d450(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d450(A...);
void __fastcall FUN_10c5d470(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d470(A...);
void __fastcall FUN_10c5d4b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d4b0(A...);
void __fastcall FUN_10c5d4d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d4d0(A...);
void __fastcall FUN_10c5d4f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d4f0(A...);
void __fastcall FUN_10c5d510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d510(A...);
void __fastcall FUN_10c5d530(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d530(A...);
void __fastcall FUN_10c5d550(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d550(A...);
void __fastcall FUN_10c5d570(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d570(A...);
void __fastcall FUN_10c5d590(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d590(A...);
void __fastcall FUN_10c5d5b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d5b0(A...);
void __fastcall FUN_10c5d5d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5d5d0(A...);
undefined4 * __fastcall FUN_10c5eae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c5eae0(A...);
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
template<class... A> int __stdcall FUN_10c67820(A...);
void __fastcall FUN_10c67bf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c67bf0(A...);
void __fastcall FUN_10c67c20(int param_1);
template<class... A> int FUN_10c67c20(A...);
bool __stdcall FUN_10c69170(undefined4 param_1);
template<class... A> int __stdcall FUN_10c69170(A...);
void __stdcall FUN_10c69f50(int param_1);
template<class... A> int __stdcall FUN_10c69f50(A...);
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
template<class... A> int __stdcall FUN_10c6d7f0(A...);
undefined4 __fastcall FUN_10c6ed50(int param_1);
template<class... A> int FUN_10c6ed50(A...);
undefined4 __fastcall FUN_10c6ed70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c6ed70(A...);
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
bool __fastcall FUN_10c78bf0(int param_1);
template<class... A> int FUN_10c78bf0(A...);
void __fastcall FUN_10c79140(undefined4 *param_1);
template<class... A> int FUN_10c79140(A...);
bool FUN_10c7a2d0(void);
template<class... A> int FUN_10c7a2d0(A...);
void FUN_10c7b430(void);
template<class... A> int FUN_10c7b430(A...);
bool __fastcall FUN_10c7c420(int *param_1);
template<class... A> int FUN_10c7c420(A...);
void __fastcall FUN_10c7d3b0(undefined4 *param_1);
template<class... A> int FUN_10c7d3b0(A...);
undefined4 *  __stdcall FUN_10c7d870(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0);
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
template<class... A> int __stdcall FUN_10c7e960(A...);
undefined1 * __fastcall FUN_10c81d90(int param_1);
template<class... A> int FUN_10c81d90(A...);
SCStr * __stdcall FUN_10c81e50(SCStr *param_1);
template<class... A> int __stdcall FUN_10c81e50(A...);
SCStr * __stdcall FUN_10c81e70(SCStr *param_1);
template<class... A> int __stdcall FUN_10c81e70(A...);
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
template<class... A> int __stdcall FUN_10c844e0(A...);
undefined4 * __fastcall FUN_10c88a30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c88a30(A...);
undefined4 * __fastcall FUN_10c88a60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10c88a60(A...);
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
template<class... A> int __stdcall FUN_10c89fc0(A...);
int __stdcall FUN_10c89ff0(undefined4 param_1);
template<class... A> int __stdcall FUN_10c89ff0(A...);
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
template<class... A> int __stdcall FUN_10c92e40(A...);
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
template<class... A> int __stdcall FUN_10ca8360(A...);
undefined4 __fastcall FUN_10ca8b40(int param_1);
template<class... A> int FUN_10ca8b40(A...);
SCStr * __stdcall FUN_10ca8d00(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8d00(A...);
SCStr * __stdcall FUN_10ca8d20(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8d20(A...);
SCStr * __stdcall FUN_10ca8d40(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8d40(A...);
SCStr * __stdcall FUN_10ca8d60(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8d60(A...);
SCStr * __stdcall FUN_10ca8d80(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8d80(A...);
SCStr * __stdcall FUN_10ca8da0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8da0(A...);
SCStr * __stdcall FUN_10ca8dc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8dc0(A...);
SCStr * __stdcall FUN_10ca8de0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8de0(A...);
SCStr * __stdcall FUN_10ca8e00(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8e00(A...);
SCStr * __stdcall FUN_10ca8e20(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8e20(A...);
SCStr * __stdcall FUN_10ca8e40(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8e40(A...);
SCStr * __stdcall FUN_10ca8e60(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8e60(A...);
SCStr * __stdcall FUN_10ca8e80(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8e80(A...);
SCStr * __stdcall FUN_10ca8ea0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8ea0(A...);
SCStr * __stdcall FUN_10ca8ec0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8ec0(A...);
SCStr * __stdcall FUN_10ca8ee0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8ee0(A...);
SCStr * __stdcall FUN_10ca8f00(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8f00(A...);
SCStr * __stdcall FUN_10ca8f20(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8f20(A...);
SCStr * __stdcall FUN_10ca8f40(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8f40(A...);
SCStr * __stdcall FUN_10ca8f60(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8f60(A...);
SCStr * __stdcall FUN_10ca8f80(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8f80(A...);
SCStr * __stdcall FUN_10ca8fa0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8fa0(A...);
SCStr * __stdcall FUN_10ca8fc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8fc0(A...);
SCStr * __stdcall FUN_10ca8fe0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ca8fe0(A...);
undefined4 __fastcall FUN_10ca92f0(int param_1);
template<class... A> int FUN_10ca92f0(A...);
SCStr * __stdcall FUN_10cb0e30(SCStr *param_1);
template<class... A> int __stdcall FUN_10cb0e30(A...);
void __fastcall FUN_10cb1020(int param_1);
template<class... A> int FUN_10cb1020(A...);
undefined4 __fastcall FUN_10cb1ab0(int param_1);
template<class... A> int FUN_10cb1ab0(A...);
undefined4 __fastcall FUN_10cb1c70(int *param_1);
template<class... A> int FUN_10cb1c70(A...);
undefined1 __stdcall FUN_10cb2250(SCStr *param_1);
template<class... A> int __stdcall FUN_10cb2250(A...);
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
template<class... A> int __stdcall FUN_10cbd990(A...);
SCStr * __stdcall FUN_10cbda40(SCStr *param_1);
template<class... A> int __stdcall FUN_10cbda40(A...);
SCStr * __stdcall FUN_10cbdac0(SCStr *param_1);
template<class... A> int __stdcall FUN_10cbdac0(A...);
void __fastcall FUN_10cc1280(undefined4 *param_1);
template<class... A> int FUN_10cc1280(A...);
SCStr * __stdcall FUN_10cc23f0(SCStr *param_1);
template<class... A> int __stdcall FUN_10cc23f0(A...);
SCStr * __stdcall FUN_10cc2850(SCStr *param_1);
template<class... A> int __stdcall FUN_10cc2850(A...);
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
template<class... A> int __stdcall FUN_10cd3cc0(A...);
SCStr * __stdcall FUN_10cd3ce0(SCStr *param_1);
template<class... A> int __stdcall FUN_10cd3ce0(A...);
SCStr * __stdcall FUN_10cd3d00(SCStr *param_1);
template<class... A> int __stdcall FUN_10cd3d00(A...);
SCStr * __stdcall FUN_10cd3d20(SCStr *param_1);
template<class... A> int __stdcall FUN_10cd3d20(A...);
SCStr * __stdcall FUN_10cd3d40(SCStr *param_1);
template<class... A> int __stdcall FUN_10cd3d40(A...);
SCStr * __stdcall FUN_10cd3d60(SCStr *param_1);
template<class... A> int __stdcall FUN_10cd3d60(A...);
SCStr * __stdcall FUN_10cd3d80(SCStr *param_1);
template<class... A> int __stdcall FUN_10cd3d80(A...);
SCStr * __stdcall FUN_10cd3da0(SCStr *param_1);
template<class... A> int __stdcall FUN_10cd3da0(A...);
SCStr * __stdcall FUN_10cd3dc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10cd3dc0(A...);
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
template<class... A> int __stdcall FUN_10cdc3e0(A...);
void __fastcall FUN_10cdcc40(int *param_1);
template<class... A> int FUN_10cdcc40(A...);
void __fastcall FUN_10cdd550(int param_1);
template<class... A> int FUN_10cdd550(A...);
SCStr * __stdcall FUN_10cddbe0(SCStr *param_1);
template<class... A> int __stdcall FUN_10cddbe0(A...);
SCStr * __stdcall FUN_10cddc00(SCStr *param_1);
template<class... A> int __stdcall FUN_10cddc00(A...);
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
template<class... A> int __stdcall FUN_10cdf240(A...);
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
template<class... A> int __stdcall FUN_10ce07c0(A...);
void __fastcall FUN_10ce10b0(undefined4 *param_1);
template<class... A> int FUN_10ce10b0(A...);
void __fastcall FUN_10ce10d0(undefined4 *param_1);
template<class... A> int FUN_10ce10d0(A...);
SCStr * __stdcall FUN_10ce1960(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce1960(A...);
SCStr * __stdcall FUN_10ce1980(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce1980(A...);
SCStr * __stdcall FUN_10ce19c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce19c0(A...);
SCStr * __stdcall FUN_10ce19e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce19e0(A...);
SCStr * __stdcall FUN_10ce1a00(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce1a00(A...);
void __fastcall FUN_10ce2450(undefined4 *param_1);
template<class... A> int FUN_10ce2450(A...);
SCStr * __stdcall FUN_10ce28e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce28e0(A...);
SCStr * __stdcall FUN_10ce2940(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce2940(A...);
void __fastcall FUN_10ce34f0(undefined4 *param_1);
template<class... A> int FUN_10ce34f0(A...);
void __fastcall FUN_10ce3d30(undefined4 *param_1);
template<class... A> int FUN_10ce3d30(A...);
void __stdcall FUN_10ce3d50(int param_1,int param_2);
template<class... A> int FUN_10ce3d50(A...);
SCStr * __stdcall FUN_10ce3da0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce3da0(A...);
SCStr * __stdcall FUN_10ce3ee0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce3ee0(A...);
SCStr * __stdcall FUN_10ce4060(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce4060(A...);
int __fastcall FUN_10ce4080(int param_1);
template<class... A> int FUN_10ce4080(A...);
SCStr * __stdcall FUN_10ce42a0(SCStr *param_1);
template<class... A> int __stdcall FUN_10ce42a0(A...);
void __fastcall FUN_10ce4550(int param_1);
template<class... A> int FUN_10ce4550(A...);
void __fastcall FUN_10ce4570(int param_1);
template<class... A> int FUN_10ce4570(A...);
undefined4 * __fastcall FUN_10ce6a80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ce6a80(A...);
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
template<class... A> int __stdcall FUN_10ce7740(A...);
int * __fastcall FUN_10ce7770(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ce7770(A...);
int __stdcall FUN_10ce7820(undefined4 param_1);
template<class... A> int __stdcall FUN_10ce7820(A...);
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
template<class... A> int __stdcall FUN_10ceeb90(A...);
void __fastcall FUN_10ceeea0(int *param_1);
template<class... A> int FUN_10ceeea0(A...);
undefined4 *  __stdcall FUN_10cf1010(int param_1);
template<class... A> int __stdcall FUN_10cf1010(A...);
void __stdcall FUN_10cf1030(int param_1);
template<class... A> int __stdcall FUN_10cf1030(A...);
undefined4 *  __stdcall FUN_10cf33f0(undefined4 *param_1);
template<class... A> int __stdcall FUN_10cf33f0(A...);
void __stdcall FUN_10cf3410(undefined4 *param_1);
template<class... A> int __stdcall FUN_10cf3410(A...);
void __fastcall FUN_10cf4330(undefined4 *param_1);
template<class... A> int FUN_10cf4330(A...);
void __stdcall FUN_10cf4ac0(undefined4 *param_1);
template<class... A> int __stdcall FUN_10cf4ac0(A...);
void __stdcall FUN_10cf4ae0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10cf4ae0(A...);
void __stdcall FUN_10cf5110(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10cf5110(A...);
void __stdcall FUN_10cf53c0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10cf53c0(A...);
void __fastcall FUN_10cf58c0(undefined4 *param_1);
template<class... A> int FUN_10cf58c0(A...);
SCStr * __stdcall FUN_10cf5f40(SCStr *param_1);
template<class... A> int __stdcall FUN_10cf5f40(A...);
SCStr * __stdcall FUN_10cf6190(SCStr *param_1);
template<class... A> int __stdcall FUN_10cf6190(A...);
undefined1 __fastcall FUN_10cf78a0(int param_1);
template<class... A> int FUN_10cf78a0(A...);
undefined1 __fastcall FUN_10cf78c0(int param_1);
template<class... A> int FUN_10cf78c0(A...);
undefined4 __fastcall FUN_10cf7aa0(int param_1);
template<class... A> int FUN_10cf7aa0(A...);
SCStr * __stdcall FUN_10cf7db0(SCStr *param_1);
template<class... A> int __stdcall FUN_10cf7db0(A...);
bool __fastcall FUN_10cf8b00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10cf8b00(A...);
void __stdcall FUN_10cf9070(int param_1);
template<class... A> int __stdcall FUN_10cf9070(A...);
undefined4 __fastcall FUN_10cf9740(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10cf9740(A...);
undefined4 __fastcall FUN_10cf9c70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10cf9c70(A...);
SCStr * __stdcall FUN_10cf9cf0(SCStr *param_1);
template<class... A> int __stdcall FUN_10cf9cf0(A...);
int __fastcall FUN_10cf9d30(int param_1);
template<class... A> int FUN_10cf9d30(A...);
SCStr * __stdcall FUN_10cf9f50(SCStr *param_1);
template<class... A> int __stdcall FUN_10cf9f50(A...);
undefined4 __fastcall FUN_10cfa090(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10cfa090(A...);
undefined4 __fastcall FUN_10cfa2c0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10cfa2c0(A...);
bool __fastcall FUN_10cfb1d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10cfb1d0(A...);
SCStr * __stdcall FUN_10cfc180(SCStr *param_1);
template<class... A> int __stdcall FUN_10cfc180(A...);
int __fastcall FUN_10cfc1a0(int param_1);
template<class... A> int FUN_10cfc1a0(A...);
SCStr * __stdcall FUN_10cfc460(SCStr *param_1);
template<class... A> int __stdcall FUN_10cfc460(A...);
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
template<class... A> int __stdcall FUN_10d03ae0(A...);
SCStr * __stdcall FUN_10d03b00(SCStr *param_1);
template<class... A> int __stdcall FUN_10d03b00(A...);
SCStr * __stdcall FUN_10d03b20(SCStr *param_1);
template<class... A> int __stdcall FUN_10d03b20(A...);
SCStr * __stdcall FUN_10d03b40(SCStr *param_1);
template<class... A> int __stdcall FUN_10d03b40(A...);
SCStr * __stdcall FUN_10d03b60(SCStr *param_1);
template<class... A> int __stdcall FUN_10d03b60(A...);
void __fastcall FUN_10d03b80(int *param_1);
template<class... A> int FUN_10d03b80(A...);
SCStr * __stdcall FUN_10d03fd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d03fd0(A...);
SCStr * __stdcall FUN_10d03ff0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d03ff0(A...);
SCStr * __stdcall FUN_10d04850(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04850(A...);
SCStr * __stdcall FUN_10d04870(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04870(A...);
SCStr * __stdcall FUN_10d04b90(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04b90(A...);
SCStr * __stdcall FUN_10d04bc0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04bc0(A...);
SCStr * __stdcall FUN_10d04c20(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04c20(A...);
SCStr * __stdcall FUN_10d04df0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04df0(A...);
SCStr * __stdcall FUN_10d04e30(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04e30(A...);
SCStr * __stdcall FUN_10d04e80(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04e80(A...);
SCStr * __stdcall FUN_10d04ea0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04ea0(A...);
SCStr * __stdcall FUN_10d04f00(SCStr *param_1);
template<class... A> int __stdcall FUN_10d04f00(A...);
void __fastcall FUN_10d05f30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d05f30(A...);
void __fastcall FUN_10d05f80(int param_1);
template<class... A> int FUN_10d05f80(A...);
SCStr * __stdcall FUN_10d0b4c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d0b4c0(A...);
SCStr * __stdcall FUN_10d0b4e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d0b4e0(A...);
SCStr * __stdcall FUN_10d0b940(SCStr *param_1);
template<class... A> int __stdcall FUN_10d0b940(A...);
SCStr * __stdcall FUN_10d0b960(SCStr *param_1);
template<class... A> int __stdcall FUN_10d0b960(A...);
SCStr * __stdcall FUN_10d0b980(SCStr *param_1);
template<class... A> int __stdcall FUN_10d0b980(A...);
void __stdcall FUN_10d113e0(int param_1);
template<class... A> int __stdcall FUN_10d113e0(A...);
void __fastcall FUN_10d12200(undefined4 *param_1);
template<class... A> int FUN_10d12200(A...);
undefined4 __fastcall FUN_10d130b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d130b0(A...);
undefined4 __fastcall FUN_10d13700(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d13700(A...);
SCStr * __stdcall FUN_10d13720(SCStr *param_1);
template<class... A> int __stdcall FUN_10d13720(A...);
SCStr * __stdcall FUN_10d137a0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d137a0(A...);
int __fastcall FUN_10d13800(int param_1);
template<class... A> int FUN_10d13800(A...);
SCStr * __stdcall FUN_10d13cd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d13cd0(A...);
undefined4 __fastcall FUN_10d13d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d13d50(A...);
undefined4 __fastcall FUN_10d13fd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d13fd0(A...);
void __stdcall FUN_10d14070(SCStr *param_1);
template<class... A> int __stdcall FUN_10d14070(A...);
void __fastcall FUN_10d14290(int param_1);
template<class... A> int FUN_10d14290(A...);
bool __fastcall FUN_10d15320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d15320(A...);
void __fastcall FUN_10d16980(int *param_1);
template<class... A> int FUN_10d16980(A...);
SCStr * __stdcall FUN_10d17010(SCStr *param_1);
template<class... A> int __stdcall FUN_10d17010(A...);
SCStr * __stdcall FUN_10d17040(SCStr *param_1);
template<class... A> int __stdcall FUN_10d17040(A...);
SCStr * __stdcall FUN_10d17060(SCStr *param_1);
template<class... A> int __stdcall FUN_10d17060(A...);
SCStr * __stdcall FUN_10d17080(SCStr *param_1);
template<class... A> int __stdcall FUN_10d17080(A...);
SCStr * __stdcall FUN_10d176d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d176d0(A...);
SCStr * __stdcall FUN_10d17720(SCStr *param_1);
template<class... A> int __stdcall FUN_10d17720(A...);
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
template<class... A> int __stdcall FUN_10d18a10(A...);
void __fastcall FUN_10d18a30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d18a30(A...);
void __fastcall FUN_10d18e50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d18e50(A...);
void __fastcall FUN_10d19370(int param_1);
template<class... A> int FUN_10d19370(A...);
void __fastcall FUN_10d193b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d193b0(A...);
undefined4 __fastcall FUN_10d194d0(int *param_1);
template<class... A> int FUN_10d194d0(A...);
undefined2 __stdcall FUN_10d19730(short param_1,int param_2);
template<class... A> int FUN_10d19730(A...);
void __fastcall FUN_10d1a530(int *param_1);
template<class... A> int FUN_10d1a530(A...);
SCStr * __stdcall FUN_10d1c200(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1c200(A...);
SCStr * __stdcall FUN_10d1c220(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1c220(A...);
SCStr * __stdcall FUN_10d1c240(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1c240(A...);
SCStr * __stdcall FUN_10d1c390(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1c390(A...);
SCStr * __stdcall FUN_10d1c3d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1c3d0(A...);
SCStr * __stdcall FUN_10d1c540(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1c540(A...);
int __fastcall FUN_10d1c560(int param_1);
template<class... A> int FUN_10d1c560(A...);
SCStr * __stdcall FUN_10d1c5c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1c5c0(A...);
SCStr * __stdcall FUN_10d1cce0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1cce0(A...);
void __fastcall FUN_10d1ce70(int param_1);
template<class... A> int FUN_10d1ce70(A...);
void __fastcall FUN_10d1cf60(int param_1);
template<class... A> int FUN_10d1cf60(A...);
void __stdcall FUN_10d1d940(int param_1);
template<class... A> int __stdcall FUN_10d1d940(A...);
void __fastcall FUN_10d1e0d0(int *param_1);
template<class... A> int FUN_10d1e0d0(A...);
SCStr * __stdcall FUN_10d1e110(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1e110(A...);
SCStr * __stdcall FUN_10d1e2d0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1e2d0(A...);
SCStr * __stdcall FUN_10d1e500(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1e500(A...);
SCStr * __stdcall FUN_10d1e520(SCStr *param_1);
template<class... A> int __stdcall FUN_10d1e520(A...);
SCStr * __stdcall FUN_10d20400(SCStr *param_1);
template<class... A> int __stdcall FUN_10d20400(A...);
SCStr * __stdcall FUN_10d20580(SCStr *param_1);
template<class... A> int __stdcall FUN_10d20580(A...);
int __fastcall FUN_10d205a0(int param_1);
template<class... A> int FUN_10d205a0(A...);
undefined4 __stdcall FUN_10d205d0(int param_1);
template<class... A> int __stdcall FUN_10d205d0(A...);
SCStr * __stdcall FUN_10d20600(SCStr *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10d20600(A...);
SCStr * __stdcall FUN_10d21890(SCStr *param_1);
template<class... A> int __stdcall FUN_10d21890(A...);
int __fastcall FUN_10d23140(int param_1);
template<class... A> int FUN_10d23140(A...);
void __fastcall FUN_10d234b0(int param_1);
template<class... A> int FUN_10d234b0(A...);
void __stdcall FUN_10d24420(undefined4 param_1,int *param_2);
template<class... A> int FUN_10d24420(A...);
undefined4 * __fastcall FUN_10d26320(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d26320(A...);
void __fastcall FUN_10d27420(int param_1);
template<class... A> int FUN_10d27420(A...);
void __fastcall FUN_10d288d0(int param_1);
template<class... A> int FUN_10d288d0(A...);
SCStr * __stdcall FUN_10d29860(SCStr *param_1);
template<class... A> int __stdcall FUN_10d29860(A...);
SCStr * __stdcall FUN_10d29880(SCStr *param_1);
template<class... A> int __stdcall FUN_10d29880(A...);
SCStr * __stdcall FUN_10d298a0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d298a0(A...);
SCStr * __stdcall FUN_10d2a060(SCStr *param_1);
template<class... A> int __stdcall FUN_10d2a060(A...);
int __fastcall FUN_10d2a080(int param_1);
template<class... A> int FUN_10d2a080(A...);
int __fastcall FUN_10d2a0a0(int param_1);
template<class... A> int FUN_10d2a0a0(A...);
int __fastcall FUN_10d2a0c0(int param_1);
template<class... A> int FUN_10d2a0c0(A...);
int __fastcall FUN_10d2a0e0(int param_1);
template<class... A> int FUN_10d2a0e0(A...);
SCStr * __stdcall FUN_10d2a180(SCStr *param_1);
template<class... A> int __stdcall FUN_10d2a180(A...);
SCStr * __stdcall FUN_10d2a1e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d2a1e0(A...);
SCStr * __stdcall FUN_10d2a220(SCStr *param_1);
template<class... A> int __stdcall FUN_10d2a220(A...);
SCStr * __stdcall FUN_10d2a780(SCStr *param_1);
template<class... A> int __stdcall FUN_10d2a780(A...);
SCStr * __stdcall FUN_10d2a7a0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d2a7a0(A...);
SCStr * __stdcall FUN_10d2a8c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d2a8c0(A...);
void __fastcall FUN_10d2ae00(int param_1);
template<class... A> int FUN_10d2ae00(A...);
void __stdcall FUN_10d2be50(int param_1);
template<class... A> int __stdcall FUN_10d2be50(A...);
void __stdcall FUN_10d2be70(int param_1);
template<class... A> int __stdcall FUN_10d2be70(A...);
undefined4 *  __fastcall FUN_10d30b40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10d30b40(A...);
void __fastcall FUN_10d30bb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10d30bb0(A...);
SCStr * __stdcall FUN_10d354e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d354e0(A...);
undefined4 __fastcall FUN_10d35830(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d35830(A...);
SCStr * __stdcall FUN_10d35ca0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d35ca0(A...);
undefined4 __fastcall FUN_10d360e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d360e0(A...);
SCStr * __stdcall FUN_10d36430(SCStr *param_1);
template<class... A> int __stdcall FUN_10d36430(A...);
SCStr * __stdcall FUN_10d36460(SCStr *param_1);
template<class... A> int __stdcall FUN_10d36460(A...);
undefined4 __fastcall FUN_10d370c0(int param_1);
template<class... A> int FUN_10d370c0(A...);
int __fastcall FUN_10d370e0(int *param_1);
template<class... A> int FUN_10d370e0(A...);
undefined4 __fastcall FUN_10d37d60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d37d60(A...);
undefined4 __fastcall FUN_10d37fa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d37fa0(A...);
bool __fastcall FUN_10d381f0(int *param_1);
template<class... A> int FUN_10d381f0(A...);
void __fastcall FUN_10d38420(int param_1);
template<class... A> int FUN_10d38420(A...);
void __fastcall FUN_10d38450(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d38450(A...);
void __fastcall FUN_10d38510(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d38510(A...);
void __fastcall FUN_10d386f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d386f0(A...);
void __fastcall FUN_10d389c0(int param_1);
template<class... A> int FUN_10d389c0(A...);
void __fastcall FUN_10d38a10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d38a10(A...);
void __fastcall FUN_10d38a40(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d38a40(A...);
void __fastcall FUN_10d38a70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d38a70(A...);
void __fastcall FUN_10d38aa0(int param_1);
template<class... A> int FUN_10d38aa0(A...);
void __fastcall FUN_10d39e10(int *param_1);
template<class... A> int FUN_10d39e10(A...);
undefined4 __fastcall FUN_10d39fa0(int *param_1);
template<class... A> int FUN_10d39fa0(A...);
bool __fastcall FUN_10d3a8f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d3a8f0(A...);
void __fastcall FUN_10d3bc70(int param_1);
template<class... A> int FUN_10d3bc70(A...);
undefined2 __fastcall FUN_10d3c3a0(int param_1);
template<class... A> int FUN_10d3c3a0(A...);
undefined4 __fastcall FUN_10d3c470(int param_1);
template<class... A> int FUN_10d3c470(A...);
SCStr * __stdcall FUN_10d3c580(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3c580(A...);
SCStr * __stdcall FUN_10d3c700(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3c700(A...);
SCStr * __stdcall FUN_10d3c720(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3c720(A...);
bool __fastcall FUN_10d3c880(int *param_1);
template<class... A> int FUN_10d3c880(A...);
undefined1 __fastcall FUN_10d3c8b0(int param_1);
template<class... A> int FUN_10d3c8b0(A...);
undefined1 __fastcall FUN_10d3c910(int param_1);
template<class... A> int FUN_10d3c910(A...);
void __fastcall FUN_10d3c9b0(int param_1);
template<class... A> int FUN_10d3c9b0(A...);
void __stdcall FUN_10d3ccf0(int param_1);
template<class... A> int __stdcall FUN_10d3ccf0(A...);
void __fastcall FUN_10d3dc90(undefined4 *param_1);
template<class... A> int FUN_10d3dc90(A...);
void __fastcall FUN_10d3dcb0(undefined4 *param_1);
template<class... A> int FUN_10d3dcb0(A...);
SCStr * __stdcall FUN_10d3ef90(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3ef90(A...);
SCStr * __stdcall FUN_10d3efb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3efb0(A...);
SCStr * __stdcall FUN_10d3efd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3efd0(A...);
SCStr * __stdcall FUN_10d3eff0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3eff0(A...);
undefined4 __fastcall FUN_10d3f250(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d3f250(A...);
undefined4 __fastcall FUN_10d3f7a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d3f7a0(A...);
SCStr * __stdcall FUN_10d3f7c0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3f7c0(A...);
SCStr * __stdcall FUN_10d3f7e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3f7e0(A...);
int __fastcall FUN_10d3f8e0(int param_1);
template<class... A> int FUN_10d3f8e0(A...);
SCStr * __stdcall FUN_10d3fb00(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3fb00(A...);
SCStr * __stdcall FUN_10d3fc90(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3fc90(A...);
SCStr * __stdcall FUN_10d3fcd0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d3fcd0(A...);
undefined4 __fastcall FUN_10d3fd00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d3fd00(A...);
undefined4 __fastcall FUN_10d3ff90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d3ff90(A...);
bool __fastcall FUN_10d40010(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d40010(A...);
void __fastcall FUN_10d40040(int param_1);
template<class... A> int FUN_10d40040(A...);
void __fastcall FUN_10d40200(int param_1);
template<class... A> int FUN_10d40200(A...);
bool __fastcall FUN_10d422d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d422d0(A...);
undefined4 __fastcall FUN_10d44fa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d44fa0(A...);
undefined4 __fastcall FUN_10d44fc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d44fc0(A...);
undefined4 __fastcall FUN_10d44fe0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d44fe0(A...);
undefined4 __fastcall FUN_10d45e50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d45e50(A...);
undefined4 __fastcall FUN_10d45e70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d45e70(A...);
undefined4 __fastcall FUN_10d45e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d45e90(A...);
SCStr * __stdcall FUN_10d45f10(SCStr *param_1);
template<class... A> int __stdcall FUN_10d45f10(A...);
int __fastcall FUN_10d45f90(int param_1);
template<class... A> int FUN_10d45f90(A...);
SCStr * __stdcall FUN_10d460e0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d460e0(A...);
SCStr * __stdcall FUN_10d46110(SCStr *param_1);
template<class... A> int __stdcall FUN_10d46110(A...);
undefined4 __fastcall FUN_10d462d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d462d0(A...);
undefined4 __fastcall FUN_10d462f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d462f0(A...);
undefined4 __fastcall FUN_10d46310(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d46310(A...);
undefined4 __fastcall FUN_10d46760(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d46760(A...);
undefined4 __fastcall FUN_10d46780(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d46780(A...);
undefined4 __fastcall FUN_10d467a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d467a0(A...);
void __stdcall FUN_10d467f0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d467f0(A...);
void __fastcall FUN_10d46830(int param_1);
template<class... A> int FUN_10d46830(A...);
void __fastcall FUN_10d468e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d468e0(A...);
void __fastcall FUN_10d49e60(int param_1);
template<class... A> int FUN_10d49e60(A...);
bool __fastcall FUN_10d49e90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d49e90(A...);
bool __fastcall FUN_10d49eb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d49eb0(A...);
bool __fastcall FUN_10d49ed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d49ed0(A...);
void __fastcall FUN_10d4b930(int *param_1);
template<class... A> int FUN_10d4b930(A...);
SCStr * __stdcall FUN_10d4d940(SCStr *param_1);
template<class... A> int __stdcall FUN_10d4d940(A...);
SCStr * __stdcall FUN_10d4d960(SCStr *param_1);
template<class... A> int __stdcall FUN_10d4d960(A...);
SCStr * __stdcall FUN_10d4d980(SCStr *param_1);
template<class... A> int __stdcall FUN_10d4d980(A...);
SCStr * __stdcall FUN_10d4ea90(SCStr *param_1);
template<class... A> int __stdcall FUN_10d4ea90(A...);
SCStr * __stdcall FUN_10d4eab0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d4eab0(A...);
SCStr * __stdcall FUN_10d4eae0(SCStr *param_1);
template<class... A> int __stdcall FUN_10d4eae0(A...);
undefined4 __stdcall FUN_10d4f3a0(int param_1);
template<class... A> int __stdcall FUN_10d4f3a0(A...);
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
template<class... A> int __stdcall FUN_10d54d40(A...);
undefined4 __fastcall FUN_10d553a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d553a0(A...);
undefined4 __stdcall FUN_10d554c0(int param_1);
template<class... A> int __stdcall FUN_10d554c0(A...);
SCStr * __stdcall FUN_10d554f0(SCStr *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10d554f0(A...);
undefined4 __fastcall FUN_10d55ac0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d55ac0(A...);
undefined4 __fastcall FUN_10d56df0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d56df0(A...);
undefined4 *  __stdcall FUN_10d57050(SCStr *param_1);
template<class... A> int __stdcall FUN_10d57050(A...);
void __fastcall FUN_10d57bf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d57bf0(A...);
bool __fastcall FUN_10d58c00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d58c00(A...);
bool __fastcall FUN_10d59c40(int param_1);
template<class... A> int FUN_10d59c40(A...);
SCStr * __stdcall FUN_10d59d80(SCStr *param_1);
template<class... A> int __stdcall FUN_10d59d80(A...);
void __fastcall FUN_10d59da0(undefined4 *param_1);
template<class... A> int FUN_10d59da0(A...);
void __fastcall FUN_10d59de0(undefined4 *param_1);
template<class... A> int FUN_10d59de0(A...);
void __fastcall FUN_10d59e20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d59e20(A...);
undefined4 __fastcall FUN_10d59f20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d59f20(A...);
undefined4 __fastcall FUN_10d59f40(int param_1);
template<class... A> int FUN_10d59f40(A...);
undefined4 __fastcall FUN_10d5a0c0(int param_1);
template<class... A> int FUN_10d5a0c0(A...);
undefined4 __fastcall FUN_10d5a1b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d5a1b0(A...);
undefined4 __fastcall FUN_10d5a1e0(int param_1);
template<class... A> int FUN_10d5a1e0(A...);
undefined4 __fastcall FUN_10d5a200(int param_1);
template<class... A> int FUN_10d5a200(A...);
undefined4 __fastcall FUN_10d5a220(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d5a220(A...);
undefined4 __fastcall FUN_10d5a300(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d5a300(A...);
undefined4 __fastcall FUN_10d5a320(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d5a320(A...);
bool __fastcall FUN_10d5a4e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d5a4e0(A...);
bool __fastcall FUN_10d5a700(int param_1);
template<class... A> int FUN_10d5a700(A...);
bool __fastcall FUN_10d5a720(int param_1);
template<class... A> int FUN_10d5a720(A...);
bool __fastcall FUN_10d5a740(int param_1);
template<class... A> int FUN_10d5a740(A...);
bool __fastcall FUN_10d5a760(int param_1);
template<class... A> int FUN_10d5a760(A...);
bool __fastcall FUN_10d5a780(int param_1);
template<class... A> int FUN_10d5a780(A...);
bool __fastcall FUN_10d5a7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d5a7e0(A...);
bool __fastcall FUN_10d5a800(int param_1);
template<class... A> int FUN_10d5a800(A...);
undefined4 __fastcall FUN_10d5a910(int param_1);
template<class... A> int FUN_10d5a910(A...);
void __fastcall FUN_10d5a960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10d5a960(A...);
bool __fastcall FUN_10d5aa70(int param_1);
template<class... A> int FUN_10d5aa70(A...);
void __fastcall FUN_10d5add0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d5add0(A...);
void __fastcall FUN_10d5adf0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10d5adf0(A...);
bool __fastcall FUN_10d5ae10(int param_1);
template<class... A> int FUN_10d5ae10(A...);
bool __fastcall FUN_10d5ae30(int param_1);
template<class... A> int FUN_10d5ae30(A...);
bool __fastcall FUN_10d5b120(int param_1);
template<class... A> int FUN_10d5b120(A...);
void __fastcall FUN_10d5e1b0(int *param_1);
template<class... A> int FUN_10d5e1b0(A...);
extern int ghidra_vftable_SCArray_SCPtr_SCIBrowseItem___;
extern int ghidra_vftable_SCArray_SCPtr_SCIPropertyBag___;
extern int ghidra_vftable_SCIObjImpl_SCIAudioData_;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_65378efdcdb199083a35f681fa41a923__void_SCHousehold_const__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_6ab97180d8f3428dfa363e6c0367aa26__void_SCSetting__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_77092a13721d09a12b3501bb3bae7084__void_SCController_const__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_8d312988908110bb66e9a76f7cd74c58__void_SCNewWizAnalyticsRecorder__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_cc1d9f33778fac61eec09b81d0424a24__void_SCSetting__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_cd63e9c30e828cb77bb949014209f77d__void_SCMusicServiceMenu__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_d55a6dc7bf6160d0d1392b75aea215ca__void_SCSetting__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_eb9467206a2b2d8d6e05cf3d6b9e609e__void_SCSetting__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_eeb8e959032711249e942c03e7a3c64d__void_SCMusicServiceCatalog__SCStr_const__;
extern int ghidra_vftable__Func_impl_no_alloc__lambda_f966034e40fc20582b93596ede0b9bb2__void_SCSetting__SCStr_const__;
extern int ghidra_vftable_collate_char_;
extern int ghidra_vftable_std___Func_impl_no_alloc__lambda_8a772bd1480a609e7a98bb88535776db__void_SCIController__ViewId_SCIController__ViewMode_;
extern int ghidra_vftable_std___Func_impl_no_alloc__lambda_da6c71aeb75e0371ce88202ae106d640__void_SCIController__ViewId_SCIController__ViewMode_;
extern int ghidra_vftable_std___Func_impl_no_alloc__lambda_f05a8c0ebd9d3e67f7357ab3c020ba27__void_SCIController__ViewId_SCIController__ViewMode_;

// Reference entry 10beebc0; body size 24 bytes.
extern int __stdcall FUN_10065348(int a1);
extern int __stdcall FUN_10070892(int a1);
extern int __stdcall FUN_10cbcff0(int a1,int a2);
extern int __stdcall FUN_10cf1ee0(int a1);
extern int __stdcall FUN_10cf2340(int a1);
extern int __stdcall thunk_FUN_101b5de0(int a1);
extern int __stdcall thunk_FUN_1020a5b0(int a1);
extern int __stdcall thunk_FUN_1021b750(int a1);
extern int __stdcall thunk_FUN_10221640(int a1,int a2);
extern int __stdcall thunk_FUN_1028c3a0(int a1,int a2);
extern int __stdcall thunk_FUN_102a3ea0(int a1,int a2);
extern int __stdcall thunk_FUN_103d61d0(int a1,int a2);
extern int __stdcall thunk_FUN_103d6930(int a1);
extern int __stdcall thunk_FUN_104d8570(int a1,int a2);
extern int __stdcall thunk_FUN_104d8ba0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_1065a700(int a1,int a2);
extern int __stdcall thunk_FUN_10828990(int a1,int a2);
extern int __stdcall thunk_FUN_10b034d0(int a1);
extern int __stdcall thunk_FUN_10bef940(int a1,int a2);
extern int __stdcall thunk_FUN_10bf3bc0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10bf3c60(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10bf8040(int a1);
extern int __stdcall thunk_FUN_10c11c30(int a1,int a2);
extern int __stdcall thunk_FUN_10c220f0(int a1,int a2);
extern int __stdcall thunk_FUN_10c31e60(int a1);
extern int __stdcall thunk_FUN_10c3d380(int a1,int a2);
extern int __stdcall thunk_FUN_10c3d700(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10c3d800(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10c5e210(int a1,int a2);
extern int __stdcall thunk_FUN_10c5e5a0(int a1,int a2);
extern int __stdcall thunk_FUN_10c7a9d0(int a1,int a2);
extern int __stdcall thunk_FUN_10c7bc70(int a1);
extern int __stdcall thunk_FUN_10c7cce0(int a1);
extern int __stdcall thunk_FUN_10c85210(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10c85290(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10c8edf0(int a1,int a2);
extern int __stdcall thunk_FUN_10c8f700(int a1,int a2);
extern int __stdcall thunk_FUN_10cb8b80(int a1,int a2);
extern int __stdcall thunk_FUN_10ce00f0(int a1,int a2,int a3,int a4,int a5);
extern int __stdcall thunk_FUN_10ce5d10(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10cf4ae0(int a1);
extern int __stdcall thunk_FUN_10d24420(int a1,int a2);
extern int __stdcall thunk_FUN_10d244b0(int a1,int a2);
extern int __stdcall thunk_FUN_11081b20(int a1);
extern int __stdcall thunk_FUN_11093530(int a1,int a2);
extern int __stdcall thunk_FUN_110adac0(int a1);
extern int __stdcall thunk_FUN_110b2900(int a1,int a2,int a3,int a4);
extern int __stdcall thunk_FUN_11131cc0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_11159cc0(int a1);
extern int __stdcall thunk_FUN_1115b9c0(int a1);
extern int __stdcall thunk_FUN_111a4bc0(int a1,int a2);
extern int __stdcall thunk_FUN_1124ff50(int a1);
extern int __stdcall thunk_FUN_1124ffa0(int a1,int a2);
extern int __stdcall thunk_FUN_112503c0(int a1,int a2);
extern int __stdcall thunk_FUN_1125cbb0(int a1);
struct SCFp_0_2 { int (__thiscall *v)(int a1,int a2); };
struct SCFp_128_2 { char _p[128]; int (__thiscall *v)(int a1,int a2); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_1_2 { virtual void _p0(); virtual int v(int a1,int a2); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_4_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(void); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_7_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1); };
struct SCVtbl_8_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(void); };
struct SCVtbl_8_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(int a1); };
struct SCVtbl_9_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(void); };
struct SCVtbl_9_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(int a1,int a2); };
struct SCVtbl_10_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(void); };
struct SCVtbl_11_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(void); };
struct SCVtbl_11_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1); };
struct SCVtbl_13_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual int v(void); };
struct SCVtbl_13_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual int v(int a1,int a2); };
struct SCVtbl_14_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(void); };
struct SCVtbl_14_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_15_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(void); };
struct SCVtbl_16_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual int v(void); };
struct SCVtbl_17_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual int v(void); };
struct SCVtbl_17_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual int v(int a1); };
struct SCVtbl_18_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual int v(void); };
struct SCVtbl_18_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual int v(int a1); };
struct SCVtbl_19_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual int v(void); };
struct SCVtbl_20_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(void); };
struct SCVtbl_21_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual int v(void); };
struct SCVtbl_21_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual int v(int a1); };
struct SCVtbl_22_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual int v(void); };
struct SCVtbl_24_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual int v(void); };
struct SCVtbl_24_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual int v(int a1); };
struct SCVtbl_26_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual int v(void); };
struct SCVtbl_27_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual int v(void); };
struct SCVtbl_27_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual int v(int a1); };
struct SCVtbl_28_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual int v(void); };
struct SCVtbl_30_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual int v(void); };
struct SCVtbl_31_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual int v(int a1); };
struct SCVtbl_32_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual int v(void); };
struct SCVtbl_33_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual int v(void); };
struct SCVtbl_33_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual int v(int a1); };
struct SCVtbl_34_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual int v(void); };
struct SCVtbl_39_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual int v(void); };
struct SCVtbl_40_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual int v(int a1); };
struct SCVtbl_45_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual int v(void); };
struct SCVtbl_46_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual int v(void); };
struct SCVtbl_47_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual int v(void); };
struct SCVtbl_48_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual int v(void); };
struct SCVtbl_49_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual int v(void); };
struct SCVtbl_50_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual int v(void); };
struct SCVtbl_51_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual int v(void); };
struct SCVtbl_51_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual int v(int a1); };
struct SCVtbl_52_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual int v(void); };
struct SCVtbl_54_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual int v(void); };
struct SCVtbl_55_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual int v(void); };
struct SCVtbl_57_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual int v(int a1,int a2); };
struct SCVtbl_58_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual int v(int a1); };
struct SCVtbl_61_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual int v(void); };
struct SCVtbl_62_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual int v(void); };
struct SCVtbl_63_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual int v(void); };
struct SCVtbl_64_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual int v(int a1); };
struct SCVtbl_68_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual int v(void); };
struct SCVtbl_73_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual int v(void); };
struct SCVtbl_74_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual int v(int a1); };
struct SCVtbl_79_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual int v(void); };
struct SCVtbl_87_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual int v(void); };
struct SCVtbl_88_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual int v(void); };
struct SCVtbl_89_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual int v(void); };
struct SCVtbl_91_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual int v(void); };
struct SCVtbl_138_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual void _p95(); virtual void _p96(); virtual void _p97(); virtual void _p98(); virtual void _p99(); virtual void _p100(); virtual void _p101(); virtual void _p102(); virtual void _p103(); virtual void _p104(); virtual void _p105(); virtual void _p106(); virtual void _p107(); virtual void _p108(); virtual void _p109(); virtual void _p110(); virtual void _p111(); virtual void _p112(); virtual void _p113(); virtual void _p114(); virtual void _p115(); virtual void _p116(); virtual void _p117(); virtual void _p118(); virtual void _p119(); virtual void _p120(); virtual void _p121(); virtual void _p122(); virtual void _p123(); virtual void _p124(); virtual void _p125(); virtual void _p126(); virtual void _p127(); virtual void _p128(); virtual void _p129(); virtual void _p130(); virtual void _p131(); virtual void _p132(); virtual void _p133(); virtual void _p134(); virtual void _p135(); virtual void _p136(); virtual void _p137(); virtual int v(int a1); };
struct SCVtbl_140_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual void _p95(); virtual void _p96(); virtual void _p97(); virtual void _p98(); virtual void _p99(); virtual void _p100(); virtual void _p101(); virtual void _p102(); virtual void _p103(); virtual void _p104(); virtual void _p105(); virtual void _p106(); virtual void _p107(); virtual void _p108(); virtual void _p109(); virtual void _p110(); virtual void _p111(); virtual void _p112(); virtual void _p113(); virtual void _p114(); virtual void _p115(); virtual void _p116(); virtual void _p117(); virtual void _p118(); virtual void _p119(); virtual void _p120(); virtual void _p121(); virtual void _p122(); virtual void _p123(); virtual void _p124(); virtual void _p125(); virtual void _p126(); virtual void _p127(); virtual void _p128(); virtual void _p129(); virtual void _p130(); virtual void _p131(); virtual void _p132(); virtual void _p133(); virtual void _p134(); virtual void _p135(); virtual void _p136(); virtual void _p137(); virtual void _p138(); virtual void _p139(); virtual int v(int a1); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_3_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_6_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(void); };
struct SCVtbl_6_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1); };
struct SCVtbl_10_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual int v(int a1); };
struct SCVtbl_12_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual int v(void); };
struct SCVtbl_14_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual int v(int a1); };
struct SCVtbl_23_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual int v(void); };
struct SCVtbl_25_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual int v(void); };
struct SCVtbl_35_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual int v(int a1,int a2); };
struct SCVtbl_36_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual int v(void); };
struct SCVtbl_37_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual int v(void); };
struct SCVtbl_56_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual int v(int a1); };
struct SCVtbl_68_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual int v(int a1); };
struct SCVtbl_69_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual int v(int a1); };
struct SCVtbl_90_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual int v(void); };
struct SCVtbl_91_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual int v(int a1); };
#line 1 "ENTRY_10beebc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10beebc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10beed50; body size 34 bytes.
#line 1 "ENTRY_10beed50"

__declspec(naked) void FUN_10beed50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x10]
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1005b078
  __asm mov dword ptr [esi], LAB_119137bc
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
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

__declspec(naked) void FUN_10bf00f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm lea edi, [esi + 0x10]
  __asm mov dword ptr [esi], LAB_119139d4
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bf0119
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_118abe0c
  __asm dec dword ptr [LAB_121a0e68]
  __asm pop edi
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
}



// Reference entry 10bf0550; body size 37 bytes.
#line 1 "ENTRY_10bf0550"

__declspec(naked) void FUN_10bf0550(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bf056f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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
  FUN_112a9d40(&DAT_121a524c);
  DAT_121a5254 = (int)(0);
  return;
}


// Reference entry 10bf0e70; body size 25 bytes.
#line 1 "ENTRY_10bf0e70"

__declspec(naked) void FUN_10bf0e70(void)

{
  __asm mov ecx, dword ptr [ecx + 0x40]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10bf0e83
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bf0e90; body size 25 bytes.
#line 1 "ENTRY_10bf0e90"

__declspec(naked) void FUN_10bf0e90(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10bf0ea3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bf0eb0; body size 20 bytes.
#line 1 "ENTRY_10bf0eb0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf0eb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 10bf0ed0; body size 25 bytes.
#line 1 "ENTRY_10bf0ed0"

__declspec(naked) void FUN_10bf0ed0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10bf0ee3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bf0f00; body size 20 bytes.
#line 1 "ENTRY_10bf0f00"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf0f00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10bf1100; body size 25 bytes.
#line 1 "ENTRY_10bf1100"

__declspec(naked) void FUN_10bf1100(void)

{
  __asm mov ecx, dword ptr [ecx + 0x38]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10bf1113
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bf1120; body size 25 bytes.
#line 1 "ENTRY_10bf1120"

__declspec(naked) void FUN_10bf1120(void)

{
  __asm mov ecx, dword ptr [ecx + 0x14]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10bf1133
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bf11a0; body size 25 bytes.
#line 1 "ENTRY_10bf11a0"

__declspec(naked) void FUN_10bf11a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10bf11b3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bf11c0; body size 25 bytes.
#line 1 "ENTRY_10bf11c0"

__declspec(naked) void FUN_10bf11c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10bf11d3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10bf1470(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1186d30c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10bf149e
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm je 0x10bf1497
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
}



// Reference entry 10bf21c0; body size 24 bytes.
#line 1 "ENTRY_10bf21c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10bf21c0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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

__declspec(naked) void FUN_10bf2460(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10bf248d
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10bf248d
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x20]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10bf24a0; body size 48 bytes.
#line 1 "ENTRY_10bf24a0"

__declspec(naked) void FUN_10bf24a0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10bf24cd
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10bf24cd
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x20]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10bf3000; body size 20 bytes.
#line 1 "ENTRY_10bf3000"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf3000(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10bf34f0; body size 20 bytes.
#line 1 "ENTRY_10bf34f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10bf34f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10bf3b40; body size 40 bytes.
#line 1 "ENTRY_10bf3b40"

__declspec(naked) void FUN_10bf3b40(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_1004e189
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10bf3b61
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10bf3b80; body size 40 bytes.
#line 1 "ENTRY_10bf3b80"

__declspec(naked) void FUN_10bf3b80(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_1000e78c
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10bf3ba1
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10bf50a0; body size 39 bytes.
#line 1 "ENTRY_10bf50a0"

__declspec(naked) void FUN_10bf50a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bf50d0; body size 39 bytes.
#line 1 "ENTRY_10bf50d0"

__declspec(naked) void FUN_10bf50d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x20
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10bf5880(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm je 0x10bf5895
  __asm lea ecx, [eax + 8]
  __asm call LAB_10032cc2
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm test eax, eax
  __asm je 0x10bf58a5
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 10bf58b0; body size 44 bytes.
#line 1 "ENTRY_10bf58b0"

__declspec(naked) void FUN_10bf58b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm je 0x10bf58cb
  __asm add eax, 8
  __asm push eax
  __asm push dword ptr [esi]
  __asm call LAB_10069920
  __asm mov eax, dword ptr [esi + 4]
  __asm add esp, 8
  __asm pop esi
  __asm test eax, eax
  __asm je 0x10bf58db
  __asm push 0x20
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
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

__declspec(naked) void FUN_10bf5f40(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_1000e6f1
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
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

__declspec(naked) void FUN_10bf6240(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10bf6260; body size 25 bytes.
#line 1 "ENTRY_10bf6260"

__declspec(naked) void FUN_10bf6260(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x20
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10bf78b0(void)

{
  __asm sub esp, 8
  __asm push esi
  __asm push 0
  __asm call dword ptr [LAB_122fca5c]
  __asm mov ecx, dword ptr [esp + 0x1c]
  __asm add esp, 4
  __asm mov esi, eax
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_1003dde8
  __asm imul ecx, dword ptr [esp + 0x14], 0x15180
  __asm sub esi, eax
  __asm cmp esi, ecx
  __asm pop esi
  __asm setg al
  __asm add esp, 8
  __asm ret
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
    ((SCVtbl_3_1*)(*(int **)(param_1 + 0x24)))->v((int)(param_1));
    *(undefined1*)(param_1 + 0x28) = (undefined1)(1);
  }
  return;
}


// Reference entry 10bfad00; body size 39 bytes.
#line 1 "ENTRY_10bfad00"

__declspec(naked) void FUN_10bfad00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x10
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10bfb4b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm je 0x10bfb4c5
  __asm lea ecx, [eax + 8]
  __asm call LAB_10023a4c
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm test eax, eax
  __asm je 0x10bfb4d5
  __asm push 0x10
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 10bfb650; body size 25 bytes.
#line 1 "ENTRY_10bfb650"

__declspec(naked) void FUN_10bfb650(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0xc]
  __asm call LAB_100172ce
  __asm mov dword ptr [esi], LAB_11892f2c
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10072d77
}



// Reference entry 10bfbad0; body size 27 bytes.
#line 1 "ENTRY_10bfbad0"

__declspec(naked) void FUN_10bfbad0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_1000e827
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
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

__declspec(naked) void FUN_10bfbc10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0xc]
  __asm call LAB_100172ce
  __asm mov ecx, esi
  __asm mov dword ptr [esi], LAB_11892f2c
  __asm call LAB_10072d77
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10bfbc3d
  __asm push 0x623c
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10bfbcd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x10
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10bfe530; body size 41 bytes.
#line 1 "ENTRY_10bfe530"

__declspec(naked) void FUN_10bfe530(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10bfe553
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bfe5b0; body size 41 bytes.
#line 1 "ENTRY_10bfe5b0"

__declspec(naked) void FUN_10bfe5b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10bfe5d3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bfe5f0; body size 41 bytes.
#line 1 "ENTRY_10bfe5f0"

__declspec(naked) void FUN_10bfe5f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10bfe613
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bfe9e0; body size 60 bytes.
#line 1 "ENTRY_10bfe9e0"

__declspec(naked) void FUN_10bfe9e0(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_116cfe30
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10bfea0d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_10bfef00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esi], LAB_1191452c
  __asm mov dword ptr [esi + 0x24], LAB_119144e8
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi + 0x24], LAB_1186d2f4
  __asm call LAB_1003c3b7
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10bfef34
  __asm push 0x2c
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10bff180(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10bff19c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10bff1b2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c00ae0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10c00b0f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm mov ecx, dword ptr [esi + 0x14]
  __asm inc ecx
  __asm cmp ecx, eax
  __asm jge 0x10c00b0f
  __asm mov dword ptr [esi + 0x14], ecx
  __asm test ecx, ecx
  __asm js 0x10c00b0f
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm cmp dword ptr [esi + 0x14], eax
  __asm jge 0x10c00b0f
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10c01490; body size 36 bytes.
#line 1 "ENTRY_10c01490"

__declspec(naked) void FUN_10c01490(void)

{
  __asm push ebx
  __asm mov ebx, ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [ebx + 4]
  __asm mov ecx, edi
  __asm push esi
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm add dword ptr [ebx + 4], 8
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 10c014c0; body size 36 bytes.
#line 1 "ENTRY_10c014c0"

__declspec(naked) void FUN_10c014c0(void)

{
  __asm push ebx
  __asm mov ebx, ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [ebx + 4]
  __asm mov ecx, edi
  __asm push esi
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm add dword ptr [ebx + 4], 8
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 10c014f0; body size 36 bytes.
#line 1 "ENTRY_10c014f0"

__declspec(naked) void FUN_10c014f0(void)

{
  __asm push ebx
  __asm mov ebx, ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [ebx + 4]
  __asm mov ecx, edi
  __asm push esi
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm add dword ptr [ebx + 4], 8
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 10c01d30; body size 41 bytes.
#line 1 "ENTRY_10c01d30"

__declspec(naked) void FUN_10c01d30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c01d53
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c01d70; body size 41 bytes.
#line 1 "ENTRY_10c01d70"

__declspec(naked) void FUN_10c01d70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c01d93
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c02e00(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10c02e29
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10c02e36
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
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

__declspec(naked) void FUN_10c03220(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10c03233
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c05320; body size 41 bytes.
#line 1 "ENTRY_10c05320"

__declspec(naked) void FUN_10c05320(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c05343
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c05360; body size 41 bytes.
#line 1 "ENTRY_10c05360"

__declspec(naked) void FUN_10c05360(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c05383
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c053a0; body size 41 bytes.
#line 1 "ENTRY_10c053a0"

__declspec(naked) void FUN_10c053a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c053c3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c053e0; body size 24 bytes.
#line 1 "ENTRY_10c053e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c053e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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

__declspec(naked) void FUN_10c06f90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm add ecx, 0xe8
  __asm call LAB_1000e3db
  __asm ret 4
}



// Reference entry 10c06fb0; body size 22 bytes.
#line 1 "ENTRY_10c06fb0"

__declspec(naked) void FUN_10c06fb0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push 0
  __asm mov ecx, dword ptr [eax]
  __asm add ecx, 0xf4
  __asm call LAB_1006005a
  __asm ret 4
}



// Reference entry 10c070b0; body size 48 bytes.
#line 1 "ENTRY_10c070b0"

__declspec(naked) void FUN_10c070b0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10c070dd
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10c070dd
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x70]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c0f120(void)

{
  __asm push ebx
  __asm push edi
  __asm mov ebx, ecx
  __asm call LAB_1001c9c2
  __asm mov edi, dword ptr [ebx]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x124]
  __asm push eax
  __asm push dword ptr [esp + 0x10]
  __asm mov ecx, ebx
  __asm call dword ptr [edi + 0x80]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop edi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 10c0f160; body size 38 bytes.
#line 1 "ENTRY_10c0f160"

__declspec(naked) void FUN_10c0f160(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm call LAB_1001c9c2
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x124]
  __asm push eax
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, edi
  __asm call LAB_10068994
  __asm mov eax, dword ptr [esp + 8]
  __asm pop edi
  __asm ret 4
}



// Reference entry 10c146f0; body size 28 bytes.
#line 1 "ENTRY_10c146f0"

__declspec(naked) undefined4 FUN_10c146f0(void)

{
  __asm call LAB_1007a7a2
  __asm test eax, eax
  __asm je 0x10c14709
  __asm push 2
  __asm mov ecx, eax
  __asm call LAB_10002eeb
  __asm test al, al
  __asm je 0x10c14709
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10c14ab0; body size 35 bytes.
#line 1 "ENTRY_10c14ab0"

__declspec(naked) void FUN_10c14ab0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1000966f
  __asm cmp byte ptr [esi + 0x30], 0
  __asm jne 0x10c14acf
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x14]
  __asm call eax
  __asm test al, al
  __asm jne 0x10c14acf
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10c16c60; body size 43 bytes.
#line 1 "ENTRY_10c16c60"

__declspec(naked) void FUN_10c16c60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10c16c73
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm test eax, eax
  __asm jne 0x10c16c83
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm test ecx, ecx
  __asm je 0x10c16c87
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm test eax, eax
  __asm je 0x10c16c87
  __asm xor al, al
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10c16f90; body size 41 bytes.
#line 1 "ENTRY_10c16f90"

__declspec(naked) void FUN_10c16f90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c16fb3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c16fd0; body size 41 bytes.
#line 1 "ENTRY_10c16fd0"

__declspec(naked) void FUN_10c16fd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c16ff3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c17010; body size 41 bytes.
#line 1 "ENTRY_10c17010"

__declspec(naked) void FUN_10c17010(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c17033
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c17050; body size 24 bytes.
#line 1 "ENTRY_10c17050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c17050(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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

__declspec(naked) void FUN_10c17fd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov ecx, dword ptr [esi + 0xa0]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov edi, eax
  __asm mov edx, dword ptr [edx + 0x168]
  __asm call edx
  __asm test al, al
  __asm je 0x10c17ffb
  __asm cmp edi, 1
  __asm jbe 0x10c17ffb
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c18560(void)

{
  __asm mov ecx, dword ptr [ecx + 0x160]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10c18576
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c186b0; body size 20 bytes.
#line 1 "ENTRY_10c186b0"

__declspec(naked) void FUN_10c186b0(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm test ecx, ecx
  __asm je 0x10c186bc
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10c19540; body size 17 bytes.
#line 1 "ENTRY_10c19540"

__declspec(naked) void FUN_10c19540(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm test ecx, ecx
  __asm je 0x10c1954c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10c1bbc0; body size 23 bytes.
#line 1 "ENTRY_10c1bbc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c1bbc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xdc));
  return (SCStr *)(param_2);
}


// Reference entry 10c1be40; body size 56 bytes.
#line 1 "ENTRY_10c1be40"

__declspec(naked) void FUN_10c1be40(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, edx
  __asm sub eax, 0
  __asm je 0x10c1be61
  __asm sub eax, 2
  __asm je 0x10c1be59
  __asm mov dword ptr [esp + 4], edx
  __asm jmp LAB_10083721
  __asm mov eax, 4
  __asm ret 4
  __asm mov ecx, dword ptr [ecx + 0xa8]
  __asm mov eax, 7
  __asm test ecx, ecx
  __asm je 0x10c1be75
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x30]
  __asm ret 4
}



// Reference entry 10c1c560; body size 21 bytes.
#line 1 "ENTRY_10c1c560"

__declspec(naked) void FUN_10c1c560(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm push 0
  __asm push dword ptr [esp + 8]
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0x44]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10c1c700; body size 21 bytes.
#line 1 "ENTRY_10c1c700"

__declspec(naked) void FUN_10c1c700(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm push 0
  __asm push dword ptr [esp + 8]
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0x44]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10c1c720; body size 35 bytes.
#line 1 "ENTRY_10c1c720"

__declspec(naked) void FUN_10c1c720(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1f57
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_10c1e7b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm push 1
  __asm push dword ptr [esp + 8]
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0x44]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10c1e7e0; body size 17 bytes.
#line 1 "ENTRY_10c1e7e0"

__declspec(naked) void FUN_10c1e7e0(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm test ecx, ecx
  __asm je 0x10c1e7ec
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10c1ebf0; body size 23 bytes.
#line 1 "ENTRY_10c1ebf0"

__declspec(naked) void FUN_10c1ebf0(void)

{
  __asm mov eax, dword ptr [ecx + 0x38]
  __asm add ecx, 0x38
  __asm push 0
  __asm call dword ptr [eax + 0x14]
  __asm push 0
  __asm push eax
  __asm call LAB_10056e92
  __asm add esp, 8
  __asm ret
}



// Reference entry 10c1ec20; body size 21 bytes.
#line 1 "ENTRY_10c1ec20"

__declspec(naked) void FUN_10c1ec20(void)

{
  __asm mov eax, dword ptr [ecx + 0xdc]
  __asm test eax, eax
  __asm je 0x10c1ec32
  __asm cmp byte ptr [eax], 0
  __asm je 0x10c1ec32
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10c1ed60; body size 46 bytes.
#line 1 "ENTRY_10c1ed60"

__declspec(naked) void FUN_10c1ed60(void)

{
  __asm mov edx, dword ptr [ecx + 0xa0]
  __asm test edx, edx
  __asm je 0x10c1ed8b
  __asm cmp dword ptr [ecx + 0xa8], 0
  __asm je 0x10c1ed8b
  __asm cmp byte ptr [ecx + 0x14d], 0
  __asm jne 0x10c1ed8b
  __asm mov eax, dword ptr [edx]
  __asm mov ecx, edx
  __asm call dword ptr [eax + 0x1c]
  __asm cmp eax, 3
  __asm jne 0x10c1ed8b
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10c1edc0; body size 19 bytes.
#line 1 "ENTRY_10c1edc0"

__declspec(naked) void FUN_10c1edc0(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm test ecx, ecx
  __asm je 0x10c1edce
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10c208f0; body size 37 bytes.
#line 1 "ENTRY_10c208f0"

__declspec(naked) void FUN_10c208f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1003b4d5
  __asm mov ecx, dword ptr [esi + 0xa0]
  __asm test ecx, ecx
  __asm je 0x10c20909
  __asm mov eax, dword ptr [ecx]
  __asm push 0
  __asm call dword ptr [eax + 0x20]
  __asm lea ecx, [esi + 0xb0]
  __asm pop esi
  __asm jmp LAB_10032100
}



// Reference entry 10c20eb0; body size 19 bytes.
#line 1 "ENTRY_10c20eb0"

__declspec(naked) void FUN_10c20eb0(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm test ecx, ecx
  __asm je 0x10c20ebe
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10c21100; body size 23 bytes.
#line 1 "ENTRY_10c21100"

__declspec(naked) void FUN_10c21100(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10c21114
  __asm mov dword ptr [esp + 4], eax
  __asm add ecx, 0x18
  __asm jmp LAB_100373d5
  __asm ret 4
}



// Reference entry 10c212a0; body size 61 bytes.
#line 1 "ENTRY_10c212a0"

__declspec(naked) void FUN_10c212a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10c212bc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10c212d2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c21eb0; body size 43 bytes.
#line 1 "ENTRY_10c21eb0"

__declspec(naked) void FUN_10c21eb0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c21ed5
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c23420; body size 59 bytes.
#line 1 "ENTRY_10c23420"

__declspec(naked) void FUN_10c23420(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10c2344c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10c23443
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1008a48b
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c23470; body size 59 bytes.
#line 1 "ENTRY_10c23470"

__declspec(naked) void FUN_10c23470(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10c2349c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10c23493
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1002d682
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c238a0; body size 24 bytes.
#line 1 "ENTRY_10c238a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c238a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c23ae0; body size 39 bytes.
#line 1 "ENTRY_10c23ae0"

__declspec(naked) void FUN_10c23ae0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c24a10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c261e0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10c26209
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10c26216
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10c26570; body size 23 bytes.
#line 1 "ENTRY_10c26570"

__declspec(naked) void FUN_10c26570(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm push offset LAB_121a5354
  __asm push dword ptr [esp + 8]
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0x18]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret
}



// Reference entry 10c265e0; body size 57 bytes.
#line 1 "ENTRY_10c265e0"

__declspec(naked) void FUN_10c265e0(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm mov edx, dword ptr [ecx + 0x14]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10c26600
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10c26613
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10c267e0; body size 20 bytes.
#line 1 "ENTRY_10c267e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c267e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10c271e0; body size 59 bytes.
#line 1 "ENTRY_10c271e0"

__declspec(naked) void FUN_10c271e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10c2720c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10c27203
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1008a48b
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c27230; body size 59 bytes.
#line 1 "ENTRY_10c27230"

__declspec(naked) void FUN_10c27230(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10c2725c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10c27253
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1002d682
  __asm pop edi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c2a580(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2095
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10c2a600; body size 29 bytes.
#line 1 "ENTRY_10c2a600"

__declspec(naked) void FUN_10c2a600(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm call LAB_1002f0c7
  __asm lea edx, [edi + 0x28]
  __asm mov ecx, eax
  __asm neg edi
  __asm mov esi, dword ptr [eax]
  __asm sbb edi, edi
  __asm and edi, edx
  __asm push edi
  __asm call dword ptr [esi + 0xc]
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10c2a630; body size 29 bytes.
#line 1 "ENTRY_10c2a630"

__declspec(naked) void FUN_10c2a630(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm call LAB_1002f0c7
  __asm lea edx, [edi + 0x28]
  __asm mov ecx, eax
  __asm neg edi
  __asm mov esi, dword ptr [eax]
  __asm sbb edi, edi
  __asm and edi, edx
  __asm push edi
  __asm call dword ptr [esi + 0x10]
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10c2a700; body size 16 bytes.
#line 1 "ENTRY_10c2a700"

__declspec(naked) void FUN_10c2a700(void)

{
  __asm mov byte ptr [ecx + 0x34], 0
  __asm call LAB_1002f0c7
  __asm mov ecx, eax
  __asm jmp LAB_10088ae1
}



// Reference entry 10c2a8b0; body size 39 bytes.
#line 1 "ENTRY_10c2a8b0"

__declspec(naked) void FUN_10c2a8b0(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm push esi
  __asm mov esi, ecx
  __asm je 0x10c2a8d3
  __asm cmp dword ptr [esi + 0x10], 0
  __asm jne 0x10c2a8c5
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x30]
  __asm push 0
  __asm push dword ptr [esp + 0xc]
  __asm lea ecx, [esi + 8]
  __asm call LAB_10037bc8
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c2a8e0; body size 41 bytes.
#line 1 "ENTRY_10c2a8e0"

__declspec(naked) void FUN_10c2a8e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm test eax, eax
  __asm je 0x10c2a905
  __asm push eax
  __asm lea ecx, [esi + 8]
  __asm call LAB_100373d5
  __asm test al, al
  __asm je 0x10c2a905
  __asm cmp dword ptr [esi + 0x10], 0
  __asm jne 0x10c2a905
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x34]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c2b7e0; body size 41 bytes.
#line 1 "ENTRY_10c2b7e0"

__declspec(naked) void FUN_10c2b7e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c2b803
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c2b820; body size 41 bytes.
#line 1 "ENTRY_10c2b820"

__declspec(naked) void FUN_10c2b820(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c2b843
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c2bce0; body size 34 bytes.
#line 1 "ENTRY_10c2bce0"

void __fastcall FUN_10c2bce0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)param_1[1]);
  for (param_1 = (undefined4 *)((undefined4 *)*param_1);(undefined4 *)((param_1)) != (undefined4 *)(puVar1); param_1 = param_1 + 4) {
    ((SCVtbl_0_1*)(param_1))->v((int)(0));
  }
  return;
}


// Reference entry 10c2c0e0; body size 45 bytes.
#line 1 "ENTRY_10c2c0e0"

__declspec(naked) void FUN_10c2c0e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_118782f8
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10c2c109
  __asm mov ecx, dword ptr [esi]
  __asm call LAB_100665a4
  __asm test al, al
  __asm je 0x10c2c109
  __asm mov ecx, dword ptr [esi]
  __asm push 0
  __asm call LAB_100561d6
  __asm pop esi
  __asm ret 8
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

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10c2c3b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
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

__declspec(naked) void FUN_10c2c400(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_118782f8
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10c2c42b
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_100665a4
  __asm test al, al
  __asm je 0x10c2c42b
  __asm mov ecx, dword ptr [esi + 4]
  __asm push 0
  __asm call LAB_100561d6
  __asm pop esi
  __asm ret 8
}



// Reference entry 10c2c4b0; body size 19 bytes.
#line 1 "ENTRY_10c2c4b0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10c2c4b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10c32530; body size 57 bytes.
#line 1 "ENTRY_10c32530"

__declspec(naked) void FUN_10c32530(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm test esi, esi
  __asm je 0x10c32565
  __asm mov eax, dword ptr [esi]
  __asm push edi
  __asm push 0
  __asm lea edi, [ecx - 0x14]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x8c]
  __asm push 5
  __asm call eax
  __asm test al, al
  __asm je 0x10c32564
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push dword ptr [edi + 0x18]
  __asm call dword ptr [eax + 0x38]
  __asm push 0
  __asm mov ecx, edi
  __asm call LAB_100561d6
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c32580; body size 55 bytes.
#line 1 "ENTRY_10c32580"

__declspec(naked) void FUN_10c32580(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm xor edi, edi
  __asm mov eax, dword ptr [esi + 0x30]
  __asm sub eax, dword ptr [esi + 0x2c]
  __asm sar eax, 2
  __asm test eax, eax
  __asm je 0x10c325b2
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [esi + 0x2c]
  __asm push ebx
  __asm mov ecx, dword ptr [eax + edi*4]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esi + 0x30]
  __asm inc edi
  __asm sub eax, dword ptr [esi + 0x2c]
  __asm sar eax, 2
  __asm cmp edi, eax
  __asm jb 0x10c32598
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c325d0; body size 56 bytes.
#line 1 "ENTRY_10c325d0"

__declspec(naked) void FUN_10c325d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm xor edi, edi
  __asm mov eax, dword ptr [esi + 0x30]
  __asm sub eax, dword ptr [esi + 0x2c]
  __asm sar eax, 2
  __asm test eax, eax
  __asm je 0x10c32603
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [esi + 0x2c]
  __asm push ebx
  __asm mov ecx, dword ptr [eax + edi*4]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, dword ptr [esi + 0x30]
  __asm inc edi
  __asm sub eax, dword ptr [esi + 0x2c]
  __asm sar eax, 2
  __asm cmp edi, eax
  __asm jb 0x10c325e8
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c32620; body size 44 bytes.
#line 1 "ENTRY_10c32620"

__declspec(naked) void FUN_10c32620(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0x18]
  __asm lea ecx, [esi + 0x18]
  __asm call dword ptr [eax + 8]
  __asm cmp byte ptr [esi + 0x38], 0
  __asm je 0x10c32648
  __asm lea ecx, [esi - 8]
  __asm call LAB_100665a4
  __asm test al, al
  __asm je 0x10c32648
  __asm push 0
  __asm lea ecx, [esi - 8]
  __asm call LAB_100561d6
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c35420; body size 41 bytes.
#line 1 "ENTRY_10c35420"

__declspec(naked) void FUN_10c35420(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c35443
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c35720; body size 39 bytes.
#line 1 "ENTRY_10c35720"

__declspec(naked) void FUN_10c35720(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c35e20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10c35e3f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10c35ff0; body size 33 bytes.
#line 1 "ENTRY_10c35ff0"

__declspec(naked) void FUN_10c35ff0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10c3600f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c36500(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10c3651f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c36570; body size 27 bytes.
#line 1 "ENTRY_10c36570"

__declspec(naked) void FUN_10c36570(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_1005edea
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
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

__declspec(naked) void FUN_10c369c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10c370e0; body size 33 bytes.
#line 1 "ENTRY_10c370e0"

__declspec(naked) void FUN_10c370e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10c370ff
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c374b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10c374cc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10c374e2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c37500; body size 61 bytes.
#line 1 "ENTRY_10c37500"

__declspec(naked) void FUN_10c37500(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10c3751c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10c37532
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c37ef0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2097
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10c380f0; body size 26 bytes.
#line 1 "ENTRY_10c380f0"

__declspec(naked) void FUN_10c380f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x84]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10c39b00; body size 41 bytes.
#line 1 "ENTRY_10c39b00"

__declspec(naked) void FUN_10c39b00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c39b23
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c3a730(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10c3a74c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10c3a762
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c3ad50; body size 26 bytes.
#line 1 "ENTRY_10c3ad50"

__declspec(naked) void FUN_10c3ad50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x34]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x84]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10c3b1c0; body size 42 bytes.
#line 1 "ENTRY_10c3b1c0"

__declspec(naked) void FUN_10c3b1c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x190]
  __asm test ecx, ecx
  __asm je 0x10c3b1d5
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esi + 0x3c]
  __asm call dword ptr [eax + 0x14]
  __asm push 0x3e8
  __asm lea ecx, [esi + 0x1c]
  __asm call LAB_100913f8
  __asm mov dword ptr [esi + 0x198], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10c3b200; body size 56 bytes.
#line 1 "ENTRY_10c3b200"

__declspec(naked) void FUN_10c3b200(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp eax, dword ptr [edi + 0x180]
  __asm jne 0x10c3b234
  __asm push esi
  __asm lea ecx, [edi - 0x18]
  __asm call LAB_1004cbc2
  __asm lea ecx, [edi - 0x18]
  __asm call LAB_10093329
  __asm push 0x3e8
  __asm lea ecx, [edi + 4]
  __asm call LAB_100913f8
  __asm mov dword ptr [edi + 0x180], eax
  __asm pop esi
  __asm pop edi
  __asm ret 4
}



// Reference entry 10c3b9f0; body size 29 bytes.
#line 1 "ENTRY_10c3b9f0"

__declspec(naked) void FUN_10c3b9f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x34]
  __asm sub esp, 8
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x10 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x04 __asm _emit 0x24
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x34]
  __asm ret 0xc
}



// Reference entry 10c3d380; body size 57 bytes.
#line 1 "ENTRY_10c3d380"

__declspec(naked) void FUN_10c3d380(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10c3d3b4
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_10027e49
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x10c3d393
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}



// Reference entry 10c3d3d0; body size 40 bytes.
#line 1 "ENTRY_10c3d3d0"

__declspec(naked) void FUN_10c3d3d0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_10045363
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10c3d3f1
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10c3d410; body size 40 bytes.
#line 1 "ENTRY_10c3d410"

__declspec(naked) void FUN_10c3d410(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_1007a766
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10c3d431
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10c3d960; body size 52 bytes.
#line 1 "ENTRY_10c3d960"

__declspec(naked) void FUN_10c3d960(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [esi + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [esi]
  __asm test esi, esi
  __asm je 0x10c3d992
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm lea ecx, [esi + 0xc]
  __asm push ecx
  __asm call LAB_10043dba
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov esi, edi
  __asm test edi, edi
  __asm jne 0x10c3d975
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10c404f0; body size 39 bytes.
#line 1 "ENTRY_10c404f0"

__declspec(naked) void FUN_10c404f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x10
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c40520; body size 39 bytes.
#line 1 "ENTRY_10c40520"

__declspec(naked) void FUN_10c40520(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c40550; body size 39 bytes.
#line 1 "ENTRY_10c40550"

__declspec(naked) void FUN_10c40550(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x10
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c40580; body size 39 bytes.
#line 1 "ENTRY_10c40580"

__declspec(naked) void FUN_10c40580(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c41500(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm je 0x10c41516
  __asm lea ecx, [eax + 0xc]
  __asm push ecx
  __asm call LAB_10043dba
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm test eax, eax
  __asm je 0x10c41526
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
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

__declspec(naked) void FUN_10c41550(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm test eax, eax
  __asm je 0x10c41565
  __asm lea ecx, [eax + 8]
  __asm call LAB_10080c3d
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm test eax, eax
  __asm je 0x10c41575
  __asm push 0x18
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
}



// Reference entry 10c41590; body size 17 bytes.
#line 1 "ENTRY_10c41590"

__declspec(naked) void FUN_10c41590(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm test eax, eax
  __asm je 0x10c415a0
  __asm push dword ptr [ecx]
  __asm mov ecx, eax
  __asm call LAB_10043dba
  __asm ret
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

__declspec(naked) void FUN_10c41d40(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10057bad
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10c42140; body size 36 bytes.
#line 1 "ENTRY_10c42140"

__declspec(naked) void FUN_10c42140(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm push ecx
  __asm call LAB_10043dba
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10c4215e
  __asm push 0xc
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c42170; body size 32 bytes.
#line 1 "ENTRY_10c42170"

__declspec(naked) void FUN_10c42170(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_10080c3d
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10c4218a
  __asm push 0x10
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c42360; body size 25 bytes.
#line 1 "ENTRY_10c42360"

__declspec(naked) void FUN_10c42360(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x10
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10c42380; body size 25 bytes.
#line 1 "ENTRY_10c42380"

__declspec(naked) void FUN_10c42380(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10c423a0; body size 25 bytes.
#line 1 "ENTRY_10c423a0"

__declspec(naked) void FUN_10c423a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x10
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10c423c0; body size 25 bytes.
#line 1 "ENTRY_10c423c0"

__declspec(naked) void FUN_10c423c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c42890(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi + 8]
  __asm mov eax, dword ptr [esi]
  __asm lea ecx, [esi + 0xc]
  __asm push ecx
  __asm mov dword ptr [edi + 8], eax
  __asm call LAB_10043dba
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm mov eax, dword ptr [edi]
  __asm add esp, 8
  __asm dec dword ptr [eax + 4]
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c42900(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi + 8]
  __asm mov eax, dword ptr [esi]
  __asm lea ecx, [esi + 8]
  __asm mov dword ptr [edi + 8], eax
  __asm call LAB_10080c3d
  __asm push 0x18
  __asm push esi
  __asm call LAB_100131d8
  __asm mov eax, dword ptr [edi]
  __asm add esp, 8
  __asm dec dword ptr [eax + 4]
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c46f60(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187af24
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10c471c0; body size 16 bytes.
#line 1 "ENTRY_10c471c0"

__declspec(naked) void FUN_10c471c0(void)

{
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add ecx, -4
  __asm jmp LAB_1000c7b6
}



// Reference entry 10c471f0; body size 20 bytes.
#line 1 "ENTRY_10c471f0"

__declspec(naked) void FUN_10c471f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, dword ptr [ecx + 0x5c]
  __asm jne 0x10c47201
  __asm add ecx, -0x1c
  __asm call LAB_1008e75c
  __asm ret 4
}



// Reference entry 10c475e0; body size 41 bytes.
#line 1 "ENTRY_10c475e0"

__declspec(naked) void FUN_10c475e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c47603
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c47bc0; body size 51 bytes.
#line 1 "ENTRY_10c47bc0"

__declspec(naked) void FUN_10c47bc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 8], 0
  __asm je 0x10c47bf1
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10c47be3
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c4a070(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x74]
  __asm call LAB_10036af2
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10c4a570; body size 41 bytes.
#line 1 "ENTRY_10c4a570"

__declspec(naked) void FUN_10c4a570(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c4a593
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c4a5b0; body size 41 bytes.
#line 1 "ENTRY_10c4a5b0"

__declspec(naked) void FUN_10c4a5b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c4a5d3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c4b2f0; body size 33 bytes.
#line 1 "ENTRY_10c4b2f0"

__declspec(naked) void FUN_10c4b2f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10c4b30f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10c4b320; body size 33 bytes.
#line 1 "ENTRY_10c4b320"

__declspec(naked) void FUN_10c4b320(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10c4b33f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10c4b8b0; body size 37 bytes.
#line 1 "ENTRY_10c4b8b0"

__declspec(naked) void FUN_10c4b8b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10c4b8cf
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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
  thunk_FUN_111c0a80<>();
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

__declspec(naked) void FUN_10c4bf90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10c4bfaf
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10c4c4a0; body size 28 bytes.
#line 1 "ENTRY_10c4c4a0"

__declspec(naked) void FUN_10c4c4a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x14]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10c4c4ba
  __asm mov ecx, dword ptr [esi + 0x14]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm pop esi
  __asm ret
}



// Reference entry 10c4c900; body size 34 bytes.
#line 1 "ENTRY_10c4c900"

__declspec(naked) void FUN_10c4c900(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_10086944
  __asm test al, al
  __asm jne 0x10c4c91e
  __asm cmp dword ptr [esi + 0x442c], 0x130
  __asm jne 0x10c4c91e
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c4c930; body size 17 bytes.
#line 1 "ENTRY_10c4c930"

__declspec(naked) void FUN_10c4c930(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6114]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
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

__declspec(naked) void FUN_10c4d990(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm test edx, edx
  __asm je 0x10c4d9aa
  __asm mov eax, dword ptr [esp + 8]
  __asm test eax, eax
  __asm je 0x10c4d9aa
  __asm push eax
  __asm push edx
  __asm add ecx, 0x24
  __asm call LAB_1002d41b
  __asm mov al, 1
  __asm ret 8
}



// Reference entry 10c4e560; body size 41 bytes.
#line 1 "ENTRY_10c4e560"

__declspec(naked) void FUN_10c4e560(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c4e583
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c4e5a0; body size 41 bytes.
#line 1 "ENTRY_10c4e5a0"

__declspec(naked) void FUN_10c4e5a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c4e5c3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c4e5e0; body size 41 bytes.
#line 1 "ENTRY_10c4e5e0"

__declspec(naked) void FUN_10c4e5e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c4e603
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c4e620; body size 41 bytes.
#line 1 "ENTRY_10c4e620"

__declspec(naked) void FUN_10c4e620(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c4e643
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c4e660; body size 41 bytes.
#line 1 "ENTRY_10c4e660"

__declspec(naked) void FUN_10c4e660(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c4e683
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c4e6a0; body size 24 bytes.
#line 1 "ENTRY_10c4e6a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c4e6a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c4ea80; body size 49 bytes.
#line 1 "ENTRY_10c4ea80"

__declspec(naked) void FUN_10c4ea80(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11916f64
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11917054
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 4
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
  thunk_FUN_111c0af0<>();
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
  thunk_FUN_111c0af0<>();
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
  thunk_FUN_111c0af0<>();
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
  thunk_FUN_111c0af0<>();
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
  thunk_FUN_111c0af0<>();
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

__declspec(naked) void FUN_10c50ee0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10c50f0d
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10c50f0d
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x3c]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c54bb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c54bd3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c54bf0; body size 41 bytes.
#line 1 "ENTRY_10c54bf0"

__declspec(naked) void FUN_10c54bf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c54c13
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c54c30; body size 41 bytes.
#line 1 "ENTRY_10c54c30"

__declspec(naked) void FUN_10c54c30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c54c53
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c54c70; body size 41 bytes.
#line 1 "ENTRY_10c54c70"

__declspec(naked) void FUN_10c54c70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c54c93
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c54cb0; body size 24 bytes.
#line 1 "ENTRY_10c54cb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c54cb0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
  thunk_FUN_111c0af0<>();
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
  thunk_FUN_111c0af0<>();
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

__declspec(naked) void FUN_10c56a20(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10c56a4d
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10c56a4d
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x30]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c59370(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10c59393
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c593b0; body size 24 bytes.
#line 1 "ENTRY_10c593b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10c593b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c594a0; body size 42 bytes.
#line 1 "ENTRY_10c594a0"

__declspec(naked) void FUN_10c594a0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11918350
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119183e4
  __asm pop ecx
  __asm ret 4
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
  thunk_FUN_111c0af0<>();
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

__declspec(naked) void FUN_10c59da0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10c59dcd
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10c59dcd
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0x24]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c5b250(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11918d30
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 8], ecx
  __asm test ecx, ecx
  __asm je 0x10c5b277
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
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

__declspec(naked) void FUN_10c5bb30(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10c5bb60
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10c5bb60
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0xf8]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10c5bb70; body size 51 bytes.
#line 1 "ENTRY_10c5bb70"

__declspec(naked) void FUN_10c5bb70(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea eax, [edi + 4]
  __asm push eax
  __asm call LAB_100354f4
  __asm mov esi, eax
  __asm add esp, 4
  __asm cmp esi, 1
  __asm jle 0x10c5bba0
  __asm cmp dword ptr [edi + 8], 0
  __asm je 0x10c5bba0
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [edx + 0xf8]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10c5bbb0; body size 42 bytes.
#line 1 "ENTRY_10c5bbb0"

__declspec(naked) void FUN_10c5bbb0(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x30], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_118795c8
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5bbf0; body size 42 bytes.
#line 1 "ENTRY_10c5bbf0"

__declspec(naked) void FUN_10c5bbf0(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x28], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879640
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c5c820(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1fd7
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10c5c920; body size 51 bytes.
#line 1 "ENTRY_10c5c920"

__declspec(naked) void FUN_10c5c920(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x1c]
  __asm test ecx, ecx
  __asm je 0x10c5c94f
  __asm add ecx, 0x378
  __asm call LAB_1007be1d
  __asm test al, al
  __asm jne 0x10c5c94b
  __asm mov ecx, dword ptr [esi + 0x1c]
  __asm add ecx, 0x378
  __asm call LAB_1002a1a3
  __asm test al, al
  __asm jne 0x10c5c94f
  __asm xor al, al
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10c5c970; body size 42 bytes.
#line 1 "ENTRY_10c5c970"

__declspec(naked) void FUN_10c5c970(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x64], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_118799b8
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5cb70; body size 42 bytes.
#line 1 "ENTRY_10c5cb70"

__declspec(naked) void FUN_10c5cb70(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x58], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_1187993c
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5cbb0; body size 19 bytes.
#line 1 "ENTRY_10c5cbb0"

__declspec(naked) void FUN_10c5cbb0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10c5cbbe
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x4c]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10c5cbd0; body size 41 bytes.
#line 1 "ENTRY_10c5cbd0"

__declspec(naked) void FUN_10c5cbd0(void)

{
  __asm mov al, byte ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov byte ptr [esi + 0x24], al
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879678
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5cc20; body size 42 bytes.
#line 1 "ENTRY_10c5cc20"

__declspec(naked) void FUN_10c5cc20(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x4c], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879844
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5cc70; body size 41 bytes.
#line 1 "ENTRY_10c5cc70"

__declspec(naked) void FUN_10c5cc70(void)

{
  __asm mov al, byte ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov byte ptr [esi + 0x54], al
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879888
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5ccb0; body size 38 bytes.
#line 1 "ENTRY_10c5ccb0"

__declspec(naked) void FUN_10c5ccb0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm lea eax, [esi - 0xc]
  __asm mov byte ptr [esi + 0x60], 0
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879594
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10c5ccf0; body size 38 bytes.
#line 1 "ENTRY_10c5ccf0"

__declspec(naked) void FUN_10c5ccf0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm lea eax, [esi - 0xc]
  __asm mov byte ptr [esi + 0x60], 1
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879594
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10c5d2f0; body size 17 bytes.
#line 1 "ENTRY_10c5d2f0"

__declspec(naked) void FUN_10c5d2f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1004fd7c
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x8b
}



// Reference entry 10c5d300; body size 17 bytes.
#line 1 "ENTRY_10c5d300"

__declspec(naked) void FUN_10c5d300(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1002428a
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x8b
}



// Reference entry 10c5d310; body size 17 bytes.
#line 1 "ENTRY_10c5d310"

__declspec(naked) void FUN_10c5d310(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1003c763
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x8b
}



// Reference entry 10c5d320; body size 17 bytes.
#line 1 "ENTRY_10c5d320"

__declspec(naked) void FUN_10c5d320(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1007bb6b
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x8b
}



// Reference entry 10c5d330; body size 17 bytes.
#line 1 "ENTRY_10c5d330"

__declspec(naked) void FUN_10c5d330(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1003b507
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xc2
}



// Reference entry 10c5d350; body size 42 bytes.
#line 1 "ENTRY_10c5d350"

__declspec(naked) void FUN_10c5d350(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x5c], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879978
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5d390; body size 19 bytes.
#line 1 "ENTRY_10c5d390"

__declspec(naked) void FUN_10c5d390(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1000db2a
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d3b0; body size 19 bytes.
#line 1 "ENTRY_10c5d3b0"

__declspec(naked) void FUN_10c5d3b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1003614c
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d3d0; body size 23 bytes.
#line 1 "ENTRY_10c5d3d0"

__declspec(naked) void FUN_10c5d3d0(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm mov eax, 0xb
  __asm sub eax, dword ptr [esp + 4]
  __asm lea eax, [eax + eax*4]
  __asm add eax, eax
  __asm mov dword ptr [esp + 4], eax
  __asm jmp dword ptr [edx + 0x68]
}



// Reference entry 10c5d3f0; body size 19 bytes.
#line 1 "ENTRY_10c5d3f0"

__declspec(naked) void FUN_10c5d3f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1006a483
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d410; body size 19 bytes.
#line 1 "ENTRY_10c5d410"

__declspec(naked) void FUN_10c5d410(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_10087862
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d430; body size 19 bytes.
#line 1 "ENTRY_10c5d430"

__declspec(naked) void FUN_10c5d430(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1002eb77
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d450; body size 19 bytes.
#line 1 "ENTRY_10c5d450"

__declspec(naked) void FUN_10c5d450(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1003a4a9
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d470; body size 19 bytes.
#line 1 "ENTRY_10c5d470"

__declspec(naked) void FUN_10c5d470(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_10076751
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d490; body size 26 bytes.
#line 1 "ENTRY_10c5d490"

__declspec(naked) void FUN_10c5d490(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov byte ptr [ecx + 0x60], al
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm je 0x10c5d4a7
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_1005c8c4
  __asm ret 4
}



// Reference entry 10c5d4b0; body size 19 bytes.
#line 1 "ENTRY_10c5d4b0"

__declspec(naked) void FUN_10c5d4b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_100890ea
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d4d0; body size 19 bytes.
#line 1 "ENTRY_10c5d4d0"

__declspec(naked) void FUN_10c5d4d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1009a22d
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d4f0; body size 19 bytes.
#line 1 "ENTRY_10c5d4f0"

__declspec(naked) void FUN_10c5d4f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1006299a
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d510; body size 19 bytes.
#line 1 "ENTRY_10c5d510"

__declspec(naked) void FUN_10c5d510(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1004838d
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d530; body size 19 bytes.
#line 1 "ENTRY_10c5d530"

__declspec(naked) void FUN_10c5d530(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_100168a6
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d550; body size 19 bytes.
#line 1 "ENTRY_10c5d550"

__declspec(naked) void FUN_10c5d550(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_10077d77
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d570; body size 19 bytes.
#line 1 "ENTRY_10c5d570"

__declspec(naked) void FUN_10c5d570(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_10014da8
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d590; body size 19 bytes.
#line 1 "ENTRY_10c5d590"

__declspec(naked) void FUN_10c5d590(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_10012648
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d5b0; body size 19 bytes.
#line 1 "ENTRY_10c5d5b0"

__declspec(naked) void FUN_10c5d5b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_10015190
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d5d0; body size 19 bytes.
#line 1 "ENTRY_10c5d5d0"

__declspec(naked) void FUN_10c5d5d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x74]
  __asm test ecx, ecx
  __asm jne LAB_1008e55e
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10c5d720; body size 41 bytes.
#line 1 "ENTRY_10c5d720"

__declspec(naked) void FUN_10c5d720(void)

{
  __asm mov al, byte ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov byte ptr [esi + 0x34], al
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879758
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5d770; body size 42 bytes.
#line 1 "ENTRY_10c5d770"

__declspec(naked) void FUN_10c5d770(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x38], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_118796b0
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5d7c0; body size 41 bytes.
#line 1 "ENTRY_10c5d7c0"

__declspec(naked) void FUN_10c5d7c0(void)

{
  __asm mov al, byte ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov byte ptr [esi + 0x35], al
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_1187971c
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5d9b0; body size 21 bytes.
#line 1 "ENTRY_10c5d9b0"

void __thiscall Recovered_Bulk::m_FUN_10c5d9b0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_5_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 10c5d9e0; body size 41 bytes.
#line 1 "ENTRY_10c5d9e0"

__declspec(naked) void FUN_10c5d9e0(void)

{
  __asm mov al, byte ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov byte ptr [esi + 0x36], al
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_118798c0
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5da30; body size 42 bytes.
#line 1 "ENTRY_10c5da30"

__declspec(naked) void FUN_10c5da30(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x48], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879808
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5da80; body size 42 bytes.
#line 1 "ENTRY_10c5da80"

__declspec(naked) void FUN_10c5da80(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x50], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879900
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5dac0; body size 42 bytes.
#line 1 "ENTRY_10c5dac0"

__declspec(naked) void FUN_10c5dac0(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x2c], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879604
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5db10; body size 42 bytes.
#line 1 "ENTRY_10c5db10"

__declspec(naked) void FUN_10c5db10(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x44], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_118797cc
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5db60; body size 41 bytes.
#line 1 "ENTRY_10c5db60"

__declspec(naked) void FUN_10c5db60(void)

{
  __asm mov al, byte ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov byte ptr [esi + 0x40], al
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11879790
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5dba0; body size 54 bytes.
#line 1 "ENTRY_10c5dba0"

__declspec(naked) void FUN_10c5dba0(void)

{
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0xc]
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi + 0x18]
  __asm lea ecx, [edi + 0x10]
  __asm call LAB_100373d5
  __asm test esi, esi
  __asm je 0x10c5dbd1
  __asm cmp dword ptr [edi + 0x18], 0
  __asm jne 0x10c5dbd1
  __asm mov ecx, dword ptr [edi + 0x74]
  __asm test ecx, ecx
  __asm je 0x10c5dbd1
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x74 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5dbf0; body size 21 bytes.
#line 1 "ENTRY_10c5dbf0"

void __thiscall Recovered_Bulk::m_FUN_10c5dbf0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_6_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 10c5dc20; body size 42 bytes.
#line 1 "ENTRY_10c5dc20"

__declspec(naked) void FUN_10c5dc20(void)

{
  __asm movsx eax, word ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esi + 0x3c], eax
  __asm lea eax, [esi - 0xc]
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_118796e4
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 4]
  __asm call LAB_10013543
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c5e1e0; body size 33 bytes.
#line 1 "ENTRY_10c5e1e0"

void __thiscall Recovered_Bulk::m_FUN_10c5e1e0(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_10c5e210((int)(param_2),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10c5e2d0; body size 49 bytes.
#line 1 "ENTRY_10c5e2d0"

__declspec(naked) void FUN_10c5e2d0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1002f0b3
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10c5e2f7
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jge 0x10c5e2f9
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10c5e310; body size 60 bytes.
#line 1 "ENTRY_10c5e310"

__declspec(naked) void FUN_10c5e310(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_1006e812
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10c5e342
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10070fbd
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x10c5e344
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10c5eae0; body size 48 bytes.
#line 1 "ENTRY_10c5eae0"

__declspec(naked) void FUN_10c5eae0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c5ed70(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
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

__declspec(naked) void FUN_10c5f840(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10c5f870; body size 31 bytes.
#line 1 "ENTRY_10c5f870"

__declspec(naked) void FUN_10c5f870(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
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
  thunk_FUN_10c5e210((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
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
  thunk_FUN_10c5e210((int)(param_1),(int)(*(undefined4 *)(*param_1 + 4)));
  thunk_FUN_1148a50e(*param_1,0x18);
  return;
}


// Reference entry 10c5fa70; body size 52 bytes.
#line 1 "ENTRY_10c5fa70"

__declspec(naked) void FUN_10c5fa70(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm push dword ptr [esi + 4]
  __asm push edi
  __asm call LAB_1007bb66
  __asm mov dword ptr [esi + 4], esi
  __asm mov ecx, edi
  __asm mov dword ptr [esi], esi
  __asm mov dword ptr [esi + 8], esi
  __asm push dword ptr [esp + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_10037380
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10c5fe60; body size 25 bytes.
#line 1 "ENTRY_10c5fe60"

__declspec(naked) void FUN_10c5fe60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10c603f0; body size 33 bytes.
#line 1 "ENTRY_10c603f0"

void __fastcall FUN_10c603f0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10c5e210((int)(param_1),(int)(*(undefined4 *)(iVar1 + 4)));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10c62180; body size 29 bytes.
#line 1 "ENTRY_10c62180"

__declspec(naked) void FUN_10c62180(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push dword ptr [eax]
  __asm call LAB_1005409d
  __asm mov ecx, dword ptr [esp + 8]
  __asm add esp, 4
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret
}



// Reference entry 10c62f60; body size 17 bytes.
#line 1 "ENTRY_10c62f60"

__declspec(naked) void FUN_10c62f60(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm je 0x10c62f6e
  __asm cmp byte ptr [eax], 0
  __asm je 0x10c62f6e
  __asm xor al, al
  __asm ret
  __asm mov al, 1
  __asm ret
}



// Reference entry 10c63000; body size 36 bytes.
#line 1 "ENTRY_10c63000"

__declspec(naked) void FUN_10c63000(void)

{
  __asm call LAB_10020aae
  __asm push dword ptr [esp + 8]
  __asm mov ecx, eax
  __asm push 0x231e
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x28]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret
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

__declspec(naked) void FUN_10c66510(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm and eax, ecx
  __asm cmp eax, ecx
  __asm jne 0x10c66526
  __asm cmp ecx, 0x1f
  __asm jge 0x10c66526
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10c67700; body size 57 bytes.
#line 1 "ENTRY_10c67700"

__declspec(naked) void FUN_10c67700(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0x30]
  __asm call LAB_1007a7a2
  __asm mov ecx, eax
  __asm call LAB_10002eeb
  __asm test al, al
  __asm jne 0x10c6771d
  __asm mov eax, 3
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x18]
  __asm call eax
  __asm test al, al
  __asm je 0x10c67731
  __asm mov eax, 2
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp dword ptr [eax + 0x28]
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

__declspec(naked) void FUN_10c67ab0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp eax, dword ptr [esi + 0x30]
  __asm jne 0x10c67ace
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x18]
  __asm call eax
  __asm test al, al
  __asm je 0x10c67ace
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x14]
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c67c20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0x3c]
  __asm lea ecx, [esi + 8]
  __asm call LAB_1001ec63
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x48 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c69170(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1008c475
  __asm test eax, eax
  __asm sete al
  __asm ret 4
}



// Reference entry 10c69c70; body size 20 bytes.
#line 1 "ENTRY_10c69c70"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c69c70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x44));
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

__declspec(naked) void FUN_10c69f50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10c69f67
  __asm mov ecx, dword ptr [LAB_121a10c8]
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_10030206
  __asm ret 4
}



// Reference entry 10c6a3c0; body size 20 bytes.
#line 1 "ENTRY_10c6a3c0"

void __fastcall FUN_10c6a3c0(int param_1)

{
  thunk_FUN_10c6c6c0<>(*(int *)(param_1 + 0xcc) != 0);
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

__declspec(naked) void FUN_10c6a450(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, dword ptr [ecx + 0x34]
  __asm jne 0x10c6a475
  __asm add ecx, 0xffffff7c
  __asm cmp dword ptr [ecx + 0xcc], 0
  __asm setne al
  __asm movzx eax, al
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_10070441
  __asm ret 4
}



// Reference entry 10c6a490; body size 23 bytes.
#line 1 "ENTRY_10c6a490"

__declspec(naked) void FUN_10c6a490(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, dword ptr [ecx + 0x34]
  __asm jne 0x10c6a4a4
  __asm add ecx, 0xffffff7c
  __asm call LAB_10013732
  __asm ret 4
}



// Reference entry 10c6a4c0; body size 56 bytes.
#line 1 "ENTRY_10c6a4c0"

__declspec(naked) void FUN_10c6a4c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 0x50], 0
  __asm lea ecx, [esi - 0x7c]
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call LAB_10070441
  __asm mov ecx, dword ptr [esi + 0x60]
  __asm test ecx, ecx
  __asm je 0x10c6a4f6
  __asm call LAB_10068caf
  __asm mov ecx, dword ptr [esi + 0x60]
  __asm test ecx, ecx
  __asm je 0x10c6a4ef
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10c6a520; body size 34 bytes.
#line 1 "ENTRY_10c6a520"

__declspec(naked) void FUN_10c6a520(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm cmp eax, dword ptr [ecx + 0x34]
  __asm jne 0x10c6a53f
  __asm add ecx, -0x80
  __asm cmp dword ptr [ecx + 0xcc], 0
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call LAB_10070441
  __asm ret 0x10
}



// Reference entry 10c6a950; body size 18 bytes.
#line 1 "ENTRY_10c6a950"

__declspec(naked) void FUN_10c6a950(void)

{
  __asm cmp dword ptr [ecx + 0x44], 0
  __asm jne 0x10c6a961
  __asm add ecx, 0xffffff78
  __asm jmp LAB_10013732
  __asm ret
}



// Reference entry 10c6a970; body size 26 bytes.
#line 1 "ENTRY_10c6a970"

__declspec(naked) void FUN_10c6a970(void)

{
  __asm add ecx, 0xffffff78
  __asm cmp dword ptr [ecx + 0xcc], 0
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call LAB_10070441
  __asm ret
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

__declspec(naked) void FUN_10c6ed50(void)

{
  __asm xor eax, eax
  __asm mov edx, 4
  __asm cmp dword ptr [ecx + 0xe8], eax
  __asm cmove eax, edx
  __asm ret
}



// Reference entry 10c6ed70; body size 18 bytes.
#line 1 "ENTRY_10c6ed70"

__declspec(naked) void FUN_10c6ed70(void)

{
  __asm mov ecx, dword ptr [ecx + 0xe8]
  __asm push 0
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x2c]
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10c6fb30; body size 17 bytes.
#line 1 "ENTRY_10c6fb30"

__declspec(naked) void FUN_10c6fb30(void)

{
  __asm xor eax, eax
  __asm mov edx, 4
  __asm cmp dword ptr [ecx + 0x178], eax
  __asm cmove eax, edx
  __asm ret
}



// Reference entry 10c6fcb0; body size 30 bytes.
#line 1 "ENTRY_10c6fcb0"

__declspec(naked) void FUN_10c6fcb0(void)

{
  __asm cmp byte ptr [esp + 4], 0
  __asm je 0x10c6fcc9
  __asm mov byte ptr [ecx + 0x174], 1
  __asm mov ecx, dword ptr [ecx + 0x178]
  __asm call LAB_10033b86
  __asm mov al, 1
  __asm ret 4
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

__declspec(naked) void FUN_10c71eb0(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm xor eax, eax
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [edx + 4]
  __asm test edi, edi
  __asm je 0x10c71ede
  __asm mov edx, dword ptr [edx + 8]
  __asm mov esi, dword ptr [esp + 0xc]
  __asm movzx ecx, byte ptr [edx + eax]
  __asm cmp ecx, esi
  __asm ja 0x10c71ed7
  __asm movzx ecx, byte ptr [edx + eax + 1]
  __asm cmp esi, ecx
  __asm jbe 0x10c71ee3
  __asm add eax, 2
  __asm cmp eax, edi
  __asm jb 0x10c71ec6
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10c73860; body size 46 bytes.
#line 1 "ENTRY_10c73860"

__declspec(naked) void FUN_10c73860(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm cmp ecx, eax
  __asm je 0x10c73887
  __asm mov edx, dword ptr [esp + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [edx]
  __asm movsx edx, byte ptr [ecx]
  __asm cmp edx, esi
  __asm je 0x10c7387f
  __asm inc ecx
  __asm cmp ecx, eax
  __asm jne 0x10c73873
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm mov dword ptr [eax], ecx
  __asm ret
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret
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

__declspec(naked) void FUN_10c75fb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0x1c]
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm mov dword ptr [esi], LAB_1191a8f8
  __asm pop esi
  __asm ret
}



// Reference entry 10c760e0; body size 48 bytes.
#line 1 "ENTRY_10c760e0"

__declspec(naked) void FUN_10c760e0(void)

{
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm test edi, edi
  __asm je 0x10c7610e
  __asm push esi
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x10c76107
  __asm nop
  __asm mov ecx, esi
  __asm lea eax, [esi + 0xc]
  __asm mov esi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 1
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax]
  __asm test esi, esi
  __asm jne 0x10c760f0
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop edi
  __asm ret
}



// Reference entry 10c76170; body size 34 bytes.
#line 1 "ENTRY_10c76170"

__declspec(naked) void FUN_10c76170(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1000f9a7
  __asm mov ecx, dword ptr [esi + 0x10]
  __asm pop esi
  __asm test ecx, ecx
  __asm je 0x10c76191
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm test eax, eax
  __asm je 0x10c76191
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm push 1
  __asm call dword ptr [edx]
  __asm ret
}



// Reference entry 10c761a0; body size 30 bytes.
#line 1 "ENTRY_10c761a0"

__declspec(naked) void FUN_10c761a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0xc]
  __asm mov dword ptr [esi], LAB_1191a79c
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp dword ptr [LAB_122fc308]
}



// Reference entry 10c761e0; body size 25 bytes.
#line 1 "ENTRY_10c761e0"

__declspec(naked) void FUN_10c761e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm test ecx, ecx
  __asm je 0x10c761f8
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm test eax, eax
  __asm je 0x10c761f8
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm push 1
  __asm call dword ptr [edx]
  __asm ret
}



// Reference entry 10c76540; body size 49 bytes.
#line 1 "ENTRY_10c76540"

__declspec(naked) void FUN_10c76540(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi + 0x14]
  __asm mov dword ptr [edi], LAB_1191a91c
  __asm test esi, esi
  __asm je 0x10c76568
  __asm mov ecx, esi
  __asm lea eax, [esi + 0xc]
  __asm mov esi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 1
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax]
  __asm test esi, esi
  __asm jne 0x10c76551
  __asm mov dword ptr [edi], LAB_1191a8f8
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10c76c60; body size 17 bytes.
#line 1 "ENTRY_10c76c60"

__declspec(naked) void FUN_10c76c60(void)

{
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm mov eax, dword ptr [esp + 4]
  __asm jb 0x10c76c6c
  __asm mov ecx, dword ptr [ecx]
  __asm add eax, ecx
  __asm ret 4
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

__declspec(naked) void FUN_10c770a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 8]
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10c770c1
  __asm push 0xc
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c771c0; body size 45 bytes.
#line 1 "ENTRY_10c771c0"

__declspec(naked) void FUN_10c771c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0x1c]
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm mov dword ptr [esi], LAB_1191a8f8
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10c771e7
  __asm push 0x20
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c77200; body size 39 bytes.
#line 1 "ENTRY_10c77200"

__declspec(naked) void FUN_10c77200(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0xc]
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10c77221
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c77230; body size 53 bytes.
#line 1 "ENTRY_10c77230"

__declspec(naked) void FUN_10c77230(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push dword ptr [esi + 0xc]
  __asm mov dword ptr [esi], LAB_1191a79c
  __asm call dword ptr [LAB_122fc7ac]
  __asm add esp, 4
  __asm mov ecx, esi
  __asm call dword ptr [LAB_122fc308]
  __asm test byte ptr [esp + 8], 1
  __asm je 0x10c7725f
  __asm push 0x10
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

bool __fastcall FUN_10c78bf0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(uint *)(*(int *)(param_1 + 4) + 4));
  if ((((uVar1 != 0x14) && (uVar1 != 8)) && (uVar1 != 0xd)) &&
     ((uVar1 != 2 ||
      (((uVar1 = (uint)(*(uint *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 4)), uVar1 != 0x14 &&
        (uVar1 != 8)) && (uVar1 != 0xd)))))) {
    return (bool)0;
  }
  return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 10c79140; body size 30 bytes.
#line 1 "ENTRY_10c79140"

__declspec(naked) void FUN_10c79140(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea esi, [edi + 8]
  __asm push esi
  __asm call LAB_10051992
  __asm push esi
  __asm mov dword ptr [edi], eax
  __asm call LAB_10041245
  __asm add esp, 8
  __asm mov dword ptr [edi + 4], eax
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10c7a2d0; body size 21 bytes.
#line 1 "ENTRY_10c7a2d0"

__declspec(naked) bool FUN_10c7a2d0(void)

{
  __asm push 0x7fffffff
  __asm push 0xa
  __asm call LAB_1000e435
  __asm cmp eax, 0x7fffffff
  __asm setne al
  __asm ret
}



// Reference entry 10c7ad10; body size 43 bytes.
#line 1 "ENTRY_10c7ad10"

__declspec(naked) void FUN_10c7ad10(void)

{
  __asm mov al, byte ptr [esp + 4]
  __asm cmp al, 0x61
  __asm jne 0x10c7ad25
  __asm mov eax, 7
  __asm mov dword ptr [ecx + 0x44], eax
  __asm mov al, 1
  __asm ret 4
  __asm cmp al, 0x62
  __asm jne 0x10c7ad36
  __asm mov eax, 8
  __asm mov dword ptr [ecx + 0x44], eax
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10c7b430; body size 37 bytes.
#line 1 "ENTRY_10c7b430"

__declspec(naked) void FUN_10c7b430(void)

{
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm push 8
  __asm lea ecx, [edi + 0x24]
  __asm call LAB_10071d50
  __asm mov ecx, edi
  __asm mov esi, eax
  __asm call LAB_10040c0f
  __asm push esi
  __asm lea ecx, [edi + 0x24]
  __asm call LAB_1007dec5
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 10c7c230; body size 38 bytes.
#line 1 "ENTRY_10c7c230"

__declspec(naked) void FUN_10c7c230(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm push eax
  __asm call dword ptr [LAB_122fc314]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], edx
  __asm mov dword ptr [esi + 0xc], eax
  __asm pop esi
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10c7c260; body size 62 bytes.
#line 1 "ENTRY_10c7c260"

__declspec(naked) void FUN_10c7c260(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov eax, dword ptr [esi + 4]
  __asm cmp dword ptr [esi], eax
  __asm ja 0x10c7c284
  __asm lea edi, [eax + 0x10]
  __asm push edi
  __asm push dword ptr [esi + 8]
  __asm call dword ptr [LAB_122fc7a8]
  __asm add esp, 8
  __asm test eax, eax
  __asm je 0x10c7c299
  __asm mov dword ptr [esi + 8], eax
  __asm mov dword ptr [esi], edi
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov edx, dword ptr [esi + 8]
  __asm mov al, byte ptr [esp + 0xc]
  __asm pop edi
  __asm mov byte ptr [edx + ecx], al
  __asm inc dword ptr [esi + 4]
  __asm pop esi
  __asm ret 4
  __asm call LAB_1148a066
}



// Reference entry 10c7c420; body size 49 bytes.
#line 1 "ENTRY_10c7c420"

bool __fastcall FUN_10c7c420(int *param_1)

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
  return (bool)0;
}


// Reference entry 10c7d3b0; body size 48 bytes.
#line 1 "ENTRY_10c7d3b0"

__declspec(naked) void FUN_10c7d3b0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x10c7d3d7
  __asm nop word ptr [eax + eax]
  __asm mov ecx, esi
  __asm lea eax, [esi + 0xc]
  __asm mov esi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 1
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax]
  __asm test esi, esi
  __asm jne 0x10c7d3c0
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10c7d870; body size 40 bytes.
#line 1 "ENTRY_10c7d870"

undefined4 *  __stdcall FUN_10c7d870(undefined4 *param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    param_1 = (undefined4 *)(param_1 + 2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10c7d8f0; body size 44 bytes.
#line 1 "ENTRY_10c7d8f0"

__declspec(naked) void FUN_10c7d8f0(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 4]
  __asm test ecx, ecx
  __asm je 0x10c7d919
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov byte ptr [eax + 8], 0
  __asm add eax, 0xc
  __asm sub ecx, 1
  __asm jne 0x10c7d900
  __asm ret 0xc
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10c7e120; body size 50 bytes.
#line 1 "ENTRY_10c7e120"

__declspec(naked) void FUN_10c7e120(void)

{
  __asm lea eax, [ecx + 8]
  __asm push eax
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1148a279
  __asm mov ecx, eax
  __asm add esp, 0x14
  __asm test ecx, ecx
  __asm jns 0x10c7e148
  __asm or eax, 0xffffffff
  __asm ret 0x10
  __asm xor eax, eax
  __asm test ecx, ecx
  __asm setne al
  __asm ret 0x10
}



// Reference entry 10c7e160; body size 48 bytes.
#line 1 "ENTRY_10c7e160"

__declspec(naked) void FUN_10c7e160(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov edx, 0x811c9dc5
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov ecx, 0
  __asm sub esi, edi
  __asm je 0x10c7e189
  __asm movzx eax, byte ptr [ecx + edi]
  __asm inc ecx
  __asm xor eax, edx
  __asm imul edx, eax, 0x1000193
  __asm cmp ecx, esi
  __asm jb 0x10c7e178
  __asm pop edi
  __asm mov eax, edx
  __asm pop esi
  __asm ret 8
}



// Reference entry 10c7e2e0; body size 28 bytes.
#line 1 "ENTRY_10c7e2e0"

void __fastcall FUN_10c7e2e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10c7e5a0; body size 17 bytes.
#line 1 "ENTRY_10c7e5a0"

__declspec(naked) void FUN_10c7e5a0(void)

{
  __asm xor eax, eax
  __asm mov edx, 4
  __asm cmp dword ptr [ecx + 0x178], eax
  __asm cmove eax, edx
  __asm ret
}



// Reference entry 10c7e960; body size 16 bytes.
#line 1 "ENTRY_10c7e960"

__declspec(naked) void FUN_10c7e960(void)

{
  __asm mov ecx, dword ptr [ecx + 0x178]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x14]
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10c7fcd0; body size 40 bytes.
#line 1 "ENTRY_10c7fcd0"

__declspec(naked) void FUN_10c7fcd0(void)

{
  __asm mov edx, dword ptr [ecx + 0x10]
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, edx
  __asm ja 0x10c7fced
  __asm mov dword ptr [ecx + 0x10], eax
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm jb 0x10c7fce6
  __asm mov ecx, dword ptr [ecx]
  __asm mov byte ptr [ecx + eax], 0
  __asm ret 8
  __asm sub eax, edx
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_1006a9e7
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

__declspec(naked) void FUN_10c81d90(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6214]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x615c));
  return (SCStr *)(param_2);
}


// Reference entry 10c83a10; body size 51 bytes.
#line 1 "ENTRY_10c83a10"

__declspec(naked) void FUN_10c83a10(void)

{
  __asm push ecx
  __asm push esi
  __asm push offset LAB_1191b38c
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003a904
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x18], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 0x1c], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_1191b360
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10c83c30; body size 56 bytes.
#line 1 "ENTRY_10c83c30"

__declspec(naked) void FUN_10c83c30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm jne 0x10c83c66
  __asm cmp dword ptr [esi + 0x18], 0
  __asm je 0x10c83c66
  __asm cmp dword ptr [esi + 0x1c], 0
  __asm je 0x10c83c62
  __asm push offset LAB_1191b3ac
  __asm push 3
  __asm push offset LAB_1191b3d0
  __asm call LAB_100238df
  __asm mov ecx, dword ptr [esi + 0x1c]
  __asm add esp, 0xc
  __asm push esi
  __asm call LAB_10073b91
  __asm mov byte ptr [esi + 0x14], 1
  __asm pop esi
  __asm ret
}



// Reference entry 10c83c80; body size 56 bytes.
#line 1 "ENTRY_10c83c80"

__declspec(naked) void FUN_10c83c80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm je 0x10c83cb6
  __asm cmp dword ptr [esi + 0x18], 0
  __asm je 0x10c83cb6
  __asm cmp dword ptr [esi + 0x1c], 0
  __asm je 0x10c83cb2
  __asm push offset LAB_1191b3e8
  __asm push 3
  __asm push offset LAB_1191b3d0
  __asm call LAB_100238df
  __asm mov ecx, dword ptr [esi + 0x1c]
  __asm add esp, 0xc
  __asm push esi
  __asm call LAB_1007bed1
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm ret
}



// Reference entry 10c83ce0; body size 44 bytes.
#line 1 "ENTRY_10c83ce0"

__declspec(naked) void FUN_10c83ce0(void)

{
  __asm push ecx
  __asm push esi
  __asm push offset LAB_1191b490
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003a904
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x18], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_1191b464
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10c83f10; body size 27 bytes.
#line 1 "ENTRY_10c83f10"

__declspec(naked) void FUN_10c83f10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_10028d21
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm push eax
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0xc]
  __asm xor eax, eax
  __asm pop esi
  __asm ret 0xc
}



// Reference entry 10c83f90; body size 34 bytes.
#line 1 "ENTRY_10c83f90"

__declspec(naked) void FUN_10c83f90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm jne 0x10c83fb0
  __asm mov ecx, dword ptr [LAB_122e8a18]
  __asm test ecx, ecx
  __asm je 0x10c83fac
  __asm push esi
  __asm add ecx, 0x2c
  __asm call LAB_10070892
  __asm mov byte ptr [esi + 0x14], 1
  __asm pop esi
  __asm ret
}



// Reference entry 10c83fc0; body size 34 bytes.
#line 1 "ENTRY_10c83fc0"

__declspec(naked) void FUN_10c83fc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x14], 0
  __asm je 0x10c83fe0
  __asm mov ecx, dword ptr [LAB_122e8a18]
  __asm test ecx, ecx
  __asm je 0x10c83fdc
  __asm push esi
  __asm add ecx, 0x2c
  __asm call LAB_10065348
  __asm mov byte ptr [esi + 0x14], 0
  __asm pop esi
  __asm ret
}



// Reference entry 10c84410; body size 20 bytes.
#line 1 "ENTRY_10c84410"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c84410(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
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

__declspec(naked) void FUN_10c85140(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_10008bde
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10c85161
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10c85180; body size 40 bytes.
#line 1 "ENTRY_10c85180"

__declspec(naked) void FUN_10c85180(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_1005f1be
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10c851a1
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10c851c0; body size 60 bytes.
#line 1 "ENTRY_10c851c0"

__declspec(naked) void FUN_10c851c0(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_1003e86a
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10c851f2
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10070fbd
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x10c851f4
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10c87b70; body size 59 bytes.
#line 1 "ENTRY_10c87b70"

__declspec(naked) void FUN_10c87b70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10c87b9c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10c87b93
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1001be6e
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c88a30; body size 39 bytes.
#line 1 "ENTRY_10c88a30"

__declspec(naked) void FUN_10c88a30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x28
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c88a60; body size 39 bytes.
#line 1 "ENTRY_10c88a60"

__declspec(naked) void FUN_10c88a60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x28
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10c89fc0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_1002f88d
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0x10
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10c89ff0; body size 27 bytes.
#line 1 "ENTRY_10c89ff0"

__declspec(naked) void FUN_10c89ff0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_1004d266
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0x10
  __asm add esp, 8
  __asm ret 4
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

__declspec(naked) void FUN_10c8a510(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x28
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10c8a530; body size 25 bytes.
#line 1 "ENTRY_10c8a530"

__declspec(naked) void FUN_10c8a530(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x28
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10c8be80(void)

{
  __asm push ebx
  __asm push dword ptr [esp + 0xc]
  __asm lea ebx, [ecx - 0x1c]
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, ebx
  __asm call LAB_10062364
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, ebx
  __asm push dword ptr [esp + 0xc]
  __asm call LAB_100302e7
  __asm pop ebx
  __asm ret 8
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
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10c8d640; body size 50 bytes.
#line 1 "ENTRY_10c8d640"

__declspec(naked) void FUN_10c8d640(void)

{
  __asm mov ecx, dword ptr [ecx - 4]
  __asm push esi
  __asm test ecx, ecx
  __asm je 0x10c8d65f
  __asm call LAB_10058643
  __asm mov ecx, dword ptr [esp + 8]
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
  __asm mov ecx, dword ptr [esp + 8]
  __asm push 0
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c8da20; body size 20 bytes.
#line 1 "ENTRY_10c8da20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c8da20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 10c8da40; body size 20 bytes.
#line 1 "ENTRY_10c8da40"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c8da40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x4c));
  return (SCStr *)(param_2);
}


// Reference entry 10c8dce0; body size 50 bytes.
#line 1 "ENTRY_10c8dce0"

__declspec(naked) void FUN_10c8dce0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi - 4]
  __asm test ecx, ecx
  __asm je 0x10c8dd0c
  __asm call LAB_1006ffd2
  __asm test al, al
  __asm je 0x10c8dd0c
  __asm push dword ptr [esp + 8]
  __asm call LAB_10c8de80
  __asm mov ecx, dword ptr [esi - 4]
  __asm add esp, 4
  __asm push eax
  __asm call LAB_10076341
  __asm pop esi
  __asm ret 4
  __asm xor eax, eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c8de30; body size 31 bytes.
#line 1 "ENTRY_10c8de30"

__declspec(naked) void FUN_10c8de30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 6
  __asm ja 0x10c8de49
  __asm jmp dword ptr [eax*4 + LAB_10c8de50]
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
  __asm mov eax, 2
  __asm ret
}



// Reference entry 10c8de80; body size 38 bytes.
#line 1 "ENTRY_10c8de80"

__declspec(naked) void FUN_10c8de80(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x11
  __asm ja 0x10c8dea0
  __asm movzx eax, byte ptr [eax + LAB_10c8deb4]
  __asm jmp dword ptr [eax*4 + LAB_10c8dea8]
  __asm xor eax, eax
  __asm ret
  __asm mov eax, 1
  __asm ret
  __asm mov eax, 2
  __asm ret
}



// Reference entry 10c8dee0; body size 20 bytes.
#line 1 "ENTRY_10c8dee0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c8dee0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x40));
  return (SCStr *)(param_2);
}


// Reference entry 10c92d70; body size 59 bytes.
#line 1 "ENTRY_10c92d70"

__declspec(naked) void FUN_10c92d70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10c92d9c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10c92d93
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_1001be6e
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c92dc0; body size 60 bytes.
#line 1 "ENTRY_10c92dc0"

__declspec(naked) void FUN_10c92dc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1186d30c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10c92dee
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], esi
  __asm test esi, esi
  __asm je 0x10c92de7
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
}



// Reference entry 10c92e40; body size 35 bytes.
#line 1 "ENTRY_10c92e40"

__declspec(naked) void FUN_10c92e40(void)

{
  __asm mov ecx, dword ptr [ecx - 4]
  __asm test ecx, ecx
  __asm je 0x10c92e60
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm mov dword ptr [esp + 4], edx
  __asm jmp LAB_1001fde3
  __asm ret 4
}



// Reference entry 10c93210; body size 46 bytes.
#line 1 "ENTRY_10c93210"

__declspec(naked) void FUN_10c93210(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 3
  __asm ja 0x10c93238
  __asm jmp dword ptr [eax*4 + LAB_10c93240]
  __asm mov eax, offset LAB_1191b788
  __asm ret
  __asm mov eax, offset LAB_1191b794
  __asm ret
  __asm mov eax, offset LAB_1187b668
  __asm ret
  __asm mov eax, offset LAB_1191a200
  __asm ret
  __asm mov eax, offset LAB_1191b7a4
  __asm ret
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

__declspec(naked) void FUN_10c93f50(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c93f63
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_10058bed
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c93f79
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_10058bed
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_10058bed
  __asm add esp, 4
  __asm ret
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

__declspec(naked) void FUN_10c96350(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9635b
  __asm mov eax, dword ptr [eax + 4]
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm jne LAB_1007fb03
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10c96760; body size 24 bytes.
#line 1 "ENTRY_10c96760"

__declspec(naked) void FUN_10c96760(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9676a
  __asm mov eax, dword ptr [eax]
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm jne LAB_10001361
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10c97610; body size 25 bytes.
#line 1 "ENTRY_10c97610"

__declspec(naked) void FUN_10c97610(void)

{
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10c97623
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c97630; body size 20 bytes.
#line 1 "ENTRY_10c97630"

__declspec(naked) void FUN_10c97630(void)

{
  __asm lea eax, [ecx + 0x10]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1001e231
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10c97650; body size 26 bytes.
#line 1 "ENTRY_10c97650"

__declspec(naked) void FUN_10c97650(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9765b
  __asm mov eax, dword ptr [eax + 8]
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm jne LAB_1001dde0
  __asm or eax, 0xffffffff
  __asm ret
}



// Reference entry 10c97670; body size 26 bytes.
#line 1 "ENTRY_10c97670"

__declspec(naked) void FUN_10c97670(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9767b
  __asm mov eax, dword ptr [eax + 0xc]
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm jne LAB_1001e90c
  __asm or eax, 0xffffffff
  __asm ret
}



// Reference entry 10c97b50; body size 22 bytes.
#line 1 "ENTRY_10c97b50"

__declspec(naked) void FUN_10c97b50(void)

{
  __asm mov eax, dword ptr [ecx + 0x24]
  __asm test eax, eax
  __asm jns 0x10c97b65
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm jne LAB_1004bdfd
  __asm or eax, 0xffffffff
  __asm ret
}



// Reference entry 10c97b70; body size 53 bytes.
#line 1 "ENTRY_10c97b70"

__declspec(naked) void FUN_10c97b70(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c97b83
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_10003a35
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c97b99
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_10003a35
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_10003a35
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c980a0; body size 53 bytes.
#line 1 "ENTRY_10c980a0"

__declspec(naked) void FUN_10c980a0(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c980b3
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_1006990c
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c980c9
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_1006990c
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1006990c
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c98100; body size 53 bytes.
#line 1 "ENTRY_10c98100"

__declspec(naked) void FUN_10c98100(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c98113
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_1005a37b
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c98129
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_1005a37b
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1005a37b
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c986f0; body size 20 bytes.
#line 1 "ENTRY_10c986f0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c986f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 10c98710; body size 20 bytes.
#line 1 "ENTRY_10c98710"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c98710(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10c98c80; body size 20 bytes.
#line 1 "ENTRY_10c98c80"

SCStr * __thiscall Recovered_Bulk::m_FUN_10c98c80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10c98cb0; body size 25 bytes.
#line 1 "ENTRY_10c98cb0"

__declspec(naked) void FUN_10c98cb0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x44]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10c98cc3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10c99580; body size 53 bytes.
#line 1 "ENTRY_10c99580"

__declspec(naked) void FUN_10c99580(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c99593
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_1004d2ca
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c995a9
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_1004d2ca
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1004d2ca
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c99820; body size 53 bytes.
#line 1 "ENTRY_10c99820"

__declspec(naked) void FUN_10c99820(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c99833
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_1008b435
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c99849
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_1008b435
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1008b435
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c99870; body size 53 bytes.
#line 1 "ENTRY_10c99870"

__declspec(naked) void FUN_10c99870(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c99883
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_1002b70b
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c99899
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_1002b70b
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1002b70b
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c998c0; body size 53 bytes.
#line 1 "ENTRY_10c998c0"

__declspec(naked) void FUN_10c998c0(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c998d3
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_10081787
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c998e9
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_10081787
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_10081787
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c99dc0; body size 53 bytes.
#line 1 "ENTRY_10c99dc0"

__declspec(naked) void FUN_10c99dc0(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c99dd3
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_100991f2
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c99de9
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_100991f2
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_100991f2
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c9a420; body size 53 bytes.
#line 1 "ENTRY_10c9a420"

__declspec(naked) void FUN_10c9a420(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9a433
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_1004de23
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9a449
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_1004de23
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1004de23
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c9b060; body size 53 bytes.
#line 1 "ENTRY_10c9b060"

__declspec(naked) void FUN_10c9b060(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9b073
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_1000296e
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9b089
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_1000296e
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1000296e
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c9b1e0; body size 45 bytes.
#line 1 "ENTRY_10c9b1e0"

__declspec(naked) void FUN_10c9b1e0(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9b1eb
  __asm mov al, byte ptr [eax + 0x17]
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9b201
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_10083b22
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_10083b22
  __asm add esp, 4
  __asm ret
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

__declspec(naked) void FUN_10c9c3f0(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9c403
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_10038d48
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9c419
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_10038d48
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_10038d48
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c9c4d0; body size 59 bytes.
#line 1 "ENTRY_10c9c4d0"

__declspec(naked) void FUN_10c9c4d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 0x24]
  __asm test eax, eax
  __asm jns 0x10c9c4e6
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9c507
  __asm call LAB_1004bdfd
  __asm cmp eax, 0x17
  __asm jl 0x10c9c507
  __asm mov eax, dword ptr [esi + 0x24]
  __asm test eax, eax
  __asm jns 0x10c9c4fe
  __asm mov ecx, dword ptr [esi + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9c503
  __asm call LAB_1004bdfd
  __asm cmp eax, 0x18
  __asm je 0x10c9c507
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10c9c640; body size 36 bytes.
#line 1 "ENTRY_10c9c640"

__declspec(naked) void FUN_10c9c640(void)

{
  __asm mov eax, dword ptr [ecx + 0x24]
  __asm test eax, eax
  __asm jns 0x10c9c65d
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9c65a
  __asm call LAB_1004bdfd
  __asm cmp eax, 0x21
  __asm setge al
  __asm ret
  __asm or eax, 0xffffffff
  __asm cmp eax, 0x21
  __asm setge al
  __asm ret
}



// Reference entry 10c9c6e0; body size 53 bytes.
#line 1 "ENTRY_10c9c6e0"

__declspec(naked) void FUN_10c9c6e0(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9c6f3
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_100718dc
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9c709
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_100718dc
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_100718dc
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c9c980; body size 53 bytes.
#line 1 "ENTRY_10c9c980"

__declspec(naked) void FUN_10c9c980(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9c993
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_10055a8d
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9c9a9
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_10055a8d
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_10055a8d
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c9c9d0; body size 53 bytes.
#line 1 "ENTRY_10c9c9d0"

__declspec(naked) void FUN_10c9c9d0(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9c9e3
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_1008774a
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9c9f9
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_1008774a
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1008774a
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c9ca20; body size 53 bytes.
#line 1 "ENTRY_10c9ca20"

__declspec(naked) void FUN_10c9ca20(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9ca33
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_100505ec
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9ca49
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_100505ec
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_100505ec
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c9cc60; body size 53 bytes.
#line 1 "ENTRY_10c9cc60"

__declspec(naked) void FUN_10c9cc60(void)

{
  __asm mov eax, dword ptr [ecx + 0x6c]
  __asm test eax, eax
  __asm je 0x10c9cc73
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm call LAB_1006c03f
  __asm add esp, 4
  __asm ret
  __asm mov ecx, dword ptr [ecx + 0x70]
  __asm test ecx, ecx
  __asm je 0x10c9cc89
  __asm call LAB_10001361
  __asm push eax
  __asm call LAB_1006c03f
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1006c03f
  __asm add esp, 4
  __asm ret
}



// Reference entry 10c9cf50; body size 51 bytes.
#line 1 "ENTRY_10c9cf50"

__declspec(naked) void FUN_10c9cf50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp dword ptr [esi + 0x70], 0
  __asm je 0x10c9cf81
  __asm mov ecx, dword ptr [esi + 0x74]
  __asm test ecx, ecx
  __asm je 0x10c9cf73
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x70 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x74 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x70 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x74 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10ca32c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_10007a90
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 8], eax
  __asm _emit 0xc7 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ca3b90; body size 37 bytes.
#line 1 "ENTRY_10ca3b90"

__declspec(naked) void FUN_10ca3b90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x28]
  __asm test ecx, ecx
  __asm je 0x10ca3ba1
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x20]
  __asm jmp 0x10ca3ba3
  __asm xor eax, eax
  __asm cmp eax, dword ptr [esp + 8]
  __asm jne 0x10ca3bb1
  __asm lea ecx, [esi - 0x14]
  __asm call LAB_10092735
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ca3bc0; body size 61 bytes.
#line 1 "ENTRY_10ca3bc0"

__declspec(naked) void FUN_10ca3bc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10ca3bdc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10ca3bf2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ca3ee0; body size 37 bytes.
#line 1 "ENTRY_10ca3ee0"

__declspec(naked) void FUN_10ca3ee0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10ca3f01
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x58]
  __asm call eax
  __asm test al, al
  __asm jne 0x10ca3f01
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10ca3ff0; body size 37 bytes.
#line 1 "ENTRY_10ca3ff0"

__declspec(naked) void FUN_10ca3ff0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10ca4011
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x60]
  __asm call eax
  __asm test al, al
  __asm jne 0x10ca4011
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10ca4250; body size 45 bytes.
#line 1 "ENTRY_10ca4250"

__declspec(naked) void FUN_10ca4250(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10ca4273
  __asm call LAB_1004e08a
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10ca426c
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x10]
  __asm lea ecx, [esi + 0x10]
  __asm pop esi
  __asm jmp dword ptr [eax + 8]
}



// Reference entry 10ca42b0; body size 33 bytes.
#line 1 "ENTRY_10ca42b0"

__declspec(naked) void FUN_10ca42b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x54]
  __asm test ecx, ecx
  __asm je 0x10ca42cf
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10ca42cf
  __asm mov eax, dword ptr [esi + 0x50]
  __asm lea ecx, [esi + 0x50]
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop esi
  __asm ret
}



// Reference entry 10ca4b50; body size 42 bytes.
#line 1 "ENTRY_10ca4b50"

__declspec(naked) void FUN_10ca4b50(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca4b75
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_1191c350
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca4d90; body size 42 bytes.
#line 1 "ENTRY_10ca4d90"

__declspec(naked) void FUN_10ca4d90(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca4db5
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 8], esi
  __asm mov dword ptr [eax], LAB_1191c1a0
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca4dd0; body size 45 bytes.
#line 1 "ENTRY_10ca4dd0"

__declspec(naked) void FUN_10ca4dd0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca4df8
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1191c274
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca4e10; body size 45 bytes.
#line 1 "ENTRY_10ca4e10"

__declspec(naked) void FUN_10ca4e10(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca4e38
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1191c274
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca5270; body size 45 bytes.
#line 1 "ENTRY_10ca5270"

__declspec(naked) void FUN_10ca5270(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca5298
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1191c274
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca5370; body size 45 bytes.
#line 1 "ENTRY_10ca5370"

__declspec(naked) void FUN_10ca5370(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca5398
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1191c274
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca5ac0; body size 45 bytes.
#line 1 "ENTRY_10ca5ac0"

__declspec(naked) void FUN_10ca5ac0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca5ae8
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1191c274
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca5b00; body size 45 bytes.
#line 1 "ENTRY_10ca5b00"

__declspec(naked) void FUN_10ca5b00(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca5b28
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1191c274
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca5e80; body size 45 bytes.
#line 1 "ENTRY_10ca5e80"

__declspec(naked) void FUN_10ca5e80(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca5ea8
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1191c4e4
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca6210; body size 45 bytes.
#line 1 "ENTRY_10ca6210"

__declspec(naked) void FUN_10ca6210(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca6238
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1191c274
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca67f0; body size 45 bytes.
#line 1 "ENTRY_10ca67f0"

__declspec(naked) void FUN_10ca67f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10ca6818
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_1191c274
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10ca7710; body size 59 bytes.
#line 1 "ENTRY_10ca7710"

__declspec(naked) void FUN_10ca7710(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*4]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10ca7738
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10ca7745
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10ca7ef0; body size 34 bytes.
#line 1 "ENTRY_10ca7ef0"

__declspec(naked) uint FUN_10ca7ef0(void)

{
  __asm call LAB_1001c9c2
  __asm test eax, eax
  __asm je 0x10ca7f0f
  __asm call LAB_1001c9c2
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0xf4]
  __asm test eax, eax
  __asm jne 0x10ca7f0f
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
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

__declspec(naked) void FUN_10ca8b40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10ca8b5e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10ca8b5e
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x14]
  __asm xor eax, eax
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10ca92f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10ca930a
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm call eax
  __asm test al, al
  __asm jne 0x10ca930a
  __asm mov eax, dword ptr [esi + 0xc]
  __asm pop esi
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10ca9450; body size 26 bytes.
#line 1 "ENTRY_10ca9450"

__declspec(naked) void FUN_10ca9450(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xa0]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10ca9a70; body size 23 bytes.
#line 1 "ENTRY_10ca9a70"

__declspec(naked) void FUN_10ca9a70(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x7c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
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

__declspec(naked) void FUN_10cb1020(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10cb1043
  __asm call LAB_1004e08a
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10cb103c
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x10]
  __asm lea ecx, [esi + 0x10]
  __asm pop esi
  __asm jmp dword ptr [eax + 8]
}



// Reference entry 10cb1ab0; body size 24 bytes.
#line 1 "ENTRY_10cb1ab0"

__declspec(naked) void FUN_10cb1ab0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm test ecx, ecx
  __asm je 0x10cb1ac5
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x40]
  __asm call eax
  __asm test al, al
  __asm je 0x10cb1ac5
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10cb1c70; body size 39 bytes.
#line 1 "ENTRY_10cb1c70"

__declspec(naked) void FUN_10cb1c70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x9c]
  __asm call eax
  __asm test al, al
  __asm je 0x10cb1c93
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x6c]
  __asm call eax
  __asm test al, al
  __asm je 0x10cb1c93
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10cb2250; body size 63 bytes.
#line 1 "ENTRY_10cb2250"

__declspec(naked) void FUN_10cb2250(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm push offset LAB_1187c800
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10cb2289
  __asm push offset LAB_1187c820
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10cb2289
  __asm push offset LAB_1187c84c
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm jne 0x10cb2289
  __asm pop esi
  __asm ret 4
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cb2f70; body size 40 bytes.
#line 1 "ENTRY_10cb2f70"

__declspec(naked) void FUN_10cb2f70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x14]
  __asm call LAB_10068caf
  __asm mov ecx, dword ptr [esi + 0x14]
  __asm test ecx, ecx
  __asm je 0x10cb2f88
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [esi - 0xc]
  __asm pop esi
  __asm jmp LAB_10092735
}



// Reference entry 10cb3780; body size 61 bytes.
#line 1 "ENTRY_10cb3780"

__declspec(naked) void FUN_10cb3780(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm test ecx, ecx
  __asm je 0x10cb37bb
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esi + 0x14]
  __asm call dword ptr [eax + 0xcc]
  __asm mov ecx, dword ptr [esi + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x30]
  __asm call eax
  __asm test al, al
  __asm jne 0x10cb37bb
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x94]
  __asm call eax
  __asm test al, al
  __asm jne 0x10cb37bb
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_100928cf
  __asm pop esi
  __asm ret
}



// Reference entry 10cb3800; body size 45 bytes.
#line 1 "ENTRY_10cb3800"

__declspec(naked) void FUN_10cb3800(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10cb3823
  __asm call LAB_1004e08a
  __asm mov ecx, dword ptr [esi + 0x20]
  __asm test ecx, ecx
  __asm je 0x10cb381c
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x10]
  __asm lea ecx, [esi + 0x10]
  __asm pop esi
  __asm jmp dword ptr [eax + 8]
}



// Reference entry 10cb57c0; body size 20 bytes.
#line 1 "ENTRY_10cb57c0"

__declspec(naked) void FUN_10cb57c0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov ecx, dword ptr [edx + 0xd8]
  __asm test ecx, ecx
  __asm je 0x10cb57d3
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 4]
  __asm ret
}



// Reference entry 10cb5cc0; body size 37 bytes.
#line 1 "ENTRY_10cb5cc0"

__declspec(naked) void FUN_10cb5cc0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [LAB_122e8a18]
  __asm call LAB_10068872
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov byte ptr [esp + 4], al
  __asm push dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x228]
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10cb6550; body size 21 bytes.
#line 1 "ENTRY_10cb6550"

__declspec(naked) void FUN_10cb6550(void)

{
  __asm cmp dword ptr [ecx + 0xd0], 2
  __asm je 0x10cb6564
  __asm mov ecx, dword ptr [LAB_122e8a18]
  __asm jmp LAB_10090520
  __asm ret
}



// Reference entry 10cb68f0; body size 50 bytes.
#line 1 "ENTRY_10cb68f0"

__declspec(naked) void FUN_10cb68f0(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 8]
  __asm jne 0x10cb6906
  __asm call LAB_1006aac8
  __asm pop esi
  __asm ret 8
  __asm mov eax, dword ptr [ecx]
  __asm push 0x44e
  __asm call dword ptr [eax + 0x230]
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xb4]
  __asm pop esi
  __asm ret 8
}



// Reference entry 10cb6c40; body size 18 bytes.
#line 1 "ENTRY_10cb6c40"

__declspec(naked) void FUN_10cb6c40(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm jne 0x10cb6c4f
  __asm mov ecx, dword ptr [ecx + 8]
  __asm call LAB_1006688d
  __asm ret 8
}



// Reference entry 10cb6c60; body size 18 bytes.
#line 1 "ENTRY_10cb6c60"

__declspec(naked) void FUN_10cb6c60(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm jne 0x10cb6c6f
  __asm mov ecx, dword ptr [ecx + 8]
  __asm call LAB_1006aac8
  __asm ret 8
}



// Reference entry 10cb7580; body size 30 bytes.
#line 1 "ENTRY_10cb7580"

__declspec(naked) undefined4 FUN_10cb7580(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1001cba7
  __asm sub eax, 1
  __asm je 0x10cb759a
  __asm sub eax, 0x11
  __asm je 0x10cb759a
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10063fed
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10cb7a70; body size 41 bytes.
#line 1 "ENTRY_10cb7a70"

__declspec(naked) void FUN_10cb7a70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cb7a93
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cb7ab0; body size 41 bytes.
#line 1 "ENTRY_10cb7ab0"

__declspec(naked) void FUN_10cb7ab0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cb7ad3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cb7af0; body size 41 bytes.
#line 1 "ENTRY_10cb7af0"

__declspec(naked) void FUN_10cb7af0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cb7b13
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cb7b30; body size 41 bytes.
#line 1 "ENTRY_10cb7b30"

__declspec(naked) void FUN_10cb7b30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cb7b53
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cb8b30; body size 60 bytes.
#line 1 "ENTRY_10cb8b30"

__declspec(naked) void FUN_10cb8b30(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov edi, ecx
  __asm push eax
  __asm call LAB_1004e229
  __asm mov esi, dword ptr [esp + 0x10]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10cb8b62
  __asm mov ecx, dword ptr [esp + 0x18]
  __asm lea edx, [esi + 0x10]
  __asm push edx
  __asm call LAB_10070fbd
  __asm test al, al
  __asm mov eax, esi
  __asm je 0x10cb8b64
  __asm mov eax, dword ptr [edi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
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

__declspec(naked) void FUN_10cb9840(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
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

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10cbd350(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
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

__declspec(naked) void FUN_10cbd390(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm add ecx, 4
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [eax]
  __asm call LAB_10cbcff0
  __asm ret 8
}



// Reference entry 10cbd3c0; body size 19 bytes.
#line 1 "ENTRY_10cbd3c0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10cbd3c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
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

__declspec(naked) void FUN_10cbd9d0(void)

{
  __asm cmp dword ptr [esp + 8], 0
  __asm je 0x10cbd9e4
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 0xc
  __asm mov ecx, dword ptr [ecx + 0x54]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10cbd9f7
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 0xc
}



// Reference entry 10cbda20; body size 20 bytes.
#line 1 "ENTRY_10cbda20"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cbda20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x4c));
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

__declspec(naked) void FUN_10cbda80(void)

{
  __asm xor eax, eax
  __asm cmp dword ptr [esp + 4], 5
  __asm je 0x10cbda8f
  __asm cmp dword ptr [ecx + 0x5c], eax
  __asm setne al
  __asm ret 4
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
    ((SCVtbl_14_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  thunk_FUN_112af4e0("cloud_discovery",1, "Aborting cloud discovery : Failed to refresh the auth token");
  *(undefined4*)(param_1 + 0x504) = (undefined4)(0);
  return;
}


// Reference entry 10cc0cd0; body size 41 bytes.
#line 1 "ENTRY_10cc0cd0"

__declspec(naked) void FUN_10cc0cd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cc0cf3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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
  thunk_FUN_111c0af0<>();
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x58));
  return (SCStr *)(param_2);
}


// Reference entry 10cc23f0; body size 35 bytes.
#line 1 "ENTRY_10cc23f0"

__declspec(naked) void FUN_10cc23f0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1fd1
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10cc2440; body size 23 bytes.
#line 1 "ENTRY_10cc2440"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cc2440(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x50));
  return (SCStr *)(param_2);
}


// Reference entry 10cc2830; body size 23 bytes.
#line 1 "ENTRY_10cc2830"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cc2830(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x54));
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x38));
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

__declspec(naked) void FUN_10ccf340(void)

{
  __asm push ebx
  __asm mov ebx, ecx
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebx + 0x1c]
  __asm mov esi, dword ptr [ebx + 0x20]
  __asm cmp edi, esi
  __asm je 0x10ccf368
  __asm nop
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm add edi, 4
  __asm cmp edi, esi
  __asm jne 0x10ccf350
  __asm mov eax, dword ptr [ebx + 0x1c]
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [ebx + 0x20], eax
  __asm pop ebx
  __asm ret
  __asm mov dword ptr [ebx + 0x20], edi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 10cd3610; body size 17 bytes.
#line 1 "ENTRY_10cd3610"

__declspec(naked) void FUN_10cd3610(void)

{
  __asm mov ecx, dword ptr [ecx + 0x623c]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 10cd3630; body size 17 bytes.
#line 1 "ENTRY_10cd3630"

__declspec(naked) void FUN_10cd3630(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6228]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 10cd3650; body size 17 bytes.
#line 1 "ENTRY_10cd3650"

__declspec(naked) void FUN_10cd3650(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6234]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 10cd3670; body size 17 bytes.
#line 1 "ENTRY_10cd3670"

__declspec(naked) void FUN_10cd3670(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6234]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 10cd36f0; body size 17 bytes.
#line 1 "ENTRY_10cd36f0"

__declspec(naked) void FUN_10cd36f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6238]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 10cd37b0; body size 31 bytes.
#line 1 "ENTRY_10cd37b0"

__declspec(naked) void FUN_10cd37b0(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 0x6260]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10cd37c9
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cd3820; body size 25 bytes.
#line 1 "ENTRY_10cd3820"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3820(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x625c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a90; body size 25 bytes.
#line 1 "ENTRY_10cd3a90"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3a90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6160));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3c40; body size 31 bytes.
#line 1 "ENTRY_10cd3c40"

__declspec(naked) void FUN_10cd3c40(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 0x6274]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10cd3c59
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10cd4010(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm mov ecx, dword ptr [esp + 8]
  __asm cmp ecx, dword ptr [eax + 0x617c]
  __asm jge 0x10cd403c
  __asm mov ecx, dword ptr [eax + ecx*8 + 0x6164]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10cd4036
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
}



// Reference entry 10cd7cb0; body size 31 bytes.
#line 1 "ENTRY_10cd7cb0"

__declspec(naked) void FUN_10cd7cb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm test ecx, ecx
  __asm je 0x10cd7cc3
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esi + 4]
  __asm call dword ptr [eax + 0x38]
  __asm lea ecx, [esi - 0x1c]
  __asm call LAB_10012332
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cd9af0; body size 43 bytes.
#line 1 "ENTRY_10cd9af0"

__declspec(naked) void FUN_10cd9af0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esi + 0x34], eax
  __asm mov ecx, dword ptr [esi + 0x2c]
  __asm test ecx, ecx
  __asm je 0x10cd9b0e
  __asm mov edx, dword ptr [ecx]
  __asm push eax
  __asm lea eax, [esi + 8]
  __asm push eax
  __asm call dword ptr [edx + 4]
  __asm mov dword ptr [esi + 0x30], eax
  __asm mov eax, dword ptr [esi + 0x44]
  __asm lea ecx, [esi + 0x44]
  __asm call dword ptr [eax + 0x14]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cdaa70; body size 44 bytes.
#line 1 "ENTRY_10cdaa70"

__declspec(naked) void FUN_10cdaa70(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 0x1c]
  __asm push edi
  __asm mov edi, dword ptr [ecx + 0x20]
  __asm cmp esi, edi
  __asm je 0x10cdaa97
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x14]
  __asm lea ebx, [ecx + 8]
  __asm mov ecx, dword ptr [esi]
  __asm push ebp
  __asm push ebx
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add esi, 4
  __asm cmp esi, edi
  __asm jne 0x10cdaa85
  __asm pop ebp
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cdb1d0; body size 41 bytes.
#line 1 "ENTRY_10cdb1d0"

__declspec(naked) void FUN_10cdb1d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cdb1f3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cdb210; body size 41 bytes.
#line 1 "ENTRY_10cdb210"

__declspec(naked) void FUN_10cdb210(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cdb233
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cdb250; body size 41 bytes.
#line 1 "ENTRY_10cdb250"

__declspec(naked) void FUN_10cdb250(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cdb273
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10cdc070(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10cdc08f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10cdc0a0; body size 33 bytes.
#line 1 "ENTRY_10cdc0a0"

__declspec(naked) void FUN_10cdc0a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10cdc0bf
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10cdc3e0; body size 37 bytes.
#line 1 "ENTRY_10cdc3e0"

__declspec(naked) void FUN_10cdc3e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10cdc3ff
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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
  thunk_FUN_111c0af0<>();
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
  thunk_FUN_111c0af0<>();
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
  thunk_FUN_111c0af0<>();
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

__declspec(naked) void FUN_10cdcc40(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10cdcc5f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10cdd550; body size 28 bytes.
#line 1 "ENTRY_10cdd550"

__declspec(naked) void FUN_10cdd550(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10cdd56a
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm pop esi
  __asm ret
}



// Reference entry 10cddac0; body size 20 bytes.
#line 1 "ENTRY_10cddac0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cddac0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SwfStr *)(param_1 + 0x44));
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

__declspec(naked) void FUN_10cddc50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_10005b32
  __asm push esi
  __asm lea ecx, [eax + 0x20]
  __asm call LAB_10070892
  __asm pop esi
  __asm ret
}



// Reference entry 10cddc70; body size 19 bytes.
#line 1 "ENTRY_10cddc70"

__declspec(naked) void FUN_10cddc70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_10005b32
  __asm push esi
  __asm lea ecx, [eax + 0x20]
  __asm call LAB_10065348
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10cdf040(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 9
  __asm lea eax, [esi + 0xd7d0]
  __asm push eax
  __asm push offset LAB_1192092c
  __asm lea ecx, [esi + 0xc108]
  __asm call LAB_1002faea
  __asm mov ecx, eax
  __asm call LAB_1007eb95
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}



// Reference entry 10cdf070; body size 38 bytes.
#line 1 "ENTRY_10cdf070"

__declspec(naked) void FUN_10cdf070(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm push offset LAB_11920854
  __asm lea ecx, [esi + 0xa988]
  __asm call LAB_1007fff4
  __asm push dword ptr [esp + 8]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0xc]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cdf0a0; body size 38 bytes.
#line 1 "ENTRY_10cdf0a0"

__declspec(naked) void FUN_10cdf0a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm push offset LAB_11920d5c
  __asm lea ecx, [esi + 0xa988]
  __asm call LAB_1007fff4
  __asm push dword ptr [esp + 8]
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0xc]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cdf0d0; body size 35 bytes.
#line 1 "ENTRY_10cdf0d0"

__declspec(naked) void FUN_10cdf0d0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm mov byte ptr [esi + 0x3d], 1
  __asm push offset LAB_1187b2a8
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10cdf240; body size 61 bytes.
#line 1 "ENTRY_10cdf240"

__declspec(naked) void FUN_10cdf240(void)

{
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push 1
  __asm mov ebx, ecx
  __asm call LAB_10095c14
  __asm add esp, 4
  __asm lea esi, [ebx - 4]
  __asm mov edi, eax
  __asm push esi
  __asm lea ecx, [edi + 0xc4]
  __asm call LAB_1005ba00
  __asm push 0
  __asm push offset LAB_1189bdd4
  __asm push offset LAB_118835c0
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_1003619c
  __asm pop edi
  __asm pop esi
  __asm mov dword ptr [ebx + 0x20], eax
  __asm pop ebx
  __asm ret 4
}



// Reference entry 10cdfa20; body size 61 bytes.
#line 1 "ENTRY_10cdfa20"

__declspec(naked) void FUN_10cdfa20(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_116f7e10
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005e1b5
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
}



// Reference entry 10cdfcc0; body size 25 bytes.
#line 1 "ENTRY_10cdfcc0"

__declspec(naked) undefined4 FUN_10cdfcc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1007b4c2
  __asm cmp eax, 6
  __asm jne 0x10cdfcd5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10064a3d
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10cdfce0; body size 25 bytes.
#line 1 "ENTRY_10cdfce0"

__declspec(naked) undefined4 FUN_10cdfce0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1007b4c2
  __asm cmp eax, 2
  __asm jne 0x10cdfcf5
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10024a55
  __asm xor eax, eax
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10cdfda0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm test esi, esi
  __asm je 0x10cdfdc2
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm jne 0x10cdfdc2
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm test eax, eax
  __asm je 0x10cdfdd8
  __asm add eax, 4
  __asm push eax
  __asm call LAB_10066e8c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10cdffe0; body size 33 bytes.
#line 1 "ENTRY_10cdffe0"

__declspec(naked) void FUN_10cdffe0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_1187ae7c
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10cdfffd
  __asm mov ecx, dword ptr [esi + 8]
  __asm call LAB_10093bc1
  __asm pop esi
  __asm ret 8
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
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10ce0060; body size 18 bytes.
#line 1 "ENTRY_10ce0060"

__declspec(naked) void FUN_10ce0060(void)

{
  __asm mov ecx, dword ptr [ecx + 0x34]
  __asm test ecx, ecx
  __asm je 0x10ce006f
  __asm push 0
  __asm call LAB_10036c5a
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10ce07c0; body size 17 bytes.
#line 1 "ENTRY_10ce07c0"

__declspec(naked) void FUN_10ce07c0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187ae7c
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10ce0ad0; body size 46 bytes.
#line 1 "ENTRY_10ce0ad0"

__declspec(naked) void FUN_10ce0ad0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi + 0x34]
  __asm test esi, esi
  __asm je 0x10ce0af9
  __asm push 0
  __asm mov ecx, esi
  __asm call LAB_10036c5a
  __asm test eax, eax
  __asm je 0x10ce0af9
  __asm push 1
  __asm push dword ptr [esp + 0x10]
  __asm mov ecx, edi
  __asm push 1
  __asm push eax
  __asm push esi
  __asm call LAB_1000afab
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ce0d90; body size 41 bytes.
#line 1 "ENTRY_10ce0d90"

__declspec(naked) void FUN_10ce0d90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10ce0db3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ce0dd0; body size 41 bytes.
#line 1 "ENTRY_10ce0dd0"

__declspec(naked) void FUN_10ce0dd0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10ce0df3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10ce1a40(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm mov ecx, offset LAB_1186d2ee
  __asm mov eax, dword ptr [eax + 0x44]
  __asm test eax, eax
  __asm cmovne ecx, eax
  __asm push ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10ce22e0; body size 41 bytes.
#line 1 "ENTRY_10ce22e0"

__declspec(naked) void FUN_10ce22e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10ce2303
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10ce3280(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10ce32ac
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10ce32a3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10015532
  __asm pop edi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10ce3d50(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10ce3d79
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10ce3d86
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
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

__declspec(naked) void FUN_10ce4000(void)

{
  __asm mov eax, dword ptr [ecx + 0x88]
  __asm mov edx, dword ptr [ecx + 0x84]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10ce4026
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10ce4039
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_10ce42a0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1b0
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10ce4550; body size 24 bytes.
#line 1 "ENTRY_10ce4550"

__declspec(naked) void FUN_10ce4550(void)

{
  __asm mov eax, dword ptr [ecx + 0x88]
  __asm sub eax, dword ptr [ecx + 0x84]
  __asm _emit 0xa9 __asm _emit 0xf8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm je LAB_10078baf
  __asm ret
}



// Reference entry 10ce4570; body size 28 bytes.
#line 1 "ENTRY_10ce4570"

__declspec(naked) void FUN_10ce4570(void)

{
  __asm push esi
  __asm lea esi, [ecx + 0x84]
  __asm push esi
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_1007b9c2
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10ce4c60; body size 59 bytes.
#line 1 "ENTRY_10ce4c60"

__declspec(naked) void FUN_10ce4c60(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10ce4c8c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10ce4c83
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10015532
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ce5cd0; body size 40 bytes.
#line 1 "ENTRY_10ce5cd0"

__declspec(naked) void FUN_10ce5cd0(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x14]
  __asm push eax
  __asm call LAB_100339bf
  __asm mov eax, dword ptr [eax + 4]
  __asm test eax, eax
  __asm jne 0x10ce5cf1
  __asm mov eax, dword ptr [esi + 4]
  __asm pop esi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10ce64d0; body size 55 bytes.
#line 1 "ENTRY_10ce64d0"

__declspec(naked) void FUN_10ce64d0(void)

{
  __asm sub esp, 8
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esp + 0x14]
  __asm call LAB_100586b6
  __asm push eax
  __asm push dword ptr [esp + 0x18]
  __asm lea eax, [esp + 0xc]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_100339bf
  __asm mov ecx, dword ptr [eax + 4]
  __asm mov eax, dword ptr [esp + 0x10]
  __asm test ecx, ecx
  __asm jne 0x10ce64fe
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [eax], ecx
  __asm pop edi
  __asm add esp, 8
  __asm ret 8
}



// Reference entry 10ce66c0; body size 41 bytes.
#line 1 "ENTRY_10ce66c0"

__declspec(naked) void FUN_10ce66c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10ce66e3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ce6700; body size 41 bytes.
#line 1 "ENTRY_10ce6700"

__declspec(naked) void FUN_10ce6700(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10ce6723
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ce6740; body size 41 bytes.
#line 1 "ENTRY_10ce6740"

__declspec(naked) void FUN_10ce6740(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10ce6763
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ce6780; body size 24 bytes.
#line 1 "ENTRY_10ce6780"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce6780(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6a80; body size 39 bytes.
#line 1 "ENTRY_10ce6a80"

__declspec(naked) void FUN_10ce6a80(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x2c
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10ce71c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ce71df
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10ce71f0; body size 33 bytes.
#line 1 "ENTRY_10ce71f0"

__declspec(naked) void FUN_10ce71f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ce720f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10ce73c0; body size 33 bytes.
#line 1 "ENTRY_10ce73c0"

__declspec(naked) void FUN_10ce73c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ce73df
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10ce73f0; body size 33 bytes.
#line 1 "ENTRY_10ce73f0"

__declspec(naked) void FUN_10ce73f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ce740f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10ce7740(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ce775f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ce7770; body size 37 bytes.
#line 1 "ENTRY_10ce7770"

__declspec(naked) void FUN_10ce7770(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ce778f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ce7820; body size 27 bytes.
#line 1 "ENTRY_10ce7820"

__declspec(naked) void FUN_10ce7820(void)

{
  __asm sub esp, 8
  __asm lea eax, [esp]
  __asm push dword ptr [esp + 0xc]
  __asm push eax
  __asm call LAB_10031985
  __asm mov eax, dword ptr [eax]
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
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

__declspec(naked) void FUN_10ce7bf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x2c
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10ce83a0; body size 33 bytes.
#line 1 "ENTRY_10ce83a0"

__declspec(naked) void FUN_10ce83a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ce83bf
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10ce83d0; body size 33 bytes.
#line 1 "ENTRY_10ce83d0"

__declspec(naked) void FUN_10ce83d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ce83ef
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10ce9420(void)

{
  __asm sub esp, 8
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm call LAB_100586b6
  __asm push eax
  __asm push dword ptr [esp + 0x14]
  __asm lea eax, [esp + 0xc]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_100339bf
  __asm mov eax, dword ptr [esp + 8]
  __asm pop edi
  __asm test eax, eax
  __asm je 0x10ce9452
  __asm add eax, 0xc
  __asm add esp, 8
  __asm ret 4
  __asm push offset LAB_119168cc
  __asm call LAB_1148a060
}



// Reference entry 10ce9470; body size 19 bytes.
#line 1 "ENTRY_10ce9470"

__declspec(naked) void FUN_10ce9470(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm call LAB_100586b6
  __asm and eax, dword ptr [esi + 0x18]
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10cee1c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10cee1ec
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10cee1e3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10001d3e
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cee310; body size 41 bytes.
#line 1 "ENTRY_10cee310"

__declspec(naked) void FUN_10cee310(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cee333
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cee720; body size 60 bytes.
#line 1 "ENTRY_10cee720"

__declspec(naked) void FUN_10cee720(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea esi, [edi + 8]
  __asm push esi
  __asm mov dword ptr [edi], LAB_11921d48
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_10038046
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov ecx, esi
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_10038b4f
  __asm mov dword ptr [edi], LAB_11881068
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10cee8d0; body size 33 bytes.
#line 1 "ENTRY_10cee8d0"

__declspec(naked) void FUN_10cee8d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10cee8ef
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10cee900; body size 33 bytes.
#line 1 "ENTRY_10cee900"

__declspec(naked) void FUN_10cee900(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10cee91f
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10ceeb90; body size 37 bytes.
#line 1 "ENTRY_10ceeb90"

__declspec(naked) void FUN_10ceeb90(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ceebaf
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10ceee20(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi]
  __asm push dword ptr [esi + 4]
  __asm push edi
  __asm call LAB_10002bad
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 4], esi
  __asm mov dword ptr [esi], esi
  __asm mov dword ptr [esi + 8], esi
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [edx], ecx
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [edi + 4], eax
  __asm pop edi
  __asm mov dword ptr [edx + 4], ecx
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ceeea0; body size 33 bytes.
#line 1 "ENTRY_10ceeea0"

__declspec(naked) void FUN_10ceeea0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ceeebf
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10cefaa0; body size 37 bytes.
#line 1 "ENTRY_10cefaa0"

__declspec(naked) void FUN_10cefaa0(void)

{
  __asm mov eax, dword ptr [ecx + 0x110]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [ecx + 0x114]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10cefabf
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cf0930; body size 59 bytes.
#line 1 "ENTRY_10cf0930"

__declspec(naked) void FUN_10cf0930(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10cf095c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10cf0953
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10001d3e
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cf1010; body size 22 bytes.
#line 1 "ENTRY_10cf1010"

__declspec(naked) void FUN_10cf1010(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10cf1023
  __asm push 0
  __asm push eax
  __asm add ecx, 0x10
  __asm call LAB_10037bc8
  __asm ret 4
}



// Reference entry 10cf1030; body size 23 bytes.
#line 1 "ENTRY_10cf1030"

__declspec(naked) void FUN_10cf1030(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10cf1044
  __asm mov dword ptr [esp + 4], eax
  __asm add ecx, 0x10
  __asm jmp LAB_100373d5
  __asm ret 4
}



// Reference entry 10cf2cc0; body size 41 bytes.
#line 1 "ENTRY_10cf2cc0"

__declspec(naked) void FUN_10cf2cc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cf2ce3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cf2d00; body size 41 bytes.
#line 1 "ENTRY_10cf2d00"

__declspec(naked) void FUN_10cf2d00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cf2d23
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10cf3370(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10cf3390; body size 19 bytes.
#line 1 "ENTRY_10cf3390"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10cf3390(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
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

__declspec(naked) void FUN_10cf33f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm add ecx, 4
  __asm push dword ptr [eax]
  __asm call LAB_10cf1ee0
  __asm ret 4
}



// Reference entry 10cf3410; body size 17 bytes.
#line 1 "ENTRY_10cf3410"

__declspec(naked) void FUN_10cf3410(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm add ecx, 4
  __asm push dword ptr [eax]
  __asm call LAB_10cf2340
  __asm ret 4
}



// Reference entry 10cf3450; body size 19 bytes.
#line 1 "ENTRY_10cf3450"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10cf3450(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10cf3470; body size 19 bytes.
#line 1 "ENTRY_10cf3470"

__declspec(naked) void FUN_10cf3470(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_1192263c
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10cf34e0; body size 27 bytes.
#line 1 "ENTRY_10cf34e0"

__declspec(naked) void FUN_10cf34e0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10cf34f5
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cf35c0; body size 22 bytes.
#line 1 "ENTRY_10cf35c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf35c0(SCStr *param_2)
{
  int *param_1 = (int *)this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*param_1 + 0x14));
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
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
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
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
    }
  }
  return;
}


// Reference entry 10cf3940; body size 31 bytes.
#line 1 "ENTRY_10cf3940"

__declspec(naked) void FUN_10cf3940(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm mov eax, dword ptr [esp + 4]
  __asm add ecx, 8
  __asm cmp ecx, eax
  __asm je 0x10cf395c
  __asm mov byte ptr [esp + 4], 0
  __asm push dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_100503c6
  __asm ret 4
}



// Reference entry 10cf3fe0; body size 41 bytes.
#line 1 "ENTRY_10cf3fe0"

__declspec(naked) void FUN_10cf3fe0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cf4003
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cf4330; body size 39 bytes.
#line 1 "ENTRY_10cf4330"

__declspec(naked) void FUN_10cf4330(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x10]
  __asm call LAB_100051fa
  __asm lea ecx, [esi + 8]
  __asm call LAB_100051fa
  __asm mov dword ptr [esi], LAB_11881068
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm pop esi
  __asm ret
}



// Reference entry 10cf4530; body size 61 bytes.
#line 1 "ENTRY_10cf4530"

__declspec(naked) void FUN_10cf4530(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x10]
  __asm call LAB_100051fa
  __asm lea ecx, [esi + 8]
  __asm call LAB_100051fa
  __asm mov dword ptr [esi], LAB_11881068
  __asm dec dword ptr [LAB_121a0e68]
  __asm test byte ptr [esp + 8], 1
  __asm mov dword ptr [esi], LAB_1186d2f4
  __asm je 0x10cf4567
  __asm push 0x18
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10cf49d0; body size 52 bytes.
#line 1 "ENTRY_10cf49d0"

__declspec(naked) void FUN_10cf49d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_10005f9c
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 8], eax
  __asm _emit 0xc7 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 8
}



// Reference entry 10cf4ac0; body size 22 bytes.
#line 1 "ENTRY_10cf4ac0"

__declspec(naked) void FUN_10cf4ac0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx]
  __asm add ecx, 8
  __asm mov eax, dword ptr [eax]
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_10026283
  __asm ret 4
}



// Reference entry 10cf4ae0; body size 29 bytes.
#line 1 "ENTRY_10cf4ae0"

__declspec(naked) void FUN_10cf4ae0(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm lea eax, [esp + 4]
  __asm sub esp, 8
  __asm add ecx, 8
  __asm push eax
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_10037812
  __asm add esp, 8
  __asm ret 4
}



// Reference entry 10cf5110; body size 29 bytes.
#line 1 "ENTRY_10cf5110"

__declspec(naked) void FUN_10cf5110(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm lea eax, [esp + 4]
  __asm sub esp, 8
  __asm add ecx, 0x10
  __asm push eax
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm call LAB_10037812
  __asm add esp, 8
  __asm ret 4
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
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
    }
  }
  return;
}


// Reference entry 10cf53c0; body size 18 bytes.
#line 1 "ENTRY_10cf53c0"

__declspec(naked) void FUN_10cf53c0(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm add ecx, 0x10
  __asm call LAB_1003639f
  __asm ret 4
}



// Reference entry 10cf5610; body size 41 bytes.
#line 1 "ENTRY_10cf5610"

__declspec(naked) void FUN_10cf5610(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cf5633
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10cf6150(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x2c]
  __asm test eax, eax
  __asm mov ecx, offset LAB_1186d2ee
  __asm cmovne ecx, eax
  __asm push ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_10cf65a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10cf65c3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x4c));
  return (SCStr *)(param_2);
}


// Reference entry 10cf7ae0; body size 25 bytes.
#line 1 "ENTRY_10cf7ae0"

__declspec(naked) void FUN_10cf7ae0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x5c]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10cf7af3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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
    ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
    return (SCStr *)(param_2);
  }
  ((SCVtbl_14_1*)(param_1))->v((int)(param_2));
  return (SCStr *)(param_2);
}


// Reference entry 10cf7f90; body size 20 bytes.
#line 1 "ENTRY_10cf7f90"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf7f90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10cf7fb0; body size 23 bytes.
#line 1 "ENTRY_10cf7fb0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf7fb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x8c));
  return (SCStr *)(param_2);
}


// Reference entry 10cf88e0; body size 20 bytes.
#line 1 "ENTRY_10cf88e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf88e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10cf8900; body size 20 bytes.
#line 1 "ENTRY_10cf8900"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cf8900(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x44));
  return (SCStr *)(param_2);
}


// Reference entry 10cf8b00; body size 19 bytes.
#line 1 "ENTRY_10cf8b00"

__declspec(naked) void FUN_10cf8b00(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10cf8b0e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x10]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
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

__declspec(naked) void FUN_10cf9070(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10cf9084
  __asm mov dword ptr [esp + 4], eax
  __asm add ecx, 0x18
  __asm jmp LAB_100373d5
  __asm ret 4
}



// Reference entry 10cf9740; body size 20 bytes.
#line 1 "ENTRY_10cf9740"

__declspec(naked) void FUN_10cf9740(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10cf974c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10cf9c70; body size 17 bytes.
#line 1 "ENTRY_10cf9c70"

__declspec(naked) void FUN_10cf9c70(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10cf9c7c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10cf9c90; body size 63 bytes.
#line 1 "ENTRY_10cf9c90"

__declspec(naked) void FUN_10cf9c90(void)

{
  __asm mov eax, dword ptr [ecx + 0x8c]
  __asm mov edx, dword ptr [ecx + 0x88]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10cf9cb6
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10cf9cc9
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_10cf9f50(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1b0
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10cfa090; body size 17 bytes.
#line 1 "ENTRY_10cfa090"

__declspec(naked) void FUN_10cfa090(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10cfa09c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10cfa2c0; body size 19 bytes.
#line 1 "ENTRY_10cfa2c0"

__declspec(naked) void FUN_10cfa2c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10cfa2ce
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10cfb1d0; body size 19 bytes.
#line 1 "ENTRY_10cfb1d0"

__declspec(naked) void FUN_10cfb1d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10cfb1de
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
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

__declspec(naked) void FUN_10cfbe60(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x60]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10cfc100; body size 63 bytes.
#line 1 "ENTRY_10cfc100"

__declspec(naked) void FUN_10cfc100(void)

{
  __asm mov eax, dword ptr [ecx + 0x90]
  __asm mov edx, dword ptr [ecx + 0x8c]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10cfc126
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10cfc139
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_10cfc1c0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x6c]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10cfc400; body size 23 bytes.
#line 1 "ENTRY_10cfc400"

__declspec(naked) void FUN_10cfc400(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x48]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10cfc440; body size 26 bytes.
#line 1 "ENTRY_10cfc440"

__declspec(naked) void FUN_10cfc440(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x84]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10cfc460; body size 35 bytes.
#line 1 "ENTRY_10cfc460"

__declspec(naked) void FUN_10cfc460(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1b0
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10cfc4b0; body size 20 bytes.
#line 1 "ENTRY_10cfc4b0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10cfc4b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10cfc4e0; body size 23 bytes.
#line 1 "ENTRY_10cfc4e0"

__declspec(naked) void FUN_10cfc4e0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x54]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10cfc510; body size 23 bytes.
#line 1 "ENTRY_10cfc510"

__declspec(naked) void FUN_10cfc510(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 8
}



// Reference entry 10cfdf80; body size 28 bytes.
#line 1 "ENTRY_10cfdf80"

void __fastcall FUN_10cfdf80(int *param_1)

{
  if ((char)param_1[0x10] == '\0') {
    thunk_FUN_10cfd160();
    ((SCVtbl_69_1*)(param_1))->v((int)(0));
  }
  return;
}


// Reference entry 10cfe140; body size 29 bytes.
#line 1 "ENTRY_10cfe140"

__declspec(naked) void FUN_10cfe140(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm sub esp, 8
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x10 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x04 __asm _emit 0x24
  __asm push dword ptr [esp + 0xc]
  __asm call dword ptr [eax + 0x34]
  __asm ret 0xc
}



// Reference entry 10d00ad0; body size 41 bytes.
#line 1 "ENTRY_10d00ad0"

__declspec(naked) void FUN_10d00ad0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d00af3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d00b10; body size 41 bytes.
#line 1 "ENTRY_10d00b10"

__declspec(naked) void FUN_10d00b10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d00b33
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d00b50; body size 41 bytes.
#line 1 "ENTRY_10d00b50"

__declspec(naked) void FUN_10d00b50(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d00b73
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d00bc0; body size 41 bytes.
#line 1 "ENTRY_10d00bc0"

__declspec(naked) void FUN_10d00bc0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d00be3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d00c00; body size 24 bytes.
#line 1 "ENTRY_10d00c00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d00c00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d017b0; body size 60 bytes.
#line 1 "ENTRY_10d017b0"

__declspec(naked) void FUN_10d017b0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm lea esi, [edi + 8]
  __asm push esi
  __asm mov dword ptr [edi], LAB_1192428c
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_1007b9c2
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov ecx, esi
  __asm mov dword ptr [esi + 4], eax
  __asm call LAB_10099580
  __asm mov dword ptr [edi], LAB_11881068
  __asm dec dword ptr [LAB_121a0e68]
  __asm mov dword ptr [edi], LAB_1186d2f4
  __asm pop edi
  __asm pop esi
  __asm ret
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

__declspec(naked) void FUN_10d03040(void)

{
  __asm lea eax, [ecx + 0x124]
  __asm push eax
  __asm call LAB_100354f4
  __asm add esp, 4
  __asm ret
}



// Reference entry 10d030e0; body size 61 bytes.
#line 1 "ENTRY_10d030e0"

__declspec(naked) void FUN_10d030e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10d030fc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d03112
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d03130; body size 59 bytes.
#line 1 "ENTRY_10d03130"

__declspec(naked) void FUN_10d03130(void)

{
  __asm mov edx, dword ptr [ecx + 0xc]
  __asm cmp edx, dword ptr [ecx + 0x10]
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm je 0x10d0315b
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm mov dword ptr [edx], eax
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [edx + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10d03153
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm push edx
  __asm call LAB_10015532
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d03290; body size 33 bytes.
#line 1 "ENTRY_10d03290"

__declspec(naked) void FUN_10d03290(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_100532dd
  __asm test al, al
  __asm je 0x10d032ad
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x24]
  __asm call eax
  __asm test al, al
  __asm jne 0x10d032ad
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
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
    ((SCVtbl_2_0*)(piVar1))->v();
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

__declspec(naked) void FUN_10d04b90(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2099
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d04bc0; body size 53 bytes.
#line 1 "ENTRY_10d04bc0"

__declspec(naked) void FUN_10d04bc0(void)

{
  __asm push esi
  __asm call LAB_1003d479
  __asm push offset LAB_11882ff0
  __asm test al, al
  __asm je 0x10d04bd6
  __asm push 0x20be
  __asm jmp 0x10d04bdb
  __asm push 0x20bd
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10d04e30; body size 35 bytes.
#line 1 "ENTRY_10d04e30"

__declspec(naked) void FUN_10d04e30(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x187
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d04e60; body size 23 bytes.
#line 1 "ENTRY_10d04e60"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d04e60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SwfStr *)(param_1 + -0xbc));
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10d04ee0; body size 23 bytes.
#line 1 "ENTRY_10d04ee0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d04ee0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SwfStr *)(param_1 + -0xa0));
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

__declspec(naked) void FUN_10d05e30(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_10049288
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x90]
  __asm call eax
  __asm test al, al
  __asm jne 0x10d05e56
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x94]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d05f30; body size 46 bytes.
#line 1 "ENTRY_10d05f30"

__declspec(naked) void FUN_10d05f30(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm lea eax, [esi - 0x94]
  __asm mov byte ptr [esi - 0x54], 1
  __asm push eax
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880164
  __asm call LAB_1005273e
  __asm lea ecx, [esi - 0x8c]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10d05f80; body size 35 bytes.
#line 1 "ENTRY_10d05f80"

void __fastcall FUN_10d05f80(int param_1)

{
  ((SCVtbl_89_0*)((int *)(param_1 + -0x90)))->v();
  ((SCVtbl_68_1*)((int *)(param_1 + -0x90)))->v((int)(0));
  return;
}


// Reference entry 10d085c0; body size 41 bytes.
#line 1 "ENTRY_10d085c0"

__declspec(naked) void FUN_10d085c0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d085e3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d09f30(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d09f50; body size 19 bytes.
#line 1 "ENTRY_10d09f50"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d09f50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
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

void  __thiscall Recovered_Bulk::m_FUN_10d09f90(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 10d0a1e0; body size 19 bytes.
#line 1 "ENTRY_10d0a1e0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d0a1e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d0a200; body size 19 bytes.
#line 1 "ENTRY_10d0a200"

__declspec(naked) void FUN_10d0a200(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11925180
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
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

__declspec(naked) void FUN_10d0b910(void)

{
  __asm mov ecx, dword ptr [ecx + 0x14c]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d0b926
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10d0f480(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_10049288
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0x90]
  __asm call eax
  __asm test al, al
  __asm jne 0x10d0f4a6
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x94]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d113e0; body size 23 bytes.
#line 1 "ENTRY_10d113e0"

__declspec(naked) void FUN_10d113e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10d113f4
  __asm mov dword ptr [esp + 4], eax
  __asm add ecx, 0x18
  __asm jmp LAB_100373d5
  __asm ret 4
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_1_0*)(param_2))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10d130b0; body size 20 bytes.
#line 1 "ENTRY_10d130b0"

__declspec(naked) void FUN_10d130b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10d130bc
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10d13700; body size 17 bytes.
#line 1 "ENTRY_10d13700"

__declspec(naked) void FUN_10d13700(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10d1370c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
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

__declspec(naked) void FUN_10d13740(void)

{
  __asm mov eax, dword ptr [ecx + 0x94]
  __asm mov edx, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 8]
  __asm mov eax, dword ptr [eax + 0xc]
  __asm sub eax, ecx
  __asm sar eax, 3
  __asm cmp edx, eax
  __asm jb 0x10d13766
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [ecx + edx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d13779
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
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

__declspec(naked) void FUN_10d13cd0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1b0
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d13d50; body size 17 bytes.
#line 1 "ENTRY_10d13d50"

__declspec(naked) void FUN_10d13d50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10d13d5c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d13fd0; body size 19 bytes.
#line 1 "ENTRY_10d13fd0"

__declspec(naked) void FUN_10d13fd0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10d13fde
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10d14070; body size 17 bytes.
#line 1 "ENTRY_10d14070"

__declspec(naked) void FUN_10d14070(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187b0d0
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10d14290; body size 25 bytes.
#line 1 "ENTRY_10d14290"

__declspec(naked) void FUN_10d14290(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x80]
  __asm mov ecx, esi
  __asm call LAB_10052f77
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret
}



// Reference entry 10d15320; body size 19 bytes.
#line 1 "ENTRY_10d15320"

__declspec(naked) void FUN_10d15320(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10d1532e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d15430; body size 41 bytes.
#line 1 "ENTRY_10d15430"

__declspec(naked) void FUN_10d15430(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d15453
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d15470; body size 41 bytes.
#line 1 "ENTRY_10d15470"

__declspec(naked) void FUN_10d15470(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d15493
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10d16980(void)

{
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [edi + 4]
  __asm mov esi, dword ptr [edi]
  __asm cmp esi, ebx
  __asm je 0x10d169aa
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_10003ebd
  __asm add esi, 0x9c
  __asm cmp esi, ebx
  __asm jne 0x10d16990
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm mov dword ptr [edi + 4], esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
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

__declspec(naked) void FUN_10d17d40(void)

{
  __asm cmp byte ptr [ecx + 0x298], 0
  __asm jne 0x10d17d56
  __asm cmp byte ptr [ecx + 0x299], 0
  __asm jne LAB_10007c7a
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10d17e80; body size 47 bytes.
#line 1 "ENTRY_10d17e80"

__declspec(naked) void FUN_10d17e80(void)

{
  __asm cmp byte ptr [ecx + 0x298], 0
  __asm jne 0x10d17ea7
  __asm cmp byte ptr [ecx + 0x299], 0
  __asm je 0x10d17ea7
  __asm cmp dword ptr [esp + 4], 2
  __asm mov eax, 7
  __asm mov ecx, 4
  __asm cmove eax, ecx
  __asm ret 4
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10d18640; body size 37 bytes.
#line 1 "ENTRY_10d18640"

__declspec(naked) void FUN_10d18640(void)

{
  __asm cmp byte ptr [ecx + 0x299], 0
  __asm jne 0x10d18662
  __asm push 1
  __asm push offset LAB_121a5e80
  __asm add ecx, 0x294
  __asm call LAB_10099670
  __asm test al, al
  __asm jne 0x10d18662
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10d18670; body size 44 bytes.
#line 1 "ENTRY_10d18670"

__declspec(naked) void FUN_10d18670(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x27c]
  __asm call LAB_10036af2
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0xfc]
  __asm call eax
  __asm test al, al
  __asm je 0x10d1869a
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x100]
  __asm pop esi
  __asm ret
}



// Reference entry 10d187d0; body size 37 bytes.
#line 1 "ENTRY_10d187d0"

__declspec(naked) void FUN_10d187d0(void)

{
  __asm cmp byte ptr [ecx + 0x299], 0
  __asm jne 0x10d187f2
  __asm push 1
  __asm push offset LAB_121a5e80
  __asm add ecx, 0x294
  __asm call LAB_10099670
  __asm test al, al
  __asm je 0x10d187f2
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10d18800; body size 17 bytes.
#line 1 "ENTRY_10d18800"

__declspec(naked) void FUN_10d18800(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push 1
  __asm push offset LAB_121a5e80
  __asm call LAB_10099670
  __asm ret
}



// Reference entry 10d189f0; body size 25 bytes.
#line 1 "ENTRY_10d189f0"

__declspec(naked) void FUN_10d189f0(void)

{
  __asm cmp byte ptr [ecx + 0x299], 0
  __asm je 0x10d18a06
  __asm cmp byte ptr [ecx + 0x298], 0
  __asm je LAB_1006def3
  __asm mov al, 1
  __asm ret
}



// Reference entry 10d18a10; body size 17 bytes.
#line 1 "ENTRY_10d18a10"

__declspec(naked) void FUN_10d18a10(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187b07c
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10d18a30; body size 53 bytes.
#line 1 "ENTRY_10d18a30"

__declspec(naked) void FUN_10d18a30(void)

{
  __asm cmp dword ptr [ecx + 0x34], 0
  __asm push esi
  __asm sete al
  __asm lea esi, [ecx - 0x268]
  __asm cmp byte ptr [esi + 0x298], al
  __asm je 0x10d18a61
  __asm mov byte ptr [esi + 0x298], al
  __asm mov ecx, esi
  __asm mov eax, dword ptr [esi]
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm push 0
  __asm mov ecx, esi
  __asm call LAB_10055aa1
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d18e50; body size 53 bytes.
#line 1 "ENTRY_10d18e50"

__declspec(naked) void FUN_10d18e50(void)

{
  __asm cmp dword ptr [ecx + 0x34], 0
  __asm push esi
  __asm sete al
  __asm lea esi, [ecx - 0x268]
  __asm cmp byte ptr [esi + 0x298], al
  __asm je 0x10d18e81
  __asm mov byte ptr [esi + 0x298], al
  __asm mov ecx, esi
  __asm mov eax, dword ptr [esi]
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm push 0
  __asm mov ecx, esi
  __asm call LAB_10055aa1
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d19340; body size 32 bytes.
#line 1 "ENTRY_10d19340"

__declspec(naked) void FUN_10d19340(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x5c]
  __asm call eax
  __asm test al, al
  __asm je 0x10d1935c
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push dword ptr [esp + 8]
  __asm call dword ptr [eax + 0x114]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d19370; body size 48 bytes.
#line 1 "ENTRY_10d19370"

__declspec(naked) void FUN_10d19370(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x90]
  __asm lea ecx, [esi + 0x27c]
  __asm call LAB_10036af2
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0xfc]
  __asm call eax
  __asm test al, al
  __asm je 0x10d1939e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x100]
  __asm pop esi
  __asm ret
}



// Reference entry 10d193b0; body size 50 bytes.
#line 1 "ENTRY_10d193b0"

__declspec(naked) void FUN_10d193b0(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x278]
  __asm lea ecx, [esi + 0x27c]
  __asm call LAB_10036af2
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0xfc]
  __asm call eax
  __asm test al, al
  __asm je 0x10d193de
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x100]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d194d0; body size 16 bytes.
#line 1 "ENTRY_10d194d0"

__declspec(naked) void FUN_10d194d0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push 0x191
  __asm call dword ptr [eax + 0x16c]
  __asm mov al, 1
  __asm ret
}



// Reference entry 10d19730; body size 42 bytes.
#line 1 "ENTRY_10d19730"

__declspec(naked) void FUN_10d19730(void)

{
  __asm mov ax, word ptr [esp + 4]
  __asm mov ecx, 0x3ea
  __asm cmp ax, cx
  __asm jne 0x10d19744
  __asm mov al, 1
  __asm ret 8
  __asm mov ecx, 0x403
  __asm cmp cx, ax
  __asm jne 0x10d19755
  __asm cmp dword ptr [esp + 8], 0
  __asm jg 0x10d1973f
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10d197a0; body size 52 bytes.
#line 1 "ENTRY_10d197a0"

void __thiscall Recovered_Bulk::m_FUN_10d197a0(undefined4 param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  thunk_FUN_10221640((int)(param_2),(int)(param_3));
  if (param_1[8] != 0) {
    *(byte*)(param_1 + 0x18) = (byte)((byte)param_3 ^ 1);
    ((SCVtbl_56_1*)(param_1))->v((int)(param_1 + 0x47));
  }
  return;
}


// Reference entry 10d19b20; body size 59 bytes.
#line 1 "ENTRY_10d19b20"

__declspec(naked) void FUN_10d19b20(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10d19b4c
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10d19b43
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10009c64
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d19b70; body size 41 bytes.
#line 1 "ENTRY_10d19b70"

__declspec(naked) void FUN_10d19b70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d19b93
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d19bb0; body size 41 bytes.
#line 1 "ENTRY_10d19bb0"

__declspec(naked) void FUN_10d19bb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d19bd3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d19bf0; body size 41 bytes.
#line 1 "ENTRY_10d19bf0"

__declspec(naked) void FUN_10d19bf0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d19c13
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d19c30; body size 41 bytes.
#line 1 "ENTRY_10d19c30"

__declspec(naked) void FUN_10d19c30(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d19c53
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d19c70; body size 41 bytes.
#line 1 "ENTRY_10d19c70"

__declspec(naked) void FUN_10d19c70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d19c93
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d19cb0; body size 41 bytes.
#line 1 "ENTRY_10d19cb0"

__declspec(naked) void FUN_10d19cb0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d19cd3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d19cf0; body size 24 bytes.
#line 1 "ENTRY_10d19cf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_10d19cf0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d1a530; body size 60 bytes.
#line 1 "ENTRY_10d1a530"

__declspec(naked) void FUN_10d1a530(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_11704550
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10d1a55d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_10d1c3f0(void)

{
  __asm push esi
  __asm push 0
  __asm push offset LAB_12142188
  __asm push offset LAB_1212f648
  __asm push 0
  __asm push dword ptr [ecx + 8]
  __asm call LAB_1148ce17
  __asm mov esi, dword ptr [esp + 0x1c]
  __asm add esp, 0x14
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm je 0x10d1c41b
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d1c4c0; body size 63 bytes.
#line 1 "ENTRY_10d1c4c0"

__declspec(naked) void FUN_10d1c4c0(void)

{
  __asm mov eax, dword ptr [ecx + 0x8c]
  __asm mov edx, dword ptr [ecx + 0x88]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10d1c4e6
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d1c4f9
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10d1c5c0; body size 35 bytes.
#line 1 "ENTRY_10d1c5c0"

__declspec(naked) void FUN_10d1c5c0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1af
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d1ccc0; body size 20 bytes.
#line 1 "ENTRY_10d1ccc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d1ccc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x38));
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

__declspec(naked) void FUN_10d1ce70(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x80]
  __asm mov ecx, esi
  __asm call LAB_1004cd07
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret
}



// Reference entry 10d1cf60; body size 25 bytes.
#line 1 "ENTRY_10d1cf60"

__declspec(naked) void FUN_10d1cf60(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x80]
  __asm mov ecx, esi
  __asm call LAB_1004cd07
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret
}



// Reference entry 10d1d4a0; body size 59 bytes.
#line 1 "ENTRY_10d1d4a0"

__declspec(naked) void FUN_10d1d4a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esi + 4]
  __asm cmp edi, dword ptr [esi + 8]
  __asm je 0x10d1d4cc
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [edi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10d1d4c3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 0xc]
  __asm push edi
  __asm call LAB_10009c64
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d1d940; body size 23 bytes.
#line 1 "ENTRY_10d1d940"

__declspec(naked) void FUN_10d1d940(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10d1d954
  __asm mov dword ptr [esp + 4], eax
  __asm add ecx, 0x18
  __asm jmp LAB_100373d5
  __asm ret 4
}



// Reference entry 10d1e0d0; body size 28 bytes.
#line 1 "ENTRY_10d1e0d0"

void __fastcall FUN_10d1e0d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar1))->v();
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

__declspec(naked) void FUN_10d1e2d0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2ba
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_10d1eb10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm test eax, eax
  __asm je 0x10d1eb24
  __asm push eax
  __asm lea ecx, [esi + 0x18]
  __asm call LAB_100373d5
  __asm cmp dword ptr [esi + 0x20], 0
  __asm jne 0x10d1eb3a
  __asm mov ecx, dword ptr [esi + 0x40]
  __asm lea eax, [esi + 0x38]
  __asm pop esi
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [esp + 4], eax
  __asm jmp dword ptr [edx + 0x18]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d1f920; body size 19 bytes.
#line 1 "ENTRY_10d1f920"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d1f920(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d1f940; body size 19 bytes.
#line 1 "ENTRY_10d1f940"

__declspec(naked) void FUN_10d1f940(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11926aac
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d1f960; body size 21 bytes.
#line 1 "ENTRY_10d1f960"

void  __thiscall Recovered_Bulk::m_FUN_10d1f960(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 10d1f980; body size 21 bytes.
#line 1 "ENTRY_10d1f980"

void  __thiscall Recovered_Bulk::m_FUN_10d1f980(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 10d1fb00; body size 19 bytes.
#line 1 "ENTRY_10d1fb00"

__declspec(naked) void FUN_10d1fb00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11926a88
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d1fb20; body size 19 bytes.
#line 1 "ENTRY_10d1fb20"

__declspec(naked) void FUN_10d1fb20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11926aac
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
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

__declspec(naked) void FUN_10d20520(void)

{
  __asm mov eax, dword ptr [ecx + 0xb8]
  __asm mov edx, dword ptr [ecx + 0xb4]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10d20546
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d20559
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_10d205d0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, edx
  __asm sub eax, 2
  __asm je 0x10d205e4
  __asm mov dword ptr [esp + 4], edx
  __asm jmp LAB_10083721
  __asm mov eax, 4
  __asm ret 4
}



// Reference entry 10d20600; body size 55 bytes.
#line 1 "ENTRY_10d20600"

__declspec(naked) void FUN_10d20600(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, edx
  __asm push esi
  __asm sub eax, 2
  __asm je 0x10d20621
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edx
  __asm push esi
  __asm call LAB_1000845e
  __asm mov eax, esi
  __asm pop esi
  __asm ret 0xc
  __asm mov ecx, dword ptr [esp + 8]
  __asm push offset LAB_11880650
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 0xc
}



// Reference entry 10d20670; body size 20 bytes.
#line 1 "ENTRY_10d20670"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d20670(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x40));
  return (SCStr *)(param_2);
}


// Reference entry 10d20690; body size 53 bytes.
#line 1 "ENTRY_10d20690"

__declspec(naked) void FUN_10d20690(void)

{
  __asm cmp byte ptr [ecx + 0xd0], 0
  __asm push esi
  __asm push offset LAB_11882ff0
  __asm je 0x10d206a6
  __asm push 0x2297
  __asm jmp 0x10d206ab
  __asm push 0x2298
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d21870; body size 20 bytes.
#line 1 "ENTRY_10d21870"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d21870(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x3c));
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

__declspec(naked) void FUN_10d23140(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0xad], 0
  __asm jne 0x10d23150
  __asm xor eax, eax
  __asm pop esi
  __asm ret
  __asm push ebx
  __asm call LAB_1004ec47
  __asm xor ebx, ebx
  __asm mov al, byte ptr [eax + 0x30]
  __asm test al, al
  __asm sete bl
  __asm cmp byte ptr [esi + 0xac], 0
  __asm jne 0x10d23171
  __asm xor ebx, ebx
  __asm test al, al
  __asm sete bl
  __asm inc ebx
  __asm mov ecx, esi
  __asm call LAB_100355df
  __asm sub eax, ebx
  __asm pop ebx
  __asm pop esi
  __asm ret
}



// Reference entry 10d23440; body size 61 bytes.
#line 1 "ENTRY_10d23440"

__declspec(naked) void FUN_10d23440(void)

{
  __asm cmp dword ptr [esp + 4], 0
  __asm push esi
  __asm mov esi, ecx
  __asm je 0x10d23479
  __asm cmp byte ptr [esi + 0x11], 0
  __asm jne 0x10d23479
  __asm mov ecx, dword ptr [esi + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm call eax
  __asm test al, al
  __asm je 0x10d23479
  __asm mov eax, dword ptr [esi - 0x9c]
  __asm lea ecx, [esi - 0x9c]
  __asm pop esi
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d234b0; body size 37 bytes.
#line 1 "ENTRY_10d234b0"

__declspec(naked) void FUN_10d234b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1003b4d5
  __asm mov ecx, dword ptr [esi + 0xbc]
  __asm call LAB_10068caf
  __asm mov ecx, dword ptr [esi + 0xbc]
  __asm pop esi
  __asm test ecx, ecx
  __asm je 0x10d234d4
  __asm mov eax, dword ptr [ecx]
  __asm push 1
  __asm call dword ptr [eax]
  __asm ret
}



// Reference entry 10d24420; body size 57 bytes.
#line 1 "ENTRY_10d24420"

__declspec(naked) void FUN_10d24420(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10d24454
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm push dword ptr [esi + 8]
  __asm mov ecx, ebx
  __asm push edi
  __asm call LAB_10021a5d
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x14
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x10d24433
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}



// Reference entry 10d24470; body size 49 bytes.
#line 1 "ENTRY_10d24470"

__declspec(naked) void FUN_10d24470(void)

{
  __asm sub esp, 0xc
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [esp + 8]
  __asm push edi
  __asm push eax
  __asm mov esi, ecx
  __asm call LAB_1003b3ae
  __asm mov eax, dword ptr [esp + 0x10]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10d24497
  __asm mov ecx, dword ptr [edi]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jae 0x10d24499
  __asm mov eax, dword ptr [esi]
  __asm pop edi
  __asm pop esi
  __asm add esp, 0xc
  __asm ret 4
}



// Reference entry 10d26290; body size 41 bytes.
#line 1 "ENTRY_10d26290"

__declspec(naked) void FUN_10d26290(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d262b3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d26320; body size 48 bytes.
#line 1 "ENTRY_10d26320"

__declspec(naked) void FUN_10d26320(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm mov dword ptr [esi], eax
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10d288d0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x14
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10d28920; body size 19 bytes.
#line 1 "ENTRY_10d28920"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d28920(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d28940; body size 19 bytes.
#line 1 "ENTRY_10d28940"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d28940(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d28960; body size 19 bytes.
#line 1 "ENTRY_10d28960"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d28960(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d28980; body size 19 bytes.
#line 1 "ENTRY_10d28980"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d28980(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d289a0; body size 19 bytes.
#line 1 "ENTRY_10d289a0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d289a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d289c0; body size 19 bytes.
#line 1 "ENTRY_10d289c0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d289c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d289e0; body size 19 bytes.
#line 1 "ENTRY_10d289e0"

__declspec(naked) void FUN_10d289e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11927f04
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d28a00; body size 19 bytes.
#line 1 "ENTRY_10d28a00"

__declspec(naked) void FUN_10d28a00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11927f4c
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
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

void  __thiscall Recovered_Bulk::m_FUN_10d28ae0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 10d28b00; body size 21 bytes.
#line 1 "ENTRY_10d28b00"

void  __thiscall Recovered_Bulk::m_FUN_10d28b00(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 10d28b20; body size 21 bytes.
#line 1 "ENTRY_10d28b20"

void  __thiscall Recovered_Bulk::m_FUN_10d28b20(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 10d29210; body size 19 bytes.
#line 1 "ENTRY_10d29210"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d29210(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d29230; body size 19 bytes.
#line 1 "ENTRY_10d29230"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d29230(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d29250; body size 19 bytes.
#line 1 "ENTRY_10d29250"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d29250(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d29270; body size 19 bytes.
#line 1 "ENTRY_10d29270"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d29270(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d29290; body size 19 bytes.
#line 1 "ENTRY_10d29290"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d29290(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d292b0; body size 19 bytes.
#line 1 "ENTRY_10d292b0"

__declspec(naked) void FUN_10d292b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11927fb8
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d292d0; body size 19 bytes.
#line 1 "ENTRY_10d292d0"

__declspec(naked) void FUN_10d292d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11927f04
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d292f0; body size 19 bytes.
#line 1 "ENTRY_10d292f0"

__declspec(naked) void FUN_10d292f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11927f4c
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
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

__declspec(naked) void FUN_10d29c20(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x18]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d29f40; body size 63 bytes.
#line 1 "ENTRY_10d29f40"

__declspec(naked) void FUN_10d29f40(void)

{
  __asm mov eax, dword ptr [ecx + 0xb4]
  __asm mov edx, dword ptr [ecx + 0xb0]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10d29f66
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d29f79
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d29f90; body size 35 bytes.
#line 1 "ENTRY_10d29f90"

__declspec(naked) void FUN_10d29f90(void)

{
  __asm mov ecx, dword ptr [ecx + 0xb8]
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + eax*8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d29fad
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d29fc0; body size 35 bytes.
#line 1 "ENTRY_10d29fc0"

__declspec(naked) void FUN_10d29fc0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x90]
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + eax*8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d29fdd
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d29ff0; body size 35 bytes.
#line 1 "ENTRY_10d29ff0"

__declspec(naked) void FUN_10d29ff0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x90]
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [ecx + eax*8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d2a00d
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_10d2a180(void)

{
  __asm mov ecx, dword ptr [ecx + 0x38]
  __asm call LAB_10098ea0
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d2a1e0; body size 25 bytes.
#line 1 "ENTRY_10d2a1e0"

__declspec(naked) void FUN_10d2a1e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x38]
  __asm call LAB_10098ea0
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d2a200; body size 25 bytes.
#line 1 "ENTRY_10d2a200"

__declspec(naked) void FUN_10d2a200(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x1c]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d2a220; body size 35 bytes.
#line 1 "ENTRY_10d2a220"

__declspec(naked) void FUN_10d2a220(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1af
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_10d2a8c0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x2060
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d2a8f0; body size 25 bytes.
#line 1 "ENTRY_10d2a8f0"

__declspec(naked) void FUN_10d2a8f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x20]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d2ae00; body size 53 bytes.
#line 1 "ENTRY_10d2ae00"

__declspec(naked) void FUN_10d2ae00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1003b4d5
  __asm mov ecx, dword ptr [esi + 0x8c]
  __asm lea eax, [esi + 0x80]
  __asm push eax
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0x18]
  __asm add esi, 0xb0
  __asm push esi
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_1007b9c2
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10d2be50; body size 23 bytes.
#line 1 "ENTRY_10d2be50"

__declspec(naked) void FUN_10d2be50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10d2be64
  __asm mov dword ptr [esp + 4], eax
  __asm add ecx, 0x18
  __asm jmp LAB_100373d5
  __asm ret 4
}



// Reference entry 10d2be70; body size 23 bytes.
#line 1 "ENTRY_10d2be70"

__declspec(naked) void FUN_10d2be70(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10d2be84
  __asm mov dword ptr [esp + 4], eax
  __asm add ecx, 0x18
  __asm jmp LAB_100373d5
  __asm ret 4
}



// Reference entry 10d2df10; body size 41 bytes.
#line 1 "ENTRY_10d2df10"

__declspec(naked) void FUN_10d2df10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d2df33
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d30a60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d30a80; body size 19 bytes.
#line 1 "ENTRY_10d30a80"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d30a80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d30aa0; body size 19 bytes.
#line 1 "ENTRY_10d30aa0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d30aa0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
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

void  __thiscall Recovered_Bulk::m_FUN_10d30b20(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
}


// Reference entry 10d30b40; body size 27 bytes.
#line 1 "ENTRY_10d30b40"

__declspec(naked) void FUN_10d30b40(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 4]
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d30b70; body size 45 bytes.
#line 1 "ENTRY_10d30b70"

__declspec(naked) void FUN_10d30b70(void)

{
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm call LAB_1001fd9d
  __asm add esp, 4
  __asm test al, al
  __asm je 0x10d30b99
  __asm mov esi, dword ptr [esi + 4]
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d30bb0; body size 27 bytes.
#line 1 "ENTRY_10d30bb0"

__declspec(naked) void FUN_10d30bb0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 4]
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d30c10; body size 19 bytes.
#line 1 "ENTRY_10d30c10"

__declspec(naked) void FUN_10d30c10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11928b8c
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d30c30; body size 19 bytes.
#line 1 "ENTRY_10d30c30"

__declspec(naked) void FUN_10d30c30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11928bd4
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d30c50; body size 19 bytes.
#line 1 "ENTRY_10d30c50"

__declspec(naked) void FUN_10d30c50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_11928bb0
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
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

__declspec(naked) void FUN_10d35680(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm lea edi, [ecx + 0x68]
  __asm mov ecx, esi
  __asm push edi
  __asm call LAB_10036c23
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm mov dword ptr [esi + 4], ecx
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d356b0; body size 30 bytes.
#line 1 "ENTRY_10d356b0"

__declspec(naked) void FUN_10d356b0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm lea edi, [ecx + 0x68]
  __asm mov ecx, esi
  __asm push edi
  __asm call LAB_10036c23
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm mov dword ptr [esi + 4], ecx
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d356e0; body size 30 bytes.
#line 1 "ENTRY_10d356e0"

__declspec(naked) void FUN_10d356e0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm lea edi, [ecx + 0x78]
  __asm mov ecx, esi
  __asm push edi
  __asm call LAB_10036c23
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, esi
  __asm pop edi
  __asm mov dword ptr [esi + 4], ecx
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d35830; body size 23 bytes.
#line 1 "ENTRY_10d35830"

__declspec(naked) void FUN_10d35830(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc0]
  __asm test ecx, ecx
  __asm je 0x10d3583f
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
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

__declspec(naked) void FUN_10d360e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc0]
  __asm test ecx, ecx
  __asm je 0x10d360ef
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
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

__declspec(naked) void FUN_10d370c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc0]
  __asm test ecx, ecx
  __asm je 0x10d370cf
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x14]
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10d370e0; body size 51 bytes.
#line 1 "ENTRY_10d370e0"

__declspec(naked) void FUN_10d370e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x80]
  __asm call eax
  __asm test al, al
  __asm je 0x10d37102
  __asm mov eax, dword ptr [esi + 0xe8]
  __asm sub eax, dword ptr [esi + 0xe4]
  __asm sar eax, 3
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi + 0xdc]
  __asm sub eax, dword ptr [esi + 0xd8]
  __asm sar eax, 3
  __asm pop esi
  __asm ret
}



// Reference entry 10d37d60; body size 20 bytes.
#line 1 "ENTRY_10d37d60"

__declspec(naked) void FUN_10d37d60(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc0]
  __asm test ecx, ecx
  __asm je 0x10d37d6f
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d37fa0; body size 22 bytes.
#line 1 "ENTRY_10d37fa0"

__declspec(naked) void FUN_10d37fa0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc0]
  __asm test ecx, ecx
  __asm je 0x10d37fb1
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10d381f0; body size 40 bytes.
#line 1 "ENTRY_10d381f0"

__declspec(naked) void FUN_10d381f0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi]
  __asm mov eax, dword ptr [eax + 0x80]
  __asm call eax
  __asm test al, al
  __asm je 0x10d38205
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm mov eax, dword ptr [eax + 0xfc]
  __asm call eax
  __asm test al, al
  __asm pop esi
  __asm sete al
  __asm ret
}



// Reference entry 10d38420; body size 39 bytes.
#line 1 "ENTRY_10d38420"

__declspec(naked) void FUN_10d38420(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x88]
  __asm mov ecx, esi
  __asm call LAB_1006ac85
  __asm test al, al
  __asm je 0x10d38445
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret
}



// Reference entry 10d38450; body size 27 bytes.
#line 1 "ENTRY_10d38450"

__declspec(naked) void FUN_10d38450(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x28]
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d38510; body size 30 bytes.
#line 1 "ENTRY_10d38510"

__declspec(naked) void FUN_10d38510(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x98]
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d386f0; body size 30 bytes.
#line 1 "ENTRY_10d386f0"

__declspec(naked) void FUN_10d386f0(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x8c]
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d389c0; body size 62 bytes.
#line 1 "ENTRY_10d389c0"

__declspec(naked) void FUN_10d389c0(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x88]
  __asm mov byte ptr [ecx + 0x7a], 1
  __asm cmp byte ptr [esi + 0x102], 0
  __asm je 0x10d389e9
  __asm cmp byte ptr [esi + 0x101], 0
  __asm je 0x10d389e9
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x100]
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret
}



// Reference entry 10d38a10; body size 39 bytes.
#line 1 "ENTRY_10d38a10"

void __fastcall FUN_10d38a10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCVtbl_64_1*)((int *)(param_1 + -0xbc)))->v((int)(0));
  ((SCVtbl_68_1*)((int *)(param_1 + -0xbc)))->v((int)(0));
  return;
}


// Reference entry 10d38a40; body size 30 bytes.
#line 1 "ENTRY_10d38a40"

__declspec(naked) void FUN_10d38a40(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x8c]
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d38a70; body size 30 bytes.
#line 1 "ENTRY_10d38a70"

__declspec(naked) void FUN_10d38a70(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x8c]
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d38aa0; body size 59 bytes.
#line 1 "ENTRY_10d38aa0"

__declspec(naked) void FUN_10d38aa0(void)

{
  __asm push ebx
  __asm push esi
  __asm lea esi, [ecx - 0x88]
  __asm mov ecx, esi
  __asm call LAB_10063ba1
  __asm mov ecx, esi
  __asm mov bl, al
  __asm call LAB_1006ac85
  __asm mov ecx, esi
  __asm or bl, al
  __asm call LAB_10096cae
  __asm or al, bl
  __asm je 0x10d38ad8
  __asm mov ecx, esi
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 10d39e10; body size 22 bytes.
#line 1 "ENTRY_10d39e10"

void __fastcall FUN_10d39e10(int *param_1)

{
  thunk_FUN_10d38af0();
  ((SCVtbl_68_1*)(param_1))->v((int)(0));
  return;
}


// Reference entry 10d39fa0; body size 24 bytes.
#line 1 "ENTRY_10d39fa0"

__declspec(naked) void FUN_10d39fa0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1001457e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10d3a8f0; body size 22 bytes.
#line 1 "ENTRY_10d3a8f0"

__declspec(naked) void FUN_10d3a8f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0xc0]
  __asm test ecx, ecx
  __asm je 0x10d3a901
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d3ac70; body size 41 bytes.
#line 1 "ENTRY_10d3ac70"

__declspec(naked) void FUN_10d3ac70(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d3ac93
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10d3b670(void)

{
  __asm mov ax, word ptr [esp + 0x14]
  __asm mov word ptr [ecx + 0x20], ax
  __asm mov eax, dword ptr [ecx - 0x80]
  __asm mov byte ptr [ecx + 0x18], 1
  __asm add ecx, -0x80
  __asm push 0
  __asm call dword ptr [eax + 0x114]
  __asm ret 0x14
}



// Reference entry 10d3b6a0; body size 18 bytes.
#line 1 "ENTRY_10d3b6a0"

__declspec(naked) void FUN_10d3b6a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm push dword ptr [esp + 0x14]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x128]
  __asm ret 0x14
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

__declspec(naked) void FUN_10d3c3a0(void)

{
  __asm cmp byte ptr [ecx + 0x84], 0
  __asm je 0x10d3c3b1
  __asm movzx eax, word ptr [ecx + 0xa0]
  __asm ret
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10d3c470; body size 59 bytes.
#line 1 "ENTRY_10d3c470"

__declspec(naked) void FUN_10d3c470(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0x84], 0
  __asm jne 0x10d3c4a3
  __asm call LAB_1000e23c
  __asm mov ecx, dword ptr [esi + 0x90]
  __asm mov edx, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm push 0
  __asm cmovne edx, ecx
  __asm mov ecx, eax
  __asm push edx
  __asm call LAB_1000f669
  __asm mov ecx, eax
  __asm pop esi
  __asm mov edx, dword ptr [eax]
  __asm jmp dword ptr [edx + 0x78]
  __asm mov eax, dword ptr [esi + 0x9c]
  __asm pop esi
  __asm ret
}



// Reference entry 10d3c4f0; body size 30 bytes.
#line 1 "ENTRY_10d3c4f0"

__declspec(naked) void FUN_10d3c4f0(void)

{
  __asm mov eax, dword ptr [ecx + 0x54]
  __asm test eax, eax
  __asm mov ecx, offset LAB_1186d2ee
  __asm cmovne ecx, eax
  __asm push ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d3c520; body size 20 bytes.
#line 1 "ENTRY_10d3c520"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3c520(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x3c));
  return (SCStr *)(param_2);
}


// Reference entry 10d3c540; body size 44 bytes.
#line 1 "ENTRY_10d3c540"

__declspec(naked) void FUN_10d3c540(void)

{
  __asm mov eax, dword ptr [ecx + 0x80]
  __asm test eax, eax
  __asm je 0x10d3c54f
  __asm cmp byte ptr [eax], 0
  __asm jne 0x10d3c55b
  __asm mov eax, dword ptr [ecx + 0x54]
  __asm test eax, eax
  __asm jne 0x10d3c55b
  __asm mov eax, offset LAB_1186d2ee
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d3c580; body size 35 bytes.
#line 1 "ENTRY_10d3c580"

__declspec(naked) void FUN_10d3c580(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1af
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d3c5d0; body size 20 bytes.
#line 1 "ENTRY_10d3c5d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3c5d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x38));
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

__declspec(naked) void FUN_10d3c880(void)

{
  __asm cmp byte ptr [ecx + 0x84], 0
  __asm jne 0x10d3c88c
  __asm mov al, 1
  __asm ret
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x64]
  __asm mov ecx, 0x3e8
  __asm cmp ax, cx
  __asm sete al
  __asm ret
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

__declspec(naked) void FUN_10d3c9b0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1003b4d5
  __asm cmp byte ptr [esi + 0x84], 0
  __asm je 0x10d3c9dd
  __asm push 1
  __asm call LAB_10095c14
  __asm add esp, 4
  __asm lea ecx, [esi + 0x80]
  __asm push ecx
  __asm lea ecx, [eax + 0xc4]
  __asm call LAB_1005ba00
  __asm pop esi
  __asm ret
}



// Reference entry 10d3ccf0; body size 23 bytes.
#line 1 "ENTRY_10d3ccf0"

__declspec(naked) void FUN_10d3ccf0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm je 0x10d3cd04
  __asm mov dword ptr [esp + 4], eax
  __asm add ecx, 0x18
  __asm jmp LAB_100373d5
  __asm ret 4
}



// Reference entry 10d3cd10; body size 59 bytes.
#line 1 "ENTRY_10d3cd10"

__declspec(naked) void FUN_10d3cd10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm test eax, eax
  __asm je 0x10d3cd24
  __asm push eax
  __asm lea ecx, [esi + 0x18]
  __asm call LAB_100373d5
  __asm cmp dword ptr [esi + 0x20], 0
  __asm jne 0x10d3cd47
  __asm push 1
  __asm call LAB_10095c14
  __asm add esp, 4
  __asm lea ecx, [esi + 0x38]
  __asm pop esi
  __asm mov dword ptr [esp + 4], ecx
  __asm lea ecx, [eax + 0xc4]
  __asm jmp LAB_1005ba00
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10d3f250(void)

{
  __asm mov ecx, dword ptr [ecx + 0x28]
  __asm test ecx, ecx
  __asm je 0x10d3f25c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10d3f7a0; body size 17 bytes.
#line 1 "ENTRY_10d3f7a0"

__declspec(naked) void FUN_10d3f7a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x28]
  __asm test ecx, ecx
  __asm je 0x10d3f7ac
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
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

__declspec(naked) void FUN_10d3f800(void)

{
  __asm mov eax, dword ptr [ecx + 0xa0]
  __asm mov edx, dword ptr [ecx + 0x9c]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10d3f826
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d3f839
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d3f860; body size 23 bytes.
#line 1 "ENTRY_10d3f860"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3f860(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xb8));
  return (SCStr *)(param_2);
}


// Reference entry 10d3f880; body size 20 bytes.
#line 1 "ENTRY_10d3f880"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3f880(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10d3f8a0; body size 20 bytes.
#line 1 "ENTRY_10d3f8a0"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3f8a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
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

__declspec(naked) void FUN_10d3fb00(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1af
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
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

__declspec(naked) void FUN_10d3fd00(void)

{
  __asm mov ecx, dword ptr [ecx + 0x28]
  __asm test ecx, ecx
  __asm je 0x10d3fd0c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d3ff40; body size 20 bytes.
#line 1 "ENTRY_10d3ff40"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d3ff40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10d3ff90; body size 19 bytes.
#line 1 "ENTRY_10d3ff90"

__declspec(naked) void FUN_10d3ff90(void)

{
  __asm mov ecx, dword ptr [ecx + 0x28]
  __asm test ecx, ecx
  __asm je 0x10d3ff9e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10d40010; body size 19 bytes.
#line 1 "ENTRY_10d40010"

__declspec(naked) void FUN_10d40010(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10d4001e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d40040; body size 52 bytes.
#line 1 "ENTRY_10d40040"

void __fastcall FUN_10d40040(int param_1)

{
  thunk_FUN_104d98f0();
  if (*(int **)(param_1 + 0xa8) != (int *)((0x0))) {
    ((SCVtbl_5_1*)(*(int **)(param_1 + 0xa8)))->v((int)(*(undefined4 *)(param_1 + 0x90)));
  }
  if (*(int **)(param_1 + 0xb0) != (int *)((0x0))) {
    ((SCVtbl_5_1*)(*(int **)(param_1 + 0xb0)))->v((int)(*(undefined4 *)(param_1 + 0x84)));
  }
  return;
}


// Reference entry 10d40090; body size 37 bytes.
#line 1 "ENTRY_10d40090"

__declspec(naked) void FUN_10d40090(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x8c]
  __asm mov ecx, esi
  __asm call LAB_100357fb
  __asm cmp dword ptr [esp + 8], 0
  __asm je 0x10d400b1
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d40200; body size 52 bytes.
#line 1 "ENTRY_10d40200"

void __fastcall FUN_10d40200(int param_1)

{
  thunk_FUN_104d9cc0();
  if (*(int **)(param_1 + 0xb0) != (int *)((0x0))) {
    ((SCVtbl_6_1*)(*(int **)(param_1 + 0xb0)))->v((int)(*(undefined4 *)(param_1 + 0x84)));
  }
  if (*(int **)(param_1 + 0xa8) != (int *)((0x0))) {
    ((SCVtbl_6_1*)(*(int **)(param_1 + 0xa8)))->v((int)(*(undefined4 *)(param_1 + 0x90)));
  }
  return;
}


// Reference entry 10d40250; body size 34 bytes.
#line 1 "ENTRY_10d40250"

__declspec(naked) void FUN_10d40250(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x80]
  __asm mov ecx, esi
  __asm call LAB_100357fb
  __asm cmp dword ptr [esp + 8], 0
  __asm je 0x10d4026e
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d40290; body size 34 bytes.
#line 1 "ENTRY_10d40290"

__declspec(naked) void FUN_10d40290(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x80]
  __asm mov ecx, esi
  __asm call LAB_100357fb
  __asm cmp dword ptr [esp + 8], 0
  __asm je 0x10d402ae
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d402c0; body size 34 bytes.
#line 1 "ENTRY_10d402c0"

__declspec(naked) void FUN_10d402c0(void)

{
  __asm push esi
  __asm lea esi, [ecx - 0x80]
  __asm mov ecx, esi
  __asm call LAB_100357fb
  __asm cmp dword ptr [esp + 8], 0
  __asm je 0x10d402de
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d422d0; body size 19 bytes.
#line 1 "ENTRY_10d422d0"

__declspec(naked) void FUN_10d422d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x28]
  __asm test ecx, ecx
  __asm je 0x10d422de
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d42420; body size 41 bytes.
#line 1 "ENTRY_10d42420"

__declspec(naked) void FUN_10d42420(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d42443
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d42460; body size 41 bytes.
#line 1 "ENTRY_10d42460"

__declspec(naked) void FUN_10d42460(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d42483
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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

__declspec(naked) void FUN_10d440e0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_118783f0
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10d4410f
  __asm mov eax, dword ptr [esi - 0x80]
  __asm lea ecx, [esi - 0x80]
  __asm call dword ptr [eax + 0x16c]
  __asm mov eax, dword ptr [esi - 0x80]
  __asm lea ecx, [esi - 0x80]
  __asm push 0
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d44fa0; body size 20 bytes.
#line 1 "ENTRY_10d44fa0"

__declspec(naked) void FUN_10d44fa0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d44fac
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10d44fc0; body size 20 bytes.
#line 1 "ENTRY_10d44fc0"

__declspec(naked) void FUN_10d44fc0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm test ecx, ecx
  __asm je 0x10d44fcc
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10d44fe0; body size 20 bytes.
#line 1 "ENTRY_10d44fe0"

__declspec(naked) void FUN_10d44fe0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d44fec
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10d45e50; body size 17 bytes.
#line 1 "ENTRY_10d45e50"

__declspec(naked) void FUN_10d45e50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d45e5c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d45e70; body size 17 bytes.
#line 1 "ENTRY_10d45e70"

__declspec(naked) void FUN_10d45e70(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm test ecx, ecx
  __asm je 0x10d45e7c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d45e90; body size 17 bytes.
#line 1 "ENTRY_10d45e90"

__declspec(naked) void FUN_10d45e90(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d45e9c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d45eb0; body size 63 bytes.
#line 1 "ENTRY_10d45eb0"

__declspec(naked) void FUN_10d45eb0(void)

{
  __asm mov eax, dword ptr [ecx + 0x88]
  __asm mov edx, dword ptr [ecx + 0x84]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 8]
  __asm sar eax, 3
  __asm cmp ecx, eax
  __asm jb 0x10d45ed6
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret 8
  __asm mov ecx, dword ptr [edx + ecx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d45ee9
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
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

__declspec(naked) void FUN_10d460e0(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1ec
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d46110; body size 35 bytes.
#line 1 "ENTRY_10d46110"

__declspec(naked) void FUN_10d46110(void)

{
  __asm push offset LAB_11882ff0
  __asm push 0x1b0
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10d462d0; body size 17 bytes.
#line 1 "ENTRY_10d462d0"

__declspec(naked) void FUN_10d462d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d462dc
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d462f0; body size 17 bytes.
#line 1 "ENTRY_10d462f0"

__declspec(naked) void FUN_10d462f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm test ecx, ecx
  __asm je 0x10d462fc
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d46310; body size 17 bytes.
#line 1 "ENTRY_10d46310"

__declspec(naked) void FUN_10d46310(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d4631c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d46740; body size 20 bytes.
#line 1 "ENTRY_10d46740"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d46740(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10d46760; body size 19 bytes.
#line 1 "ENTRY_10d46760"

__declspec(naked) void FUN_10d46760(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d4676e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10d46780; body size 19 bytes.
#line 1 "ENTRY_10d46780"

__declspec(naked) void FUN_10d46780(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm test ecx, ecx
  __asm je 0x10d4678e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10d467a0; body size 19 bytes.
#line 1 "ENTRY_10d467a0"

__declspec(naked) void FUN_10d467a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d467ae
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10d467f0; body size 17 bytes.
#line 1 "ENTRY_10d467f0"

__declspec(naked) void FUN_10d467f0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187ae7c
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10d46830; body size 60 bytes.
#line 1 "ENTRY_10d46830"

__declspec(naked) void FUN_10d46830(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1005cb17
  __asm mov ecx, dword ptr [esi + 0xb8]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x1c]
  __asm cmp eax, 5
  __asm jne 0x10d46854
  __asm mov ecx, dword ptr [esi + 0xb8]
  __asm pop esi
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x64]
  __asm test eax, eax
  __asm jne 0x10d4686a
  __asm mov ecx, dword ptr [esi + 0xb8]
  __asm lea eax, [esi + 0x80]
  __asm push eax
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0x14]
  __asm pop esi
  __asm ret
}



// Reference entry 10d468e0; body size 37 bytes.
#line 1 "ENTRY_10d468e0"

void __fastcall FUN_10d468e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCVtbl_91_0*)((int *)(param_1 + -0xac)))->v();
  ((SCVtbl_68_1*)((int *)(param_1 + -0xac)))->v((int)(0));
  return;
}


// Reference entry 10d49e60; body size 35 bytes.
#line 1 "ENTRY_10d49e60"

__declspec(naked) void FUN_10d49e60(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm mov byte ptr [esi + 0x40], 1
  __asm push offset LAB_11880164
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013746
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10d49e90; body size 19 bytes.
#line 1 "ENTRY_10d49e90"

__declspec(naked) void FUN_10d49e90(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d49e9e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d49eb0; body size 19 bytes.
#line 1 "ENTRY_10d49eb0"

__declspec(naked) void FUN_10d49eb0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm test ecx, ecx
  __asm je 0x10d49ebe
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d49ed0; body size 19 bytes.
#line 1 "ENTRY_10d49ed0"

__declspec(naked) void FUN_10d49ed0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
  __asm test ecx, ecx
  __asm je 0x10d49ede
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d4a400; body size 41 bytes.
#line 1 "ENTRY_10d4a400"

__declspec(naked) void FUN_10d4a400(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d4a423
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d4a440; body size 41 bytes.
#line 1 "ENTRY_10d4a440"

__declspec(naked) void FUN_10d4a440(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d4a463
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d4a530; body size 41 bytes.
#line 1 "ENTRY_10d4a530"

__declspec(naked) void FUN_10d4a530(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d4a553
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d4a570; body size 41 bytes.
#line 1 "ENTRY_10d4a570"

__declspec(naked) void FUN_10d4a570(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d4a593
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
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
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d4b930; body size 60 bytes.
#line 1 "ENTRY_10d4b930"

__declspec(naked) void FUN_10d4b930(void)

{
  __asm push ebp
  __asm mov ebp, esp
  __asm push -1
  __asm push offset LAB_1170f170
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm je 0x10d4b95d
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm mov esp, ebp
  __asm pop ebp
  __asm ret
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

__declspec(naked) void FUN_10d4d1a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10d4d1bc
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10d4d1d2
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
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
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)&DAT_121a07b0);
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

__declspec(naked) void FUN_10d4f3a0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, edx
  __asm sub eax, 1
  __asm je 0x10d4f3b9
  __asm sub eax, 1
  __asm je 0x10d4f3b9
  __asm mov dword ptr [esp + 4], edx
  __asm jmp LAB_10058cc9
  __asm mov eax, 4
  __asm ret 4
}



// Reference entry 10d4f570; body size 62 bytes.
#line 1 "ENTRY_10d4f570"

__declspec(naked) void FUN_10d4f570(void)

{
  __asm cmp byte ptr [ecx + 0x299], 0
  __asm push esi
  __asm je 0x10d4f58a
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_10047a5f
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
  __asm push offset LAB_11882ff0
  __asm push 0x2292
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d507d0; body size 22 bytes.
#line 1 "ENTRY_10d507d0"

__declspec(naked) void FUN_10d507d0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10d507e3
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm call eax
  __asm test al, al
  __asm jne 0x10d507e3
  __asm ret
  __asm mov al, 1
  __asm ret
}



// Reference entry 10d50800; body size 27 bytes.
#line 1 "ENTRY_10d50800"

__declspec(naked) void FUN_10d50800(void)

{
  __asm mov ecx, dword ptr [ecx + 0x288]
  __asm test ecx, ecx
  __asm je 0x10d50818
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm call eax
  __asm test al, al
  __asm je 0x10d50818
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10d50d00; body size 56 bytes.
#line 1 "ENTRY_10d50d00"

__declspec(naked) void FUN_10d50d00(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 0x288]
  __asm test ecx, ecx
  __asm jne 0x10d50d17
  __asm mov ecx, dword ptr [esi + 0x290]
  __asm test ecx, ecx
  __asm je 0x10d50d22
  __asm mov eax, dword ptr [ecx + 8]
  __asm add ecx, 8
  __asm push 0
  __asm call dword ptr [eax + 0x14]
  __asm push dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm mov byte ptr [esi + 0x298], 0
  __asm call LAB_100414cf
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d515e0; body size 39 bytes.
#line 1 "ENTRY_10d515e0"

__declspec(naked) void FUN_10d515e0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm call LAB_10073d53
  __asm mov ecx, dword ptr [esi + 0x288]
  __asm pop esi
  __asm test ecx, ecx
  __asm je 0x10d51604
  __asm mov eax, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp dword ptr [eax + 0x2c]
  __asm ret 4
}



// Reference entry 10d51ab0; body size 17 bytes.
#line 1 "ENTRY_10d51ab0"

__declspec(naked) void FUN_10d51ab0(void)

{
  __asm cmp byte ptr [ecx + 0x280], 0
  __asm jne 0x10d51abc
  __asm xor eax, eax
  __asm ret
  __asm jmp LAB_10007c7a
}



// Reference entry 10d51bf0; body size 62 bytes.
#line 1 "ENTRY_10d51bf0"

__declspec(naked) void FUN_10d51bf0(void)

{
  __asm cmp byte ptr [ecx + 0x280], 0
  __asm push esi
  __asm jne 0x10d51c1e
  __asm push offset LAB_11882ff0
  __asm push 0x229d
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm call LAB_10047a5f
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d53b70; body size 33 bytes.
#line 1 "ENTRY_10d53b70"

__declspec(naked) void FUN_10d53b70(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm push edi
  __asm mov edi, dword ptr [ecx + 4]
  __asm cmp esi, edi
  __asm je 0x10d53b8e
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm call LAB_1005fec5
  __asm add esi, 0x30
  __asm cmp esi, edi
  __asm jne 0x10d53b80
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10d540a0; body size 37 bytes.
#line 1 "ENTRY_10d540a0"

__declspec(naked) void FUN_10d540a0(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_11878f88
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10d540c1
  __asm mov ecx, dword ptr [esi]
  __asm push 0
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 8
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

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d54390(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d543b0; body size 19 bytes.
#line 1 "ENTRY_10d543b0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d543b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 10d543d0; body size 21 bytes.
#line 1 "ENTRY_10d543d0"

void  __thiscall Recovered_Bulk::m_FUN_10d543d0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
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

__declspec(naked) void FUN_10d54410(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp esi, edi
  __asm je 0x10d5442e
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_1005fec5
  __asm add esi, 0x30
  __asm cmp esi, edi
  __asm jne 0x10d54420
  __asm pop edi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d54440; body size 38 bytes.
#line 1 "ENTRY_10d54440"

__declspec(naked) void FUN_10d54440(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm push offset LAB_11878f88
  __asm call LAB_1008ca83
  __asm test al, al
  __asm je 0x10d54462
  __asm mov ecx, dword ptr [esi + 4]
  __asm push 0
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x110]
  __asm pop esi
  __asm ret 8
}



// Reference entry 10d545a0; body size 19 bytes.
#line 1 "ENTRY_10d545a0"

__declspec(naked) void FUN_10d545a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_1192bf18
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d545c0; body size 19 bytes.
#line 1 "ENTRY_10d545c0"

__declspec(naked) void FUN_10d545c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_1192bf3c
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d54a10; body size 46 bytes.
#line 1 "ENTRY_10d54a10"

__declspec(naked) void FUN_10d54a10(void)

{
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [edi + 4]
  __asm mov esi, dword ptr [edi]
  __asm cmp esi, ebx
  __asm je 0x10d54a37
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_1005fec5
  __asm add esi, 0x30
  __asm cmp esi, ebx
  __asm jne 0x10d54a20
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
  __asm mov dword ptr [edi + 4], esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret
}



// Reference entry 10d54a50; body size 59 bytes.
#line 1 "ENTRY_10d54a50"

__declspec(naked) void FUN_10d54a50(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 4
  __asm cmp ecx, 0x1000
  __asm jb 0x10d54a78
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10d54a85
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
}



// Reference entry 10d54d40; body size 20 bytes.
#line 1 "ENTRY_10d54d40"

__declspec(naked) void FUN_10d54d40(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm test ecx, ecx
  __asm je 0x10d54d4c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x38]
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10d553a0; body size 17 bytes.
#line 1 "ENTRY_10d553a0"

__declspec(naked) void FUN_10d553a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm test ecx, ecx
  __asm je 0x10d553ac
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x18]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d55450; body size 23 bytes.
#line 1 "ENTRY_10d55450"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d55450(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xbc));
  return (SCStr *)(param_2);
}


// Reference entry 10d554c0; body size 28 bytes.
#line 1 "ENTRY_10d554c0"

__declspec(naked) void FUN_10d554c0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, edx
  __asm sub eax, 2
  __asm je 0x10d554d4
  __asm mov dword ptr [esp + 4], edx
  __asm jmp LAB_10083721
  __asm mov eax, 4
  __asm ret 4
}



// Reference entry 10d554f0; body size 55 bytes.
#line 1 "ENTRY_10d554f0"

__declspec(naked) void FUN_10d554f0(void)

{
  __asm mov edx, dword ptr [esp + 8]
  __asm mov eax, edx
  __asm push esi
  __asm sub eax, 2
  __asm je 0x10d55511
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edx
  __asm push esi
  __asm call LAB_1000845e
  __asm mov eax, esi
  __asm pop esi
  __asm ret 0xc
  __asm mov ecx, dword ptr [esp + 8]
  __asm push offset LAB_11880660
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 0xc
}



// Reference entry 10d55ac0; body size 17 bytes.
#line 1 "ENTRY_10d55ac0"

__declspec(naked) void FUN_10d55ac0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm test ecx, ecx
  __asm je 0x10d55acc
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x3c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d56df0; body size 19 bytes.
#line 1 "ENTRY_10d56df0"

__declspec(naked) void FUN_10d56df0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm test ecx, ecx
  __asm je 0x10d56dfe
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm mov al, 1
  __asm ret 4
}



// Reference entry 10d57050; body size 17 bytes.
#line 1 "ENTRY_10d57050"

__declspec(naked) void FUN_10d57050(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187af24
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10d57bf0; body size 42 bytes.
#line 1 "ENTRY_10d57bf0"

__declspec(naked) void FUN_10d57bf0(void)

{
  __asm mov eax, dword ptr [ecx - 0x94]
  __asm push esi
  __asm lea esi, [ecx - 0x94]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x160]
  __asm mov ecx, esi
  __asm call LAB_1007d46b
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x15c]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d58c00; body size 19 bytes.
#line 1 "ENTRY_10d58c00"

__declspec(naked) void FUN_10d58c00(void)

{
  __asm mov ecx, dword ptr [ecx + 0x20]
  __asm test ecx, ecx
  __asm je 0x10d58c0e
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x28]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d58f10; body size 41 bytes.
#line 1 "ENTRY_10d58f10"

__declspec(naked) void FUN_10d58f10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d58f33
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d59ad0; body size 19 bytes.
#line 1 "ENTRY_10d59ad0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_10d59ad0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
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

__declspec(naked) void FUN_10d59be0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], LAB_1192c1bc
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}



// Reference entry 10d59c40; body size 23 bytes.
#line 1 "ENTRY_10d59c40"

__declspec(naked) void FUN_10d59c40(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d59c54
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0xd8]
  __asm jmp eax
  __asm xor al, al
  __asm ret
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
    ((SCVtbl_2_0*)(piVar1))->v();
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
    ((SCVtbl_2_0*)(piVar1))->v();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10d59e20; body size 21 bytes.
#line 1 "ENTRY_10d59e20"

__declspec(naked) void FUN_10d59e20(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d59e32
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0xc4]
  __asm ret 4
}



// Reference entry 10d59ee0; body size 44 bytes.
#line 1 "ENTRY_10d59ee0"

__declspec(naked) void FUN_10d59ee0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push esi
  __asm test ecx, ecx
  __asm je 0x10d59efe
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 0xe8]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
  __asm call LAB_1008339d
  __asm add esp, 4
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d59f20; body size 23 bytes.
#line 1 "ENTRY_10d59f20"

__declspec(naked) void FUN_10d59f20(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d59f2f
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x50]
  __asm mov eax, 1
  __asm ret 4
}



// Reference entry 10d59f40; body size 18 bytes.
#line 1 "ENTRY_10d59f40"

__declspec(naked) void FUN_10d59f40(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d59f4f
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x54]
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10d5a0c0; body size 18 bytes.
#line 1 "ENTRY_10d5a0c0"

__declspec(naked) void FUN_10d5a0c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a0cf
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x64]
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10d5a1b0; body size 20 bytes.
#line 1 "ENTRY_10d5a1b0"

__declspec(naked) void FUN_10d5a1b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a1bf
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x30]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d5a1e0; body size 21 bytes.
#line 1 "ENTRY_10d5a1e0"

__declspec(naked) void FUN_10d5a1e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a1f2
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0xb8]
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10d5a200; body size 21 bytes.
#line 1 "ENTRY_10d5a200"

__declspec(naked) void FUN_10d5a200(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a212
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0xbc]
  __asm xor eax, eax
  __asm ret
}



// Reference entry 10d5a220; body size 23 bytes.
#line 1 "ENTRY_10d5a220"

__declspec(naked) void FUN_10d5a220(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a22f
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x40]
  __asm mov eax, 7
  __asm ret 4
}



// Reference entry 10d5a240; body size 57 bytes.
#line 1 "ENTRY_10d5a240"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d5a240(SCStr *param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
    ((SCVtbl_14_3*)(*(int **)(param_1 + 0x88)))->v((int)(param_2),(int)(param_3),(int)(param_4));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->int_allocRep("");
  return (SCStr *)(param_2);
}


// Reference entry 10d5a300; body size 20 bytes.
#line 1 "ENTRY_10d5a300"

__declspec(naked) void FUN_10d5a300(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a30f
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x4c]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d5a320; body size 20 bytes.
#line 1 "ENTRY_10d5a320"

__declspec(naked) void FUN_10d5a320(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a32f
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x48]
  __asm xor eax, eax
  __asm ret 4
}



// Reference entry 10d5a340; body size 53 bytes.
#line 1 "ENTRY_10d5a340"

SCStr * __thiscall Recovered_Bulk::m_FUN_10d5a340(SCStr *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x88) != (int *)((0x0))) {
    ((SCVtbl_9_2*)(*(int **)(param_1 + 0x88)))->v((int)(param_2),(int)(param_3));
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
    ((SCVtbl_7_1*)(*(int **)(param_1 + 0x88)))->v((int)(param_2));
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
    ((SCVtbl_57_2*)(*(int **)(param_1 + 0x88)))->v((int)(param_2),(int)(param_3));
    return (SCStr *)(param_2);
  }
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)&DAT_121a07b0);
  *(undefined4*)(param_2 + 4) = (undefined4)(DAT_121a07b4);
  return (SCStr *)(param_2);
}


// Reference entry 10d5a4e0; body size 22 bytes.
#line 1 "ENTRY_10d5a4e0"

__declspec(naked) void FUN_10d5a4e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a4f1
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x44]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d5a700; body size 23 bytes.
#line 1 "ENTRY_10d5a700"

__declspec(naked) void FUN_10d5a700(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a714
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x84]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10d5a720; body size 23 bytes.
#line 1 "ENTRY_10d5a720"

__declspec(naked) void FUN_10d5a720(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a734
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x90]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10d5a740; body size 20 bytes.
#line 1 "ENTRY_10d5a740"

__declspec(naked) void FUN_10d5a740(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a751
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x6c]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10d5a760; body size 20 bytes.
#line 1 "ENTRY_10d5a760"

__declspec(naked) void FUN_10d5a760(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a771
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x60]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10d5a780; body size 48 bytes.
#line 1 "ENTRY_10d5a780"

__declspec(naked) void FUN_10d5a780(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_10045354
  __asm test al, al
  __asm jne 0x10d5a7ac
  __asm mov ecx, esi
  __asm call LAB_1002614d
  __asm test al, al
  __asm jne 0x10d5a7ac
  __asm mov ecx, dword ptr [esi + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a7ac
  __asm mov eax, dword ptr [ecx]
  __asm pop esi
  __asm mov eax, dword ptr [eax + 0x80]
  __asm jmp eax
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10d5a7e0; body size 22 bytes.
#line 1 "ENTRY_10d5a7e0"

__declspec(naked) void FUN_10d5a7e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a7f1
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x20]
  __asm jmp eax
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10d5a800; body size 20 bytes.
#line 1 "ENTRY_10d5a800"

__declspec(naked) void FUN_10d5a800(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a811
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x70]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10d5a910; body size 49 bytes.
#line 1 "ENTRY_10d5a910"

__declspec(naked) void FUN_10d5a910(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm call LAB_1002614d
  __asm test al, al
  __asm jne 0x10d5a93d
  __asm mov ecx, esi
  __asm call LAB_10045354
  __asm test al, al
  __asm jne 0x10d5a93d
  __asm mov ecx, dword ptr [esi + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5a939
  __asm mov eax, dword ptr [ecx]
  __asm pop esi
  __asm mov eax, dword ptr [eax + 0x5c]
  __asm jmp eax
  __asm xor al, al
  __asm pop esi
  __asm ret
  __asm mov al, 1
  __asm pop esi
  __asm ret
}



// Reference entry 10d5a960; body size 22 bytes.
#line 1 "ENTRY_10d5a960"

__declspec(naked) void FUN_10d5a960(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10d5a973
  __asm mov eax, dword ptr [ecx + 0x80]
  __asm sub ecx, -0x80
  __asm jmp dword ptr [eax + 0x14]
  __asm ret 8
}



// Reference entry 10d5aa70; body size 23 bytes.
#line 1 "ENTRY_10d5aa70"

__declspec(naked) void FUN_10d5aa70(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5aa84
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x94]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10d5add0; body size 21 bytes.
#line 1 "ENTRY_10d5add0"

__declspec(naked) void FUN_10d5add0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5ade2
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0xdc]
  __asm ret 4
}



// Reference entry 10d5adf0; body size 21 bytes.
#line 1 "ENTRY_10d5adf0"

__declspec(naked) void FUN_10d5adf0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5ae02
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0xc8]
  __asm ret 4
}



// Reference entry 10d5ae10; body size 23 bytes.
#line 1 "ENTRY_10d5ae10"

__declspec(naked) void FUN_10d5ae10(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5ae24
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0xcc]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10d5ae30; body size 23 bytes.
#line 1 "ENTRY_10d5ae30"

__declspec(naked) void FUN_10d5ae30(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5ae44
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0xd0]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10d5b120; body size 23 bytes.
#line 1 "ENTRY_10d5b120"

__declspec(naked) void FUN_10d5b120(void)

{
  __asm mov ecx, dword ptr [ecx + 0x88]
  __asm test ecx, ecx
  __asm je 0x10d5b134
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0xc0]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}



// Reference entry 10d5db10; body size 41 bytes.
#line 1 "ENTRY_10d5db10"

__declspec(naked) void FUN_10d5db10(void)

{
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10d5db33
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10d5e1b0; body size 33 bytes.
#line 1 "ENTRY_10d5e1b0"

__declspec(naked) void FUN_10d5e1b0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm push edi
  __asm mov edi, dword ptr [ecx + 4]
  __asm cmp esi, edi
  __asm je 0x10d5e1ce
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, esi
  __asm call LAB_1002cd45
  __asm add esi, 0x20
  __asm cmp esi, edi
  __asm jne 0x10d5e1c0
  __asm pop edi
  __asm pop esi
  __asm ret
}


